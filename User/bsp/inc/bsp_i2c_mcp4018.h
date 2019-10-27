/*
*********************************************************************************************************
*
*	模块名称 : 数字电位器MCP4018驱动模块
*	文件名称 : bsp_i2c_mcp4018.h
*	版    本 : V1.0
*	说    明 : 头文件
*
*	Copyright (C), 2018-2030, 安富莱电子 www.armfly.com
*
*********************************************************************************************************
*/

#ifndef _BSP_MCP4018_H
#define _BSP_MCP4018_H

#define MCP4018_SLAVE_ADDRESS 0x5E /* I2C从机地址 */

void bsp_InitMCP4018(void);
void MCP4018_WriteData(uint8_t _ucOpecode);
uint8_t MCP4018_ReadData(void);

#endif

/***************************** 安富莱电子 www.armfly.com (END OF FILE) *********************************/