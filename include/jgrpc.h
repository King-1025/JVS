//---------------------------------------------------------------------------
// jgrpc.h
//---------------------------------------------------------------------------

#pragma once

#include "jcsdk.h"

#ifdef JCSDK_EXPORTS
#  include "grpc/jvbu.h"
#else
	typedef int GBOOL;
#endif


//../../../doc/jgrpc/account.json
#if 1

//account_get_users
#  if 1

//--- account_get_users definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_account_get_users PARAM_REQ_sdk_account_get_users;
typedef PARAM_RESP_jvbu_account_get_users PARAM_RESP_sdk_account_get_users;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_account_get_users;

typedef struct{
	int users_cnt;
	struct{
		char *name; //username
		char *level; //admin,operator,user,anonymous,extended
		char *description; //This is Adiministrator
	} *users;
} PARAM_RESP_sdk_account_get_users;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_account_get_users(JCLink_t nLinkID, PARAM_REQ_sdk_account_get_users *req, PARAM_RESP_sdk_account_get_users *resp);
#  endif

//account_add_user
#  if 1

//--- account_add_user definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_account_add_user PARAM_REQ_sdk_account_add_user;
typedef PARAM_RESP_jvbu_account_add_user PARAM_RESP_sdk_account_add_user;
#    else

typedef struct{
	char *name; //username
	char *passwd; //123456
	char *level; //admin,operator,user,anonymous,extended
	char *description; //This is Adiministrator
} PARAM_REQ_sdk_account_add_user;

typedef struct{
	int idle;
} PARAM_RESP_sdk_account_add_user;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_account_add_user(JCLink_t nLinkID, PARAM_REQ_sdk_account_add_user *req, PARAM_RESP_sdk_account_add_user *resp);
#  endif

//account_del_user
#  if 1

//--- account_del_user definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_account_del_user PARAM_REQ_sdk_account_del_user;
typedef PARAM_RESP_jvbu_account_del_user PARAM_RESP_sdk_account_del_user;
#    else

typedef struct{
	char *name; //username
} PARAM_REQ_sdk_account_del_user;

typedef struct{
	int idle;
} PARAM_RESP_sdk_account_del_user;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_account_del_user(JCLink_t nLinkID, PARAM_REQ_sdk_account_del_user *req, PARAM_RESP_sdk_account_del_user *resp);
#  endif

//account_modify_user
#  if 1

//--- account_modify_user definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_account_modify_user PARAM_REQ_sdk_account_modify_user;
typedef PARAM_RESP_jvbu_account_modify_user PARAM_RESP_sdk_account_modify_user;
#    else

typedef struct{
	char *name; //username
	char *passwd; //123456
	char *level; //admin,operator,user,anonymous,extended
	char *description; //This is Adiministrator
} PARAM_REQ_sdk_account_modify_user;

typedef struct{
	int idle;
} PARAM_RESP_sdk_account_modify_user;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_account_modify_user(JCLink_t nLinkID, PARAM_REQ_sdk_account_modify_user *req, PARAM_RESP_sdk_account_modify_user *resp);
#  endif

//account_login
#  if 1

//--- account_login definition ----
/*
grpc supply login ,but some device may need login cmd.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_account_login PARAM_REQ_sdk_account_login;
typedef PARAM_RESP_jvbu_account_login PARAM_RESP_sdk_account_login;
#    else

typedef struct{
	char *username; //abc
	char *password; //123
} PARAM_REQ_sdk_account_login;

typedef struct{
	int passwdRule;
	int passwdLevel;
} PARAM_RESP_sdk_account_login;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_account_login(JCLink_t nLinkID, PARAM_REQ_sdk_account_login *req, PARAM_RESP_sdk_account_login *resp);
#  endif

//account_login_force
#  if 1

//--- account_login_force definition ----
/*
if client force login, server must disconnect other clients.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_account_login_force PARAM_REQ_sdk_account_login_force;
typedef PARAM_RESP_jvbu_account_login_force PARAM_RESP_sdk_account_login_force;
#    else

typedef struct{
	char *username; //abc
	char *password; //123
} PARAM_REQ_sdk_account_login_force;

typedef struct{
	int idle;
} PARAM_RESP_sdk_account_login_force;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_account_login_force(JCLink_t nLinkID, PARAM_REQ_sdk_account_login_force *req, PARAM_RESP_sdk_account_login_force *resp);
#  endif

//iplist_get
#  if 1

//--- iplist_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_iplist_get PARAM_REQ_sdk_iplist_get;
typedef PARAM_RESP_jvbu_iplist_get PARAM_RESP_sdk_iplist_get;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_iplist_get;

typedef struct{
	int ipinfo_cnt;
	struct{
		int type;
		char *iphead; //192.168.0.1
		char *iptail; //192.168.0.10
	} *ipinfo;
} PARAM_RESP_sdk_iplist_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_iplist_get(JCLink_t nLinkID, PARAM_REQ_sdk_iplist_get *req, PARAM_RESP_sdk_iplist_get *resp);
#  endif

//iplist_limit_type_set
#  if 1

//--- iplist_limit_type_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_iplist_limit_type_set PARAM_REQ_sdk_iplist_limit_type_set;
typedef PARAM_RESP_jvbu_iplist_limit_type_set PARAM_RESP_sdk_iplist_limit_type_set;
#    else

typedef struct{
	int limittype;
} PARAM_REQ_sdk_iplist_limit_type_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_iplist_limit_type_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_iplist_limit_type_set(JCLink_t nLinkID, PARAM_REQ_sdk_iplist_limit_type_set *req, PARAM_RESP_sdk_iplist_limit_type_set *resp);
#  endif

//iplist_limit_type_get
#  if 1

//--- iplist_limit_type_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_iplist_limit_type_get PARAM_REQ_sdk_iplist_limit_type_get;
typedef PARAM_RESP_jvbu_iplist_limit_type_get PARAM_RESP_sdk_iplist_limit_type_get;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_iplist_limit_type_get;

typedef struct{
	int limittype;
} PARAM_RESP_sdk_iplist_limit_type_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_iplist_limit_type_get(JCLink_t nLinkID, PARAM_REQ_sdk_iplist_limit_type_get *req, PARAM_RESP_sdk_iplist_limit_type_get *resp);
#  endif

//iplist_add
#  if 1

//--- iplist_add definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_iplist_add PARAM_REQ_sdk_iplist_add;
typedef PARAM_RESP_jvbu_iplist_add PARAM_RESP_sdk_iplist_add;
#    else

typedef struct{
	int ipinfo_cnt;
	struct{
		int type;
		char *iphead; //192.168.0.1
		char *iptail; //192.168.0.10
	} *ipinfo;
} PARAM_REQ_sdk_iplist_add;

typedef struct{
	int idle;
} PARAM_RESP_sdk_iplist_add;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_iplist_add(JCLink_t nLinkID, PARAM_REQ_sdk_iplist_add *req, PARAM_RESP_sdk_iplist_add *resp);
#  endif

//iplist_delete
#  if 1

//--- iplist_delete definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_iplist_delete PARAM_REQ_sdk_iplist_delete;
typedef PARAM_RESP_jvbu_iplist_delete PARAM_RESP_sdk_iplist_delete;
#    else

typedef struct{
	int type;
	char *iphead; //192.168.0.1
	char *iptail; //192.168.0.10
} PARAM_REQ_sdk_iplist_delete;

typedef struct{
	int idle;
} PARAM_RESP_sdk_iplist_delete;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_iplist_delete(JCLink_t nLinkID, PARAM_REQ_sdk_iplist_delete *req, PARAM_RESP_sdk_iplist_delete *resp);
#  endif

//iplist_clear
#  if 1

//--- iplist_clear definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_iplist_clear PARAM_REQ_sdk_iplist_clear;
typedef PARAM_RESP_jvbu_iplist_clear PARAM_RESP_sdk_iplist_clear;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_iplist_clear;

typedef struct{
	int idle;
} PARAM_RESP_sdk_iplist_clear;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_iplist_clear(JCLink_t nLinkID, PARAM_REQ_sdk_iplist_clear *req, PARAM_RESP_sdk_iplist_clear *resp);
#  endif

#endif


//../../../doc/jgrpc/alarm.json
#if 1

//alarmin_start
#  if 1

//--- alarmin_start definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarmin_start PARAM_REQ_sdk_alarmin_start;
typedef PARAM_RESP_jvbu_alarmin_start PARAM_RESP_sdk_alarmin_start;
#    else

typedef struct{
	int almgroup_id;
	int channelid;
} PARAM_REQ_sdk_alarmin_start;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarmin_start;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarmin_start(JCLink_t nLinkID, PARAM_REQ_sdk_alarmin_start *req, PARAM_RESP_sdk_alarmin_start *resp);
#  endif

//alarmin_stop
#  if 1

//--- alarmin_stop definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarmin_stop PARAM_REQ_sdk_alarmin_stop;
typedef PARAM_RESP_jvbu_alarmin_stop PARAM_RESP_sdk_alarmin_stop;
#    else

typedef struct{
	int almgroup_id;
	int channelid;
} PARAM_REQ_sdk_alarmin_stop;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarmin_stop;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarmin_stop(JCLink_t nLinkID, PARAM_REQ_sdk_alarmin_stop *req, PARAM_RESP_sdk_alarmin_stop *resp);
#  endif

//alarmin_get_param
#  if 1

//--- alarmin_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarmin_get_param PARAM_REQ_sdk_alarmin_get_param;
typedef PARAM_RESP_jvbu_alarmin_get_param PARAM_RESP_sdk_alarmin_get_param;
#    else

typedef struct{
	int almgroup_id;
	int channelid;
} PARAM_REQ_sdk_alarmin_get_param;

typedef struct{
	GBOOL bEnable;
	GBOOL bStarting;
	int nDelay;
	int videoChannel;
	GBOOL bEnableRecord;
	GBOOL bSnapshot;
	int nPreset;
	GBOOL bBuzzing;
	GBOOL bSendtoClient;
	GBOOL bSendEmail;
	GBOOL bSendToAlmServer;
	GBOOL bNormallyClosed;
	int addr;
	int baudrate;
	int u8AlarmNum;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun,EveryDay
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
} PARAM_RESP_sdk_alarmin_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarmin_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_alarmin_get_param *req, PARAM_RESP_sdk_alarmin_get_param *resp);
#  endif

//alarmin_get_all_param
#  if 1

//--- alarmin_get_all_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarmin_get_all_param PARAM_REQ_sdk_alarmin_get_all_param;
typedef PARAM_RESP_jvbu_alarmin_get_all_param PARAM_RESP_sdk_alarmin_get_all_param;
#    else

typedef struct{
	int almgroup_id;
} PARAM_REQ_sdk_alarmin_get_all_param;

typedef struct{
	int all_cnt;
	struct{
		int almgroup_id;
		int channelid;
		GBOOL bEnable;
		GBOOL bStarting;
		int nDelay;
		int videoChannel;
		GBOOL bEnableRecord;
		GBOOL bSnapshot;
		int nPreset;
		GBOOL bBuzzing;
		GBOOL bSendtoClient;
		GBOOL bSendEmail;
		GBOOL bSendToAlmServer;
		int alarmout_cnt;
		struct{
			int almout_id;
			char *type; //unknown,door,pir,smoke,gas,curtain
			GBOOL bNormallyClosed;
		} *alarmout;
		struct{
			GBOOL bNormallyClosed;
			int addr;
			int baudrate;
		} alminParam;
		struct{
			GBOOL bsos;
			GBOOL bAllTime;
			int maxTime;
			int time_cnt;
			struct{
				char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun,EveryDay
				int begin_hour;
				int begin_min;
				int end_hour;
				int end_min;
			} *time;
		} task;
	} *all;
} PARAM_RESP_sdk_alarmin_get_all_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarmin_get_all_param(JCLink_t nLinkID, PARAM_REQ_sdk_alarmin_get_all_param *req, PARAM_RESP_sdk_alarmin_get_all_param *resp);
#  endif

//alarmin_set_param
#  if 1

//--- alarmin_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarmin_set_param PARAM_REQ_sdk_alarmin_set_param;
typedef PARAM_RESP_jvbu_alarmin_set_param PARAM_RESP_sdk_alarmin_set_param;
#    else

typedef struct{
	int almgroup_id;
	int channelid;
	GBOOL bEnable;
	GBOOL bStarting;
	int nDelay;
	int videoChannel;
	GBOOL bEnableRecord;
	GBOOL bSnapshot;
	int nPreset;
	GBOOL bBuzzing;
	GBOOL bSendtoClient;
	GBOOL bSendEmail;
	GBOOL bSendToAlmServer;
	GBOOL bNormallyClosed;
	int addr;
	int baudrate;
	int u8AlarmNum;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun,EveryDay
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
} PARAM_REQ_sdk_alarmin_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarmin_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarmin_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_alarmin_set_param *req, PARAM_RESP_sdk_alarmin_set_param *resp);
#  endif

//alarmin_set_all_param
#  if 1

//--- alarmin_set_all_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarmin_set_all_param PARAM_REQ_sdk_alarmin_set_all_param;
typedef PARAM_RESP_jvbu_alarmin_set_all_param PARAM_RESP_sdk_alarmin_set_all_param;
#    else

typedef struct{
	int all_cnt;
	struct{
		int almgroup_id;
		int channelid;
		GBOOL bEnable;
		GBOOL bStarting;
		int nDelay;
		int videoChannel;
		GBOOL bEnableRecord;
		GBOOL bSnapshot;
		int nPreset;
		GBOOL bBuzzing;
		GBOOL bSendtoClient;
		GBOOL bSendEmail;
		GBOOL bSendToAlmServer;
		int alarmout_cnt;
		struct{
			int almout_id;
			char *type; //unknown,door,pir,smoke,gas,curtain
			GBOOL bNormallyClosed;
		} *alarmout;
		struct{
			GBOOL bNormallyClosed;
			int addr;
			int baudrate;
		} alminParam;
		struct{
			GBOOL bsos;
			GBOOL bAllTime;
			int maxTime;
			int time_cnt;
			struct{
				char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun,EveryDay
				int begin_hour;
				int begin_min;
				int end_hour;
				int end_min;
			} *time;
		} task;
	} *all;
} PARAM_REQ_sdk_alarmin_set_all_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarmin_set_all_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarmin_set_all_param(JCLink_t nLinkID, PARAM_REQ_sdk_alarmin_set_all_param *req, PARAM_RESP_sdk_alarmin_set_all_param *resp);
#  endif

//alarmin_b_onduty
#  if 1

//--- alarmin_b_onduty definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarmin_b_onduty PARAM_REQ_sdk_alarmin_b_onduty;
typedef PARAM_RESP_jvbu_alarmin_b_onduty PARAM_RESP_sdk_alarmin_b_onduty;
#    else

typedef struct{
	int almgroup_id;
	int channelid;
} PARAM_REQ_sdk_alarmin_b_onduty;

typedef struct{
	GBOOL bOnduty;
} PARAM_RESP_sdk_alarmin_b_onduty;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarmin_b_onduty(JCLink_t nLinkID, PARAM_REQ_sdk_alarmin_b_onduty *req, PARAM_RESP_sdk_alarmin_b_onduty *resp);
#  endif

//alarmin_b_alarming
#  if 1

//--- alarmin_b_alarming definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarmin_b_alarming PARAM_REQ_sdk_alarmin_b_alarming;
typedef PARAM_RESP_jvbu_alarmin_b_alarming PARAM_RESP_sdk_alarmin_b_alarming;
#    else

typedef struct{
	int almgroup_id;
	int channelid;
} PARAM_REQ_sdk_alarmin_b_alarming;

typedef struct{
	GBOOL bAlarming;
} PARAM_RESP_sdk_alarmin_b_alarming;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarmin_b_alarming(JCLink_t nLinkID, PARAM_REQ_sdk_alarmin_b_alarming *req, PARAM_RESP_sdk_alarmin_b_alarming *resp);
#  endif

//alarm_msg_push
#  if 1

//--- alarm_msg_push definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarm_msg_push PARAM_REQ_sdk_alarm_msg_push;
typedef PARAM_RESP_jvbu_alarm_msg_push PARAM_RESP_sdk_alarm_msg_push;
#    else

typedef struct{
	char *dev_id; //A402153844
	char *dev_type; //ipc,nvr
	int channel;
	char *status; //start,stop
	char *type; //diskError
	char *subtype; //none
	char *msg; //alarm details describe
	char *videoPath; //sd card or disk path
	int datalen;
} PARAM_REQ_sdk_alarm_msg_push;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarm_msg_push;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarm_msg_push(JCLink_t nLinkID, PARAM_REQ_sdk_alarm_msg_push *req, PARAM_RESP_sdk_alarm_msg_push *resp);
#  endif

//alarm_report
#  if 1

//--- alarm_report definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarm_report PARAM_REQ_sdk_alarm_report;
typedef PARAM_RESP_jvbu_alarm_report PARAM_RESP_sdk_alarm_report;
#    else

typedef struct{
	char *dev_id; //A402153844
	char *dev_type; //card,dvr,ipc,nvr
	char *type; //video,io,analyse
	char *subtype; //videoLost,motionDetect,videoBlock,hardDriverLost,doorAlarm,smoke,pir,invasion
	char *pir_code; //alarm details
	char *detector_id; //xxx
	int channel;
} PARAM_REQ_sdk_alarm_report;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarm_report;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarm_report(JCLink_t nLinkID, PARAM_REQ_sdk_alarm_report *req, PARAM_RESP_sdk_alarm_report *resp);
#  endif

//login
#  if 1

//--- login definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_login PARAM_REQ_sdk_login;
typedef PARAM_RESP_jvbu_login PARAM_RESP_sdk_login;
#    else

typedef struct{
	char *dev_id; //A402153844
	int data_cnt;
	int *data;
} PARAM_REQ_sdk_login;

typedef struct{
	char *tm; //20150901120000
} PARAM_RESP_sdk_login;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_login(JCLink_t nLinkID, PARAM_REQ_sdk_login *req, PARAM_RESP_sdk_login *resp);
#  endif

//keep_online
#  if 1

//--- keep_online definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_keep_online PARAM_REQ_sdk_keep_online;
typedef PARAM_RESP_jvbu_keep_online PARAM_RESP_sdk_keep_online;
#    else

typedef struct{
	char *dev_id; //A402153844
} PARAM_REQ_sdk_keep_online;

typedef struct{
	int idle;
} PARAM_RESP_sdk_keep_online;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_keep_online(JCLink_t nLinkID, PARAM_REQ_sdk_keep_online *req, PARAM_RESP_sdk_keep_online *resp);
#  endif

//get_streamserver_addr
#  if 1

//--- get_streamserver_addr definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_get_streamserver_addr PARAM_REQ_sdk_get_streamserver_addr;
typedef PARAM_RESP_jvbu_get_streamserver_addr PARAM_RESP_sdk_get_streamserver_addr;
#    else

typedef struct{
	int channelid;
	int streamid;
} PARAM_REQ_sdk_get_streamserver_addr;

typedef struct{
	int channelid;
	int streamid;
	GBOOL enable;
	char *url; //rtmp://42.157.5.251:1935/live/B153080736_1?token=YJYCnRgmnidCLlMHhXATtoT5dkn5pIqDHILVtZ1xu3RcZ3
	char *videoType; //live,record
	char *file; //00/20151110/N01103000.mp4
	char *userId; //nouse
} PARAM_RESP_sdk_get_streamserver_addr;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_get_streamserver_addr(JCLink_t nLinkID, PARAM_REQ_sdk_get_streamserver_addr *req, PARAM_RESP_sdk_get_streamserver_addr *resp);
#  endif

//set_streamserver_addr
#  if 1

//--- set_streamserver_addr definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_set_streamserver_addr PARAM_REQ_sdk_set_streamserver_addr;
typedef PARAM_RESP_jvbu_set_streamserver_addr PARAM_RESP_sdk_set_streamserver_addr;
#    else

typedef struct{
	char *devid; //A361
	int channelid;
	int streamid;
	GBOOL enable;
	char *url; //rtmp://42.157.5.251:1935/live/B153080736_1?token=YJYCnRgmnidCLlMHhXATtoT5dkn5pIqDHILVtZ1xu3RcZ3
	char *videoType; //live,record
	char *file; //00/20151110/N01103000.mp4
	char *startTime; //20170207151830
	int videoTimeLength;
	char *userId; //nouse
	char *streamToken; //
} PARAM_REQ_sdk_set_streamserver_addr;

typedef struct{
	int idle;
} PARAM_RESP_sdk_set_streamserver_addr;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_set_streamserver_addr(JCLink_t nLinkID, PARAM_REQ_sdk_set_streamserver_addr *req, PARAM_RESP_sdk_set_streamserver_addr *resp);
#  endif

//alarm_deployment
#  if 1

//--- alarm_deployment definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarm_deployment PARAM_REQ_sdk_alarm_deployment;
typedef PARAM_RESP_jvbu_alarm_deployment PARAM_RESP_sdk_alarm_deployment;
#    else

typedef struct{
	GBOOL enable;
	GBOOL bCloudRecord;
	char *description; //localUser
	int timeRange_cnt;
	struct{
		int dayOfWeek;
		GBOOL bProtection;
		char *time; //23:59:59
	} *timeRange;
} PARAM_REQ_sdk_alarm_deployment;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarm_deployment;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarm_deployment(JCLink_t nLinkID, PARAM_REQ_sdk_alarm_deployment *req, PARAM_RESP_sdk_alarm_deployment *resp);
#  endif

//alarm_deployment_query
#  if 1

//--- alarm_deployment_query definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarm_deployment_query PARAM_REQ_sdk_alarm_deployment_query;
typedef PARAM_RESP_jvbu_alarm_deployment_query PARAM_RESP_sdk_alarm_deployment_query;
#    else

typedef struct{
	int cid;
} PARAM_REQ_sdk_alarm_deployment_query;

typedef struct{
	int cid;
	GBOOL enable;
	GBOOL bCloudRecord;
	int timeRange_cnt;
	struct{
		int dayOfWeek;
		GBOOL bProtection;
		char *time; //23:59:59
	} *timeRange;
} PARAM_RESP_sdk_alarm_deployment_query;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarm_deployment_query(JCLink_t nLinkID, PARAM_REQ_sdk_alarm_deployment_query *req, PARAM_RESP_sdk_alarm_deployment_query *resp);
#  endif

#endif


//../../../doc/jgrpc/alarm_link.json
#if 1

//alarm_out
#  if 1

//--- alarm_out definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarm_out PARAM_REQ_sdk_alarm_out;
typedef PARAM_RESP_jvbu_alarm_out PARAM_RESP_sdk_alarm_out;
#    else

typedef struct{
	int port;
	GBOOL status;
} PARAM_REQ_sdk_alarm_out;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarm_out;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarm_out(JCLink_t nLinkID, PARAM_REQ_sdk_alarm_out *req, PARAM_RESP_sdk_alarm_out *resp);
#  endif

//alarm_get_status
#  if 1

//--- alarm_get_status definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarm_get_status PARAM_REQ_sdk_alarm_get_status;
typedef PARAM_RESP_jvbu_alarm_get_status PARAM_RESP_sdk_alarm_get_status;
#    else

typedef struct{
	int port;
} PARAM_REQ_sdk_alarm_get_status;

typedef struct{
	int port;
	GBOOL status;
} PARAM_RESP_sdk_alarm_get_status;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarm_get_status(JCLink_t nLinkID, PARAM_REQ_sdk_alarm_get_status *req, PARAM_RESP_sdk_alarm_get_status *resp);
#  endif

//alarm_link_preset_get
#  if 1

//--- alarm_link_preset_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarm_link_preset_get PARAM_REQ_sdk_alarm_link_preset_get;
typedef PARAM_RESP_jvbu_alarm_link_preset_get PARAM_RESP_sdk_alarm_link_preset_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_alarm_link_preset_get;

typedef struct{
	int presetno;
} PARAM_RESP_sdk_alarm_link_preset_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarm_link_preset_get(JCLink_t nLinkID, PARAM_REQ_sdk_alarm_link_preset_get *req, PARAM_RESP_sdk_alarm_link_preset_get *resp);
#  endif

//alarm_link_preset_set
#  if 1

//--- alarm_link_preset_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarm_link_preset_set PARAM_REQ_sdk_alarm_link_preset_set;
typedef PARAM_RESP_jvbu_alarm_link_preset_set PARAM_RESP_sdk_alarm_link_preset_set;
#    else

typedef struct{
	int channelid;
	int presetno;
} PARAM_REQ_sdk_alarm_link_preset_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarm_link_preset_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarm_link_preset_set(JCLink_t nLinkID, PARAM_REQ_sdk_alarm_link_preset_set *req, PARAM_RESP_sdk_alarm_link_preset_set *resp);
#  endif

//alarm_link_out_get
#  if 1

//--- alarm_link_out_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarm_link_out_get PARAM_REQ_sdk_alarm_link_out_get;
typedef PARAM_RESP_jvbu_alarm_link_out_get PARAM_RESP_sdk_alarm_link_out_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_alarm_link_out_get;

typedef struct{
	int link_cnt;
	struct{
		int alarm_type;
		int alarm_out_cnt;
		int *alarm_out;
	} *link;
} PARAM_RESP_sdk_alarm_link_out_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarm_link_out_get(JCLink_t nLinkID, PARAM_REQ_sdk_alarm_link_out_get *req, PARAM_RESP_sdk_alarm_link_out_get *resp);
#  endif

//alarm_link_out_set
#  if 1

//--- alarm_link_out_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarm_link_out_set PARAM_REQ_sdk_alarm_link_out_set;
typedef PARAM_RESP_jvbu_alarm_link_out_set PARAM_RESP_sdk_alarm_link_out_set;
#    else

typedef struct{
	int channelid;
	int link_cnt;
	struct{
		int alarm_type;
		int alarm_out_cnt;
		int *alarm_out;
	} *link;
} PARAM_REQ_sdk_alarm_link_out_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarm_link_out_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarm_link_out_set(JCLink_t nLinkID, PARAM_REQ_sdk_alarm_link_out_set *req, PARAM_RESP_sdk_alarm_link_out_set *resp);
#  endif

#endif


//../../../doc/jgrpc/audio.json
#if 1

//aduio_get_ability
#  if 1

//--- aduio_get_ability definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_aduio_get_ability PARAM_REQ_sdk_aduio_get_ability;
typedef PARAM_RESP_jvbu_aduio_get_ability PARAM_RESP_sdk_aduio_get_ability;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_aduio_get_ability;

typedef struct{
	int encodes_cnt;
	struct{
		char *encType; //none,pcm,g711a,g711u,g726,aac,adpcm
		GBOOL bDefault;
		int maxsampleRate;
		int minsampleRate;
		int defsampleRate;
		int maxbitWidth;
		int minbitWidth;
		int defbitWidth;
		int maxchannel;
		int minchannel;
		int defchannel;
		int maxbitRate;
		int minbitRate;
		int defbitRate;
	} *encodes;
} PARAM_RESP_sdk_aduio_get_ability;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_aduio_get_ability(JCLink_t nLinkID, PARAM_REQ_sdk_aduio_get_ability *req, PARAM_RESP_sdk_aduio_get_ability *resp);
#  endif

//aduio_get_all_ability
#  if 1

//--- aduio_get_all_ability definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_aduio_get_all_ability PARAM_REQ_sdk_aduio_get_all_ability;
typedef PARAM_RESP_jvbu_aduio_get_all_ability PARAM_RESP_sdk_aduio_get_all_ability;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_aduio_get_all_ability;

typedef struct{
	int all_cnt;
	struct{
		int channelid;
		int encodes_cnt;
		struct{
			char *encType; //none,pcm,g711a,g711u,g726,aac,adpcm
			GBOOL bDefault;
			int maxsampleRate;
			int minsampleRate;
			int defsampleRate;
			int maxbitWidth;
			int minbitWidth;
			int defbitWidth;
			int maxchannel;
			int minchannel;
			int defchannel;
			int maxbitRate;
			int minbitRate;
			int defbitRate;
		} *encodes;
	} *all;
} PARAM_RESP_sdk_aduio_get_all_ability;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_aduio_get_all_ability(JCLink_t nLinkID, PARAM_REQ_sdk_aduio_get_all_ability *req, PARAM_RESP_sdk_aduio_get_all_ability *resp);
#  endif

//ai_get_param
#  if 1

//--- ai_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ai_get_param PARAM_REQ_sdk_ai_get_param;
typedef PARAM_RESP_jvbu_ai_get_param PARAM_RESP_sdk_ai_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ai_get_param;

typedef struct{
	GBOOL bEnable;
	int sampleRate;
	int bitWidth;
	int cntChannel;
	char *encType; //none,pcm,g711a,g711u,g726,aac,adpcm
	int bitRate;
} PARAM_RESP_sdk_ai_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ai_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ai_get_param *req, PARAM_RESP_sdk_ai_get_param *resp);
#  endif

//ai_get_all_param
#  if 1

//--- ai_get_all_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ai_get_all_param PARAM_REQ_sdk_ai_get_all_param;
typedef PARAM_RESP_jvbu_ai_get_all_param PARAM_RESP_sdk_ai_get_all_param;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_ai_get_all_param;

typedef struct{
	int all_cnt;
	struct{
		int channelid;
		GBOOL bEnable;
		int sampleRate;
		int bitWidth;
		int cntChannel;
		char *encType; //none,pcm,g711a,g711u,g726,aac,adpcm
		int bitRate;
	} *all;
} PARAM_RESP_sdk_ai_get_all_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ai_get_all_param(JCLink_t nLinkID, PARAM_REQ_sdk_ai_get_all_param *req, PARAM_RESP_sdk_ai_get_all_param *resp);
#  endif

//ai_set_param
#  if 1

//--- ai_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ai_set_param PARAM_REQ_sdk_ai_set_param;
typedef PARAM_RESP_jvbu_ai_set_param PARAM_RESP_sdk_ai_set_param;
#    else

typedef struct{
	int channelid;
	struct{
		GBOOL bEnable;
		int sampleRate;
		int bitWidth;
		int cntChannel;
		char *encType; //none,pcm,g711a,g711u,g726,aac,adpcm
		int bitRate;
	} audioAttr;
} PARAM_REQ_sdk_ai_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ai_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ai_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ai_set_param *req, PARAM_RESP_sdk_ai_set_param *resp);
#  endif

//ai_set_all_param
#  if 1

//--- ai_set_all_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ai_set_all_param PARAM_REQ_sdk_ai_set_all_param;
typedef PARAM_RESP_jvbu_ai_set_all_param PARAM_RESP_sdk_ai_set_all_param;
#    else

typedef struct{
	int all_cnt;
	struct{
		int channelid;
		GBOOL bEnable;
		int sampleRate;
		int bitWidth;
		int cntChannel;
		char *encType; //none,pcm,g711a,g711u,g726,aac,adpcm
		int bitRate;
	} *all;
} PARAM_REQ_sdk_ai_set_all_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ai_set_all_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ai_set_all_param(JCLink_t nLinkID, PARAM_REQ_sdk_ai_set_all_param *req, PARAM_RESP_sdk_ai_set_all_param *resp);
#  endif

//ao_get_param
#  if 1

//--- ao_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ao_get_param PARAM_REQ_sdk_ao_get_param;
typedef PARAM_RESP_jvbu_ao_get_param PARAM_RESP_sdk_ao_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ao_get_param;

typedef struct{
	GBOOL bEnable;
	int sampleRate;
	int bitWidth;
	int cntChannel;
	char *encType; //none,pcm,g711a,g711u,g726,aac,adpcm
	int bitRate;
} PARAM_RESP_sdk_ao_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ao_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ao_get_param *req, PARAM_RESP_sdk_ao_get_param *resp);
#  endif

//ao_get_all_param
#  if 1

//--- ao_get_all_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ao_get_all_param PARAM_REQ_sdk_ao_get_all_param;
typedef PARAM_RESP_jvbu_ao_get_all_param PARAM_RESP_sdk_ao_get_all_param;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_ao_get_all_param;

typedef struct{
	int all_cnt;
	struct{
		int channelid;
		GBOOL bEnable;
		int sampleRate;
		int bitWidth;
		int cntChannel;
		char *encType; //none,pcm,g711a,g711u,g726,aac,adpcm
		int bitRate;
	} *all;
} PARAM_RESP_sdk_ao_get_all_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ao_get_all_param(JCLink_t nLinkID, PARAM_REQ_sdk_ao_get_all_param *req, PARAM_RESP_sdk_ao_get_all_param *resp);
#  endif

//ao_set_param
#  if 1

//--- ao_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ao_set_param PARAM_REQ_sdk_ao_set_param;
typedef PARAM_RESP_jvbu_ao_set_param PARAM_RESP_sdk_ao_set_param;
#    else

typedef struct{
	int channelid;
	struct{
		GBOOL bEnable;
		int sampleRate;
		int bitWidth;
		int cntChannel;
		char *encType; //none,pcm,g711a,g711u,g726,aac,adpcm
		int bitRate;
	} audioAttr;
} PARAM_REQ_sdk_ao_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ao_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ao_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ao_set_param *req, PARAM_RESP_sdk_ao_set_param *resp);
#  endif

//ao_set_all_param
#  if 1

//--- ao_set_all_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ao_set_all_param PARAM_REQ_sdk_ao_set_all_param;
typedef PARAM_RESP_jvbu_ao_set_all_param PARAM_RESP_sdk_ao_set_all_param;
#    else

typedef struct{
	int all_cnt;
	struct{
		int channelid;
		GBOOL bEnable;
		int sampleRate;
		int bitWidth;
		int cntChannel;
		char *encType; //none,pcm,g711a,g711u,g726,aac,adpcm
		int bitRate;
	} *all;
} PARAM_REQ_sdk_ao_set_all_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ao_set_all_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ao_set_all_param(JCLink_t nLinkID, PARAM_REQ_sdk_ao_set_all_param *req, PARAM_RESP_sdk_ao_set_all_param *resp);
#  endif

#endif


//../../../doc/jgrpc/connect.json
#if 1

//connection_get_list
#  if 1

//--- connection_get_list definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_connection_get_list PARAM_REQ_sdk_connection_get_list;
typedef PARAM_RESP_jvbu_connection_get_list PARAM_RESP_sdk_connection_get_list;
#    else

typedef struct{
	char *conType; //all,jovision,rtsp,gb28181,psia,other
} PARAM_REQ_sdk_connection_get_list;

typedef struct{
	int connectionList_cnt;
	struct{
		char *conType; //jovision
		int key;
		char *addr; //192.168.7.160
		char *user; //admin
	} *connectionList;
} PARAM_RESP_sdk_connection_get_list;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_connection_get_list(JCLink_t nLinkID, PARAM_REQ_sdk_connection_get_list *req, PARAM_RESP_sdk_connection_get_list *resp);
#  endif

//connection_breakoff
#  if 1

//--- connection_breakoff definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_connection_breakoff PARAM_REQ_sdk_connection_breakoff;
typedef PARAM_RESP_jvbu_connection_breakoff PARAM_RESP_sdk_connection_breakoff;
#    else

typedef struct{
	int connectionList_cnt;
	struct{
		char *conType; //jovision
		int key;
	} *connectionList;
} PARAM_REQ_sdk_connection_breakoff;

typedef struct{
	int idle;
} PARAM_RESP_sdk_connection_breakoff;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_connection_breakoff(JCLink_t nLinkID, PARAM_REQ_sdk_connection_breakoff *req, PARAM_RESP_sdk_connection_breakoff *resp);
#  endif

#endif


//../../../doc/jgrpc/devinfo.json
#if 1

//dev_get_hwinfo
#  if 1

//--- dev_get_hwinfo definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_get_hwinfo PARAM_REQ_sdk_dev_get_hwinfo;
typedef PARAM_RESP_jvbu_dev_get_hwinfo PARAM_RESP_sdk_dev_get_hwinfo;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_dev_get_hwinfo;

typedef struct{
	char *type; //IPC,NVR,DVR
	char *hardware; //V1.0
	char *sn; //112233
	char *firmware; //V1.0
	char *uiVersion; //V1.0
	char *manufacture; //JOVISION
	char *model; //JVS-N71-HD
	GBOOL bPtzSupport;
	GBOOL bAFSupport;
	GBOOL baudiocodecSupport;
	GBOOL bNVModifySupport;
	GBOOL bwdrsupport;
	GBOOL bDemistSupport;
	GBOOL bStarSupport;
	GBOOL bLDCSupport;
	GBOOL brotateSupport;
	GBOOL bExpSupport;
	GBOOL bFaceModeSupport;
	GBOOL bVlpnIrSupport;
	GBOOL bWifiSupport;
	GBOOL bDDNSSupport;
	GBOOL bGB28181Support;
	GBOOL bFTPSupport;
	GBOOL bNFSSupport;
	GBOOL bAlarmServiceSupport;
	GBOOL bFishEye;
	GBOOL bImageADSupport;
	GBOOL bMultiOsdSupport;
	GBOOL bEightPrivacy;
	GBOOL bMDGridSupport;
	GBOOL bChatSupport;
	int channelCnt;
	int streamCnt;
	char *ystID; //A402153844
	GBOOL bRemoteDesk;
	GBOOL bWebConfig;
	struct{
		char *type; //buildin, alarmbox
		int cntAlmGroup;
		int cntAlmin_perGroup;
		int cntAlmout;
	} alarm;
	struct{
		int cntAi;
		int cntAo;
	} audio;
} PARAM_RESP_sdk_dev_get_hwinfo;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_get_hwinfo(JCLink_t nLinkID, PARAM_REQ_sdk_dev_get_hwinfo *req, PARAM_RESP_sdk_dev_get_hwinfo *resp);
#  endif

//dev_get_yst_status
#  if 1

//--- dev_get_yst_status definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_get_yst_status PARAM_REQ_sdk_dev_get_yst_status;
typedef PARAM_RESP_jvbu_dev_get_yst_status PARAM_RESP_sdk_dev_get_yst_status;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_dev_get_yst_status;

typedef struct{
	char *ystID; //A402153844
	int ystPort;
	GBOOL bYstOnline;
	int area_errorcode;
} PARAM_RESP_sdk_dev_get_yst_status;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_get_yst_status(JCLink_t nLinkID, PARAM_REQ_sdk_dev_get_yst_status *req, PARAM_RESP_sdk_dev_get_yst_status *resp);
#  endif

//dev_unlock
#  if 1

//--- dev_unlock definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_unlock PARAM_REQ_sdk_dev_unlock;
typedef PARAM_RESP_jvbu_dev_unlock PARAM_RESP_sdk_dev_unlock;
#    else

typedef struct{
	char *type; //areaonline,telnet
	int code;
	int passwd;
} PARAM_REQ_sdk_dev_unlock;

typedef struct{
	int idle;
} PARAM_RESP_sdk_dev_unlock;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_unlock(JCLink_t nLinkID, PARAM_REQ_sdk_dev_unlock *req, PARAM_RESP_sdk_dev_unlock *resp);
#  endif

//dev_get_info
#  if 1

//--- dev_get_info definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_get_info PARAM_REQ_sdk_dev_get_info;
typedef PARAM_RESP_jvbu_dev_get_info PARAM_RESP_sdk_dev_get_info;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_dev_get_info;

typedef struct{
	GBOOL bDiscoverable;
	char *hostname; //HD IPC
	char *name; //HD IPC
	char *rebootDay; //never,everyday,everysunday,everymonday,everytuesday,everywednesday,everythursday,everyfriday,everysaturday
	int rebootHour;
	char *syslanguage; //chinese,english
} PARAM_RESP_sdk_dev_get_info;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_get_info(JCLink_t nLinkID, PARAM_REQ_sdk_dev_get_info *req, PARAM_RESP_sdk_dev_get_info *resp);
#  endif

//dev_set_info
#  if 1

//--- dev_set_info definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_set_info PARAM_REQ_sdk_dev_set_info;
typedef PARAM_RESP_jvbu_dev_set_info PARAM_RESP_sdk_dev_set_info;
#    else

typedef struct{
	GBOOL bDiscoverable;
	char *hostname; //HD IPC
	char *name; //HD IPC
	char *rebootDay; //never,everyday,everysunday,everymonday,everytuesday,everywednesday,everythursday,everyfriday,everysaturday
	int rebootHour;
	char *syslanguage; //chinese,english
} PARAM_REQ_sdk_dev_set_info;

typedef struct{
	int idle;
} PARAM_RESP_sdk_dev_set_info;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_set_info(JCLink_t nLinkID, PARAM_REQ_sdk_dev_set_info *req, PARAM_RESP_sdk_dev_set_info *resp);
#  endif

//dev_stime
#  if 1

//--- dev_stime definition ----
/*
Param tmsec means the seconds elapsed since 1970.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_stime PARAM_REQ_sdk_dev_stime;
typedef PARAM_RESP_jvbu_dev_stime PARAM_RESP_sdk_dev_stime;
#    else

typedef struct{
	int tmsec;
	struct{
		int year;
		int month;
		int day;
		int hour;
		int min;
		int sec;
	} tminfo;
	char *tz; //+08:00
	struct{
		GBOOL dstEnable;
		struct{
			int month;
			int week;
			int day;
			int hour;
			int minute;
			int second;
		} dstBegin;
		struct{
			int month;
			int week;
			int day;
			int hour;
			int minute;
			int second;
		} dstEnd;
		int dstOffset;
	} dstinfo;
} PARAM_REQ_sdk_dev_stime;

typedef struct{
	int idle;
} PARAM_RESP_sdk_dev_stime;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_stime(JCLink_t nLinkID, PARAM_REQ_sdk_dev_stime *req, PARAM_RESP_sdk_dev_stime *resp);
#  endif

//dev_gtime
#  if 1

//--- dev_gtime definition ----
/*
Param tmsec means the seconds elapsed since 1970.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_gtime PARAM_REQ_sdk_dev_gtime;
typedef PARAM_RESP_jvbu_dev_gtime PARAM_RESP_sdk_dev_gtime;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_dev_gtime;

typedef struct{
	int tmsec;
	struct{
		int year;
		int month;
		int day;
		int hour;
		int min;
		int sec;
	} tminfo;
	char *tz; //+08:00
	struct{
		GBOOL dstEnable;
		struct{
			int month;
			int week;
			int day;
			int hour;
			int minute;
			int second;
		} dstBegin;
		struct{
			int month;
			int week;
			int day;
			int hour;
			int minute;
			int second;
		} dstEnd;
		int dstOffset;
	} dstinfo;
} PARAM_RESP_sdk_dev_gtime;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_gtime(JCLink_t nLinkID, PARAM_REQ_sdk_dev_gtime *req, PARAM_RESP_sdk_dev_gtime *resp);
#  endif

//dev_ntp_set
#  if 1

//--- dev_ntp_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_ntp_set PARAM_REQ_sdk_dev_ntp_set;
typedef PARAM_RESP_jvbu_dev_ntp_set PARAM_RESP_sdk_dev_ntp_set;
#    else

typedef struct{
	GBOOL bEnableNtp;
	int sntpInterval;
	int servers_cnt;
	char **servers; //ntp.fudan.edu.cn
} PARAM_REQ_sdk_dev_ntp_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_dev_ntp_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_ntp_set(JCLink_t nLinkID, PARAM_REQ_sdk_dev_ntp_set *req, PARAM_RESP_sdk_dev_ntp_set *resp);
#  endif

//dev_ntp_get
#  if 1

//--- dev_ntp_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_ntp_get PARAM_REQ_sdk_dev_ntp_get;
typedef PARAM_RESP_jvbu_dev_ntp_get PARAM_RESP_sdk_dev_ntp_get;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_dev_ntp_get;

typedef struct{
	GBOOL bEnableNtp;
	int sntpInterval;
	int servers_cnt;
	char **servers; //ntp.fudan.edu.cn
} PARAM_RESP_sdk_dev_ntp_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_ntp_get(JCLink_t nLinkID, PARAM_REQ_sdk_dev_ntp_get *req, PARAM_RESP_sdk_dev_ntp_get *resp);
#  endif

//dev_reboot
#  if 1

//--- dev_reboot definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_reboot PARAM_REQ_sdk_dev_reboot;
typedef PARAM_RESP_jvbu_dev_reboot PARAM_RESP_sdk_dev_reboot;
#    else

typedef struct{
	int delaymSec;
} PARAM_REQ_sdk_dev_reboot;

typedef struct{
	int idle;
} PARAM_RESP_sdk_dev_reboot;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_reboot(JCLink_t nLinkID, PARAM_REQ_sdk_dev_reboot *req, PARAM_RESP_sdk_dev_reboot *resp);
#  endif

//dev_factory_default
#  if 1

//--- dev_factory_default definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_factory_default PARAM_REQ_sdk_dev_factory_default;
typedef PARAM_RESP_jvbu_dev_factory_default PARAM_RESP_sdk_dev_factory_default;
#    else

typedef struct{
	GBOOL bHard;
} PARAM_REQ_sdk_dev_factory_default;

typedef struct{
	int idle;
} PARAM_RESP_sdk_dev_factory_default;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_factory_default(JCLink_t nLinkID, PARAM_REQ_sdk_dev_factory_default *req, PARAM_RESP_sdk_dev_factory_default *resp);
#  endif

//dev_update_check
#  if 1

//--- dev_update_check definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_update_check PARAM_REQ_sdk_dev_update_check;
typedef PARAM_RESP_jvbu_dev_update_check PARAM_RESP_sdk_dev_update_check;
#    else

typedef struct{
	char *method; //usb,ftp,http
	char *url; //ftp://192.168.8.110/
	char *type; //sctrl,ptz
	char *verdata; //data
} PARAM_REQ_sdk_dev_update_check;

typedef struct{
	GBOOL bNeedUpdate;
	char *version; //V2.2.4035 - 20151010     11:01:05
	char *phase; //download,erase,write,free
	int progress;
} PARAM_RESP_sdk_dev_update_check;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_update_check(JCLink_t nLinkID, PARAM_REQ_sdk_dev_update_check *req, PARAM_RESP_sdk_dev_update_check *resp);
#  endif

//dev_update_upinfo_get
#  if 1

//--- dev_update_upinfo_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_update_upinfo_get PARAM_REQ_sdk_dev_update_upinfo_get;
typedef PARAM_RESP_jvbu_dev_update_upinfo_get PARAM_RESP_sdk_dev_update_upinfo_get;
#    else

typedef struct{
	char *type; //sctrl,ptz
} PARAM_REQ_sdk_dev_update_upinfo_get;

typedef struct{
	char *product; //JVS-HI3518ESIV200-V20
	int urls_cnt;
	char **urls; //http://updatewt.afdvr.com/ipc/3518esiv200_new
	char *verName; //jvs3518esiv200-v20-ver.bin
	char *binName; //jvs3518esiv200-v20.bin
} PARAM_RESP_sdk_dev_update_upinfo_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_update_upinfo_get(JCLink_t nLinkID, PARAM_REQ_sdk_dev_update_upinfo_get *req, PARAM_RESP_sdk_dev_update_upinfo_get *resp);
#  endif

//dev_update
#  if 1

//--- dev_update definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_update PARAM_REQ_sdk_dev_update;
typedef PARAM_RESP_jvbu_dev_update PARAM_RESP_sdk_dev_update;
#    else

typedef struct{
	char *method; //usb,ftp,http
	char *url; //ftp://192.168.8.110/
	char *type; //sctrl,ptz
} PARAM_REQ_sdk_dev_update;

typedef struct{
	int idle;
} PARAM_RESP_sdk_dev_update;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_update(JCLink_t nLinkID, PARAM_REQ_sdk_dev_update *req, PARAM_RESP_sdk_dev_update *resp);
#  endif

//dev_update_get_progress
#  if 1

//--- dev_update_get_progress definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_update_get_progress PARAM_REQ_sdk_dev_update_get_progress;
typedef PARAM_RESP_jvbu_dev_update_get_progress PARAM_RESP_sdk_dev_update_get_progress;
#    else

typedef struct{
	char *type; //sctrl,ptz
} PARAM_REQ_sdk_dev_update_get_progress;

typedef struct{
	GBOOL finished;
	char *phase; //download,erase,write
	int progress;
} PARAM_RESP_sdk_dev_update_get_progress;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_update_get_progress(JCLink_t nLinkID, PARAM_REQ_sdk_dev_update_get_progress *req, PARAM_RESP_sdk_dev_update_get_progress *resp);
#  endif

//dev_set_default_cfg
#  if 1

//--- dev_set_default_cfg definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_set_default_cfg PARAM_REQ_sdk_dev_set_default_cfg;
typedef PARAM_RESP_jvbu_dev_set_default_cfg PARAM_RESP_sdk_dev_set_default_cfg;
#    else

typedef struct{
	int channelid;
	char *module; //sys,stream,display,alarm,net,storage,ptz,ivp
	struct{
		struct{
			GBOOL bdef;
			GBOOL bhard;
		} sysdef;
		GBOOL btimedef;
	} sys;
	struct{
		GBOOL bvdef;
		GBOOL badef;
	} stream;
	struct{
		GBOOL bimagedef;
		GBOOL bexposuredef;
		GBOOL bwbdef;
		GBOOL bwdynamicdef;
		GBOOL bdaynightmodedef;
		GBOOL bexpertsetdef;
		GBOOL bosddef;
		GBOOL bmultiosddef;
		GBOOL bprivacydef;
	} display;
	struct{
		GBOOL bmdetectdef;
		struct{
			int almgroup_id;
			int alarmid;
			GBOOL balarmindef;
		} alarmin;
	} alarm;
	struct{
		GBOOL bethdef;
		GBOOL bwirelessdef;
		GBOOL bddnsdef;
		GBOOL bportdef;
		GBOOL bsmtpdef;
		GBOOL bgb28181def;
		GBOOL bftpdef;
		GBOOL bnfsdef;
		GBOOL balarmservicedef;
	} net;
	struct{
		GBOOL bRldef;
		GBOOL bCDEdef;
		GBOOL bOCLdef;
		GBOOL bHidedef;
		GBOOL bSCdef;
		GBOOL bVFdef;
		GBOOL bFiredef;
		GBOOL bHoverdef;
		GBOOL bFMdef;
		GBOOL bTLdef;
		GBOOL bCountdef;
		GBOOL bVRdef;
		GBOOL bASDdef;
	} ivp;
	struct{
		GBOOL brecorddef;
		GBOOL bsnapdef;
	} storage;
} PARAM_REQ_sdk_dev_set_default_cfg;

typedef struct{
	int idle;
} PARAM_RESP_sdk_dev_set_default_cfg;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_set_default_cfg(JCLink_t nLinkID, PARAM_REQ_sdk_dev_set_default_cfg *req, PARAM_RESP_sdk_dev_set_default_cfg *resp);
#  endif

//dev_get_region_info
#  if 1

//--- dev_get_region_info definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_get_region_info PARAM_REQ_sdk_dev_get_region_info;
typedef PARAM_RESP_jvbu_dev_get_region_info PARAM_RESP_sdk_dev_get_region_info;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_dev_get_region_info;

typedef struct{
	char *countryCode; //
} PARAM_RESP_sdk_dev_get_region_info;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_get_region_info(JCLink_t nLinkID, PARAM_REQ_sdk_dev_get_region_info *req, PARAM_RESP_sdk_dev_get_region_info *resp);
#  endif

//dev_set_region_info
#  if 1

//--- dev_set_region_info definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_dev_set_region_info PARAM_REQ_sdk_dev_set_region_info;
typedef PARAM_RESP_jvbu_dev_set_region_info PARAM_RESP_sdk_dev_set_region_info;
#    else

typedef struct{
	char *countryCode; //
} PARAM_REQ_sdk_dev_set_region_info;

typedef struct{
	int idle;
} PARAM_RESP_sdk_dev_set_region_info;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_dev_set_region_info(JCLink_t nLinkID, PARAM_REQ_sdk_dev_set_region_info *req, PARAM_RESP_sdk_dev_set_region_info *resp);
#  endif

#endif


//../../../doc/jgrpc/ifconfig.json
#if 1

//ifconfig_get_inet
#  if 1

//--- ifconfig_get_inet definition ----
/*
The value of quality ranges from 0 to 100.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ifconfig_get_inet PARAM_REQ_sdk_ifconfig_get_inet;
typedef PARAM_RESP_jvbu_ifconfig_get_inet PARAM_RESP_sdk_ifconfig_get_inet;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_ifconfig_get_inet;

typedef struct{
	char *iface; //eth,ppp,wifi
	struct{
		char *name; //eth0
		GBOOL bDHCP;
		GBOOL bAutoAdapt;
		GBOOL bSmartOnline;
		GBOOL bEnableOnline;
		GBOOL bIPLock;
		char *addr; //192.168.7.160
		char *mask; //255.255.255.0
		char *gateway; //192.168.7.1
		char *mac; //E0:62:90:33:58:C7
		char *dns; //202.102.128.68
	} eth;
	struct{
		char *name; //adsl
		char *username; //qlc
		char *passwd; //123456
	} ppp;
	struct{
		char *name; //hehe
		char *ssid; //jovetech
		char *passwd; //111111
		int quality;
		int keystat;
		char *iestat; //open,shared,wep,wpa,wpa2,plain
		char *mode; //sta,ap
		GBOOL bDHCP;
		char *addr; //192.168.7.160
		char *mask; //255.255.255.0
		char *gateway; //192.168.7.1
		char *mac; //E0:62:90:33:58:C7
		char *dns; //202.102.128.68
	} wifi;
	struct{
		char *server; //Dyndns DDNS
		char *domain; //www.jovision.com
		char *user; //admin
		char *passwd; //123456
	} ddns;
} PARAM_RESP_sdk_ifconfig_get_inet;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ifconfig_get_inet(JCLink_t nLinkID, PARAM_REQ_sdk_ifconfig_get_inet *req, PARAM_RESP_sdk_ifconfig_get_inet *resp);
#  endif

//ifconfig_eth_set
#  if 1

//--- ifconfig_eth_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ifconfig_eth_set PARAM_REQ_sdk_ifconfig_eth_set;
typedef PARAM_RESP_jvbu_ifconfig_eth_set PARAM_RESP_sdk_ifconfig_eth_set;
#    else

typedef struct{
	char *clienttype; //web,nvr,jnvr,cv
	char *name; //eth0
	GBOOL bDHCP;
	GBOOL bAutoAdapt;
	GBOOL bSmartOnline;
	GBOOL bEnableOnline;
	GBOOL bIPLock;
	char *addr; //192.168.7.160
	char *mask; //255.255.255.0
	char *gateway; //192.168.7.1
	char *dns; //202.102.128.68
} PARAM_REQ_sdk_ifconfig_eth_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ifconfig_eth_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ifconfig_eth_set(JCLink_t nLinkID, PARAM_REQ_sdk_ifconfig_eth_set *req, PARAM_RESP_sdk_ifconfig_eth_set *resp);
#  endif

//ifconfig_ppp_set
#  if 1

//--- ifconfig_ppp_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ifconfig_ppp_set PARAM_REQ_sdk_ifconfig_ppp_set;
typedef PARAM_RESP_jvbu_ifconfig_ppp_set PARAM_RESP_sdk_ifconfig_ppp_set;
#    else

typedef struct{
	char *name; //adsl
	char *username; //qlc
	char *passwd; //123456
} PARAM_REQ_sdk_ifconfig_ppp_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ifconfig_ppp_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ifconfig_ppp_set(JCLink_t nLinkID, PARAM_REQ_sdk_ifconfig_ppp_set *req, PARAM_RESP_sdk_ifconfig_ppp_set *resp);
#  endif

//ifconfig_ddns_set
#  if 1

//--- ifconfig_ddns_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ifconfig_ddns_set PARAM_REQ_sdk_ifconfig_ddns_set;
typedef PARAM_RESP_jvbu_ifconfig_ddns_set PARAM_RESP_sdk_ifconfig_ddns_set;
#    else

typedef struct{
	char *server; //Dyndns DDNS,3322 DDNS,NO-IP DDNS,orayª®…˙ø« DDNS,Myq-see DDNS,peoplefu.com DDNS,a-press DDNS,heckerddns DDNS
	char *domain; //www.jovision.com
	char *user; //admin
	char *passwd; //123456
} PARAM_REQ_sdk_ifconfig_ddns_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ifconfig_ddns_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ifconfig_ddns_set(JCLink_t nLinkID, PARAM_REQ_sdk_ifconfig_ddns_set *req, PARAM_RESP_sdk_ifconfig_ddns_set *resp);
#  endif

//ifconfig_wifi_connect
#  if 1

//--- ifconfig_wifi_connect definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ifconfig_wifi_connect PARAM_REQ_sdk_ifconfig_wifi_connect;
typedef PARAM_RESP_jvbu_ifconfig_wifi_connect PARAM_RESP_sdk_ifconfig_wifi_connect;
#    else

typedef struct{
	char *name; //hehe
	char *passwd; //hehe12345
	char *iestat; //open,shared,wep,wpa,wpa2,plain
	char *mode; //sta,ap
} PARAM_REQ_sdk_ifconfig_wifi_connect;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ifconfig_wifi_connect;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ifconfig_wifi_connect(JCLink_t nLinkID, PARAM_REQ_sdk_ifconfig_wifi_connect *req, PARAM_RESP_sdk_ifconfig_wifi_connect *resp);
#  endif

//ifconfig_wifi_list_ap
#  if 1

//--- ifconfig_wifi_list_ap definition ----
/*
The value of quality ranges from 0 to 100.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ifconfig_wifi_list_ap PARAM_REQ_sdk_ifconfig_wifi_list_ap;
typedef PARAM_RESP_jvbu_ifconfig_wifi_list_ap PARAM_RESP_sdk_ifconfig_wifi_list_ap;
#    else

typedef struct{
	GBOOL bResearch;
} PARAM_REQ_sdk_ifconfig_wifi_list_ap;

typedef struct{
	int apList_cnt;
	struct{
		char *name; //jovision
		char *passwd; //jovision12345
		int quality;
		int keystat;
		char *iestat; //open,shared,wep,wpa,wpa2,plain
	} *apList;
} PARAM_RESP_sdk_ifconfig_wifi_list_ap;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ifconfig_wifi_list_ap(JCLink_t nLinkID, PARAM_REQ_sdk_ifconfig_wifi_list_ap *req, PARAM_RESP_sdk_ifconfig_wifi_list_ap *resp);
#  endif

//ifconfig_server_set
#  if 1

//--- ifconfig_server_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ifconfig_server_set PARAM_REQ_sdk_ifconfig_server_set;
typedef PARAM_RESP_jvbu_ifconfig_server_set PARAM_RESP_sdk_ifconfig_server_set;
#    else

typedef struct{
	struct{
		char *ipaddr; //192.168.7.160
		int port;
	} vmsServer;
	struct{
		GBOOL bEnable;
		int channel;
		char *serverURL; //rtmp://192.168.100.10:1935/a381_1
	} rtmpServer;
} PARAM_REQ_sdk_ifconfig_server_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ifconfig_server_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ifconfig_server_set(JCLink_t nLinkID, PARAM_REQ_sdk_ifconfig_server_set *req, PARAM_RESP_sdk_ifconfig_server_set *resp);
#  endif

//ifconfig_server_get
#  if 1

//--- ifconfig_server_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ifconfig_server_get PARAM_REQ_sdk_ifconfig_server_get;
typedef PARAM_RESP_jvbu_ifconfig_server_get PARAM_RESP_sdk_ifconfig_server_get;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_ifconfig_server_get;

typedef struct{
	struct{
		char *ipaddr; //192.168.7.160
		int port;
	} vmsServer;
	struct{
		GBOOL bEnable;
		int channel;
		char *serverURL; //rtmp://192.168.100.10:1935/a381_1
	} rtmpServer;
} PARAM_RESP_sdk_ifconfig_server_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ifconfig_server_get(JCLink_t nLinkID, PARAM_REQ_sdk_ifconfig_server_get *req, PARAM_RESP_sdk_ifconfig_server_get *resp);
#  endif

//ifconfig_port_get
#  if 1

//--- ifconfig_port_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ifconfig_port_get PARAM_REQ_sdk_ifconfig_port_get;
typedef PARAM_RESP_jvbu_ifconfig_port_get PARAM_RESP_sdk_ifconfig_port_get;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_ifconfig_port_get;

typedef struct{
	int ysttransmitport;
	int ystonlineport;
	int httpport;
	int rtspport;
} PARAM_RESP_sdk_ifconfig_port_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ifconfig_port_get(JCLink_t nLinkID, PARAM_REQ_sdk_ifconfig_port_get *req, PARAM_RESP_sdk_ifconfig_port_get *resp);
#  endif

//ifconfig_port_set
#  if 1

//--- ifconfig_port_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ifconfig_port_set PARAM_REQ_sdk_ifconfig_port_set;
typedef PARAM_RESP_jvbu_ifconfig_port_set PARAM_RESP_sdk_ifconfig_port_set;
#    else

typedef struct{
	int ysttransmitport;
	int ystonlineport;
	int httpport;
	int rtspport;
} PARAM_REQ_sdk_ifconfig_port_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ifconfig_port_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ifconfig_port_set(JCLink_t nLinkID, PARAM_REQ_sdk_ifconfig_port_set *req, PARAM_RESP_sdk_ifconfig_port_set *resp);
#  endif

//smtp_get_param
#  if 1

//--- smtp_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_smtp_get_param PARAM_REQ_sdk_smtp_get_param;
typedef PARAM_RESP_jvbu_smtp_get_param PARAM_RESP_sdk_smtp_get_param;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_smtp_get_param;

typedef struct{
	int port;
	char *sender; //lfx@jovision.com
	char *server; //lfx@jovision.com
	char *username; //lfx
	char *passwd; //123456
	char *encrytmode; //none, ssl, tls
	int receiver_cnt;
	char **receiver; //qlc@jovision.com
} PARAM_RESP_sdk_smtp_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_smtp_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_smtp_get_param *req, PARAM_RESP_sdk_smtp_get_param *resp);
#  endif

//smtp_set_param
#  if 1

//--- smtp_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_smtp_set_param PARAM_REQ_sdk_smtp_set_param;
typedef PARAM_RESP_jvbu_smtp_set_param PARAM_RESP_sdk_smtp_set_param;
#    else

typedef struct{
	int port;
	char *sender; //lfx@jovision.com
	char *server; //lfx@jovision.com
	char *username; //lfx
	char *passwd; //123456
	char *encrytmode; //none, ssl, tls
	int receiver_cnt;
	char **receiver; //qlc@jovision.com
} PARAM_REQ_sdk_smtp_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_smtp_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_smtp_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_smtp_set_param *req, PARAM_RESP_sdk_smtp_set_param *resp);
#  endif

//smtp_test
#  if 1

//--- smtp_test definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_smtp_test PARAM_REQ_sdk_smtp_test;
typedef PARAM_RESP_jvbu_smtp_test PARAM_RESP_sdk_smtp_test;
#    else

typedef struct{
	int port;
	char *sender; //lfx@jovision.com
	char *server; //lfx@jovision.com
	char *username; //lfx
	char *passwd; //123456
	char *encrytmode; //none, ssl, tls
	int receiver_cnt;
	char **receiver; //qlc@jovision.com
} PARAM_REQ_sdk_smtp_test;

typedef struct{
	int idle;
} PARAM_RESP_sdk_smtp_test;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_smtp_test(JCLink_t nLinkID, PARAM_REQ_sdk_smtp_test *req, PARAM_RESP_sdk_smtp_test *resp);
#  endif

//gb28181_get_param
#  if 1

//--- gb28181_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_gb28181_get_param PARAM_REQ_sdk_gb28181_get_param;
typedef PARAM_RESP_jvbu_gb28181_get_param PARAM_RESP_sdk_gb28181_get_param;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_gb28181_get_param;

typedef struct{
	GBOOL bEnable;
	int sipport;
	char *sipserverid; //34020000002000000001
	char *sipserverdomain; //34020000
	char *sipserverip; //192.168.0.1
	int sipserverport;
	char *sipuser; //admin
	char *sippasswd; //123456
	char *sipuserID; //34020000001320000001
	int expire;
	int keepaliveinterval;
	int keepalivechecktimes;
	int videochannel_cnt;
	struct{
		int channelid;
		char *authID; //34020000001320000001
	} *videochannel;
	int alarminchannel_cnt;
	struct{
		int alarmid;
		char *authID; //34020000001340000001
	} *alarminchannel;
} PARAM_RESP_sdk_gb28181_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_gb28181_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_gb28181_get_param *req, PARAM_RESP_sdk_gb28181_get_param *resp);
#  endif

//gb28181_set_param
#  if 1

//--- gb28181_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_gb28181_set_param PARAM_REQ_sdk_gb28181_set_param;
typedef PARAM_RESP_jvbu_gb28181_set_param PARAM_RESP_sdk_gb28181_set_param;
#    else

typedef struct{
	GBOOL bEnable;
	int sipport;
	char *sipserverid; //34020000002000000001
	char *sipserverdomain; //34020000
	char *sipserverip; //192.168.0.1
	int sipserverport;
	char *sipuser; //admin
	char *sippasswd; //123456
	char *sipuserID; //34020000001320000001
	int expire;
	int keepaliveinterval;
	int keepalivechecktimes;
	int videochannel_cnt;
	struct{
		int channelid;
		char *authID; //34020000001320000001
	} *videochannel;
	int alarminchannel_cnt;
	struct{
		int alarmid;
		char *authID; //34020000001340000001
	} *alarminchannel;
} PARAM_REQ_sdk_gb28181_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_gb28181_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_gb28181_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_gb28181_set_param *req, PARAM_RESP_sdk_gb28181_set_param *resp);
#  endif

//ftp_get_cfg
#  if 1

//--- ftp_get_cfg definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ftp_get_cfg PARAM_REQ_sdk_ftp_get_cfg;
typedef PARAM_RESP_jvbu_ftp_get_cfg PARAM_RESP_sdk_ftp_get_cfg;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_ftp_get_cfg;

typedef struct{
	GBOOL bEnable;
	char *serverip; //192.168.0.1
	int serverport;
	GBOOL bAnonymous;
	char *user; //admin
	char *passwd; //123456
	GBOOL bRecupload;
	GBOOL bPicupload;
} PARAM_RESP_sdk_ftp_get_cfg;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ftp_get_cfg(JCLink_t nLinkID, PARAM_REQ_sdk_ftp_get_cfg *req, PARAM_RESP_sdk_ftp_get_cfg *resp);
#  endif

//ftp_set_cfg
#  if 1

//--- ftp_set_cfg definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ftp_set_cfg PARAM_REQ_sdk_ftp_set_cfg;
typedef PARAM_RESP_jvbu_ftp_set_cfg PARAM_RESP_sdk_ftp_set_cfg;
#    else

typedef struct{
	GBOOL bEnable;
	char *serverip; //192.168.0.1
	int serverport;
	GBOOL bAnonymous;
	char *user; //admin
	char *passwd; //123456
	GBOOL bRecupload;
	GBOOL bPicupload;
} PARAM_REQ_sdk_ftp_set_cfg;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ftp_set_cfg;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ftp_set_cfg(JCLink_t nLinkID, PARAM_REQ_sdk_ftp_set_cfg *req, PARAM_RESP_sdk_ftp_set_cfg *resp);
#  endif

//ftp_upload_test
#  if 1

//--- ftp_upload_test definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ftp_upload_test PARAM_REQ_sdk_ftp_upload_test;
typedef PARAM_RESP_jvbu_ftp_upload_test PARAM_RESP_sdk_ftp_upload_test;
#    else

typedef struct{
	char *serverip; //192.168.0.1
	int serverport;
	GBOOL bAnonymous;
	char *user; //admin
	char *passwd; //123456
} PARAM_REQ_sdk_ftp_upload_test;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ftp_upload_test;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ftp_upload_test(JCLink_t nLinkID, PARAM_REQ_sdk_ftp_upload_test *req, PARAM_RESP_sdk_ftp_upload_test *resp);
#  endif

//nfs_get_cfg
#  if 1

//--- nfs_get_cfg definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_nfs_get_cfg PARAM_REQ_sdk_nfs_get_cfg;
typedef PARAM_RESP_jvbu_nfs_get_cfg PARAM_RESP_sdk_nfs_get_cfg;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_nfs_get_cfg;

typedef struct{
	GBOOL bEnable;
	char *serverip; //192.168.0.1
	char *mountpath; ///home
} PARAM_RESP_sdk_nfs_get_cfg;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_nfs_get_cfg(JCLink_t nLinkID, PARAM_REQ_sdk_nfs_get_cfg *req, PARAM_RESP_sdk_nfs_get_cfg *resp);
#  endif

//nfs_set_cfg
#  if 1

//--- nfs_set_cfg definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_nfs_set_cfg PARAM_REQ_sdk_nfs_set_cfg;
typedef PARAM_RESP_jvbu_nfs_set_cfg PARAM_RESP_sdk_nfs_set_cfg;
#    else

typedef struct{
	GBOOL bEnable;
	char *serverip; //192.168.0.1
	char *mountpath; ///home
} PARAM_REQ_sdk_nfs_set_cfg;

typedef struct{
	int idle;
} PARAM_RESP_sdk_nfs_set_cfg;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_nfs_set_cfg(JCLink_t nLinkID, PARAM_REQ_sdk_nfs_set_cfg *req, PARAM_RESP_sdk_nfs_set_cfg *resp);
#  endif

//alarmservice_get_cfg
#  if 1

//--- alarmservice_get_cfg definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarmservice_get_cfg PARAM_REQ_sdk_alarmservice_get_cfg;
typedef PARAM_RESP_jvbu_alarmservice_get_cfg PARAM_RESP_sdk_alarmservice_get_cfg;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_alarmservice_get_cfg;

typedef struct{
	GBOOL bEnable;
	GBOOL bManualcfgonline;
	char *onlineserverip; //192.168.30.51
	int onlineserverport;
	GBOOL bManualcfgbussiness;
	char *businessserverip; //192.168.30.51
	int businessserverport;
} PARAM_RESP_sdk_alarmservice_get_cfg;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarmservice_get_cfg(JCLink_t nLinkID, PARAM_REQ_sdk_alarmservice_get_cfg *req, PARAM_RESP_sdk_alarmservice_get_cfg *resp);
#  endif

//alarmservice_set_cfg
#  if 1

//--- alarmservice_set_cfg definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_alarmservice_set_cfg PARAM_REQ_sdk_alarmservice_set_cfg;
typedef PARAM_RESP_jvbu_alarmservice_set_cfg PARAM_RESP_sdk_alarmservice_set_cfg;
#    else

typedef struct{
	GBOOL bEnable;
	GBOOL bManualcfgonline;
	char *onlineserverip; //192.168.30.51
	int onlineserverport;
	GBOOL bManualcfgbussiness;
	char *businessserverip; //192.168.30.51
	int businessserverport;
} PARAM_REQ_sdk_alarmservice_set_cfg;

typedef struct{
	int idle;
} PARAM_RESP_sdk_alarmservice_set_cfg;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_alarmservice_set_cfg(JCLink_t nLinkID, PARAM_REQ_sdk_alarmservice_set_cfg *req, PARAM_RESP_sdk_alarmservice_set_cfg *resp);
#  endif

#endif


//../../../doc/jgrpc/image.json
#if 1

//image_get_ability
#  if 1

//--- image_get_ability definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_get_ability PARAM_REQ_sdk_image_get_ability;
typedef PARAM_RESP_jvbu_image_get_ability PARAM_RESP_sdk_image_get_ability;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_image_get_ability;

typedef struct{
	GBOOL bMISup;
	GBOOL bSTSup;
	GBOOL bRotateSup;
	GBOOL bStyleSup;
	GBOOL bExpModeSup;
	GBOOL bWBSup;
	GBOOL bWDSup;
	GBOOL bHardWDSup;
	GBOOL bASTimeSup;
	GBOOL bFluencySup;
	GBOOL bDefinitionSup;
	GBOOL bNoiseRdSup;
	GBOOL bSmearSup;
	GBOOL bAutoLowFrameSup;
	GBOOL b3DNoiseRdSup;
	GBOOL b3DNoiseRdValueSup;
	GBOOL bDefogSup;
	GBOOL bDefogValueSup;
	GBOOL bDistCorSup;
	GBOOL bDistCorValueSup;
	GBOOL bFaceModeSup;
	GBOOL bStarSup;
	GBOOL bVlpnIrSup;
} PARAM_RESP_sdk_image_get_ability;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_get_ability(JCLink_t nLinkID, PARAM_REQ_sdk_image_get_ability *req, PARAM_RESP_sdk_image_get_ability *resp);
#  endif

//image_get_param
#  if 1

//--- image_get_param definition ----
/*
The value of contrast, brightness, saturation and sharpen ranges from 0 to 255.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_get_param PARAM_REQ_sdk_image_get_param;
typedef PARAM_RESP_jvbu_image_get_param PARAM_RESP_sdk_image_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_image_get_param;

typedef struct{
	int contrast;
	int brightness;
	int saturation;
	int sharpen;
	int fluency;
	int definition;
	int noise;
	int smear;
	int exposureMode;
	int exposureMax;
	int exposureMin;
	int antiflick;
	char *scene; //indoor,outdoor,default,soft
	char *daynightMode; //auto,alwaysDay,alwaysNight,timer
	struct{
		int hour;
		int minute;
	} dayStart;
	struct{
		int hour;
		int minute;
	} dayEnd;
	int light;
	int rotate;
	GBOOL bEnableAWB;
	GBOOL bEnableMI;
	GBOOL bEnableST;
	GBOOL bEnableNoC;
	GBOOL bEnableWDynamic;
	GBOOL bAutoLowFrameEn;
	GBOOL bNightOptimization;
	GBOOL bDefogging;
	GBOOL bStarlight;
	GBOOL bAutogain;
	GBOOL bBLC;
	GBOOL bDistortionCorrection;
	GBOOL bDigitalstabilize;
} PARAM_RESP_sdk_image_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_get_param *req, PARAM_RESP_sdk_image_get_param *resp);
#  endif

//image_set_param
#  if 1

//--- image_set_param definition ----
/*
The value of contrast, brightness, saturation and sharpen ranges from 0 to 255.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_set_param PARAM_REQ_sdk_image_set_param;
typedef PARAM_RESP_jvbu_image_set_param PARAM_RESP_sdk_image_set_param;
#    else

typedef struct{
	int channelid;
	int contrast;
	int brightness;
	int saturation;
	int sharpen;
	int fluency;
	int definition;
	int noise;
	int smear;
	int exposureMode;
	int exposureMax;
	int exposureMin;
	int antiflick;
	char *scene; //indoor,outdoor,default,soft
	char *daynightMode; //auto,alwaysDay,alwaysNight,timer
	struct{
		int hour;
		int minute;
	} dayStart;
	struct{
		int hour;
		int minute;
	} dayEnd;
	int light;
	int rotate;
	GBOOL bEnableAWB;
	GBOOL bEnableMI;
	GBOOL bEnableST;
	GBOOL bEnableNoC;
	GBOOL bEnableWDynamic;
	GBOOL bAutoLowFrameEn;
	GBOOL bNightOptimization;
	GBOOL bDefogging;
	GBOOL bStarlight;
	GBOOL bAutogain;
	GBOOL bBLC;
	GBOOL bDistortionCorrection;
	GBOOL bDigitalstabilize;
} PARAM_REQ_sdk_image_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_image_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_set_param *req, PARAM_RESP_sdk_image_set_param *resp);
#  endif

//image_get_adjust_param
#  if 1

//--- image_get_adjust_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_get_adjust_param PARAM_REQ_sdk_image_get_adjust_param;
typedef PARAM_RESP_jvbu_image_get_adjust_param PARAM_RESP_sdk_image_get_adjust_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_image_get_adjust_param;

typedef struct{
	int contrast;
	int brightness;
	int saturation;
	int sharpen;
	GBOOL bEnableMI;
	GBOOL bEnableST;
	int rotate;
	int style;
} PARAM_RESP_sdk_image_get_adjust_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_get_adjust_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_get_adjust_param *req, PARAM_RESP_sdk_image_get_adjust_param *resp);
#  endif

//image_set_adjust_param
#  if 1

//--- image_set_adjust_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_set_adjust_param PARAM_REQ_sdk_image_set_adjust_param;
typedef PARAM_RESP_jvbu_image_set_adjust_param PARAM_RESP_sdk_image_set_adjust_param;
#    else

typedef struct{
	int channelid;
	int contrast;
	int brightness;
	int saturation;
	int sharpen;
	GBOOL bEnableMI;
	GBOOL bEnableST;
	int rotate;
	int style;
} PARAM_REQ_sdk_image_set_adjust_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_image_set_adjust_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_set_adjust_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_set_adjust_param *req, PARAM_RESP_sdk_image_set_adjust_param *resp);
#  endif

//image_get_exposure_param
#  if 1

//--- image_get_exposure_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_get_exposure_param PARAM_REQ_sdk_image_get_exposure_param;
typedef PARAM_RESP_jvbu_image_get_exposure_param PARAM_RESP_sdk_image_get_exposure_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_image_get_exposure_param;

typedef struct{
	int exposureMode;
	int antiflick;
	int mode;
	int exposureMax;
	int exposureMin;
	int gainctrl;
	int exposurectrl;
} PARAM_RESP_sdk_image_get_exposure_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_get_exposure_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_get_exposure_param *req, PARAM_RESP_sdk_image_get_exposure_param *resp);
#  endif

//image_set_exposure_param
#  if 1

//--- image_set_exposure_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_set_exposure_param PARAM_REQ_sdk_image_set_exposure_param;
typedef PARAM_RESP_jvbu_image_set_exposure_param PARAM_RESP_sdk_image_set_exposure_param;
#    else

typedef struct{
	int channelid;
	int exposureMode;
	int antiflick;
	int mode;
	int exposureMax;
	int exposureMin;
	int gainctrl;
	int exposurectrl;
} PARAM_REQ_sdk_image_set_exposure_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_image_set_exposure_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_set_exposure_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_set_exposure_param *req, PARAM_RESP_sdk_image_set_exposure_param *resp);
#  endif

//image_get_wb_param
#  if 1

//--- image_get_wb_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_get_wb_param PARAM_REQ_sdk_image_get_wb_param;
typedef PARAM_RESP_jvbu_image_get_wb_param PARAM_RESP_sdk_image_get_wb_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_image_get_wb_param;

typedef struct{
	int accuracy;
	int hue;
} PARAM_RESP_sdk_image_get_wb_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_get_wb_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_get_wb_param *req, PARAM_RESP_sdk_image_get_wb_param *resp);
#  endif

//image_set_wb_param
#  if 1

//--- image_set_wb_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_set_wb_param PARAM_REQ_sdk_image_set_wb_param;
typedef PARAM_RESP_jvbu_image_set_wb_param PARAM_RESP_sdk_image_set_wb_param;
#    else

typedef struct{
	int channelid;
	int accuracy;
	int hue;
} PARAM_REQ_sdk_image_set_wb_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_image_set_wb_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_set_wb_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_set_wb_param *req, PARAM_RESP_sdk_image_set_wb_param *resp);
#  endif

//image_get_wdynamic_param
#  if 1

//--- image_get_wdynamic_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_get_wdynamic_param PARAM_REQ_sdk_image_get_wdynamic_param;
typedef PARAM_RESP_jvbu_image_get_wdynamic_param PARAM_RESP_sdk_image_get_wdynamic_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_image_get_wdynamic_param;

typedef struct{
	int mode;
} PARAM_RESP_sdk_image_get_wdynamic_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_get_wdynamic_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_get_wdynamic_param *req, PARAM_RESP_sdk_image_get_wdynamic_param *resp);
#  endif

//image_set_wdynamic_param
#  if 1

//--- image_set_wdynamic_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_set_wdynamic_param PARAM_REQ_sdk_image_set_wdynamic_param;
typedef PARAM_RESP_jvbu_image_set_wdynamic_param PARAM_RESP_sdk_image_set_wdynamic_param;
#    else

typedef struct{
	int channelid;
	int mode;
} PARAM_REQ_sdk_image_set_wdynamic_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_image_set_wdynamic_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_set_wdynamic_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_set_wdynamic_param *req, PARAM_RESP_sdk_image_set_wdynamic_param *resp);
#  endif

//image_get_dncut_param
#  if 1

//--- image_get_dncut_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_get_dncut_param PARAM_REQ_sdk_image_get_dncut_param;
typedef PARAM_RESP_jvbu_image_get_dncut_param PARAM_RESP_sdk_image_get_dncut_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_image_get_dncut_param;

typedef struct{
	char *daynightMode; //auto,alwaysDay,alwaysNight,timer
	int light;
	int antishaketime;
	struct{
		int hour;
		int minute;
	} dayStart;
	struct{
		int hour;
		int minute;
	} dayEnd;
} PARAM_RESP_sdk_image_get_dncut_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_get_dncut_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_get_dncut_param *req, PARAM_RESP_sdk_image_get_dncut_param *resp);
#  endif

//image_set_dncut_param
#  if 1

//--- image_set_dncut_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_set_dncut_param PARAM_REQ_sdk_image_set_dncut_param;
typedef PARAM_RESP_jvbu_image_set_dncut_param PARAM_RESP_sdk_image_set_dncut_param;
#    else

typedef struct{
	int channelid;
	char *daynightMode; //auto,alwaysDay,alwaysNight,timer
	int light;
	int antishaketime;
	struct{
		int hour;
		int minute;
	} dayStart;
	struct{
		int hour;
		int minute;
	} dayEnd;
} PARAM_REQ_sdk_image_set_dncut_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_image_set_dncut_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_set_dncut_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_set_dncut_param *req, PARAM_RESP_sdk_image_set_dncut_param *resp);
#  endif

//image_get_expertsetting_param
#  if 1

//--- image_get_expertsetting_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_get_expertsetting_param PARAM_REQ_sdk_image_get_expertsetting_param;
typedef PARAM_RESP_jvbu_image_get_expertsetting_param PARAM_RESP_sdk_image_get_expertsetting_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_image_get_expertsetting_param;

typedef struct{
	struct{
		GBOOL bEnable;
		int strength;
	} the3DNoiseReduct;
	int fluency;
	int definition;
	int noisereduct;
	int smear;
	GBOOL bAutoLowFrameEn;
	struct{
		GBOOL bEnable;
		int strength;
	} defog;
	struct{
		GBOOL bEnable;
		int strength;
	} distortionCorrection;
	GBOOL bEnableFaceMode;
} PARAM_RESP_sdk_image_get_expertsetting_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_get_expertsetting_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_get_expertsetting_param *req, PARAM_RESP_sdk_image_get_expertsetting_param *resp);
#  endif

//image_set_expertsetting_param
#  if 1

//--- image_set_expertsetting_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_set_expertsetting_param PARAM_REQ_sdk_image_set_expertsetting_param;
typedef PARAM_RESP_jvbu_image_set_expertsetting_param PARAM_RESP_sdk_image_set_expertsetting_param;
#    else

typedef struct{
	int channelid;
	struct{
		GBOOL bEnable;
		int strength;
	} the3DNoiseReduct;
	int fluency;
	int definition;
	int noisereduct;
	int smear;
	GBOOL bAutoLowFrameEn;
	struct{
		GBOOL bEnable;
		int strength;
	} defog;
	struct{
		GBOOL bEnable;
		int strength;
	} distortionCorrection;
	GBOOL bEnableFaceMode;
} PARAM_REQ_sdk_image_set_expertsetting_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_image_set_expertsetting_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_set_expertsetting_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_set_expertsetting_param *req, PARAM_RESP_sdk_image_set_expertsetting_param *resp);
#  endif

//image_get_adc_param
#  if 1

//--- image_get_adc_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_image_get_adc_param PARAM_REQ_sdk_image_get_adc_param;
typedef PARAM_RESP_jvbu_image_get_adc_param PARAM_RESP_sdk_image_get_adc_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_image_get_adc_param;

typedef struct{
	int adcHValue;
	int adcLValue;
	int adcRValue;
} PARAM_RESP_sdk_image_get_adc_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_image_get_adc_param(JCLink_t nLinkID, PARAM_REQ_sdk_image_get_adc_param *req, PARAM_RESP_sdk_image_get_adc_param *resp);
#  endif

#endif


//../../../doc/jgrpc/ivp.json
#if 1

//ivp_start
#  if 1

//--- ivp_start definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_start PARAM_REQ_sdk_ivp_start;
typedef PARAM_RESP_jvbu_ivp_start PARAM_RESP_sdk_ivp_start;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_start;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_start;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_start(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_start *req, PARAM_RESP_sdk_ivp_start *resp);
#  endif

//ivp_stop
#  if 1

//--- ivp_stop definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_stop PARAM_REQ_sdk_ivp_stop;
typedef PARAM_RESP_jvbu_ivp_stop PARAM_RESP_sdk_ivp_stop;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_stop;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_stop;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_stop(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_stop *req, PARAM_RESP_sdk_ivp_stop *resp);
#  endif

//ivp_get_param
#  if 1

//--- ivp_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_get_param PARAM_REQ_sdk_ivp_get_param;
typedef PARAM_RESP_jvbu_ivp_get_param PARAM_RESP_sdk_ivp_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_get_param;

typedef struct{
	GBOOL bEnable;
	int nDelay;
	GBOOL bStarting;
	int nRgnCnt;
	int stRegion_cnt;
	struct{
		int nCnt;
		int stPoints_cnt;
		struct{
			int x;
			int y;
		} *stPoints;
		int nIvpCheckMode;
	} *stRegion;
	GBOOL bDrawFrame;
	GBOOL bFlushFrame;
	GBOOL bMarkObject;
	GBOOL bMarkAll;
	GBOOL bOpenCount;
	GBOOL bShowCount;
	GBOOL bPlateSnap;
	int nAlpha;
	int nSen;
	int nThreshold;
	int nStayTime;
	GBOOL bEnableRecord;
	GBOOL bOutAlarm1;
	GBOOL bOutClient;
	GBOOL bOutEMail;
	GBOOL bOutVMS;
	GBOOL bNeedRestart;
	int eCountOSDPos;
	int nCountOSDColor;
	int nCountSaveDays;
	int nTimeIntervalReport;
	char *sSnapRes; //
	GBOOL bLPREn;
	int ivpLprDir;
	GBOOL bIvpLprDisplay;
	int ivpLprPos;
	struct{
		int x;
		int y;
		int width;
		int height;
	} ivpLprROI;
	struct{
		char *ivpLprHttpIP; //192.168.1.243
		int ivpLprHttpPort;
		char *ivpLprHttpAddr; ///devicemanagement/php/plateresult.php
	} ivpLprHttpServer;
	struct{
		char *ivpLprFtpIP; //192.168.1.243
		int ivpLprFtpPort;
		char *ivpLprFtpAccount; //admin
		char *ivpLprFtpPasswd; //123456
		char *ivpLprFtpDir; ///lpr/
	} ivpLprFtpServer;
	GBOOL bIvpLprImgFull;
	GBOOL bIvpLprImgLP;
	int ivpLprReUploadInt;
	int uploadTimeout;
} PARAM_RESP_sdk_ivp_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_get_param *req, PARAM_RESP_sdk_ivp_get_param *resp);
#  endif

//ivp_set_param
#  if 1

//--- ivp_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_set_param PARAM_REQ_sdk_ivp_set_param;
typedef PARAM_RESP_jvbu_ivp_set_param PARAM_RESP_sdk_ivp_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	int nDelay;
	GBOOL bStarting;
	int nRgnCnt;
	int stRegion_cnt;
	struct{
		int nCnt;
		int stPoints_cnt;
		struct{
			int x;
			int y;
		} *stPoints;
		int nIvpCheckMode;
	} *stRegion;
	GBOOL bDrawFrame;
	GBOOL bFlushFrame;
	GBOOL bMarkObject;
	GBOOL bMarkAll;
	GBOOL bOpenCount;
	GBOOL bShowCount;
	GBOOL bPlateSnap;
	int nAlpha;
	int nSen;
	int nThreshold;
	int nStayTime;
	GBOOL bEnableRecord;
	GBOOL bOutAlarm1;
	GBOOL bOutClient;
	GBOOL bOutEMail;
	GBOOL bOutVMS;
	GBOOL bNeedRestart;
	int eCountOSDPos;
	int nCountOSDColor;
	int nCountSaveDays;
	int nTimeIntervalReport;
	char *sSnapRes; //
	GBOOL bLPREn;
	int ivpLprDir;
	GBOOL bIvpLprDisplay;
	int ivpLprPos;
	struct{
		int x;
		int y;
		int width;
		int height;
	} ivpLprROI;
	struct{
		char *ivpLprHttpIP; //192.168.1.243
		int ivpLprHttpPort;
		char *ivpLprHttpAddr; ///devicemanagement/php/plateresult.php
	} ivpLprHttpServer;
	struct{
		char *ivpLprFtpIP; //192.168.1.243
		int ivpLprFtpPort;
		char *ivpLprFtpAccount; //admin
		char *ivpLprFtpPasswd; //123456
		char *ivpLprFtpDir; ///lpr/
	} ivpLprFtpServer;
	GBOOL bIvpLprImgFull;
	GBOOL bIvpLprImgLP;
	int ivpLprReUploadInt;
	int uploadTimeout;
} PARAM_REQ_sdk_ivp_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_set_param *req, PARAM_RESP_sdk_ivp_set_param *resp);
#  endif

//ivp_lpr_trigger
#  if 1

//--- ivp_lpr_trigger definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_lpr_trigger PARAM_REQ_sdk_ivp_lpr_trigger;
typedef PARAM_RESP_jvbu_ivp_lpr_trigger PARAM_RESP_sdk_ivp_lpr_trigger;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_ivp_lpr_trigger;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_lpr_trigger;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_lpr_trigger(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_lpr_trigger *req, PARAM_RESP_sdk_ivp_lpr_trigger *resp);
#  endif

//ivp_lpr_import_wblist
#  if 1

//--- ivp_lpr_import_wblist definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_lpr_import_wblist PARAM_REQ_sdk_ivp_lpr_import_wblist;
typedef PARAM_RESP_jvbu_ivp_lpr_import_wblist PARAM_RESP_sdk_ivp_lpr_import_wblist;
#    else

typedef struct{
	int whiteList_cnt;
	struct{
		char *lpstr; //¬≥A88888
		char *expDate; //20150630
	} *whiteList;
	int blackList_cnt;
	struct{
		char *lpstr; //¬≥A88888
		char *expDate; //20150630
	} *blackList;
} PARAM_REQ_sdk_ivp_lpr_import_wblist;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_lpr_import_wblist;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_lpr_import_wblist(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_lpr_import_wblist *req, PARAM_RESP_sdk_ivp_lpr_import_wblist *resp);
#  endif

//ivp_lpr_export_wblist
#  if 1

//--- ivp_lpr_export_wblist definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_lpr_export_wblist PARAM_REQ_sdk_ivp_lpr_export_wblist;
typedef PARAM_RESP_jvbu_ivp_lpr_export_wblist PARAM_RESP_sdk_ivp_lpr_export_wblist;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_ivp_lpr_export_wblist;

typedef struct{
	int whiteList_cnt;
	struct{
		char *lpstr; //¬≥A88888
		char *expDate; //20150630
	} *whiteList;
	int blackList_cnt;
	struct{
		char *lpstr; //¬≥A88888
		char *expDate; //20150630
	} *blackList;
} PARAM_RESP_sdk_ivp_lpr_export_wblist;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_lpr_export_wblist(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_lpr_export_wblist *req, PARAM_RESP_sdk_ivp_lpr_export_wblist *resp);
#  endif

//ivp_lpr_manual_open_gate
#  if 1

//--- ivp_lpr_manual_open_gate definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_lpr_manual_open_gate PARAM_REQ_sdk_ivp_lpr_manual_open_gate;
typedef PARAM_RESP_jvbu_ivp_lpr_manual_open_gate PARAM_RESP_sdk_ivp_lpr_manual_open_gate;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_ivp_lpr_manual_open_gate;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_lpr_manual_open_gate;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_lpr_manual_open_gate(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_lpr_manual_open_gate *req, PARAM_RESP_sdk_ivp_lpr_manual_open_gate *resp);
#  endif

//ivp_lpr_manual_close_gate
#  if 1

//--- ivp_lpr_manual_close_gate definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_lpr_manual_close_gate PARAM_REQ_sdk_ivp_lpr_manual_close_gate;
typedef PARAM_RESP_jvbu_ivp_lpr_manual_close_gate PARAM_RESP_sdk_ivp_lpr_manual_close_gate;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_ivp_lpr_manual_close_gate;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_lpr_manual_close_gate;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_lpr_manual_close_gate(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_lpr_manual_close_gate *req, PARAM_RESP_sdk_ivp_lpr_manual_close_gate *resp);
#  endif

//ivp_lpr_get_last_record
#  if 1

//--- ivp_lpr_get_last_record definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_lpr_get_last_record PARAM_REQ_sdk_ivp_lpr_get_last_record;
typedef PARAM_RESP_jvbu_ivp_lpr_get_last_record PARAM_RESP_sdk_ivp_lpr_get_last_record;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_lpr_get_last_record;

typedef struct{
	int recordID;
	int bright;
	int carBright;
	int carColor;
	int colorType;
	int colorValue;
	int confidence;
	int direction;
	char *imagePath; ///mmc/LPRCap/2015_09_09/lpr_1714224504_full.jpg
	char *lpImagePath; ///mmc/LPRCap/2015_09_09/lpr_1714224504_lp.jpg
	char *license; //NULL
	struct{
		struct{
			int bottom;
			int left;
			int right;
			int top;
		} RECT;
	} location;
	struct{
		struct{
			int sec;
			int usec;
		} Timeval;
	} timeStamp;
	int timeUsed;
	int triggerType;
	int type;
} PARAM_RESP_sdk_ivp_lpr_get_last_record;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_lpr_get_last_record(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_lpr_get_last_record *req, PARAM_RESP_sdk_ivp_lpr_get_last_record *resp);
#  endif

//ivp_lpr_get_max_record_id
#  if 1

//--- ivp_lpr_get_max_record_id definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_lpr_get_max_record_id PARAM_REQ_sdk_ivp_lpr_get_max_record_id;
typedef PARAM_RESP_jvbu_ivp_lpr_get_max_record_id PARAM_RESP_sdk_ivp_lpr_get_max_record_id;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_lpr_get_max_record_id;

typedef struct{
	char *maxID; //1024
} PARAM_RESP_sdk_ivp_lpr_get_max_record_id;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_lpr_get_max_record_id(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_lpr_get_max_record_id *req, PARAM_RESP_sdk_ivp_lpr_get_max_record_id *resp);
#  endif

//ivp_lpr_get_record_list
#  if 1

//--- ivp_lpr_get_record_list definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_lpr_get_record_list PARAM_REQ_sdk_ivp_lpr_get_record_list;
typedef PARAM_RESP_jvbu_ivp_lpr_get_record_list PARAM_RESP_sdk_ivp_lpr_get_record_list;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_lpr_get_record_list;

typedef struct{
	int recordList_cnt;
	struct{
		int recordID;
		int bright;
		int carBright;
		int carColor;
		int colorType;
		int colorValue;
		int confidence;
		int direction;
		char *imagePath; ///mmc/LPRCap/2015_09_09/lpr_1714224504_full.jpg
		char *lpImagePath; ///mmc/LPRCap/2015_09_09/lpr_1714224504_lp.jpg
		char *license; //NULL
		struct{
			struct{
				int bottom;
				int left;
				int right;
				int top;
			} RECT;
		} location;
		struct{
			struct{
				int sec;
				int usec;
			} Timeval;
		} timeStamp;
		int timeUsed;
		int triggerType;
		int type;
	} *recordList;
} PARAM_RESP_sdk_ivp_lpr_get_record_list;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_lpr_get_record_list(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_lpr_get_record_list *req, PARAM_RESP_sdk_ivp_lpr_get_record_list *resp);
#  endif

//ivp_lpr_get_record
#  if 1

//--- ivp_lpr_get_record definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_lpr_get_record PARAM_REQ_sdk_ivp_lpr_get_record;
typedef PARAM_RESP_jvbu_ivp_lpr_get_record PARAM_RESP_sdk_ivp_lpr_get_record;
#    else

typedef struct{
	int channelid;
	int recordID;
} PARAM_REQ_sdk_ivp_lpr_get_record;

typedef struct{
	int recordID;
	int bright;
	int carBright;
	int carColor;
	int colorType;
	int colorValue;
	int confidence;
	int direction;
	char *imagePath; ///mmc/LPRCap/2015_09_09/lpr_1714224504_full.jpg
	char *lpImagePath; ///mmc/LPRCap/2015_09_09/lpr_1714224504_lp.jpg
	char *license; //NULL
	struct{
		struct{
			int bottom;
			int left;
			int right;
			int top;
		} RECT;
	} location;
	struct{
		struct{
			int sec;
			int usec;
		} Timeval;
	} timeStamp;
	int timeUsed;
	int triggerType;
	int type;
} PARAM_RESP_sdk_ivp_lpr_get_record;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_lpr_get_record(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_lpr_get_record *req, PARAM_RESP_sdk_ivp_lpr_get_record *resp);
#  endif

//ivp_support_get
#  if 1

//--- ivp_support_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_support_get PARAM_REQ_sdk_ivp_support_get;
typedef PARAM_RESP_jvbu_ivp_support_get PARAM_RESP_sdk_ivp_support_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_support_get;

typedef struct{
	GBOOL bIVPSupport;
	GBOOL bRLSupport;
	GBOOL bCDESupport;
	GBOOL bOCLSupport;
	GBOOL bHideSupport;
	GBOOL bSCSupport;
	GBOOL bVFSupport;
	GBOOL bFireSupport;
	GBOOL bHoverSupport;
	GBOOL bFMSupport;
	GBOOL bTLSupport;
	GBOOL bCountSupport;
	GBOOL bVRSupport;
	GBOOL bASDSupport;
} PARAM_RESP_sdk_ivp_support_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_support_get(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_support_get *req, PARAM_RESP_sdk_ivp_support_get *resp);
#  endif

//ivp_rl_get_param
#  if 1

//--- ivp_rl_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_rl_get_param PARAM_REQ_sdk_ivp_rl_get_param;
typedef PARAM_RESP_jvbu_ivp_rl_get_param PARAM_RESP_sdk_ivp_rl_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_rl_get_param;

typedef struct{
	GBOOL bEnable;
	int nSen;
	int nThreshold;
	int nStayTime;
	GBOOL bDrawFrame;
	GBOOL bFlushFrame;
	GBOOL bMarkObject;
	GBOOL bMarkAll;
	int maxRectW;
	int maxRectH;
	int maxRegion;
	int stRegion_cnt;
	struct{
		int type;
		int stPoints_cnt;
		struct{
			int x;
			int y;
		} *stPoints;
		int nIvpCheckMode;
	} *stRegion;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_rl_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_rl_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_rl_get_param *req, PARAM_RESP_sdk_ivp_rl_get_param *resp);
#  endif

//ivp_rl_set_param
#  if 1

//--- ivp_rl_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_rl_set_param PARAM_REQ_sdk_ivp_rl_set_param;
typedef PARAM_RESP_jvbu_ivp_rl_set_param PARAM_RESP_sdk_ivp_rl_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	int nSen;
	int nThreshold;
	int nStayTime;
	GBOOL bDrawFrame;
	GBOOL bFlushFrame;
	GBOOL bMarkObject;
	GBOOL bMarkAll;
	int stRegion_cnt;
	struct{
		int type;
		int stPoints_cnt;
		struct{
			int x;
			int y;
		} *stPoints;
		int nIvpCheckMode;
	} *stRegion;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_rl_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_rl_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_rl_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_rl_set_param *req, PARAM_RESP_sdk_ivp_rl_set_param *resp);
#  endif

//ivp_cde_get_param
#  if 1

//--- ivp_cde_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_cde_get_param PARAM_REQ_sdk_ivp_cde_get_param;
typedef PARAM_RESP_jvbu_ivp_cde_get_param PARAM_RESP_sdk_ivp_cde_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_cde_get_param;

typedef struct{
	GBOOL bEnable;
	GBOOL bDrawFrame;
	int nThreshold;
	int maxRectW;
	int maxRectH;
	int maxRegion;
	int stRegion_cnt;
	struct{
		int stPoints_cnt;
		struct{
			int x;
			int y;
		} *stPoints;
	} *stRegion;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_cde_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_cde_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_cde_get_param *req, PARAM_RESP_sdk_ivp_cde_get_param *resp);
#  endif

//ivp_cde_set_param
#  if 1

//--- ivp_cde_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_cde_set_param PARAM_REQ_sdk_ivp_cde_set_param;
typedef PARAM_RESP_jvbu_ivp_cde_set_param PARAM_RESP_sdk_ivp_cde_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	GBOOL bDrawFrame;
	int nThreshold;
	int maxRegion;
	int stRegion_cnt;
	struct{
		int stPoints_cnt;
		struct{
			int x;
			int y;
		} *stPoints;
	} *stRegion;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_cde_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_cde_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_cde_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_cde_set_param *req, PARAM_RESP_sdk_ivp_cde_set_param *resp);
#  endif

//ivp_ocl_get_param
#  if 1

//--- ivp_ocl_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_ocl_get_param PARAM_REQ_sdk_ivp_ocl_get_param;
typedef PARAM_RESP_jvbu_ivp_ocl_get_param PARAM_RESP_sdk_ivp_ocl_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_ocl_get_param;

typedef struct{
	GBOOL bEnable;
	GBOOL bDrawFrame;
	int nExistNum;
	int nLimitNum;
	int maxRectW;
	int maxRectH;
	int maxRegion;
	struct{
		int rects_cnt;
		struct{
			int x;
			int y;
			int w;
			int h;
		} *rects;
	} stRegion;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_ocl_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_ocl_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_ocl_get_param *req, PARAM_RESP_sdk_ivp_ocl_get_param *resp);
#  endif

//ivp_ocl_set_param
#  if 1

//--- ivp_ocl_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_ocl_set_param PARAM_REQ_sdk_ivp_ocl_set_param;
typedef PARAM_RESP_jvbu_ivp_ocl_set_param PARAM_RESP_sdk_ivp_ocl_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	GBOOL bDrawFrame;
	int nExistNum;
	int nLimitNum;
	struct{
		int rects_cnt;
		struct{
			int x;
			int y;
			int w;
			int h;
		} *rects;
	} stRegion;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_ocl_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_ocl_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_ocl_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_ocl_set_param *req, PARAM_RESP_sdk_ivp_ocl_set_param *resp);
#  endif

//ivp_hide_get_param
#  if 1

//--- ivp_hide_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_hide_get_param PARAM_REQ_sdk_ivp_hide_get_param;
typedef PARAM_RESP_jvbu_ivp_hide_get_param PARAM_RESP_sdk_ivp_hide_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_hide_get_param;

typedef struct{
	GBOOL bEnable;
	int nSen;
	int maxRectW;
	int maxRectH;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_hide_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_hide_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_hide_get_param *req, PARAM_RESP_sdk_ivp_hide_get_param *resp);
#  endif

//ivp_hide_set_param
#  if 1

//--- ivp_hide_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_hide_set_param PARAM_REQ_sdk_ivp_hide_set_param;
typedef PARAM_RESP_jvbu_ivp_hide_set_param PARAM_RESP_sdk_ivp_hide_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	int nSen;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_hide_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_hide_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_hide_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_hide_set_param *req, PARAM_RESP_sdk_ivp_hide_set_param *resp);
#  endif

//ivp_sc_get_param
#  if 1

//--- ivp_sc_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_sc_get_param PARAM_REQ_sdk_ivp_sc_get_param;
typedef PARAM_RESP_jvbu_ivp_sc_get_param PARAM_RESP_sdk_ivp_sc_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_sc_get_param;

typedef struct{
	GBOOL bEnable;
	int nSen;
	int nAlarmDelay;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_sc_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_sc_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_sc_get_param *req, PARAM_RESP_sdk_ivp_sc_get_param *resp);
#  endif

//ivp_sc_set_param
#  if 1

//--- ivp_sc_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_sc_set_param PARAM_REQ_sdk_ivp_sc_set_param;
typedef PARAM_RESP_jvbu_ivp_sc_set_param PARAM_RESP_sdk_ivp_sc_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	int nSen;
	int nAlarmDelay;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_sc_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_sc_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_sc_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_sc_set_param *req, PARAM_RESP_sdk_ivp_sc_set_param *resp);
#  endif

//ivp_vf_get_param
#  if 1

//--- ivp_vf_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_vf_get_param PARAM_REQ_sdk_ivp_vf_get_param;
typedef PARAM_RESP_jvbu_ivp_vf_get_param PARAM_RESP_sdk_ivp_vf_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_vf_get_param;

typedef struct{
	GBOOL bEnable;
	int nSen;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_vf_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_vf_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_vf_get_param *req, PARAM_RESP_sdk_ivp_vf_get_param *resp);
#  endif

//ivp_vf_set_param
#  if 1

//--- ivp_vf_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_vf_set_param PARAM_REQ_sdk_ivp_vf_set_param;
typedef PARAM_RESP_jvbu_ivp_vf_set_param PARAM_RESP_sdk_ivp_vf_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	int nSen;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_vf_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_vf_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_vf_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_vf_set_param *req, PARAM_RESP_sdk_ivp_vf_set_param *resp);
#  endif

//ivp_fire_get_param
#  if 1

//--- ivp_fire_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_fire_get_param PARAM_REQ_sdk_ivp_fire_get_param;
typedef PARAM_RESP_jvbu_ivp_fire_get_param PARAM_RESP_sdk_ivp_fire_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_fire_get_param;

typedef struct{
	GBOOL bEnable;
	int nSen;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_fire_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_fire_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_fire_get_param *req, PARAM_RESP_sdk_ivp_fire_get_param *resp);
#  endif

//ivp_fire_set_param
#  if 1

//--- ivp_fire_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_fire_set_param PARAM_REQ_sdk_ivp_fire_set_param;
typedef PARAM_RESP_jvbu_ivp_fire_set_param PARAM_RESP_sdk_ivp_fire_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	int nSen;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_fire_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_fire_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_fire_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_fire_set_param *req, PARAM_RESP_sdk_ivp_fire_set_param *resp);
#  endif

//ivp_hover_get_param
#  if 1

//--- ivp_hover_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_hover_get_param PARAM_REQ_sdk_ivp_hover_get_param;
typedef PARAM_RESP_jvbu_ivp_hover_get_param PARAM_RESP_sdk_ivp_hover_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_hover_get_param;

typedef struct{
	GBOOL bEnable;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_hover_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_hover_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_hover_get_param *req, PARAM_RESP_sdk_ivp_hover_get_param *resp);
#  endif

//ivp_hover_set_param
#  if 1

//--- ivp_hover_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_hover_set_param PARAM_REQ_sdk_ivp_hover_set_param;
typedef PARAM_RESP_jvbu_ivp_hover_set_param PARAM_RESP_sdk_ivp_hover_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_hover_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_hover_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_hover_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_hover_set_param *req, PARAM_RESP_sdk_ivp_hover_set_param *resp);
#  endif

//ivp_fastmove_get_param
#  if 1

//--- ivp_fastmove_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_fastmove_get_param PARAM_REQ_sdk_ivp_fastmove_get_param;
typedef PARAM_RESP_jvbu_ivp_fastmove_get_param PARAM_RESP_sdk_ivp_fastmove_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_fastmove_get_param;

typedef struct{
	GBOOL bEnable;
	int nSen;
	int nThreshold;
	int nAlarmSpeedLevel;
	int nStayTime;
	GBOOL bDrawFrame;
	GBOOL bFlushFrame;
	GBOOL bMarkObject;
	GBOOL bMarkAll;
	int maxRectW;
	int maxRectH;
	int maxRegion;
	int stRegion_cnt;
	struct{
		int stPoints_cnt;
		struct{
			int x;
			int y;
		} *stPoints;
	} *stRegion;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_fastmove_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_fastmove_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_fastmove_get_param *req, PARAM_RESP_sdk_ivp_fastmove_get_param *resp);
#  endif

//ivp_fastmove_set_param
#  if 1

//--- ivp_fastmove_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_fastmove_set_param PARAM_REQ_sdk_ivp_fastmove_set_param;
typedef PARAM_RESP_jvbu_ivp_fastmove_set_param PARAM_RESP_sdk_ivp_fastmove_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	int nSen;
	int nThreshold;
	int nAlarmSpeedLevel;
	int nStayTime;
	GBOOL bDrawFrame;
	GBOOL bFlushFrame;
	GBOOL bMarkObject;
	GBOOL bMarkAll;
	int stRegion_cnt;
	struct{
		int stPoints_cnt;
		struct{
			int x;
			int y;
		} *stPoints;
	} *stRegion;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_fastmove_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_fastmove_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_fastmove_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_fastmove_set_param *req, PARAM_RESP_sdk_ivp_fastmove_set_param *resp);
#  endif

//ivp_takeleft_get_param
#  if 1

//--- ivp_takeleft_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_takeleft_get_param PARAM_REQ_sdk_ivp_takeleft_get_param;
typedef PARAM_RESP_jvbu_ivp_takeleft_get_param PARAM_RESP_sdk_ivp_takeleft_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_takeleft_get_param;

typedef struct{
	GBOOL bEnable;
	int nTLMode;
	int nTLSen;
	int nAlarmDelay;
	int maxRectW;
	int maxRectH;
	int maxRegion;
	int stRegion_cnt;
	struct{
		int stPoints_cnt;
		struct{
			int x;
			int y;
		} *stPoints;
	} *stRegion;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_takeleft_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_takeleft_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_takeleft_get_param *req, PARAM_RESP_sdk_ivp_takeleft_get_param *resp);
#  endif

//ivp_takeleft_set_param
#  if 1

//--- ivp_takeleft_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_takeleft_set_param PARAM_REQ_sdk_ivp_takeleft_set_param;
typedef PARAM_RESP_jvbu_ivp_takeleft_set_param PARAM_RESP_sdk_ivp_takeleft_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	int nTLMode;
	int nTLSen;
	int nAlarmDelay;
	int stRegion_cnt;
	struct{
		int stPoints_cnt;
		struct{
			int x;
			int y;
		} *stPoints;
	} *stRegion;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_takeleft_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_takeleft_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_takeleft_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_takeleft_set_param *req, PARAM_RESP_sdk_ivp_takeleft_set_param *resp);
#  endif

//ivp_count_get_param
#  if 1

//--- ivp_count_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_count_get_param PARAM_REQ_sdk_ivp_count_get_param;
typedef PARAM_RESP_jvbu_ivp_count_get_param PARAM_RESP_sdk_ivp_count_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_count_get_param;

typedef struct{
	GBOOL bEnable;
	GBOOL bDrawFrame;
	int nLinePos;
	GBOOL bShowCount;
	int eCountOSDPos;
	int nCountOSDColor;
	int nCountSaveDays;
} PARAM_RESP_sdk_ivp_count_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_count_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_count_get_param *req, PARAM_RESP_sdk_ivp_count_get_param *resp);
#  endif

//ivp_count_set_param
#  if 1

//--- ivp_count_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_count_set_param PARAM_REQ_sdk_ivp_count_set_param;
typedef PARAM_RESP_jvbu_ivp_count_set_param PARAM_RESP_sdk_ivp_count_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	GBOOL bDrawFrame;
	int nLinePos;
	GBOOL bShowCount;
	int eCountOSDPos;
	int nCountOSDColor;
	int nCountSaveDays;
} PARAM_REQ_sdk_ivp_count_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_count_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_count_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_count_set_param *req, PARAM_RESP_sdk_ivp_count_set_param *resp);
#  endif

//ivp_vr_get_param
#  if 1

//--- ivp_vr_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_vr_get_param PARAM_REQ_sdk_ivp_vr_get_param;
typedef PARAM_RESP_jvbu_ivp_vr_get_param PARAM_RESP_sdk_ivp_vr_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_vr_get_param;

typedef struct{
	GBOOL bEnable;
	int nVRThreshold;
	int maxRectW;
	int maxRectH;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_vr_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_vr_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_vr_get_param *req, PARAM_RESP_sdk_ivp_vr_get_param *resp);
#  endif

//ivp_vr_set_param
#  if 1

//--- ivp_vr_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_vr_set_param PARAM_REQ_sdk_ivp_vr_set_param;
typedef PARAM_RESP_jvbu_ivp_vr_set_param PARAM_RESP_sdk_ivp_vr_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bEnable;
	int nVRThreshold;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_vr_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_vr_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_vr_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_vr_set_param *req, PARAM_RESP_sdk_ivp_vr_set_param *resp);
#  endif

//ivp_vr_flush_ref_scene
#  if 1

//--- ivp_vr_flush_ref_scene definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_vr_flush_ref_scene PARAM_REQ_sdk_ivp_vr_flush_ref_scene;
typedef PARAM_RESP_jvbu_ivp_vr_flush_ref_scene PARAM_RESP_sdk_ivp_vr_flush_ref_scene;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_vr_flush_ref_scene;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_vr_flush_ref_scene;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_vr_flush_ref_scene(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_vr_flush_ref_scene *req, PARAM_RESP_sdk_ivp_vr_flush_ref_scene *resp);
#  endif

//ivp_vr_trigger_analysis
#  if 1

//--- ivp_vr_trigger_analysis definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_vr_trigger_analysis PARAM_REQ_sdk_ivp_vr_trigger_analysis;
typedef PARAM_RESP_jvbu_ivp_vr_trigger_analysis PARAM_RESP_sdk_ivp_vr_trigger_analysis;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_vr_trigger_analysis;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_vr_trigger_analysis;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_vr_trigger_analysis(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_vr_trigger_analysis *req, PARAM_RESP_sdk_ivp_vr_trigger_analysis *resp);
#  endif

//ivp_vr_get_result
#  if 1

//--- ivp_vr_get_result definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_vr_get_result PARAM_REQ_sdk_ivp_vr_get_result;
typedef PARAM_RESP_jvbu_ivp_vr_get_result PARAM_RESP_sdk_ivp_vr_get_result;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_vr_get_result;

typedef struct{
	GBOOL bfinished;
	int nVariationRate;
	int interval_cnt;
	struct{
		int row;
		int start;
		int end;
	} *interval;
} PARAM_RESP_sdk_ivp_vr_get_result;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_vr_get_result(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_vr_get_result *req, PARAM_RESP_sdk_ivp_vr_get_result *resp);
#  endif

//ivp_asd_get_param
#  if 1

//--- ivp_asd_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_asd_get_param PARAM_REQ_sdk_ivp_asd_get_param;
typedef PARAM_RESP_jvbu_ivp_asd_get_param PARAM_RESP_sdk_ivp_asd_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_asd_get_param;

typedef struct{
	GBOOL bRiseEnable;
	int nRiseThreshold;
	int nRiseDetectTimeLen;
	int nRiseDiffThreshold;
	GBOOL bDropEnable;
	int nDropDetectTimeLen;
	int nDropDiffThreshold;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_RESP_sdk_ivp_asd_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_asd_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_asd_get_param *req, PARAM_RESP_sdk_ivp_asd_get_param *resp);
#  endif

//ivp_asd_set_param
#  if 1

//--- ivp_asd_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_asd_set_param PARAM_REQ_sdk_ivp_asd_set_param;
typedef PARAM_RESP_jvbu_ivp_asd_set_param PARAM_RESP_sdk_ivp_asd_set_param;
#    else

typedef struct{
	int channelid;
	GBOOL bRiseEnable;
	int nRiseThreshold;
	int nRiseDetectTimeLen;
	int nRiseDiffThreshold;
	GBOOL bDropEnable;
	int nDropDetectTimeLen;
	int nDropDiffThreshold;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bEnableRecord;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
} PARAM_REQ_sdk_ivp_asd_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ivp_asd_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_asd_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_asd_set_param *req, PARAM_RESP_sdk_ivp_asd_set_param *resp);
#  endif

//ivp_asd_get_result
#  if 1

//--- ivp_asd_get_result definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ivp_asd_get_result PARAM_REQ_sdk_ivp_asd_get_result;
typedef PARAM_RESP_jvbu_ivp_asd_get_result PARAM_RESP_sdk_ivp_asd_get_result;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ivp_asd_get_result;

typedef struct{
	int Info_cnt;
	struct{
		int dbfs;
		GBOOL dbfs_th_out;
		GBOOL dbfs_diff_out;
		int bg_energy;
		GBOOL reduce_out;
	} *Info;
} PARAM_RESP_sdk_ivp_asd_get_result;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ivp_asd_get_result(JCLink_t nLinkID, PARAM_REQ_sdk_ivp_asd_get_result *req, PARAM_RESP_sdk_ivp_asd_get_result *resp);
#  endif

#endif


//../../../doc/jgrpc/log.json
#if 1

//log_get
#  if 1

//--- log_get definition ----
/*
type: enum{SYSTEM,CONFIG,DATA_MANGE,ALARM,RECORD,USER,FILE_OPER,ALL}.
nSub: affiliated log counts
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_log_get PARAM_REQ_sdk_log_get;
typedef PARAM_RESP_jvbu_log_get PARAM_RESP_sdk_log_get;
#    else

typedef struct{
	char *date; //2014-11-18
	char *type; //SYSTEM,CONFIG,DATA_MANGE,ALARM,RECORD,USER,FILE_OPER,ALL
	int page;
} PARAM_REQ_sdk_log_get;

typedef struct{
	int log_pages_cnt;
	int cnt_per_page;
	int totalLog;
	int log_items_cnt;
	struct{
		char *time; //2014-11-18 08:43:57
		char *strlog; //the happened events
		GBOOL bNetuser;
		char *type; //SYSTEM,CONFIG,DATA_MANGE,ALARM,RECORD,USER,FILE_OPER,EXCEPTION,ALL
		char *username; //system
	} *log_items;
} PARAM_RESP_sdk_log_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_log_get(JCLink_t nLinkID, PARAM_REQ_sdk_log_get *req, PARAM_RESP_sdk_log_get *resp);
#  endif

//log_clear
#  if 1

//--- log_clear definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_log_clear PARAM_REQ_sdk_log_clear;
typedef PARAM_RESP_jvbu_log_clear PARAM_RESP_sdk_log_clear;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_log_clear;

typedef struct{
	int idle;
} PARAM_RESP_sdk_log_clear;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_log_clear(JCLink_t nLinkID, PARAM_REQ_sdk_log_clear *req, PARAM_RESP_sdk_log_clear *resp);
#  endif

#endif


//../../../doc/jgrpc/mdetect.json
#if 1

//mdetect_set_param
#  if 1

//--- mdetect_set_param definition ----
/*
The max number of rects is 4, 0 means full screen motion detect.
Param nSensitivity ranges from 0 to 255.
Param x,y,w,h is measured in pixels.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_mdetect_set_param PARAM_REQ_sdk_mdetect_set_param;
typedef PARAM_RESP_jvbu_mdetect_set_param PARAM_RESP_sdk_mdetect_set_param;
#    else

typedef struct{
	int channelid;
	struct{
		GBOOL bEnable;
		GBOOL bEnableRecord;
		int sensitivity;
		int delay;
		int videoChannel;
		GBOOL bSnapshot;
		int nPreset;
		GBOOL bBuzzing;
		GBOOL bOutClient;
		GBOOL bOutEmail;
		GBOOL bSendToAlmServer;
		int alarmout_cnt;
		struct{
			int almout_id;
			char *type; //unknown,door,pir,smoke,gas,curtain
			GBOOL bNormallyClosed;
		} *alarmout;
		GBOOL bUseGrids;
		int rects_cnt;
		struct{
			int x;
			int y;
			int w;
			int h;
		} *rects;
		struct{
			int value_cnt;
			int *value;
		} grids;
		struct{
			GBOOL bsos;
			GBOOL bAllTime;
			int maxTime;
			int time_cnt;
			struct{
				char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
				int begin_hour;
				int begin_min;
				int end_hour;
				int end_min;
			} *time;
		} task;
	} md;
} PARAM_REQ_sdk_mdetect_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_mdetect_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_mdetect_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_mdetect_set_param *req, PARAM_RESP_sdk_mdetect_set_param *resp);
#  endif

//mdetect_get_param
#  if 1

//--- mdetect_get_param definition ----
/*
The max number of rects is 4, 0 means full screen motion detect.
Param nSensitivity ranges from 0 to 255.
Param x,y,w,h is measured in pixels.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_mdetect_get_param PARAM_REQ_sdk_mdetect_get_param;
typedef PARAM_RESP_jvbu_mdetect_get_param PARAM_RESP_sdk_mdetect_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_mdetect_get_param;

typedef struct{
	GBOOL bEnable;
	GBOOL bAlarming;
	GBOOL bEnableRecord;
	int sensitivity;
	int delay;
	int videoChannel;
	GBOOL bSnapshot;
	int nPreset;
	GBOOL bBuzzing;
	GBOOL bOutClient;
	GBOOL bOutEmail;
	GBOOL bSendToAlmServer;
	int alarmout_cnt;
	struct{
		int almout_id;
		char *type; //unknown,door,pir,smoke,gas,curtain
		GBOOL bNormallyClosed;
	} *alarmout;
	GBOOL bUseGrids;
	int maxRect;
	int maxRectW;
	int maxRectH;
	int rects_cnt;
	struct{
		int x;
		int y;
		int w;
		int h;
	} *rects;
	struct{
		int cntRow;
		int cntCol;
		int strid;
		int value_cnt;
		int *value;
	} grids;
	struct{
		GBOOL bsos;
		GBOOL bAllTime;
		int maxTime;
		int time_cnt;
		struct{
			char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun
			int begin_hour;
			int begin_min;
			int end_hour;
			int end_min;
		} *time;
	} task;
} PARAM_RESP_sdk_mdetect_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_mdetect_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_mdetect_get_param *req, PARAM_RESP_sdk_mdetect_get_param *resp);
#  endif

//mdetect_balarming
#  if 1

//--- mdetect_balarming definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_mdetect_balarming PARAM_REQ_sdk_mdetect_balarming;
typedef PARAM_RESP_jvbu_mdetect_balarming PARAM_RESP_sdk_mdetect_balarming;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_mdetect_balarming;

typedef struct{
	GBOOL bMdetectAlarming;
} PARAM_RESP_sdk_mdetect_balarming;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_mdetect_balarming(JCLink_t nLinkID, PARAM_REQ_sdk_mdetect_balarming *req, PARAM_RESP_sdk_mdetect_balarming *resp);
#  endif

#endif


//../../../doc/jgrpc/osd.json
#if 1

//chnosd_get_param
#  if 1

//--- chnosd_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_chnosd_get_param PARAM_REQ_sdk_chnosd_get_param;
typedef PARAM_RESP_jvbu_chnosd_get_param PARAM_RESP_sdk_chnosd_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_chnosd_get_param;

typedef struct{
	GBOOL bShowOSD;
	char *timeFormat; //YYYY-MM-DD hh:mm:ss,MM/DD/YYYY hh:mm:ss,DD/MM/YYYY hh:mm:ss
	char *position; //left_top,left_bottom,right_top,right_bottom,hide
	char *timePos; //left_top,left_bottom,right_top,right_bottom,hide
	char *channelName; //HD IPC
	GBOOL bOsdInvColEn;
	GBOOL bLargeOSD;
} PARAM_RESP_sdk_chnosd_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_chnosd_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_chnosd_get_param *req, PARAM_RESP_sdk_chnosd_get_param *resp);
#  endif

//chnosd_set_param
#  if 1

//--- chnosd_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_chnosd_set_param PARAM_REQ_sdk_chnosd_set_param;
typedef PARAM_RESP_jvbu_chnosd_set_param PARAM_RESP_sdk_chnosd_set_param;
#    else

typedef struct{
	int channelid;
	struct{
		GBOOL bShowOSD;
		char *timeFormat; //YYYY-MM-DD hh:mm:ss,MM/DD/YYYY hh:mm:ss,DD/MM/YYYY hh:mm:ss
		char *position; //left_top,left_bottom,right_top,right_bottom,hide
		char *timePos; //left_top,left_bottom,right_top,right_bottom,hide
		char *channelName; //HD IPC
		GBOOL bOsdInvColEn;
		GBOOL bLargeOSD;
	} attr;
} PARAM_REQ_sdk_chnosd_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_chnosd_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_chnosd_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_chnosd_set_param *req, PARAM_RESP_sdk_chnosd_set_param *resp);
#  endif

//get_channel_names
#  if 1

//--- get_channel_names definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_get_channel_names PARAM_REQ_sdk_get_channel_names;
typedef PARAM_RESP_jvbu_get_channel_names PARAM_RESP_sdk_get_channel_names;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_get_channel_names;

typedef struct{
	int channelNames_cnt;
	char **channelNames; //ch1
	int attr_cnt;
	struct{
		int channelid;
		GBOOL bShowOSD;
		char *timeFormat; //YYYY-MM-DD hh:mm:ss,MM/DD/YYYY hh:mm:ss,DD/MM/YYYY hh:mm:ss
		char *position; //left_top,left_bottom,right_top,right_bottom
		char *timePos; //left_top,left_bottom,right_top,right_bottom
		char *channelName; //HD IPC
		GBOOL bOsdInvColEn;
		GBOOL bLargeOSD;
	} *attr;
} PARAM_RESP_sdk_get_channel_names;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_get_channel_names(JCLink_t nLinkID, PARAM_REQ_sdk_get_channel_names *req, PARAM_RESP_sdk_get_channel_names *resp);
#  endif

//set_channel_names
#  if 1

//--- set_channel_names definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_set_channel_names PARAM_REQ_sdk_set_channel_names;
typedef PARAM_RESP_jvbu_set_channel_names PARAM_RESP_sdk_set_channel_names;
#    else

typedef struct{
	int channelNames_cnt;
	char **channelNames; //ch1
	int attr_cnt;
	struct{
		int channelid;
		GBOOL bShowOSD;
		char *timeFormat; //YYYY-MM-DD hh:mm:ss,MM/DD/YYYY hh:mm:ss,DD/MM/YYYY hh:mm:ss
		char *position; //left_top,left_bottom,right_top,right_bottom,hide
		char *timePos; //left_top,left_bottom,right_top,right_bottom,hide
		char *channelName; //HD IPC
		GBOOL bOsdInvColEn;
		GBOOL bLargeOSD;
	} *attr;
} PARAM_REQ_sdk_set_channel_names;

typedef struct{
	int idle;
} PARAM_RESP_sdk_set_channel_names;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_set_channel_names(JCLink_t nLinkID, PARAM_REQ_sdk_set_channel_names *req, PARAM_RESP_sdk_set_channel_names *resp);
#  endif

//multi_line_osd_get
#  if 1

//--- multi_line_osd_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_multi_line_osd_get PARAM_REQ_sdk_multi_line_osd_get;
typedef PARAM_RESP_jvbu_multi_line_osd_get PARAM_RESP_sdk_multi_line_osd_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_multi_line_osd_get;

typedef struct{
	int maxRectW;
	int maxRectH;
	int OSDInfo_cnt;
	struct{
		char *align; //right,left
		int Info_cnt;
		char **Info; //osd1
		struct{
			char *BackColor; //0x00000000
			char *FrontColor; //0xFFFF0000
			char *BorderColor; //0x00000000
			int FontSize;
			int RelativePos_cnt;
			int *RelativePos;
		} OSDInfoWidget;
	} *OSDInfo;
} PARAM_RESP_sdk_multi_line_osd_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_multi_line_osd_get(JCLink_t nLinkID, PARAM_REQ_sdk_multi_line_osd_get *req, PARAM_RESP_sdk_multi_line_osd_get *resp);
#  endif

//remoteOSD
#  if 1

//--- remoteOSD definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_remoteOSD PARAM_REQ_sdk_remoteOSD;
typedef PARAM_RESP_jvbu_remoteOSD PARAM_RESP_sdk_remoteOSD;
#    else

typedef struct{
	int channelid;
	int OSDInfo_cnt;
	struct{
		char *align; //right,left
		int Info_cnt;
		char **Info; //osd1
		struct{
			char *BackColor; //0x00000000
			char *FrontColor; //0xFFFF0000
			char *BorderColor; //0x00000000
			int FontSize;
			int RelativePos_cnt;
			int *RelativePos;
		} OSDInfoWidget;
	} *OSDInfo;
} PARAM_REQ_sdk_remoteOSD;

typedef struct{
	int idle;
} PARAM_RESP_sdk_remoteOSD;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_remoteOSD(JCLink_t nLinkID, PARAM_REQ_sdk_remoteOSD *req, PARAM_RESP_sdk_remoteOSD *resp);
#  endif

#endif


//../../../doc/jgrpc/privacy.json
#if 1

//privacy_get_param
#  if 1

//--- privacy_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_privacy_get_param PARAM_REQ_sdk_privacy_get_param;
typedef PARAM_RESP_jvbu_privacy_get_param PARAM_RESP_sdk_privacy_get_param;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_privacy_get_param;

typedef struct{
	GBOOL bEnable;
	int maxRect;
	int maxW;
	int maxH;
	int rects_cnt;
	struct{
		int x;
		int y;
		int w;
		int h;
	} *rects;
} PARAM_RESP_sdk_privacy_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_privacy_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_privacy_get_param *req, PARAM_RESP_sdk_privacy_get_param *resp);
#  endif

//privacy_set_param
#  if 1

//--- privacy_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_privacy_set_param PARAM_REQ_sdk_privacy_set_param;
typedef PARAM_RESP_jvbu_privacy_set_param PARAM_RESP_sdk_privacy_set_param;
#    else

typedef struct{
	int channelid;
	struct{
		GBOOL bEnable;
		int rects_cnt;
		struct{
			int x;
			int y;
			int w;
			int h;
		} *rects;
	} region;
} PARAM_REQ_sdk_privacy_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_privacy_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_privacy_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_privacy_set_param *req, PARAM_RESP_sdk_privacy_set_param *resp);
#  endif

#endif


//../../../doc/jgrpc/ptz.json
#if 1

//ptz_ability_get
#  if 1

//--- ptz_ability_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_ability_get PARAM_REQ_sdk_ptz_ability_get;
typedef PARAM_RESP_jvbu_ptz_ability_get PARAM_RESP_sdk_ptz_ability_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_ability_get;

typedef struct{
	int max_preset;
	int max_patrol;
	int max_trail;
	int max_task;
} PARAM_RESP_sdk_ptz_ability_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_ability_get(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_ability_get *req, PARAM_RESP_sdk_ptz_ability_get *resp);
#  endif

//ptz_move_stat_get
#  if 1

//--- ptz_move_stat_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_move_stat_get PARAM_REQ_sdk_ptz_move_stat_get;
typedef PARAM_RESP_jvbu_ptz_move_stat_get PARAM_RESP_sdk_ptz_move_stat_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_move_stat_get;

typedef struct{
	int movespeed;
} PARAM_RESP_sdk_ptz_move_stat_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_move_stat_get(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_move_stat_get *req, PARAM_RESP_sdk_ptz_move_stat_get *resp);
#  endif

//ptz_move_start
#  if 1

//--- ptz_move_start definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_move_start PARAM_REQ_sdk_ptz_move_start;
typedef PARAM_RESP_jvbu_ptz_move_start PARAM_RESP_sdk_ptz_move_start;
#    else

typedef struct{
	int channelid;
	int panLeft;
	int tiltUp;
	int zoomIn;
} PARAM_REQ_sdk_ptz_move_start;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_move_start;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_move_start(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_move_start *req, PARAM_RESP_sdk_ptz_move_start *resp);
#  endif

//ptz_move_stop
#  if 1

//--- ptz_move_stop definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_move_stop PARAM_REQ_sdk_ptz_move_stop;
typedef PARAM_RESP_jvbu_ptz_move_stop PARAM_RESP_sdk_ptz_move_stop;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_move_stop;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_move_stop;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_move_stop(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_move_stop *req, PARAM_RESP_sdk_ptz_move_stop *resp);
#  endif

//ptz_fi_start
#  if 1

//--- ptz_fi_start definition ----
/*
fi speed ranges from -254 to 254;
 > 0, focus far or iris open, otherwise the opposite direction.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_fi_start PARAM_REQ_sdk_ptz_fi_start;
typedef PARAM_RESP_jvbu_ptz_fi_start PARAM_RESP_sdk_ptz_fi_start;
#    else

typedef struct{
	int channelid;
	int focusFar;
	int irisOpen;
} PARAM_REQ_sdk_ptz_fi_start;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_fi_start;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_fi_start(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_fi_start *req, PARAM_RESP_sdk_ptz_fi_start *resp);
#  endif

//ptz_fi_stop
#  if 1

//--- ptz_fi_stop definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_fi_stop PARAM_REQ_sdk_ptz_fi_stop;
typedef PARAM_RESP_jvbu_ptz_fi_stop PARAM_RESP_sdk_ptz_fi_stop;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_fi_stop;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_fi_stop;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_fi_stop(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_fi_stop *req, PARAM_RESP_sdk_ptz_fi_stop *resp);
#  endif

//ptz_preset_set
#  if 1

//--- ptz_preset_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_preset_set PARAM_REQ_sdk_ptz_preset_set;
typedef PARAM_RESP_jvbu_ptz_preset_set PARAM_RESP_sdk_ptz_preset_set;
#    else

typedef struct{
	int channelid;
	int presetno;
	char *name; //preset1
} PARAM_REQ_sdk_ptz_preset_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_preset_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_preset_set(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_preset_set *req, PARAM_RESP_sdk_ptz_preset_set *resp);
#  endif

//ptz_preset_set_direct
#  if 1

//--- ptz_preset_set_direct definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_preset_set_direct PARAM_REQ_sdk_ptz_preset_set_direct;
typedef PARAM_RESP_jvbu_ptz_preset_set_direct PARAM_RESP_sdk_ptz_preset_set_direct;
#    else

typedef struct{
	int channelid;
	int presetno;
} PARAM_REQ_sdk_ptz_preset_set_direct;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_preset_set_direct;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_preset_set_direct(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_preset_set_direct *req, PARAM_RESP_sdk_ptz_preset_set_direct *resp);
#  endif

//ptz_preset_locate
#  if 1

//--- ptz_preset_locate definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_preset_locate PARAM_REQ_sdk_ptz_preset_locate;
typedef PARAM_RESP_jvbu_ptz_preset_locate PARAM_RESP_sdk_ptz_preset_locate;
#    else

typedef struct{
	int channelid;
	int presetno;
} PARAM_REQ_sdk_ptz_preset_locate;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_preset_locate;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_preset_locate(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_preset_locate *req, PARAM_RESP_sdk_ptz_preset_locate *resp);
#  endif

//ptz_preset_delete
#  if 1

//--- ptz_preset_delete definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_preset_delete PARAM_REQ_sdk_ptz_preset_delete;
typedef PARAM_RESP_jvbu_ptz_preset_delete PARAM_RESP_sdk_ptz_preset_delete;
#    else

typedef struct{
	int channelid;
	int presetno;
} PARAM_REQ_sdk_ptz_preset_delete;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_preset_delete;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_preset_delete(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_preset_delete *req, PARAM_RESP_sdk_ptz_preset_delete *resp);
#  endif

//ptz_preset_delete_direct
#  if 1

//--- ptz_preset_delete_direct definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_preset_delete_direct PARAM_REQ_sdk_ptz_preset_delete_direct;
typedef PARAM_RESP_jvbu_ptz_preset_delete_direct PARAM_RESP_sdk_ptz_preset_delete_direct;
#    else

typedef struct{
	int channelid;
	int presetno;
} PARAM_REQ_sdk_ptz_preset_delete_direct;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_preset_delete_direct;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_preset_delete_direct(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_preset_delete_direct *req, PARAM_RESP_sdk_ptz_preset_delete_direct *resp);
#  endif

//ptz_presets_get
#  if 1

//--- ptz_presets_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_presets_get PARAM_REQ_sdk_ptz_presets_get;
typedef PARAM_RESP_jvbu_ptz_presets_get PARAM_RESP_sdk_ptz_presets_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_presets_get;

typedef struct{
	int presetsList_cnt;
	struct{
		int presetno;
		char *name; //preset1
	} *presetsList;
} PARAM_RESP_sdk_ptz_presets_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_presets_get(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_presets_get *req, PARAM_RESP_sdk_ptz_presets_get *resp);
#  endif

//ptz_patrol_create
#  if 1

//--- ptz_patrol_create definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_patrol_create PARAM_REQ_sdk_ptz_patrol_create;
typedef PARAM_RESP_jvbu_ptz_patrol_create PARAM_RESP_sdk_ptz_patrol_create;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_patrol_create;

typedef struct{
	int index;
} PARAM_RESP_sdk_ptz_patrol_create;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_patrol_create(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_patrol_create *req, PARAM_RESP_sdk_ptz_patrol_create *resp);
#  endif

//ptz_patrol_delete
#  if 1

//--- ptz_patrol_delete definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_patrol_delete PARAM_REQ_sdk_ptz_patrol_delete;
typedef PARAM_RESP_jvbu_ptz_patrol_delete PARAM_RESP_sdk_ptz_patrol_delete;
#    else

typedef struct{
	int channelid;
	int index;
} PARAM_REQ_sdk_ptz_patrol_delete;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_patrol_delete;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_patrol_delete(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_patrol_delete *req, PARAM_RESP_sdk_ptz_patrol_delete *resp);
#  endif

//ptz_patrols_get
#  if 1

//--- ptz_patrols_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_patrols_get PARAM_REQ_sdk_ptz_patrols_get;
typedef PARAM_RESP_jvbu_ptz_patrols_get PARAM_RESP_sdk_ptz_patrols_get;
#    else

typedef struct{
	int channelid;
	int patrolid;
} PARAM_REQ_sdk_ptz_patrols_get;

typedef struct{
	int patrolsList_cnt;
	struct{
		int patrolid;
		GBOOL bStart;
		int speed;
		int preset_cnt;
		struct{
			int presetno;
			char *name; //preset1
			int staySeconds;
		} *preset;
	} *patrolsList;
} PARAM_RESP_sdk_ptz_patrols_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_patrols_get(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_patrols_get *req, PARAM_RESP_sdk_ptz_patrols_get *resp);
#  endif

//ptz_patrol_add_node
#  if 1

//--- ptz_patrol_add_node definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_patrol_add_node PARAM_REQ_sdk_ptz_patrol_add_node;
typedef PARAM_RESP_jvbu_ptz_patrol_add_node PARAM_RESP_sdk_ptz_patrol_add_node;
#    else

typedef struct{
	int channelid;
	int patrolid;
	int presetno;
	int staySeconds;
} PARAM_REQ_sdk_ptz_patrol_add_node;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_patrol_add_node;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_patrol_add_node(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_patrol_add_node *req, PARAM_RESP_sdk_ptz_patrol_add_node *resp);
#  endif

//ptz_patrol_del_node
#  if 1

//--- ptz_patrol_del_node definition ----
/*
presetindex: the index of this node in patrol, start from 0. if -1, delete all the nodes in patrol.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_patrol_del_node PARAM_REQ_sdk_ptz_patrol_del_node;
typedef PARAM_RESP_jvbu_ptz_patrol_del_node PARAM_RESP_sdk_ptz_patrol_del_node;
#    else

typedef struct{
	int channelid;
	int patrolid;
	int presetindex;
} PARAM_REQ_sdk_ptz_patrol_del_node;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_patrol_del_node;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_patrol_del_node(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_patrol_del_node *req, PARAM_RESP_sdk_ptz_patrol_del_node *resp);
#  endif

//ptz_patrol_set_speed
#  if 1

//--- ptz_patrol_set_speed definition ----
/*
Speed ranges from 0 to 254.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_patrol_set_speed PARAM_REQ_sdk_ptz_patrol_set_speed;
typedef PARAM_RESP_jvbu_ptz_patrol_set_speed PARAM_RESP_sdk_ptz_patrol_set_speed;
#    else

typedef struct{
	int channelid;
	int patrolid;
	int speed;
} PARAM_REQ_sdk_ptz_patrol_set_speed;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_patrol_set_speed;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_patrol_set_speed(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_patrol_set_speed *req, PARAM_RESP_sdk_ptz_patrol_set_speed *resp);
#  endif

//ptz_patrol_set_stay_seconds
#  if 1

//--- ptz_patrol_set_stay_seconds definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_patrol_set_stay_seconds PARAM_REQ_sdk_ptz_patrol_set_stay_seconds;
typedef PARAM_RESP_jvbu_ptz_patrol_set_stay_seconds PARAM_RESP_sdk_ptz_patrol_set_stay_seconds;
#    else

typedef struct{
	int channelid;
	int patrolid;
	int staySeconds;
} PARAM_REQ_sdk_ptz_patrol_set_stay_seconds;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_patrol_set_stay_seconds;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_patrol_set_stay_seconds(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_patrol_set_stay_seconds *req, PARAM_RESP_sdk_ptz_patrol_set_stay_seconds *resp);
#  endif

//ptz_patrol_locate
#  if 1

//--- ptz_patrol_locate definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_patrol_locate PARAM_REQ_sdk_ptz_patrol_locate;
typedef PARAM_RESP_jvbu_ptz_patrol_locate PARAM_RESP_sdk_ptz_patrol_locate;
#    else

typedef struct{
	int channelid;
	int patrolid;
	int speed;
} PARAM_REQ_sdk_ptz_patrol_locate;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_patrol_locate;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_patrol_locate(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_patrol_locate *req, PARAM_RESP_sdk_ptz_patrol_locate *resp);
#  endif

//ptz_patrol_stop
#  if 1

//--- ptz_patrol_stop definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_patrol_stop PARAM_REQ_sdk_ptz_patrol_stop;
typedef PARAM_RESP_jvbu_ptz_patrol_stop PARAM_RESP_sdk_ptz_patrol_stop;
#    else

typedef struct{
	int channelid;
	int patrolid;
} PARAM_REQ_sdk_ptz_patrol_stop;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_patrol_stop;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_patrol_stop(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_patrol_stop *req, PARAM_RESP_sdk_ptz_patrol_stop *resp);
#  endif

//ptz_trail_rec
#  if 1

//--- ptz_trail_rec definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_trail_rec PARAM_REQ_sdk_ptz_trail_rec;
typedef PARAM_RESP_jvbu_ptz_trail_rec PARAM_RESP_sdk_ptz_trail_rec;
#    else

typedef struct{
	int channelid;
	int trailid;
	GBOOL bstart;
} PARAM_REQ_sdk_ptz_trail_rec;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_trail_rec;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_trail_rec(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_trail_rec *req, PARAM_RESP_sdk_ptz_trail_rec *resp);
#  endif

//ptz_trail_action
#  if 1

//--- ptz_trail_action definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_trail_action PARAM_REQ_sdk_ptz_trail_action;
typedef PARAM_RESP_jvbu_ptz_trail_action PARAM_RESP_sdk_ptz_trail_action;
#    else

typedef struct{
	int channelid;
	int trailid;
	GBOOL bstart;
} PARAM_REQ_sdk_ptz_trail_action;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_trail_action;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_trail_action(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_trail_action *req, PARAM_RESP_sdk_ptz_trail_action *resp);
#  endif

//ptz_guard_get
#  if 1

//--- ptz_guard_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_guard_get PARAM_REQ_sdk_ptz_guard_get;
typedef PARAM_RESP_jvbu_ptz_guard_get PARAM_RESP_sdk_ptz_guard_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_guard_get;

typedef struct{
	int preset;
	int stayseconds;
	GBOOL bstart;
} PARAM_RESP_sdk_ptz_guard_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_guard_get(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_guard_get *req, PARAM_RESP_sdk_ptz_guard_get *resp);
#  endif

//ptz_guard_set
#  if 1

//--- ptz_guard_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_guard_set PARAM_REQ_sdk_ptz_guard_set;
typedef PARAM_RESP_jvbu_ptz_guard_set PARAM_RESP_sdk_ptz_guard_set;
#    else

typedef struct{
	int channelid;
	int preset;
	int stayseconds;
} PARAM_REQ_sdk_ptz_guard_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_guard_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_guard_set(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_guard_set *req, PARAM_RESP_sdk_ptz_guard_set *resp);
#  endif

//ptz_guard_action
#  if 1

//--- ptz_guard_action definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_guard_action PARAM_REQ_sdk_ptz_guard_action;
typedef PARAM_RESP_jvbu_ptz_guard_action PARAM_RESP_sdk_ptz_guard_action;
#    else

typedef struct{
	int channelid;
	GBOOL bstart;
} PARAM_REQ_sdk_ptz_guard_action;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_guard_action;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_guard_action(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_guard_action *req, PARAM_RESP_sdk_ptz_guard_action *resp);
#  endif

//ptz_guard_pause
#  if 1

//--- ptz_guard_pause definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_guard_pause PARAM_REQ_sdk_ptz_guard_pause;
typedef PARAM_RESP_jvbu_ptz_guard_pause PARAM_RESP_sdk_ptz_guard_pause;
#    else

typedef struct{
	int channelid;
	GBOOL bpause;
} PARAM_REQ_sdk_ptz_guard_pause;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_guard_pause;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_guard_pause(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_guard_pause *req, PARAM_RESP_sdk_ptz_guard_pause *resp);
#  endif

//ptz_scan_get_speed
#  if 1

//--- ptz_scan_get_speed definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_scan_get_speed PARAM_REQ_sdk_ptz_scan_get_speed;
typedef PARAM_RESP_jvbu_ptz_scan_get_speed PARAM_RESP_sdk_ptz_scan_get_speed;
#    else

typedef struct{
	int channelid;
	int groupid;
} PARAM_REQ_sdk_ptz_scan_get_speed;

typedef struct{
	int speed;
} PARAM_RESP_sdk_ptz_scan_get_speed;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_scan_get_speed(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_scan_get_speed *req, PARAM_RESP_sdk_ptz_scan_get_speed *resp);
#  endif

//ptz_scan_set_left
#  if 1

//--- ptz_scan_set_left definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_scan_set_left PARAM_REQ_sdk_ptz_scan_set_left;
typedef PARAM_RESP_jvbu_ptz_scan_set_left PARAM_RESP_sdk_ptz_scan_set_left;
#    else

typedef struct{
	int channelid;
	int groupid;
} PARAM_REQ_sdk_ptz_scan_set_left;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_scan_set_left;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_scan_set_left(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_scan_set_left *req, PARAM_RESP_sdk_ptz_scan_set_left *resp);
#  endif

//ptz_scan_set_right
#  if 1

//--- ptz_scan_set_right definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_scan_set_right PARAM_REQ_sdk_ptz_scan_set_right;
typedef PARAM_RESP_jvbu_ptz_scan_set_right PARAM_RESP_sdk_ptz_scan_set_right;
#    else

typedef struct{
	int channelid;
	int groupid;
} PARAM_REQ_sdk_ptz_scan_set_right;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_scan_set_right;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_scan_set_right(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_scan_set_right *req, PARAM_RESP_sdk_ptz_scan_set_right *resp);
#  endif

//ptz_scan_set_up
#  if 1

//--- ptz_scan_set_up definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_scan_set_up PARAM_REQ_sdk_ptz_scan_set_up;
typedef PARAM_RESP_jvbu_ptz_scan_set_up PARAM_RESP_sdk_ptz_scan_set_up;
#    else

typedef struct{
	int channelid;
	int groupid;
} PARAM_REQ_sdk_ptz_scan_set_up;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_scan_set_up;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_scan_set_up(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_scan_set_up *req, PARAM_RESP_sdk_ptz_scan_set_up *resp);
#  endif

//ptz_scan_set_down
#  if 1

//--- ptz_scan_set_down definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_scan_set_down PARAM_REQ_sdk_ptz_scan_set_down;
typedef PARAM_RESP_jvbu_ptz_scan_set_down PARAM_RESP_sdk_ptz_scan_set_down;
#    else

typedef struct{
	int channelid;
	int groupid;
} PARAM_REQ_sdk_ptz_scan_set_down;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_scan_set_down;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_scan_set_down(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_scan_set_down *req, PARAM_RESP_sdk_ptz_scan_set_down *resp);
#  endif

//ptz_scan_start
#  if 1

//--- ptz_scan_start definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_scan_start PARAM_REQ_sdk_ptz_scan_start;
typedef PARAM_RESP_jvbu_ptz_scan_start PARAM_RESP_sdk_ptz_scan_start;
#    else

typedef struct{
	int channelid;
	int groupid;
	int speed;
} PARAM_REQ_sdk_ptz_scan_start;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_scan_start;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_scan_start(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_scan_start *req, PARAM_RESP_sdk_ptz_scan_start *resp);
#  endif

//ptz_ver_scan_start
#  if 1

//--- ptz_ver_scan_start definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_ver_scan_start PARAM_REQ_sdk_ptz_ver_scan_start;
typedef PARAM_RESP_jvbu_ptz_ver_scan_start PARAM_RESP_sdk_ptz_ver_scan_start;
#    else

typedef struct{
	int channelid;
	int groupid;
	int speed;
} PARAM_REQ_sdk_ptz_ver_scan_start;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_ver_scan_start;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_ver_scan_start(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_ver_scan_start *req, PARAM_RESP_sdk_ptz_ver_scan_start *resp);
#  endif

//ptz_wave_scan_start
#  if 1

//--- ptz_wave_scan_start definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_wave_scan_start PARAM_REQ_sdk_ptz_wave_scan_start;
typedef PARAM_RESP_jvbu_ptz_wave_scan_start PARAM_RESP_sdk_ptz_wave_scan_start;
#    else

typedef struct{
	int channelid;
	int groupid;
	int speed;
} PARAM_REQ_sdk_ptz_wave_scan_start;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_wave_scan_start;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_wave_scan_start(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_wave_scan_start *req, PARAM_RESP_sdk_ptz_wave_scan_start *resp);
#  endif

//ptz_random_scan_start
#  if 1

//--- ptz_random_scan_start definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_random_scan_start PARAM_REQ_sdk_ptz_random_scan_start;
typedef PARAM_RESP_jvbu_ptz_random_scan_start PARAM_RESP_sdk_ptz_random_scan_start;
#    else

typedef struct{
	int channelid;
	int groupid;
	int speed;
} PARAM_REQ_sdk_ptz_random_scan_start;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_random_scan_start;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_random_scan_start(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_random_scan_start *req, PARAM_RESP_sdk_ptz_random_scan_start *resp);
#  endif

//ptz_frame_scan_start
#  if 1

//--- ptz_frame_scan_start definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_frame_scan_start PARAM_REQ_sdk_ptz_frame_scan_start;
typedef PARAM_RESP_jvbu_ptz_frame_scan_start PARAM_RESP_sdk_ptz_frame_scan_start;
#    else

typedef struct{
	int channelid;
	int groupid;
	int speed;
} PARAM_REQ_sdk_ptz_frame_scan_start;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_frame_scan_start;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_frame_scan_start(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_frame_scan_start *req, PARAM_RESP_sdk_ptz_frame_scan_start *resp);
#  endif

//ptz_scan_stop
#  if 1

//--- ptz_scan_stop definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_scan_stop PARAM_REQ_sdk_ptz_scan_stop;
typedef PARAM_RESP_jvbu_ptz_scan_stop PARAM_RESP_sdk_ptz_scan_stop;
#    else

typedef struct{
	int channelid;
	int groupid;
} PARAM_REQ_sdk_ptz_scan_stop;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_scan_stop;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_scan_stop(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_scan_stop *req, PARAM_RESP_sdk_ptz_scan_stop *resp);
#  endif

//ptz_scan_set_speed
#  if 1

//--- ptz_scan_set_speed definition ----
/*
Speed ranges from 0 to 254.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_scan_set_speed PARAM_REQ_sdk_ptz_scan_set_speed;
typedef PARAM_RESP_jvbu_ptz_scan_set_speed PARAM_RESP_sdk_ptz_scan_set_speed;
#    else

typedef struct{
	int channelid;
	int groupid;
	int speed;
} PARAM_REQ_sdk_ptz_scan_set_speed;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_scan_set_speed;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_scan_set_speed(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_scan_set_speed *req, PARAM_RESP_sdk_ptz_scan_set_speed *resp);
#  endif

//ptz_auto
#  if 1

//--- ptz_auto definition ----
/*
Speed ranges from 0 to 254.
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_auto PARAM_REQ_sdk_ptz_auto;
typedef PARAM_RESP_jvbu_ptz_auto PARAM_RESP_sdk_ptz_auto;
#    else

typedef struct{
	int channelid;
	int speed;
} PARAM_REQ_sdk_ptz_auto;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_auto;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_auto(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_auto *req, PARAM_RESP_sdk_ptz_auto *resp);
#  endif

//ptz_get_auxs
#  if 1

//--- ptz_get_auxs definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_get_auxs PARAM_REQ_sdk_ptz_get_auxs;
typedef PARAM_RESP_jvbu_ptz_get_auxs PARAM_RESP_sdk_ptz_get_auxs;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_get_auxs;

typedef struct{
	int auxs_cnt;
	struct{
		int auxid;
		char *auxname; //”ÍÀ¢,∫ÏÕ‚µ∆
	} *auxs;
} PARAM_RESP_sdk_ptz_get_auxs;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_get_auxs(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_get_auxs *req, PARAM_RESP_sdk_ptz_get_auxs *resp);
#  endif

//ptz_aux_on
#  if 1

//--- ptz_aux_on definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_aux_on PARAM_REQ_sdk_ptz_aux_on;
typedef PARAM_RESP_jvbu_ptz_aux_on PARAM_RESP_sdk_ptz_aux_on;
#    else

typedef struct{
	int channelid;
	int auxid;
} PARAM_REQ_sdk_ptz_aux_on;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_aux_on;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_aux_on(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_aux_on *req, PARAM_RESP_sdk_ptz_aux_on *resp);
#  endif

//ptz_aux_off
#  if 1

//--- ptz_aux_off definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_aux_off PARAM_REQ_sdk_ptz_aux_off;
typedef PARAM_RESP_jvbu_ptz_aux_off PARAM_RESP_sdk_ptz_aux_off;
#    else

typedef struct{
	int channelid;
	int auxid;
} PARAM_REQ_sdk_ptz_aux_off;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_aux_off;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_aux_off(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_aux_off *req, PARAM_RESP_sdk_ptz_aux_off *resp);
#  endif

//ptz_aux_switch
#  if 1

//--- ptz_aux_switch definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_aux_switch PARAM_REQ_sdk_ptz_aux_switch;
typedef PARAM_RESP_jvbu_ptz_aux_switch PARAM_RESP_sdk_ptz_aux_switch;
#    else

typedef struct{
	int channelid;
	int auxid;
} PARAM_REQ_sdk_ptz_aux_switch;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_aux_switch;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_aux_switch(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_aux_switch *req, PARAM_RESP_sdk_ptz_aux_switch *resp);
#  endif

//ptz_zoom_zone
#  if 1

//--- ptz_zoom_zone definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_zoom_zone PARAM_REQ_sdk_ptz_zoom_zone;
typedef PARAM_RESP_jvbu_ptz_zoom_zone PARAM_RESP_sdk_ptz_zoom_zone;
#    else

typedef struct{
	int channelid;
	struct{
		int x;
		int y;
		int w;
		int h;
	} zoneinfo;
	int cmd;
} PARAM_REQ_sdk_ptz_zoom_zone;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_zoom_zone;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_zoom_zone(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_zoom_zone *req, PARAM_RESP_sdk_ptz_zoom_zone *resp);
#  endif

//ptz_com_get
#  if 1

//--- ptz_com_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_com_get PARAM_REQ_sdk_ptz_com_get;
typedef PARAM_RESP_jvbu_ptz_com_get PARAM_RESP_sdk_ptz_com_get;
#    else

typedef struct{
	int channelid;
	int comid;
} PARAM_REQ_sdk_ptz_com_get;

typedef struct{
	int com_cnt;
	struct{
		int comid;
		char *comuse; //RS485,RS232
		int protocol;
		int address;
		int baudrate;
		int databit;
		int stopbit;
		int check;
		int datactrl;
	} *com;
} PARAM_RESP_sdk_ptz_com_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_com_get(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_com_get *req, PARAM_RESP_sdk_ptz_com_get *resp);
#  endif

//ptz_com_set
#  if 1

//--- ptz_com_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_com_set PARAM_REQ_sdk_ptz_com_set;
typedef PARAM_RESP_jvbu_ptz_com_set PARAM_RESP_sdk_ptz_com_set;
#    else

typedef struct{
	int com_cnt;
	struct{
		int comid;
		char *comuse; //RS485,RS232
		int protocol;
		int address;
		int baudrate;
		int databit;
		int stopbit;
		int check;
		int datactrl;
	} *com;
} PARAM_REQ_sdk_ptz_com_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_com_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_com_set(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_com_set *req, PARAM_RESP_sdk_ptz_com_set *resp);
#  endif

//ptz_focus_param_get
#  if 1

//--- ptz_focus_param_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_focus_param_get PARAM_REQ_sdk_ptz_focus_param_get;
typedef PARAM_RESP_jvbu_ptz_focus_param_get PARAM_RESP_sdk_ptz_focus_param_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_focus_param_get;

typedef struct{
	char *sensitivity; //normal,low
	char *mode; //halfauto,auto,manual
	int Threshold;
	char *speed; //high,middle,slow
} PARAM_RESP_sdk_ptz_focus_param_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_focus_param_get(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_focus_param_get *req, PARAM_RESP_sdk_ptz_focus_param_get *resp);
#  endif

//ptz_focus_param_set
#  if 1

//--- ptz_focus_param_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_focus_param_set PARAM_REQ_sdk_ptz_focus_param_set;
typedef PARAM_RESP_jvbu_ptz_focus_param_set PARAM_RESP_sdk_ptz_focus_param_set;
#    else

typedef struct{
	int channelid;
	char *sensitivity; //normal,low
	char *mode; //halfauto,auto,manual
	int Threshold;
	char *speed; //high,middle,slow
} PARAM_REQ_sdk_ptz_focus_param_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_focus_param_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_focus_param_set(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_focus_param_set *req, PARAM_RESP_sdk_ptz_focus_param_set *resp);
#  endif

//ptz_time_task_list_get
#  if 1

//--- ptz_time_task_list_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_time_task_list_get PARAM_REQ_sdk_ptz_time_task_list_get;
typedef PARAM_RESP_jvbu_ptz_time_task_list_get PARAM_RESP_sdk_ptz_time_task_list_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_time_task_list_get;

typedef struct{
	int list_cnt;
	struct{
		int id;
		char *name; //—≤∫Ωœﬂ-1,—≤∫Ωœﬂ-2,…®√Ë,πÏº£-1,πÏº£-2,πÏº£-3,πÏº£-4, ÿÕ˚
	} *list;
} PARAM_RESP_sdk_ptz_time_task_list_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_time_task_list_get(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_time_task_list_get *req, PARAM_RESP_sdk_ptz_time_task_list_get *resp);
#  endif

//ptz_time_task_get
#  if 1

//--- ptz_time_task_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_time_task_get PARAM_REQ_sdk_ptz_time_task_get;
typedef PARAM_RESP_jvbu_ptz_time_task_get PARAM_RESP_sdk_ptz_time_task_get;
#    else

typedef struct{
	int channelid;
	int taskid;
} PARAM_REQ_sdk_ptz_time_task_get;

typedef struct{
	int task_cnt;
	struct{
		int taskid;
		GBOOL bEnable;
		int begin_hour;
		int begin_min;
		int end_hour;
		int end_min;
		int list_id;
	} *task;
} PARAM_RESP_sdk_ptz_time_task_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_time_task_get(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_time_task_get *req, PARAM_RESP_sdk_ptz_time_task_get *resp);
#  endif

//ptz_time_task_set
#  if 1

//--- ptz_time_task_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_time_task_set PARAM_REQ_sdk_ptz_time_task_set;
typedef PARAM_RESP_jvbu_ptz_time_task_set PARAM_RESP_sdk_ptz_time_task_set;
#    else

typedef struct{
	int channelid;
	int task_cnt;
	struct{
		int taskid;
		GBOOL bEnable;
		int begin_hour;
		int begin_min;
		int end_hour;
		int end_min;
		int list_id;
	} *task;
} PARAM_REQ_sdk_ptz_time_task_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_time_task_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_time_task_set(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_time_task_set *req, PARAM_RESP_sdk_ptz_time_task_set *resp);
#  endif

//ptz_factory_patrol_test
#  if 1

//--- ptz_factory_patrol_test definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_factory_patrol_test PARAM_REQ_sdk_ptz_factory_patrol_test;
typedef PARAM_RESP_jvbu_ptz_factory_patrol_test PARAM_RESP_sdk_ptz_factory_patrol_test;
#    else

typedef struct{
	int channelid;
	GBOOL bstart;
} PARAM_REQ_sdk_ptz_factory_patrol_test;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_factory_patrol_test;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_factory_patrol_test(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_factory_patrol_test *req, PARAM_RESP_sdk_ptz_factory_patrol_test *resp);
#  endif

//ptz_factory_af_adjust
#  if 1

//--- ptz_factory_af_adjust definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_factory_af_adjust PARAM_REQ_sdk_ptz_factory_af_adjust;
typedef PARAM_RESP_jvbu_ptz_factory_af_adjust PARAM_RESP_sdk_ptz_factory_af_adjust;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_factory_af_adjust;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_factory_af_adjust;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_factory_af_adjust(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_factory_af_adjust *req, PARAM_RESP_sdk_ptz_factory_af_adjust *resp);
#  endif

//ptz_factory_af_2M_checklens
#  if 1

//--- ptz_factory_af_2M_checklens definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_factory_af_2M_checklens PARAM_REQ_sdk_ptz_factory_af_2M_checklens;
typedef PARAM_RESP_jvbu_ptz_factory_af_2M_checklens PARAM_RESP_sdk_ptz_factory_af_2M_checklens;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_ptz_factory_af_2M_checklens;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_factory_af_2M_checklens;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_factory_af_2M_checklens(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_factory_af_2M_checklens *req, PARAM_RESP_sdk_ptz_factory_af_2M_checklens *resp);
#  endif

//ptz_factory_af_checkresult
#  if 1

//--- ptz_factory_af_checkresult definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_factory_af_checkresult PARAM_REQ_sdk_ptz_factory_af_checkresult;
typedef PARAM_RESP_jvbu_ptz_factory_af_checkresult PARAM_RESP_sdk_ptz_factory_af_checkresult;
#    else

typedef struct{
	int channelid;
	char *mode; //1M,INF
	char *speed; //fast,slow
} PARAM_REQ_sdk_ptz_factory_af_checkresult;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_factory_af_checkresult;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_factory_af_checkresult(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_factory_af_checkresult *req, PARAM_RESP_sdk_ptz_factory_af_checkresult *resp);
#  endif

//ptz_factory_af_zoom_test
#  if 1

//--- ptz_factory_af_zoom_test definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_factory_af_zoom_test PARAM_REQ_sdk_ptz_factory_af_zoom_test;
typedef PARAM_RESP_jvbu_ptz_factory_af_zoom_test PARAM_RESP_sdk_ptz_factory_af_zoom_test;
#    else

typedef struct{
	int channelid;
	char *action; //start, stop
	char *zoom; //near,far
	int speed;
} PARAM_REQ_sdk_ptz_factory_af_zoom_test;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_factory_af_zoom_test;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_factory_af_zoom_test(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_factory_af_zoom_test *req, PARAM_RESP_sdk_ptz_factory_af_zoom_test *resp);
#  endif

//ptz_factory_af_focus_test
#  if 1

//--- ptz_factory_af_focus_test definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_factory_af_focus_test PARAM_REQ_sdk_ptz_factory_af_focus_test;
typedef PARAM_RESP_jvbu_ptz_factory_af_focus_test PARAM_RESP_sdk_ptz_factory_af_focus_test;
#    else

typedef struct{
	int channelid;
	char *action; //start, stop
	char *focus; //near,far
	int speed;
} PARAM_REQ_sdk_ptz_factory_af_focus_test;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_factory_af_focus_test;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_factory_af_focus_test(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_factory_af_focus_test *req, PARAM_RESP_sdk_ptz_factory_af_focus_test *resp);
#  endif

//ptz_factory_af_sel_curve
#  if 1

//--- ptz_factory_af_sel_curve definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_factory_af_sel_curve PARAM_REQ_sdk_ptz_factory_af_sel_curve;
typedef PARAM_RESP_jvbu_ptz_factory_af_sel_curve PARAM_RESP_sdk_ptz_factory_af_sel_curve;
#    else

typedef struct{
	int channelid;
	int mode;
} PARAM_REQ_sdk_ptz_factory_af_sel_curve;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_factory_af_sel_curve;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_factory_af_sel_curve(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_factory_af_sel_curve *req, PARAM_RESP_sdk_ptz_factory_af_sel_curve *resp);
#  endif

//ptz_factory_preset_go
#  if 1

//--- ptz_factory_preset_go definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_ptz_factory_preset_go PARAM_REQ_sdk_ptz_factory_preset_go;
typedef PARAM_RESP_jvbu_ptz_factory_preset_go PARAM_RESP_sdk_ptz_factory_preset_go;
#    else

typedef struct{
	int channelid;
	int zoomPos;
	int focusPos;
} PARAM_REQ_sdk_ptz_factory_preset_go;

typedef struct{
	int idle;
} PARAM_RESP_sdk_ptz_factory_preset_go;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_ptz_factory_preset_go(JCLink_t nLinkID, PARAM_REQ_sdk_ptz_factory_preset_go *req, PARAM_RESP_sdk_ptz_factory_preset_go *resp);
#  endif

#endif


//../../../doc/jgrpc/record.json
#if 1

//record_get
#  if 1

//--- record_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_record_get PARAM_REQ_sdk_record_get;
typedef PARAM_RESP_jvbu_record_get PARAM_RESP_sdk_record_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_record_get;

typedef struct{
	int record_params_cnt;
	struct{
		int channelid;
		GBOOL brecording;
		GBOOL normal_record;
		GBOOL time_record;
		GBOOL disconnect_record;
		int packettimelen;
		struct{
			int maxTime;
			int time_cnt;
			struct{
				char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun,EveryDay
				int begin_hour;
				int begin_min;
				int end_hour;
				int end_min;
			} *time;
		} task;
	} *record_params;
} PARAM_RESP_sdk_record_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_record_get(JCLink_t nLinkID, PARAM_REQ_sdk_record_get *req, PARAM_RESP_sdk_record_get *resp);
#  endif

//record_set
#  if 1

//--- record_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_record_set PARAM_REQ_sdk_record_set;
typedef PARAM_RESP_jvbu_record_set PARAM_RESP_sdk_record_set;
#    else

typedef struct{
	int record_params_cnt;
	struct{
		int channelid;
		GBOOL normal_record;
		GBOOL time_record;
		GBOOL disconnect_record;
		int packettimelen;
		struct{
			int time_cnt;
			struct{
				char *week; //Mon,Tues,Wed,Thur,Fri,Sat,Sun,EveryDay
				int begin_hour;
				int begin_min;
				int end_hour;
				int end_min;
			} *time;
		} task;
	} *record_params;
} PARAM_REQ_sdk_record_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_record_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_record_set(JCLink_t nLinkID, PARAM_REQ_sdk_record_set *req, PARAM_RESP_sdk_record_set *resp);
#  endif

#endif


//../../../doc/jgrpc/remoteplay.json
#if 1

//get_record_list
#  if 1

//--- get_record_list definition ----
/*
errorcode : 
 0 : success;
 -1 : illegal channelid;
 -2 : record not exists;
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_get_record_list PARAM_REQ_sdk_get_record_list;
typedef PARAM_RESP_jvbu_get_record_list PARAM_RESP_sdk_get_record_list;
#    else

typedef struct{
	int channelid;
	char *starttime; //20151112102512
	char *endtime; //20151112194020
	int page;
} PARAM_REQ_sdk_get_record_list;

typedef struct{
	int totalPage;
	int totalFile;
	int cntFilePerPage;
	int recordlist_cnt;
	struct{
		char *date; //20151112
		char *filename; //01/N01085959
		int channelid;
		char *starttime; //20151112102512
		char *endtime; //20151112194020
		char *type; //normal,time,alarm,locked
	} *recordlist;
} PARAM_RESP_sdk_get_record_list;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_get_record_list(JCLink_t nLinkID, PARAM_REQ_sdk_get_record_list *req, PARAM_RESP_sdk_get_record_list *resp);
#  endif

//get_audio_status
#  if 1

//--- get_audio_status definition ----
/*
errorcode : 
 0 : success;
 -1 : illegal channelid;
 -2 : record not exists;
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_get_audio_status PARAM_REQ_sdk_get_audio_status;
typedef PARAM_RESP_jvbu_get_audio_status PARAM_RESP_sdk_get_audio_status;
#    else

typedef struct{
	char *session; //
} PARAM_REQ_sdk_get_audio_status;

typedef struct{
	GBOOL playing;
} PARAM_RESP_sdk_get_audio_status;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_get_audio_status(JCLink_t nLinkID, PARAM_REQ_sdk_get_audio_status *req, PARAM_RESP_sdk_get_audio_status *resp);
#  endif

//set_audio_status
#  if 1

//--- set_audio_status definition ----
/*
errorcode : 
 0 : success;
 -1 : illegal channelid;
 -2 : record not exists;
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_set_audio_status PARAM_REQ_sdk_set_audio_status;
typedef PARAM_RESP_jvbu_set_audio_status PARAM_RESP_sdk_set_audio_status;
#    else

typedef struct{
	char *session; //
	GBOOL play;
} PARAM_REQ_sdk_set_audio_status;

typedef struct{
	int idle;
} PARAM_RESP_sdk_set_audio_status;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_set_audio_status(JCLink_t nLinkID, PARAM_REQ_sdk_set_audio_status *req, PARAM_RESP_sdk_set_audio_status *resp);
#  endif

//play_record
#  if 1

//--- play_record definition ----
/*
errorcode : 
 0 : success;
 -1 : illegal channelid;
 -2 : record not exists;
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_play_record PARAM_REQ_sdk_play_record;
typedef PARAM_RESP_jvbu_play_record PARAM_RESP_sdk_play_record;
#    else

typedef struct{
	char *session; //
	int status;
	int speed;
	int frame;
} PARAM_REQ_sdk_play_record;

typedef struct{
	int idle;
} PARAM_RESP_sdk_play_record;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_play_record(JCLink_t nLinkID, PARAM_REQ_sdk_play_record *req, PARAM_RESP_sdk_play_record *resp);
#  endif

//play_record_over
#  if 1

//--- play_record_over definition ----
/*
errorcode : 
 0 : success;
 -1 : illegal channelid;
 -2 : record not exists;
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_play_record_over PARAM_REQ_sdk_play_record_over;
typedef PARAM_RESP_jvbu_play_record_over PARAM_RESP_sdk_play_record_over;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_play_record_over;

typedef struct{
	char *devid; //
	char *session; //
	int speed;
} PARAM_RESP_sdk_play_record_over;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_play_record_over(JCLink_t nLinkID, PARAM_REQ_sdk_play_record_over *req, PARAM_RESP_sdk_play_record_over *resp);
#  endif

//get_record_info
#  if 1

//--- get_record_info definition ----
/*
errorcode : 
 0 : success;
 -1 : illegal channelid;
 -2 : record not exists;
*/
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_get_record_info PARAM_REQ_sdk_get_record_info;
typedef PARAM_RESP_jvbu_get_record_info PARAM_RESP_sdk_get_record_info;
#    else

typedef struct{
	char *session; //
} PARAM_REQ_sdk_get_record_info;

typedef struct{
	int totalframe;
	int currframe;
} PARAM_RESP_sdk_get_record_info;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_get_record_info(JCLink_t nLinkID, PARAM_REQ_sdk_get_record_info *req, PARAM_RESP_sdk_get_record_info *resp);
#  endif

#endif


//../../../doc/jgrpc/snap.json
#if 1

//email_snap_get
#  if 1

//--- email_snap_get definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_email_snap_get PARAM_REQ_sdk_email_snap_get;
typedef PARAM_RESP_jvbu_email_snap_get PARAM_RESP_sdk_email_snap_get;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_email_snap_get;

typedef struct{
	int snap_task_cnt;
	struct{
		int channelid;
		GBOOL bEnable;
		int snaptime;
		int snapnum;
		int snapinterval;
	} *snap_task;
} PARAM_RESP_sdk_email_snap_get;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_email_snap_get(JCLink_t nLinkID, PARAM_REQ_sdk_email_snap_get *req, PARAM_RESP_sdk_email_snap_get *resp);
#  endif

//email_snap_set
#  if 1

//--- email_snap_set definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_email_snap_set PARAM_REQ_sdk_email_snap_set;
typedef PARAM_RESP_jvbu_email_snap_set PARAM_RESP_sdk_email_snap_set;
#    else

typedef struct{
	int snap_params_cnt;
	struct{
		int channelid;
		int snap_task_cnt;
		struct{
			GBOOL bEnable;
			int snaptime;
			int snapnum;
			int snapinterval;
		} *snap_task;
	} *snap_params;
} PARAM_REQ_sdk_email_snap_set;

typedef struct{
	int idle;
} PARAM_RESP_sdk_email_snap_set;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_email_snap_set(JCLink_t nLinkID, PARAM_REQ_sdk_email_snap_set *req, PARAM_RESP_sdk_email_snap_set *resp);
#  endif

#endif


//../../../doc/jgrpc/storage.json
#if 1

//storage_get_info
#  if 1

//--- storage_get_info definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_storage_get_info PARAM_REQ_sdk_storage_get_info;
typedef PARAM_RESP_jvbu_storage_get_info PARAM_RESP_sdk_storage_get_info;
#    else

typedef struct{
	int idle;
} PARAM_REQ_sdk_storage_get_info;

typedef struct{
	int disk_cnt;
	struct{
		int diskNum;
		char *devName; ///dev/sda
		char *sn; //wd32115
		int sizeMB;
		int usedMB;
		GBOOL bCurDisk;
		int partitionCount;
		int curPart;
		char *status; //normal, unformated, formating
		char *fs; //fat32, ntfs, jvfs
	} *disk;
} PARAM_RESP_sdk_storage_get_info;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_storage_get_info(JCLink_t nLinkID, PARAM_REQ_sdk_storage_get_info *req, PARAM_RESP_sdk_storage_get_info *resp);
#  endif

//storage_format
#  if 1

//--- storage_format definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_storage_format PARAM_REQ_sdk_storage_format;
typedef PARAM_RESP_jvbu_storage_format PARAM_RESP_sdk_storage_format;
#    else

typedef struct{
	int diskNum;
	char *diskName; ///dev/sda
	int partionNum;
} PARAM_REQ_sdk_storage_format;

typedef struct{
	int idle;
} PARAM_RESP_sdk_storage_format;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_storage_format(JCLink_t nLinkID, PARAM_REQ_sdk_storage_format *req, PARAM_RESP_sdk_storage_format *resp);
#  endif

//storage_format_get_progress
#  if 1

//--- storage_format_get_progress definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_storage_format_get_progress PARAM_REQ_sdk_storage_format_get_progress;
typedef PARAM_RESP_jvbu_storage_format_get_progress PARAM_RESP_sdk_storage_format_get_progress;
#    else

typedef struct{
	int diskNum;
	char *diskName; ///dev/sda
	int partionNum;
} PARAM_REQ_sdk_storage_format_get_progress;

typedef struct{
	GBOOL finished;
	int progress;
	char *status; //normal,fail
} PARAM_RESP_sdk_storage_format_get_progress;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_storage_format_get_progress(JCLink_t nLinkID, PARAM_REQ_sdk_storage_format_get_progress *req, PARAM_RESP_sdk_storage_format_get_progress *resp);
#  endif

#endif


//../../../doc/jgrpc/stream.json
#if 1

//get_stream_url
#  if 1

//--- get_stream_url definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_get_stream_url PARAM_REQ_sdk_get_stream_url;
typedef PARAM_RESP_jvbu_get_stream_url PARAM_RESP_sdk_get_stream_url;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_get_stream_url;

typedef struct{
	int list_cnt;
	struct{
		int id;
		char *stream0; //rtsp://172.16.33.221:8554/live0.264
		char *stream1; //rtsp://172.16.33.221:8554/live1.264
		char *stream2; //rtsp://172.16.33.221:8554/live1.264
	} *list;
} PARAM_RESP_sdk_get_stream_url;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_get_stream_url(JCLink_t nLinkID, PARAM_REQ_sdk_get_stream_url *req, PARAM_RESP_sdk_get_stream_url *resp);
#  endif

//stream_get_param
#  if 1

//--- stream_get_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_stream_get_param PARAM_REQ_sdk_stream_get_param;
typedef PARAM_RESP_jvbu_stream_get_param PARAM_RESP_sdk_stream_get_param;
#    else

typedef struct{
	int channelid;
	int streamid;
} PARAM_REQ_sdk_stream_get_param;

typedef struct{
	char *venctype; //h264,h265
	int width;
	int height;
	int frameRate;
	int bitRate;
	int ngop_s;
	int quality;
	char *rcMode; //cbr,vbr,fixQP
	char *smartencode; //open,close,autoopen
} PARAM_RESP_sdk_stream_get_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_stream_get_param(JCLink_t nLinkID, PARAM_REQ_sdk_stream_get_param *req, PARAM_RESP_sdk_stream_get_param *resp);
#  endif

//stream_get_params
#  if 1

//--- stream_get_params definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_stream_get_params PARAM_REQ_sdk_stream_get_params;
typedef PARAM_RESP_jvbu_stream_get_params PARAM_RESP_sdk_stream_get_params;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_stream_get_params;

typedef struct{
	int streams_cnt;
	struct{
		int channelid;
		int streamid;
		char *venctype; //h264,h265
		int width;
		int height;
		int frameRate;
		int bitRate;
		int ngop_s;
		int quality;
		char *rcMode; //cbr,vbr,fixQP
		char *smartencode; //open,close,autoopen
	} *streams;
} PARAM_RESP_sdk_stream_get_params;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_stream_get_params(JCLink_t nLinkID, PARAM_REQ_sdk_stream_get_params *req, PARAM_RESP_sdk_stream_get_params *resp);
#  endif

//stream_set_param
#  if 1

//--- stream_set_param definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_stream_set_param PARAM_REQ_sdk_stream_set_param;
typedef PARAM_RESP_jvbu_stream_set_param PARAM_RESP_sdk_stream_set_param;
#    else

typedef struct{
	int channelid;
	int streamid;
	char *venctype; //h264,h265
	int width;
	int height;
	int frameRate;
	int bitRate;
	int ngop_s;
	int quality;
	char *rcMode; //cbr,vbr,fixQP
	char *smartencode; //open,close,autoopen
} PARAM_REQ_sdk_stream_set_param;

typedef struct{
	int idle;
} PARAM_RESP_sdk_stream_set_param;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_stream_set_param(JCLink_t nLinkID, PARAM_REQ_sdk_stream_set_param *req, PARAM_RESP_sdk_stream_set_param *resp);
#  endif

//stream_set_params
#  if 1

//--- stream_set_params definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_stream_set_params PARAM_REQ_sdk_stream_set_params;
typedef PARAM_RESP_jvbu_stream_set_params PARAM_RESP_sdk_stream_set_params;
#    else

typedef struct{
	int streams_cnt;
	struct{
		int channelid;
		int streamid;
		char *venctype; //h264,h265
		int width;
		int height;
		int frameRate;
		int bitRate;
		int ngop_s;
		int quality;
		char *rcMode; //cbr,vbr,fixQP
		char *smartencode; //open,close,autoopen
	} *streams;
} PARAM_REQ_sdk_stream_set_params;

typedef struct{
	int idle;
} PARAM_RESP_sdk_stream_set_params;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_stream_set_params(JCLink_t nLinkID, PARAM_REQ_sdk_stream_set_params *req, PARAM_RESP_sdk_stream_set_params *resp);
#  endif

//stream_get_ability
#  if 1

//--- stream_get_ability definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_stream_get_ability PARAM_REQ_sdk_stream_get_ability;
typedef PARAM_RESP_jvbu_stream_get_ability PARAM_RESP_sdk_stream_get_ability;
#    else

typedef struct{
	int channelid;
	int streamid;
} PARAM_REQ_sdk_stream_get_ability;

typedef struct{
	int resolutions_cnt;
	struct{
		int width;
		int height;
		GBOOL bDefault;
		int maxKbps;
		int minKbps;
		int defKbps;
		int maxFr;
		int minFr;
		int defFr;
	} *resolutions;
	struct{
		int width;
		int height;
	} inputRes;
	int maxFramerate;
	int minFramerate;
	int maxQuality;
	int minQuality;
	int maxNGOP;
	int minNGOP;
	int maxKBitrate;
	int minKBitrate;
	GBOOL bSupportH265;
	GBOOL bSupportSmartEnc;
} PARAM_RESP_sdk_stream_get_ability;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_stream_get_ability(JCLink_t nLinkID, PARAM_REQ_sdk_stream_get_ability *req, PARAM_RESP_sdk_stream_get_ability *resp);
#  endif

//stream_get_all_ability
#  if 1

//--- stream_get_all_ability definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_stream_get_all_ability PARAM_REQ_sdk_stream_get_all_ability;
typedef PARAM_RESP_jvbu_stream_get_all_ability PARAM_RESP_sdk_stream_get_all_ability;
#    else

typedef struct{
	int channelid;
} PARAM_REQ_sdk_stream_get_all_ability;

typedef struct{
	int all_cnt;
	struct{
		int channelid;
		int streamid;
		int resolutions_cnt;
		struct{
			int width;
			int height;
			GBOOL bDefault;
			int maxKbps;
			int minKbps;
			int defKbps;
			int maxFr;
			int minFr;
			int defFr;
		} *resolutions;
		int maxQuality;
		int minQuality;
		int maxNGOP;
		int minNGOP;
		GBOOL bSupportH265;
		GBOOL bSupportSmartEnc;
	} *all;
} PARAM_RESP_sdk_stream_get_all_ability;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_stream_get_all_ability(JCLink_t nLinkID, PARAM_REQ_sdk_stream_get_all_ability *req, PARAM_RESP_sdk_stream_get_all_ability *resp);
#  endif

//stream_snapshot
#  if 1

//--- stream_snapshot definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_stream_snapshot PARAM_REQ_sdk_stream_snapshot;
typedef PARAM_RESP_jvbu_stream_snapshot PARAM_RESP_sdk_stream_snapshot;
#    else

typedef struct{
	int channelid;
	int streamid;
	int width;
	int height;
} PARAM_REQ_sdk_stream_snapshot;

typedef struct{
	char *snapshot; //url of snapshot
} PARAM_RESP_sdk_stream_snapshot;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_stream_snapshot(JCLink_t nLinkID, PARAM_REQ_sdk_stream_snapshot *req, PARAM_RESP_sdk_stream_snapshot *resp);
#  endif

//stream_snapshot_base64
#  if 1

//--- stream_snapshot_base64 definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_stream_snapshot_base64 PARAM_REQ_sdk_stream_snapshot_base64;
typedef PARAM_RESP_jvbu_stream_snapshot_base64 PARAM_RESP_sdk_stream_snapshot_base64;
#    else

typedef struct{
	int channelid;
	int streamid;
	int width;
	int height;
} PARAM_REQ_sdk_stream_snapshot_base64;

typedef struct{
	char *format; //jpg
	char *snapshot; //base64code
} PARAM_RESP_sdk_stream_snapshot_base64;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_stream_snapshot_base64(JCLink_t nLinkID, PARAM_REQ_sdk_stream_snapshot_base64 *req, PARAM_RESP_sdk_stream_snapshot_base64 *resp);
#  endif

//stream_request_idr
#  if 1

//--- stream_request_idr definition ----
#    ifdef JCSDK_EXPORTS

typedef PARAM_REQ_jvbu_stream_request_idr PARAM_REQ_sdk_stream_request_idr;
typedef PARAM_RESP_jvbu_stream_request_idr PARAM_RESP_sdk_stream_request_idr;
#    else

typedef struct{
	int channelid;
	int streamid;
} PARAM_REQ_sdk_stream_request_idr;

typedef struct{
	int idle;
} PARAM_RESP_sdk_stream_request_idr;
#    endif
JCSDK_API GBOOL JCSDK_CALLTYPE JCSDK_GRPC_stream_request_idr(JCLink_t nLinkID, PARAM_REQ_sdk_stream_request_idr *req, PARAM_RESP_sdk_stream_request_idr *resp);
#  endif

#endif

