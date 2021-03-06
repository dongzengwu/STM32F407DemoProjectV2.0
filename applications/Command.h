/*****************************************************************************************************
* FileName:                    Command.h
*
* Description:                 命令处理头文件
*
* Author:                      YanDengxue, Fiberhome-Fuhua
*
* Rev History:
*       <Author>        <Data>        <Hardware>     <Version>        <Description>
*     YanDengxue   2011-03-29 15:30       --           1.00             Create
*****************************************************************************************************/
#ifndef _Command_H
#define _Command_H

#ifdef __cplusplus
extern "C" {
#endif

//====================================================================================================
// Refer outside header file
//====================================================================================================
#include "UserTypesDef.h"
#include "Debug.h"

//====================================================================================================
// 宏定义
//====================================================================================================
#define XMODEM_SOH 0x01u
#define XMODEM_EOT 0x04u
#define XMODEM_ACK 0x06u
#define XMODEM_NAK 0x15u
#define XMODEM_CAN 0x18u

//====================================================================================================
// 外部函数声明
//====================================================================================================
extern int32 RunCommand(char const *args);

#ifdef __cplusplus
}
#endif

#endif


