#ifndef __VBOARD__
#define __VBOARD__

extern uint8_t __ramvectors__[];


#if !defined(CORTEX_FLASH_VTABLE)
#   define CORTEX_FLASH_VTABLE 0x10002000 /* app code start */
#endif

#define CORTEX_VTOR_INIT ((uint32_t)(&__ramvectors__))
#define CORTEX_VECTOR_COUNT 147 /* 163 total vectors - 16 cortex standard vectors */

#define CORTEX_ENABLE_WFI_IDLE          TRUE
#define CORTEX_SIMPLIFIED_PRIORITY      FALSE

#ifndef CORTEX_USE_FPU
#define CORTEX_USE_FPU                  TRUE
#endif

#define PORT_PRIO_BITS 4
#define PORT_PRIO_MASK(n) ((n) << (8 - PORT_PRIO_BITS))

#define VHAL_SER_RXFIFO_LEN 256

#endif