// uart layer for LPC1850
// interfaces between CMSIS UART API and simplified UART API that
// the bootloader requires
// $Id: uart.c 3893 2015-05-12 11:46:44Z andy $

#include <stdint.h>
#include "lpc18xx_uart.h"
#include "lpc18xx_scu.h"
#include "LPC18xx_uart.h"
#include "host.h"

// initializes the uart for sending and receiving
void Host_Initialize
  (
  uint32_t baudrate                                      // baudrate in kbps
  )
{
  // bootloader has configured UART0 to use IRC at 12MHz, 8N1
  // we just need to change the baudrate

  UART_CFG_Type UartConfig;
  UART_FIFO_CFG_Type UartFifoConfig;

  scu_pinmux(2, 0, MD_PLN,                  FUNC1); // P2_0 U0_TXD
  scu_pinmux(2, 1, MD_ZI | MD_EZI | MD_PLN, FUNC1); // P2_1 U0_RXD

  LPC_CCU1->CLK_M3_USART0_CFG = 0x00000001;
  
  UartFifoConfig.FIFO_Level      = UART_FIFO_TRGLEV0;
  UartFifoConfig.FIFO_ResetRxBuf = DISABLE;
  UartFifoConfig.FIFO_ResetTxBuf = DISABLE;
  UartFifoConfig.FIFO_DMAMode    = DISABLE;
  UART_FIFOConfig(LPC_USART0, &UartFifoConfig); 
  
  UartConfig.Baud_rate = 57600;
  UartConfig.Databits  = UART_DATABIT_8;
  UartConfig.Parity    = UART_PARITY_NONE;
  UartConfig.Stopbits  = UART_STOPBIT_1;
  UART_Init(LPC_USART0, &UartConfig);
  
  UART_TxCmd(LPC_USART0, ENABLE);
}

// sends data from the UART
void Host_SendData
  (
  uint8_t *data,
  int length
  )
{
  UART_Send(LPC_USART0, data, length, BLOCKING);
}

// receives data from the UART and stores it in a buffer
// returns number of bytes received or zero for none
// should return immediately if there is no data to be read
int Host_ReceiveData
  (
  uint8_t *buffer,
  int maxlength
  )
{
  return UART_Receive(LPC_USART0, buffer, maxlength, NONE_BLOCKING);
}
