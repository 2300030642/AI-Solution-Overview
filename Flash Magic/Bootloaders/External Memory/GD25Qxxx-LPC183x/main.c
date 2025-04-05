// main - initializes and executes bootloader
// and keeps track of time
// $Id: main.c 3893 2015-05-12 11:46:44Z andy $

#include "lpc18xx_cgu.h"
#include "bootloader.h"
#include "lpc18xx_scu.h"
#include "lpc18xx_gpio.h"

#define USE_LEDS 0

#if USE_LEDS == 1
static int LEDState = 0;
#endif // USE_LEDS

// system tick interrupt handler
// must be called every millisecond so the bootloader can keep track
// of time
void SysTick_Handler(void)
{
	gBootloaderTick++;
  
#if USE_LEDS == 1
  // toggle blue LED
  if (gBootloaderTick % 500 == 0)
  {
    if (LEDState)
    {
      GPIO_SetValue(3, 1UL << 5);      // P6.9
      LEDState = 0;
    }
    else
    {
      GPIO_ClearValue(3, 1UL << 5);    // P6.9
      LEDState = 1;
    }
  }
#endif // USE_LEDS
}

// main program body
int c_entry(void)
{
#ifdef INTERNALRAM
  *(unsigned long *)0xE000ED08 = 0x10000500;      // Setup Vector Table Offset Register
  *(unsigned long *)0x40043100 = 0x10000500;      // Set the shadow pointer
#endif // INTERNALRAM
  
  // we need a system tick every millisecond  
  SysTick_Config(SystemCoreClock/1000);
  
#if USE_LEDS == 1
  // enable GPIO for LED pins
  scu_pinmux(6, 9,  MD_PLN_FAST, FUNC0);
  scu_pinmux(2, 7,  MD_PLN_FAST, FUNC0);
  scu_pinmux(6, 11, MD_PLN_FAST, FUNC0);

  // set LED pins as outputs
  GPIO_SetDir(0, (1UL << 7), 1);   // P2.7
  GPIO_SetDir(3, (1UL << 5), 1);   // P6.9
  GPIO_SetDir(3, (1UL << 7), 1);   // P6.11
  
  // all LEDs off
  GPIO_SetValue(0, 1UL << 7);      // P2.7
  GPIO_SetValue(3, 1UL << 5);      // P6.9
  GPIO_SetValue(3, 1UL << 7);      // P6.11
#endif // USE_LEDS

  // initialize bootloader
  if (!Bootloader_Init(96))
  {
    while(1);
  }
  
  // execute bootloader
	while(1)
  {    
    Bootloader_Process();
  }
}

// With ARM and GHS toolsets, the entry point is main() - this will
// allow the linker to generate wrapper code to setup stacks, allocate
// heap area, and initialize and copy code and data segments. For GNU
// toolsets, the entry point is through __start() in the crt0_gnu.asm
// file, and that startup code will setup stacks and data
int main(void)
{
  return c_entry();
}
