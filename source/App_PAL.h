/* Copyright (C) 2020 Mono Wireless Inc. All Rights Reserved.    *
 * Released under MW-SLA-*J,*E (MONO WIRELESS SOFTWARE LICENSE   *
 * AGREEMENT).                                                   */

/** @file
 * App_PAL/App_Tagの定義
 */

#ifndef  APPPAL_H_INCLUDED
#define  APPPAL_H_INCLUDED

/*
 * パケット識別子
 */
#define PKT_ID_NOCONNECT 0x00
#define PKT_ID_MAG 0x01
#define PKT_ID_AMB 0x02
#define PKT_ID_MOT 0x03
#define PKT_ID_IRC 0x04
#define PKT_ID_LED 0x11

/*
 * パケット識別子 (App_Tag)
 */
#define PKT_ID_STANDARD 0x10
#define PKT_ID_LM61 0x11
#define PKT_ID_SHT21 0x31
#define PKT_ID_ADT7410 0x32
#define PKT_ID_MPL115A2 0x33
#define PKT_ID_LIS3DH 0x34
#define PKT_ID_ADXL345 0x35
#define PKT_ID_TSL2561 0x36
#define PKT_ID_L3GD20 0x37
#define PKT_ID_S1105902 0x38
#define PKT_ID_BME280 0x39
#define PKT_ID_IO_TIMER 0x51
#define PKT_ID_MAX31855 0x61
#define PKT_ID_ADXL362 0x62
#define PKT_ID_UART 0x81
#define PKT_ID_ADXL345_LOWENERGY 0xA1
#define PKT_ID_MULTISENSOR 0xD1
#define PKT_ID_BUTTON 0xFE

/**
 * PALのデータの属性など 
 */
#define HALLIC	0x00
#define TEMP	0x01
#define HUM		0x02
#define ILLUM	0x03
#define ACCEL	0x04

#define ADC		0x30
#define DIO		0x31
#define EEPROM	0x32

#define TYPE_CHAR		0x00
#define TYPE_SHORT		0x01
#define TYPE_LONG		0x02
#define TYPE_VARIABLE	0x03

#define TYPE_SIGNED		0x04
#define TYPE_UNSIGNED	0x00

#define USE_EXBYTE		0x10
#define UNUSE_EXBYTE	0x00

#define ERROR			0x80

// 受信したときの共通データ
typedef struct _tsRxPktInfo{
	uint8	u8lqi_1st;		//	LQI
	uint32	u32addr_1st;	//	アドレス
	uint32	u32addr_rcvr;	//	受信機アドレス
	uint8	u8id;			//	ID
	uint16	u16fct;			//	FCT
	uint8	u8pkt;			//	子機のセンサモード
} tsRxPktInfo;

#endif  /* MASTER_H_INCLUDED */

/****************************************************************************/
/***        END OF FILE                                                   ***/
/****************************************************************************/
