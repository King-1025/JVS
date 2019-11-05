#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define  LINUX 1
#include "jcsdk.h"

#define FALSE 0
#define TRUE 1
#define bool _Bool

JCLink_t g_nLinkID = -1;

char *ip;
int port;
int channel;
char *user;
char *password;

int main(int argc, char* argv[])
{
       int InitSDK(void);
       void testEnableVedioData(bool isEnable);
       int testConnect(char *pIp, int nPort, int nChannel, char *pUser, char *pPassword);
       void testDisConnect(void);

        printf("Usage: %s [ip] [port] [channel_id] [user] [password]\n",argv[0]);
	printf("Example: %s 172.16.42.253 9101 1 abc 123\n\n",argv[0]);

	if(argc < 6)
	{
		printf("you must pass 6 arguments in this program.\n\n");
		return 0;
	}

	if(!InitSDK())
	{
	      printf("[%s] Init SDK failed....\n", __FUNCTION__);
	      return 0;
	}

	ip = argv[1];
	port = atoi(argv[2]);
	channel = atoi(argv[3]);
	user = argv[4];
	password = argv[5];

//	sleep(3);

	g_nLinkID = testConnect(ip, port, channel, user, password);
	if(g_nLinkID < 0)
	{
   	    JCSDK_ReleaseSDK();
	    return 0;
	}

//	testEnableVedioData(FALSE);

        int i=-1;
        while(TRUE){
	   printf("input i[-1]:");
	   scanf("%d",&i);
	   if(i>0) break;
	}
        
	testDisConnect();
        JCSDK_ReleaseSDK();

	return 0;
}

int InitSDK(void)
{
       void funJCEventCallback(JCLink_t nLinkID, JCEventType etType, DWORD_PTR pData1, DWORD_PTR pData2, LPVOID pUserData);
       void funJCDataCallback(JCLink_t nLinkID, PJCStreamFrame pFrame, LPVOID pUserData);

	if(!JCSDK_InitSDK(-1, NULL))
	{
		printf("[%s] Init SDK failed....\n", __FUNCTION__);
		return FALSE;
	}
	JCSDK_RegisterCallback(funJCEventCallback, funJCDataCallback, NULL, NULL, NULL);
	return TRUE;
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
	      g_nLinkID = testConnect(ip, port, channel, user, password);
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

void testEnableVedioData(bool isEnable)
{
	JCSDK_EnableVideoData(g_nLinkID, isEnable);
}

int testConnect(char *pIp, int nPort, int nChannel, char *pUser, char *pPassword)
{
	int linkid = JCSDK_Connect(pIp, nPort, nChannel, pUser, pPassword,TRUE, NULL);
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
	printf("called testDisConnect() is ok!\n");
}
