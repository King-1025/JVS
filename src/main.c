//--------------------------------------------------------------------------------------
// main.c
// Jovision Client SDK接口测试程序
//--------------------------------------------------------------------------------------
#define bool _Bool

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define  LINUX 1
#include "jcsdk.h"

#define FALSE 0
#define TRUE 1

JCLink_t g_nLinkID = -1;

void funLanSearchCallback(PJCLanDeviceInfo pDevice)
{
	if(pDevice != NULL)
	{	
		const char *str = NULL;
		switch(pDevice->nDeviceType)
		{
		case JCDT_Card:
			str = "Card";
			break;

		case JCDT_DVR:
			str = "DVR";
			break;

		case JCDT_IPC:
			str = "IPC";
			break;

		case JCDT_NVR:
			str = "NVR";
			break;

		default:
			str = "Unknown";
			break;
		}
		printf("[%s],ip:[%s:%d], yst:%s, dev_name:%s, dev_type:%s, dev_channel:%d\n",__FUNCTION__,
			pDevice->szIP, pDevice->nPort, pDevice->szCloudSEE, pDevice->szDeviceName, str, pDevice->nChannelNum);
	}
}


void funJCEventCallback(JCLink_t nLinkID, JCEventType etType, DWORD_PTR pData1, DWORD_PTR pData2, LPVOID pUserData)
{
	switch(etType)
	{
	case JCET_ConnectOK://连接成功
		printf("[%s] linkID_%d, type:%d connect ok\n", __FUNCTION__, nLinkID, etType);
		break;

	case JCET_UserAccessError: //用户验证失败
		printf("[%s] linkID_%d, type:%d user access error\n", __FUNCTION__, nLinkID, etType);
		break;

	case JCET_NoChannel://主控通道未开启
		printf("[%s] linkID_%d, type:%d no channel\n", __FUNCTION__, nLinkID, etType);
		break;

	case JCET_ConTypeError://连接类型错误
		printf("[%s] linkID_%d, type:%d connect type error\n", __FUNCTION__, nLinkID, etType);
		break;

	case JCET_ConCountLimit://超过主控连接最大数
		printf("[%s] linkID_%d, type:%d connect count limit\n", __FUNCTION__, nLinkID, etType);
		break;

	case JCET_ConTimeout://连接超时
		printf("[%s] linkID_%d, type:%d connect timeout\n", __FUNCTION__, nLinkID, etType);
		break;

	case JCET_DisconOK://断开连接成功
		printf("[%s] linkID_%d, type:%d disconnect ok\n", __FUNCTION__, nLinkID, etType);
		break;

	case JCET_ConAbout://连接异常断开
		printf("[%s] linkID_%d, type:%d connect abnormally disconnected\n", __FUNCTION__, nLinkID, etType);
		break;

	case JCET_ServiceStop://主控断开连接
		printf("[%s] linkID_%d, type:%d master disconnected\n", __FUNCTION__, nLinkID, etType);
		break;
	
	case JCET_GetFileListOK://获取远程录像成功
		{
			PJCRecFileInfo pInfos = (PJCRecFileInfo)pData1;
			int nCount = *((int*)&pData2);

			for(int i = 0; i < nCount; ++i)
			{
				printf("[%s] linkID_%d, type:%d, get rec file, count:%d, filename:%s\n", __FUNCTION__, nLinkID, etType, i, pInfos[i].szFilename);
			}
		}
		break;

	case JCET_GetFileListError://获取远程录像失败
		{
			printf("[%s] linkID_%d, type:%d, get rec file error\n", __FUNCTION__, nLinkID, etType);
		}
		break;

	default:
		return;
		break;
	}
}

void funJCDataCallback(JCLink_t nLinkID, PJCStreamFrame pFrame, LPVOID pUserData)
{
	char acBuffer[64];
	printf("[%s] Type:%d Size:%d %2.2X %2.2X %2.2X %2.2X %2.2X\n", __FUNCTION__, pFrame->sType, pFrame->nFrameSize,
		pFrame->pFrameData[0], pFrame->pFrameData[1], pFrame->pFrameData[2], pFrame->pFrameData[3], pFrame->pFrameData[4]);
}

int testConnect(char *pIp, int nPort, int nChannel, char *pUser, char *pPassword)
{
	int linkid = JCSDK_Connect(pIp, nPort, nChannel, pUser, pPassword, FALSE, NULL);
	if(linkid < 0)
	{
		printf("[%s] Connect failed....\n", __FUNCTION__);
		return FALSE;
	}
	return linkid;
}

void testDisConnect(void)
{
	printf("[%s] g_nLinkID:%d....\n", __FUNCTION__, g_nLinkID);
	if(g_nLinkID >= 0)
		JCSDK_Disconnect(g_nLinkID);
	g_nLinkID = -1;
}

int testSearch(void)
{
	if(!JCSDK_LanSeartchDevice(JCDT_All, 5000))
	{
		printf("[%s] Lan search device failed....\n", __FUNCTION__);
		return FALSE;
	}
	return TRUE;
}

int testIndexRec(void)
{
	UINT dwMsgID = 0;
	JCDateBlock data;
	time_t t;
	time(&t);
	struct tm *tm_now;
	tm_now = localtime(&t);
	data.nBeginYear = data.nEndYear = tm_now->tm_year + 1900;
	data.nBeginMonth = data.nEndMonth = tm_now->tm_mon + 1;
	data.nBeginDay = data.nEndDay = tm_now->tm_mday;

	if(JCSDK_GetRemoteRecFileList(g_nLinkID, &data))
	{
		return 1;
	}
	else
	{
		printf("[%s] get remote rec file failed....\n", __FUNCTION__);
		return 0;
	}
}

void testPlayRecFile()
{
	JCSDK_RemotePlay(g_nLinkID, 0);
}

void testControlRecFile(JCRemotePlayCommand nCmd)
{
	JCSDK_RemotePlayControl(g_nLinkID, nCmd, 0);
}

void testEnableVedioData(bool isEnable)
{
	JCSDK_EnableVideoData(g_nLinkID, isEnable);
}

int InitSDK(void)
{
	if(!JCSDK_InitSDK(-1, NULL))
	{
		printf("[%s] Init SDK failed....\n", __FUNCTION__);
		return FALSE;
	}
	JCSDK_RegisterCallback(funJCEventCallback, funJCDataCallback, NULL, NULL, funLanSearchCallback);
	return TRUE;
}


int main(int argc, char* argv[])
{
	int i = 0;
	
	printf("\nUsage: jcsdk demo:\n");
	printf("    Format:  ./sdk_demo [ip] [port] [channel_id] [user] [password]\n");
	printf("    Example: ./sdk_demo 172.16.42.253 9101 1 abc 123\n\n");
	if(argc < 6)
	{
		printf("Usage: jcsdk demo input param error!\n\n");
		return 0;
	}
	if(!InitSDK())
	{
		printf("[%s] Init SDK failed....\n", __FUNCTION__);
		return 0;
	}

	char *ip = argv[1];
	int port = atoi(argv[2]);
	int channel = atoi(argv[3]);
	char *user = argv[4];
	char *password = argv[5];
	while(1)
	{
		printf("\n\nYou can do the following:\n");
		printf("    1. Connect device\n");
		printf("    2. Disconnect device\n");
		printf("    3. Enable vedio data\n");
		printf("    4. Search devices\n");
		printf("    5. Index rec file\n");
		printf("    6. Play rec file\n");
		printf("    7. Pause rec file\n");
		printf("    8. Go on play rec file\n");
		printf("Please input:\n");

		scanf("%d", &i);
		switch (i)
		{
		case 1:
			{
				g_nLinkID = testConnect(ip, port, channel, user, password);
				if(g_nLinkID < 0)
				{
					JCSDK_ReleaseSDK();
					return 0;
				}
			}
			break;
		case 2:
			{
				testDisConnect();
			}
			break;
		case 3:
			{
				testEnableVedioData(FALSE);
			}
			break;
		case 4:
			{
				if(!testSearch())
				{
					JCSDK_ReleaseSDK();
					return 0;
				}
			}
			break;
		case 5:
			{
				if(!testIndexRec())
				{
					printf("[%s] testIndexRec failed....\n", __FUNCTION__);
					return 0;
				}
			}
			break;
		case 6:
			{
				testPlayRecFile();
			}
			break;
		case 7:
			{
				testControlRecFile(JCRPC_Pause);
			}
			break;
		case 8:
			{
				testControlRecFile(JCRPC_Play);
			}
			break;
		default:
			break;
		}
	}

	return 0;
}

