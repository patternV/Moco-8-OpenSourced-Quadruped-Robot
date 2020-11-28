#ifndef __NRF24L01_H
#define __NRF24L01_H	 		  
#include "sys.h"


#define NRF_READ_REG        0x00  	// ??????
#define NRF_WRITE_REG       0x20 	// ??????
#define R_RX_PL_WID   	0x60
#define RD_RX_PLOAD     0x61  	// ????????
#define WR_TX_PLOAD     0xA0  	// ???????
#define FLUSH_TX        0xE1 	// ???? FIFO??
#define FLUSH_RX        0xE2  	// ???? FIFO??
#define REUSE_TX_PL     0xE3  	// ??????????
#define NOP             0xFF  	// ??
//*************************************SPI(nRF24L01)?????****************************************************
#define CONFIG          0x00  // ??????,CRC??????????????
#define EN_AA           0x01  // ????????
#define EN_RXADDR       0x02  // ??????
#define SETUP_AW        0x03  // ????????
#define SETUP_RETR      0x04  // ????????
#define RF_CH           0x05  // ??????
#define RF_SETUP        0x06  // ???????????
#define NRFRegSTATUS    0x07  // ?????
#define OBSERVE_TX      0x08  // ??????
#define CD              0x09  // ????           
#define RX_ADDR_P0      0x0A  // ??0??????
#define RX_ADDR_P1      0x0B  // ??1??????
#define RX_ADDR_P2      0x0C  // ??2??????
#define RX_ADDR_P3      0x0D  // ??3??????
#define RX_ADDR_P4      0x0E  // ??4??????
#define RX_ADDR_P5      0x0F  // ??5??????
#define TX_ADDR         0x10  // ???????
#define RX_PW_P0        0x11  // ????0??????
#define RX_PW_P1        0x12  // ????1??????
#define RX_PW_P2        0x13  // ????2??????
#define RX_PW_P3        0x14  // ????3??????
#define RX_PW_P4        0x15  // ????4??????
#define RX_PW_P5        0x16  // ????5??????
#define FIFO_STATUS     0x17  // FIFO???????????
//**************************************************************************************
//*********************************************NRF24L01*************************************
#define RX_DR				6		//????
#define TX_DS				5
#define MAX_RT			4

#define MODEL_RX				1			//????
#define MODEL_TX				2			//????
#define MODEL_RX2				3			//????2,??????
#define MODEL_TX2				4			//????2,??????

#define RX_PLOAD_WIDTH  32  	
#define TX_PLOAD_WIDTH  32  	
#define TX_ADR_WIDTH    5 	 	
#define RX_ADR_WIDTH    5   	
typedef unsigned          char uint8_t;
extern 	u8 	NRF24L01_RXDATA[RX_PLOAD_WIDTH];		//nrf24l01??????
extern 	u8 	NRF24L01_TXDATA[RX_PLOAD_WIDTH];		//nrf24l01???????
// extern 	u8  TX_ADDRESS[TX_ADR_WIDTH];						//????
// extern 	u8  RX_ADDRESS[RX_ADR_WIDTH];						//????

void Nrf24l01_Init(u8 model, u8 ch);				//???,model=1/2/3/4,ch???????
void NRF_TxPacket(uint8_t * tx_buf, uint8_t len);			//?????,??model 2/4
void NRF_TxPacket_AP(uint8_t * tx_buf, uint8_t len);	//?????,??model 3
uint8_t NRF_Read_Reg(uint8_t reg);
uint8_t NRF_Write_Reg(uint8_t reg, uint8_t value);
uint8_t NRF_Read_Buf(uint8_t reg, uint8_t *pBuf, uint8_t uchars);
uint8_t Nrf24l01_Check(void);

#endif















