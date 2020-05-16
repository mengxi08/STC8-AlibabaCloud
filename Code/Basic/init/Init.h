#ifndef _Init_H_
#define _Init_H_
//------------------------------------------------------------------------------------------------//
#include "MCUdef.h"
#include "delay.h"
#include "uart.h"
#include "CloudHandle.h"
#include "DS18B20.h"
#include "LCD1602.h"
#include "GY_25.h"
#include "LED.h"
//------------------------------------------------------------------------------------------------//
void Init(void);
//------------------------------------------------------------------------------------------------//
#define UART_8(_BTL, _T, _SMOD) (256 - (SMOD_T(_SMOD) * _CPU_CLOCK_HZ_ / _BTL / 32 / _T))
#define UART_16(_BTL, _T) (65536 - (_CPU_CLOCK_HZ_ / _BTL / 4 / _T))
#define SMOD_T(_SMOD) (_SMOD ? 2 : 1)
//------------------------------------------------------------------------------------------------//
#endif