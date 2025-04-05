// erasing, programming and verifying of SPIFI flash GD25Q16E on
// Tested on NGX LPC1833 evaluation board
// $Id: $

#include <stdint.h>
#include "lpc_types.h"
#include "LPC18xx.h"
#include "system_LPC18xx.h"
#include "descriptor.h"

// bootloader version
#define VERSION 1

#ifdef GD25Q16E
/// bootloader descriptor
// values must be little-endian
const descriptor_t Descriptor =
{
  DESCRIPTOR_HEADER,                           // must be DESCRIPTOR_HEADER
  DESCRIPTOR_VERSION,                          // must be DESCRIPTOR_VERSION
  BOOTLOADER_FUNC_BASIC,                       // bootloader functionality (ORing of BOOTLOADER_FUNC_xxx)
  VERSION,                                     // version number of bootloader
  0x00000000,                                  // programmable memory start address
  0x001FFFFF,                                  // programmable memory end address
  0x10000500,                                  // ram start address (for bootloader storage)
  0x10007FFF,                                  // ram end address (for bootloader storage)
  0x10000,                                     // programmable sector size in bytes
  0xFF,                                        // programmable memory erased value
  256,                                         // number of bytes to program at once
  115200,                                      // communication baudrate
  DESCRIPTOR_BOOTSTRAP_CORTEXUART,             // use ISP to download this bootloader
  57600,                                       // baudrate to use for downloading bootloader
  0,                                           // ram address for commmand mailbox (0 = not used)
  0,                                           // ram address for response mailbox (0 = not used)
  0,                                           // number of ram mailboxes in each direction (0 = not used)
  "LPC1833",                                   // name of device
  "GD25Q16E LPC183x",                          // name (DESCRIPTOR_MAXNAMELENGTH characters or shorter)
  "Quad SPIFI",                                // description (DESCRIPTOR_MAXDESCLENGTH characters or shorter)
  "",                                          // notes (DESCRIPTOE_MAXNOTESLENGTH characters or shorter) - use semicolons for newlines
  DESCRIPTOR_FOOTER                            // must be DESCRIPTOR_FOOTER
};
#endif // GD25Q16E

#ifdef GD25Q32E
/// bootloader descriptor
// values must be little-endian
const descriptor_t Descriptor =
{
  DESCRIPTOR_HEADER,                           // must be DESCRIPTOR_HEADER
  DESCRIPTOR_VERSION,                          // must be DESCRIPTOR_VERSION
  BOOTLOADER_FUNC_BASIC,                       // bootloader functionality (ORing of BOOTLOADER_FUNC_xxx)
  VERSION,                                     // version number of bootloader
  0x00000000,                                  // programmable memory start address
  0x003FFFFF,                                  // programmable memory end address
  0x10000500,                                  // ram start address (for bootloader storage)
  0x10007FFF,                                  // ram end address (for bootloader storage)
  0x10000,                                     // programmable sector size in bytes
  0xFF,                                        // programmable memory erased value
  256,                                         // number of bytes to program at once
  115200,                                      // communication baudrate
  DESCRIPTOR_BOOTSTRAP_CORTEXUART,             // use ISP to download this bootloader
  57600,                                       // baudrate to use for downloading bootloader
  0,                                           // ram address for commmand mailbox (0 = not used)
  0,                                           // ram address for response mailbox (0 = not used)
  0,                                           // number of ram mailboxes in each direction (0 = not used)
  "LPC1833",                                   // name of device
  "GD25Q32E LPC183x",                          // name (DESCRIPTOR_MAXNAMELENGTH characters or shorter)
  "Quad SPIFI",                                // description (DESCRIPTOR_MAXDESCLENGTH characters or shorter)
  "",                                          // notes (DESCRIPTOE_MAXNOTESLENGTH characters or shorter) - use semicolons for newlines
  DESCRIPTOR_FOOTER                            // must be DESCRIPTOR_FOOTER
};
#endif // GD25Q32E

#ifdef GD25Q64E
/// bootloader descriptor
// values must be little-endian
const descriptor_t Descriptor =
{
  DESCRIPTOR_HEADER,                           // must be DESCRIPTOR_HEADER
  DESCRIPTOR_VERSION,                          // must be DESCRIPTOR_VERSION
  BOOTLOADER_FUNC_BASIC,                       // bootloader functionality (ORing of BOOTLOADER_FUNC_xxx)
  VERSION,                                     // version number of bootloader
  0x00000000,                                  // programmable memory start address
  0x007FFFFF,                                  // programmable memory end address
  0x10000500,                                  // ram start address (for bootloader storage)
  0x10007FFF,                                  // ram end address (for bootloader storage)
  0x10000,                                     // programmable sector size in bytes
  0xFF,                                        // programmable memory erased value
  256,                                         // number of bytes to program at once
  115200,                                      // communication baudrate
  DESCRIPTOR_BOOTSTRAP_CORTEXUART,             // use ISP to download this bootloader
  57600,                                       // baudrate to use for downloading bootloader
  0,                                           // ram address for commmand mailbox (0 = not used)
  0,                                           // ram address for response mailbox (0 = not used)
  0,                                           // number of ram mailboxes in each direction (0 = not used)
  "LPC1833",                                   // name of device
  "GD25Q64E LPC183x",                          // name (DESCRIPTOR_MAXNAMELENGTH characters or shorter)
  "Quad SPIFI",                                // description (DESCRIPTOR_MAXDESCLENGTH characters or shorter)
  "",                                          // notes (DESCRIPTOE_MAXNOTESLENGTH characters or shorter) - use semicolons for newlines
  DESCRIPTOR_FOOTER                            // must be DESCRIPTOR_FOOTER
};
#endif // GD25Q64E

#ifdef GD25Q80E
/// bootloader descriptor
// values must be little-endian
const descriptor_t Descriptor =
{
  DESCRIPTOR_HEADER,                           // must be DESCRIPTOR_HEADER
  DESCRIPTOR_VERSION,                          // must be DESCRIPTOR_VERSION
  BOOTLOADER_FUNC_BASIC,                       // bootloader functionality (ORing of BOOTLOADER_FUNC_xxx)
  VERSION,                                     // version number of bootloader
  0x00000000,                                  // programmable memory start address
  0x000FFFFF,                                  // programmable memory end address
  0x10000500,                                  // ram start address (for bootloader storage)
  0x10007FFF,                                  // ram end address (for bootloader storage)
  0x10000,                                     // programmable sector size in bytes
  0xFF,                                        // programmable memory erased value
  256,                                         // number of bytes to program at once
  115200,                                      // communication baudrate
  DESCRIPTOR_BOOTSTRAP_CORTEXUART,             // use ISP to download this bootloader
  57600,                                       // baudrate to use for downloading bootloader
  0,                                           // ram address for commmand mailbox (0 = not used)
  0,                                           // ram address for response mailbox (0 = not used)
  0,                                           // number of ram mailboxes in each direction (0 = not used)
  "LPC1833",                                   // name of device
  "GD25Q80E LPC183x",                          // name (DESCRIPTOR_MAXNAMELENGTH characters or shorter)
  "Quad SPIFI",                                // description (DESCRIPTOR_MAXDESCLENGTH characters or shorter)
  "",                                          // notes (DESCRIPTOE_MAXNOTESLENGTH characters or shorter) - use semicolons for newlines
  DESCRIPTOR_FOOTER                            // must be DESCRIPTOR_FOOTER
};
#endif // GD25Q80E

#ifdef GD25Q128E
/// bootloader descriptor
// values must be little-endian
const descriptor_t Descriptor =
{
  DESCRIPTOR_HEADER,                           // must be DESCRIPTOR_HEADER
  DESCRIPTOR_VERSION,                          // must be DESCRIPTOR_VERSION
  BOOTLOADER_FUNC_BASIC,                       // bootloader functionality (ORing of BOOTLOADER_FUNC_xxx)
  VERSION,                                     // version number of bootloader
  0x00000000,                                  // programmable memory start address
  0x00FFFFFF,                                  // programmable memory end address
  0x10000500,                                  // ram start address (for bootloader storage)
  0x10007FFF,                                  // ram end address (for bootloader storage)
  0x10000,                                     // programmable sector size in bytes
  0xFF,                                        // programmable memory erased value
  256,                                         // number of bytes to program at once
  115200,                                      // communication baudrate
  DESCRIPTOR_BOOTSTRAP_CORTEXUART,             // use ISP to download this bootloader
  57600,                                       // baudrate to use for downloading bootloader
  0,                                           // ram address for commmand mailbox (0 = not used)
  0,                                           // ram address for response mailbox (0 = not used)
  0,                                           // number of ram mailboxes in each direction (0 = not used)
  "LPC1833",                                   // name of device
  "GD25Q128E LPC183x",                         // name (DESCRIPTOR_MAXNAMELENGTH characters or shorter)
  "Quad SPIFI",                                // description (DESCRIPTOR_MAXDESCLENGTH characters or shorter)
  "",                                          // notes (DESCRIPTOE_MAXNOTESLENGTH characters or shorter) - use semicolons for newlines
  DESCRIPTOR_FOOTER                            // must be DESCRIPTOR_FOOTER
};
#endif // GD25Q128E

// memory access macros
#define M8(adr)  (*((volatile unsigned char  *) (adr)))
#define M16(adr) (*((volatile unsigned short *) (adr)))
#define M32(adr) (*((volatile unsigned long  *) (adr)))

//#define FALSE 0
//#define TRUE  (!FALSE)

#define LPC_SPIFI_BASE 0x40003000

#define SPIFI_MAPPED_BASE_ADDR 0x14000000

// supported access mode for SPIFI device
#define ACCESS_MODE_DUAL   0
#define ACCESS_MODE_QUAD   1

#define ACCESS_MODE ACCESS_MODE_QUAD

#define GIGABYTE_MANUFACTURER_ID 0xC8

// supported commands
#define CMD_WRITE_STATUS      0x01UL
#define CMD_PAGE_PROGRAM      0x02UL
#define CMD_READ              0x03UL
#define CMD_READ_STATUS1      0x05UL
#define CMD_WRITE_ENABLE      0x06UL
#define CMD_FAST_READ         0x0BUL
#define CMD_QUAD_PAGE_PROGRAM 0x32UL
#define CMD_READ_STATUS2      0x35UL
#define CMD_WE_VOLSTATUS      0x50UL
#define CMD_CHIP_ERASE        0x60UL
#define CMD_ENABLE_RESET      0x66UL
#define CMD_READ_DEVID        0x90UL
#define CMD_RESET             0x99UL
#define CMD_READ_IDS          0x9FUL
#define CMD_DUAL_READ         0xBBUL
#define CMD_BLOCK_ERASE_64K   0xD8UL
#define CMD_QUAD_READ         0xEBUL

typedef struct {                            /*!< (@ 0x40003000) SPIFI Structure        */
  __IO uint32_t CTRL;                       /*!< (@ 0x40003000) Control Register       */
  __IO uint32_t CMD;                        /*!< (@ 0x40003004) Control Register       */
  __IO uint32_t ADDR;                       /*!< (@ 0x40003008) Control Register       */
  __IO uint32_t IDATA;                      /*!< (@ 0x4000300C) Control Register       */
  __IO uint32_t CLIMIT;                     /*!< (@ 0x40003010) Control Register       */
	union {
    __IO uint8_t  DAT8;                     /**< SPIFI 8 bit data */
    __IO uint16_t DAT16;                    /**< SPIFI 16 bit data */
    __IO uint32_t DAT32;                    /**< SPIFI 32 bit data */
	} DATA;
  __IO uint32_t MCMD;                       /*!< (@ 0x40003018) Control Register       */
  __IO uint32_t STAT;                       /*!< (@ 0x4000301C) Control Register       */
} LPC_SPIFI_Type;

#define LPC_SPIFI ((LPC_SPIFI_Type *) LPC_SPIFI_BASE)

// SPIFI status bits
#define SPIFI_STAT_MCINIT  (1UL << 0)
#define SPIFI_STAT_CMD     (1UL << 1)
#define SPIFI_STAT_RESET   (1UL << 4)
#define SPIFI_STAT_INTRQ   (1UL << 5)
#define SPIFI_STAT_VERSION (0xFFUL << 24)

// device status bits
#define STATUS1_WEL        (1 << 1)
#define STATUS1_WIP        (1 << 0)
#define STATUS2_QE         (1 << 1)
#define STATUS2_SUS        (1 << 7)

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// MODULE LEVEL FUNCTIONS

// reads a status register
// returns the value of the register
static uint8_t ReadStatus
  (
  int StatusRegNumber
  )
{
  uint32_t Cmd;
  uint32_t Opcode;
  uint8_t Value;
  
  switch (StatusRegNumber)
  {
    case 1: Opcode = CMD_READ_STATUS1; break;
    case 2: Opcode = CMD_READ_STATUS2; break;
    default: return 0x00;
  }
  
  Cmd = 1UL;                                // data length
  Cmd |= (1UL & 0x7) << 21;                 // opcode only, no address
  Cmd |= (Opcode & 0xFF) << 24;
  LPC_SPIFI->CMD = Cmd;

  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);

  Value = LPC_SPIFI->DATA.DAT8;
  
  return Value;
}

// resets the SPIFI peripheral
// aborts any current command or memory mode
static void ResetSPIFI
  (
  void
  )
{
  LPC_SPIFI->STAT = SPIFI_STAT_RESET;
  while ((LPC_SPIFI->STAT & SPIFI_STAT_RESET) != 0);
}

// enables writing to the device
// returns TRUE for success, FALSE for error
static int WriteEnable
  (
  void
  )
{
  uint32_t Cmd;
  
  Cmd = 0;
  Cmd |= (1UL & 0x7) << 21;                 // opcode only, no address
  Cmd |= (CMD_WRITE_ENABLE & 0xFF) << 24;
  LPC_SPIFI->CMD = Cmd;
  
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);

  // wait for write to be enabled
  while ((ReadStatus(1) & STATUS1_WEL) != STATUS1_WEL);
  
  return TRUE;
}

// writes to the status registers
// returns TRUE for success, FALSE for error
static int WriteStatusRegisters
  (
  uint8_t Status1,                          // value to write to status1 register
  uint8_t Status2                           // value to write to status2 register
  )
{
  uint32_t Cmd;

  // enable quad mode
  Cmd = 2UL;                                // data length
  Cmd |= (1UL << 15);                       // writing to device
  Cmd |= (1UL & 0x7) << 21;                 // opcode only, no address
  Cmd |= (CMD_WRITE_STATUS & 0xFF) << 24;
  LPC_SPIFI->CMD = Cmd;
  LPC_SPIFI->DATA.DAT8 = Status1;
  LPC_SPIFI->DATA.DAT8 = Status2;
  
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);
  
  // wait for write to complete
  while (ReadStatus(1) & STATUS1_WIP);
  
  return TRUE;
}

// resets the device
// returns TRUE for success, FALSE for error
static int Reset
  (
  void
  )
{
  uint32_t Cmd;
  volatile int i;

  // if currently suspended then we can't reset
  if (ReadStatus(2) & STATUS2_SUS) return FALSE;
  
  // wait for a previous operation to complete otherwise we risk data corruption
  while (ReadStatus(1) & STATUS1_WIP);
  
  Cmd = 0;
  Cmd |= (1UL & 0x7) << 21;                 // opcode only, no address
  Cmd |= (CMD_ENABLE_RESET & 0xFF) << 24;
  LPC_SPIFI->CMD = Cmd;
  
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);
  
  Cmd = 0;
  Cmd |= (1UL & 0x7) << 21;                 // opcode only, no address
  Cmd |= (CMD_RESET & 0xFF) << 24;
  LPC_SPIFI->CMD = Cmd;
  
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);
  
  // need to wait 30us
  for (i = 0; i < 1000; i++);
  
  return TRUE;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// PUBLIC FUNCTIONS

// initialize module and enable access to memory to be programmed
// returns 0 for OK, 1 for failed
int Memory_Init
  (
  unsigned long adr,                                       // base address of memory
  unsigned long clk                                        // cpu clock frequency in Hz
  ) 
{	
  uint32_t Ctrl;
  uint32_t Cmd;
  uint8_t ManufacturerId;
  uint8_t MemoryType;
  uint8_t MemoryCapacity;
  uint8_t DeviceId;

	// set up SPIFI I/O (undocumented bit 7 set as 1, Aug 2 2011)
	LPC_SCU->SFSP3_3 = 0xF3;                  // high drive for SCLK
	// IO pins
	LPC_SCU->SFSP3_7 = 0xD3;                  // IO0, MOSI
	LPC_SCU->SFSP3_6 = 0xD3;                  // IO1, MISO
#if ACCESS_MODE == ACCESS_MODE_QUAD
	LPC_SCU->SFSP3_5 = 0xD3;                  // IO2
	LPC_SCU->SFSP3_4 = 0xD3;                  // IO3
#else
  // fixme - to do - configure IO2 and IO3 as outputs and raise them
#endif
	LPC_SCU->SFSP3_8 = 0x13; // CS doesn't need feedback
    
  ResetSPIFI();
  
  // init intermediate data and memory command
  LPC_SPIFI->IDATA = 0;
  LPC_SPIFI->MCMD  = 0;
  
  ResetSPIFI();
  
  Ctrl = 0x400FFFFF;             // max timeout, max /CS high time, read sampled data using feedback clock
  Ctrl |= (1UL << 29);           // sample read data on falling edge of clock
#if ACCESS_MODE == ACCESS_MODE_DUAL
  Ctrl |= (1UL << 28);
#endif
  LPC_SPIFI->CTRL = Ctrl;

  if (!Reset()) return 1;

  // read identification
  // GD25Q16E reports 0xC8, 0x40, 0x15
  Cmd = 3UL & 0x3FFF;                  // data length
  Cmd |= (1UL & 0x7) << 21;            // opcode only, no address
  Cmd |= (CMD_READ_IDS & 0xFF) << 24;  // read ID - generic opcode
  LPC_SPIFI->CMD = Cmd;
  
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);
  
  ManufacturerId = LPC_SPIFI->DATA.DAT8;
  MemoryType     = LPC_SPIFI->DATA.DAT8;
  MemoryCapacity = LPC_SPIFI->DATA.DAT8;

  if (ManufacturerId != GIGABYTE_MANUFACTURER_ID) return 1;

  // read IDs
  // GD25Q16E reports 0xC8, 0x14
  Cmd = 2UL & 0x3FFF;                    // data length
  Cmd |= (4UL & 0x7) << 21;              // opcode, three bytes of address
  Cmd |= (CMD_READ_DEVID & 0xFF) << 24;  // read IDs
  LPC_SPIFI->ADDR = 0x000000;            // address
  LPC_SPIFI->CMD = Cmd;
  
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);
  
  ManufacturerId = LPC_SPIFI->DATA.DAT8;
  DeviceId       = LPC_SPIFI->DATA.DAT8;

  if (ManufacturerId != GIGABYTE_MANUFACTURER_ID) return 1;

#if ACCESS_MODE == ACCESS_MODE_QUAD
  if (!WriteEnable()) return 1;

  // write enable for volatile status register
  Cmd = 0;
  Cmd |= (1UL & 0x7) << 21;                 // opcode only, no address
  Cmd |= (CMD_WE_VOLSTATUS & 0xFF) << 24;
  LPC_SPIFI->CMD = Cmd;
  
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);

  // enable quad mode
  if (!WriteStatusRegisters(0x00, STATUS2_QE)) return 1;

  // make sure quad mode bit is set
  if ((ReadStatus(2) & STATUS2_QE) == 0) return 1;
#endif

  return 0;
}

// erase entire memory
// returns 0 for OK, 1 for failed
int Memory_EraseChip(void) 
{
  uint32_t Cmd;
  
  if (!WriteEnable()) return 1;
  
  Cmd = 0;
  Cmd |= (1UL & 0x7) << 21;                 // opcode only, no address
  Cmd |= (CMD_CHIP_ERASE & 0xFF) << 24;
  LPC_SPIFI->CMD = Cmd;
  
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);
  
  // wait for erase to complete
  while (ReadStatus(1) & STATUS1_WIP);
  
  return 0;
}

// erases a sector of memory (64K block)
// returns 0 for OK, 1 for failed
int Memory_EraseSector
  (
  unsigned long adr                                        // address of sector to erase
  ) 
{
  uint32_t Cmd;
  
  if (!WriteEnable()) return 1;
  
  LPC_SPIFI->ADDR = adr;
  Cmd = 0;
  Cmd |= (4UL & 0x7) << 21;                                // opcode, three bytes of address
  Cmd |= (CMD_BLOCK_ERASE_64K & 0xFF) << 24;
  LPC_SPIFI->CMD = Cmd;
  
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);
  
  // wait for erase to complete
  while (ReadStatus(1) & STATUS1_WIP);
  
  return 0;
}

// programs a page in memory
// returns 0 for OK, 1 for failed
int Memory_ProgramPage
  (
  unsigned long adr,                                       // address of page
  unsigned long sz,                                        // size of page
  unsigned char *buf                                       // data to program into page
  ) 
{
  uint32_t Cmd;
  int b;

  if (!WriteEnable()) return 1;

  LPC_SPIFI->ADDR = adr;
  Cmd = sz;                                    // data length
  Cmd |= (1UL << 15);                          // output data to device
  Cmd |= (4UL & 0x7) << 21;                    // opcode, three bytes of address
#if ACCESS_MODE == ACCESS_MODE_QUAD
  Cmd |= (CMD_QUAD_PAGE_PROGRAM & 0xFF) << 24;
  Cmd |= (1UL << 19);                          // opcode and address is serial, data is quad/dual
#else
  Cmd |= (CMD_PAGE_PROGRAM & 0xFF) << 24;
#endif
  LPC_SPIFI->CMD = Cmd;
  for (b = 0; b < sz; b++)
  {
    LPC_SPIFI->DATA.DAT8 = buf[b];
  }

  // wait for command to complete
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);
  
  // wait for write to complete
  while (ReadStatus(1) & STATUS1_WIP);
  
  return 0;
}

// reads a byte from memory
// returns the read byte
unsigned char Memory_ReadByte
  (
  unsigned long adr                                        // address of location to read
  )
{
  uint8_t ReadByte;
  uint32_t Cmd;
  
  LPC_SPIFI->ADDR = adr;
  Cmd = 1;                                  // data length
  //Cmd |= (3UL << 19);                     // opcode and data is quad/dual
  Cmd |= (4UL & 0x7) << 21;                 // opcode, three bytes of address
  Cmd |= (CMD_READ & 0xFF) << 24;
  LPC_SPIFI->CMD = Cmd;

  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);

  ReadByte = LPC_SPIFI->DATA.DAT8;
  
  return ReadByte;
  
  /*
  // Example of how to map the device into memory
  // Not used in this bootloader but retained as an example
  
  // set memory read command
  LPC_SPIFI->IDATA = 0xFF;
  Cmd = 0;
  Cmd |= (4UL & 0x7) << 21;             // opcode, three bytes of address
#if ACCESS_MODE == ACCESS_MODE_DUAL
  Cmd |= (CMD_DUAL_READ & 0xFF) << 24;  // set read mode
  Cmd |= (2UL << 19);                   // serial opcode then dual
  Cmd |= (1UL << 16);                   // intermediate bit length
#endif
#if ACCESS_MODE == ACCESS_MODE_QUAD
  Cmd |= (CMD_QUAD_READ & 0xFF) << 24;  // set read mode
  Cmd |= (2UL << 19);                   // serial cpcode then quad
  Cmd |= (3UL << 16);                   // intermediate bit length
#endif
  LPC_SPIFI->CMD = Cmd;
  while((LPC_SPIFI->STAT & SPIFI_STAT_CMD) != 0);
  LPC_SPIFI->MCMD = Cmd;

  Status = 0;
  Status = LPC_SPIFI->STAT;
  
  // if not inited then stop
  if ((Status & SPIFI_STAT_MCINIT) == 0) while(1);
  
  // if exeucting a command then stop
  if (Status & SPIFI_STAT_CMD) while(1);
  
  // read from part
  ReadByte = 0x00;
  ReadByte = pMem[0];
  ReadByte = pMem[1];
  ReadByte = pMem[2];
  ReadByte = pMem[3];
  */
}
