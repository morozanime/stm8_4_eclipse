/*-------------------------------------------------------------------------
 *      STM8 definitions of SFR registers
 *
 *      Used with STM8 IAR C/C++ Compiler and Assembler.
 *
 *      Copyright 2013 IAR Systems AB.
 *
 *-----------------------------------------------------------------------*/

#ifndef __IOSTM8L152M8_H__
#define __IOSTM8L152M8_H__

#if (((__TID__ >> 8) & 0x7F) != 0x38)     /* 0x38 = 56 dec */
#error This file should only be compiled by STM8 IAR compiler and assembler
#endif

/*-------------------------------------------------------------------------
 *      I/O register macros
 *-----------------------------------------------------------------------*/

#include "io_macros.h"


#ifdef __IAR_SYSTEMS_ICC__
#pragma system_include
#pragma language=save
#pragma language=extended
#endif

/*-------------------------------------------------------------------------
 *      Port A register definitions
 *-----------------------------------------------------------------------*/
/* Port A data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PA_ODR;
#endif
//__IO_REG8_BIT(PA_ODR,      0x5000, __READ_WRITE, __BITS_PA_ODR);
unsigned char PA_ODR; //0x5000 __READ_WRITE
__BITS_PA_ODR PA_ODR_bit;

/* Port A input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PA_IDR;
#endif
//__IO_REG8_BIT(PA_IDR,      0x5001, __READ, __BITS_PA_IDR);
unsigned char PA_IDR; //0x5001 __READ
__BITS_PA_IDR PA_IDR_bit;

/* Port A data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PA_DDR;
#endif
//__IO_REG8_BIT(PA_DDR,      0x5002, __READ_WRITE, __BITS_PA_DDR);
unsigned char PA_DDR; //0x5002 __READ_WRITE
__BITS_PA_DDR PA_DDR_bit;

/* Port A control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PA_CR1;
#endif
//__IO_REG8_BIT(PA_CR1,      0x5003, __READ_WRITE, __BITS_PA_CR1);
unsigned char PA_CR1; //0x5003 __READ_WRITE
__BITS_PA_CR1 PA_CR1_bit;

/* Port A control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PA_CR2;
#endif
//__IO_REG8_BIT(PA_CR2,      0x5004, __READ_WRITE, __BITS_PA_CR2);
unsigned char PA_CR2; //0x5004 __READ_WRITE
__BITS_PA_CR2 PA_CR2_bit;


/*-------------------------------------------------------------------------
 *      Port A bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PA_ODR_ODR0              PA_ODR_bit.ODR0
#define PA_ODR_ODR1              PA_ODR_bit.ODR1
#define PA_ODR_ODR2              PA_ODR_bit.ODR2
#define PA_ODR_ODR3              PA_ODR_bit.ODR3
#define PA_ODR_ODR4              PA_ODR_bit.ODR4
#define PA_ODR_ODR5              PA_ODR_bit.ODR5
#define PA_ODR_ODR6              PA_ODR_bit.ODR6
#define PA_ODR_ODR7              PA_ODR_bit.ODR7

#define PA_IDR_IDR0              PA_IDR_bit.IDR0
#define PA_IDR_IDR1              PA_IDR_bit.IDR1
#define PA_IDR_IDR2              PA_IDR_bit.IDR2
#define PA_IDR_IDR3              PA_IDR_bit.IDR3
#define PA_IDR_IDR4              PA_IDR_bit.IDR4
#define PA_IDR_IDR5              PA_IDR_bit.IDR5
#define PA_IDR_IDR6              PA_IDR_bit.IDR6
#define PA_IDR_IDR7              PA_IDR_bit.IDR7

#define PA_DDR_DDR0              PA_DDR_bit.DDR0
#define PA_DDR_DDR1              PA_DDR_bit.DDR1
#define PA_DDR_DDR2              PA_DDR_bit.DDR2
#define PA_DDR_DDR3              PA_DDR_bit.DDR3
#define PA_DDR_DDR4              PA_DDR_bit.DDR4
#define PA_DDR_DDR5              PA_DDR_bit.DDR5
#define PA_DDR_DDR6              PA_DDR_bit.DDR6
#define PA_DDR_DDR7              PA_DDR_bit.DDR7

#define PA_CR1_C10               PA_CR1_bit.C10
#define PA_CR1_C11               PA_CR1_bit.C11
#define PA_CR1_C12               PA_CR1_bit.C12
#define PA_CR1_C13               PA_CR1_bit.C13
#define PA_CR1_C14               PA_CR1_bit.C14
#define PA_CR1_C15               PA_CR1_bit.C15
#define PA_CR1_C16               PA_CR1_bit.C16
#define PA_CR1_C17               PA_CR1_bit.C17

#define PA_CR2_C20               PA_CR2_bit.C20
#define PA_CR2_C21               PA_CR2_bit.C21
#define PA_CR2_C22               PA_CR2_bit.C22
#define PA_CR2_C23               PA_CR2_bit.C23
#define PA_CR2_C24               PA_CR2_bit.C24
#define PA_CR2_C25               PA_CR2_bit.C25
#define PA_CR2_C26               PA_CR2_bit.C26
#define PA_CR2_C27               PA_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port A bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PA_ODR_ODR0         0x01
#define MASK_PA_ODR_ODR1         0x02
#define MASK_PA_ODR_ODR2         0x04
#define MASK_PA_ODR_ODR3         0x08
#define MASK_PA_ODR_ODR4         0x10
#define MASK_PA_ODR_ODR5         0x20
#define MASK_PA_ODR_ODR6         0x40
#define MASK_PA_ODR_ODR7         0x80

#define MASK_PA_IDR_IDR0         0x01
#define MASK_PA_IDR_IDR1         0x02
#define MASK_PA_IDR_IDR2         0x04
#define MASK_PA_IDR_IDR3         0x08
#define MASK_PA_IDR_IDR4         0x10
#define MASK_PA_IDR_IDR5         0x20
#define MASK_PA_IDR_IDR6         0x40
#define MASK_PA_IDR_IDR7         0x80

#define MASK_PA_DDR_DDR0         0x01
#define MASK_PA_DDR_DDR1         0x02
#define MASK_PA_DDR_DDR2         0x04
#define MASK_PA_DDR_DDR3         0x08
#define MASK_PA_DDR_DDR4         0x10
#define MASK_PA_DDR_DDR5         0x20
#define MASK_PA_DDR_DDR6         0x40
#define MASK_PA_DDR_DDR7         0x80

#define MASK_PA_CR1_C10          0x01
#define MASK_PA_CR1_C11          0x02
#define MASK_PA_CR1_C12          0x04
#define MASK_PA_CR1_C13          0x08
#define MASK_PA_CR1_C14          0x10
#define MASK_PA_CR1_C15          0x20
#define MASK_PA_CR1_C16          0x40
#define MASK_PA_CR1_C17          0x80

#define MASK_PA_CR2_C20          0x01
#define MASK_PA_CR2_C21          0x02
#define MASK_PA_CR2_C22          0x04
#define MASK_PA_CR2_C23          0x08
#define MASK_PA_CR2_C24          0x10
#define MASK_PA_CR2_C25          0x20
#define MASK_PA_CR2_C26          0x40
#define MASK_PA_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port B register definitions
 *-----------------------------------------------------------------------*/
/* Port B data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PB_ODR;
#endif
//__IO_REG8_BIT(PB_ODR,      0x5005, __READ_WRITE, __BITS_PB_ODR);
unsigned char PB_ODR; //0x5005 __READ_WRITE
__BITS_PB_ODR PB_ODR_bit;

/* Port B input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PB_IDR;
#endif
//__IO_REG8_BIT(PB_IDR,      0x5006, __READ, __BITS_PB_IDR);
unsigned char PB_IDR; //0x5006 __READ
__BITS_PB_IDR PB_IDR_bit;

/* Port B data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PB_DDR;
#endif
//__IO_REG8_BIT(PB_DDR,      0x5007, __READ_WRITE, __BITS_PB_DDR);
unsigned char PB_DDR; //0x5007 __READ_WRITE
__BITS_PB_DDR PB_DDR_bit;

/* Port B control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PB_CR1;
#endif
//__IO_REG8_BIT(PB_CR1,      0x5008, __READ_WRITE, __BITS_PB_CR1);
unsigned char PB_CR1; //0x5008 __READ_WRITE
__BITS_PB_CR1 PB_CR1_bit;

/* Port B control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PB_CR2;
#endif
//__IO_REG8_BIT(PB_CR2,      0x5009, __READ_WRITE, __BITS_PB_CR2);
unsigned char PB_CR2; //0x5009 __READ_WRITE
__BITS_PB_CR2 PB_CR2_bit;


/*-------------------------------------------------------------------------
 *      Port B bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PB_ODR_ODR0              PB_ODR_bit.ODR0
#define PB_ODR_ODR1              PB_ODR_bit.ODR1
#define PB_ODR_ODR2              PB_ODR_bit.ODR2
#define PB_ODR_ODR3              PB_ODR_bit.ODR3
#define PB_ODR_ODR4              PB_ODR_bit.ODR4
#define PB_ODR_ODR5              PB_ODR_bit.ODR5
#define PB_ODR_ODR6              PB_ODR_bit.ODR6
#define PB_ODR_ODR7              PB_ODR_bit.ODR7

#define PB_IDR_IDR0              PB_IDR_bit.IDR0
#define PB_IDR_IDR1              PB_IDR_bit.IDR1
#define PB_IDR_IDR2              PB_IDR_bit.IDR2
#define PB_IDR_IDR3              PB_IDR_bit.IDR3
#define PB_IDR_IDR4              PB_IDR_bit.IDR4
#define PB_IDR_IDR5              PB_IDR_bit.IDR5
#define PB_IDR_IDR6              PB_IDR_bit.IDR6
#define PB_IDR_IDR7              PB_IDR_bit.IDR7

#define PB_DDR_DDR0              PB_DDR_bit.DDR0
#define PB_DDR_DDR1              PB_DDR_bit.DDR1
#define PB_DDR_DDR2              PB_DDR_bit.DDR2
#define PB_DDR_DDR3              PB_DDR_bit.DDR3
#define PB_DDR_DDR4              PB_DDR_bit.DDR4
#define PB_DDR_DDR5              PB_DDR_bit.DDR5
#define PB_DDR_DDR6              PB_DDR_bit.DDR6
#define PB_DDR_DDR7              PB_DDR_bit.DDR7

#define PB_CR1_C10               PB_CR1_bit.C10
#define PB_CR1_C11               PB_CR1_bit.C11
#define PB_CR1_C12               PB_CR1_bit.C12
#define PB_CR1_C13               PB_CR1_bit.C13
#define PB_CR1_C14               PB_CR1_bit.C14
#define PB_CR1_C15               PB_CR1_bit.C15
#define PB_CR1_C16               PB_CR1_bit.C16
#define PB_CR1_C17               PB_CR1_bit.C17

#define PB_CR2_C20               PB_CR2_bit.C20
#define PB_CR2_C21               PB_CR2_bit.C21
#define PB_CR2_C22               PB_CR2_bit.C22
#define PB_CR2_C23               PB_CR2_bit.C23
#define PB_CR2_C24               PB_CR2_bit.C24
#define PB_CR2_C25               PB_CR2_bit.C25
#define PB_CR2_C26               PB_CR2_bit.C26
#define PB_CR2_C27               PB_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port B bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PB_ODR_ODR0         0x01
#define MASK_PB_ODR_ODR1         0x02
#define MASK_PB_ODR_ODR2         0x04
#define MASK_PB_ODR_ODR3         0x08
#define MASK_PB_ODR_ODR4         0x10
#define MASK_PB_ODR_ODR5         0x20
#define MASK_PB_ODR_ODR6         0x40
#define MASK_PB_ODR_ODR7         0x80

#define MASK_PB_IDR_IDR0         0x01
#define MASK_PB_IDR_IDR1         0x02
#define MASK_PB_IDR_IDR2         0x04
#define MASK_PB_IDR_IDR3         0x08
#define MASK_PB_IDR_IDR4         0x10
#define MASK_PB_IDR_IDR5         0x20
#define MASK_PB_IDR_IDR6         0x40
#define MASK_PB_IDR_IDR7         0x80

#define MASK_PB_DDR_DDR0         0x01
#define MASK_PB_DDR_DDR1         0x02
#define MASK_PB_DDR_DDR2         0x04
#define MASK_PB_DDR_DDR3         0x08
#define MASK_PB_DDR_DDR4         0x10
#define MASK_PB_DDR_DDR5         0x20
#define MASK_PB_DDR_DDR6         0x40
#define MASK_PB_DDR_DDR7         0x80

#define MASK_PB_CR1_C10          0x01
#define MASK_PB_CR1_C11          0x02
#define MASK_PB_CR1_C12          0x04
#define MASK_PB_CR1_C13          0x08
#define MASK_PB_CR1_C14          0x10
#define MASK_PB_CR1_C15          0x20
#define MASK_PB_CR1_C16          0x40
#define MASK_PB_CR1_C17          0x80

#define MASK_PB_CR2_C20          0x01
#define MASK_PB_CR2_C21          0x02
#define MASK_PB_CR2_C22          0x04
#define MASK_PB_CR2_C23          0x08
#define MASK_PB_CR2_C24          0x10
#define MASK_PB_CR2_C25          0x20
#define MASK_PB_CR2_C26          0x40
#define MASK_PB_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port C register definitions
 *-----------------------------------------------------------------------*/
/* Port C data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PC_ODR;
#endif
//__IO_REG8_BIT(PC_ODR,      0x500A, __READ_WRITE, __BITS_PC_ODR);
unsigned char PC_ODR; //0x500A __READ_WRITE
__BITS_PC_ODR PC_ODR_bit;

/* Port C input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PC_IDR;
#endif
//__IO_REG8_BIT(PC_IDR,      0x500B, __READ, __BITS_PC_IDR);
unsigned char PC_IDR; //0x500B __READ
__BITS_PC_IDR PC_IDR_bit;

/* Port C data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PC_DDR;
#endif
//__IO_REG8_BIT(PC_DDR,      0x500C, __READ_WRITE, __BITS_PC_DDR);
unsigned char PC_DDR; //0x500C __READ_WRITE
__BITS_PC_DDR PC_DDR_bit;

/* Port C control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PC_CR1;
#endif
//__IO_REG8_BIT(PC_CR1,      0x500D, __READ_WRITE, __BITS_PC_CR1);
unsigned char PC_CR1; //0x500D __READ_WRITE
__BITS_PC_CR1 PC_CR1_bit;

/* Port C control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PC_CR2;
#endif
//__IO_REG8_BIT(PC_CR2,      0x500E, __READ_WRITE, __BITS_PC_CR2);
unsigned char PC_CR2; //0x500E __READ_WRITE
__BITS_PC_CR2 PC_CR2_bit;


/*-------------------------------------------------------------------------
 *      Port C bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PC_ODR_ODR0              PC_ODR_bit.ODR0
#define PC_ODR_ODR1              PC_ODR_bit.ODR1
#define PC_ODR_ODR2              PC_ODR_bit.ODR2
#define PC_ODR_ODR3              PC_ODR_bit.ODR3
#define PC_ODR_ODR4              PC_ODR_bit.ODR4
#define PC_ODR_ODR5              PC_ODR_bit.ODR5
#define PC_ODR_ODR6              PC_ODR_bit.ODR6
#define PC_ODR_ODR7              PC_ODR_bit.ODR7

#define PC_IDR_IDR0              PC_IDR_bit.IDR0
#define PC_IDR_IDR1              PC_IDR_bit.IDR1
#define PC_IDR_IDR2              PC_IDR_bit.IDR2
#define PC_IDR_IDR3              PC_IDR_bit.IDR3
#define PC_IDR_IDR4              PC_IDR_bit.IDR4
#define PC_IDR_IDR5              PC_IDR_bit.IDR5
#define PC_IDR_IDR6              PC_IDR_bit.IDR6
#define PC_IDR_IDR7              PC_IDR_bit.IDR7

#define PC_DDR_DDR0              PC_DDR_bit.DDR0
#define PC_DDR_DDR1              PC_DDR_bit.DDR1
#define PC_DDR_DDR2              PC_DDR_bit.DDR2
#define PC_DDR_DDR3              PC_DDR_bit.DDR3
#define PC_DDR_DDR4              PC_DDR_bit.DDR4
#define PC_DDR_DDR5              PC_DDR_bit.DDR5
#define PC_DDR_DDR6              PC_DDR_bit.DDR6
#define PC_DDR_DDR7              PC_DDR_bit.DDR7

#define PC_CR1_C10               PC_CR1_bit.C10
#define PC_CR1_C11               PC_CR1_bit.C11
#define PC_CR1_C12               PC_CR1_bit.C12
#define PC_CR1_C13               PC_CR1_bit.C13
#define PC_CR1_C14               PC_CR1_bit.C14
#define PC_CR1_C15               PC_CR1_bit.C15
#define PC_CR1_C16               PC_CR1_bit.C16
#define PC_CR1_C17               PC_CR1_bit.C17

#define PC_CR2_C20               PC_CR2_bit.C20
#define PC_CR2_C21               PC_CR2_bit.C21
#define PC_CR2_C22               PC_CR2_bit.C22
#define PC_CR2_C23               PC_CR2_bit.C23
#define PC_CR2_C24               PC_CR2_bit.C24
#define PC_CR2_C25               PC_CR2_bit.C25
#define PC_CR2_C26               PC_CR2_bit.C26
#define PC_CR2_C27               PC_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port C bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PC_ODR_ODR0         0x01
#define MASK_PC_ODR_ODR1         0x02
#define MASK_PC_ODR_ODR2         0x04
#define MASK_PC_ODR_ODR3         0x08
#define MASK_PC_ODR_ODR4         0x10
#define MASK_PC_ODR_ODR5         0x20
#define MASK_PC_ODR_ODR6         0x40
#define MASK_PC_ODR_ODR7         0x80

#define MASK_PC_IDR_IDR0         0x01
#define MASK_PC_IDR_IDR1         0x02
#define MASK_PC_IDR_IDR2         0x04
#define MASK_PC_IDR_IDR3         0x08
#define MASK_PC_IDR_IDR4         0x10
#define MASK_PC_IDR_IDR5         0x20
#define MASK_PC_IDR_IDR6         0x40
#define MASK_PC_IDR_IDR7         0x80

#define MASK_PC_DDR_DDR0         0x01
#define MASK_PC_DDR_DDR1         0x02
#define MASK_PC_DDR_DDR2         0x04
#define MASK_PC_DDR_DDR3         0x08
#define MASK_PC_DDR_DDR4         0x10
#define MASK_PC_DDR_DDR5         0x20
#define MASK_PC_DDR_DDR6         0x40
#define MASK_PC_DDR_DDR7         0x80

#define MASK_PC_CR1_C10          0x01
#define MASK_PC_CR1_C11          0x02
#define MASK_PC_CR1_C12          0x04
#define MASK_PC_CR1_C13          0x08
#define MASK_PC_CR1_C14          0x10
#define MASK_PC_CR1_C15          0x20
#define MASK_PC_CR1_C16          0x40
#define MASK_PC_CR1_C17          0x80

#define MASK_PC_CR2_C20          0x01
#define MASK_PC_CR2_C21          0x02
#define MASK_PC_CR2_C22          0x04
#define MASK_PC_CR2_C23          0x08
#define MASK_PC_CR2_C24          0x10
#define MASK_PC_CR2_C25          0x20
#define MASK_PC_CR2_C26          0x40
#define MASK_PC_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port D register definitions
 *-----------------------------------------------------------------------*/
/* Port D data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PD_ODR;
#endif
//__IO_REG8_BIT(PD_ODR,      0x500F, __READ_WRITE, __BITS_PD_ODR);
unsigned char PD_ODR; //0x500F __READ_WRITE
__BITS_PD_ODR PD_ODR_bit;

/* Port D input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PD_IDR;
#endif
//__IO_REG8_BIT(PD_IDR,      0x5010, __READ, __BITS_PD_IDR);
unsigned char PD_IDR; //0x5010 __READ
__BITS_PD_IDR PD_IDR_bit;

/* Port D data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PD_DDR;
#endif
//__IO_REG8_BIT(PD_DDR,      0x5011, __READ_WRITE, __BITS_PD_DDR);
unsigned char PD_DDR; //0x5011 __READ_WRITE
__BITS_PD_DDR PD_DDR_bit;

/* Port D control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PD_CR1;
#endif
//__IO_REG8_BIT(PD_CR1,      0x5012, __READ_WRITE, __BITS_PD_CR1);
unsigned char PD_CR1; //0x5012 __READ_WRITE
__BITS_PD_CR1 PD_CR1_bit;

/* Port D control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PD_CR2;
#endif
//__IO_REG8_BIT(PD_CR2,      0x5013, __READ_WRITE, __BITS_PD_CR2);
unsigned char PD_CR2; //0x5013 __READ_WRITE
__BITS_PD_CR2 PD_CR2_bit;


/*-------------------------------------------------------------------------
 *      Port D bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PD_ODR_ODR0              PD_ODR_bit.ODR0
#define PD_ODR_ODR1              PD_ODR_bit.ODR1
#define PD_ODR_ODR2              PD_ODR_bit.ODR2
#define PD_ODR_ODR3              PD_ODR_bit.ODR3
#define PD_ODR_ODR4              PD_ODR_bit.ODR4
#define PD_ODR_ODR5              PD_ODR_bit.ODR5
#define PD_ODR_ODR6              PD_ODR_bit.ODR6
#define PD_ODR_ODR7              PD_ODR_bit.ODR7

#define PD_IDR_IDR0              PD_IDR_bit.IDR0
#define PD_IDR_IDR1              PD_IDR_bit.IDR1
#define PD_IDR_IDR2              PD_IDR_bit.IDR2
#define PD_IDR_IDR3              PD_IDR_bit.IDR3
#define PD_IDR_IDR4              PD_IDR_bit.IDR4
#define PD_IDR_IDR5              PD_IDR_bit.IDR5
#define PD_IDR_IDR6              PD_IDR_bit.IDR6
#define PD_IDR_IDR7              PD_IDR_bit.IDR7

#define PD_DDR_DDR0              PD_DDR_bit.DDR0
#define PD_DDR_DDR1              PD_DDR_bit.DDR1
#define PD_DDR_DDR2              PD_DDR_bit.DDR2
#define PD_DDR_DDR3              PD_DDR_bit.DDR3
#define PD_DDR_DDR4              PD_DDR_bit.DDR4
#define PD_DDR_DDR5              PD_DDR_bit.DDR5
#define PD_DDR_DDR6              PD_DDR_bit.DDR6
#define PD_DDR_DDR7              PD_DDR_bit.DDR7

#define PD_CR1_C10               PD_CR1_bit.C10
#define PD_CR1_C11               PD_CR1_bit.C11
#define PD_CR1_C12               PD_CR1_bit.C12
#define PD_CR1_C13               PD_CR1_bit.C13
#define PD_CR1_C14               PD_CR1_bit.C14
#define PD_CR1_C15               PD_CR1_bit.C15
#define PD_CR1_C16               PD_CR1_bit.C16
#define PD_CR1_C17               PD_CR1_bit.C17

#define PD_CR2_C20               PD_CR2_bit.C20
#define PD_CR2_C21               PD_CR2_bit.C21
#define PD_CR2_C22               PD_CR2_bit.C22
#define PD_CR2_C23               PD_CR2_bit.C23
#define PD_CR2_C24               PD_CR2_bit.C24
#define PD_CR2_C25               PD_CR2_bit.C25
#define PD_CR2_C26               PD_CR2_bit.C26
#define PD_CR2_C27               PD_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port D bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PD_ODR_ODR0         0x01
#define MASK_PD_ODR_ODR1         0x02
#define MASK_PD_ODR_ODR2         0x04
#define MASK_PD_ODR_ODR3         0x08
#define MASK_PD_ODR_ODR4         0x10
#define MASK_PD_ODR_ODR5         0x20
#define MASK_PD_ODR_ODR6         0x40
#define MASK_PD_ODR_ODR7         0x80

#define MASK_PD_IDR_IDR0         0x01
#define MASK_PD_IDR_IDR1         0x02
#define MASK_PD_IDR_IDR2         0x04
#define MASK_PD_IDR_IDR3         0x08
#define MASK_PD_IDR_IDR4         0x10
#define MASK_PD_IDR_IDR5         0x20
#define MASK_PD_IDR_IDR6         0x40
#define MASK_PD_IDR_IDR7         0x80

#define MASK_PD_DDR_DDR0         0x01
#define MASK_PD_DDR_DDR1         0x02
#define MASK_PD_DDR_DDR2         0x04
#define MASK_PD_DDR_DDR3         0x08
#define MASK_PD_DDR_DDR4         0x10
#define MASK_PD_DDR_DDR5         0x20
#define MASK_PD_DDR_DDR6         0x40
#define MASK_PD_DDR_DDR7         0x80

#define MASK_PD_CR1_C10          0x01
#define MASK_PD_CR1_C11          0x02
#define MASK_PD_CR1_C12          0x04
#define MASK_PD_CR1_C13          0x08
#define MASK_PD_CR1_C14          0x10
#define MASK_PD_CR1_C15          0x20
#define MASK_PD_CR1_C16          0x40
#define MASK_PD_CR1_C17          0x80

#define MASK_PD_CR2_C20          0x01
#define MASK_PD_CR2_C21          0x02
#define MASK_PD_CR2_C22          0x04
#define MASK_PD_CR2_C23          0x08
#define MASK_PD_CR2_C24          0x10
#define MASK_PD_CR2_C25          0x20
#define MASK_PD_CR2_C26          0x40
#define MASK_PD_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port E register definitions
 *-----------------------------------------------------------------------*/
/* Port E data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PE_ODR;
#endif
//__IO_REG8_BIT(PE_ODR,      0x5014, __READ_WRITE, __BITS_PE_ODR);
unsigned char PE_ODR; //0x5014 __READ_WRITE
__BITS_PE_ODR PE_ODR_bit;

/* Port E input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PE_IDR;
#endif
//__IO_REG8_BIT(PE_IDR,      0x5015, __READ, __BITS_PE_IDR);
unsigned char PE_IDR; //0x5015 __READ
__BITS_PE_IDR PE_IDR_bit;

/* Port E data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PE_DDR;
#endif
//__IO_REG8_BIT(PE_DDR,      0x5016, __READ_WRITE, __BITS_PE_DDR);
unsigned char PE_DDR; //0x5016 __READ_WRITE
__BITS_PE_DDR PE_DDR_bit;

/* Port E control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PE_CR1;
#endif
//__IO_REG8_BIT(PE_CR1,      0x5017, __READ_WRITE, __BITS_PE_CR1);
unsigned char PE_CR1; //0x5017 __READ_WRITE
__BITS_PE_CR1 PE_CR1_bit;

/* Port E control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PE_CR2;
#endif
//__IO_REG8_BIT(PE_CR2,      0x5018, __READ_WRITE, __BITS_PE_CR2);
unsigned char PE_CR2; //0x5018 __READ_WRITE
__BITS_PE_CR2 PE_CR2_bit;


/*-------------------------------------------------------------------------
 *      Port E bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PE_ODR_ODR0              PE_ODR_bit.ODR0
#define PE_ODR_ODR1              PE_ODR_bit.ODR1
#define PE_ODR_ODR2              PE_ODR_bit.ODR2
#define PE_ODR_ODR3              PE_ODR_bit.ODR3
#define PE_ODR_ODR4              PE_ODR_bit.ODR4
#define PE_ODR_ODR5              PE_ODR_bit.ODR5
#define PE_ODR_ODR6              PE_ODR_bit.ODR6
#define PE_ODR_ODR7              PE_ODR_bit.ODR7

#define PE_IDR_IDR0              PE_IDR_bit.IDR0
#define PE_IDR_IDR1              PE_IDR_bit.IDR1
#define PE_IDR_IDR2              PE_IDR_bit.IDR2
#define PE_IDR_IDR3              PE_IDR_bit.IDR3
#define PE_IDR_IDR4              PE_IDR_bit.IDR4
#define PE_IDR_IDR5              PE_IDR_bit.IDR5
#define PE_IDR_IDR6              PE_IDR_bit.IDR6
#define PE_IDR_IDR7              PE_IDR_bit.IDR7

#define PE_DDR_DDR0              PE_DDR_bit.DDR0
#define PE_DDR_DDR1              PE_DDR_bit.DDR1
#define PE_DDR_DDR2              PE_DDR_bit.DDR2
#define PE_DDR_DDR3              PE_DDR_bit.DDR3
#define PE_DDR_DDR4              PE_DDR_bit.DDR4
#define PE_DDR_DDR5              PE_DDR_bit.DDR5
#define PE_DDR_DDR6              PE_DDR_bit.DDR6
#define PE_DDR_DDR7              PE_DDR_bit.DDR7

#define PE_CR1_C10               PE_CR1_bit.C10
#define PE_CR1_C11               PE_CR1_bit.C11
#define PE_CR1_C12               PE_CR1_bit.C12
#define PE_CR1_C13               PE_CR1_bit.C13
#define PE_CR1_C14               PE_CR1_bit.C14
#define PE_CR1_C15               PE_CR1_bit.C15
#define PE_CR1_C16               PE_CR1_bit.C16
#define PE_CR1_C17               PE_CR1_bit.C17

#define PE_CR2_C20               PE_CR2_bit.C20
#define PE_CR2_C21               PE_CR2_bit.C21
#define PE_CR2_C22               PE_CR2_bit.C22
#define PE_CR2_C23               PE_CR2_bit.C23
#define PE_CR2_C24               PE_CR2_bit.C24
#define PE_CR2_C25               PE_CR2_bit.C25
#define PE_CR2_C26               PE_CR2_bit.C26
#define PE_CR2_C27               PE_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port E bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PE_ODR_ODR0         0x01
#define MASK_PE_ODR_ODR1         0x02
#define MASK_PE_ODR_ODR2         0x04
#define MASK_PE_ODR_ODR3         0x08
#define MASK_PE_ODR_ODR4         0x10
#define MASK_PE_ODR_ODR5         0x20
#define MASK_PE_ODR_ODR6         0x40
#define MASK_PE_ODR_ODR7         0x80

#define MASK_PE_IDR_IDR0         0x01
#define MASK_PE_IDR_IDR1         0x02
#define MASK_PE_IDR_IDR2         0x04
#define MASK_PE_IDR_IDR3         0x08
#define MASK_PE_IDR_IDR4         0x10
#define MASK_PE_IDR_IDR5         0x20
#define MASK_PE_IDR_IDR6         0x40
#define MASK_PE_IDR_IDR7         0x80

#define MASK_PE_DDR_DDR0         0x01
#define MASK_PE_DDR_DDR1         0x02
#define MASK_PE_DDR_DDR2         0x04
#define MASK_PE_DDR_DDR3         0x08
#define MASK_PE_DDR_DDR4         0x10
#define MASK_PE_DDR_DDR5         0x20
#define MASK_PE_DDR_DDR6         0x40
#define MASK_PE_DDR_DDR7         0x80

#define MASK_PE_CR1_C10          0x01
#define MASK_PE_CR1_C11          0x02
#define MASK_PE_CR1_C12          0x04
#define MASK_PE_CR1_C13          0x08
#define MASK_PE_CR1_C14          0x10
#define MASK_PE_CR1_C15          0x20
#define MASK_PE_CR1_C16          0x40
#define MASK_PE_CR1_C17          0x80

#define MASK_PE_CR2_C20          0x01
#define MASK_PE_CR2_C21          0x02
#define MASK_PE_CR2_C22          0x04
#define MASK_PE_CR2_C23          0x08
#define MASK_PE_CR2_C24          0x10
#define MASK_PE_CR2_C25          0x20
#define MASK_PE_CR2_C26          0x40
#define MASK_PE_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port F register definitions
 *-----------------------------------------------------------------------*/
/* Port F data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PF_ODR;
#endif
//__IO_REG8_BIT(PF_ODR,      0x5019, __READ_WRITE, __BITS_PF_ODR);
unsigned char PF_ODR; //0x5019 __READ_WRITE
__BITS_PF_ODR PF_ODR_bit;

/* Port F input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PF_IDR;
#endif
//__IO_REG8_BIT(PF_IDR,      0x501A, __READ, __BITS_PF_IDR);
unsigned char PF_IDR; //0x501A __READ
__BITS_PF_IDR PF_IDR_bit;

/* Port F data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PF_DDR;
#endif
//__IO_REG8_BIT(PF_DDR,      0x501B, __READ_WRITE, __BITS_PF_DDR);
unsigned char PF_DDR; //0x501B __READ_WRITE
__BITS_PF_DDR PF_DDR_bit;

/* Port F control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PF_CR1;
#endif
//__IO_REG8_BIT(PF_CR1,      0x501C, __READ_WRITE, __BITS_PF_CR1);
unsigned char PF_CR1; //0x501C __READ_WRITE
__BITS_PF_CR1 PF_CR1_bit;

/* Port F control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PF_CR2;
#endif
//__IO_REG8_BIT(PF_CR2,      0x501D, __READ_WRITE, __BITS_PF_CR2);
unsigned char PF_CR2; //0x501D __READ_WRITE
__BITS_PF_CR2 PF_CR2_bit;


/*-------------------------------------------------------------------------
 *      Port F bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PF_ODR_ODR0              PF_ODR_bit.ODR0
#define PF_ODR_ODR1              PF_ODR_bit.ODR1
#define PF_ODR_ODR2              PF_ODR_bit.ODR2
#define PF_ODR_ODR3              PF_ODR_bit.ODR3
#define PF_ODR_ODR4              PF_ODR_bit.ODR4
#define PF_ODR_ODR5              PF_ODR_bit.ODR5
#define PF_ODR_ODR6              PF_ODR_bit.ODR6
#define PF_ODR_ODR7              PF_ODR_bit.ODR7

#define PF_IDR_IDR0              PF_IDR_bit.IDR0
#define PF_IDR_IDR1              PF_IDR_bit.IDR1
#define PF_IDR_IDR2              PF_IDR_bit.IDR2
#define PF_IDR_IDR3              PF_IDR_bit.IDR3
#define PF_IDR_IDR4              PF_IDR_bit.IDR4
#define PF_IDR_IDR5              PF_IDR_bit.IDR5
#define PF_IDR_IDR6              PF_IDR_bit.IDR6
#define PF_IDR_IDR7              PF_IDR_bit.IDR7

#define PF_DDR_DDR0              PF_DDR_bit.DDR0
#define PF_DDR_DDR1              PF_DDR_bit.DDR1
#define PF_DDR_DDR2              PF_DDR_bit.DDR2
#define PF_DDR_DDR3              PF_DDR_bit.DDR3
#define PF_DDR_DDR4              PF_DDR_bit.DDR4
#define PF_DDR_DDR5              PF_DDR_bit.DDR5
#define PF_DDR_DDR6              PF_DDR_bit.DDR6
#define PF_DDR_DDR7              PF_DDR_bit.DDR7

#define PF_CR1_C10               PF_CR1_bit.C10
#define PF_CR1_C11               PF_CR1_bit.C11
#define PF_CR1_C12               PF_CR1_bit.C12
#define PF_CR1_C13               PF_CR1_bit.C13
#define PF_CR1_C14               PF_CR1_bit.C14
#define PF_CR1_C15               PF_CR1_bit.C15
#define PF_CR1_C16               PF_CR1_bit.C16
#define PF_CR1_C17               PF_CR1_bit.C17

#define PF_CR2_C20               PF_CR2_bit.C20
#define PF_CR2_C21               PF_CR2_bit.C21
#define PF_CR2_C22               PF_CR2_bit.C22
#define PF_CR2_C23               PF_CR2_bit.C23
#define PF_CR2_C24               PF_CR2_bit.C24
#define PF_CR2_C25               PF_CR2_bit.C25
#define PF_CR2_C26               PF_CR2_bit.C26
#define PF_CR2_C27               PF_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port F bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PF_ODR_ODR0         0x01
#define MASK_PF_ODR_ODR1         0x02
#define MASK_PF_ODR_ODR2         0x04
#define MASK_PF_ODR_ODR3         0x08
#define MASK_PF_ODR_ODR4         0x10
#define MASK_PF_ODR_ODR5         0x20
#define MASK_PF_ODR_ODR6         0x40
#define MASK_PF_ODR_ODR7         0x80

#define MASK_PF_IDR_IDR0         0x01
#define MASK_PF_IDR_IDR1         0x02
#define MASK_PF_IDR_IDR2         0x04
#define MASK_PF_IDR_IDR3         0x08
#define MASK_PF_IDR_IDR4         0x10
#define MASK_PF_IDR_IDR5         0x20
#define MASK_PF_IDR_IDR6         0x40
#define MASK_PF_IDR_IDR7         0x80

#define MASK_PF_DDR_DDR0         0x01
#define MASK_PF_DDR_DDR1         0x02
#define MASK_PF_DDR_DDR2         0x04
#define MASK_PF_DDR_DDR3         0x08
#define MASK_PF_DDR_DDR4         0x10
#define MASK_PF_DDR_DDR5         0x20
#define MASK_PF_DDR_DDR6         0x40
#define MASK_PF_DDR_DDR7         0x80

#define MASK_PF_CR1_C10          0x01
#define MASK_PF_CR1_C11          0x02
#define MASK_PF_CR1_C12          0x04
#define MASK_PF_CR1_C13          0x08
#define MASK_PF_CR1_C14          0x10
#define MASK_PF_CR1_C15          0x20
#define MASK_PF_CR1_C16          0x40
#define MASK_PF_CR1_C17          0x80

#define MASK_PF_CR2_C20          0x01
#define MASK_PF_CR2_C21          0x02
#define MASK_PF_CR2_C22          0x04
#define MASK_PF_CR2_C23          0x08
#define MASK_PF_CR2_C24          0x10
#define MASK_PF_CR2_C25          0x20
#define MASK_PF_CR2_C26          0x40
#define MASK_PF_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port G register definitions
 *-----------------------------------------------------------------------*/
/* Port G data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PG_ODR;
#endif
//__IO_REG8_BIT(PG_ODR,      0x501E, __READ_WRITE, __BITS_PG_ODR);
unsigned char PG_ODR; //0x501E __READ_WRITE
__BITS_PG_ODR PG_ODR_bit;

/* Port G input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PG_IDR;
#endif
//__IO_REG8_BIT(PG_IDR,      0x501F, __READ, __BITS_PG_IDR);
unsigned char PG_IDR; //0x501F __READ
__BITS_PG_IDR PG_IDR_bit;

/* Port G data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PG_DDR;
#endif
//__IO_REG8_BIT(PG_DDR,      0x5020, __READ_WRITE, __BITS_PG_DDR);
unsigned char PG_DDR; //0x5020 __READ_WRITE
__BITS_PG_DDR PG_DDR_bit;

/* Port G control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PG_CR1;
#endif
//__IO_REG8_BIT(PG_CR1,      0x5021, __READ_WRITE, __BITS_PG_CR1);
unsigned char PG_CR1; //0x5021 __READ_WRITE
__BITS_PG_CR1 PG_CR1_bit;

/* Port G control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PG_CR2;
#endif
//__IO_REG8_BIT(PG_CR2,      0x5022, __READ_WRITE, __BITS_PG_CR2);
unsigned char PG_CR2; //0x5022 __READ_WRITE
__BITS_PG_CR2 PG_CR2_bit;


/*-------------------------------------------------------------------------
 *      Port G bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PG_ODR_ODR0              PG_ODR_bit.ODR0
#define PG_ODR_ODR1              PG_ODR_bit.ODR1
#define PG_ODR_ODR2              PG_ODR_bit.ODR2
#define PG_ODR_ODR3              PG_ODR_bit.ODR3
#define PG_ODR_ODR4              PG_ODR_bit.ODR4
#define PG_ODR_ODR5              PG_ODR_bit.ODR5
#define PG_ODR_ODR6              PG_ODR_bit.ODR6
#define PG_ODR_ODR7              PG_ODR_bit.ODR7

#define PG_IDR_IDR0              PG_IDR_bit.IDR0
#define PG_IDR_IDR1              PG_IDR_bit.IDR1
#define PG_IDR_IDR2              PG_IDR_bit.IDR2
#define PG_IDR_IDR3              PG_IDR_bit.IDR3
#define PG_IDR_IDR4              PG_IDR_bit.IDR4
#define PG_IDR_IDR5              PG_IDR_bit.IDR5
#define PG_IDR_IDR6              PG_IDR_bit.IDR6
#define PG_IDR_IDR7              PG_IDR_bit.IDR7

#define PG_DDR_DDR0              PG_DDR_bit.DDR0
#define PG_DDR_DDR1              PG_DDR_bit.DDR1
#define PG_DDR_DDR2              PG_DDR_bit.DDR2
#define PG_DDR_DDR3              PG_DDR_bit.DDR3
#define PG_DDR_DDR4              PG_DDR_bit.DDR4
#define PG_DDR_DDR5              PG_DDR_bit.DDR5
#define PG_DDR_DDR6              PG_DDR_bit.DDR6
#define PG_DDR_DDR7              PG_DDR_bit.DDR7

#define PG_CR1_C10               PG_CR1_bit.C10
#define PG_CR1_C11               PG_CR1_bit.C11
#define PG_CR1_C12               PG_CR1_bit.C12
#define PG_CR1_C13               PG_CR1_bit.C13
#define PG_CR1_C14               PG_CR1_bit.C14
#define PG_CR1_C15               PG_CR1_bit.C15
#define PG_CR1_C16               PG_CR1_bit.C16
#define PG_CR1_C17               PG_CR1_bit.C17

#define PG_CR2_C20               PG_CR2_bit.C20
#define PG_CR2_C21               PG_CR2_bit.C21
#define PG_CR2_C22               PG_CR2_bit.C22
#define PG_CR2_C23               PG_CR2_bit.C23
#define PG_CR2_C24               PG_CR2_bit.C24
#define PG_CR2_C25               PG_CR2_bit.C25
#define PG_CR2_C26               PG_CR2_bit.C26
#define PG_CR2_C27               PG_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port G bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PG_ODR_ODR0         0x01
#define MASK_PG_ODR_ODR1         0x02
#define MASK_PG_ODR_ODR2         0x04
#define MASK_PG_ODR_ODR3         0x08
#define MASK_PG_ODR_ODR4         0x10
#define MASK_PG_ODR_ODR5         0x20
#define MASK_PG_ODR_ODR6         0x40
#define MASK_PG_ODR_ODR7         0x80

#define MASK_PG_IDR_IDR0         0x01
#define MASK_PG_IDR_IDR1         0x02
#define MASK_PG_IDR_IDR2         0x04
#define MASK_PG_IDR_IDR3         0x08
#define MASK_PG_IDR_IDR4         0x10
#define MASK_PG_IDR_IDR5         0x20
#define MASK_PG_IDR_IDR6         0x40
#define MASK_PG_IDR_IDR7         0x80

#define MASK_PG_DDR_DDR0         0x01
#define MASK_PG_DDR_DDR1         0x02
#define MASK_PG_DDR_DDR2         0x04
#define MASK_PG_DDR_DDR3         0x08
#define MASK_PG_DDR_DDR4         0x10
#define MASK_PG_DDR_DDR5         0x20
#define MASK_PG_DDR_DDR6         0x40
#define MASK_PG_DDR_DDR7         0x80

#define MASK_PG_CR1_C10          0x01
#define MASK_PG_CR1_C11          0x02
#define MASK_PG_CR1_C12          0x04
#define MASK_PG_CR1_C13          0x08
#define MASK_PG_CR1_C14          0x10
#define MASK_PG_CR1_C15          0x20
#define MASK_PG_CR1_C16          0x40
#define MASK_PG_CR1_C17          0x80

#define MASK_PG_CR2_C20          0x01
#define MASK_PG_CR2_C21          0x02
#define MASK_PG_CR2_C22          0x04
#define MASK_PG_CR2_C23          0x08
#define MASK_PG_CR2_C24          0x10
#define MASK_PG_CR2_C25          0x20
#define MASK_PG_CR2_C26          0x40
#define MASK_PG_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port H register definitions
 *-----------------------------------------------------------------------*/
/* Port H data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PH_ODR;
#endif
//__IO_REG8_BIT(PH_ODR,      0x5023, __READ_WRITE, __BITS_PH_ODR);
unsigned char PH_ODR; //0x5023 __READ_WRITE
__BITS_PH_ODR PH_ODR_bit;

/* Port H input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PH_IDR;
#endif
//__IO_REG8_BIT(PH_IDR,      0x5024, __READ, __BITS_PH_IDR);
unsigned char PH_IDR; //0x5024 __READ
__BITS_PH_IDR PH_IDR_bit;

/* Port H data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PH_DDR;
#endif
//__IO_REG8_BIT(PH_DDR,      0x5025, __READ_WRITE, __BITS_PH_DDR);
unsigned char PH_DDR; //0x5025 __READ_WRITE
__BITS_PH_DDR PH_DDR_bit;

/* Port H control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PH_CR1;
#endif
//__IO_REG8_BIT(PH_CR1,      0x5026, __READ_WRITE, __BITS_PH_CR1);
unsigned char PH_CR1; //0x5026 __READ_WRITE
__BITS_PH_CR1 PH_CR1_bit;

/* Port H control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PH_CR2;
#endif
//__IO_REG8_BIT(PH_CR2,      0x5027, __READ_WRITE, __BITS_PH_CR2);
unsigned char PH_CR2; //0x5027 __READ_WRITE
__BITS_PH_CR2 PH_CR2_bit;


/*-------------------------------------------------------------------------
 *      Port H bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PH_ODR_ODR0              PH_ODR_bit.ODR0
#define PH_ODR_ODR1              PH_ODR_bit.ODR1
#define PH_ODR_ODR2              PH_ODR_bit.ODR2
#define PH_ODR_ODR3              PH_ODR_bit.ODR3
#define PH_ODR_ODR4              PH_ODR_bit.ODR4
#define PH_ODR_ODR5              PH_ODR_bit.ODR5
#define PH_ODR_ODR6              PH_ODR_bit.ODR6
#define PH_ODR_ODR7              PH_ODR_bit.ODR7

#define PH_IDR_IDR0              PH_IDR_bit.IDR0
#define PH_IDR_IDR1              PH_IDR_bit.IDR1
#define PH_IDR_IDR2              PH_IDR_bit.IDR2
#define PH_IDR_IDR3              PH_IDR_bit.IDR3
#define PH_IDR_IDR4              PH_IDR_bit.IDR4
#define PH_IDR_IDR5              PH_IDR_bit.IDR5
#define PH_IDR_IDR6              PH_IDR_bit.IDR6
#define PH_IDR_IDR7              PH_IDR_bit.IDR7

#define PH_DDR_DDR0              PH_DDR_bit.DDR0
#define PH_DDR_DDR1              PH_DDR_bit.DDR1
#define PH_DDR_DDR2              PH_DDR_bit.DDR2
#define PH_DDR_DDR3              PH_DDR_bit.DDR3
#define PH_DDR_DDR4              PH_DDR_bit.DDR4
#define PH_DDR_DDR5              PH_DDR_bit.DDR5
#define PH_DDR_DDR6              PH_DDR_bit.DDR6
#define PH_DDR_DDR7              PH_DDR_bit.DDR7

#define PH_CR1_C10               PH_CR1_bit.C10
#define PH_CR1_C11               PH_CR1_bit.C11
#define PH_CR1_C12               PH_CR1_bit.C12
#define PH_CR1_C13               PH_CR1_bit.C13
#define PH_CR1_C14               PH_CR1_bit.C14
#define PH_CR1_C15               PH_CR1_bit.C15
#define PH_CR1_C16               PH_CR1_bit.C16
#define PH_CR1_C17               PH_CR1_bit.C17

#define PH_CR2_C20               PH_CR2_bit.C20
#define PH_CR2_C21               PH_CR2_bit.C21
#define PH_CR2_C22               PH_CR2_bit.C22
#define PH_CR2_C23               PH_CR2_bit.C23
#define PH_CR2_C24               PH_CR2_bit.C24
#define PH_CR2_C25               PH_CR2_bit.C25
#define PH_CR2_C26               PH_CR2_bit.C26
#define PH_CR2_C27               PH_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port H bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PH_ODR_ODR0         0x01
#define MASK_PH_ODR_ODR1         0x02
#define MASK_PH_ODR_ODR2         0x04
#define MASK_PH_ODR_ODR3         0x08
#define MASK_PH_ODR_ODR4         0x10
#define MASK_PH_ODR_ODR5         0x20
#define MASK_PH_ODR_ODR6         0x40
#define MASK_PH_ODR_ODR7         0x80

#define MASK_PH_IDR_IDR0         0x01
#define MASK_PH_IDR_IDR1         0x02
#define MASK_PH_IDR_IDR2         0x04
#define MASK_PH_IDR_IDR3         0x08
#define MASK_PH_IDR_IDR4         0x10
#define MASK_PH_IDR_IDR5         0x20
#define MASK_PH_IDR_IDR6         0x40
#define MASK_PH_IDR_IDR7         0x80

#define MASK_PH_DDR_DDR0         0x01
#define MASK_PH_DDR_DDR1         0x02
#define MASK_PH_DDR_DDR2         0x04
#define MASK_PH_DDR_DDR3         0x08
#define MASK_PH_DDR_DDR4         0x10
#define MASK_PH_DDR_DDR5         0x20
#define MASK_PH_DDR_DDR6         0x40
#define MASK_PH_DDR_DDR7         0x80

#define MASK_PH_CR1_C10          0x01
#define MASK_PH_CR1_C11          0x02
#define MASK_PH_CR1_C12          0x04
#define MASK_PH_CR1_C13          0x08
#define MASK_PH_CR1_C14          0x10
#define MASK_PH_CR1_C15          0x20
#define MASK_PH_CR1_C16          0x40
#define MASK_PH_CR1_C17          0x80

#define MASK_PH_CR2_C20          0x01
#define MASK_PH_CR2_C21          0x02
#define MASK_PH_CR2_C22          0x04
#define MASK_PH_CR2_C23          0x08
#define MASK_PH_CR2_C24          0x10
#define MASK_PH_CR2_C25          0x20
#define MASK_PH_CR2_C26          0x40
#define MASK_PH_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port I register definitions
 *-----------------------------------------------------------------------*/
/* Port I data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PI_ODR;
#endif
//__IO_REG8_BIT(PI_ODR,      0x5028, __READ_WRITE, __BITS_PI_ODR);
unsigned char PI_ODR; //0x5028 __READ_WRITE
__BITS_PI_ODR PI_ODR_bit;

/* Port I input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PI_IDR;
#endif
//__IO_REG8_BIT(PI_IDR,      0x5029, __READ, __BITS_PI_IDR);
unsigned char PI_IDR; //0x5029 __READ
__BITS_PI_IDR PI_IDR_bit;

/* Port I data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PI_DDR;
#endif
//__IO_REG8_BIT(PI_DDR,      0x502A, __READ_WRITE, __BITS_PI_DDR);
unsigned char PI_DDR; //0x502A __READ_WRITE
__BITS_PI_DDR PI_DDR_bit;

/* Port I control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PI_CR1;
#endif
//__IO_REG8_BIT(PI_CR1,      0x502B, __READ_WRITE, __BITS_PI_CR1);
unsigned char PI_CR1; //0x502B __READ_WRITE
__BITS_PI_CR1 PI_CR1_bit;

/* Port I control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PI_CR2;
#endif
//__IO_REG8_BIT(PI_CR2,      0x502C, __READ_WRITE, __BITS_PI_CR2);
unsigned char PI_CR2; //0x502C __READ_WRITE
__BITS_PI_CR2 PI_CR2_bit;


/*-------------------------------------------------------------------------
 *      Port I bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PI_ODR_ODR0              PI_ODR_bit.ODR0
#define PI_ODR_ODR1              PI_ODR_bit.ODR1
#define PI_ODR_ODR2              PI_ODR_bit.ODR2
#define PI_ODR_ODR3              PI_ODR_bit.ODR3
#define PI_ODR_ODR4              PI_ODR_bit.ODR4
#define PI_ODR_ODR5              PI_ODR_bit.ODR5
#define PI_ODR_ODR6              PI_ODR_bit.ODR6
#define PI_ODR_ODR7              PI_ODR_bit.ODR7

#define PI_IDR_IDR0              PI_IDR_bit.IDR0
#define PI_IDR_IDR1              PI_IDR_bit.IDR1
#define PI_IDR_IDR2              PI_IDR_bit.IDR2
#define PI_IDR_IDR3              PI_IDR_bit.IDR3
#define PI_IDR_IDR4              PI_IDR_bit.IDR4
#define PI_IDR_IDR5              PI_IDR_bit.IDR5
#define PI_IDR_IDR6              PI_IDR_bit.IDR6
#define PI_IDR_IDR7              PI_IDR_bit.IDR7

#define PI_DDR_DDR0              PI_DDR_bit.DDR0
#define PI_DDR_DDR1              PI_DDR_bit.DDR1
#define PI_DDR_DDR2              PI_DDR_bit.DDR2
#define PI_DDR_DDR3              PI_DDR_bit.DDR3
#define PI_DDR_DDR4              PI_DDR_bit.DDR4
#define PI_DDR_DDR5              PI_DDR_bit.DDR5
#define PI_DDR_DDR6              PI_DDR_bit.DDR6
#define PI_DDR_DDR7              PI_DDR_bit.DDR7

#define PI_CR1_C10               PI_CR1_bit.C10
#define PI_CR1_C11               PI_CR1_bit.C11
#define PI_CR1_C12               PI_CR1_bit.C12
#define PI_CR1_C13               PI_CR1_bit.C13
#define PI_CR1_C14               PI_CR1_bit.C14
#define PI_CR1_C15               PI_CR1_bit.C15
#define PI_CR1_C16               PI_CR1_bit.C16
#define PI_CR1_C17               PI_CR1_bit.C17

#define PI_CR2_C20               PI_CR2_bit.C20
#define PI_CR2_C21               PI_CR2_bit.C21
#define PI_CR2_C22               PI_CR2_bit.C22
#define PI_CR2_C23               PI_CR2_bit.C23
#define PI_CR2_C24               PI_CR2_bit.C24
#define PI_CR2_C25               PI_CR2_bit.C25
#define PI_CR2_C26               PI_CR2_bit.C26
#define PI_CR2_C27               PI_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port I bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PI_ODR_ODR0         0x01
#define MASK_PI_ODR_ODR1         0x02
#define MASK_PI_ODR_ODR2         0x04
#define MASK_PI_ODR_ODR3         0x08
#define MASK_PI_ODR_ODR4         0x10
#define MASK_PI_ODR_ODR5         0x20
#define MASK_PI_ODR_ODR6         0x40
#define MASK_PI_ODR_ODR7         0x80

#define MASK_PI_IDR_IDR0         0x01
#define MASK_PI_IDR_IDR1         0x02
#define MASK_PI_IDR_IDR2         0x04
#define MASK_PI_IDR_IDR3         0x08
#define MASK_PI_IDR_IDR4         0x10
#define MASK_PI_IDR_IDR5         0x20
#define MASK_PI_IDR_IDR6         0x40
#define MASK_PI_IDR_IDR7         0x80

#define MASK_PI_DDR_DDR0         0x01
#define MASK_PI_DDR_DDR1         0x02
#define MASK_PI_DDR_DDR2         0x04
#define MASK_PI_DDR_DDR3         0x08
#define MASK_PI_DDR_DDR4         0x10
#define MASK_PI_DDR_DDR5         0x20
#define MASK_PI_DDR_DDR6         0x40
#define MASK_PI_DDR_DDR7         0x80

#define MASK_PI_CR1_C10          0x01
#define MASK_PI_CR1_C11          0x02
#define MASK_PI_CR1_C12          0x04
#define MASK_PI_CR1_C13          0x08
#define MASK_PI_CR1_C14          0x10
#define MASK_PI_CR1_C15          0x20
#define MASK_PI_CR1_C16          0x40
#define MASK_PI_CR1_C17          0x80

#define MASK_PI_CR2_C20          0x01
#define MASK_PI_CR2_C21          0x02
#define MASK_PI_CR2_C22          0x04
#define MASK_PI_CR2_C23          0x08
#define MASK_PI_CR2_C24          0x10
#define MASK_PI_CR2_C25          0x20
#define MASK_PI_CR2_C26          0x40
#define MASK_PI_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Flash register definitions
 *-----------------------------------------------------------------------*/
/* Flash control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FIX         : 1;
  unsigned char IE          : 1;
  unsigned char WAITM       : 1;
  unsigned char EEPM        : 1;
} __BITS_FLASH_CR1;
#endif
//__IO_REG8_BIT(FLASH_CR1,   0x5050, __READ_WRITE, __BITS_FLASH_CR1);
unsigned char FLASH_CR1; //0x5050 __READ_WRITE
__BITS_FLASH_CR1 FLASH_CR1_bit;

/* Flash control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PRG         : 1;
  unsigned char             : 3;
  unsigned char FPRG        : 1;
  unsigned char ERASE       : 1;
  unsigned char WPRG        : 1;
  unsigned char OPT         : 1;
} __BITS_FLASH_CR2;
#endif
//__IO_REG8_BIT(FLASH_CR2,   0x5051, __READ_WRITE, __BITS_FLASH_CR2);
unsigned char FLASH_CR2; //0x5051 __READ_WRITE
__BITS_FLASH_CR2 FLASH_CR2_bit;

/* Flash program memory unprotection key register */
//__IO_REG8    (FLASH_PUKR,  0x5052, __READ_WRITE);
unsigned char FLASH_PUKR; //0x5052 __READ_WRITE
/* Data EEPROM unprotection key register */
//__IO_REG8    (FLASH_DUKR,  0x5053, __READ_WRITE);
unsigned char FLASH_DUKR; //0x5053 __READ_WRITE
/* Flash in-application programming status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WR_PG_DIS   : 1;
  unsigned char PUL         : 1;
  unsigned char EOP         : 1;
  unsigned char DUL         : 1;
  unsigned char             : 2;
  unsigned char HVOFF       : 1;
} __BITS_FLASH_IAPSR;
#endif
//__IO_REG8_BIT(FLASH_IAPSR, 0x5054, __READ_WRITE, __BITS_FLASH_IAPSR);
unsigned char FLASH_IAPSR; //0x5054 __READ_WRITE
__BITS_FLASH_IAPSR FLASH_IAPSR_bit;


/*-------------------------------------------------------------------------
 *      Flash bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define FLASH_CR1_FIX            FLASH_CR1_bit.FIX
#define FLASH_CR1_IE             FLASH_CR1_bit.IE
#define FLASH_CR1_WAITM          FLASH_CR1_bit.WAITM
#define FLASH_CR1_EEPM           FLASH_CR1_bit.EEPM

#define FLASH_CR2_PRG            FLASH_CR2_bit.PRG
#define FLASH_CR2_FPRG           FLASH_CR2_bit.FPRG
#define FLASH_CR2_ERASE          FLASH_CR2_bit.ERASE
#define FLASH_CR2_WPRG           FLASH_CR2_bit.WPRG
#define FLASH_CR2_OPT            FLASH_CR2_bit.OPT

#define FLASH_IAPSR_WR_PG_DIS    FLASH_IAPSR_bit.WR_PG_DIS
#define FLASH_IAPSR_PUL          FLASH_IAPSR_bit.PUL
#define FLASH_IAPSR_EOP          FLASH_IAPSR_bit.EOP
#define FLASH_IAPSR_DUL          FLASH_IAPSR_bit.DUL
#define FLASH_IAPSR_HVOFF        FLASH_IAPSR_bit.HVOFF

#endif

/*-------------------------------------------------------------------------
 *      Flash bit masks
 *-----------------------------------------------------------------------*/
#define MASK_FLASH_CR1_FIX       0x01
#define MASK_FLASH_CR1_IE        0x02
#define MASK_FLASH_CR1_WAITM     0x04
#define MASK_FLASH_CR1_EEPM      0x08

#define MASK_FLASH_CR2_PRG       0x01
#define MASK_FLASH_CR2_FPRG      0x10
#define MASK_FLASH_CR2_ERASE     0x20
#define MASK_FLASH_CR2_WPRG      0x40
#define MASK_FLASH_CR2_OPT       0x80

#define MASK_FLASH_IAPSR_WR_PG_DIS 0x01
#define MASK_FLASH_IAPSR_PUL     0x02
#define MASK_FLASH_IAPSR_EOP     0x04
#define MASK_FLASH_IAPSR_DUL     0x08
#define MASK_FLASH_IAPSR_HVOFF   0x40


/*-------------------------------------------------------------------------
 *      DMA1 register definitions
 *-----------------------------------------------------------------------*/
/* DMA1 global configuration & status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char GEN         : 1;
  unsigned char GB          : 1;
  unsigned char TO          : 6;
} __BITS_DMA1_GCSR;
#endif
//__IO_REG8_BIT(DMA1_GCSR,   0x5070, __READ_WRITE, __BITS_DMA1_GCSR);
unsigned char DMA1_GCSR; //0x5070 __READ_WRITE
__BITS_DMA1_GCSR DMA1_GCSR_bit;

/* DMA1 global interrupt register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IFC0        : 1;
  unsigned char IFC1        : 1;
  unsigned char IFC2        : 1;
  unsigned char IFC3        : 1;
} __BITS_DMA1_GIR1;
#endif
//__IO_REG8_BIT(DMA1_GIR1,   0x5071, __READ, __BITS_DMA1_GIR1);
unsigned char DMA1_GIR1; //0x5071 __READ
__BITS_DMA1_GIR1 DMA1_GIR1_bit;

/* DMA1 channel 0 configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char TCIE        : 1;
  unsigned char HTIE        : 1;
  unsigned char DIR         : 1;
  unsigned char CIRC        : 1;
  unsigned char MINCDEC     : 1;
} __BITS_DMA1_C0CR;
#endif
//__IO_REG8_BIT(DMA1_C0CR,   0x5075, __READ_WRITE, __BITS_DMA1_C0CR);
unsigned char DMA1_C0CR; //0x5075 __READ_WRITE
__BITS_DMA1_C0CR DMA1_C0CR_bit;

/* DMA1 channel 0 status */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TCIF        : 1;
  unsigned char HTIF        : 1;
  unsigned char TSIZE       : 1;
  unsigned char PL0         : 1;
  unsigned char PL1         : 1;
  unsigned char PEND        : 1;
  unsigned char BUSY        : 1;
} __BITS_DMA1_C0SPR;
#endif
//__IO_REG8_BIT(DMA1_C0SPR,  0x5076, __READ_WRITE, __BITS_DMA1_C0SPR);
unsigned char DMA1_C0SPR; //0x5076 __READ_WRITE
__BITS_DMA1_C0SPR DMA1_C0SPR_bit;

/* DMA1 number of data to transfer register (channel 0) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NDT0        : 1;
  unsigned char NDT1        : 1;
  unsigned char NDT2        : 1;
  unsigned char NDT3        : 1;
  unsigned char NDT4        : 1;
  unsigned char NDT5        : 1;
  unsigned char NDT6        : 1;
  unsigned char NDT7        : 1;
} __BITS_DMA1_C0NDTR;
#endif
//__IO_REG8_BIT(DMA1_C0NDTR, 0x5077, __READ_WRITE, __BITS_DMA1_C0NDTR);
unsigned char DMA1_C0NDTR; //0x5077 __READ_WRITE
__BITS_DMA1_C0NDTR DMA1_C0NDTR_bit;

/* DMA1 peripheral address high register (channel 0) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA8         : 1;
  unsigned char PA9         : 1;
  unsigned char PA10        : 1;
  unsigned char PA11        : 1;
  unsigned char PA12        : 1;
  unsigned char PA13        : 1;
  unsigned char PA14        : 1;
  unsigned char PA15        : 1;
} __BITS_DMA1_C0PARH;
#endif
//__IO_REG8_BIT(DMA1_C0PARH, 0x5078, __READ_WRITE, __BITS_DMA1_C0PARH);
unsigned char DMA1_C0PARH; //0x5078 __READ_WRITE
__BITS_DMA1_C0PARH DMA1_C0PARH_bit;

/* DMA1 peripheral address low register (channel 0) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA0         : 1;
  unsigned char PA1         : 1;
  unsigned char PA2         : 1;
  unsigned char PA3         : 1;
  unsigned char PA4         : 1;
  unsigned char PA5         : 1;
  unsigned char PA6         : 1;
  unsigned char PA7         : 1;
} __BITS_DMA1_C0PARL;
#endif
//__IO_REG8_BIT(DMA1_C0PARL, 0x5079, __READ_WRITE, __BITS_DMA1_C0PARL);
unsigned char DMA1_C0PARL; //0x5079 __READ_WRITE
__BITS_DMA1_C0PARL DMA1_C0PARL_bit;

/* DMA1 memory 0 address high register (channel 0) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A8        : 1;
  unsigned char M0A9        : 1;
  unsigned char M0A10       : 1;
  unsigned char M0A11       : 1;
  unsigned char M0A12       : 1;
  unsigned char M0A13       : 1;
  unsigned char M0A14       : 1;
  unsigned char M0A15       : 1;
} __BITS_DMA1_C0M0ARH;
#endif
//__IO_REG8_BIT(DMA1_C0M0ARH, 0x507B, __READ_WRITE, __BITS_DMA1_C0M0ARH);
unsigned char DMA1_C0M0ARH; //0x507B __READ_WRITE
__BITS_DMA1_C0M0ARH DMA1_C0M0ARH_bit;

/* DMA1 memory 0 address low register (channel 0) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A0        : 1;
  unsigned char M0A1        : 1;
  unsigned char M0A2        : 1;
  unsigned char M0A3        : 1;
  unsigned char M0A4        : 1;
  unsigned char M0A5        : 1;
  unsigned char M0A6        : 1;
  unsigned char M0A7        : 1;
} __BITS_DMA1_C0M0ARL;
#endif
//__IO_REG8_BIT(DMA1_C0M0ARL, 0x507C, __READ_WRITE, __BITS_DMA1_C0M0ARL);
unsigned char DMA1_C0M0ARL; //0x507C __READ_WRITE
__BITS_DMA1_C0M0ARL DMA1_C0M0ARL_bit;

/* DMA1 channel 1 configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char TCIE        : 1;
  unsigned char HTIE        : 1;
  unsigned char DIR         : 1;
  unsigned char CIRC        : 1;
  unsigned char MINCDEC     : 1;
} __BITS_DMA1_C1CR;
#endif
//__IO_REG8_BIT(DMA1_C1CR,   0x507F, __READ_WRITE, __BITS_DMA1_C1CR);
unsigned char DMA1_C1CR; //0x507F __READ_WRITE
__BITS_DMA1_C1CR DMA1_C1CR_bit;

/* DMA1 channel 1 status */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TCIF        : 1;
  unsigned char HTIF        : 1;
  unsigned char TSIZE       : 1;
  unsigned char PL0         : 1;
  unsigned char PL1         : 1;
  unsigned char PEND        : 1;
  unsigned char BUSY        : 1;
} __BITS_DMA1_C1SPR;
#endif
//__IO_REG8_BIT(DMA1_C1SPR,  0x5080, __READ_WRITE, __BITS_DMA1_C1SPR);
unsigned char DMA1_C1SPR; //0x5080 __READ_WRITE
__BITS_DMA1_C1SPR DMA1_C1SPR_bit;

/* DMA1 number of data to transfer register (channel 1) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NDT0        : 1;
  unsigned char NDT1        : 1;
  unsigned char NDT2        : 1;
  unsigned char NDT3        : 1;
  unsigned char NDT4        : 1;
  unsigned char NDT5        : 1;
  unsigned char NDT6        : 1;
  unsigned char NDT7        : 1;
} __BITS_DMA1_C1NDTR;
#endif
//__IO_REG8_BIT(DMA1_C1NDTR, 0x5081, __READ_WRITE, __BITS_DMA1_C1NDTR);
unsigned char DMA1_C1NDTR; //0x5081 __READ_WRITE
__BITS_DMA1_C1NDTR DMA1_C1NDTR_bit;

/* DMA1 peripheral address high register (channel 1) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA8         : 1;
  unsigned char PA9         : 1;
  unsigned char PA10        : 1;
  unsigned char PA11        : 1;
  unsigned char PA12        : 1;
  unsigned char PA13        : 1;
  unsigned char PA14        : 1;
  unsigned char PA15        : 1;
} __BITS_DMA1_C1PARH;
#endif
//__IO_REG8_BIT(DMA1_C1PARH, 0x5082, __READ_WRITE, __BITS_DMA1_C1PARH);
unsigned char DMA1_C1PARH; //0x5082 __READ_WRITE
__BITS_DMA1_C1PARH DMA1_C1PARH_bit;

/* DMA1 peripheral address low register (channel 1) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA0         : 1;
  unsigned char PA1         : 1;
  unsigned char PA2         : 1;
  unsigned char PA3         : 1;
  unsigned char PA4         : 1;
  unsigned char PA5         : 1;
  unsigned char PA6         : 1;
  unsigned char PA7         : 1;
} __BITS_DMA1_C1PARL;
#endif
//__IO_REG8_BIT(DMA1_C1PARL, 0x5083, __READ_WRITE, __BITS_DMA1_C1PARL);
unsigned char DMA1_C1PARL; //0x5083 __READ_WRITE
__BITS_DMA1_C1PARL DMA1_C1PARL_bit;

/* DMA1 memory 0 address high register (channel 1) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A8        : 1;
  unsigned char M0A9        : 1;
  unsigned char M0A10       : 1;
  unsigned char M0A11       : 1;
  unsigned char M0A12       : 1;
  unsigned char M0A13       : 1;
  unsigned char M0A14       : 1;
  unsigned char M0A15       : 1;
} __BITS_DMA1_C1M0ARH;
#endif
//__IO_REG8_BIT(DMA1_C1M0ARH, 0x5085, __READ_WRITE, __BITS_DMA1_C1M0ARH);
unsigned char DMA1_C1M0ARH; //0x5085 __READ_WRITE
__BITS_DMA1_C1M0ARH DMA1_C1M0ARH_bit;

/* DMA1 memory 0 address low register (channel 1) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A0        : 1;
  unsigned char M0A1        : 1;
  unsigned char M0A2        : 1;
  unsigned char M0A3        : 1;
  unsigned char M0A4        : 1;
  unsigned char M0A5        : 1;
  unsigned char M0A6        : 1;
  unsigned char M0A7        : 1;
} __BITS_DMA1_C1M0ARL;
#endif
//__IO_REG8_BIT(DMA1_C1M0ARL, 0x5086, __READ_WRITE, __BITS_DMA1_C1M0ARL);
unsigned char DMA1_C1M0ARL; //0x5086 __READ_WRITE
__BITS_DMA1_C1M0ARL DMA1_C1M0ARL_bit;

/* DMA1 channel 2 configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char TCIE        : 1;
  unsigned char HTIE        : 1;
  unsigned char DIR         : 1;
  unsigned char CIRC        : 1;
  unsigned char MINCDEC     : 1;
} __BITS_DMA1_C2CR;
#endif
//__IO_REG8_BIT(DMA1_C2CR,   0x5089, __READ_WRITE, __BITS_DMA1_C2CR);
unsigned char DMA1_C2CR; //0x5089 __READ_WRITE
__BITS_DMA1_C2CR DMA1_C2CR_bit;

/* DMA1 channel 2 status */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TCIF        : 1;
  unsigned char HTIF        : 1;
  unsigned char TSIZE       : 1;
  unsigned char PL0         : 1;
  unsigned char PL1         : 1;
  unsigned char PEND        : 1;
  unsigned char BUSY        : 1;
} __BITS_DMA1_C2SPR;
#endif
//__IO_REG8_BIT(DMA1_C2SPR,  0x508A, __READ_WRITE, __BITS_DMA1_C2SPR);
unsigned char DMA1_C2SPR; //0x508A __READ_WRITE
__BITS_DMA1_C2SPR DMA1_C2SPR_bit;

/* DMA1 number of data to transfer register (channel 2) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NDT0        : 1;
  unsigned char NDT1        : 1;
  unsigned char NDT2        : 1;
  unsigned char NDT3        : 1;
  unsigned char NDT4        : 1;
  unsigned char NDT5        : 1;
  unsigned char NDT6        : 1;
  unsigned char NDT7        : 1;
} __BITS_DMA1_C2NDTR;
#endif
//__IO_REG8_BIT(DMA1_C2NDTR, 0x508B, __READ_WRITE, __BITS_DMA1_C2NDTR);
unsigned char DMA1_C2NDTR; //0x508B __READ_WRITE
__BITS_DMA1_C2NDTR DMA1_C2NDTR_bit;

/* DMA1 peripheral address high register (channel 2) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA8         : 1;
  unsigned char PA9         : 1;
  unsigned char PA10        : 1;
  unsigned char PA11        : 1;
  unsigned char PA12        : 1;
  unsigned char PA13        : 1;
  unsigned char PA14        : 1;
  unsigned char PA15        : 1;
} __BITS_DMA1_C2PARH;
#endif
//__IO_REG8_BIT(DMA1_C2PARH, 0x508C, __READ_WRITE, __BITS_DMA1_C2PARH);
unsigned char DMA1_C2PARH; //0x508C __READ_WRITE
__BITS_DMA1_C2PARH DMA1_C2PARH_bit;

/* DMA1 peripheral address low register (channel 2) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA0         : 1;
  unsigned char PA1         : 1;
  unsigned char PA2         : 1;
  unsigned char PA3         : 1;
  unsigned char PA4         : 1;
  unsigned char PA5         : 1;
  unsigned char PA6         : 1;
  unsigned char PA7         : 1;
} __BITS_DMA1_C2PARL;
#endif
//__IO_REG8_BIT(DMA1_C2PARL, 0x508D, __READ_WRITE, __BITS_DMA1_C2PARL);
unsigned char DMA1_C2PARL; //0x508D __READ_WRITE
__BITS_DMA1_C2PARL DMA1_C2PARL_bit;

/* DMA1 memory 0 address high register (channel 2) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A8        : 1;
  unsigned char M0A9        : 1;
  unsigned char M0A10       : 1;
  unsigned char M0A11       : 1;
  unsigned char M0A12       : 1;
  unsigned char M0A13       : 1;
  unsigned char M0A14       : 1;
  unsigned char M0A15       : 1;
} __BITS_DMA1_C2M0ARH;
#endif
//__IO_REG8_BIT(DMA1_C2M0ARH, 0x508F, __READ_WRITE, __BITS_DMA1_C2M0ARH);
unsigned char DMA1_C2M0ARH; //0x508F __READ_WRITE
__BITS_DMA1_C2M0ARH DMA1_C2M0ARH_bit;

/* DMA1 memory 0 address low register (channel 2) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A0        : 1;
  unsigned char M0A1        : 1;
  unsigned char M0A2        : 1;
  unsigned char M0A3        : 1;
  unsigned char M0A4        : 1;
  unsigned char M0A5        : 1;
  unsigned char M0A6        : 1;
  unsigned char M0A7        : 1;
} __BITS_DMA1_C2M0ARL;
#endif
//__IO_REG8_BIT(DMA1_C2M0ARL, 0x5090, __READ_WRITE, __BITS_DMA1_C2M0ARL);
unsigned char DMA1_C2M0ARL; //0x5090 __READ_WRITE
__BITS_DMA1_C2M0ARL DMA1_C2M0ARL_bit;

/* DMA1 channel 3 configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char TCIE        : 1;
  unsigned char HTIE        : 1;
  unsigned char DIR         : 1;
  unsigned char CIRC        : 1;
  unsigned char MINCDEC     : 1;
  unsigned char MEM         : 1;
} __BITS_DMA1_C3CR;
#endif
//__IO_REG8_BIT(DMA1_C3CR,   0x5093, __READ_WRITE, __BITS_DMA1_C3CR);
unsigned char DMA1_C3CR; //0x5093 __READ_WRITE
__BITS_DMA1_C3CR DMA1_C3CR_bit;

/* DMA1 channel 3 status */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TCIF        : 1;
  unsigned char HTIF        : 1;
  unsigned char TSIZE       : 1;
  unsigned char PL0         : 1;
  unsigned char PL1         : 1;
  unsigned char PEND        : 1;
  unsigned char BUSY        : 1;
} __BITS_DMA1_C3SPR;
#endif
//__IO_REG8_BIT(DMA1_C3SPR,  0x5094, __READ_WRITE, __BITS_DMA1_C3SPR);
unsigned char DMA1_C3SPR; //0x5094 __READ_WRITE
__BITS_DMA1_C3SPR DMA1_C3SPR_bit;

/* DMA1 number of data to transfer register (channel 3) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NDT0        : 1;
  unsigned char NDT1        : 1;
  unsigned char NDT2        : 1;
  unsigned char NDT3        : 1;
  unsigned char NDT4        : 1;
  unsigned char NDT5        : 1;
  unsigned char NDT6        : 1;
  unsigned char NDT7        : 1;
} __BITS_DMA1_C3NDTR;
#endif
//__IO_REG8_BIT(DMA1_C3NDTR, 0x5095, __READ_WRITE, __BITS_DMA1_C3NDTR);
unsigned char DMA1_C3NDTR; //0x5095 __READ_WRITE
__BITS_DMA1_C3NDTR DMA1_C3NDTR_bit;

/* DMA1 peripheral address high register (channel 3) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA8         : 1;
  unsigned char M1A8        : 1;
  unsigned char PA9         : 1;
  unsigned char M1A9        : 1;
  unsigned char M1A10       : 1;
  unsigned char PA10        : 1;
  unsigned char M1A11       : 1;
  unsigned char PA11        : 1;
  unsigned char M1A12       : 1;
  unsigned char PA12        : 1;
  unsigned char PA13        : 1;
  unsigned char M1A13       : 1;
  unsigned char PA14        : 1;
  unsigned char M1A14       : 1;
  unsigned char PA15        : 1;
  unsigned char M1A15       : 1;
} __BITS_DMA1_C3PARH_C3M1ARH;
#endif
//__IO_REG8_BIT(DMA1_C3PARH_C3M1ARH, 0x5096, __READ_WRITE, __BITS_DMA1_C3PARH_C3M1ARH);
unsigned char DMA1_C3PARH_C3M1ARH; //0x5096 __READ_WRITE
__BITS_DMA1_C3PARH_C3M1ARH DMA1_C3PARH_C3M1ARH_bit;

/* DMA1 peripheral address low register (channel 3) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA0         : 1;
  unsigned char PA1         : 1;
  unsigned char PA2         : 1;
  unsigned char PA3         : 1;
  unsigned char PA4         : 1;
  unsigned char PA5         : 1;
  unsigned char PA6         : 1;
  unsigned char PA7         : 1;
} __BITS_DMA1_C3PARL_C3M1ARL;
#endif
//__IO_REG8_BIT(DMA1_C3PARL_C3M1ARL, 0x5097, __READ_WRITE, __BITS_DMA1_C3PARL_C3M1ARL);
unsigned char DMA1_C3PARL_C3M1ARL; //0x5097 __READ_WRITE
__BITS_DMA1_C3PARL_C3M1ARL DMA1_C3PARL_C3M1ARL_bit;

/* DMA channel 3 memory 0 extended address register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A16       : 1;
} __BITS_DMA_C3M0EAR;
#endif
//__IO_REG8_BIT(DMA_C3M0EAR, 0x5098, __READ_WRITE, __BITS_DMA_C3M0EAR);
unsigned char DMA_C3M0EAR; //0x5098 __READ_WRITE
__BITS_DMA_C3M0EAR DMA_C3M0EAR_bit;

/* DMA1 memory 0 address high register (channel 3) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A8        : 1;
  unsigned char M0A9        : 1;
  unsigned char M0A10       : 1;
  unsigned char M0A11       : 1;
  unsigned char M0A12       : 1;
  unsigned char M0A13       : 1;
  unsigned char M0A14       : 1;
  unsigned char M0A15       : 1;
} __BITS_DMA1_C3M0ARH;
#endif
//__IO_REG8_BIT(DMA1_C3M0ARH, 0x5099, __READ_WRITE, __BITS_DMA1_C3M0ARH);
unsigned char DMA1_C3M0ARH; //0x5099 __READ_WRITE
__BITS_DMA1_C3M0ARH DMA1_C3M0ARH_bit;

/* DMA1 memory 0 address low register (channel 3) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A0        : 1;
  unsigned char M0A1        : 1;
  unsigned char M0A2        : 1;
  unsigned char M0A3        : 1;
  unsigned char M0A4        : 1;
  unsigned char M0A5        : 1;
  unsigned char M0A6        : 1;
  unsigned char M0A7        : 1;
} __BITS_DMA1_C3M0ARL;
#endif
//__IO_REG8_BIT(DMA1_C3M0ARL, 0x509A, __READ_WRITE, __BITS_DMA1_C3M0ARL);
unsigned char DMA1_C3M0ARL; //0x509A __READ_WRITE
__BITS_DMA1_C3M0ARL DMA1_C3M0ARL_bit;


/*-------------------------------------------------------------------------
 *      DMA1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define DMA1_GCSR_GEN            DMA1_GCSR_bit.GEN
#define DMA1_GCSR_GB             DMA1_GCSR_bit.GB
#define DMA1_GCSR_TO             DMA1_GCSR_bit.TO

#define DMA1_GIR1_IFC0           DMA1_GIR1_bit.IFC0
#define DMA1_GIR1_IFC1           DMA1_GIR1_bit.IFC1
#define DMA1_GIR1_IFC2           DMA1_GIR1_bit.IFC2
#define DMA1_GIR1_IFC3           DMA1_GIR1_bit.IFC3

#define DMA1_C0CR_EN             DMA1_C0CR_bit.EN
#define DMA1_C0CR_TCIE           DMA1_C0CR_bit.TCIE
#define DMA1_C0CR_HTIE           DMA1_C0CR_bit.HTIE
#define DMA1_C0CR_DIR            DMA1_C0CR_bit.DIR
#define DMA1_C0CR_CIRC           DMA1_C0CR_bit.CIRC
#define DMA1_C0CR_MINCDEC        DMA1_C0CR_bit.MINCDEC

#define DMA1_C0SPR_TCIF          DMA1_C0SPR_bit.TCIF
#define DMA1_C0SPR_HTIF          DMA1_C0SPR_bit.HTIF
#define DMA1_C0SPR_TSIZE         DMA1_C0SPR_bit.TSIZE
#define DMA1_C0SPR_PL0           DMA1_C0SPR_bit.PL0
#define DMA1_C0SPR_PL1           DMA1_C0SPR_bit.PL1
#define DMA1_C0SPR_PEND          DMA1_C0SPR_bit.PEND
#define DMA1_C0SPR_BUSY          DMA1_C0SPR_bit.BUSY

#define DMA1_C0NDTR_NDT0         DMA1_C0NDTR_bit.NDT0
#define DMA1_C0NDTR_NDT1         DMA1_C0NDTR_bit.NDT1
#define DMA1_C0NDTR_NDT2         DMA1_C0NDTR_bit.NDT2
#define DMA1_C0NDTR_NDT3         DMA1_C0NDTR_bit.NDT3
#define DMA1_C0NDTR_NDT4         DMA1_C0NDTR_bit.NDT4
#define DMA1_C0NDTR_NDT5         DMA1_C0NDTR_bit.NDT5
#define DMA1_C0NDTR_NDT6         DMA1_C0NDTR_bit.NDT6
#define DMA1_C0NDTR_NDT7         DMA1_C0NDTR_bit.NDT7

#define DMA1_C0PARH_PA8          DMA1_C0PARH_bit.PA8
#define DMA1_C0PARH_PA9          DMA1_C0PARH_bit.PA9
#define DMA1_C0PARH_PA10         DMA1_C0PARH_bit.PA10
#define DMA1_C0PARH_PA11         DMA1_C0PARH_bit.PA11
#define DMA1_C0PARH_PA12         DMA1_C0PARH_bit.PA12
#define DMA1_C0PARH_PA13         DMA1_C0PARH_bit.PA13
#define DMA1_C0PARH_PA14         DMA1_C0PARH_bit.PA14
#define DMA1_C0PARH_PA15         DMA1_C0PARH_bit.PA15

#define DMA1_C0PARL_PA0          DMA1_C0PARL_bit.PA0
#define DMA1_C0PARL_PA1          DMA1_C0PARL_bit.PA1
#define DMA1_C0PARL_PA2          DMA1_C0PARL_bit.PA2
#define DMA1_C0PARL_PA3          DMA1_C0PARL_bit.PA3
#define DMA1_C0PARL_PA4          DMA1_C0PARL_bit.PA4
#define DMA1_C0PARL_PA5          DMA1_C0PARL_bit.PA5
#define DMA1_C0PARL_PA6          DMA1_C0PARL_bit.PA6
#define DMA1_C0PARL_PA7          DMA1_C0PARL_bit.PA7

#define DMA1_C0M0ARH_M0A8        DMA1_C0M0ARH_bit.M0A8
#define DMA1_C0M0ARH_M0A9        DMA1_C0M0ARH_bit.M0A9
#define DMA1_C0M0ARH_M0A10       DMA1_C0M0ARH_bit.M0A10
#define DMA1_C0M0ARH_M0A11       DMA1_C0M0ARH_bit.M0A11
#define DMA1_C0M0ARH_M0A12       DMA1_C0M0ARH_bit.M0A12
#define DMA1_C0M0ARH_M0A13       DMA1_C0M0ARH_bit.M0A13
#define DMA1_C0M0ARH_M0A14       DMA1_C0M0ARH_bit.M0A14
#define DMA1_C0M0ARH_M0A15       DMA1_C0M0ARH_bit.M0A15

#define DMA1_C0M0ARL_M0A0        DMA1_C0M0ARL_bit.M0A0
#define DMA1_C0M0ARL_M0A1        DMA1_C0M0ARL_bit.M0A1
#define DMA1_C0M0ARL_M0A2        DMA1_C0M0ARL_bit.M0A2
#define DMA1_C0M0ARL_M0A3        DMA1_C0M0ARL_bit.M0A3
#define DMA1_C0M0ARL_M0A4        DMA1_C0M0ARL_bit.M0A4
#define DMA1_C0M0ARL_M0A5        DMA1_C0M0ARL_bit.M0A5
#define DMA1_C0M0ARL_M0A6        DMA1_C0M0ARL_bit.M0A6
#define DMA1_C0M0ARL_M0A7        DMA1_C0M0ARL_bit.M0A7

#define DMA1_C1CR_EN             DMA1_C1CR_bit.EN
#define DMA1_C1CR_TCIE           DMA1_C1CR_bit.TCIE
#define DMA1_C1CR_HTIE           DMA1_C1CR_bit.HTIE
#define DMA1_C1CR_DIR            DMA1_C1CR_bit.DIR
#define DMA1_C1CR_CIRC           DMA1_C1CR_bit.CIRC
#define DMA1_C1CR_MINCDEC        DMA1_C1CR_bit.MINCDEC

#define DMA1_C1SPR_TCIF          DMA1_C1SPR_bit.TCIF
#define DMA1_C1SPR_HTIF          DMA1_C1SPR_bit.HTIF
#define DMA1_C1SPR_TSIZE         DMA1_C1SPR_bit.TSIZE
#define DMA1_C1SPR_PL0           DMA1_C1SPR_bit.PL0
#define DMA1_C1SPR_PL1           DMA1_C1SPR_bit.PL1
#define DMA1_C1SPR_PEND          DMA1_C1SPR_bit.PEND
#define DMA1_C1SPR_BUSY          DMA1_C1SPR_bit.BUSY

#define DMA1_C1NDTR_NDT0         DMA1_C1NDTR_bit.NDT0
#define DMA1_C1NDTR_NDT1         DMA1_C1NDTR_bit.NDT1
#define DMA1_C1NDTR_NDT2         DMA1_C1NDTR_bit.NDT2
#define DMA1_C1NDTR_NDT3         DMA1_C1NDTR_bit.NDT3
#define DMA1_C1NDTR_NDT4         DMA1_C1NDTR_bit.NDT4
#define DMA1_C1NDTR_NDT5         DMA1_C1NDTR_bit.NDT5
#define DMA1_C1NDTR_NDT6         DMA1_C1NDTR_bit.NDT6
#define DMA1_C1NDTR_NDT7         DMA1_C1NDTR_bit.NDT7

#define DMA1_C1PARH_PA8          DMA1_C1PARH_bit.PA8
#define DMA1_C1PARH_PA9          DMA1_C1PARH_bit.PA9
#define DMA1_C1PARH_PA10         DMA1_C1PARH_bit.PA10
#define DMA1_C1PARH_PA11         DMA1_C1PARH_bit.PA11
#define DMA1_C1PARH_PA12         DMA1_C1PARH_bit.PA12
#define DMA1_C1PARH_PA13         DMA1_C1PARH_bit.PA13
#define DMA1_C1PARH_PA14         DMA1_C1PARH_bit.PA14
#define DMA1_C1PARH_PA15         DMA1_C1PARH_bit.PA15

#define DMA1_C1PARL_PA0          DMA1_C1PARL_bit.PA0
#define DMA1_C1PARL_PA1          DMA1_C1PARL_bit.PA1
#define DMA1_C1PARL_PA2          DMA1_C1PARL_bit.PA2
#define DMA1_C1PARL_PA3          DMA1_C1PARL_bit.PA3
#define DMA1_C1PARL_PA4          DMA1_C1PARL_bit.PA4
#define DMA1_C1PARL_PA5          DMA1_C1PARL_bit.PA5
#define DMA1_C1PARL_PA6          DMA1_C1PARL_bit.PA6
#define DMA1_C1PARL_PA7          DMA1_C1PARL_bit.PA7

#define DMA1_C1M0ARH_M0A8        DMA1_C1M0ARH_bit.M0A8
#define DMA1_C1M0ARH_M0A9        DMA1_C1M0ARH_bit.M0A9
#define DMA1_C1M0ARH_M0A10       DMA1_C1M0ARH_bit.M0A10
#define DMA1_C1M0ARH_M0A11       DMA1_C1M0ARH_bit.M0A11
#define DMA1_C1M0ARH_M0A12       DMA1_C1M0ARH_bit.M0A12
#define DMA1_C1M0ARH_M0A13       DMA1_C1M0ARH_bit.M0A13
#define DMA1_C1M0ARH_M0A14       DMA1_C1M0ARH_bit.M0A14
#define DMA1_C1M0ARH_M0A15       DMA1_C1M0ARH_bit.M0A15

#define DMA1_C1M0ARL_M0A0        DMA1_C1M0ARL_bit.M0A0
#define DMA1_C1M0ARL_M0A1        DMA1_C1M0ARL_bit.M0A1
#define DMA1_C1M0ARL_M0A2        DMA1_C1M0ARL_bit.M0A2
#define DMA1_C1M0ARL_M0A3        DMA1_C1M0ARL_bit.M0A3
#define DMA1_C1M0ARL_M0A4        DMA1_C1M0ARL_bit.M0A4
#define DMA1_C1M0ARL_M0A5        DMA1_C1M0ARL_bit.M0A5
#define DMA1_C1M0ARL_M0A6        DMA1_C1M0ARL_bit.M0A6
#define DMA1_C1M0ARL_M0A7        DMA1_C1M0ARL_bit.M0A7

#define DMA1_C2CR_EN             DMA1_C2CR_bit.EN
#define DMA1_C2CR_TCIE           DMA1_C2CR_bit.TCIE
#define DMA1_C2CR_HTIE           DMA1_C2CR_bit.HTIE
#define DMA1_C2CR_DIR            DMA1_C2CR_bit.DIR
#define DMA1_C2CR_CIRC           DMA1_C2CR_bit.CIRC
#define DMA1_C2CR_MINCDEC        DMA1_C2CR_bit.MINCDEC

#define DMA1_C2SPR_TCIF          DMA1_C2SPR_bit.TCIF
#define DMA1_C2SPR_HTIF          DMA1_C2SPR_bit.HTIF
#define DMA1_C2SPR_TSIZE         DMA1_C2SPR_bit.TSIZE
#define DMA1_C2SPR_PL0           DMA1_C2SPR_bit.PL0
#define DMA1_C2SPR_PL1           DMA1_C2SPR_bit.PL1
#define DMA1_C2SPR_PEND          DMA1_C2SPR_bit.PEND
#define DMA1_C2SPR_BUSY          DMA1_C2SPR_bit.BUSY

#define DMA1_C2NDTR_NDT0         DMA1_C2NDTR_bit.NDT0
#define DMA1_C2NDTR_NDT1         DMA1_C2NDTR_bit.NDT1
#define DMA1_C2NDTR_NDT2         DMA1_C2NDTR_bit.NDT2
#define DMA1_C2NDTR_NDT3         DMA1_C2NDTR_bit.NDT3
#define DMA1_C2NDTR_NDT4         DMA1_C2NDTR_bit.NDT4
#define DMA1_C2NDTR_NDT5         DMA1_C2NDTR_bit.NDT5
#define DMA1_C2NDTR_NDT6         DMA1_C2NDTR_bit.NDT6
#define DMA1_C2NDTR_NDT7         DMA1_C2NDTR_bit.NDT7

#define DMA1_C2PARH_PA8          DMA1_C2PARH_bit.PA8
#define DMA1_C2PARH_PA9          DMA1_C2PARH_bit.PA9
#define DMA1_C2PARH_PA10         DMA1_C2PARH_bit.PA10
#define DMA1_C2PARH_PA11         DMA1_C2PARH_bit.PA11
#define DMA1_C2PARH_PA12         DMA1_C2PARH_bit.PA12
#define DMA1_C2PARH_PA13         DMA1_C2PARH_bit.PA13
#define DMA1_C2PARH_PA14         DMA1_C2PARH_bit.PA14
#define DMA1_C2PARH_PA15         DMA1_C2PARH_bit.PA15

#define DMA1_C2PARL_PA0          DMA1_C2PARL_bit.PA0
#define DMA1_C2PARL_PA1          DMA1_C2PARL_bit.PA1
#define DMA1_C2PARL_PA2          DMA1_C2PARL_bit.PA2
#define DMA1_C2PARL_PA3          DMA1_C2PARL_bit.PA3
#define DMA1_C2PARL_PA4          DMA1_C2PARL_bit.PA4
#define DMA1_C2PARL_PA5          DMA1_C2PARL_bit.PA5
#define DMA1_C2PARL_PA6          DMA1_C2PARL_bit.PA6
#define DMA1_C2PARL_PA7          DMA1_C2PARL_bit.PA7

#define DMA1_C2M0ARH_M0A8        DMA1_C2M0ARH_bit.M0A8
#define DMA1_C2M0ARH_M0A9        DMA1_C2M0ARH_bit.M0A9
#define DMA1_C2M0ARH_M0A10       DMA1_C2M0ARH_bit.M0A10
#define DMA1_C2M0ARH_M0A11       DMA1_C2M0ARH_bit.M0A11
#define DMA1_C2M0ARH_M0A12       DMA1_C2M0ARH_bit.M0A12
#define DMA1_C2M0ARH_M0A13       DMA1_C2M0ARH_bit.M0A13
#define DMA1_C2M0ARH_M0A14       DMA1_C2M0ARH_bit.M0A14
#define DMA1_C2M0ARH_M0A15       DMA1_C2M0ARH_bit.M0A15

#define DMA1_C2M0ARL_M0A0        DMA1_C2M0ARL_bit.M0A0
#define DMA1_C2M0ARL_M0A1        DMA1_C2M0ARL_bit.M0A1
#define DMA1_C2M0ARL_M0A2        DMA1_C2M0ARL_bit.M0A2
#define DMA1_C2M0ARL_M0A3        DMA1_C2M0ARL_bit.M0A3
#define DMA1_C2M0ARL_M0A4        DMA1_C2M0ARL_bit.M0A4
#define DMA1_C2M0ARL_M0A5        DMA1_C2M0ARL_bit.M0A5
#define DMA1_C2M0ARL_M0A6        DMA1_C2M0ARL_bit.M0A6
#define DMA1_C2M0ARL_M0A7        DMA1_C2M0ARL_bit.M0A7

#define DMA1_C3CR_EN             DMA1_C3CR_bit.EN
#define DMA1_C3CR_TCIE           DMA1_C3CR_bit.TCIE
#define DMA1_C3CR_HTIE           DMA1_C3CR_bit.HTIE
#define DMA1_C3CR_DIR            DMA1_C3CR_bit.DIR
#define DMA1_C3CR_CIRC           DMA1_C3CR_bit.CIRC
#define DMA1_C3CR_MINCDEC        DMA1_C3CR_bit.MINCDEC
#define DMA1_C3CR_MEM            DMA1_C3CR_bit.MEM

#define DMA1_C3SPR_TCIF          DMA1_C3SPR_bit.TCIF
#define DMA1_C3SPR_HTIF          DMA1_C3SPR_bit.HTIF
#define DMA1_C3SPR_TSIZE         DMA1_C3SPR_bit.TSIZE
#define DMA1_C3SPR_PL0           DMA1_C3SPR_bit.PL0
#define DMA1_C3SPR_PL1           DMA1_C3SPR_bit.PL1
#define DMA1_C3SPR_PEND          DMA1_C3SPR_bit.PEND
#define DMA1_C3SPR_BUSY          DMA1_C3SPR_bit.BUSY

#define DMA1_C3NDTR_NDT0         DMA1_C3NDTR_bit.NDT0
#define DMA1_C3NDTR_NDT1         DMA1_C3NDTR_bit.NDT1
#define DMA1_C3NDTR_NDT2         DMA1_C3NDTR_bit.NDT2
#define DMA1_C3NDTR_NDT3         DMA1_C3NDTR_bit.NDT3
#define DMA1_C3NDTR_NDT4         DMA1_C3NDTR_bit.NDT4
#define DMA1_C3NDTR_NDT5         DMA1_C3NDTR_bit.NDT5
#define DMA1_C3NDTR_NDT6         DMA1_C3NDTR_bit.NDT6
#define DMA1_C3NDTR_NDT7         DMA1_C3NDTR_bit.NDT7

#define DMA1_C3PARH_C3M1ARH_PA8  DMA1_C3PARH_C3M1ARH_bit.PA8
#define DMA1_C3PARH_C3M1ARH_M1A8 DMA1_C3PARH_C3M1ARH_bit.M1A8
#define DMA1_C3PARH_C3M1ARH_PA9  DMA1_C3PARH_C3M1ARH_bit.PA9
#define DMA1_C3PARH_C3M1ARH_M1A9 DMA1_C3PARH_C3M1ARH_bit.M1A9
#define DMA1_C3PARH_C3M1ARH_M1A10 DMA1_C3PARH_C3M1ARH_bit.M1A10
#define DMA1_C3PARH_C3M1ARH_PA10 DMA1_C3PARH_C3M1ARH_bit.PA10
#define DMA1_C3PARH_C3M1ARH_M1A11 DMA1_C3PARH_C3M1ARH_bit.M1A11
#define DMA1_C3PARH_C3M1ARH_PA11 DMA1_C3PARH_C3M1ARH_bit.PA11
#define DMA1_C3PARH_C3M1ARH_M1A12 DMA1_C3PARH_C3M1ARH_bit.M1A12
#define DMA1_C3PARH_C3M1ARH_PA12 DMA1_C3PARH_C3M1ARH_bit.PA12
#define DMA1_C3PARH_C3M1ARH_PA13 DMA1_C3PARH_C3M1ARH_bit.PA13
#define DMA1_C3PARH_C3M1ARH_M1A13 DMA1_C3PARH_C3M1ARH_bit.M1A13
#define DMA1_C3PARH_C3M1ARH_PA14 DMA1_C3PARH_C3M1ARH_bit.PA14
#define DMA1_C3PARH_C3M1ARH_M1A14 DMA1_C3PARH_C3M1ARH_bit.M1A14
#define DMA1_C3PARH_C3M1ARH_PA15 DMA1_C3PARH_C3M1ARH_bit.PA15
#define DMA1_C3PARH_C3M1ARH_M1A15 DMA1_C3PARH_C3M1ARH_bit.M1A15

#define DMA1_C3PARL_C3M1ARL_PA0  DMA1_C3PARL_C3M1ARL_bit.PA0
#define DMA1_C3PARL_C3M1ARL_PA1  DMA1_C3PARL_C3M1ARL_bit.PA1
#define DMA1_C3PARL_C3M1ARL_PA2  DMA1_C3PARL_C3M1ARL_bit.PA2
#define DMA1_C3PARL_C3M1ARL_PA3  DMA1_C3PARL_C3M1ARL_bit.PA3
#define DMA1_C3PARL_C3M1ARL_PA4  DMA1_C3PARL_C3M1ARL_bit.PA4
#define DMA1_C3PARL_C3M1ARL_PA5  DMA1_C3PARL_C3M1ARL_bit.PA5
#define DMA1_C3PARL_C3M1ARL_PA6  DMA1_C3PARL_C3M1ARL_bit.PA6
#define DMA1_C3PARL_C3M1ARL_PA7  DMA1_C3PARL_C3M1ARL_bit.PA7

#define DMA_C3M0EAR_M0A16        DMA_C3M0EAR_bit.M0A16

#define DMA1_C3M0ARH_M0A8        DMA1_C3M0ARH_bit.M0A8
#define DMA1_C3M0ARH_M0A9        DMA1_C3M0ARH_bit.M0A9
#define DMA1_C3M0ARH_M0A10       DMA1_C3M0ARH_bit.M0A10
#define DMA1_C3M0ARH_M0A11       DMA1_C3M0ARH_bit.M0A11
#define DMA1_C3M0ARH_M0A12       DMA1_C3M0ARH_bit.M0A12
#define DMA1_C3M0ARH_M0A13       DMA1_C3M0ARH_bit.M0A13
#define DMA1_C3M0ARH_M0A14       DMA1_C3M0ARH_bit.M0A14
#define DMA1_C3M0ARH_M0A15       DMA1_C3M0ARH_bit.M0A15

#define DMA1_C3M0ARL_M0A0        DMA1_C3M0ARL_bit.M0A0
#define DMA1_C3M0ARL_M0A1        DMA1_C3M0ARL_bit.M0A1
#define DMA1_C3M0ARL_M0A2        DMA1_C3M0ARL_bit.M0A2
#define DMA1_C3M0ARL_M0A3        DMA1_C3M0ARL_bit.M0A3
#define DMA1_C3M0ARL_M0A4        DMA1_C3M0ARL_bit.M0A4
#define DMA1_C3M0ARL_M0A5        DMA1_C3M0ARL_bit.M0A5
#define DMA1_C3M0ARL_M0A6        DMA1_C3M0ARL_bit.M0A6
#define DMA1_C3M0ARL_M0A7        DMA1_C3M0ARL_bit.M0A7

#endif

/*-------------------------------------------------------------------------
 *      DMA1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_DMA1_GCSR_GEN       0x01
#define MASK_DMA1_GCSR_GB        0x02
#define MASK_DMA1_GCSR_TO        0xFC

#define MASK_DMA1_GIR1_IFC0      0x01
#define MASK_DMA1_GIR1_IFC1      0x02
#define MASK_DMA1_GIR1_IFC2      0x04
#define MASK_DMA1_GIR1_IFC3      0x08

#define MASK_DMA1_C0CR_EN        0x01
#define MASK_DMA1_C0CR_TCIE      0x02
#define MASK_DMA1_C0CR_HTIE      0x04
#define MASK_DMA1_C0CR_DIR       0x08
#define MASK_DMA1_C0CR_CIRC      0x10
#define MASK_DMA1_C0CR_MINCDEC   0x20

#define MASK_DMA1_C0SPR_TCIF     0x02
#define MASK_DMA1_C0SPR_HTIF     0x04
#define MASK_DMA1_C0SPR_TSIZE    0x08
#define MASK_DMA1_C0SPR_PL0      0x10
#define MASK_DMA1_C0SPR_PL1      0x20
#define MASK_DMA1_C0SPR_PEND     0x40
#define MASK_DMA1_C0SPR_BUSY     0x80

#define MASK_DMA1_C0NDTR_NDT0    0x01
#define MASK_DMA1_C0NDTR_NDT1    0x02
#define MASK_DMA1_C0NDTR_NDT2    0x04
#define MASK_DMA1_C0NDTR_NDT3    0x08
#define MASK_DMA1_C0NDTR_NDT4    0x10
#define MASK_DMA1_C0NDTR_NDT5    0x20
#define MASK_DMA1_C0NDTR_NDT6    0x40
#define MASK_DMA1_C0NDTR_NDT7    0x80

#define MASK_DMA1_C0PARH_PA8     0x01
#define MASK_DMA1_C0PARH_PA9     0x02
#define MASK_DMA1_C0PARH_PA10    0x04
#define MASK_DMA1_C0PARH_PA11    0x08
#define MASK_DMA1_C0PARH_PA12    0x10
#define MASK_DMA1_C0PARH_PA13    0x20
#define MASK_DMA1_C0PARH_PA14    0x40
#define MASK_DMA1_C0PARH_PA15    0x80

#define MASK_DMA1_C0PARL_PA0     0x01
#define MASK_DMA1_C0PARL_PA1     0x02
#define MASK_DMA1_C0PARL_PA2     0x04
#define MASK_DMA1_C0PARL_PA3     0x08
#define MASK_DMA1_C0PARL_PA4     0x10
#define MASK_DMA1_C0PARL_PA5     0x20
#define MASK_DMA1_C0PARL_PA6     0x40
#define MASK_DMA1_C0PARL_PA7     0x80

#define MASK_DMA1_C0M0ARH_M0A8   0x01
#define MASK_DMA1_C0M0ARH_M0A9   0x02
#define MASK_DMA1_C0M0ARH_M0A10  0x04
#define MASK_DMA1_C0M0ARH_M0A11  0x08
#define MASK_DMA1_C0M0ARH_M0A12  0x10
#define MASK_DMA1_C0M0ARH_M0A13  0x20
#define MASK_DMA1_C0M0ARH_M0A14  0x40
#define MASK_DMA1_C0M0ARH_M0A15  0x80

#define MASK_DMA1_C0M0ARL_M0A0   0x01
#define MASK_DMA1_C0M0ARL_M0A1   0x02
#define MASK_DMA1_C0M0ARL_M0A2   0x04
#define MASK_DMA1_C0M0ARL_M0A3   0x08
#define MASK_DMA1_C0M0ARL_M0A4   0x10
#define MASK_DMA1_C0M0ARL_M0A5   0x20
#define MASK_DMA1_C0M0ARL_M0A6   0x40
#define MASK_DMA1_C0M0ARL_M0A7   0x80

#define MASK_DMA1_C1CR_EN        0x01
#define MASK_DMA1_C1CR_TCIE      0x02
#define MASK_DMA1_C1CR_HTIE      0x04
#define MASK_DMA1_C1CR_DIR       0x08
#define MASK_DMA1_C1CR_CIRC      0x10
#define MASK_DMA1_C1CR_MINCDEC   0x20

#define MASK_DMA1_C1SPR_TCIF     0x02
#define MASK_DMA1_C1SPR_HTIF     0x04
#define MASK_DMA1_C1SPR_TSIZE    0x08
#define MASK_DMA1_C1SPR_PL0      0x10
#define MASK_DMA1_C1SPR_PL1      0x20
#define MASK_DMA1_C1SPR_PEND     0x40
#define MASK_DMA1_C1SPR_BUSY     0x80

#define MASK_DMA1_C1NDTR_NDT0    0x01
#define MASK_DMA1_C1NDTR_NDT1    0x02
#define MASK_DMA1_C1NDTR_NDT2    0x04
#define MASK_DMA1_C1NDTR_NDT3    0x08
#define MASK_DMA1_C1NDTR_NDT4    0x10
#define MASK_DMA1_C1NDTR_NDT5    0x20
#define MASK_DMA1_C1NDTR_NDT6    0x40
#define MASK_DMA1_C1NDTR_NDT7    0x80

#define MASK_DMA1_C1PARH_PA8     0x01
#define MASK_DMA1_C1PARH_PA9     0x02
#define MASK_DMA1_C1PARH_PA10    0x04
#define MASK_DMA1_C1PARH_PA11    0x08
#define MASK_DMA1_C1PARH_PA12    0x10
#define MASK_DMA1_C1PARH_PA13    0x20
#define MASK_DMA1_C1PARH_PA14    0x40
#define MASK_DMA1_C1PARH_PA15    0x80

#define MASK_DMA1_C1PARL_PA0     0x01
#define MASK_DMA1_C1PARL_PA1     0x02
#define MASK_DMA1_C1PARL_PA2     0x04
#define MASK_DMA1_C1PARL_PA3     0x08
#define MASK_DMA1_C1PARL_PA4     0x10
#define MASK_DMA1_C1PARL_PA5     0x20
#define MASK_DMA1_C1PARL_PA6     0x40
#define MASK_DMA1_C1PARL_PA7     0x80

#define MASK_DMA1_C1M0ARH_M0A8   0x01
#define MASK_DMA1_C1M0ARH_M0A9   0x02
#define MASK_DMA1_C1M0ARH_M0A10  0x04
#define MASK_DMA1_C1M0ARH_M0A11  0x08
#define MASK_DMA1_C1M0ARH_M0A12  0x10
#define MASK_DMA1_C1M0ARH_M0A13  0x20
#define MASK_DMA1_C1M0ARH_M0A14  0x40
#define MASK_DMA1_C1M0ARH_M0A15  0x80

#define MASK_DMA1_C1M0ARL_M0A0   0x01
#define MASK_DMA1_C1M0ARL_M0A1   0x02
#define MASK_DMA1_C1M0ARL_M0A2   0x04
#define MASK_DMA1_C1M0ARL_M0A3   0x08
#define MASK_DMA1_C1M0ARL_M0A4   0x10
#define MASK_DMA1_C1M0ARL_M0A5   0x20
#define MASK_DMA1_C1M0ARL_M0A6   0x40
#define MASK_DMA1_C1M0ARL_M0A7   0x80

#define MASK_DMA1_C2CR_EN        0x01
#define MASK_DMA1_C2CR_TCIE      0x02
#define MASK_DMA1_C2CR_HTIE      0x04
#define MASK_DMA1_C2CR_DIR       0x08
#define MASK_DMA1_C2CR_CIRC      0x10
#define MASK_DMA1_C2CR_MINCDEC   0x20

#define MASK_DMA1_C2SPR_TCIF     0x02
#define MASK_DMA1_C2SPR_HTIF     0x04
#define MASK_DMA1_C2SPR_TSIZE    0x08
#define MASK_DMA1_C2SPR_PL0      0x10
#define MASK_DMA1_C2SPR_PL1      0x20
#define MASK_DMA1_C2SPR_PEND     0x40
#define MASK_DMA1_C2SPR_BUSY     0x80

#define MASK_DMA1_C2NDTR_NDT0    0x01
#define MASK_DMA1_C2NDTR_NDT1    0x02
#define MASK_DMA1_C2NDTR_NDT2    0x04
#define MASK_DMA1_C2NDTR_NDT3    0x08
#define MASK_DMA1_C2NDTR_NDT4    0x10
#define MASK_DMA1_C2NDTR_NDT5    0x20
#define MASK_DMA1_C2NDTR_NDT6    0x40
#define MASK_DMA1_C2NDTR_NDT7    0x80

#define MASK_DMA1_C2PARH_PA8     0x01
#define MASK_DMA1_C2PARH_PA9     0x02
#define MASK_DMA1_C2PARH_PA10    0x04
#define MASK_DMA1_C2PARH_PA11    0x08
#define MASK_DMA1_C2PARH_PA12    0x10
#define MASK_DMA1_C2PARH_PA13    0x20
#define MASK_DMA1_C2PARH_PA14    0x40
#define MASK_DMA1_C2PARH_PA15    0x80

#define MASK_DMA1_C2PARL_PA0     0x01
#define MASK_DMA1_C2PARL_PA1     0x02
#define MASK_DMA1_C2PARL_PA2     0x04
#define MASK_DMA1_C2PARL_PA3     0x08
#define MASK_DMA1_C2PARL_PA4     0x10
#define MASK_DMA1_C2PARL_PA5     0x20
#define MASK_DMA1_C2PARL_PA6     0x40
#define MASK_DMA1_C2PARL_PA7     0x80

#define MASK_DMA1_C2M0ARH_M0A8   0x01
#define MASK_DMA1_C2M0ARH_M0A9   0x02
#define MASK_DMA1_C2M0ARH_M0A10  0x04
#define MASK_DMA1_C2M0ARH_M0A11  0x08
#define MASK_DMA1_C2M0ARH_M0A12  0x10
#define MASK_DMA1_C2M0ARH_M0A13  0x20
#define MASK_DMA1_C2M0ARH_M0A14  0x40
#define MASK_DMA1_C2M0ARH_M0A15  0x80

#define MASK_DMA1_C2M0ARL_M0A0   0x01
#define MASK_DMA1_C2M0ARL_M0A1   0x02
#define MASK_DMA1_C2M0ARL_M0A2   0x04
#define MASK_DMA1_C2M0ARL_M0A3   0x08
#define MASK_DMA1_C2M0ARL_M0A4   0x10
#define MASK_DMA1_C2M0ARL_M0A5   0x20
#define MASK_DMA1_C2M0ARL_M0A6   0x40
#define MASK_DMA1_C2M0ARL_M0A7   0x80

#define MASK_DMA1_C3CR_EN        0x01
#define MASK_DMA1_C3CR_TCIE      0x02
#define MASK_DMA1_C3CR_HTIE      0x04
#define MASK_DMA1_C3CR_DIR       0x08
#define MASK_DMA1_C3CR_CIRC      0x10
#define MASK_DMA1_C3CR_MINCDEC   0x20
#define MASK_DMA1_C3CR_MEM       0x40

#define MASK_DMA1_C3SPR_TCIF     0x02
#define MASK_DMA1_C3SPR_HTIF     0x04
#define MASK_DMA1_C3SPR_TSIZE    0x08
#define MASK_DMA1_C3SPR_PL0      0x10
#define MASK_DMA1_C3SPR_PL1      0x20
#define MASK_DMA1_C3SPR_PEND     0x40
#define MASK_DMA1_C3SPR_BUSY     0x80

#define MASK_DMA1_C3NDTR_NDT0    0x01
#define MASK_DMA1_C3NDTR_NDT1    0x02
#define MASK_DMA1_C3NDTR_NDT2    0x04
#define MASK_DMA1_C3NDTR_NDT3    0x08
#define MASK_DMA1_C3NDTR_NDT4    0x10
#define MASK_DMA1_C3NDTR_NDT5    0x20
#define MASK_DMA1_C3NDTR_NDT6    0x40
#define MASK_DMA1_C3NDTR_NDT7    0x80

#define MASK_DMA1_C3PARH_C3M1ARH_PA8 0x01
#define MASK_DMA1_C3PARH_C3M1ARH_M1A8 0x01
#define MASK_DMA1_C3PARH_C3M1ARH_PA9 0x02
#define MASK_DMA1_C3PARH_C3M1ARH_M1A9 0x02
#define MASK_DMA1_C3PARH_C3M1ARH_M1A10 0x04
#define MASK_DMA1_C3PARH_C3M1ARH_PA10 0x04
#define MASK_DMA1_C3PARH_C3M1ARH_M1A11 0x08
#define MASK_DMA1_C3PARH_C3M1ARH_PA11 0x08
#define MASK_DMA1_C3PARH_C3M1ARH_M1A12 0x10
#define MASK_DMA1_C3PARH_C3M1ARH_PA12 0x10
#define MASK_DMA1_C3PARH_C3M1ARH_PA13 0x20
#define MASK_DMA1_C3PARH_C3M1ARH_M1A13 0x20
#define MASK_DMA1_C3PARH_C3M1ARH_PA14 0x40
#define MASK_DMA1_C3PARH_C3M1ARH_M1A14 0x40
#define MASK_DMA1_C3PARH_C3M1ARH_PA15 0x80
#define MASK_DMA1_C3PARH_C3M1ARH_M1A15 0x80

#define MASK_DMA1_C3PARL_C3M1ARL_PA0 0x01
#define MASK_DMA1_C3PARL_C3M1ARL_PA1 0x02
#define MASK_DMA1_C3PARL_C3M1ARL_PA2 0x04
#define MASK_DMA1_C3PARL_C3M1ARL_PA3 0x08
#define MASK_DMA1_C3PARL_C3M1ARL_PA4 0x10
#define MASK_DMA1_C3PARL_C3M1ARL_PA5 0x20
#define MASK_DMA1_C3PARL_C3M1ARL_PA6 0x40
#define MASK_DMA1_C3PARL_C3M1ARL_PA7 0x80

#define MASK_DMA_C3M0EAR_M0A16   0x01

#define MASK_DMA1_C3M0ARH_M0A8   0x01
#define MASK_DMA1_C3M0ARH_M0A9   0x02
#define MASK_DMA1_C3M0ARH_M0A10  0x04
#define MASK_DMA1_C3M0ARH_M0A11  0x08
#define MASK_DMA1_C3M0ARH_M0A12  0x10
#define MASK_DMA1_C3M0ARH_M0A13  0x20
#define MASK_DMA1_C3M0ARH_M0A14  0x40
#define MASK_DMA1_C3M0ARH_M0A15  0x80

#define MASK_DMA1_C3M0ARL_M0A0   0x01
#define MASK_DMA1_C3M0ARL_M0A1   0x02
#define MASK_DMA1_C3M0ARL_M0A2   0x04
#define MASK_DMA1_C3M0ARL_M0A3   0x08
#define MASK_DMA1_C3M0ARL_M0A4   0x10
#define MASK_DMA1_C3M0ARL_M0A5   0x20
#define MASK_DMA1_C3M0ARL_M0A6   0x40
#define MASK_DMA1_C3M0ARL_M0A7   0x80


/*-------------------------------------------------------------------------
 *      SYSCFG register definitions
 *-----------------------------------------------------------------------*/
/* Remapping register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SPI1_REMAP2 : 1;
  unsigned char USART3TR_REMAP: 1;
  unsigned char USART3CK_REMAP: 1;
  unsigned char TIM3_CH1_REMAP: 1;
  unsigned char TIM3_CH2_REMAP: 1;
  unsigned char CCO_REMAP   : 1;
} __BITS_SYSCFG_RMPCR3;
#endif
//__IO_REG8_BIT(SYSCFG_RMPCR3, 0x509D, __READ_WRITE, __BITS_SYSCFG_RMPCR3);
unsigned char SYSCFG_RMPCR3; //0x509D __READ_WRITE
__BITS_SYSCFG_RMPCR3 SYSCFG_RMPCR3_bit;

/* Remapping register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADC1DMA_REMAP: 2;
  unsigned char TIM4DMA_REMAP: 2;
  unsigned char USART1TR_REMAP: 2;
  unsigned char USART1CK_REMAP: 1;
  unsigned char SPI1_REMAP  : 1;
} __BITS_SYSCFG_RMPCR1;
#endif
//__IO_REG8_BIT(SYSCFG_RMPCR1, 0x509E, __READ_WRITE, __BITS_SYSCFG_RMPCR1);
unsigned char SYSCFG_RMPCR1; //0x509E __READ_WRITE
__BITS_SYSCFG_RMPCR1 SYSCFG_RMPCR1_bit;

/* Remapping register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADC1TRIG_REMAP: 1;
  unsigned char TIM2TRIG_REMAP: 1;
  unsigned char TIM3TRIG_REMAP: 1;
} __BITS_SYSCFG_RMPCR2;
#endif
//__IO_REG8_BIT(SYSCFG_RMPCR2, 0x509F, __READ_WRITE, __BITS_SYSCFG_RMPCR2);
unsigned char SYSCFG_RMPCR2; //0x509F __READ_WRITE
__BITS_SYSCFG_RMPCR2 SYSCFG_RMPCR2_bit;


/*-------------------------------------------------------------------------
 *      SYSCFG bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SYSCFG_RMPCR3_SPI1_REMAP2 SYSCFG_RMPCR3_bit.SPI1_REMAP2
#define SYSCFG_RMPCR3_USART3TR_REMAP SYSCFG_RMPCR3_bit.USART3TR_REMAP
#define SYSCFG_RMPCR3_USART3CK_REMAP SYSCFG_RMPCR3_bit.USART3CK_REMAP
#define SYSCFG_RMPCR3_TIM3_CH1_REMAP SYSCFG_RMPCR3_bit.TIM3_CH1_REMAP
#define SYSCFG_RMPCR3_TIM3_CH2_REMAP SYSCFG_RMPCR3_bit.TIM3_CH2_REMAP
#define SYSCFG_RMPCR3_CCO_REMAP  SYSCFG_RMPCR3_bit.CCO_REMAP

#define SYSCFG_RMPCR1_ADC1DMA_REMAP SYSCFG_RMPCR1_bit.ADC1DMA_REMAP
#define SYSCFG_RMPCR1_TIM4DMA_REMAP SYSCFG_RMPCR1_bit.TIM4DMA_REMAP
#define SYSCFG_RMPCR1_USART1TR_REMAP SYSCFG_RMPCR1_bit.USART1TR_REMAP
#define SYSCFG_RMPCR1_USART1CK_REMAP SYSCFG_RMPCR1_bit.USART1CK_REMAP
#define SYSCFG_RMPCR1_SPI1_REMAP SYSCFG_RMPCR1_bit.SPI1_REMAP

#define SYSCFG_RMPCR2_ADC1TRIG_REMAP SYSCFG_RMPCR2_bit.ADC1TRIG_REMAP
#define SYSCFG_RMPCR2_TIM2TRIG_REMAP SYSCFG_RMPCR2_bit.TIM2TRIG_REMAP
#define SYSCFG_RMPCR2_TIM3TRIG_REMAP SYSCFG_RMPCR2_bit.TIM3TRIG_REMAP

#endif

/*-------------------------------------------------------------------------
 *      SYSCFG bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SYSCFG_RMPCR3_SPI1_REMAP2 0x01
#define MASK_SYSCFG_RMPCR3_USART3TR_REMAP 0x02
#define MASK_SYSCFG_RMPCR3_USART3CK_REMAP 0x04
#define MASK_SYSCFG_RMPCR3_TIM3_CH1_REMAP 0x08
#define MASK_SYSCFG_RMPCR3_TIM3_CH2_REMAP 0x10
#define MASK_SYSCFG_RMPCR3_CCO_REMAP 0x10

#define MASK_SYSCFG_RMPCR1_ADC1DMA_REMAP 0x03
#define MASK_SYSCFG_RMPCR1_TIM4DMA_REMAP 0x0C
#define MASK_SYSCFG_RMPCR1_USART1TR_REMAP 0x30
#define MASK_SYSCFG_RMPCR1_USART1CK_REMAP 0x40
#define MASK_SYSCFG_RMPCR1_SPI1_REMAP 0x80

#define MASK_SYSCFG_RMPCR2_ADC1TRIG_REMAP 0x01
#define MASK_SYSCFG_RMPCR2_TIM2TRIG_REMAP 0x02
#define MASK_SYSCFG_RMPCR2_TIM3TRIG_REMAP 0x04


/*-------------------------------------------------------------------------
 *      ITC - EXTI register definitions
 *-----------------------------------------------------------------------*/
/* External interrupt control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char P0IS        : 2;
  unsigned char P1IS        : 2;
  unsigned char P2IS        : 2;
  unsigned char P3IS        : 2;
} __BITS_EXTI_CR1;
#endif
//__IO_REG8_BIT(EXTI_CR1,    0x50A0, __READ_WRITE, __BITS_EXTI_CR1);
unsigned char EXTI_CR1; //0x50A0 __READ_WRITE
__BITS_EXTI_CR1 EXTI_CR1_bit;

/* External interrupt control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char P4IS        : 2;
  unsigned char P5IS        : 2;
  unsigned char P6IS        : 2;
  unsigned char P7IS        : 2;
} __BITS_EXTI_CR2;
#endif
//__IO_REG8_BIT(EXTI_CR2,    0x50A1, __READ_WRITE, __BITS_EXTI_CR2);
unsigned char EXTI_CR2; //0x50A1 __READ_WRITE
__BITS_EXTI_CR2 EXTI_CR2_bit;

/* External interrupt control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PBIS        : 2;
  unsigned char PDIS        : 2;
  unsigned char PEIS        : 2;
  unsigned char PFIS        : 2;
} __BITS_EXTI_CR3;
#endif
//__IO_REG8_BIT(EXTI_CR3,    0x50A2, __READ_WRITE, __BITS_EXTI_CR3);
unsigned char EXTI_CR3; //0x50A2 __READ_WRITE
__BITS_EXTI_CR3 EXTI_CR3_bit;

/* External interrupt status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char P0F         : 1;
  unsigned char P1F         : 1;
  unsigned char P2F         : 1;
  unsigned char P3F         : 1;
  unsigned char P4F         : 1;
  unsigned char P5F         : 1;
  unsigned char P6F         : 1;
  unsigned char P7F         : 1;
} __BITS_EXTI_SR1;
#endif
//__IO_REG8_BIT(EXTI_SR1,    0x50A3, __READ_WRITE, __BITS_EXTI_SR1);
unsigned char EXTI_SR1; //0x50A3 __READ_WRITE
__BITS_EXTI_SR1 EXTI_SR1_bit;

/* External interrupt status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PBF         : 1;
  unsigned char PDF         : 1;
  unsigned char PEF         : 1;
  unsigned char PFF         : 1;
  unsigned char PGF         : 1;
  unsigned char PHF         : 1;
} __BITS_EXTI_SR2;
#endif
//__IO_REG8_BIT(EXTI_SR2,    0x50A4, __READ_WRITE, __BITS_EXTI_SR2);
unsigned char EXTI_SR2; //0x50A4 __READ_WRITE
__BITS_EXTI_SR2 EXTI_SR2_bit;

/* External interrupt port select register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PBLIS       : 1;
  unsigned char PBHIS       : 1;
  unsigned char PDLIS       : 1;
  unsigned char PDHIS       : 1;
  unsigned char PELIS       : 1;
  unsigned char PEHIS       : 1;
  unsigned char PFLIS       : 1;
  unsigned char PFES        : 1;
} __BITS_EXTI_CONF1;
#endif
//__IO_REG8_BIT(EXTI_CONF1,  0x50A5, __READ_WRITE, __BITS_EXTI_CONF1);
unsigned char EXTI_CONF1; //0x50A5 __READ_WRITE
__BITS_EXTI_CONF1 EXTI_CONF1_bit;

/* External interrupt control register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PGIS        : 2;
  unsigned char PHIS        : 2;
} __BITS_EXTI_CR4;
#endif
//__IO_REG8_BIT(EXTI_CR4,    0x50AA, __READ_WRITE, __BITS_EXTI_CR4);
unsigned char EXTI_CR4; //0x50AA __READ_WRITE
__BITS_EXTI_CR4 EXTI_CR4_bit;

/* External interrupt port select register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PFHIS       : 1;
  unsigned char PGLIS       : 1;
  unsigned char PGHIS       : 1;
  unsigned char PHLIS       : 1;
  unsigned char PHHIS       : 1;
  unsigned char PGBS        : 1;
  unsigned char PHDS        : 1;
} __BITS_EXTI_CONF2;
#endif
//__IO_REG8_BIT(EXTI_CONF2,  0x50AB, __READ_WRITE, __BITS_EXTI_CONF2);
unsigned char EXTI_CONF2; //0x50AB __READ_WRITE
__BITS_EXTI_CONF2 EXTI_CONF2_bit;


/*-------------------------------------------------------------------------
 *      ITC - EXTI bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define EXTI_CR1_P0IS            EXTI_CR1_bit.P0IS
#define EXTI_CR1_P1IS            EXTI_CR1_bit.P1IS
#define EXTI_CR1_P2IS            EXTI_CR1_bit.P2IS
#define EXTI_CR1_P3IS            EXTI_CR1_bit.P3IS

#define EXTI_CR2_P4IS            EXTI_CR2_bit.P4IS
#define EXTI_CR2_P5IS            EXTI_CR2_bit.P5IS
#define EXTI_CR2_P6IS            EXTI_CR2_bit.P6IS
#define EXTI_CR2_P7IS            EXTI_CR2_bit.P7IS

#define EXTI_CR3_PBIS            EXTI_CR3_bit.PBIS
#define EXTI_CR3_PDIS            EXTI_CR3_bit.PDIS
#define EXTI_CR3_PEIS            EXTI_CR3_bit.PEIS
#define EXTI_CR3_PFIS            EXTI_CR3_bit.PFIS

#define EXTI_SR1_P0F             EXTI_SR1_bit.P0F
#define EXTI_SR1_P1F             EXTI_SR1_bit.P1F
#define EXTI_SR1_P2F             EXTI_SR1_bit.P2F
#define EXTI_SR1_P3F             EXTI_SR1_bit.P3F
#define EXTI_SR1_P4F             EXTI_SR1_bit.P4F
#define EXTI_SR1_P5F             EXTI_SR1_bit.P5F
#define EXTI_SR1_P6F             EXTI_SR1_bit.P6F
#define EXTI_SR1_P7F             EXTI_SR1_bit.P7F

#define EXTI_SR2_PBF             EXTI_SR2_bit.PBF
#define EXTI_SR2_PDF             EXTI_SR2_bit.PDF
#define EXTI_SR2_PEF             EXTI_SR2_bit.PEF
#define EXTI_SR2_PFF             EXTI_SR2_bit.PFF
#define EXTI_SR2_PGF             EXTI_SR2_bit.PGF
#define EXTI_SR2_PHF             EXTI_SR2_bit.PHF

#define EXTI_CONF1_PBLIS         EXTI_CONF1_bit.PBLIS
#define EXTI_CONF1_PBHIS         EXTI_CONF1_bit.PBHIS
#define EXTI_CONF1_PDLIS         EXTI_CONF1_bit.PDLIS
#define EXTI_CONF1_PDHIS         EXTI_CONF1_bit.PDHIS
#define EXTI_CONF1_PELIS         EXTI_CONF1_bit.PELIS
#define EXTI_CONF1_PEHIS         EXTI_CONF1_bit.PEHIS
#define EXTI_CONF1_PFLIS         EXTI_CONF1_bit.PFLIS
#define EXTI_CONF1_PFES          EXTI_CONF1_bit.PFES

#define EXTI_CR4_PGIS            EXTI_CR4_bit.PGIS
#define EXTI_CR4_PHIS            EXTI_CR4_bit.PHIS

#define EXTI_CONF2_PFHIS         EXTI_CONF2_bit.PFHIS
#define EXTI_CONF2_PGLIS         EXTI_CONF2_bit.PGLIS
#define EXTI_CONF2_PGHIS         EXTI_CONF2_bit.PGHIS
#define EXTI_CONF2_PHLIS         EXTI_CONF2_bit.PHLIS
#define EXTI_CONF2_PHHIS         EXTI_CONF2_bit.PHHIS
#define EXTI_CONF2_PGBS          EXTI_CONF2_bit.PGBS
#define EXTI_CONF2_PHDS          EXTI_CONF2_bit.PHDS

#endif

/*-------------------------------------------------------------------------
 *      ITC - EXTI bit masks
 *-----------------------------------------------------------------------*/
#define MASK_EXTI_CR1_P0IS       0x03
#define MASK_EXTI_CR1_P1IS       0x0C
#define MASK_EXTI_CR1_P2IS       0x30
#define MASK_EXTI_CR1_P3IS       0xC0

#define MASK_EXTI_CR2_P4IS       0x03
#define MASK_EXTI_CR2_P5IS       0x0C
#define MASK_EXTI_CR2_P6IS       0x30
#define MASK_EXTI_CR2_P7IS       0xC0

#define MASK_EXTI_CR3_PBIS       0x03
#define MASK_EXTI_CR3_PDIS       0x0C
#define MASK_EXTI_CR3_PEIS       0x30
#define MASK_EXTI_CR3_PFIS       0xC0

#define MASK_EXTI_SR1_P0F        0x01
#define MASK_EXTI_SR1_P1F        0x02
#define MASK_EXTI_SR1_P2F        0x04
#define MASK_EXTI_SR1_P3F        0x08
#define MASK_EXTI_SR1_P4F        0x10
#define MASK_EXTI_SR1_P5F        0x20
#define MASK_EXTI_SR1_P6F        0x40
#define MASK_EXTI_SR1_P7F        0x80

#define MASK_EXTI_SR2_PBF        0x01
#define MASK_EXTI_SR2_PDF        0x02
#define MASK_EXTI_SR2_PEF        0x04
#define MASK_EXTI_SR2_PFF        0x08
#define MASK_EXTI_SR2_PGF        0x10
#define MASK_EXTI_SR2_PHF        0x20

#define MASK_EXTI_CONF1_PBLIS    0x01
#define MASK_EXTI_CONF1_PBHIS    0x02
#define MASK_EXTI_CONF1_PDLIS    0x04
#define MASK_EXTI_CONF1_PDHIS    0x08
#define MASK_EXTI_CONF1_PELIS    0x10
#define MASK_EXTI_CONF1_PEHIS    0x20
#define MASK_EXTI_CONF1_PFLIS    0x40
#define MASK_EXTI_CONF1_PFES     0x80

#define MASK_EXTI_CR4_PGIS       0x03
#define MASK_EXTI_CR4_PHIS       0x0C

#define MASK_EXTI_CONF2_PFHIS    0x01
#define MASK_EXTI_CONF2_PGLIS    0x02
#define MASK_EXTI_CONF2_PGHIS    0x04
#define MASK_EXTI_CONF2_PHLIS    0x08
#define MASK_EXTI_CONF2_PHHIS    0x10
#define MASK_EXTI_CONF2_PGBS     0x20
#define MASK_EXTI_CONF2_PHDS     0x40


/*-------------------------------------------------------------------------
 *      WFE register definitions
 *-----------------------------------------------------------------------*/
/* WFE control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM2_EV0    : 1;
  unsigned char TIM2_EV1    : 1;
  unsigned char TIM1_EV0    : 1;
  unsigned char TIM1_EV1    : 1;
  unsigned char EXTI_EV0    : 1;
  unsigned char EXTI_EV1    : 1;
  unsigned char EXTI_EV2    : 1;
  unsigned char EXTI_EV3    : 1;
} __BITS_WFE_CR1;
#endif
//__IO_REG8_BIT(WFE_CR1,     0x50A6, __READ_WRITE, __BITS_WFE_CR1);
unsigned char WFE_CR1; //0x50A6 __READ_WRITE
__BITS_WFE_CR1 WFE_CR1_bit;

/* WFE control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EXTI_EV4    : 1;
  unsigned char EXTI_EV5    : 1;
  unsigned char EXTI_EV6    : 1;
  unsigned char EXTI_EV7    : 1;
  unsigned char EXTI_EVB    : 1;
  unsigned char EXTI_EVD    : 1;
  unsigned char EXTI_EVF    : 1;
  unsigned char EXTI_EVE    : 1;
} __BITS_WFE_CR2;
#endif
//__IO_REG8_BIT(WFE_CR2,     0x50A7, __READ_WRITE, __BITS_WFE_CR2);
unsigned char WFE_CR2; //0x50A7 __READ_WRITE
__BITS_WFE_CR2 WFE_CR2_bit;

/* WFE control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM3_EV0    : 1;
  unsigned char TIM3_EV1    : 1;
  unsigned char TIM4_EV     : 1;
  unsigned char SPI1_EV     : 1;
  unsigned char I2C1_EV     : 1;
  unsigned char USART1_EV   : 1;
  unsigned char DMA1CH01_EV : 1;
  unsigned char DMA1CH23_EV : 1;
} __BITS_WFE_CR3;
#endif
//__IO_REG8_BIT(WFE_CR3,     0x50A8, __READ_WRITE, __BITS_WFE_CR3);
unsigned char WFE_CR3; //0x50A8 __READ_WRITE
__BITS_WFE_CR3 WFE_CR3_bit;

/* WFE control register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RTC_CSSLSE_EV: 1;
  unsigned char SPI2_EV     : 1;
  unsigned char USART2_EV   : 1;
  unsigned char USART3_EV   : 1;
  unsigned char TIM5_EV0    : 1;
  unsigned char TIM5_EV1    : 1;
  unsigned char AES_EV      : 1;
} __BITS_WFE_CR4;
#endif
//__IO_REG8_BIT(WFE_CR4,     0x50A9, __READ_WRITE, __BITS_WFE_CR4);
unsigned char WFE_CR4; //0x50A9 __READ_WRITE
__BITS_WFE_CR4 WFE_CR4_bit;


/*-------------------------------------------------------------------------
 *      WFE bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define WFE_CR1_TIM2_EV0         WFE_CR1_bit.TIM2_EV0
#define WFE_CR1_TIM2_EV1         WFE_CR1_bit.TIM2_EV1
#define WFE_CR1_TIM1_EV0         WFE_CR1_bit.TIM1_EV0
#define WFE_CR1_TIM1_EV1         WFE_CR1_bit.TIM1_EV1
#define WFE_CR1_EXTI_EV0         WFE_CR1_bit.EXTI_EV0
#define WFE_CR1_EXTI_EV1         WFE_CR1_bit.EXTI_EV1
#define WFE_CR1_EXTI_EV2         WFE_CR1_bit.EXTI_EV2
#define WFE_CR1_EXTI_EV3         WFE_CR1_bit.EXTI_EV3

#define WFE_CR2_EXTI_EV4         WFE_CR2_bit.EXTI_EV4
#define WFE_CR2_EXTI_EV5         WFE_CR2_bit.EXTI_EV5
#define WFE_CR2_EXTI_EV6         WFE_CR2_bit.EXTI_EV6
#define WFE_CR2_EXTI_EV7         WFE_CR2_bit.EXTI_EV7
#define WFE_CR2_EXTI_EVB         WFE_CR2_bit.EXTI_EVB
#define WFE_CR2_EXTI_EVD         WFE_CR2_bit.EXTI_EVD
#define WFE_CR2_EXTI_EVF         WFE_CR2_bit.EXTI_EVF
#define WFE_CR2_EXTI_EVE         WFE_CR2_bit.EXTI_EVE

#define WFE_CR3_TIM3_EV0         WFE_CR3_bit.TIM3_EV0
#define WFE_CR3_TIM3_EV1         WFE_CR3_bit.TIM3_EV1
#define WFE_CR3_TIM4_EV          WFE_CR3_bit.TIM4_EV
#define WFE_CR3_SPI1_EV          WFE_CR3_bit.SPI1_EV
#define WFE_CR3_I2C1_EV          WFE_CR3_bit.I2C1_EV
#define WFE_CR3_USART1_EV        WFE_CR3_bit.USART1_EV
#define WFE_CR3_DMA1CH01_EV      WFE_CR3_bit.DMA1CH01_EV
#define WFE_CR3_DMA1CH23_EV      WFE_CR3_bit.DMA1CH23_EV

#define WFE_CR4_RTC_CSSLSE_EV    WFE_CR4_bit.RTC_CSSLSE_EV
#define WFE_CR4_SPI2_EV          WFE_CR4_bit.SPI2_EV
#define WFE_CR4_USART2_EV        WFE_CR4_bit.USART2_EV
#define WFE_CR4_USART3_EV        WFE_CR4_bit.USART3_EV
#define WFE_CR4_TIM5_EV0         WFE_CR4_bit.TIM5_EV0
#define WFE_CR4_TIM5_EV1         WFE_CR4_bit.TIM5_EV1
#define WFE_CR4_AES_EV           WFE_CR4_bit.AES_EV

#endif

/*-------------------------------------------------------------------------
 *      WFE bit masks
 *-----------------------------------------------------------------------*/
#define MASK_WFE_CR1_TIM2_EV0    0x01
#define MASK_WFE_CR1_TIM2_EV1    0x02
#define MASK_WFE_CR1_TIM1_EV0    0x04
#define MASK_WFE_CR1_TIM1_EV1    0x08
#define MASK_WFE_CR1_EXTI_EV0    0x10
#define MASK_WFE_CR1_EXTI_EV1    0x20
#define MASK_WFE_CR1_EXTI_EV2    0x40
#define MASK_WFE_CR1_EXTI_EV3    0x80

#define MASK_WFE_CR2_EXTI_EV4    0x01
#define MASK_WFE_CR2_EXTI_EV5    0x02
#define MASK_WFE_CR2_EXTI_EV6    0x04
#define MASK_WFE_CR2_EXTI_EV7    0x08
#define MASK_WFE_CR2_EXTI_EVB    0x10
#define MASK_WFE_CR2_EXTI_EVD    0x20
#define MASK_WFE_CR2_EXTI_EVF    0x40
#define MASK_WFE_CR2_EXTI_EVE    0x80

#define MASK_WFE_CR3_TIM3_EV0    0x01
#define MASK_WFE_CR3_TIM3_EV1    0x02
#define MASK_WFE_CR3_TIM4_EV     0x04
#define MASK_WFE_CR3_SPI1_EV     0x08
#define MASK_WFE_CR3_I2C1_EV     0x10
#define MASK_WFE_CR3_USART1_EV   0x20
#define MASK_WFE_CR3_DMA1CH01_EV 0x40
#define MASK_WFE_CR3_DMA1CH23_EV 0x80

#define MASK_WFE_CR4_RTC_CSSLSE_EV 0x01
#define MASK_WFE_CR4_SPI2_EV     0x02
#define MASK_WFE_CR4_USART2_EV   0x04
#define MASK_WFE_CR4_USART3_EV   0x08
#define MASK_WFE_CR4_TIM5_EV0    0x10
#define MASK_WFE_CR4_TIM5_EV1    0x20
#define MASK_WFE_CR4_AES_EV      0x40


/*-------------------------------------------------------------------------
 *      RST register definitions
 *-----------------------------------------------------------------------*/
/* Reset control register */
//__IO_REG8    (RST_CR,      0x50B0, __READ_WRITE);
unsigned char RST_CR; //0x50B0 __READ_WRITE
/* Reset status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PORF        : 1;
  unsigned char IWDGF       : 1;
  unsigned char ILLOPF      : 1;
  unsigned char SWIMF       : 1;
  unsigned char WWDGF       : 1;
  unsigned char BORF        : 1;
} __BITS_RST_SR;
#endif
//__IO_REG8_BIT(RST_SR,      0x50B1, __READ_WRITE, __BITS_RST_SR);
unsigned char RST_SR; //0x50B1 __READ_WRITE
__BITS_RST_SR RST_SR_bit;


/*-------------------------------------------------------------------------
 *      RST bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define RST_SR_PORF              RST_SR_bit.PORF
#define RST_SR_IWDGF             RST_SR_bit.IWDGF
#define RST_SR_ILLOPF            RST_SR_bit.ILLOPF
#define RST_SR_SWIMF             RST_SR_bit.SWIMF
#define RST_SR_WWDGF             RST_SR_bit.WWDGF
#define RST_SR_BORF              RST_SR_bit.BORF

#endif

/*-------------------------------------------------------------------------
 *      RST bit masks
 *-----------------------------------------------------------------------*/
#define MASK_RST_SR_PORF         0x01
#define MASK_RST_SR_IWDGF        0x02
#define MASK_RST_SR_ILLOPF       0x04
#define MASK_RST_SR_SWIMF        0x08
#define MASK_RST_SR_WWDGF        0x10
#define MASK_RST_SR_BORF         0x20


/*-------------------------------------------------------------------------
 *      PWR register definitions
 *-----------------------------------------------------------------------*/
/* Power control and status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PVDE        : 1;
  unsigned char PLS         : 3;
  unsigned char PVDIEN      : 1;
  unsigned char PVDIF       : 1;
  unsigned char PVDOF       : 1;
} __BITS_PWR_CSR1;
#endif
//__IO_REG8_BIT(PWR_CSR1,    0x50B2, __READ_WRITE, __BITS_PWR_CSR1);
unsigned char PWR_CSR1; //0x50B2 __READ_WRITE
__BITS_PWR_CSR1 PWR_CSR1_bit;

/* Power control and status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VREFINTF    : 1;
  unsigned char ULP         : 1;
  unsigned char FWU         : 1;
} __BITS_PWR_CSR2;
#endif
//__IO_REG8_BIT(PWR_CSR2,    0x50B3, __READ_WRITE, __BITS_PWR_CSR2);
unsigned char PWR_CSR2; //0x50B3 __READ_WRITE
__BITS_PWR_CSR2 PWR_CSR2_bit;


/*-------------------------------------------------------------------------
 *      PWR bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PWR_CSR1_PVDE            PWR_CSR1_bit.PVDE
#define PWR_CSR1_PLS             PWR_CSR1_bit.PLS
#define PWR_CSR1_PVDIEN          PWR_CSR1_bit.PVDIEN
#define PWR_CSR1_PVDIF           PWR_CSR1_bit.PVDIF
#define PWR_CSR1_PVDOF           PWR_CSR1_bit.PVDOF

#define PWR_CSR2_VREFINTF        PWR_CSR2_bit.VREFINTF
#define PWR_CSR2_ULP             PWR_CSR2_bit.ULP
#define PWR_CSR2_FWU             PWR_CSR2_bit.FWU

#endif

/*-------------------------------------------------------------------------
 *      PWR bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PWR_CSR1_PVDE       0x01
#define MASK_PWR_CSR1_PLS        0x0E
#define MASK_PWR_CSR1_PVDIEN     0x10
#define MASK_PWR_CSR1_PVDIF      0x20
#define MASK_PWR_CSR1_PVDOF      0x40

#define MASK_PWR_CSR2_VREFINTF   0x01
#define MASK_PWR_CSR2_ULP        0x02
#define MASK_PWR_CSR2_FWU        0x04


/*-------------------------------------------------------------------------
 *      CLK register definitions
 *-----------------------------------------------------------------------*/
/* Clock master divider register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CKM         : 3;
} __BITS_CLK_CKDIVR;
#endif
//__IO_REG8_BIT(CLK_CKDIVR,  0x50C0, __READ_WRITE, __BITS_CLK_CKDIVR);
unsigned char CLK_CKDIVR; //0x50C0 __READ_WRITE
__BITS_CLK_CKDIVR CLK_CKDIVR_bit;

/* Clock RTC register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RTCSWBSY    : 1;
  unsigned char RTCSEL0     : 1;
  unsigned char RTCSEL1     : 1;
  unsigned char RTCSEL2     : 1;
  unsigned char RTCSEL3     : 1;
  unsigned char RTCDIV0     : 1;
  unsigned char RTCDIV1     : 1;
  unsigned char RTCDIV2     : 1;
} __BITS_CLK_CRTCR;
#endif
//__IO_REG8_BIT(CLK_CRTCR,   0x50C1, __READ_WRITE, __BITS_CLK_CRTCR);
unsigned char CLK_CRTCR; //0x50C1 __READ_WRITE
__BITS_CLK_CRTCR CLK_CRTCR_bit;

/* Internal clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSION       : 1;
  unsigned char HSIRDY      : 1;
  unsigned char LSION       : 1;
  unsigned char LSIRDY      : 1;
  unsigned char SAHALT      : 1;
  unsigned char FHWU        : 1;
  unsigned char BEEPAHALT   : 1;
} __BITS_CLK_ICKCR;
#endif
//__IO_REG8_BIT(CLK_ICKCR,   0x50C2, __READ_WRITE, __BITS_CLK_ICKCR);
unsigned char CLK_ICKCR; //0x50C2 __READ_WRITE
__BITS_CLK_ICKCR CLK_ICKCR_bit;

/* Peripheral clock gating register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PCKEN10     : 1;
  unsigned char PCKEN11     : 1;
  unsigned char PCKEN12     : 1;
  unsigned char PCKEN13     : 1;
  unsigned char PCKEN14     : 1;
  unsigned char PCKEN15     : 1;
  unsigned char PCKEN16     : 1;
  unsigned char PCKEN17     : 1;
} __BITS_CLK_PCKENR1;
#endif
//__IO_REG8_BIT(CLK_PCKENR1, 0x50C3, __READ_WRITE, __BITS_CLK_PCKENR1);
unsigned char CLK_PCKENR1; //0x50C3 __READ_WRITE
__BITS_CLK_PCKENR1 CLK_PCKENR1_bit;

/* Peripheral clock gating register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PCKEN20     : 1;
  unsigned char PCKEN21     : 1;
  unsigned char PCKEN22     : 1;
  unsigned char PCKEN23     : 1;
  unsigned char PCKEN24     : 1;
  unsigned char PCKEN25     : 1;
  unsigned char             : 1;
  unsigned char PCKEN27     : 1;
} __BITS_CLK_PCKENR2;
#endif
//__IO_REG8_BIT(CLK_PCKENR2, 0x50C4, __READ_WRITE, __BITS_CLK_PCKENR2);
unsigned char CLK_PCKENR2; //0x50C4 __READ_WRITE
__BITS_CLK_PCKENR2 CLK_PCKENR2_bit;

/* Configurable clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCOSWBSY    : 1;
  unsigned char CCOSEL      : 4;
  unsigned char CCODIV      : 3;
} __BITS_CLK_CCOR;
#endif
//__IO_REG8_BIT(CLK_CCOR,    0x50C5, __READ_WRITE, __BITS_CLK_CCOR);
unsigned char CLK_CCOR; //0x50C5 __READ_WRITE
__BITS_CLK_CCOR CLK_CCOR_bit;

/* External clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSEON       : 1;
  unsigned char HSERDY      : 1;
  unsigned char LSEON       : 1;
  unsigned char LSERDY      : 1;
  unsigned char HSEBYP      : 1;
  unsigned char LSEBYP      : 1;
} __BITS_CLK_ECKCR;
#endif
//__IO_REG8_BIT(CLK_ECKCR,   0x50C6, __READ_WRITE, __BITS_CLK_ECKCR);
unsigned char CLK_ECKCR; //0x50C6 __READ_WRITE
__BITS_CLK_ECKCR CLK_ECKCR_bit;

/* System clock status register */
//__IO_REG8    (CLK_SCSR,    0x50C7, __READ_WRITE);
unsigned char CLK_SCSR; //0x50C7 __READ_WRITE
/* System clock switch register */
//__IO_REG8    (CLK_SWR,     0x50C8, __READ_WRITE);
unsigned char CLK_SWR; //0x50C8 __READ_WRITE
/* Clock switch control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWBSY       : 1;
  unsigned char SWEN        : 1;
  unsigned char SWIEN       : 1;
  unsigned char SWIF        : 1;
} __BITS_CLK_SWCR;
#endif
//__IO_REG8_BIT(CLK_SWCR,    0x50C9, __READ_WRITE, __BITS_CLK_SWCR);
unsigned char CLK_SWCR; //0x50C9 __READ_WRITE
__BITS_CLK_SWCR CLK_SWCR_bit;

/* Clock security system register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CSSEN       : 1;
  unsigned char AUX         : 1;
  unsigned char CSSDIE      : 1;
  unsigned char CSSD        : 1;
  unsigned char CSSDGON     : 1;
} __BITS_CLK_CSSR;
#endif
//__IO_REG8_BIT(CLK_CSSR,    0x50CA, __READ_WRITE, __BITS_CLK_CSSR);
unsigned char CLK_CSSR; //0x50CA __READ_WRITE
__BITS_CLK_CSSR CLK_CSSR_bit;

/* Clock BEEP register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BEEPSWBSY   : 1;
  unsigned char CLKBEEPSEL0 : 1;
  unsigned char CLKBEEPSEL1 : 1;
} __BITS_CLK_CBEEPR;
#endif
//__IO_REG8_BIT(CLK_CBEEPR,  0x50CB, __READ_WRITE, __BITS_CLK_CBEEPR);
unsigned char CLK_CBEEPR; //0x50CB __READ_WRITE
__BITS_CLK_CBEEPR CLK_CBEEPR_bit;

/* HSI calibration register */
//__IO_REG8    (CLK_HSICALR, 0x50CC, __READ);
unsigned char CLK_HSICALR; //0x50CC __READ
/* HSI clock calibration trimming register */
//__IO_REG8    (CLK_HSITRIMR, 0x50CD, __READ_WRITE);
unsigned char CLK_HSITRIMR; //0x50CD __READ_WRITE
/* HSI unlock register */
//__IO_REG8    (CLK_HSIUNLCKR, 0x50CE, __READ_WRITE);
unsigned char CLK_HSIUNLCKR; //0x50CE __READ_WRITE
/* Main regulator control status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char REGREADY    : 1;
  unsigned char REGOFF      : 1;
  unsigned char HSIPD       : 1;
  unsigned char LSIPD       : 1;
  unsigned char HSEPD       : 1;
  unsigned char LSEPD       : 1;
  unsigned char EEBUSY      : 1;
  unsigned char EEREADY     : 1;
} __BITS_CLK_REGCSR;
#endif
//__IO_REG8_BIT(CLK_REGCSR,  0x50CF, __READ_WRITE, __BITS_CLK_REGCSR);
unsigned char CLK_REGCSR; //0x50CF __READ_WRITE
__BITS_CLK_REGCSR CLK_REGCSR_bit;

/* Peripheral clock gating register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PCKEN30     : 1;
  unsigned char PCKEN31     : 1;
  unsigned char PCKEN32     : 1;
  unsigned char PCKEN33     : 1;
  unsigned char PCKEN34     : 1;
  unsigned char PCKEN35     : 1;
} __BITS_CLK_PCKENR3;
#endif
//__IO_REG8_BIT(CLK_PCKENR3, 0x50D0, __READ_WRITE, __BITS_CLK_PCKENR3);
unsigned char CLK_PCKENR3; //0x50D0 __READ_WRITE
__BITS_CLK_PCKENR3 CLK_PCKENR3_bit;


/*-------------------------------------------------------------------------
 *      CLK bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define CLK_CKDIVR_CKM           CLK_CKDIVR_bit.CKM

#define CLK_CRTCR_RTCSWBSY       CLK_CRTCR_bit.RTCSWBSY
#define CLK_CRTCR_RTCSEL0        CLK_CRTCR_bit.RTCSEL0
#define CLK_CRTCR_RTCSEL1        CLK_CRTCR_bit.RTCSEL1
#define CLK_CRTCR_RTCSEL2        CLK_CRTCR_bit.RTCSEL2
#define CLK_CRTCR_RTCSEL3        CLK_CRTCR_bit.RTCSEL3
#define CLK_CRTCR_RTCDIV0        CLK_CRTCR_bit.RTCDIV0
#define CLK_CRTCR_RTCDIV1        CLK_CRTCR_bit.RTCDIV1
#define CLK_CRTCR_RTCDIV2        CLK_CRTCR_bit.RTCDIV2

#define CLK_ICKCR_HSION          CLK_ICKCR_bit.HSION
#define CLK_ICKCR_HSIRDY         CLK_ICKCR_bit.HSIRDY
#define CLK_ICKCR_LSION          CLK_ICKCR_bit.LSION
#define CLK_ICKCR_LSIRDY         CLK_ICKCR_bit.LSIRDY
#define CLK_ICKCR_SAHALT         CLK_ICKCR_bit.SAHALT
#define CLK_ICKCR_FHWU           CLK_ICKCR_bit.FHWU
#define CLK_ICKCR_BEEPAHALT      CLK_ICKCR_bit.BEEPAHALT

#define CLK_PCKENR1_PCKEN10      CLK_PCKENR1_bit.PCKEN10
#define CLK_PCKENR1_PCKEN11      CLK_PCKENR1_bit.PCKEN11
#define CLK_PCKENR1_PCKEN12      CLK_PCKENR1_bit.PCKEN12
#define CLK_PCKENR1_PCKEN13      CLK_PCKENR1_bit.PCKEN13
#define CLK_PCKENR1_PCKEN14      CLK_PCKENR1_bit.PCKEN14
#define CLK_PCKENR1_PCKEN15      CLK_PCKENR1_bit.PCKEN15
#define CLK_PCKENR1_PCKEN16      CLK_PCKENR1_bit.PCKEN16
#define CLK_PCKENR1_PCKEN17      CLK_PCKENR1_bit.PCKEN17

#define CLK_PCKENR2_PCKEN20      CLK_PCKENR2_bit.PCKEN20
#define CLK_PCKENR2_PCKEN21      CLK_PCKENR2_bit.PCKEN21
#define CLK_PCKENR2_PCKEN22      CLK_PCKENR2_bit.PCKEN22
#define CLK_PCKENR2_PCKEN23      CLK_PCKENR2_bit.PCKEN23
#define CLK_PCKENR2_PCKEN24      CLK_PCKENR2_bit.PCKEN24
#define CLK_PCKENR2_PCKEN25      CLK_PCKENR2_bit.PCKEN25
#define CLK_PCKENR2_PCKEN27      CLK_PCKENR2_bit.PCKEN27

#define CLK_CCOR_CCOSWBSY        CLK_CCOR_bit.CCOSWBSY
#define CLK_CCOR_CCOSEL          CLK_CCOR_bit.CCOSEL
#define CLK_CCOR_CCODIV          CLK_CCOR_bit.CCODIV

#define CLK_ECKCR_HSEON          CLK_ECKCR_bit.HSEON
#define CLK_ECKCR_HSERDY         CLK_ECKCR_bit.HSERDY
#define CLK_ECKCR_LSEON          CLK_ECKCR_bit.LSEON
#define CLK_ECKCR_LSERDY         CLK_ECKCR_bit.LSERDY
#define CLK_ECKCR_HSEBYP         CLK_ECKCR_bit.HSEBYP
#define CLK_ECKCR_LSEBYP         CLK_ECKCR_bit.LSEBYP

#define CLK_SWCR_SWBSY           CLK_SWCR_bit.SWBSY
#define CLK_SWCR_SWEN            CLK_SWCR_bit.SWEN
#define CLK_SWCR_SWIEN           CLK_SWCR_bit.SWIEN
#define CLK_SWCR_SWIF            CLK_SWCR_bit.SWIF

#define CLK_CSSR_CSSEN           CLK_CSSR_bit.CSSEN
#define CLK_CSSR_AUX             CLK_CSSR_bit.AUX
#define CLK_CSSR_CSSDIE          CLK_CSSR_bit.CSSDIE
#define CLK_CSSR_CSSD            CLK_CSSR_bit.CSSD
#define CLK_CSSR_CSSDGON         CLK_CSSR_bit.CSSDGON

#define CLK_CBEEPR_BEEPSWBSY     CLK_CBEEPR_bit.BEEPSWBSY
#define CLK_CBEEPR_CLKBEEPSEL0   CLK_CBEEPR_bit.CLKBEEPSEL0
#define CLK_CBEEPR_CLKBEEPSEL1   CLK_CBEEPR_bit.CLKBEEPSEL1

#define CLK_REGCSR_REGREADY      CLK_REGCSR_bit.REGREADY
#define CLK_REGCSR_REGOFF        CLK_REGCSR_bit.REGOFF
#define CLK_REGCSR_HSIPD         CLK_REGCSR_bit.HSIPD
#define CLK_REGCSR_LSIPD         CLK_REGCSR_bit.LSIPD
#define CLK_REGCSR_HSEPD         CLK_REGCSR_bit.HSEPD
#define CLK_REGCSR_LSEPD         CLK_REGCSR_bit.LSEPD
#define CLK_REGCSR_EEBUSY        CLK_REGCSR_bit.EEBUSY
#define CLK_REGCSR_EEREADY       CLK_REGCSR_bit.EEREADY

#define CLK_PCKENR3_PCKEN30      CLK_PCKENR3_bit.PCKEN30
#define CLK_PCKENR3_PCKEN31      CLK_PCKENR3_bit.PCKEN31
#define CLK_PCKENR3_PCKEN32      CLK_PCKENR3_bit.PCKEN32
#define CLK_PCKENR3_PCKEN33      CLK_PCKENR3_bit.PCKEN33
#define CLK_PCKENR3_PCKEN34      CLK_PCKENR3_bit.PCKEN34
#define CLK_PCKENR3_PCKEN35      CLK_PCKENR3_bit.PCKEN35

#endif

/*-------------------------------------------------------------------------
 *      CLK bit masks
 *-----------------------------------------------------------------------*/
#define MASK_CLK_CKDIVR_CKM      0x07

#define MASK_CLK_CRTCR_RTCSWBSY  0x01
#define MASK_CLK_CRTCR_RTCSEL0   0x02
#define MASK_CLK_CRTCR_RTCSEL1   0x04
#define MASK_CLK_CRTCR_RTCSEL2   0x08
#define MASK_CLK_CRTCR_RTCSEL3   0x10
#define MASK_CLK_CRTCR_RTCDIV0   0x20
#define MASK_CLK_CRTCR_RTCDIV1   0x40
#define MASK_CLK_CRTCR_RTCDIV2   0x80

#define MASK_CLK_ICKCR_HSION     0x01
#define MASK_CLK_ICKCR_HSIRDY    0x02
#define MASK_CLK_ICKCR_LSION     0x04
#define MASK_CLK_ICKCR_LSIRDY    0x08
#define MASK_CLK_ICKCR_SAHALT    0x10
#define MASK_CLK_ICKCR_FHWU      0x20
#define MASK_CLK_ICKCR_BEEPAHALT 0x40

#define MASK_CLK_PCKENR1_PCKEN10 0x01
#define MASK_CLK_PCKENR1_PCKEN11 0x02
#define MASK_CLK_PCKENR1_PCKEN12 0x04
#define MASK_CLK_PCKENR1_PCKEN13 0x08
#define MASK_CLK_PCKENR1_PCKEN14 0x10
#define MASK_CLK_PCKENR1_PCKEN15 0x20
#define MASK_CLK_PCKENR1_PCKEN16 0x40
#define MASK_CLK_PCKENR1_PCKEN17 0x80

#define MASK_CLK_PCKENR2_PCKEN20 0x01
#define MASK_CLK_PCKENR2_PCKEN21 0x02
#define MASK_CLK_PCKENR2_PCKEN22 0x04
#define MASK_CLK_PCKENR2_PCKEN23 0x08
#define MASK_CLK_PCKENR2_PCKEN24 0x10
#define MASK_CLK_PCKENR2_PCKEN25 0x20
#define MASK_CLK_PCKENR2_PCKEN27 0x80

#define MASK_CLK_CCOR_CCOSWBSY   0x01
#define MASK_CLK_CCOR_CCOSEL     0x1E
#define MASK_CLK_CCOR_CCODIV     0xE0

#define MASK_CLK_ECKCR_HSEON     0x01
#define MASK_CLK_ECKCR_HSERDY    0x02
#define MASK_CLK_ECKCR_LSEON     0x04
#define MASK_CLK_ECKCR_LSERDY    0x08
#define MASK_CLK_ECKCR_HSEBYP    0x10
#define MASK_CLK_ECKCR_LSEBYP    0x20

#define MASK_CLK_SWCR_SWBSY      0x01
#define MASK_CLK_SWCR_SWEN       0x02
#define MASK_CLK_SWCR_SWIEN      0x04
#define MASK_CLK_SWCR_SWIF       0x08

#define MASK_CLK_CSSR_CSSEN      0x01
#define MASK_CLK_CSSR_AUX        0x02
#define MASK_CLK_CSSR_CSSDIE     0x04
#define MASK_CLK_CSSR_CSSD       0x08
#define MASK_CLK_CSSR_CSSDGON    0x10

#define MASK_CLK_CBEEPR_BEEPSWBSY 0x01
#define MASK_CLK_CBEEPR_CLKBEEPSEL0 0x02
#define MASK_CLK_CBEEPR_CLKBEEPSEL1 0x04

#define MASK_CLK_REGCSR_REGREADY 0x01
#define MASK_CLK_REGCSR_REGOFF   0x02
#define MASK_CLK_REGCSR_HSIPD    0x04
#define MASK_CLK_REGCSR_LSIPD    0x08
#define MASK_CLK_REGCSR_HSEPD    0x10
#define MASK_CLK_REGCSR_LSEPD    0x20
#define MASK_CLK_REGCSR_EEBUSY   0x40
#define MASK_CLK_REGCSR_EEREADY  0x80

#define MASK_CLK_PCKENR3_PCKEN30 0x01
#define MASK_CLK_PCKENR3_PCKEN31 0x02
#define MASK_CLK_PCKENR3_PCKEN32 0x04
#define MASK_CLK_PCKENR3_PCKEN33 0x08
#define MASK_CLK_PCKENR3_PCKEN34 0x10
#define MASK_CLK_PCKENR3_PCKEN35 0x20


/*-------------------------------------------------------------------------
 *      WWDG register definitions
 *-----------------------------------------------------------------------*/
/* WWDG control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char T0          : 1;
  unsigned char T1          : 1;
  unsigned char T2          : 1;
  unsigned char T3          : 1;
  unsigned char T4          : 1;
  unsigned char T5          : 1;
  unsigned char T6          : 1;
  unsigned char T7          : 1;
} __BITS_WWDG_CR;
#endif
//__IO_REG8_BIT(WWDG_CR,     0x50D3, __READ_WRITE, __BITS_WWDG_CR);
unsigned char WWDG_CR; //0x50D3 __READ_WRITE
__BITS_WWDG_CR WWDG_CR_bit;

/* WWDR window register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char W0          : 1;
  unsigned char W1          : 1;
  unsigned char W2          : 1;
  unsigned char W3          : 1;
  unsigned char W4          : 1;
  unsigned char W5          : 1;
  unsigned char W6          : 1;
  unsigned char W7          : 1;
} __BITS_WWDG_WR;
#endif
//__IO_REG8_BIT(WWDG_WR,     0x50D4, __READ_WRITE, __BITS_WWDG_WR);
unsigned char WWDG_WR; //0x50D4 __READ_WRITE
__BITS_WWDG_WR WWDG_WR_bit;


/*-------------------------------------------------------------------------
 *      WWDG bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define WWDG_CR_T0               WWDG_CR_bit.T0
#define WWDG_CR_T1               WWDG_CR_bit.T1
#define WWDG_CR_T2               WWDG_CR_bit.T2
#define WWDG_CR_T3               WWDG_CR_bit.T3
#define WWDG_CR_T4               WWDG_CR_bit.T4
#define WWDG_CR_T5               WWDG_CR_bit.T5
#define WWDG_CR_T6               WWDG_CR_bit.T6
#define WWDG_CR_T7               WWDG_CR_bit.T7

#define WWDG_WR_W0               WWDG_WR_bit.W0
#define WWDG_WR_W1               WWDG_WR_bit.W1
#define WWDG_WR_W2               WWDG_WR_bit.W2
#define WWDG_WR_W3               WWDG_WR_bit.W3
#define WWDG_WR_W4               WWDG_WR_bit.W4
#define WWDG_WR_W5               WWDG_WR_bit.W5
#define WWDG_WR_W6               WWDG_WR_bit.W6
#define WWDG_WR_W7               WWDG_WR_bit.W7

#endif

/*-------------------------------------------------------------------------
 *      WWDG bit masks
 *-----------------------------------------------------------------------*/
#define MASK_WWDG_CR_T0          0x01
#define MASK_WWDG_CR_T1          0x02
#define MASK_WWDG_CR_T2          0x04
#define MASK_WWDG_CR_T3          0x08
#define MASK_WWDG_CR_T4          0x10
#define MASK_WWDG_CR_T5          0x20
#define MASK_WWDG_CR_T6          0x40
#define MASK_WWDG_CR_T7          0x80

#define MASK_WWDG_WR_W0          0x01
#define MASK_WWDG_WR_W1          0x02
#define MASK_WWDG_WR_W2          0x04
#define MASK_WWDG_WR_W3          0x08
#define MASK_WWDG_WR_W4          0x10
#define MASK_WWDG_WR_W5          0x20
#define MASK_WWDG_WR_W6          0x40
#define MASK_WWDG_WR_W7          0x80


/*-------------------------------------------------------------------------
 *      IWDG register definitions
 *-----------------------------------------------------------------------*/
/* IWDG key register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char KEY0        : 1;
  unsigned char KEY1        : 1;
  unsigned char KEY2        : 1;
  unsigned char KEY3        : 1;
  unsigned char KEY4        : 1;
  unsigned char KEY5        : 1;
  unsigned char KEY6        : 1;
  unsigned char KEY7        : 1;
} __BITS_IWDG_KR;
#endif
//__IO_REG8_BIT(IWDG_KR,     0x50E0, __WRITE, __BITS_IWDG_KR);
unsigned char IWDG_KR; //0x50E0 __WRITE
__BITS_IWDG_KR IWDG_KR_bit;

/* IWDG prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PR          : 3;
} __BITS_IWDG_PR;
#endif
//__IO_REG8_BIT(IWDG_PR,     0x50E1, __READ_WRITE, __BITS_IWDG_PR);
unsigned char IWDG_PR; //0x50E1 __READ_WRITE
__BITS_IWDG_PR IWDG_PR_bit;

/* IWDG reload register */
//__IO_REG8    (IWDG_RLR,    0x50E2, __READ_WRITE);
unsigned char IWDG_RLR; //0x50E2 __READ_WRITE

/*-------------------------------------------------------------------------
 *      IWDG bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define IWDG_KR_KEY0             IWDG_KR_bit.KEY0
#define IWDG_KR_KEY1             IWDG_KR_bit.KEY1
#define IWDG_KR_KEY2             IWDG_KR_bit.KEY2
#define IWDG_KR_KEY3             IWDG_KR_bit.KEY3
#define IWDG_KR_KEY4             IWDG_KR_bit.KEY4
#define IWDG_KR_KEY5             IWDG_KR_bit.KEY5
#define IWDG_KR_KEY6             IWDG_KR_bit.KEY6
#define IWDG_KR_KEY7             IWDG_KR_bit.KEY7

#define IWDG_PR_PR               IWDG_PR_bit.PR

#endif

/*-------------------------------------------------------------------------
 *      IWDG bit masks
 *-----------------------------------------------------------------------*/
#define MASK_IWDG_KR_KEY0        0x01
#define MASK_IWDG_KR_KEY1        0x02
#define MASK_IWDG_KR_KEY2        0x04
#define MASK_IWDG_KR_KEY3        0x08
#define MASK_IWDG_KR_KEY4        0x10
#define MASK_IWDG_KR_KEY5        0x20
#define MASK_IWDG_KR_KEY6        0x40
#define MASK_IWDG_KR_KEY7        0x80

#define MASK_IWDG_PR_PR          0x07


/*-------------------------------------------------------------------------
 *      BEEP register definitions
 *-----------------------------------------------------------------------*/
/* BEEP control/status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MSR         : 1;
} __BITS_BEEP_CSR1;
#endif
//__IO_REG8_BIT(BEEP_CSR1,   0x50F0, __READ_WRITE, __BITS_BEEP_CSR1);
unsigned char BEEP_CSR1; //0x50F0 __READ_WRITE
__BITS_BEEP_CSR1 BEEP_CSR1_bit;

/* BEEP control/status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BEEPDIV     : 5;
  unsigned char BEEPEN      : 1;
  unsigned char BEEPSEL     : 2;
} __BITS_BEEP_CSR2;
#endif
//__IO_REG8_BIT(BEEP_CSR2,   0x50F3, __READ_WRITE, __BITS_BEEP_CSR2);
unsigned char BEEP_CSR2; //0x50F3 __READ_WRITE
__BITS_BEEP_CSR2 BEEP_CSR2_bit;


/*-------------------------------------------------------------------------
 *      BEEP bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define BEEP_CSR1_MSR            BEEP_CSR1_bit.MSR

#define BEEP_CSR2_BEEPDIV        BEEP_CSR2_bit.BEEPDIV
#define BEEP_CSR2_BEEPEN         BEEP_CSR2_bit.BEEPEN
#define BEEP_CSR2_BEEPSEL        BEEP_CSR2_bit.BEEPSEL

#endif

/*-------------------------------------------------------------------------
 *      BEEP bit masks
 *-----------------------------------------------------------------------*/
#define MASK_BEEP_CSR1_MSR       0x01

#define MASK_BEEP_CSR2_BEEPDIV   0x1F
#define MASK_BEEP_CSR2_BEEPEN    0x20
#define MASK_BEEP_CSR2_BEEPSEL   0xC0


/*-------------------------------------------------------------------------
 *      RTC register definitions
 *-----------------------------------------------------------------------*/
/* Time register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SU          : 4;
  unsigned char ST          : 4;
} __BITS_RTC_TR1;
#endif
//__IO_REG8_BIT(RTC_TR1,     0x5140, __READ_WRITE, __BITS_RTC_TR1);
unsigned char RTC_TR1; //0x5140 __READ_WRITE
__BITS_RTC_TR1 RTC_TR1_bit;

/* Time register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MNU         : 4;
  unsigned char MNT         : 4;
} __BITS_RTC_TR2;
#endif
//__IO_REG8_BIT(RTC_TR2,     0x5141, __READ_WRITE, __BITS_RTC_TR2);
unsigned char RTC_TR2; //0x5141 __READ_WRITE
__BITS_RTC_TR2 RTC_TR2_bit;

/* Time register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HU          : 4;
  unsigned char HT          : 2;
  unsigned char PM          : 1;
} __BITS_RTC_TR3;
#endif
//__IO_REG8_BIT(RTC_TR3,     0x5142, __READ_WRITE, __BITS_RTC_TR3);
unsigned char RTC_TR3; //0x5142 __READ_WRITE
__BITS_RTC_TR3 RTC_TR3_bit;

/* Date register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DU          : 4;
  unsigned char DT          : 2;
} __BITS_RTC_DR1;
#endif
//__IO_REG8_BIT(RTC_DR1,     0x5144, __READ_WRITE, __BITS_RTC_DR1);
unsigned char RTC_DR1; //0x5144 __READ_WRITE
__BITS_RTC_DR1 RTC_DR1_bit;

/* Date register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MU          : 4;
  unsigned char MT          : 1;
  unsigned char WDU         : 3;
} __BITS_RTC_DR2;
#endif
//__IO_REG8_BIT(RTC_DR2,     0x5145, __READ_WRITE, __BITS_RTC_DR2);
unsigned char RTC_DR2; //0x5145 __READ_WRITE
__BITS_RTC_DR2 RTC_DR2_bit;

/* Date register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char YU          : 4;
  unsigned char YT          : 4;
} __BITS_RTC_DR3;
#endif
//__IO_REG8_BIT(RTC_DR3,     0x5146, __READ_WRITE, __BITS_RTC_DR3);
unsigned char RTC_DR3; //0x5146 __READ_WRITE
__BITS_RTC_DR3 RTC_DR3_bit;

/* Control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WUCKSEL     : 4;
  unsigned char             : 1;
  unsigned char RATIO       : 1;
  unsigned char FMT         : 1;
} __BITS_RTC_CR1;
#endif
//__IO_REG8_BIT(RTC_CR1,     0x5148, __READ_WRITE, __BITS_RTC_CR1);
unsigned char RTC_CR1; //0x5148 __READ_WRITE
__BITS_RTC_CR1 RTC_CR1_bit;

/* Control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALRAE       : 1;
  unsigned char             : 1;
  unsigned char WUTE        : 1;
  unsigned char             : 1;
  unsigned char ALRAIE      : 1;
  unsigned char             : 1;
  unsigned char WUTIE       : 1;
} __BITS_RTC_CR2;
#endif
//__IO_REG8_BIT(RTC_CR2,     0x5149, __READ_WRITE, __BITS_RTC_CR2);
unsigned char RTC_CR2; //0x5149 __READ_WRITE
__BITS_RTC_CR2 RTC_CR2_bit;

/* Control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD1H       : 1;
  unsigned char SUB1H       : 1;
  unsigned char BCK         : 1;
  unsigned char             : 1;
  unsigned char POL         : 1;
  unsigned char OSEL        : 2;
  unsigned char COE         : 1;
} __BITS_RTC_CR3;
#endif
//__IO_REG8_BIT(RTC_CR3,     0x514A, __READ_WRITE, __BITS_RTC_CR3);
unsigned char RTC_CR3; //0x514A __READ_WRITE
__BITS_RTC_CR3 RTC_CR3_bit;

/* Initialization and status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALRAWF      : 1;
  unsigned char RECALPF     : 1;
  unsigned char WUTWF       : 1;
  unsigned char SHPF        : 1;
  unsigned char INITS       : 1;
  unsigned char RSF         : 1;
  unsigned char INITF       : 1;
  unsigned char INIT        : 1;
} __BITS_RTC_ISR1;
#endif
//__IO_REG8_BIT(RTC_ISR1,    0x514C, __READ_WRITE, __BITS_RTC_ISR1);
unsigned char RTC_ISR1; //0x514C __READ_WRITE
__BITS_RTC_ISR1 RTC_ISR1_bit;

/* Initialization and Status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALRAF       : 1;
  unsigned char             : 1;
  unsigned char WUTF        : 1;
  unsigned char             : 2;
  unsigned char TAMP1F      : 1;
  unsigned char TAMP2F      : 1;
  unsigned char TAMP3F      : 1;
} __BITS_RTC_ISR2;
#endif
//__IO_REG8_BIT(RTC_ISR2,    0x514D, __READ_WRITE, __BITS_RTC_ISR2);
unsigned char RTC_ISR2; //0x514D __READ_WRITE
__BITS_RTC_ISR2 RTC_ISR2_bit;

/* Synchronous prescaler register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PREDIV_S8   : 1;
  unsigned char PREDIV_S9   : 1;
  unsigned char PREDIV_S10  : 1;
  unsigned char PREDIV_S11  : 1;
  unsigned char PREDIV_S12  : 1;
  unsigned char PREDIV_S13  : 1;
  unsigned char PREDIV_S14  : 1;
} __BITS_RTC_SPRERH;
#endif
//__IO_REG8_BIT(RTC_SPRERH,  0x5150, __READ_WRITE, __BITS_RTC_SPRERH);
unsigned char RTC_SPRERH; //0x5150 __READ_WRITE
__BITS_RTC_SPRERH RTC_SPRERH_bit;

/* Synchronous prescaler register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PREDIV_S0   : 1;
  unsigned char PREDIV_S1   : 1;
  unsigned char PREDIV_S2   : 1;
  unsigned char PREDIV_S3   : 1;
  unsigned char PREDIV_S4   : 1;
  unsigned char PREDIV_S5   : 1;
  unsigned char PREDIV_S6   : 1;
  unsigned char PREDIV_S7   : 1;
} __BITS_RTC_SPRERL;
#endif
//__IO_REG8_BIT(RTC_SPRERL,  0x5151, __READ_WRITE, __BITS_RTC_SPRERL);
unsigned char RTC_SPRERL; //0x5151 __READ_WRITE
__BITS_RTC_SPRERL RTC_SPRERL_bit;

/* Asynchronous prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PREDIV_A    : 7;
} __BITS_RTC_APRER;
#endif
//__IO_REG8_BIT(RTC_APRER,   0x5152, __READ_WRITE, __BITS_RTC_APRER);
unsigned char RTC_APRER; //0x5152 __READ_WRITE
__BITS_RTC_APRER RTC_APRER_bit;

/* Wakeup timer register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WUT8        : 1;
  unsigned char WUT9        : 1;
  unsigned char WUT10       : 1;
  unsigned char WUT11       : 1;
  unsigned char WUT12       : 1;
  unsigned char WUT13       : 1;
  unsigned char WUT14       : 1;
  unsigned char WUT15       : 1;
} __BITS_RTC_WUTRH;
#endif
//__IO_REG8_BIT(RTC_WUTRH,   0x5154, __READ_WRITE, __BITS_RTC_WUTRH);
unsigned char RTC_WUTRH; //0x5154 __READ_WRITE
__BITS_RTC_WUTRH RTC_WUTRH_bit;

/* Wakeup timer register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WUT0        : 1;
  unsigned char WUT1        : 1;
  unsigned char WUT2        : 1;
  unsigned char WUT3        : 1;
  unsigned char WUT4        : 1;
  unsigned char WUT5        : 1;
  unsigned char WUT6        : 1;
  unsigned char WUT7        : 1;
} __BITS_RTC_WUTRL;
#endif
//__IO_REG8_BIT(RTC_WUTRL,   0x5155, __READ_WRITE, __BITS_RTC_WUTRL);
unsigned char RTC_WUTRL; //0x5155 __READ_WRITE
__BITS_RTC_WUTRL RTC_WUTRL_bit;

/* Subsecond register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SS0         : 1;
  unsigned char SS1         : 1;
  unsigned char SS2         : 1;
  unsigned char SS3         : 1;
  unsigned char SS4         : 1;
  unsigned char SS5         : 1;
  unsigned char SS6         : 1;
  unsigned char SS7         : 1;
} __BITS_RTC_SSRL;
#endif
//__IO_REG8_BIT(RTC_SSRL,    0x5157, __READ, __BITS_RTC_SSRL);
unsigned char RTC_SSRL; //0x5157 __READ
__BITS_RTC_SSRL RTC_SSRL_bit;

/* Subsecond register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SS8         : 1;
  unsigned char SS9         : 1;
  unsigned char SS10        : 1;
  unsigned char SS11        : 1;
  unsigned char SS12        : 1;
  unsigned char SS13        : 1;
  unsigned char SS14        : 1;
  unsigned char SS15        : 1;
} __BITS_RTC_SSRH;
#endif
//__IO_REG8_BIT(RTC_SSRH,    0x5158, __READ, __BITS_RTC_SSRH);
unsigned char RTC_SSRH; //0x5158 __READ
__BITS_RTC_SSRH RTC_SSRH_bit;

/* Write protection register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char KEY0        : 1;
  unsigned char KEY1        : 1;
  unsigned char KEY2        : 1;
  unsigned char KEY3        : 1;
  unsigned char KEY4        : 1;
  unsigned char KEY5        : 1;
  unsigned char KEY6        : 1;
  unsigned char KEY7        : 1;
} __BITS_RTC_WPR;
#endif
//__IO_REG8_BIT(RTC_WPR,     0x5159, __WRITE, __BITS_RTC_WPR);
unsigned char RTC_WPR; //0x5159 __WRITE
__BITS_RTC_WPR RTC_WPR_bit;

/* Shift register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SUBFS8      : 1;
  unsigned char SUBFS9      : 1;
  unsigned char SUBFS10     : 1;
  unsigned char SUBFS11     : 1;
  unsigned char SUBFS12     : 1;
  unsigned char SUBFS13     : 1;
  unsigned char SUBFS14     : 1;
  unsigned char ADDIS       : 1;
} __BITS_RTC_SHIFTRH;
#endif
//__IO_REG8_BIT(RTC_SHIFTRH, 0x515A, __WRITE, __BITS_RTC_SHIFTRH);
unsigned char RTC_SHIFTRH; //0x515A __WRITE
__BITS_RTC_SHIFTRH RTC_SHIFTRH_bit;

/* Shift register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SUBFS0      : 1;
  unsigned char SUBFS1      : 1;
  unsigned char SUBFS2      : 1;
  unsigned char SUBFS3      : 1;
  unsigned char SUBFS4      : 1;
  unsigned char SUBFS5      : 1;
  unsigned char SUBFS6      : 1;
  unsigned char SUBFS7      : 1;
} __BITS_RTC_SHIFTRL;
#endif
//__IO_REG8_BIT(RTC_SHIFTRL, 0x515B, __WRITE, __BITS_RTC_SHIFTRL);
unsigned char RTC_SHIFTRL; //0x515B __WRITE
__BITS_RTC_SHIFTRL RTC_SHIFTRL_bit;

/* Alarm A register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALSU        : 4;
  unsigned char ALST        : 3;
  unsigned char MSK1        : 1;
} __BITS_RTC_ALRMAR1;
#endif
//__IO_REG8_BIT(RTC_ALRMAR1, 0x515C, __READ_WRITE, __BITS_RTC_ALRMAR1);
unsigned char RTC_ALRMAR1; //0x515C __READ_WRITE
__BITS_RTC_ALRMAR1 RTC_ALRMAR1_bit;

/* Alarm A register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALMNU       : 4;
  unsigned char ALMNT       : 3;
  unsigned char MSK2        : 1;
} __BITS_RTC_ALRMAR2;
#endif
//__IO_REG8_BIT(RTC_ALRMAR2, 0x515D, __READ_WRITE, __BITS_RTC_ALRMAR2);
unsigned char RTC_ALRMAR2; //0x515D __READ_WRITE
__BITS_RTC_ALRMAR2 RTC_ALRMAR2_bit;

/* Alarm A register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALHU        : 4;
  unsigned char ALHT        : 2;
  unsigned char PM          : 1;
  unsigned char MSK3        : 1;
} __BITS_RTC_ALRMAR3;
#endif
//__IO_REG8_BIT(RTC_ALRMAR3, 0x515E, __READ_WRITE, __BITS_RTC_ALRMAR3);
unsigned char RTC_ALRMAR3; //0x515E __READ_WRITE
__BITS_RTC_ALRMAR3 RTC_ALRMAR3_bit;

/* Alarm A register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALDU        : 4;
  unsigned char ALDT        : 2;
  unsigned char WDSEL       : 1;
  unsigned char MSK4        : 1;
} __BITS_RTC_ALRMAR4;
#endif
//__IO_REG8_BIT(RTC_ALRMAR4, 0x515F, __READ_WRITE, __BITS_RTC_ALRMAR4);
unsigned char RTC_ALRMAR4; //0x515F __READ_WRITE
__BITS_RTC_ALRMAR4 RTC_ALRMAR4_bit;

/* Alarm A subsecond register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 8;
  unsigned char ALSS8       : 1;
  unsigned char ALSS9       : 1;
  unsigned char ALSS10      : 1;
  unsigned char ALSS11      : 1;
  unsigned char ALSS12      : 1;
  unsigned char ALSS13      : 1;
  unsigned char ALSS14      : 1;
} __BITS_RTC_ALRMASSRH;
#endif
//__IO_REG8_BIT(RTC_ALRMASSRH, 0x5164, __READ_WRITE, __BITS_RTC_ALRMASSRH);
unsigned char RTC_ALRMASSRH; //0x5164 __READ_WRITE
__BITS_RTC_ALRMASSRH RTC_ALRMASSRH_bit;

/* Alarm A subsecond register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALSS0       : 1;
  unsigned char ALSS1       : 1;
  unsigned char ALSS2       : 1;
  unsigned char ALSS3       : 1;
  unsigned char ALSS4       : 1;
  unsigned char ALSS5       : 1;
  unsigned char ALSS6       : 1;
  unsigned char ALSS7       : 1;
} __BITS_RTC_ALRMASSRL;
#endif
//__IO_REG8_BIT(RTC_ALRMASSRL, 0x5165, __READ_WRITE, __BITS_RTC_ALRMASSRL);
unsigned char RTC_ALRMASSRL; //0x5165 __READ_WRITE
__BITS_RTC_ALRMASSRL RTC_ALRMASSRL_bit;

/* Alarm A masking register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MASKSS0     : 1;
  unsigned char MASKSS1     : 1;
  unsigned char MASKSS2     : 1;
  unsigned char MASKSS3     : 1;
} __BITS_RTC_ALRMASSMSKR;
#endif
//__IO_REG8_BIT(RTC_ALRMASSMSKR, 0x5166, __READ_WRITE, __BITS_RTC_ALRMASSMSKR);
unsigned char RTC_ALRMASSMSKR; //0x5166 __READ_WRITE
__BITS_RTC_ALRMASSMSKR RTC_ALRMASSMSKR_bit;

/* Calibration register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CALM8       : 1;
  unsigned char             : 4;
  unsigned char CALW16      : 1;
  unsigned char CALW8       : 1;
  unsigned char CALP        : 1;
} __BITS_RTC_CALRH;
#endif
//__IO_REG8_BIT(RTC_CALRH,   0x516A, __READ_WRITE, __BITS_RTC_CALRH);
unsigned char RTC_CALRH; //0x516A __READ_WRITE
__BITS_RTC_CALRH RTC_CALRH_bit;

/* Calibration register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CALM0       : 1;
  unsigned char CALM1       : 1;
  unsigned char CALM2       : 1;
  unsigned char CALM3       : 1;
  unsigned char CALM4       : 1;
  unsigned char CALM5       : 1;
  unsigned char CALM6       : 1;
  unsigned char CALM7       : 1;
} __BITS_RTC_CALRL;
#endif
//__IO_REG8_BIT(RTC_CALRL,   0x516B, __READ_WRITE, __BITS_RTC_CALRL);
unsigned char RTC_CALRL; //0x516B __READ_WRITE
__BITS_RTC_CALRL RTC_CALRL_bit;

/* Tamper control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TAMPIE      : 1;
  unsigned char TAMP1E      : 1;
  unsigned char TAMP1LEVEL  : 1;
  unsigned char TAMP2E      : 1;
  unsigned char TAMP2LEVEL  : 1;
  unsigned char TAMP3E      : 1;
  unsigned char TAMP3LEVEL  : 1;
} __BITS_RTC_TCR1;
#endif
//__IO_REG8_BIT(RTC_TCR1,    0x516C, __READ_WRITE, __BITS_RTC_TCR1);
unsigned char RTC_TCR1; //0x516C __READ_WRITE
__BITS_RTC_TCR1 RTC_TCR1_bit;

/* Tamper control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TAMPFREQ    : 3;
  unsigned char TAMPFLT     : 2;
  unsigned char TAMPPRCH    : 2;
  unsigned char TAMPPUDIS   : 1;
} __BITS_RTC_TCR2;
#endif
//__IO_REG8_BIT(RTC_TCR2,    0x516D, __READ_WRITE, __BITS_RTC_TCR2);
unsigned char RTC_TCR2; //0x516D __READ_WRITE
__BITS_RTC_TCR2 RTC_TCR2_bit;

/* CSS on LSE control and status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CSSEN       : 1;
  unsigned char SWITCHEN    : 1;
  unsigned char CSSIE       : 1;
  unsigned char CSSF        : 1;
  unsigned char SWITCHF     : 1;
} __BITS_CSS_LSE_CSR;
#endif
//__IO_REG8_BIT(CSS_LSE_CSR, 0x5190, __READ_WRITE, __BITS_CSS_LSE_CSR);
unsigned char CSS_LSE_CSR; //0x5190 __READ_WRITE
__BITS_CSS_LSE_CSR CSS_LSE_CSR_bit;


/*-------------------------------------------------------------------------
 *      RTC bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define RTC_TR1_SU               RTC_TR1_bit.SU
#define RTC_TR1_ST               RTC_TR1_bit.ST

#define RTC_TR2_MNU              RTC_TR2_bit.MNU
#define RTC_TR2_MNT              RTC_TR2_bit.MNT

#define RTC_TR3_HU               RTC_TR3_bit.HU
#define RTC_TR3_HT               RTC_TR3_bit.HT
#define RTC_TR3_PM               RTC_TR3_bit.PM

#define RTC_DR1_DU               RTC_DR1_bit.DU
#define RTC_DR1_DT               RTC_DR1_bit.DT

#define RTC_DR2_MU               RTC_DR2_bit.MU
#define RTC_DR2_MT               RTC_DR2_bit.MT
#define RTC_DR2_WDU              RTC_DR2_bit.WDU

#define RTC_DR3_YU               RTC_DR3_bit.YU
#define RTC_DR3_YT               RTC_DR3_bit.YT

#define RTC_CR1_WUCKSEL          RTC_CR1_bit.WUCKSEL
#define RTC_CR1_RATIO            RTC_CR1_bit.RATIO
#define RTC_CR1_FMT              RTC_CR1_bit.FMT

#define RTC_CR2_ALRAE            RTC_CR2_bit.ALRAE
#define RTC_CR2_WUTE             RTC_CR2_bit.WUTE
#define RTC_CR2_ALRAIE           RTC_CR2_bit.ALRAIE
#define RTC_CR2_WUTIE            RTC_CR2_bit.WUTIE

#define RTC_CR3_ADD1H            RTC_CR3_bit.ADD1H
#define RTC_CR3_SUB1H            RTC_CR3_bit.SUB1H
#define RTC_CR3_BCK              RTC_CR3_bit.BCK
#define RTC_CR3_POL              RTC_CR3_bit.POL
#define RTC_CR3_OSEL             RTC_CR3_bit.OSEL
#define RTC_CR3_COE              RTC_CR3_bit.COE

#define RTC_ISR1_ALRAWF          RTC_ISR1_bit.ALRAWF
#define RTC_ISR1_RECALPF         RTC_ISR1_bit.RECALPF
#define RTC_ISR1_WUTWF           RTC_ISR1_bit.WUTWF
#define RTC_ISR1_SHPF            RTC_ISR1_bit.SHPF
#define RTC_ISR1_INITS           RTC_ISR1_bit.INITS
#define RTC_ISR1_RSF             RTC_ISR1_bit.RSF
#define RTC_ISR1_INITF           RTC_ISR1_bit.INITF
#define RTC_ISR1_INIT            RTC_ISR1_bit.INIT

#define RTC_ISR2_ALRAF           RTC_ISR2_bit.ALRAF
#define RTC_ISR2_WUTF            RTC_ISR2_bit.WUTF
#define RTC_ISR2_TAMP1F          RTC_ISR2_bit.TAMP1F
#define RTC_ISR2_TAMP2F          RTC_ISR2_bit.TAMP2F
#define RTC_ISR2_TAMP3F          RTC_ISR2_bit.TAMP3F

#define RTC_SPRERH_PREDIV_S8     RTC_SPRERH_bit.PREDIV_S8
#define RTC_SPRERH_PREDIV_S9     RTC_SPRERH_bit.PREDIV_S9
#define RTC_SPRERH_PREDIV_S10    RTC_SPRERH_bit.PREDIV_S10
#define RTC_SPRERH_PREDIV_S11    RTC_SPRERH_bit.PREDIV_S11
#define RTC_SPRERH_PREDIV_S12    RTC_SPRERH_bit.PREDIV_S12
#define RTC_SPRERH_PREDIV_S13    RTC_SPRERH_bit.PREDIV_S13
#define RTC_SPRERH_PREDIV_S14    RTC_SPRERH_bit.PREDIV_S14

#define RTC_SPRERL_PREDIV_S0     RTC_SPRERL_bit.PREDIV_S0
#define RTC_SPRERL_PREDIV_S1     RTC_SPRERL_bit.PREDIV_S1
#define RTC_SPRERL_PREDIV_S2     RTC_SPRERL_bit.PREDIV_S2
#define RTC_SPRERL_PREDIV_S3     RTC_SPRERL_bit.PREDIV_S3
#define RTC_SPRERL_PREDIV_S4     RTC_SPRERL_bit.PREDIV_S4
#define RTC_SPRERL_PREDIV_S5     RTC_SPRERL_bit.PREDIV_S5
#define RTC_SPRERL_PREDIV_S6     RTC_SPRERL_bit.PREDIV_S6
#define RTC_SPRERL_PREDIV_S7     RTC_SPRERL_bit.PREDIV_S7

#define RTC_APRER_PREDIV_A       RTC_APRER_bit.PREDIV_A

#define RTC_WUTRH_WUT8           RTC_WUTRH_bit.WUT8
#define RTC_WUTRH_WUT9           RTC_WUTRH_bit.WUT9
#define RTC_WUTRH_WUT10          RTC_WUTRH_bit.WUT10
#define RTC_WUTRH_WUT11          RTC_WUTRH_bit.WUT11
#define RTC_WUTRH_WUT12          RTC_WUTRH_bit.WUT12
#define RTC_WUTRH_WUT13          RTC_WUTRH_bit.WUT13
#define RTC_WUTRH_WUT14          RTC_WUTRH_bit.WUT14
#define RTC_WUTRH_WUT15          RTC_WUTRH_bit.WUT15

#define RTC_WUTRL_WUT0           RTC_WUTRL_bit.WUT0
#define RTC_WUTRL_WUT1           RTC_WUTRL_bit.WUT1
#define RTC_WUTRL_WUT2           RTC_WUTRL_bit.WUT2
#define RTC_WUTRL_WUT3           RTC_WUTRL_bit.WUT3
#define RTC_WUTRL_WUT4           RTC_WUTRL_bit.WUT4
#define RTC_WUTRL_WUT5           RTC_WUTRL_bit.WUT5
#define RTC_WUTRL_WUT6           RTC_WUTRL_bit.WUT6
#define RTC_WUTRL_WUT7           RTC_WUTRL_bit.WUT7

#define RTC_SSRL_SS0             RTC_SSRL_bit.SS0
#define RTC_SSRL_SS1             RTC_SSRL_bit.SS1
#define RTC_SSRL_SS2             RTC_SSRL_bit.SS2
#define RTC_SSRL_SS3             RTC_SSRL_bit.SS3
#define RTC_SSRL_SS4             RTC_SSRL_bit.SS4
#define RTC_SSRL_SS5             RTC_SSRL_bit.SS5
#define RTC_SSRL_SS6             RTC_SSRL_bit.SS6
#define RTC_SSRL_SS7             RTC_SSRL_bit.SS7

#define RTC_SSRH_SS8             RTC_SSRH_bit.SS8
#define RTC_SSRH_SS9             RTC_SSRH_bit.SS9
#define RTC_SSRH_SS10            RTC_SSRH_bit.SS10
#define RTC_SSRH_SS11            RTC_SSRH_bit.SS11
#define RTC_SSRH_SS12            RTC_SSRH_bit.SS12
#define RTC_SSRH_SS13            RTC_SSRH_bit.SS13
#define RTC_SSRH_SS14            RTC_SSRH_bit.SS14
#define RTC_SSRH_SS15            RTC_SSRH_bit.SS15

#define RTC_WPR_KEY0             RTC_WPR_bit.KEY0
#define RTC_WPR_KEY1             RTC_WPR_bit.KEY1
#define RTC_WPR_KEY2             RTC_WPR_bit.KEY2
#define RTC_WPR_KEY3             RTC_WPR_bit.KEY3
#define RTC_WPR_KEY4             RTC_WPR_bit.KEY4
#define RTC_WPR_KEY5             RTC_WPR_bit.KEY5
#define RTC_WPR_KEY6             RTC_WPR_bit.KEY6
#define RTC_WPR_KEY7             RTC_WPR_bit.KEY7

#define RTC_SHIFTRH_SUBFS8       RTC_SHIFTRH_bit.SUBFS8
#define RTC_SHIFTRH_SUBFS9       RTC_SHIFTRH_bit.SUBFS9
#define RTC_SHIFTRH_SUBFS10      RTC_SHIFTRH_bit.SUBFS10
#define RTC_SHIFTRH_SUBFS11      RTC_SHIFTRH_bit.SUBFS11
#define RTC_SHIFTRH_SUBFS12      RTC_SHIFTRH_bit.SUBFS12
#define RTC_SHIFTRH_SUBFS13      RTC_SHIFTRH_bit.SUBFS13
#define RTC_SHIFTRH_SUBFS14      RTC_SHIFTRH_bit.SUBFS14
#define RTC_SHIFTRH_ADDIS        RTC_SHIFTRH_bit.ADDIS

#define RTC_SHIFTRL_SUBFS0       RTC_SHIFTRL_bit.SUBFS0
#define RTC_SHIFTRL_SUBFS1       RTC_SHIFTRL_bit.SUBFS1
#define RTC_SHIFTRL_SUBFS2       RTC_SHIFTRL_bit.SUBFS2
#define RTC_SHIFTRL_SUBFS3       RTC_SHIFTRL_bit.SUBFS3
#define RTC_SHIFTRL_SUBFS4       RTC_SHIFTRL_bit.SUBFS4
#define RTC_SHIFTRL_SUBFS5       RTC_SHIFTRL_bit.SUBFS5
#define RTC_SHIFTRL_SUBFS6       RTC_SHIFTRL_bit.SUBFS6
#define RTC_SHIFTRL_SUBFS7       RTC_SHIFTRL_bit.SUBFS7

#define RTC_ALRMAR1_ALSU         RTC_ALRMAR1_bit.ALSU
#define RTC_ALRMAR1_ALST         RTC_ALRMAR1_bit.ALST
#define RTC_ALRMAR1_MSK1         RTC_ALRMAR1_bit.MSK1

#define RTC_ALRMAR2_ALMNU        RTC_ALRMAR2_bit.ALMNU
#define RTC_ALRMAR2_ALMNT        RTC_ALRMAR2_bit.ALMNT
#define RTC_ALRMAR2_MSK2         RTC_ALRMAR2_bit.MSK2

#define RTC_ALRMAR3_ALHU         RTC_ALRMAR3_bit.ALHU
#define RTC_ALRMAR3_ALHT         RTC_ALRMAR3_bit.ALHT
#define RTC_ALRMAR3_PM           RTC_ALRMAR3_bit.PM
#define RTC_ALRMAR3_MSK3         RTC_ALRMAR3_bit.MSK3

#define RTC_ALRMAR4_ALDU         RTC_ALRMAR4_bit.ALDU
#define RTC_ALRMAR4_ALDT         RTC_ALRMAR4_bit.ALDT
#define RTC_ALRMAR4_WDSEL        RTC_ALRMAR4_bit.WDSEL
#define RTC_ALRMAR4_MSK4         RTC_ALRMAR4_bit.MSK4

#define RTC_ALRMASSRH_ALSS8      RTC_ALRMASSRH_bit.ALSS8
#define RTC_ALRMASSRH_ALSS9      RTC_ALRMASSRH_bit.ALSS9
#define RTC_ALRMASSRH_ALSS10     RTC_ALRMASSRH_bit.ALSS10
#define RTC_ALRMASSRH_ALSS11     RTC_ALRMASSRH_bit.ALSS11
#define RTC_ALRMASSRH_ALSS12     RTC_ALRMASSRH_bit.ALSS12
#define RTC_ALRMASSRH_ALSS13     RTC_ALRMASSRH_bit.ALSS13
#define RTC_ALRMASSRH_ALSS14     RTC_ALRMASSRH_bit.ALSS14

#define RTC_ALRMASSRL_ALSS0      RTC_ALRMASSRL_bit.ALSS0
#define RTC_ALRMASSRL_ALSS1      RTC_ALRMASSRL_bit.ALSS1
#define RTC_ALRMASSRL_ALSS2      RTC_ALRMASSRL_bit.ALSS2
#define RTC_ALRMASSRL_ALSS3      RTC_ALRMASSRL_bit.ALSS3
#define RTC_ALRMASSRL_ALSS4      RTC_ALRMASSRL_bit.ALSS4
#define RTC_ALRMASSRL_ALSS5      RTC_ALRMASSRL_bit.ALSS5
#define RTC_ALRMASSRL_ALSS6      RTC_ALRMASSRL_bit.ALSS6
#define RTC_ALRMASSRL_ALSS7      RTC_ALRMASSRL_bit.ALSS7

#define RTC_ALRMASSMSKR_MASKSS0  RTC_ALRMASSMSKR_bit.MASKSS0
#define RTC_ALRMASSMSKR_MASKSS1  RTC_ALRMASSMSKR_bit.MASKSS1
#define RTC_ALRMASSMSKR_MASKSS2  RTC_ALRMASSMSKR_bit.MASKSS2
#define RTC_ALRMASSMSKR_MASKSS3  RTC_ALRMASSMSKR_bit.MASKSS3

#define RTC_CALRH_CALM8          RTC_CALRH_bit.CALM8
#define RTC_CALRH_CALW16         RTC_CALRH_bit.CALW16
#define RTC_CALRH_CALW8          RTC_CALRH_bit.CALW8
#define RTC_CALRH_CALP           RTC_CALRH_bit.CALP

#define RTC_CALRL_CALM0          RTC_CALRL_bit.CALM0
#define RTC_CALRL_CALM1          RTC_CALRL_bit.CALM1
#define RTC_CALRL_CALM2          RTC_CALRL_bit.CALM2
#define RTC_CALRL_CALM3          RTC_CALRL_bit.CALM3
#define RTC_CALRL_CALM4          RTC_CALRL_bit.CALM4
#define RTC_CALRL_CALM5          RTC_CALRL_bit.CALM5
#define RTC_CALRL_CALM6          RTC_CALRL_bit.CALM6
#define RTC_CALRL_CALM7          RTC_CALRL_bit.CALM7

#define RTC_TCR1_TAMPIE          RTC_TCR1_bit.TAMPIE
#define RTC_TCR1_TAMP1E          RTC_TCR1_bit.TAMP1E
#define RTC_TCR1_TAMP1LEVEL      RTC_TCR1_bit.TAMP1LEVEL
#define RTC_TCR1_TAMP2E          RTC_TCR1_bit.TAMP2E
#define RTC_TCR1_TAMP2LEVEL      RTC_TCR1_bit.TAMP2LEVEL
#define RTC_TCR1_TAMP3E          RTC_TCR1_bit.TAMP3E
#define RTC_TCR1_TAMP3LEVEL      RTC_TCR1_bit.TAMP3LEVEL

#define RTC_TCR2_TAMPFREQ        RTC_TCR2_bit.TAMPFREQ
#define RTC_TCR2_TAMPFLT         RTC_TCR2_bit.TAMPFLT
#define RTC_TCR2_TAMPPRCH        RTC_TCR2_bit.TAMPPRCH
#define RTC_TCR2_TAMPPUDIS       RTC_TCR2_bit.TAMPPUDIS

#define CSS_LSE_CSR_CSSEN        CSS_LSE_CSR_bit.CSSEN
#define CSS_LSE_CSR_SWITCHEN     CSS_LSE_CSR_bit.SWITCHEN
#define CSS_LSE_CSR_CSSIE        CSS_LSE_CSR_bit.CSSIE
#define CSS_LSE_CSR_CSSF         CSS_LSE_CSR_bit.CSSF
#define CSS_LSE_CSR_SWITCHF      CSS_LSE_CSR_bit.SWITCHF

#endif

/*-------------------------------------------------------------------------
 *      RTC bit masks
 *-----------------------------------------------------------------------*/
#define MASK_RTC_TR1_SU          0x0F
#define MASK_RTC_TR1_ST          0xF0

#define MASK_RTC_TR2_MNU         0x0F
#define MASK_RTC_TR2_MNT         0xF0

#define MASK_RTC_TR3_HU          0x0F
#define MASK_RTC_TR3_HT          0x30
#define MASK_RTC_TR3_PM          0x40

#define MASK_RTC_DR1_DU          0x0F
#define MASK_RTC_DR1_DT          0x30

#define MASK_RTC_DR2_MU          0x0F
#define MASK_RTC_DR2_MT          0x10
#define MASK_RTC_DR2_WDU         0xE0

#define MASK_RTC_DR3_YU          0x0F
#define MASK_RTC_DR3_YT          0xF0

#define MASK_RTC_CR1_WUCKSEL     0x0F
#define MASK_RTC_CR1_RATIO       0x20
#define MASK_RTC_CR1_FMT         0x40

#define MASK_RTC_CR2_ALRAE       0x01
#define MASK_RTC_CR2_WUTE        0x04
#define MASK_RTC_CR2_ALRAIE      0x10
#define MASK_RTC_CR2_WUTIE       0x40

#define MASK_RTC_CR3_ADD1H       0x01
#define MASK_RTC_CR3_SUB1H       0x02
#define MASK_RTC_CR3_BCK         0x04
#define MASK_RTC_CR3_POL         0x10
#define MASK_RTC_CR3_OSEL        0x60
#define MASK_RTC_CR3_COE         0x80

#define MASK_RTC_ISR1_ALRAWF     0x01
#define MASK_RTC_ISR1_RECALPF    0x02
#define MASK_RTC_ISR1_WUTWF      0x04
#define MASK_RTC_ISR1_SHPF       0x08
#define MASK_RTC_ISR1_INITS      0x10
#define MASK_RTC_ISR1_RSF        0x20
#define MASK_RTC_ISR1_INITF      0x40
#define MASK_RTC_ISR1_INIT       0x80

#define MASK_RTC_ISR2_ALRAF      0x01
#define MASK_RTC_ISR2_WUTF       0x04
#define MASK_RTC_ISR2_TAMP1F     0x20
#define MASK_RTC_ISR2_TAMP2F     0x40
#define MASK_RTC_ISR2_TAMP3F     0x80

#define MASK_RTC_SPRERH_PREDIV_S8 0x01
#define MASK_RTC_SPRERH_PREDIV_S9 0x02
#define MASK_RTC_SPRERH_PREDIV_S10 0x04
#define MASK_RTC_SPRERH_PREDIV_S11 0x08
#define MASK_RTC_SPRERH_PREDIV_S12 0x10
#define MASK_RTC_SPRERH_PREDIV_S13 0x20
#define MASK_RTC_SPRERH_PREDIV_S14 0x40

#define MASK_RTC_SPRERL_PREDIV_S0 0x01
#define MASK_RTC_SPRERL_PREDIV_S1 0x02
#define MASK_RTC_SPRERL_PREDIV_S2 0x04
#define MASK_RTC_SPRERL_PREDIV_S3 0x08
#define MASK_RTC_SPRERL_PREDIV_S4 0x10
#define MASK_RTC_SPRERL_PREDIV_S5 0x20
#define MASK_RTC_SPRERL_PREDIV_S6 0x40
#define MASK_RTC_SPRERL_PREDIV_S7 0x80

#define MASK_RTC_APRER_PREDIV_A  0x7F

#define MASK_RTC_WUTRH_WUT8      0x01
#define MASK_RTC_WUTRH_WUT9      0x02
#define MASK_RTC_WUTRH_WUT10     0x04
#define MASK_RTC_WUTRH_WUT11     0x08
#define MASK_RTC_WUTRH_WUT12     0x10
#define MASK_RTC_WUTRH_WUT13     0x20
#define MASK_RTC_WUTRH_WUT14     0x40
#define MASK_RTC_WUTRH_WUT15     0x80

#define MASK_RTC_WUTRL_WUT0      0x01
#define MASK_RTC_WUTRL_WUT1      0x02
#define MASK_RTC_WUTRL_WUT2      0x04
#define MASK_RTC_WUTRL_WUT3      0x08
#define MASK_RTC_WUTRL_WUT4      0x10
#define MASK_RTC_WUTRL_WUT5      0x20
#define MASK_RTC_WUTRL_WUT6      0x40
#define MASK_RTC_WUTRL_WUT7      0x80

#define MASK_RTC_SSRL_SS0        0x01
#define MASK_RTC_SSRL_SS1        0x02
#define MASK_RTC_SSRL_SS2        0x04
#define MASK_RTC_SSRL_SS3        0x08
#define MASK_RTC_SSRL_SS4        0x10
#define MASK_RTC_SSRL_SS5        0x20
#define MASK_RTC_SSRL_SS6        0x40
#define MASK_RTC_SSRL_SS7        0x80

#define MASK_RTC_SSRH_SS8        0x01
#define MASK_RTC_SSRH_SS9        0x02
#define MASK_RTC_SSRH_SS10       0x04
#define MASK_RTC_SSRH_SS11       0x08
#define MASK_RTC_SSRH_SS12       0x10
#define MASK_RTC_SSRH_SS13       0x20
#define MASK_RTC_SSRH_SS14       0x40
#define MASK_RTC_SSRH_SS15       0x80

#define MASK_RTC_WPR_KEY0        0x01
#define MASK_RTC_WPR_KEY1        0x02
#define MASK_RTC_WPR_KEY2        0x04
#define MASK_RTC_WPR_KEY3        0x08
#define MASK_RTC_WPR_KEY4        0x10
#define MASK_RTC_WPR_KEY5        0x20
#define MASK_RTC_WPR_KEY6        0x40
#define MASK_RTC_WPR_KEY7        0x80

#define MASK_RTC_SHIFTRH_SUBFS8  0x01
#define MASK_RTC_SHIFTRH_SUBFS9  0x02
#define MASK_RTC_SHIFTRH_SUBFS10 0x04
#define MASK_RTC_SHIFTRH_SUBFS11 0x08
#define MASK_RTC_SHIFTRH_SUBFS12 0x10
#define MASK_RTC_SHIFTRH_SUBFS13 0x20
#define MASK_RTC_SHIFTRH_SUBFS14 0x40
#define MASK_RTC_SHIFTRH_ADDIS   0x80

#define MASK_RTC_SHIFTRL_SUBFS0  0x01
#define MASK_RTC_SHIFTRL_SUBFS1  0x02
#define MASK_RTC_SHIFTRL_SUBFS2  0x04
#define MASK_RTC_SHIFTRL_SUBFS3  0x08
#define MASK_RTC_SHIFTRL_SUBFS4  0x10
#define MASK_RTC_SHIFTRL_SUBFS5  0x20
#define MASK_RTC_SHIFTRL_SUBFS6  0x40
#define MASK_RTC_SHIFTRL_SUBFS7  0x80

#define MASK_RTC_ALRMAR1_ALSU    0x0F
#define MASK_RTC_ALRMAR1_ALST    0x70
#define MASK_RTC_ALRMAR1_MSK1    0x80

#define MASK_RTC_ALRMAR2_ALMNU   0x0F
#define MASK_RTC_ALRMAR2_ALMNT   0x70
#define MASK_RTC_ALRMAR2_MSK2    0x80

#define MASK_RTC_ALRMAR3_ALHU    0x0F
#define MASK_RTC_ALRMAR3_ALHT    0x30
#define MASK_RTC_ALRMAR3_PM      0x40
#define MASK_RTC_ALRMAR3_MSK3    0x80

#define MASK_RTC_ALRMAR4_ALDU    0x0F
#define MASK_RTC_ALRMAR4_ALDT    0x30
#define MASK_RTC_ALRMAR4_WDSEL   0x40
#define MASK_RTC_ALRMAR4_MSK4    0x80

#define MASK_RTC_ALRMASSRH_ALSS8 0x100
#define MASK_RTC_ALRMASSRH_ALSS9 0x200
#define MASK_RTC_ALRMASSRH_ALSS10 0x400
#define MASK_RTC_ALRMASSRH_ALSS11 0x800
#define MASK_RTC_ALRMASSRH_ALSS12 0x1000
#define MASK_RTC_ALRMASSRH_ALSS13 0x2000
#define MASK_RTC_ALRMASSRH_ALSS14 0x4000

#define MASK_RTC_ALRMASSRL_ALSS0 0x01
#define MASK_RTC_ALRMASSRL_ALSS1 0x02
#define MASK_RTC_ALRMASSRL_ALSS2 0x04
#define MASK_RTC_ALRMASSRL_ALSS3 0x08
#define MASK_RTC_ALRMASSRL_ALSS4 0x10
#define MASK_RTC_ALRMASSRL_ALSS5 0x20
#define MASK_RTC_ALRMASSRL_ALSS6 0x40
#define MASK_RTC_ALRMASSRL_ALSS7 0x80

#define MASK_RTC_ALRMASSMSKR_MASKSS0 0x01
#define MASK_RTC_ALRMASSMSKR_MASKSS1 0x02
#define MASK_RTC_ALRMASSMSKR_MASKSS2 0x04
#define MASK_RTC_ALRMASSMSKR_MASKSS3 0x08

#define MASK_RTC_CALRH_CALM8     0x01
#define MASK_RTC_CALRH_CALW16    0x20
#define MASK_RTC_CALRH_CALW8     0x40
#define MASK_RTC_CALRH_CALP      0x80

#define MASK_RTC_CALRL_CALM0     0x01
#define MASK_RTC_CALRL_CALM1     0x02
#define MASK_RTC_CALRL_CALM2     0x04
#define MASK_RTC_CALRL_CALM3     0x08
#define MASK_RTC_CALRL_CALM4     0x10
#define MASK_RTC_CALRL_CALM5     0x20
#define MASK_RTC_CALRL_CALM6     0x40
#define MASK_RTC_CALRL_CALM7     0x80

#define MASK_RTC_TCR1_TAMPIE     0x01
#define MASK_RTC_TCR1_TAMP1E     0x02
#define MASK_RTC_TCR1_TAMP1LEVEL 0x04
#define MASK_RTC_TCR1_TAMP2E     0x08
#define MASK_RTC_TCR1_TAMP2LEVEL 0x10
#define MASK_RTC_TCR1_TAMP3E     0x20
#define MASK_RTC_TCR1_TAMP3LEVEL 0x40

#define MASK_RTC_TCR2_TAMPFREQ   0x07
#define MASK_RTC_TCR2_TAMPFLT    0x18
#define MASK_RTC_TCR2_TAMPPRCH   0x60
#define MASK_RTC_TCR2_TAMPPUDIS  0x80

#define MASK_CSS_LSE_CSR_CSSEN   0x01
#define MASK_CSS_LSE_CSR_SWITCHEN 0x02
#define MASK_CSS_LSE_CSR_CSSIE   0x04
#define MASK_CSS_LSE_CSR_CSSF    0x08
#define MASK_CSS_LSE_CSR_SWITCHF 0x10


/*-------------------------------------------------------------------------
 *      SPI1 register definitions
 *-----------------------------------------------------------------------*/
/* SPI1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char MSTR        : 1;
  unsigned char BR          : 3;
  unsigned char SPE         : 1;
  unsigned char LSBFIRST    : 1;
} __BITS_SPI1_CR1;
#endif
//__IO_REG8_BIT(SPI1_CR1,    0x5200, __READ_WRITE, __BITS_SPI1_CR1);
unsigned char SPI1_CR1; //0x5200 __READ_WRITE
__BITS_SPI1_CR1 SPI1_CR1_bit;

/* SPI1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SSI         : 1;
  unsigned char SSM         : 1;
  unsigned char RXONLY      : 1;
  unsigned char             : 1;
  unsigned char CRCNEXT     : 1;
  unsigned char CRCEN       : 1;
  unsigned char BDOE        : 1;
  unsigned char BDM         : 1;
} __BITS_SPI1_CR2;
#endif
//__IO_REG8_BIT(SPI1_CR2,    0x5201, __READ_WRITE, __BITS_SPI1_CR2);
unsigned char SPI1_CR2; //0x5201 __READ_WRITE
__BITS_SPI1_CR2 SPI1_CR2_bit;

/* SPI1 interrupt control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RXDMAEN     : 1;
  unsigned char TXDMAEN     : 1;
  unsigned char             : 2;
  unsigned char WKIE        : 1;
  unsigned char ERRIE       : 1;
  unsigned char RXIE        : 1;
  unsigned char TXIE        : 1;
} __BITS_SPI1_ICR;
#endif
//__IO_REG8_BIT(SPI1_ICR,    0x5202, __READ_WRITE, __BITS_SPI1_ICR);
unsigned char SPI1_ICR; //0x5202 __READ_WRITE
__BITS_SPI1_ICR SPI1_ICR_bit;

/* SPI1 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RXNE        : 1;
  unsigned char TXE         : 1;
  unsigned char             : 1;
  unsigned char WKUP        : 1;
  unsigned char CRCERR      : 1;
  unsigned char MODF        : 1;
  unsigned char OVR         : 1;
  unsigned char BSY         : 1;
} __BITS_SPI1_SR;
#endif
//__IO_REG8_BIT(SPI1_SR,     0x5203, __READ_WRITE, __BITS_SPI1_SR);
unsigned char SPI1_SR; //0x5203 __READ_WRITE
__BITS_SPI1_SR SPI1_SR_bit;

/* SPI1 data register */
//__IO_REG8    (SPI1_DR,     0x5204, __READ_WRITE);
unsigned char SPI1_DR; //0x5204 __READ_WRITE
/* SPI1 CRC polynomial register */
//__IO_REG8    (SPI1_CRCPR,  0x5205, __READ_WRITE);
unsigned char SPI1_CRCPR; //0x5205 __READ_WRITE
/* SPI1 Rx CRC register */
//__IO_REG8    (SPI1_RXCRCR, 0x5206, __READ);
unsigned char SPI1_RXCRCR; //0x5206 __READ
/* SPI1 Tx CRC register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TXCRC       : 7;
} __BITS_SPI1_TXCRCR;
#endif
//__IO_REG8_BIT(SPI1_TXCRCR, 0x5207, __READ, __BITS_SPI1_TXCRCR);
unsigned char SPI1_TXCRCR; //0x5207 __READ
__BITS_SPI1_TXCRCR SPI1_TXCRCR_bit;


/*-------------------------------------------------------------------------
 *      SPI1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SPI1_CR1_CPHA            SPI1_CR1_bit.CPHA
#define SPI1_CR1_CPOL            SPI1_CR1_bit.CPOL
#define SPI1_CR1_MSTR            SPI1_CR1_bit.MSTR
#define SPI1_CR1_BR              SPI1_CR1_bit.BR
#define SPI1_CR1_SPE             SPI1_CR1_bit.SPE
#define SPI1_CR1_LSBFIRST        SPI1_CR1_bit.LSBFIRST

#define SPI1_CR2_SSI             SPI1_CR2_bit.SSI
#define SPI1_CR2_SSM             SPI1_CR2_bit.SSM
#define SPI1_CR2_RXONLY          SPI1_CR2_bit.RXONLY
#define SPI1_CR2_CRCNEXT         SPI1_CR2_bit.CRCNEXT
#define SPI1_CR2_CRCEN           SPI1_CR2_bit.CRCEN
#define SPI1_CR2_BDOE            SPI1_CR2_bit.BDOE
#define SPI1_CR2_BDM             SPI1_CR2_bit.BDM

#define SPI1_ICR_RXDMAEN         SPI1_ICR_bit.RXDMAEN
#define SPI1_ICR_TXDMAEN         SPI1_ICR_bit.TXDMAEN
#define SPI1_ICR_WKIE            SPI1_ICR_bit.WKIE
#define SPI1_ICR_ERRIE           SPI1_ICR_bit.ERRIE
#define SPI1_ICR_RXIE            SPI1_ICR_bit.RXIE
#define SPI1_ICR_TXIE            SPI1_ICR_bit.TXIE

#define SPI1_SR_RXNE             SPI1_SR_bit.RXNE
#define SPI1_SR_TXE              SPI1_SR_bit.TXE
#define SPI1_SR_WKUP             SPI1_SR_bit.WKUP
#define SPI1_SR_CRCERR           SPI1_SR_bit.CRCERR
#define SPI1_SR_MODF             SPI1_SR_bit.MODF
#define SPI1_SR_OVR              SPI1_SR_bit.OVR
#define SPI1_SR_BSY              SPI1_SR_bit.BSY

#define SPI1_TXCRCR_TXCRC        SPI1_TXCRCR_bit.TXCRC

#endif

/*-------------------------------------------------------------------------
 *      SPI1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SPI1_CR1_CPHA       0x01
#define MASK_SPI1_CR1_CPOL       0x02
#define MASK_SPI1_CR1_MSTR       0x04
#define MASK_SPI1_CR1_BR         0x38
#define MASK_SPI1_CR1_SPE        0x40
#define MASK_SPI1_CR1_LSBFIRST   0x80

#define MASK_SPI1_CR2_SSI        0x01
#define MASK_SPI1_CR2_SSM        0x02
#define MASK_SPI1_CR2_RXONLY     0x04
#define MASK_SPI1_CR2_CRCNEXT    0x10
#define MASK_SPI1_CR2_CRCEN      0x20
#define MASK_SPI1_CR2_BDOE       0x40
#define MASK_SPI1_CR2_BDM        0x80

#define MASK_SPI1_ICR_RXDMAEN    0x01
#define MASK_SPI1_ICR_TXDMAEN    0x02
#define MASK_SPI1_ICR_WKIE       0x10
#define MASK_SPI1_ICR_ERRIE      0x20
#define MASK_SPI1_ICR_RXIE       0x40
#define MASK_SPI1_ICR_TXIE       0x80

#define MASK_SPI1_SR_RXNE        0x01
#define MASK_SPI1_SR_TXE         0x02
#define MASK_SPI1_SR_WKUP        0x08
#define MASK_SPI1_SR_CRCERR      0x10
#define MASK_SPI1_SR_MODF        0x20
#define MASK_SPI1_SR_OVR         0x40
#define MASK_SPI1_SR_BSY         0x80

#define MASK_SPI1_TXCRCR_TXCRC   0x7F


/*-------------------------------------------------------------------------
 *      I2C1 register definitions
 *-----------------------------------------------------------------------*/
/* I2C1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PE          : 1;
  unsigned char SMBUS       : 1;
  unsigned char             : 1;
  unsigned char SMBTYPE     : 1;
  unsigned char ENARP       : 1;
  unsigned char ENPEC       : 1;
  unsigned char ENGC        : 1;
  unsigned char NOSTRETCH   : 1;
} __BITS_I2C1_CR1;
#endif
//__IO_REG8_BIT(I2C1_CR1,    0x5210, __READ_WRITE, __BITS_I2C1_CR1);
unsigned char I2C1_CR1; //0x5210 __READ_WRITE
__BITS_I2C1_CR1 I2C1_CR1_bit;

/* I2C1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char START       : 1;
  unsigned char STOP        : 1;
  unsigned char ACK         : 1;
  unsigned char POS         : 1;
  unsigned char PEC         : 1;
  unsigned char ALERT       : 1;
  unsigned char             : 1;
  unsigned char SWRST       : 1;
} __BITS_I2C1_CR2;
#endif
//__IO_REG8_BIT(I2C1_CR2,    0x5211, __READ_WRITE, __BITS_I2C1_CR2);
unsigned char I2C1_CR2; //0x5211 __READ_WRITE
__BITS_I2C1_CR2 I2C1_CR2_bit;

/* I2C1 frequency register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FREQ        : 6;
} __BITS_I2C1_FREQR;
#endif
//__IO_REG8_BIT(I2C1_FREQR,  0x5212, __READ_WRITE, __BITS_I2C1_FREQR);
unsigned char I2C1_FREQR; //0x5212 __READ_WRITE
__BITS_I2C1_FREQR I2C1_FREQR_bit;

/* I2C1 own address register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD0        : 1;
  unsigned char ADD1        : 1;
  unsigned char ADD2        : 1;
  unsigned char ADD3        : 1;
  unsigned char ADD4        : 1;
  unsigned char ADD5        : 1;
  unsigned char ADD6        : 1;
  unsigned char ADD7        : 1;
} __BITS_I2C1_OARL;
#endif
//__IO_REG8_BIT(I2C1_OARL,   0x5213, __READ_WRITE, __BITS_I2C1_OARL);
unsigned char I2C1_OARL; //0x5213 __READ_WRITE
__BITS_I2C1_OARL I2C1_OARL_bit;

/* I2C1 own address register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char ADD8        : 1;
  unsigned char ADD9        : 1;
  unsigned char             : 3;
  unsigned char ADDCONF     : 1;
  unsigned char ADDMODE     : 1;
} __BITS_I2C1_OARH;
#endif
//__IO_REG8_BIT(I2C1_OARH,   0x5214, __READ_WRITE, __BITS_I2C1_OARH);
unsigned char I2C1_OARH; //0x5214 __READ_WRITE
__BITS_I2C1_OARH I2C1_OARH_bit;

/* I2C1 own address register for dual mode */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ENDUAL      : 1;
  unsigned char ADD21       : 1;
  unsigned char ADD22       : 1;
  unsigned char ADD23       : 1;
  unsigned char ADD24       : 1;
  unsigned char ADD25       : 1;
  unsigned char ADD26       : 1;
  unsigned char ADD27       : 1;
} __BITS_I2C1_OAR2;
#endif
//__IO_REG8_BIT(I2C1_OAR2,   0x5215, __READ_WRITE, __BITS_I2C1_OAR2);
unsigned char I2C1_OAR2; //0x5215 __READ_WRITE
__BITS_I2C1_OAR2 I2C1_OAR2_bit;

/* I2C1 data register */
//__IO_REG8    (I2C1_DR,     0x5216, __READ_WRITE);
unsigned char I2C1_DR; //0x5216 __READ_WRITE
/* I2C1 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SB          : 1;
  unsigned char ADDR        : 1;
  unsigned char BTF         : 1;
  unsigned char ADD10       : 1;
  unsigned char STOPF       : 1;
  unsigned char             : 1;
  unsigned char RXNE        : 1;
  unsigned char TXE         : 1;
} __BITS_I2C1_SR1;
#endif
//__IO_REG8_BIT(I2C1_SR1,    0x5217, __READ, __BITS_I2C1_SR1);
unsigned char I2C1_SR1; //0x5217 __READ
__BITS_I2C1_SR1 I2C1_SR1_bit;

/* I2C1 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BERR        : 1;
  unsigned char ARLO        : 1;
  unsigned char AF          : 1;
  unsigned char OVR         : 1;
  unsigned char PECERR      : 1;
  unsigned char WUFH        : 1;
  unsigned char TIMEOUT     : 1;
  unsigned char SMBALERT    : 1;
} __BITS_I2C1_SR2;
#endif
//__IO_REG8_BIT(I2C1_SR2,    0x5218, __READ_WRITE, __BITS_I2C1_SR2);
unsigned char I2C1_SR2; //0x5218 __READ_WRITE
__BITS_I2C1_SR2 I2C1_SR2_bit;

/* I2C1 status register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MSL         : 1;
  unsigned char BUSY        : 1;
  unsigned char TRA         : 1;
  unsigned char             : 1;
  unsigned char GENCALL     : 1;
  unsigned char SMBDEFAULT  : 1;
  unsigned char SMBHOST     : 1;
} __BITS_I2C1_SR3;
#endif
//__IO_REG8_BIT(I2C1_SR3,    0x5219, __READ, __BITS_I2C1_SR3);
unsigned char I2C1_SR3; //0x5219 __READ
__BITS_I2C1_SR3 I2C1_SR3_bit;

/* I2C1 interrupt control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ITERREN     : 1;
  unsigned char ITEVTEN     : 1;
  unsigned char ITBUFEN     : 1;
  unsigned char DMAEN       : 1;
  unsigned char LAST        : 1;
} __BITS_I2C1_ITR;
#endif
//__IO_REG8_BIT(I2C1_ITR,    0x521A, __READ_WRITE, __BITS_I2C1_ITR);
unsigned char I2C1_ITR; //0x521A __READ_WRITE
__BITS_I2C1_ITR I2C1_ITR_bit;

/* I2C1 clock control register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR0        : 1;
  unsigned char CCR1        : 1;
  unsigned char CCR2        : 1;
  unsigned char CCR3        : 1;
  unsigned char CCR4        : 1;
  unsigned char CCR5        : 1;
  unsigned char CCR6        : 1;
  unsigned char CCR7        : 1;
} __BITS_I2C1_CCRL;
#endif
//__IO_REG8_BIT(I2C1_CCRL,   0x521B, __READ_WRITE, __BITS_I2C1_CCRL);
unsigned char I2C1_CCRL; //0x521B __READ_WRITE
__BITS_I2C1_CCRL I2C1_CCRL_bit;

/* I2C1 clock control register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR8        : 1;
  unsigned char CCR9        : 1;
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char             : 2;
  unsigned char DUTY        : 1;
  unsigned char F_S         : 1;
} __BITS_I2C1_CCRH;
#endif
//__IO_REG8_BIT(I2C1_CCRH,   0x521C, __READ_WRITE, __BITS_I2C1_CCRH);
unsigned char I2C1_CCRH; //0x521C __READ_WRITE
__BITS_I2C1_CCRH I2C1_CCRH_bit;

/* I2C1 TRISE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRISE       : 6;
} __BITS_I2C1_TRISER;
#endif
//__IO_REG8_BIT(I2C1_TRISER, 0x521D, __READ_WRITE, __BITS_I2C1_TRISER);
unsigned char I2C1_TRISER; //0x521D __READ_WRITE
__BITS_I2C1_TRISER I2C1_TRISER_bit;

/* I2C1 packet error checking register */
//__IO_REG8    (I2C1_PECR,   0x521E, __READ_WRITE);
unsigned char I2C1_PECR; //0x521E __READ_WRITE

/*-------------------------------------------------------------------------
 *      I2C1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define I2C1_CR1_PE              I2C1_CR1_bit.PE
#define I2C1_CR1_SMBUS           I2C1_CR1_bit.SMBUS
#define I2C1_CR1_SMBTYPE         I2C1_CR1_bit.SMBTYPE
#define I2C1_CR1_ENARP           I2C1_CR1_bit.ENARP
#define I2C1_CR1_ENPEC           I2C1_CR1_bit.ENPEC
#define I2C1_CR1_ENGC            I2C1_CR1_bit.ENGC
#define I2C1_CR1_NOSTRETCH       I2C1_CR1_bit.NOSTRETCH

#define I2C1_CR2_START           I2C1_CR2_bit.START
#define I2C1_CR2_STOP            I2C1_CR2_bit.STOP
#define I2C1_CR2_ACK             I2C1_CR2_bit.ACK
#define I2C1_CR2_POS             I2C1_CR2_bit.POS
#define I2C1_CR2_PEC             I2C1_CR2_bit.PEC
#define I2C1_CR2_ALERT           I2C1_CR2_bit.ALERT
#define I2C1_CR2_SWRST           I2C1_CR2_bit.SWRST

#define I2C1_FREQR_FREQ          I2C1_FREQR_bit.FREQ

#define I2C1_OARL_ADD0           I2C1_OARL_bit.ADD0
#define I2C1_OARL_ADD1           I2C1_OARL_bit.ADD1
#define I2C1_OARL_ADD2           I2C1_OARL_bit.ADD2
#define I2C1_OARL_ADD3           I2C1_OARL_bit.ADD3
#define I2C1_OARL_ADD4           I2C1_OARL_bit.ADD4
#define I2C1_OARL_ADD5           I2C1_OARL_bit.ADD5
#define I2C1_OARL_ADD6           I2C1_OARL_bit.ADD6
#define I2C1_OARL_ADD7           I2C1_OARL_bit.ADD7

#define I2C1_OARH_ADD8           I2C1_OARH_bit.ADD8
#define I2C1_OARH_ADD9           I2C1_OARH_bit.ADD9
#define I2C1_OARH_ADDCONF        I2C1_OARH_bit.ADDCONF
#define I2C1_OARH_ADDMODE        I2C1_OARH_bit.ADDMODE

#define I2C1_OAR2_ENDUAL         I2C1_OAR2_bit.ENDUAL
#define I2C1_OAR2_ADD21          I2C1_OAR2_bit.ADD21
#define I2C1_OAR2_ADD22          I2C1_OAR2_bit.ADD22
#define I2C1_OAR2_ADD23          I2C1_OAR2_bit.ADD23
#define I2C1_OAR2_ADD24          I2C1_OAR2_bit.ADD24
#define I2C1_OAR2_ADD25          I2C1_OAR2_bit.ADD25
#define I2C1_OAR2_ADD26          I2C1_OAR2_bit.ADD26
#define I2C1_OAR2_ADD27          I2C1_OAR2_bit.ADD27

#define I2C1_SR1_SB              I2C1_SR1_bit.SB
#define I2C1_SR1_ADDR            I2C1_SR1_bit.ADDR
#define I2C1_SR1_BTF             I2C1_SR1_bit.BTF
#define I2C1_SR1_ADD10           I2C1_SR1_bit.ADD10
#define I2C1_SR1_STOPF           I2C1_SR1_bit.STOPF
#define I2C1_SR1_RXNE            I2C1_SR1_bit.RXNE
#define I2C1_SR1_TXE             I2C1_SR1_bit.TXE

#define I2C1_SR2_BERR            I2C1_SR2_bit.BERR
#define I2C1_SR2_ARLO            I2C1_SR2_bit.ARLO
#define I2C1_SR2_AF              I2C1_SR2_bit.AF
#define I2C1_SR2_OVR             I2C1_SR2_bit.OVR
#define I2C1_SR2_PECERR          I2C1_SR2_bit.PECERR
#define I2C1_SR2_WUFH            I2C1_SR2_bit.WUFH
#define I2C1_SR2_TIMEOUT         I2C1_SR2_bit.TIMEOUT
#define I2C1_SR2_SMBALERT        I2C1_SR2_bit.SMBALERT

#define I2C1_SR3_MSL             I2C1_SR3_bit.MSL
#define I2C1_SR3_BUSY            I2C1_SR3_bit.BUSY
#define I2C1_SR3_TRA             I2C1_SR3_bit.TRA
#define I2C1_SR3_GENCALL         I2C1_SR3_bit.GENCALL
#define I2C1_SR3_SMBDEFAULT      I2C1_SR3_bit.SMBDEFAULT
#define I2C1_SR3_SMBHOST         I2C1_SR3_bit.SMBHOST

#define I2C1_ITR_ITERREN         I2C1_ITR_bit.ITERREN
#define I2C1_ITR_ITEVTEN         I2C1_ITR_bit.ITEVTEN
#define I2C1_ITR_ITBUFEN         I2C1_ITR_bit.ITBUFEN
#define I2C1_ITR_DMAEN           I2C1_ITR_bit.DMAEN
#define I2C1_ITR_LAST            I2C1_ITR_bit.LAST

#define I2C1_CCRL_CCR0           I2C1_CCRL_bit.CCR0
#define I2C1_CCRL_CCR1           I2C1_CCRL_bit.CCR1
#define I2C1_CCRL_CCR2           I2C1_CCRL_bit.CCR2
#define I2C1_CCRL_CCR3           I2C1_CCRL_bit.CCR3
#define I2C1_CCRL_CCR4           I2C1_CCRL_bit.CCR4
#define I2C1_CCRL_CCR5           I2C1_CCRL_bit.CCR5
#define I2C1_CCRL_CCR6           I2C1_CCRL_bit.CCR6
#define I2C1_CCRL_CCR7           I2C1_CCRL_bit.CCR7

#define I2C1_CCRH_CCR8           I2C1_CCRH_bit.CCR8
#define I2C1_CCRH_CCR9           I2C1_CCRH_bit.CCR9
#define I2C1_CCRH_CCR10          I2C1_CCRH_bit.CCR10
#define I2C1_CCRH_CCR11          I2C1_CCRH_bit.CCR11
#define I2C1_CCRH_DUTY           I2C1_CCRH_bit.DUTY
#define I2C1_CCRH_F_S            I2C1_CCRH_bit.F_S

#define I2C1_TRISER_TRISE        I2C1_TRISER_bit.TRISE

#endif

/*-------------------------------------------------------------------------
 *      I2C1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_I2C1_CR1_PE         0x01
#define MASK_I2C1_CR1_SMBUS      0x02
#define MASK_I2C1_CR1_SMBTYPE    0x08
#define MASK_I2C1_CR1_ENARP      0x10
#define MASK_I2C1_CR1_ENPEC      0x20
#define MASK_I2C1_CR1_ENGC       0x40
#define MASK_I2C1_CR1_NOSTRETCH  0x80

#define MASK_I2C1_CR2_START      0x01
#define MASK_I2C1_CR2_STOP       0x02
#define MASK_I2C1_CR2_ACK        0x04
#define MASK_I2C1_CR2_POS        0x08
#define MASK_I2C1_CR2_PEC        0x10
#define MASK_I2C1_CR2_ALERT      0x20
#define MASK_I2C1_CR2_SWRST      0x80

#define MASK_I2C1_FREQR_FREQ     0x3F

#define MASK_I2C1_OARL_ADD0      0x01
#define MASK_I2C1_OARL_ADD1      0x02
#define MASK_I2C1_OARL_ADD2      0x04
#define MASK_I2C1_OARL_ADD3      0x08
#define MASK_I2C1_OARL_ADD4      0x10
#define MASK_I2C1_OARL_ADD5      0x20
#define MASK_I2C1_OARL_ADD6      0x40
#define MASK_I2C1_OARL_ADD7      0x80

#define MASK_I2C1_OARH_ADD8      0x02
#define MASK_I2C1_OARH_ADD9      0x04
#define MASK_I2C1_OARH_ADDCONF   0x40
#define MASK_I2C1_OARH_ADDMODE   0x80

#define MASK_I2C1_OAR2_ENDUAL    0x01
#define MASK_I2C1_OAR2_ADD21     0x02
#define MASK_I2C1_OAR2_ADD22     0x04
#define MASK_I2C1_OAR2_ADD23     0x08
#define MASK_I2C1_OAR2_ADD24     0x10
#define MASK_I2C1_OAR2_ADD25     0x20
#define MASK_I2C1_OAR2_ADD26     0x40
#define MASK_I2C1_OAR2_ADD27     0x80

#define MASK_I2C1_SR1_SB         0x01
#define MASK_I2C1_SR1_ADDR       0x02
#define MASK_I2C1_SR1_BTF        0x04
#define MASK_I2C1_SR1_ADD10      0x08
#define MASK_I2C1_SR1_STOPF      0x10
#define MASK_I2C1_SR1_RXNE       0x40
#define MASK_I2C1_SR1_TXE        0x80

#define MASK_I2C1_SR2_BERR       0x01
#define MASK_I2C1_SR2_ARLO       0x02
#define MASK_I2C1_SR2_AF         0x04
#define MASK_I2C1_SR2_OVR        0x08
#define MASK_I2C1_SR2_PECERR     0x10
#define MASK_I2C1_SR2_WUFH       0x20
#define MASK_I2C1_SR2_TIMEOUT    0x40
#define MASK_I2C1_SR2_SMBALERT   0x80

#define MASK_I2C1_SR3_MSL        0x01
#define MASK_I2C1_SR3_BUSY       0x02
#define MASK_I2C1_SR3_TRA        0x04
#define MASK_I2C1_SR3_GENCALL    0x10
#define MASK_I2C1_SR3_SMBDEFAULT 0x20
#define MASK_I2C1_SR3_SMBHOST    0x40

#define MASK_I2C1_ITR_ITERREN    0x01
#define MASK_I2C1_ITR_ITEVTEN    0x02
#define MASK_I2C1_ITR_ITBUFEN    0x04
#define MASK_I2C1_ITR_DMAEN      0x08
#define MASK_I2C1_ITR_LAST       0x10

#define MASK_I2C1_CCRL_CCR0      0x01
#define MASK_I2C1_CCRL_CCR1      0x02
#define MASK_I2C1_CCRL_CCR2      0x04
#define MASK_I2C1_CCRL_CCR3      0x08
#define MASK_I2C1_CCRL_CCR4      0x10
#define MASK_I2C1_CCRL_CCR5      0x20
#define MASK_I2C1_CCRL_CCR6      0x40
#define MASK_I2C1_CCRL_CCR7      0x80

#define MASK_I2C1_CCRH_CCR8      0x01
#define MASK_I2C1_CCRH_CCR9      0x02
#define MASK_I2C1_CCRH_CCR10     0x04
#define MASK_I2C1_CCRH_CCR11     0x08
#define MASK_I2C1_CCRH_DUTY      0x40
#define MASK_I2C1_CCRH_F_S       0x80

#define MASK_I2C1_TRISER_TRISE   0x3F


/*-------------------------------------------------------------------------
 *      USART1 register definitions
 *-----------------------------------------------------------------------*/
/* USART1 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PE          : 1;
  unsigned char FE          : 1;
  unsigned char NF          : 1;
  unsigned char OR          : 1;
  unsigned char IDLE        : 1;
  unsigned char RXNE        : 1;
  unsigned char TC          : 1;
  unsigned char TXE         : 1;
} __BITS_USART1_SR;
#endif
//__IO_REG8_BIT(USART1_SR,   0x5230, __READ, __BITS_USART1_SR);
unsigned char USART1_SR; //0x5230 __READ
__BITS_USART1_SR USART1_SR_bit;

/* USART1 data register */
//__IO_REG8    (USART1_DR,   0x5231, __READ_WRITE);
unsigned char USART1_DR; //0x5231 __READ_WRITE
/* USART1 baud rate register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char USART_DIV4  : 1;
  unsigned char USART_DIV5  : 1;
  unsigned char USART_DIV6  : 1;
  unsigned char USART_DIV7  : 1;
  unsigned char USART_DIV8  : 1;
  unsigned char USART_DIV9  : 1;
  unsigned char USART_DIV10 : 1;
  unsigned char USART_DIV11 : 1;
} __BITS_USART1_BRR1;
#endif
//__IO_REG8_BIT(USART1_BRR1, 0x5232, __READ_WRITE, __BITS_USART1_BRR1);
unsigned char USART1_BRR1; //0x5232 __READ_WRITE
__BITS_USART1_BRR1 USART1_BRR1_bit;

/* USART1 baud rate register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char USART_DIV0  : 1;
  unsigned char USART_DIV1  : 1;
  unsigned char USART_DIV2  : 1;
  unsigned char USART_DIV3  : 1;
  unsigned char USART_DIV12 : 1;
  unsigned char USART_DIV13 : 1;
  unsigned char USART_DIV14 : 1;
  unsigned char USART_DIV15 : 1;
} __BITS_USART1_BRR2;
#endif
//__IO_REG8_BIT(USART1_BRR2, 0x5233, __READ_WRITE, __BITS_USART1_BRR2);
unsigned char USART1_BRR2; //0x5233 __READ_WRITE
__BITS_USART1_BRR2 USART1_BRR2_bit;

/* USART1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PIEN        : 1;
  unsigned char PS          : 1;
  unsigned char PCEN        : 1;
  unsigned char WAKE        : 1;
  unsigned char M           : 1;
  unsigned char USARTD      : 1;
  unsigned char T8          : 1;
  unsigned char R8          : 1;
} __BITS_USART1_CR1;
#endif
//__IO_REG8_BIT(USART1_CR1,  0x5234, __READ_WRITE, __BITS_USART1_CR1);
unsigned char USART1_CR1; //0x5234 __READ_WRITE
__BITS_USART1_CR1 USART1_CR1_bit;

/* USART1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SBK         : 1;
  unsigned char RWU         : 1;
  unsigned char REN         : 1;
  unsigned char TEN         : 1;
  unsigned char ILIEN       : 1;
  unsigned char RIEN        : 1;
  unsigned char TCIEN       : 1;
  unsigned char TIEN        : 1;
} __BITS_USART1_CR2;
#endif
//__IO_REG8_BIT(USART1_CR2,  0x5235, __READ_WRITE, __BITS_USART1_CR2);
unsigned char USART1_CR2; //0x5235 __READ_WRITE
__BITS_USART1_CR2 USART1_CR2_bit;

/* USART1 control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LBCL        : 1;
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char CLKEN       : 1;
  unsigned char STOP0       : 1;
  unsigned char STOP1       : 1;
} __BITS_USART1_CR3;
#endif
//__IO_REG8_BIT(USART1_CR3,  0x5236, __READ_WRITE, __BITS_USART1_CR3);
unsigned char USART1_CR3; //0x5236 __READ_WRITE
__BITS_USART1_CR3 USART1_CR3_bit;

/* USART1 control register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD0        : 1;
  unsigned char ADD1        : 1;
  unsigned char ADD2        : 1;
  unsigned char ADD3        : 1;
} __BITS_USART1_CR4;
#endif
//__IO_REG8_BIT(USART1_CR4,  0x5237, __READ_WRITE, __BITS_USART1_CR4);
unsigned char USART1_CR4; //0x5237 __READ_WRITE
__BITS_USART1_CR4 USART1_CR4_bit;

/* USART1 control register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EIE         : 1;
  unsigned char IREN        : 1;
  unsigned char IRLP        : 1;
  unsigned char HDSEL       : 1;
  unsigned char NACK        : 1;
  unsigned char SCEN        : 1;
  unsigned char DMAR        : 1;
  unsigned char DMAT        : 1;
} __BITS_USART1_CR5;
#endif
//__IO_REG8_BIT(USART1_CR5,  0x5238, __READ_WRITE, __BITS_USART1_CR5);
unsigned char USART1_CR5; //0x5238 __READ_WRITE
__BITS_USART1_CR5 USART1_CR5_bit;

/* USART1 guard time register */
//__IO_REG8    (USART1_GTR,  0x5239, __READ_WRITE);
unsigned char USART1_GTR; //0x5239 __READ_WRITE
/* USART1 prescaler register */
//__IO_REG8    (USART1_PSCR, 0x523A, __READ_WRITE);
unsigned char USART1_PSCR; //0x523A __READ_WRITE

/*-------------------------------------------------------------------------
 *      USART1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define USART1_SR_PE             USART1_SR_bit.PE
#define USART1_SR_FE             USART1_SR_bit.FE
#define USART1_SR_NF             USART1_SR_bit.NF
#define USART1_SR_OR             USART1_SR_bit.OR
#define USART1_SR_IDLE           USART1_SR_bit.IDLE
#define USART1_SR_RXNE           USART1_SR_bit.RXNE
#define USART1_SR_TC             USART1_SR_bit.TC
#define USART1_SR_TXE            USART1_SR_bit.TXE

#define USART1_BRR1_USART_DIV4   USART1_BRR1_bit.USART_DIV4
#define USART1_BRR1_USART_DIV5   USART1_BRR1_bit.USART_DIV5
#define USART1_BRR1_USART_DIV6   USART1_BRR1_bit.USART_DIV6
#define USART1_BRR1_USART_DIV7   USART1_BRR1_bit.USART_DIV7
#define USART1_BRR1_USART_DIV8   USART1_BRR1_bit.USART_DIV8
#define USART1_BRR1_USART_DIV9   USART1_BRR1_bit.USART_DIV9
#define USART1_BRR1_USART_DIV10  USART1_BRR1_bit.USART_DIV10
#define USART1_BRR1_USART_DIV11  USART1_BRR1_bit.USART_DIV11

#define USART1_BRR2_USART_DIV0   USART1_BRR2_bit.USART_DIV0
#define USART1_BRR2_USART_DIV1   USART1_BRR2_bit.USART_DIV1
#define USART1_BRR2_USART_DIV2   USART1_BRR2_bit.USART_DIV2
#define USART1_BRR2_USART_DIV3   USART1_BRR2_bit.USART_DIV3
#define USART1_BRR2_USART_DIV12  USART1_BRR2_bit.USART_DIV12
#define USART1_BRR2_USART_DIV13  USART1_BRR2_bit.USART_DIV13
#define USART1_BRR2_USART_DIV14  USART1_BRR2_bit.USART_DIV14
#define USART1_BRR2_USART_DIV15  USART1_BRR2_bit.USART_DIV15

#define USART1_CR1_PIEN          USART1_CR1_bit.PIEN
#define USART1_CR1_PS            USART1_CR1_bit.PS
#define USART1_CR1_PCEN          USART1_CR1_bit.PCEN
#define USART1_CR1_WAKE          USART1_CR1_bit.WAKE
#define USART1_CR1_M             USART1_CR1_bit.M
#define USART1_CR1_USARTD        USART1_CR1_bit.USARTD
#define USART1_CR1_T8            USART1_CR1_bit.T8
#define USART1_CR1_R8            USART1_CR1_bit.R8

#define USART1_CR2_SBK           USART1_CR2_bit.SBK
#define USART1_CR2_RWU           USART1_CR2_bit.RWU
#define USART1_CR2_REN           USART1_CR2_bit.REN
#define USART1_CR2_TEN           USART1_CR2_bit.TEN
#define USART1_CR2_ILIEN         USART1_CR2_bit.ILIEN
#define USART1_CR2_RIEN          USART1_CR2_bit.RIEN
#define USART1_CR2_TCIEN         USART1_CR2_bit.TCIEN
#define USART1_CR2_TIEN          USART1_CR2_bit.TIEN

#define USART1_CR3_LBCL          USART1_CR3_bit.LBCL
#define USART1_CR3_CPHA          USART1_CR3_bit.CPHA
#define USART1_CR3_CPOL          USART1_CR3_bit.CPOL
#define USART1_CR3_CLKEN         USART1_CR3_bit.CLKEN
#define USART1_CR3_STOP0         USART1_CR3_bit.STOP0
#define USART1_CR3_STOP1         USART1_CR3_bit.STOP1

#define USART1_CR4_ADD0          USART1_CR4_bit.ADD0
#define USART1_CR4_ADD1          USART1_CR4_bit.ADD1
#define USART1_CR4_ADD2          USART1_CR4_bit.ADD2
#define USART1_CR4_ADD3          USART1_CR4_bit.ADD3

#define USART1_CR5_EIE           USART1_CR5_bit.EIE
#define USART1_CR5_IREN          USART1_CR5_bit.IREN
#define USART1_CR5_IRLP          USART1_CR5_bit.IRLP
#define USART1_CR5_HDSEL         USART1_CR5_bit.HDSEL
#define USART1_CR5_NACK          USART1_CR5_bit.NACK
#define USART1_CR5_SCEN          USART1_CR5_bit.SCEN
#define USART1_CR5_DMAR          USART1_CR5_bit.DMAR
#define USART1_CR5_DMAT          USART1_CR5_bit.DMAT

#endif

/*-------------------------------------------------------------------------
 *      USART1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_USART1_SR_PE        0x01
#define MASK_USART1_SR_FE        0x02
#define MASK_USART1_SR_NF        0x04
#define MASK_USART1_SR_OR        0x08
#define MASK_USART1_SR_IDLE      0x10
#define MASK_USART1_SR_RXNE      0x20
#define MASK_USART1_SR_TC        0x40
#define MASK_USART1_SR_TXE       0x80

#define MASK_USART1_BRR1_USART_DIV4 0x01
#define MASK_USART1_BRR1_USART_DIV5 0x02
#define MASK_USART1_BRR1_USART_DIV6 0x04
#define MASK_USART1_BRR1_USART_DIV7 0x08
#define MASK_USART1_BRR1_USART_DIV8 0x10
#define MASK_USART1_BRR1_USART_DIV9 0x20
#define MASK_USART1_BRR1_USART_DIV10 0x40
#define MASK_USART1_BRR1_USART_DIV11 0x80

#define MASK_USART1_BRR2_USART_DIV0 0x01
#define MASK_USART1_BRR2_USART_DIV1 0x02
#define MASK_USART1_BRR2_USART_DIV2 0x04
#define MASK_USART1_BRR2_USART_DIV3 0x08
#define MASK_USART1_BRR2_USART_DIV12 0x10
#define MASK_USART1_BRR2_USART_DIV13 0x20
#define MASK_USART1_BRR2_USART_DIV14 0x40
#define MASK_USART1_BRR2_USART_DIV15 0x80

#define MASK_USART1_CR1_PIEN     0x01
#define MASK_USART1_CR1_PS       0x02
#define MASK_USART1_CR1_PCEN     0x04
#define MASK_USART1_CR1_WAKE     0x08
#define MASK_USART1_CR1_M        0x10
#define MASK_USART1_CR1_USARTD   0x20
#define MASK_USART1_CR1_T8       0x40
#define MASK_USART1_CR1_R8       0x80

#define MASK_USART1_CR2_SBK      0x01
#define MASK_USART1_CR2_RWU      0x02
#define MASK_USART1_CR2_REN      0x04
#define MASK_USART1_CR2_TEN      0x08
#define MASK_USART1_CR2_ILIEN    0x10
#define MASK_USART1_CR2_RIEN     0x20
#define MASK_USART1_CR2_TCIEN    0x40
#define MASK_USART1_CR2_TIEN     0x80

#define MASK_USART1_CR3_LBCL     0x01
#define MASK_USART1_CR3_CPHA     0x02
#define MASK_USART1_CR3_CPOL     0x04
#define MASK_USART1_CR3_CLKEN    0x08
#define MASK_USART1_CR3_STOP0    0x10
#define MASK_USART1_CR3_STOP1    0x20

#define MASK_USART1_CR4_ADD0     0x01
#define MASK_USART1_CR4_ADD1     0x02
#define MASK_USART1_CR4_ADD2     0x04
#define MASK_USART1_CR4_ADD3     0x08

#define MASK_USART1_CR5_EIE      0x01
#define MASK_USART1_CR5_IREN     0x02
#define MASK_USART1_CR5_IRLP     0x04
#define MASK_USART1_CR5_HDSEL    0x08
#define MASK_USART1_CR5_NACK     0x10
#define MASK_USART1_CR5_SCEN     0x20
#define MASK_USART1_CR5_DMAR     0x40
#define MASK_USART1_CR5_DMAT     0x80


/*-------------------------------------------------------------------------
 *      TIM2 register definitions
 *-----------------------------------------------------------------------*/
/* TIM2 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char DIR         : 1;
  unsigned char CMS         : 2;
  unsigned char ARPE        : 1;
} __BITS_TIM2_CR1;
#endif
//__IO_REG8_BIT(TIM2_CR1,    0x5250, __READ_WRITE, __BITS_TIM2_CR1);
unsigned char TIM2_CR1; //0x5250 __READ_WRITE
__BITS_TIM2_CR1 TIM2_CR1_bit;

/* TIM2 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 3;
  unsigned char CCDS        : 1;
  unsigned char MMS         : 3;
  unsigned char TI1S        : 1;
} __BITS_TIM2_CR2;
#endif
//__IO_REG8_BIT(TIM2_CR2,    0x5251, __READ_WRITE, __BITS_TIM2_CR2);
unsigned char TIM2_CR2; //0x5251 __READ_WRITE
__BITS_TIM2_CR2 TIM2_CR2_bit;

/* TIM2 Slave mode control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char TS          : 4;
  unsigned char MSM         : 1;
} __BITS_TIM2_SMCR;
#endif
//__IO_REG8_BIT(TIM2_SMCR,   0x5252, __READ_WRITE, __BITS_TIM2_SMCR);
unsigned char TIM2_SMCR; //0x5252 __READ_WRITE
__BITS_TIM2_SMCR TIM2_SMCR_bit;

/* TIM2 external trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ETF         : 4;
  unsigned char ETPS        : 2;
  unsigned char ECE         : 1;
  unsigned char ETP         : 1;
} __BITS_TIM2_ETR;
#endif
//__IO_REG8_BIT(TIM2_ETR,    0x5253, __READ_WRITE, __BITS_TIM2_ETR);
unsigned char TIM2_ETR; //0x5253 __READ_WRITE
__BITS_TIM2_ETR TIM2_ETR_bit;

/* TIM2 DMA1 request enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UDE         : 1;
  unsigned char CC1DE       : 1;
  unsigned char CC2DE       : 1;
} __BITS_TIM2_DER;
#endif
//__IO_REG8_BIT(TIM2_DER,    0x5254, __READ_WRITE, __BITS_TIM2_DER);
unsigned char TIM2_DER; //0x5254 __READ_WRITE
__BITS_TIM2_DER TIM2_DER_bit;

/* TIM2 interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char             : 3;
  unsigned char TIE         : 1;
  unsigned char BIE         : 1;
} __BITS_TIM2_IER;
#endif
//__IO_REG8_BIT(TIM2_IER,    0x5255, __READ_WRITE, __BITS_TIM2_IER);
unsigned char TIM2_IER; //0x5255 __READ_WRITE
__BITS_TIM2_IER TIM2_IER_bit;

/* TIM2 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char             : 3;
  unsigned char TIF         : 1;
  unsigned char BIF         : 1;
} __BITS_TIM2_SR1;
#endif
//__IO_REG8_BIT(TIM2_SR1,    0x5256, __READ_WRITE, __BITS_TIM2_SR1);
unsigned char TIM2_SR1; //0x5256 __READ_WRITE
__BITS_TIM2_SR1 TIM2_SR1_bit;

/* TIM2 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
} __BITS_TIM2_SR2;
#endif
//__IO_REG8_BIT(TIM2_SR2,    0x5257, __READ_WRITE, __BITS_TIM2_SR2);
unsigned char TIM2_SR2; //0x5257 __READ_WRITE
__BITS_TIM2_SR2 TIM2_SR2_bit;

/* TIM2 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char             : 3;
  unsigned char TG          : 1;
  unsigned char BG          : 1;
} __BITS_TIM2_EGR;
#endif
//__IO_REG8_BIT(TIM2_EGR,    0x5258, __WRITE, __BITS_TIM2_EGR);
unsigned char TIM2_EGR; //0x5258 __WRITE
__BITS_TIM2_EGR TIM2_EGR_bit;

/* TIM2 capture/compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char OC1FE       : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
} __BITS_TIM2_CCMR1;
#endif
//__IO_REG8_BIT(TIM2_CCMR1,  0x5259, __READ_WRITE, __BITS_TIM2_CCMR1);
unsigned char TIM2_CCMR1; //0x5259 __READ_WRITE
__BITS_TIM2_CCMR1 TIM2_CCMR1_bit;

/* TIM2 capture/compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char OC2FE       : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
} __BITS_TIM2_CCMR2;
#endif
//__IO_REG8_BIT(TIM2_CCMR2,  0x525A, __READ_WRITE, __BITS_TIM2_CCMR2);
unsigned char TIM2_CCMR2; //0x525A __READ_WRITE
__BITS_TIM2_CCMR2 TIM2_CCMR2_bit;

/* TIM2 capture/compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char             : 2;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
} __BITS_TIM2_CCER1;
#endif
//__IO_REG8_BIT(TIM2_CCER1,  0x525B, __READ_WRITE, __BITS_TIM2_CCER1);
unsigned char TIM2_CCER1; //0x525B __READ_WRITE
__BITS_TIM2_CCER1 TIM2_CCER1_bit;

/* TIM2 counter high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT8        : 1;
  unsigned char CNT9        : 1;
  unsigned char CNT10       : 1;
  unsigned char CNT11       : 1;
  unsigned char CNT12       : 1;
  unsigned char CNT13       : 1;
  unsigned char CNT14       : 1;
  unsigned char CNT15       : 1;
} __BITS_TIM2_CNTRH;
#endif
//__IO_REG8_BIT(TIM2_CNTRH,  0x525C, __READ_WRITE, __BITS_TIM2_CNTRH);
unsigned char TIM2_CNTRH; //0x525C __READ_WRITE
__BITS_TIM2_CNTRH TIM2_CNTRH_bit;

/* TIM2 counter low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT0        : 1;
  unsigned char CNT1        : 1;
  unsigned char CNT2        : 1;
  unsigned char CNT3        : 1;
  unsigned char CNT4        : 1;
  unsigned char CNT5        : 1;
  unsigned char CNT6        : 1;
  unsigned char CNT7        : 1;
} __BITS_TIM2_CNTRL;
#endif
//__IO_REG8_BIT(TIM2_CNTRL,  0x525D, __READ_WRITE, __BITS_TIM2_CNTRL);
unsigned char TIM2_CNTRL; //0x525D __READ_WRITE
__BITS_TIM2_CNTRL TIM2_CNTRL_bit;

/* TIM2 prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 3;
} __BITS_TIM2_PSCR;
#endif
//__IO_REG8_BIT(TIM2_PSCR,   0x525E, __READ_WRITE, __BITS_TIM2_PSCR);
unsigned char TIM2_PSCR; //0x525E __READ_WRITE
__BITS_TIM2_PSCR TIM2_PSCR_bit;

/* TIM2 auto-reload register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR8        : 1;
  unsigned char ARR9        : 1;
  unsigned char ARR10       : 1;
  unsigned char ARR11       : 1;
  unsigned char ARR12       : 1;
  unsigned char ARR13       : 1;
  unsigned char ARR14       : 1;
  unsigned char ARR15       : 1;
} __BITS_TIM2_ARRH;
#endif
//__IO_REG8_BIT(TIM2_ARRH,   0x525F, __READ_WRITE, __BITS_TIM2_ARRH);
unsigned char TIM2_ARRH; //0x525F __READ_WRITE
__BITS_TIM2_ARRH TIM2_ARRH_bit;

/* TIM2 auto-reload register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR0        : 1;
  unsigned char ARR1        : 1;
  unsigned char ARR2        : 1;
  unsigned char ARR3        : 1;
  unsigned char ARR4        : 1;
  unsigned char ARR5        : 1;
  unsigned char ARR6        : 1;
  unsigned char ARR7        : 1;
} __BITS_TIM2_ARRL;
#endif
//__IO_REG8_BIT(TIM2_ARRL,   0x5260, __READ_WRITE, __BITS_TIM2_ARRL);
unsigned char TIM2_ARRL; //0x5260 __READ_WRITE
__BITS_TIM2_ARRL TIM2_ARRL_bit;

/* TIM2 capture/compare register 1 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR18       : 1;
  unsigned char CCR19       : 1;
  unsigned char CCR110      : 1;
  unsigned char CCR111      : 1;
  unsigned char CCR112      : 1;
  unsigned char CCR113      : 1;
  unsigned char CCR114      : 1;
  unsigned char CCR115      : 1;
} __BITS_TIM2_CCR1H;
#endif
//__IO_REG8_BIT(TIM2_CCR1H,  0x5261, __READ_WRITE, __BITS_TIM2_CCR1H);
unsigned char TIM2_CCR1H; //0x5261 __READ_WRITE
__BITS_TIM2_CCR1H TIM2_CCR1H_bit;

/* TIM2 capture/compare register 1 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM2_CCR1L;
#endif
//__IO_REG8_BIT(TIM2_CCR1L,  0x5262, __READ_WRITE, __BITS_TIM2_CCR1L);
unsigned char TIM2_CCR1L; //0x5262 __READ_WRITE
__BITS_TIM2_CCR1L TIM2_CCR1L_bit;

/* TIM2 capture/compare register 2 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR28       : 1;
  unsigned char CCR29       : 1;
  unsigned char CCR210      : 1;
  unsigned char CCR211      : 1;
  unsigned char CCR212      : 1;
  unsigned char CCR213      : 1;
  unsigned char CCR214      : 1;
  unsigned char CCR215      : 1;
} __BITS_TIM2_CCR2H;
#endif
//__IO_REG8_BIT(TIM2_CCR2H,  0x5263, __READ_WRITE, __BITS_TIM2_CCR2H);
unsigned char TIM2_CCR2H; //0x5263 __READ_WRITE
__BITS_TIM2_CCR2H TIM2_CCR2H_bit;

/* TIM2 capture/compare register 2 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM2_CCR2L;
#endif
//__IO_REG8_BIT(TIM2_CCR2L,  0x5264, __READ_WRITE, __BITS_TIM2_CCR2L);
unsigned char TIM2_CCR2L; //0x5264 __READ_WRITE
__BITS_TIM2_CCR2L TIM2_CCR2L_bit;

/* TIM2 break register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LOCK        : 2;
  unsigned char OSSI        : 1;
  unsigned char             : 1;
  unsigned char BKE         : 1;
  unsigned char BKP         : 1;
  unsigned char AOE         : 1;
  unsigned char MOE         : 1;
} __BITS_TIM2_BKR;
#endif
//__IO_REG8_BIT(TIM2_BKR,    0x5265, __READ_WRITE, __BITS_TIM2_BKR);
unsigned char TIM2_BKR; //0x5265 __READ_WRITE
__BITS_TIM2_BKR TIM2_BKR_bit;

/* TIM2 output idle state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char OIS1        : 1;
  unsigned char             : 1;
  unsigned char OIS2        : 1;
} __BITS_TIM2_OISR;
#endif
//__IO_REG8_BIT(TIM2_OISR,   0x5266, __READ_WRITE, __BITS_TIM2_OISR);
unsigned char TIM2_OISR; //0x5266 __READ_WRITE
__BITS_TIM2_OISR TIM2_OISR_bit;


/*-------------------------------------------------------------------------
 *      TIM2 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM2_CR1_CEN             TIM2_CR1_bit.CEN
#define TIM2_CR1_UDIS            TIM2_CR1_bit.UDIS
#define TIM2_CR1_URS             TIM2_CR1_bit.URS
#define TIM2_CR1_OPM             TIM2_CR1_bit.OPM
#define TIM2_CR1_DIR             TIM2_CR1_bit.DIR
#define TIM2_CR1_CMS             TIM2_CR1_bit.CMS
#define TIM2_CR1_ARPE            TIM2_CR1_bit.ARPE

#define TIM2_CR2_CCDS            TIM2_CR2_bit.CCDS
#define TIM2_CR2_MMS             TIM2_CR2_bit.MMS
#define TIM2_CR2_TI1S            TIM2_CR2_bit.TI1S

#define TIM2_SMCR_SMS            TIM2_SMCR_bit.SMS
#define TIM2_SMCR_TS             TIM2_SMCR_bit.TS
#define TIM2_SMCR_MSM            TIM2_SMCR_bit.MSM

#define TIM2_ETR_ETF             TIM2_ETR_bit.ETF
#define TIM2_ETR_ETPS            TIM2_ETR_bit.ETPS
#define TIM2_ETR_ECE             TIM2_ETR_bit.ECE
#define TIM2_ETR_ETP             TIM2_ETR_bit.ETP

#define TIM2_DER_UDE             TIM2_DER_bit.UDE
#define TIM2_DER_CC1DE           TIM2_DER_bit.CC1DE
#define TIM2_DER_CC2DE           TIM2_DER_bit.CC2DE

#define TIM2_IER_UIE             TIM2_IER_bit.UIE
#define TIM2_IER_CC1IE           TIM2_IER_bit.CC1IE
#define TIM2_IER_CC2IE           TIM2_IER_bit.CC2IE
#define TIM2_IER_TIE             TIM2_IER_bit.TIE
#define TIM2_IER_BIE             TIM2_IER_bit.BIE

#define TIM2_SR1_UIF             TIM2_SR1_bit.UIF
#define TIM2_SR1_CC1IF           TIM2_SR1_bit.CC1IF
#define TIM2_SR1_CC2IF           TIM2_SR1_bit.CC2IF
#define TIM2_SR1_TIF             TIM2_SR1_bit.TIF
#define TIM2_SR1_BIF             TIM2_SR1_bit.BIF

#define TIM2_SR2_CC1OF           TIM2_SR2_bit.CC1OF
#define TIM2_SR2_CC2OF           TIM2_SR2_bit.CC2OF

#define TIM2_EGR_UG              TIM2_EGR_bit.UG
#define TIM2_EGR_CC1G            TIM2_EGR_bit.CC1G
#define TIM2_EGR_CC2G            TIM2_EGR_bit.CC2G
#define TIM2_EGR_TG              TIM2_EGR_bit.TG
#define TIM2_EGR_BG              TIM2_EGR_bit.BG

#define TIM2_CCMR1_CC1S          TIM2_CCMR1_bit.CC1S
#define TIM2_CCMR1_OC1FE         TIM2_CCMR1_bit.OC1FE
#define TIM2_CCMR1_OC1PE         TIM2_CCMR1_bit.OC1PE
#define TIM2_CCMR1_OC1M          TIM2_CCMR1_bit.OC1M

#define TIM2_CCMR2_CC2S          TIM2_CCMR2_bit.CC2S
#define TIM2_CCMR2_OC2FE         TIM2_CCMR2_bit.OC2FE
#define TIM2_CCMR2_OC2PE         TIM2_CCMR2_bit.OC2PE
#define TIM2_CCMR2_OC2M          TIM2_CCMR2_bit.OC2M

#define TIM2_CCER1_CC1E          TIM2_CCER1_bit.CC1E
#define TIM2_CCER1_CC1P          TIM2_CCER1_bit.CC1P
#define TIM2_CCER1_CC2E          TIM2_CCER1_bit.CC2E
#define TIM2_CCER1_CC2P          TIM2_CCER1_bit.CC2P

#define TIM2_CNTRH_CNT8          TIM2_CNTRH_bit.CNT8
#define TIM2_CNTRH_CNT9          TIM2_CNTRH_bit.CNT9
#define TIM2_CNTRH_CNT10         TIM2_CNTRH_bit.CNT10
#define TIM2_CNTRH_CNT11         TIM2_CNTRH_bit.CNT11
#define TIM2_CNTRH_CNT12         TIM2_CNTRH_bit.CNT12
#define TIM2_CNTRH_CNT13         TIM2_CNTRH_bit.CNT13
#define TIM2_CNTRH_CNT14         TIM2_CNTRH_bit.CNT14
#define TIM2_CNTRH_CNT15         TIM2_CNTRH_bit.CNT15

#define TIM2_CNTRL_CNT0          TIM2_CNTRL_bit.CNT0
#define TIM2_CNTRL_CNT1          TIM2_CNTRL_bit.CNT1
#define TIM2_CNTRL_CNT2          TIM2_CNTRL_bit.CNT2
#define TIM2_CNTRL_CNT3          TIM2_CNTRL_bit.CNT3
#define TIM2_CNTRL_CNT4          TIM2_CNTRL_bit.CNT4
#define TIM2_CNTRL_CNT5          TIM2_CNTRL_bit.CNT5
#define TIM2_CNTRL_CNT6          TIM2_CNTRL_bit.CNT6
#define TIM2_CNTRL_CNT7          TIM2_CNTRL_bit.CNT7

#define TIM2_PSCR_PSC            TIM2_PSCR_bit.PSC

#define TIM2_ARRH_ARR8           TIM2_ARRH_bit.ARR8
#define TIM2_ARRH_ARR9           TIM2_ARRH_bit.ARR9
#define TIM2_ARRH_ARR10          TIM2_ARRH_bit.ARR10
#define TIM2_ARRH_ARR11          TIM2_ARRH_bit.ARR11
#define TIM2_ARRH_ARR12          TIM2_ARRH_bit.ARR12
#define TIM2_ARRH_ARR13          TIM2_ARRH_bit.ARR13
#define TIM2_ARRH_ARR14          TIM2_ARRH_bit.ARR14
#define TIM2_ARRH_ARR15          TIM2_ARRH_bit.ARR15

#define TIM2_ARRL_ARR0           TIM2_ARRL_bit.ARR0
#define TIM2_ARRL_ARR1           TIM2_ARRL_bit.ARR1
#define TIM2_ARRL_ARR2           TIM2_ARRL_bit.ARR2
#define TIM2_ARRL_ARR3           TIM2_ARRL_bit.ARR3
#define TIM2_ARRL_ARR4           TIM2_ARRL_bit.ARR4
#define TIM2_ARRL_ARR5           TIM2_ARRL_bit.ARR5
#define TIM2_ARRL_ARR6           TIM2_ARRL_bit.ARR6
#define TIM2_ARRL_ARR7           TIM2_ARRL_bit.ARR7

#define TIM2_CCR1H_CCR18         TIM2_CCR1H_bit.CCR18
#define TIM2_CCR1H_CCR19         TIM2_CCR1H_bit.CCR19
#define TIM2_CCR1H_CCR110        TIM2_CCR1H_bit.CCR110
#define TIM2_CCR1H_CCR111        TIM2_CCR1H_bit.CCR111
#define TIM2_CCR1H_CCR112        TIM2_CCR1H_bit.CCR112
#define TIM2_CCR1H_CCR113        TIM2_CCR1H_bit.CCR113
#define TIM2_CCR1H_CCR114        TIM2_CCR1H_bit.CCR114
#define TIM2_CCR1H_CCR115        TIM2_CCR1H_bit.CCR115

#define TIM2_CCR1L_CCR10         TIM2_CCR1L_bit.CCR10
#define TIM2_CCR1L_CCR11         TIM2_CCR1L_bit.CCR11
#define TIM2_CCR1L_CCR12         TIM2_CCR1L_bit.CCR12
#define TIM2_CCR1L_CCR13         TIM2_CCR1L_bit.CCR13
#define TIM2_CCR1L_CCR14         TIM2_CCR1L_bit.CCR14
#define TIM2_CCR1L_CCR15         TIM2_CCR1L_bit.CCR15
#define TIM2_CCR1L_CCR16         TIM2_CCR1L_bit.CCR16
#define TIM2_CCR1L_CCR17         TIM2_CCR1L_bit.CCR17

#define TIM2_CCR2H_CCR28         TIM2_CCR2H_bit.CCR28
#define TIM2_CCR2H_CCR29         TIM2_CCR2H_bit.CCR29
#define TIM2_CCR2H_CCR210        TIM2_CCR2H_bit.CCR210
#define TIM2_CCR2H_CCR211        TIM2_CCR2H_bit.CCR211
#define TIM2_CCR2H_CCR212        TIM2_CCR2H_bit.CCR212
#define TIM2_CCR2H_CCR213        TIM2_CCR2H_bit.CCR213
#define TIM2_CCR2H_CCR214        TIM2_CCR2H_bit.CCR214
#define TIM2_CCR2H_CCR215        TIM2_CCR2H_bit.CCR215

#define TIM2_CCR2L_CCR10         TIM2_CCR2L_bit.CCR10
#define TIM2_CCR2L_CCR11         TIM2_CCR2L_bit.CCR11
#define TIM2_CCR2L_CCR12         TIM2_CCR2L_bit.CCR12
#define TIM2_CCR2L_CCR13         TIM2_CCR2L_bit.CCR13
#define TIM2_CCR2L_CCR14         TIM2_CCR2L_bit.CCR14
#define TIM2_CCR2L_CCR15         TIM2_CCR2L_bit.CCR15
#define TIM2_CCR2L_CCR16         TIM2_CCR2L_bit.CCR16
#define TIM2_CCR2L_CCR17         TIM2_CCR2L_bit.CCR17

#define TIM2_BKR_LOCK            TIM2_BKR_bit.LOCK
#define TIM2_BKR_OSSI            TIM2_BKR_bit.OSSI
#define TIM2_BKR_BKE             TIM2_BKR_bit.BKE
#define TIM2_BKR_BKP             TIM2_BKR_bit.BKP
#define TIM2_BKR_AOE             TIM2_BKR_bit.AOE
#define TIM2_BKR_MOE             TIM2_BKR_bit.MOE

#define TIM2_OISR_OIS1           TIM2_OISR_bit.OIS1
#define TIM2_OISR_OIS2           TIM2_OISR_bit.OIS2

#endif

/*-------------------------------------------------------------------------
 *      TIM2 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM2_CR1_CEN        0x01
#define MASK_TIM2_CR1_UDIS       0x02
#define MASK_TIM2_CR1_URS        0x04
#define MASK_TIM2_CR1_OPM        0x08
#define MASK_TIM2_CR1_DIR        0x10
#define MASK_TIM2_CR1_CMS        0x60
#define MASK_TIM2_CR1_ARPE       0x80

#define MASK_TIM2_CR2_CCDS       0x08
#define MASK_TIM2_CR2_MMS        0x70
#define MASK_TIM2_CR2_TI1S       0x80

#define MASK_TIM2_SMCR_SMS       0x07
#define MASK_TIM2_SMCR_TS        0x78
#define MASK_TIM2_SMCR_MSM       0x80

#define MASK_TIM2_ETR_ETF        0x0F
#define MASK_TIM2_ETR_ETPS       0x30
#define MASK_TIM2_ETR_ECE        0x40
#define MASK_TIM2_ETR_ETP        0x80

#define MASK_TIM2_DER_UDE        0x01
#define MASK_TIM2_DER_CC1DE      0x02
#define MASK_TIM2_DER_CC2DE      0x04

#define MASK_TIM2_IER_UIE        0x01
#define MASK_TIM2_IER_CC1IE      0x02
#define MASK_TIM2_IER_CC2IE      0x04
#define MASK_TIM2_IER_TIE        0x40
#define MASK_TIM2_IER_BIE        0x80

#define MASK_TIM2_SR1_UIF        0x01
#define MASK_TIM2_SR1_CC1IF      0x02
#define MASK_TIM2_SR1_CC2IF      0x04
#define MASK_TIM2_SR1_TIF        0x40
#define MASK_TIM2_SR1_BIF        0x80

#define MASK_TIM2_SR2_CC1OF      0x02
#define MASK_TIM2_SR2_CC2OF      0x04

#define MASK_TIM2_EGR_UG         0x01
#define MASK_TIM2_EGR_CC1G       0x02
#define MASK_TIM2_EGR_CC2G       0x04
#define MASK_TIM2_EGR_TG         0x40
#define MASK_TIM2_EGR_BG         0x80

#define MASK_TIM2_CCMR1_CC1S     0x03
#define MASK_TIM2_CCMR1_OC1FE    0x04
#define MASK_TIM2_CCMR1_OC1PE    0x08
#define MASK_TIM2_CCMR1_OC1M     0x70

#define MASK_TIM2_CCMR2_CC2S     0x03
#define MASK_TIM2_CCMR2_OC2FE    0x04
#define MASK_TIM2_CCMR2_OC2PE    0x08
#define MASK_TIM2_CCMR2_OC2M     0x70

#define MASK_TIM2_CCER1_CC1E     0x01
#define MASK_TIM2_CCER1_CC1P     0x02
#define MASK_TIM2_CCER1_CC2E     0x10
#define MASK_TIM2_CCER1_CC2P     0x20

#define MASK_TIM2_CNTRH_CNT8     0x01
#define MASK_TIM2_CNTRH_CNT9     0x02
#define MASK_TIM2_CNTRH_CNT10    0x04
#define MASK_TIM2_CNTRH_CNT11    0x08
#define MASK_TIM2_CNTRH_CNT12    0x10
#define MASK_TIM2_CNTRH_CNT13    0x20
#define MASK_TIM2_CNTRH_CNT14    0x40
#define MASK_TIM2_CNTRH_CNT15    0x80

#define MASK_TIM2_CNTRL_CNT0     0x01
#define MASK_TIM2_CNTRL_CNT1     0x02
#define MASK_TIM2_CNTRL_CNT2     0x04
#define MASK_TIM2_CNTRL_CNT3     0x08
#define MASK_TIM2_CNTRL_CNT4     0x10
#define MASK_TIM2_CNTRL_CNT5     0x20
#define MASK_TIM2_CNTRL_CNT6     0x40
#define MASK_TIM2_CNTRL_CNT7     0x80

#define MASK_TIM2_PSCR_PSC       0x07

#define MASK_TIM2_ARRH_ARR8      0x01
#define MASK_TIM2_ARRH_ARR9      0x02
#define MASK_TIM2_ARRH_ARR10     0x04
#define MASK_TIM2_ARRH_ARR11     0x08
#define MASK_TIM2_ARRH_ARR12     0x10
#define MASK_TIM2_ARRH_ARR13     0x20
#define MASK_TIM2_ARRH_ARR14     0x40
#define MASK_TIM2_ARRH_ARR15     0x80

#define MASK_TIM2_ARRL_ARR0      0x01
#define MASK_TIM2_ARRL_ARR1      0x02
#define MASK_TIM2_ARRL_ARR2      0x04
#define MASK_TIM2_ARRL_ARR3      0x08
#define MASK_TIM2_ARRL_ARR4      0x10
#define MASK_TIM2_ARRL_ARR5      0x20
#define MASK_TIM2_ARRL_ARR6      0x40
#define MASK_TIM2_ARRL_ARR7      0x80

#define MASK_TIM2_CCR1H_CCR18    0x01
#define MASK_TIM2_CCR1H_CCR19    0x02
#define MASK_TIM2_CCR1H_CCR110   0x04
#define MASK_TIM2_CCR1H_CCR111   0x08
#define MASK_TIM2_CCR1H_CCR112   0x10
#define MASK_TIM2_CCR1H_CCR113   0x20
#define MASK_TIM2_CCR1H_CCR114   0x40
#define MASK_TIM2_CCR1H_CCR115   0x80

#define MASK_TIM2_CCR1L_CCR10    0x01
#define MASK_TIM2_CCR1L_CCR11    0x02
#define MASK_TIM2_CCR1L_CCR12    0x04
#define MASK_TIM2_CCR1L_CCR13    0x08
#define MASK_TIM2_CCR1L_CCR14    0x10
#define MASK_TIM2_CCR1L_CCR15    0x20
#define MASK_TIM2_CCR1L_CCR16    0x40
#define MASK_TIM2_CCR1L_CCR17    0x80

#define MASK_TIM2_CCR2H_CCR28    0x01
#define MASK_TIM2_CCR2H_CCR29    0x02
#define MASK_TIM2_CCR2H_CCR210   0x04
#define MASK_TIM2_CCR2H_CCR211   0x08
#define MASK_TIM2_CCR2H_CCR212   0x10
#define MASK_TIM2_CCR2H_CCR213   0x20
#define MASK_TIM2_CCR2H_CCR214   0x40
#define MASK_TIM2_CCR2H_CCR215   0x80

#define MASK_TIM2_CCR2L_CCR10    0x01
#define MASK_TIM2_CCR2L_CCR11    0x02
#define MASK_TIM2_CCR2L_CCR12    0x04
#define MASK_TIM2_CCR2L_CCR13    0x08
#define MASK_TIM2_CCR2L_CCR14    0x10
#define MASK_TIM2_CCR2L_CCR15    0x20
#define MASK_TIM2_CCR2L_CCR16    0x40
#define MASK_TIM2_CCR2L_CCR17    0x80

#define MASK_TIM2_BKR_LOCK       0x03
#define MASK_TIM2_BKR_OSSI       0x04
#define MASK_TIM2_BKR_BKE        0x10
#define MASK_TIM2_BKR_BKP        0x20
#define MASK_TIM2_BKR_AOE        0x40
#define MASK_TIM2_BKR_MOE        0x80

#define MASK_TIM2_OISR_OIS1      0x01
#define MASK_TIM2_OISR_OIS2      0x04


/*-------------------------------------------------------------------------
 *      TIM3 register definitions
 *-----------------------------------------------------------------------*/
/* TIM3 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char DIR         : 1;
  unsigned char CMS         : 2;
  unsigned char ARPE        : 1;
} __BITS_TIM3_CR1;
#endif
//__IO_REG8_BIT(TIM3_CR1,    0x5280, __READ_WRITE, __BITS_TIM3_CR1);
unsigned char TIM3_CR1; //0x5280 __READ_WRITE
__BITS_TIM3_CR1 TIM3_CR1_bit;

/* TIM3 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 3;
  unsigned char CCDS        : 1;
  unsigned char MMS         : 3;
  unsigned char TI1S        : 1;
} __BITS_TIM3_CR2;
#endif
//__IO_REG8_BIT(TIM3_CR2,    0x5281, __READ_WRITE, __BITS_TIM3_CR2);
unsigned char TIM3_CR2; //0x5281 __READ_WRITE
__BITS_TIM3_CR2 TIM3_CR2_bit;

/* TIM3 Slave mode control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char TS          : 4;
  unsigned char MSM         : 1;
} __BITS_TIM3_SMCR;
#endif
//__IO_REG8_BIT(TIM3_SMCR,   0x5282, __READ_WRITE, __BITS_TIM3_SMCR);
unsigned char TIM3_SMCR; //0x5282 __READ_WRITE
__BITS_TIM3_SMCR TIM3_SMCR_bit;

/* TIM3 external trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ETF         : 4;
  unsigned char ETPS        : 2;
  unsigned char ECE         : 1;
  unsigned char ETP         : 1;
} __BITS_TIM3_ETR;
#endif
//__IO_REG8_BIT(TIM3_ETR,    0x5283, __READ_WRITE, __BITS_TIM3_ETR);
unsigned char TIM3_ETR; //0x5283 __READ_WRITE
__BITS_TIM3_ETR TIM3_ETR_bit;

/* TIM3 DMA1 request enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UDE         : 1;
  unsigned char CC1DE       : 1;
  unsigned char CC2DE       : 1;
} __BITS_TIM3_DER;
#endif
//__IO_REG8_BIT(TIM3_DER,    0x5284, __READ_WRITE, __BITS_TIM3_DER);
unsigned char TIM3_DER; //0x5284 __READ_WRITE
__BITS_TIM3_DER TIM3_DER_bit;

/* TIM3 interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char             : 3;
  unsigned char TIE         : 1;
  unsigned char BIE         : 1;
} __BITS_TIM3_IER;
#endif
//__IO_REG8_BIT(TIM3_IER,    0x5285, __READ_WRITE, __BITS_TIM3_IER);
unsigned char TIM3_IER; //0x5285 __READ_WRITE
__BITS_TIM3_IER TIM3_IER_bit;

/* TIM3 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char             : 3;
  unsigned char TIF         : 1;
  unsigned char BIF         : 1;
} __BITS_TIM3_SR1;
#endif
//__IO_REG8_BIT(TIM3_SR1,    0x5286, __READ_WRITE, __BITS_TIM3_SR1);
unsigned char TIM3_SR1; //0x5286 __READ_WRITE
__BITS_TIM3_SR1 TIM3_SR1_bit;

/* TIM3 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
} __BITS_TIM3_SR2;
#endif
//__IO_REG8_BIT(TIM3_SR2,    0x5287, __READ_WRITE, __BITS_TIM3_SR2);
unsigned char TIM3_SR2; //0x5287 __READ_WRITE
__BITS_TIM3_SR2 TIM3_SR2_bit;

/* TIM3 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char             : 3;
  unsigned char TG          : 1;
  unsigned char BG          : 1;
} __BITS_TIM3_EGR;
#endif
//__IO_REG8_BIT(TIM3_EGR,    0x5288, __WRITE, __BITS_TIM3_EGR);
unsigned char TIM3_EGR; //0x5288 __WRITE
__BITS_TIM3_EGR TIM3_EGR_bit;

/* TIM3 Capture/Compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char OC1FE       : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
} __BITS_TIM3_CCMR1;
#endif
//__IO_REG8_BIT(TIM3_CCMR1,  0x5289, __READ_WRITE, __BITS_TIM3_CCMR1);
unsigned char TIM3_CCMR1; //0x5289 __READ_WRITE
__BITS_TIM3_CCMR1 TIM3_CCMR1_bit;

/* TIM3 Capture/Compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char OC2FE       : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
} __BITS_TIM3_CCMR2;
#endif
//__IO_REG8_BIT(TIM3_CCMR2,  0x528A, __READ_WRITE, __BITS_TIM3_CCMR2);
unsigned char TIM3_CCMR2; //0x528A __READ_WRITE
__BITS_TIM3_CCMR2 TIM3_CCMR2_bit;

/* TIM3 Capture/Compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char             : 2;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
} __BITS_TIM3_CCER1;
#endif
//__IO_REG8_BIT(TIM3_CCER1,  0x528B, __READ_WRITE, __BITS_TIM3_CCER1);
unsigned char TIM3_CCER1; //0x528B __READ_WRITE
__BITS_TIM3_CCER1 TIM3_CCER1_bit;

/* TIM3 counter high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT8        : 1;
  unsigned char CNT9        : 1;
  unsigned char CNT10       : 1;
  unsigned char CNT11       : 1;
  unsigned char CNT12       : 1;
  unsigned char CNT13       : 1;
  unsigned char CNT14       : 1;
  unsigned char CNT15       : 1;
} __BITS_TIM3_CNTRH;
#endif
//__IO_REG8_BIT(TIM3_CNTRH,  0x528C, __READ_WRITE, __BITS_TIM3_CNTRH);
unsigned char TIM3_CNTRH; //0x528C __READ_WRITE
__BITS_TIM3_CNTRH TIM3_CNTRH_bit;

/* TIM3 counter low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT0        : 1;
  unsigned char CNT1        : 1;
  unsigned char CNT2        : 1;
  unsigned char CNT3        : 1;
  unsigned char CNT4        : 1;
  unsigned char CNT5        : 1;
  unsigned char CNT6        : 1;
  unsigned char CNT7        : 1;
} __BITS_TIM3_CNTRL;
#endif
//__IO_REG8_BIT(TIM3_CNTRL,  0x528D, __READ_WRITE, __BITS_TIM3_CNTRL);
unsigned char TIM3_CNTRL; //0x528D __READ_WRITE
__BITS_TIM3_CNTRL TIM3_CNTRL_bit;

/* TIM3 prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 3;
} __BITS_TIM3_PSCR;
#endif
//__IO_REG8_BIT(TIM3_PSCR,   0x528E, __READ_WRITE, __BITS_TIM3_PSCR);
unsigned char TIM3_PSCR; //0x528E __READ_WRITE
__BITS_TIM3_PSCR TIM3_PSCR_bit;

/* TIM3 Auto-reload register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR8        : 1;
  unsigned char ARR9        : 1;
  unsigned char ARR10       : 1;
  unsigned char ARR11       : 1;
  unsigned char ARR12       : 1;
  unsigned char ARR13       : 1;
  unsigned char ARR14       : 1;
  unsigned char ARR15       : 1;
} __BITS_TIM3_ARRH;
#endif
//__IO_REG8_BIT(TIM3_ARRH,   0x528F, __READ_WRITE, __BITS_TIM3_ARRH);
unsigned char TIM3_ARRH; //0x528F __READ_WRITE
__BITS_TIM3_ARRH TIM3_ARRH_bit;

/* TIM3 Auto-reload register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR0        : 1;
  unsigned char ARR1        : 1;
  unsigned char ARR2        : 1;
  unsigned char ARR3        : 1;
  unsigned char ARR4        : 1;
  unsigned char ARR5        : 1;
  unsigned char ARR6        : 1;
  unsigned char ARR7        : 1;
} __BITS_TIM3_ARRL;
#endif
//__IO_REG8_BIT(TIM3_ARRL,   0x5290, __READ_WRITE, __BITS_TIM3_ARRL);
unsigned char TIM3_ARRL; //0x5290 __READ_WRITE
__BITS_TIM3_ARRL TIM3_ARRL_bit;

/* TIM3 Capture/Compare register 1 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR18       : 1;
  unsigned char CCR19       : 1;
  unsigned char CCR110      : 1;
  unsigned char CCR111      : 1;
  unsigned char CCR112      : 1;
  unsigned char CCR113      : 1;
  unsigned char CCR114      : 1;
  unsigned char CCR115      : 1;
} __BITS_TIM3_CCR1H;
#endif
//__IO_REG8_BIT(TIM3_CCR1H,  0x5291, __READ_WRITE, __BITS_TIM3_CCR1H);
unsigned char TIM3_CCR1H; //0x5291 __READ_WRITE
__BITS_TIM3_CCR1H TIM3_CCR1H_bit;

/* TIM3 Capture/Compare register 1 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM3_CCR1L;
#endif
//__IO_REG8_BIT(TIM3_CCR1L,  0x5292, __READ_WRITE, __BITS_TIM3_CCR1L);
unsigned char TIM3_CCR1L; //0x5292 __READ_WRITE
__BITS_TIM3_CCR1L TIM3_CCR1L_bit;

/* TIM3 Capture/Compare register 2 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR28       : 1;
  unsigned char CCR29       : 1;
  unsigned char CCR210      : 1;
  unsigned char CCR211      : 1;
  unsigned char CCR212      : 1;
  unsigned char CCR213      : 1;
  unsigned char CCR214      : 1;
  unsigned char CCR215      : 1;
} __BITS_TIM3_CCR2H;
#endif
//__IO_REG8_BIT(TIM3_CCR2H,  0x5293, __READ_WRITE, __BITS_TIM3_CCR2H);
unsigned char TIM3_CCR2H; //0x5293 __READ_WRITE
__BITS_TIM3_CCR2H TIM3_CCR2H_bit;

/* TIM3 Capture/Compare register 2 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM3_CCR2L;
#endif
//__IO_REG8_BIT(TIM3_CCR2L,  0x5294, __READ_WRITE, __BITS_TIM3_CCR2L);
unsigned char TIM3_CCR2L; //0x5294 __READ_WRITE
__BITS_TIM3_CCR2L TIM3_CCR2L_bit;

/* TIM3 break register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LOCK        : 2;
  unsigned char OSSI        : 1;
  unsigned char             : 1;
  unsigned char BKE         : 1;
  unsigned char BKP         : 1;
  unsigned char AOE         : 1;
  unsigned char MOE         : 1;
} __BITS_TIM3_BKR;
#endif
//__IO_REG8_BIT(TIM3_BKR,    0x5295, __READ_WRITE, __BITS_TIM3_BKR);
unsigned char TIM3_BKR; //0x5295 __READ_WRITE
__BITS_TIM3_BKR TIM3_BKR_bit;

/* TIM3 output idle state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char OIS1        : 1;
  unsigned char             : 1;
  unsigned char OIS2        : 1;
} __BITS_TIM3_OISR;
#endif
//__IO_REG8_BIT(TIM3_OISR,   0x5296, __READ_WRITE, __BITS_TIM3_OISR);
unsigned char TIM3_OISR; //0x5296 __READ_WRITE
__BITS_TIM3_OISR TIM3_OISR_bit;


/*-------------------------------------------------------------------------
 *      TIM3 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM3_CR1_CEN             TIM3_CR1_bit.CEN
#define TIM3_CR1_UDIS            TIM3_CR1_bit.UDIS
#define TIM3_CR1_URS             TIM3_CR1_bit.URS
#define TIM3_CR1_OPM             TIM3_CR1_bit.OPM
#define TIM3_CR1_DIR             TIM3_CR1_bit.DIR
#define TIM3_CR1_CMS             TIM3_CR1_bit.CMS
#define TIM3_CR1_ARPE            TIM3_CR1_bit.ARPE

#define TIM3_CR2_CCDS            TIM3_CR2_bit.CCDS
#define TIM3_CR2_MMS             TIM3_CR2_bit.MMS
#define TIM3_CR2_TI1S            TIM3_CR2_bit.TI1S

#define TIM3_SMCR_SMS            TIM3_SMCR_bit.SMS
#define TIM3_SMCR_TS             TIM3_SMCR_bit.TS
#define TIM3_SMCR_MSM            TIM3_SMCR_bit.MSM

#define TIM3_ETR_ETF             TIM3_ETR_bit.ETF
#define TIM3_ETR_ETPS            TIM3_ETR_bit.ETPS
#define TIM3_ETR_ECE             TIM3_ETR_bit.ECE
#define TIM3_ETR_ETP             TIM3_ETR_bit.ETP

#define TIM3_DER_UDE             TIM3_DER_bit.UDE
#define TIM3_DER_CC1DE           TIM3_DER_bit.CC1DE
#define TIM3_DER_CC2DE           TIM3_DER_bit.CC2DE

#define TIM3_IER_UIE             TIM3_IER_bit.UIE
#define TIM3_IER_CC1IE           TIM3_IER_bit.CC1IE
#define TIM3_IER_CC2IE           TIM3_IER_bit.CC2IE
#define TIM3_IER_TIE             TIM3_IER_bit.TIE
#define TIM3_IER_BIE             TIM3_IER_bit.BIE

#define TIM3_SR1_UIF             TIM3_SR1_bit.UIF
#define TIM3_SR1_CC1IF           TIM3_SR1_bit.CC1IF
#define TIM3_SR1_CC2IF           TIM3_SR1_bit.CC2IF
#define TIM3_SR1_TIF             TIM3_SR1_bit.TIF
#define TIM3_SR1_BIF             TIM3_SR1_bit.BIF

#define TIM3_SR2_CC1OF           TIM3_SR2_bit.CC1OF
#define TIM3_SR2_CC2OF           TIM3_SR2_bit.CC2OF

#define TIM3_EGR_UG              TIM3_EGR_bit.UG
#define TIM3_EGR_CC1G            TIM3_EGR_bit.CC1G
#define TIM3_EGR_CC2G            TIM3_EGR_bit.CC2G
#define TIM3_EGR_TG              TIM3_EGR_bit.TG
#define TIM3_EGR_BG              TIM3_EGR_bit.BG

#define TIM3_CCMR1_CC1S          TIM3_CCMR1_bit.CC1S
#define TIM3_CCMR1_OC1FE         TIM3_CCMR1_bit.OC1FE
#define TIM3_CCMR1_OC1PE         TIM3_CCMR1_bit.OC1PE
#define TIM3_CCMR1_OC1M          TIM3_CCMR1_bit.OC1M

#define TIM3_CCMR2_CC2S          TIM3_CCMR2_bit.CC2S
#define TIM3_CCMR2_OC2FE         TIM3_CCMR2_bit.OC2FE
#define TIM3_CCMR2_OC2PE         TIM3_CCMR2_bit.OC2PE
#define TIM3_CCMR2_OC2M          TIM3_CCMR2_bit.OC2M

#define TIM3_CCER1_CC1E          TIM3_CCER1_bit.CC1E
#define TIM3_CCER1_CC1P          TIM3_CCER1_bit.CC1P
#define TIM3_CCER1_CC2E          TIM3_CCER1_bit.CC2E
#define TIM3_CCER1_CC2P          TIM3_CCER1_bit.CC2P

#define TIM3_CNTRH_CNT8          TIM3_CNTRH_bit.CNT8
#define TIM3_CNTRH_CNT9          TIM3_CNTRH_bit.CNT9
#define TIM3_CNTRH_CNT10         TIM3_CNTRH_bit.CNT10
#define TIM3_CNTRH_CNT11         TIM3_CNTRH_bit.CNT11
#define TIM3_CNTRH_CNT12         TIM3_CNTRH_bit.CNT12
#define TIM3_CNTRH_CNT13         TIM3_CNTRH_bit.CNT13
#define TIM3_CNTRH_CNT14         TIM3_CNTRH_bit.CNT14
#define TIM3_CNTRH_CNT15         TIM3_CNTRH_bit.CNT15

#define TIM3_CNTRL_CNT0          TIM3_CNTRL_bit.CNT0
#define TIM3_CNTRL_CNT1          TIM3_CNTRL_bit.CNT1
#define TIM3_CNTRL_CNT2          TIM3_CNTRL_bit.CNT2
#define TIM3_CNTRL_CNT3          TIM3_CNTRL_bit.CNT3
#define TIM3_CNTRL_CNT4          TIM3_CNTRL_bit.CNT4
#define TIM3_CNTRL_CNT5          TIM3_CNTRL_bit.CNT5
#define TIM3_CNTRL_CNT6          TIM3_CNTRL_bit.CNT6
#define TIM3_CNTRL_CNT7          TIM3_CNTRL_bit.CNT7

#define TIM3_PSCR_PSC            TIM3_PSCR_bit.PSC

#define TIM3_ARRH_ARR8           TIM3_ARRH_bit.ARR8
#define TIM3_ARRH_ARR9           TIM3_ARRH_bit.ARR9
#define TIM3_ARRH_ARR10          TIM3_ARRH_bit.ARR10
#define TIM3_ARRH_ARR11          TIM3_ARRH_bit.ARR11
#define TIM3_ARRH_ARR12          TIM3_ARRH_bit.ARR12
#define TIM3_ARRH_ARR13          TIM3_ARRH_bit.ARR13
#define TIM3_ARRH_ARR14          TIM3_ARRH_bit.ARR14
#define TIM3_ARRH_ARR15          TIM3_ARRH_bit.ARR15

#define TIM3_ARRL_ARR0           TIM3_ARRL_bit.ARR0
#define TIM3_ARRL_ARR1           TIM3_ARRL_bit.ARR1
#define TIM3_ARRL_ARR2           TIM3_ARRL_bit.ARR2
#define TIM3_ARRL_ARR3           TIM3_ARRL_bit.ARR3
#define TIM3_ARRL_ARR4           TIM3_ARRL_bit.ARR4
#define TIM3_ARRL_ARR5           TIM3_ARRL_bit.ARR5
#define TIM3_ARRL_ARR6           TIM3_ARRL_bit.ARR6
#define TIM3_ARRL_ARR7           TIM3_ARRL_bit.ARR7

#define TIM3_CCR1H_CCR18         TIM3_CCR1H_bit.CCR18
#define TIM3_CCR1H_CCR19         TIM3_CCR1H_bit.CCR19
#define TIM3_CCR1H_CCR110        TIM3_CCR1H_bit.CCR110
#define TIM3_CCR1H_CCR111        TIM3_CCR1H_bit.CCR111
#define TIM3_CCR1H_CCR112        TIM3_CCR1H_bit.CCR112
#define TIM3_CCR1H_CCR113        TIM3_CCR1H_bit.CCR113
#define TIM3_CCR1H_CCR114        TIM3_CCR1H_bit.CCR114
#define TIM3_CCR1H_CCR115        TIM3_CCR1H_bit.CCR115

#define TIM3_CCR1L_CCR10         TIM3_CCR1L_bit.CCR10
#define TIM3_CCR1L_CCR11         TIM3_CCR1L_bit.CCR11
#define TIM3_CCR1L_CCR12         TIM3_CCR1L_bit.CCR12
#define TIM3_CCR1L_CCR13         TIM3_CCR1L_bit.CCR13
#define TIM3_CCR1L_CCR14         TIM3_CCR1L_bit.CCR14
#define TIM3_CCR1L_CCR15         TIM3_CCR1L_bit.CCR15
#define TIM3_CCR1L_CCR16         TIM3_CCR1L_bit.CCR16
#define TIM3_CCR1L_CCR17         TIM3_CCR1L_bit.CCR17

#define TIM3_CCR2H_CCR28         TIM3_CCR2H_bit.CCR28
#define TIM3_CCR2H_CCR29         TIM3_CCR2H_bit.CCR29
#define TIM3_CCR2H_CCR210        TIM3_CCR2H_bit.CCR210
#define TIM3_CCR2H_CCR211        TIM3_CCR2H_bit.CCR211
#define TIM3_CCR2H_CCR212        TIM3_CCR2H_bit.CCR212
#define TIM3_CCR2H_CCR213        TIM3_CCR2H_bit.CCR213
#define TIM3_CCR2H_CCR214        TIM3_CCR2H_bit.CCR214
#define TIM3_CCR2H_CCR215        TIM3_CCR2H_bit.CCR215

#define TIM3_CCR2L_CCR10         TIM3_CCR2L_bit.CCR10
#define TIM3_CCR2L_CCR11         TIM3_CCR2L_bit.CCR11
#define TIM3_CCR2L_CCR12         TIM3_CCR2L_bit.CCR12
#define TIM3_CCR2L_CCR13         TIM3_CCR2L_bit.CCR13
#define TIM3_CCR2L_CCR14         TIM3_CCR2L_bit.CCR14
#define TIM3_CCR2L_CCR15         TIM3_CCR2L_bit.CCR15
#define TIM3_CCR2L_CCR16         TIM3_CCR2L_bit.CCR16
#define TIM3_CCR2L_CCR17         TIM3_CCR2L_bit.CCR17

#define TIM3_BKR_LOCK            TIM3_BKR_bit.LOCK
#define TIM3_BKR_OSSI            TIM3_BKR_bit.OSSI
#define TIM3_BKR_BKE             TIM3_BKR_bit.BKE
#define TIM3_BKR_BKP             TIM3_BKR_bit.BKP
#define TIM3_BKR_AOE             TIM3_BKR_bit.AOE
#define TIM3_BKR_MOE             TIM3_BKR_bit.MOE

#define TIM3_OISR_OIS1           TIM3_OISR_bit.OIS1
#define TIM3_OISR_OIS2           TIM3_OISR_bit.OIS2

#endif

/*-------------------------------------------------------------------------
 *      TIM3 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM3_CR1_CEN        0x01
#define MASK_TIM3_CR1_UDIS       0x02
#define MASK_TIM3_CR1_URS        0x04
#define MASK_TIM3_CR1_OPM        0x08
#define MASK_TIM3_CR1_DIR        0x10
#define MASK_TIM3_CR1_CMS        0x60
#define MASK_TIM3_CR1_ARPE       0x80

#define MASK_TIM3_CR2_CCDS       0x08
#define MASK_TIM3_CR2_MMS        0x70
#define MASK_TIM3_CR2_TI1S       0x80

#define MASK_TIM3_SMCR_SMS       0x07
#define MASK_TIM3_SMCR_TS        0x78
#define MASK_TIM3_SMCR_MSM       0x80

#define MASK_TIM3_ETR_ETF        0x0F
#define MASK_TIM3_ETR_ETPS       0x30
#define MASK_TIM3_ETR_ECE        0x40
#define MASK_TIM3_ETR_ETP        0x80

#define MASK_TIM3_DER_UDE        0x01
#define MASK_TIM3_DER_CC1DE      0x02
#define MASK_TIM3_DER_CC2DE      0x04

#define MASK_TIM3_IER_UIE        0x01
#define MASK_TIM3_IER_CC1IE      0x02
#define MASK_TIM3_IER_CC2IE      0x04
#define MASK_TIM3_IER_TIE        0x40
#define MASK_TIM3_IER_BIE        0x80

#define MASK_TIM3_SR1_UIF        0x01
#define MASK_TIM3_SR1_CC1IF      0x02
#define MASK_TIM3_SR1_CC2IF      0x04
#define MASK_TIM3_SR1_TIF        0x40
#define MASK_TIM3_SR1_BIF        0x80

#define MASK_TIM3_SR2_CC1OF      0x02
#define MASK_TIM3_SR2_CC2OF      0x04

#define MASK_TIM3_EGR_UG         0x01
#define MASK_TIM3_EGR_CC1G       0x02
#define MASK_TIM3_EGR_CC2G       0x04
#define MASK_TIM3_EGR_TG         0x40
#define MASK_TIM3_EGR_BG         0x80

#define MASK_TIM3_CCMR1_CC1S     0x03
#define MASK_TIM3_CCMR1_OC1FE    0x04
#define MASK_TIM3_CCMR1_OC1PE    0x08
#define MASK_TIM3_CCMR1_OC1M     0x70

#define MASK_TIM3_CCMR2_CC2S     0x03
#define MASK_TIM3_CCMR2_OC2FE    0x04
#define MASK_TIM3_CCMR2_OC2PE    0x08
#define MASK_TIM3_CCMR2_OC2M     0x70

#define MASK_TIM3_CCER1_CC1E     0x01
#define MASK_TIM3_CCER1_CC1P     0x02
#define MASK_TIM3_CCER1_CC2E     0x10
#define MASK_TIM3_CCER1_CC2P     0x20

#define MASK_TIM3_CNTRH_CNT8     0x01
#define MASK_TIM3_CNTRH_CNT9     0x02
#define MASK_TIM3_CNTRH_CNT10    0x04
#define MASK_TIM3_CNTRH_CNT11    0x08
#define MASK_TIM3_CNTRH_CNT12    0x10
#define MASK_TIM3_CNTRH_CNT13    0x20
#define MASK_TIM3_CNTRH_CNT14    0x40
#define MASK_TIM3_CNTRH_CNT15    0x80

#define MASK_TIM3_CNTRL_CNT0     0x01
#define MASK_TIM3_CNTRL_CNT1     0x02
#define MASK_TIM3_CNTRL_CNT2     0x04
#define MASK_TIM3_CNTRL_CNT3     0x08
#define MASK_TIM3_CNTRL_CNT4     0x10
#define MASK_TIM3_CNTRL_CNT5     0x20
#define MASK_TIM3_CNTRL_CNT6     0x40
#define MASK_TIM3_CNTRL_CNT7     0x80

#define MASK_TIM3_PSCR_PSC       0x07

#define MASK_TIM3_ARRH_ARR8      0x01
#define MASK_TIM3_ARRH_ARR9      0x02
#define MASK_TIM3_ARRH_ARR10     0x04
#define MASK_TIM3_ARRH_ARR11     0x08
#define MASK_TIM3_ARRH_ARR12     0x10
#define MASK_TIM3_ARRH_ARR13     0x20
#define MASK_TIM3_ARRH_ARR14     0x40
#define MASK_TIM3_ARRH_ARR15     0x80

#define MASK_TIM3_ARRL_ARR0      0x01
#define MASK_TIM3_ARRL_ARR1      0x02
#define MASK_TIM3_ARRL_ARR2      0x04
#define MASK_TIM3_ARRL_ARR3      0x08
#define MASK_TIM3_ARRL_ARR4      0x10
#define MASK_TIM3_ARRL_ARR5      0x20
#define MASK_TIM3_ARRL_ARR6      0x40
#define MASK_TIM3_ARRL_ARR7      0x80

#define MASK_TIM3_CCR1H_CCR18    0x01
#define MASK_TIM3_CCR1H_CCR19    0x02
#define MASK_TIM3_CCR1H_CCR110   0x04
#define MASK_TIM3_CCR1H_CCR111   0x08
#define MASK_TIM3_CCR1H_CCR112   0x10
#define MASK_TIM3_CCR1H_CCR113   0x20
#define MASK_TIM3_CCR1H_CCR114   0x40
#define MASK_TIM3_CCR1H_CCR115   0x80

#define MASK_TIM3_CCR1L_CCR10    0x01
#define MASK_TIM3_CCR1L_CCR11    0x02
#define MASK_TIM3_CCR1L_CCR12    0x04
#define MASK_TIM3_CCR1L_CCR13    0x08
#define MASK_TIM3_CCR1L_CCR14    0x10
#define MASK_TIM3_CCR1L_CCR15    0x20
#define MASK_TIM3_CCR1L_CCR16    0x40
#define MASK_TIM3_CCR1L_CCR17    0x80

#define MASK_TIM3_CCR2H_CCR28    0x01
#define MASK_TIM3_CCR2H_CCR29    0x02
#define MASK_TIM3_CCR2H_CCR210   0x04
#define MASK_TIM3_CCR2H_CCR211   0x08
#define MASK_TIM3_CCR2H_CCR212   0x10
#define MASK_TIM3_CCR2H_CCR213   0x20
#define MASK_TIM3_CCR2H_CCR214   0x40
#define MASK_TIM3_CCR2H_CCR215   0x80

#define MASK_TIM3_CCR2L_CCR10    0x01
#define MASK_TIM3_CCR2L_CCR11    0x02
#define MASK_TIM3_CCR2L_CCR12    0x04
#define MASK_TIM3_CCR2L_CCR13    0x08
#define MASK_TIM3_CCR2L_CCR14    0x10
#define MASK_TIM3_CCR2L_CCR15    0x20
#define MASK_TIM3_CCR2L_CCR16    0x40
#define MASK_TIM3_CCR2L_CCR17    0x80

#define MASK_TIM3_BKR_LOCK       0x03
#define MASK_TIM3_BKR_OSSI       0x04
#define MASK_TIM3_BKR_BKE        0x10
#define MASK_TIM3_BKR_BKP        0x20
#define MASK_TIM3_BKR_AOE        0x40
#define MASK_TIM3_BKR_MOE        0x80

#define MASK_TIM3_OISR_OIS1      0x01
#define MASK_TIM3_OISR_OIS2      0x04


/*-------------------------------------------------------------------------
 *      TIM1 register definitions
 *-----------------------------------------------------------------------*/
/* TIM1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char DIR         : 1;
  unsigned char CMS         : 2;
  unsigned char ARPE        : 1;
} __BITS_TIM1_CR1;
#endif
//__IO_REG8_BIT(TIM1_CR1,    0x52B0, __READ_WRITE, __BITS_TIM1_CR1);
unsigned char TIM1_CR1; //0x52B0 __READ_WRITE
__BITS_TIM1_CR1 TIM1_CR1_bit;

/* TIM1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCPC        : 1;
  unsigned char             : 1;
  unsigned char COMS        : 1;
  unsigned char CCDS        : 1;
  unsigned char MMS         : 3;
  unsigned char TI1S        : 1;
} __BITS_TIM1_CR2;
#endif
//__IO_REG8_BIT(TIM1_CR2,    0x52B1, __READ_WRITE, __BITS_TIM1_CR2);
unsigned char TIM1_CR2; //0x52B1 __READ_WRITE
__BITS_TIM1_CR2 TIM1_CR2_bit;

/* TIM1 Slave mode control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char OCCS        : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM1_SMCR;
#endif
//__IO_REG8_BIT(TIM1_SMCR,   0x52B2, __READ_WRITE, __BITS_TIM1_SMCR);
unsigned char TIM1_SMCR; //0x52B2 __READ_WRITE
__BITS_TIM1_SMCR TIM1_SMCR_bit;

/* TIM1 external trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ETF         : 4;
  unsigned char ETPS        : 2;
  unsigned char ECE         : 1;
  unsigned char ETP         : 1;
} __BITS_TIM1_ETR;
#endif
//__IO_REG8_BIT(TIM1_ETR,    0x52B3, __READ_WRITE, __BITS_TIM1_ETR);
unsigned char TIM1_ETR; //0x52B3 __READ_WRITE
__BITS_TIM1_ETR TIM1_ETR_bit;

/* TIM1 DMA1 request enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UDE         : 1;
  unsigned char CC1DE       : 1;
  unsigned char CC2DE       : 1;
  unsigned char CC3DE       : 1;
  unsigned char CC4DE       : 1;
  unsigned char COMDE       : 1;
} __BITS_TIM1_DER;
#endif
//__IO_REG8_BIT(TIM1_DER,    0x52B4, __READ_WRITE, __BITS_TIM1_DER);
unsigned char TIM1_DER; //0x52B4 __READ_WRITE
__BITS_TIM1_DER TIM1_DER_bit;

/* TIM1 Interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char CC3IE       : 1;
  unsigned char CC4IE       : 1;
  unsigned char COMIE       : 1;
  unsigned char TIE         : 1;
  unsigned char BIE         : 1;
} __BITS_TIM1_IER;
#endif
//__IO_REG8_BIT(TIM1_IER,    0x52B5, __READ_WRITE, __BITS_TIM1_IER);
unsigned char TIM1_IER; //0x52B5 __READ_WRITE
__BITS_TIM1_IER TIM1_IER_bit;

/* TIM1 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char CC3IF       : 1;
  unsigned char CC4IF       : 1;
  unsigned char COMIF       : 1;
  unsigned char TIF         : 1;
  unsigned char BIF         : 1;
} __BITS_TIM1_SR1;
#endif
//__IO_REG8_BIT(TIM1_SR1,    0x52B6, __READ_WRITE, __BITS_TIM1_SR1);
unsigned char TIM1_SR1; //0x52B6 __READ_WRITE
__BITS_TIM1_SR1 TIM1_SR1_bit;

/* TIM1 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
  unsigned char CC3OF       : 1;
  unsigned char CC4OF       : 1;
} __BITS_TIM1_SR2;
#endif
//__IO_REG8_BIT(TIM1_SR2,    0x52B7, __READ_WRITE, __BITS_TIM1_SR2);
unsigned char TIM1_SR2; //0x52B7 __READ_WRITE
__BITS_TIM1_SR2 TIM1_SR2_bit;

/* TIM1 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char CC3G        : 1;
  unsigned char CC4G        : 1;
  unsigned char COMG        : 1;
  unsigned char TG          : 1;
  unsigned char BG          : 1;
} __BITS_TIM1_EGR;
#endif
//__IO_REG8_BIT(TIM1_EGR,    0x52B8, __WRITE, __BITS_TIM1_EGR);
unsigned char TIM1_EGR; //0x52B8 __WRITE
__BITS_TIM1_EGR TIM1_EGR_bit;

/* TIM1 Capture/Compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char OC1FE       : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
  unsigned char OC1CE       : 1;
} __BITS_TIM1_CCMR1;
#endif
//__IO_REG8_BIT(TIM1_CCMR1,  0x52B9, __READ_WRITE, __BITS_TIM1_CCMR1);
unsigned char TIM1_CCMR1; //0x52B9 __READ_WRITE
__BITS_TIM1_CCMR1 TIM1_CCMR1_bit;

/* TIM1 Capture/Compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char OC2FE       : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
  unsigned char OC2CE       : 1;
} __BITS_TIM1_CCMR2;
#endif
//__IO_REG8_BIT(TIM1_CCMR2,  0x52BA, __READ_WRITE, __BITS_TIM1_CCMR2);
unsigned char TIM1_CCMR2; //0x52BA __READ_WRITE
__BITS_TIM1_CCMR2 TIM1_CCMR2_bit;

/* TIM1 Capture/Compare mode register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC3S        : 2;
  unsigned char OC3FE       : 1;
  unsigned char OC3PE       : 1;
  unsigned char OC3M        : 3;
  unsigned char OC3CE       : 1;
} __BITS_TIM1_CCMR3;
#endif
//__IO_REG8_BIT(TIM1_CCMR3,  0x52BB, __READ_WRITE, __BITS_TIM1_CCMR3);
unsigned char TIM1_CCMR3; //0x52BB __READ_WRITE
__BITS_TIM1_CCMR3 TIM1_CCMR3_bit;

/* TIM1 Capture/Compare mode register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC4S        : 2;
  unsigned char             : 1;
  unsigned char OC4PE       : 1;
  unsigned char OC4M        : 3;
  unsigned char OC4CE       : 1;
} __BITS_TIM1_CCMR4;
#endif
//__IO_REG8_BIT(TIM1_CCMR4,  0x52BC, __READ_WRITE, __BITS_TIM1_CCMR4);
unsigned char TIM1_CCMR4; //0x52BC __READ_WRITE
__BITS_TIM1_CCMR4 TIM1_CCMR4_bit;

/* TIM1 Capture/Compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char CC1NE       : 1;
  unsigned char CC1NP       : 1;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
  unsigned char CC2NE       : 1;
  unsigned char CC2NP       : 1;
} __BITS_TIM1_CCER1;
#endif
//__IO_REG8_BIT(TIM1_CCER1,  0x52BD, __READ_WRITE, __BITS_TIM1_CCER1);
unsigned char TIM1_CCER1; //0x52BD __READ_WRITE
__BITS_TIM1_CCER1 TIM1_CCER1_bit;

/* TIM1 Capture/Compare enable register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC3E        : 1;
  unsigned char CC3P        : 1;
  unsigned char CC3NE       : 1;
  unsigned char CC3NP       : 1;
  unsigned char CC4E        : 1;
  unsigned char CC4P        : 1;
} __BITS_TIM1_CCER2;
#endif
//__IO_REG8_BIT(TIM1_CCER2,  0x52BE, __READ_WRITE, __BITS_TIM1_CCER2);
unsigned char TIM1_CCER2; //0x52BE __READ_WRITE
__BITS_TIM1_CCER2 TIM1_CCER2_bit;

/* TIM1 counter high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT8        : 1;
  unsigned char CNT9        : 1;
  unsigned char CNT10       : 1;
  unsigned char CNT11       : 1;
  unsigned char CNT12       : 1;
  unsigned char CNT13       : 1;
  unsigned char CNT14       : 1;
  unsigned char CNT15       : 1;
} __BITS_TIM1_CNTRH;
#endif
//__IO_REG8_BIT(TIM1_CNTRH,  0x52BF, __READ_WRITE, __BITS_TIM1_CNTRH);
unsigned char TIM1_CNTRH; //0x52BF __READ_WRITE
__BITS_TIM1_CNTRH TIM1_CNTRH_bit;

/* TIM1 counter low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT0        : 1;
  unsigned char CNT1        : 1;
  unsigned char CNT2        : 1;
  unsigned char CNT3        : 1;
  unsigned char CNT4        : 1;
  unsigned char CNT5        : 1;
  unsigned char CNT6        : 1;
  unsigned char CNT7        : 1;
} __BITS_TIM1_CNTRL;
#endif
//__IO_REG8_BIT(TIM1_CNTRL,  0x52C0, __READ_WRITE, __BITS_TIM1_CNTRL);
unsigned char TIM1_CNTRL; //0x52C0 __READ_WRITE
__BITS_TIM1_CNTRL TIM1_CNTRL_bit;

/* TIM1 prescaler register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC8        : 1;
  unsigned char PSC9        : 1;
  unsigned char PSC10       : 1;
  unsigned char PSC11       : 1;
  unsigned char PSC12       : 1;
  unsigned char PSC13       : 1;
  unsigned char PSC14       : 1;
  unsigned char PSC15       : 1;
} __BITS_TIM1_PSCRH;
#endif
//__IO_REG8_BIT(TIM1_PSCRH,  0x52C1, __READ_WRITE, __BITS_TIM1_PSCRH);
unsigned char TIM1_PSCRH; //0x52C1 __READ_WRITE
__BITS_TIM1_PSCRH TIM1_PSCRH_bit;

/* TIM1 prescaler register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC0        : 1;
  unsigned char PSC1        : 1;
  unsigned char PSC2        : 1;
  unsigned char PSC3        : 1;
  unsigned char PSC4        : 1;
  unsigned char PSC5        : 1;
  unsigned char PSC6        : 1;
  unsigned char PSC7        : 1;
} __BITS_TIM1_PSCRL;
#endif
//__IO_REG8_BIT(TIM1_PSCRL,  0x52C2, __READ_WRITE, __BITS_TIM1_PSCRL);
unsigned char TIM1_PSCRL; //0x52C2 __READ_WRITE
__BITS_TIM1_PSCRL TIM1_PSCRL_bit;

/* TIM1 Auto-reload register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR8        : 1;
  unsigned char ARR9        : 1;
  unsigned char ARR10       : 1;
  unsigned char ARR11       : 1;
  unsigned char ARR12       : 1;
  unsigned char ARR13       : 1;
  unsigned char ARR14       : 1;
  unsigned char ARR15       : 1;
} __BITS_TIM1_ARRH;
#endif
//__IO_REG8_BIT(TIM1_ARRH,   0x52C3, __READ_WRITE, __BITS_TIM1_ARRH);
unsigned char TIM1_ARRH; //0x52C3 __READ_WRITE
__BITS_TIM1_ARRH TIM1_ARRH_bit;

/* TIM1 Auto-reload register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR0        : 1;
  unsigned char ARR1        : 1;
  unsigned char ARR2        : 1;
  unsigned char ARR3        : 1;
  unsigned char ARR4        : 1;
  unsigned char ARR5        : 1;
  unsigned char ARR6        : 1;
  unsigned char ARR7        : 1;
} __BITS_TIM1_ARRL;
#endif
//__IO_REG8_BIT(TIM1_ARRL,   0x52C4, __READ_WRITE, __BITS_TIM1_ARRL);
unsigned char TIM1_ARRL; //0x52C4 __READ_WRITE
__BITS_TIM1_ARRL TIM1_ARRL_bit;

/* TIM1 Repetition counter register */
//__IO_REG8    (TIM1_RCR,    0x52C5, __READ_WRITE);
unsigned char TIM1_RCR; //0x52C5 __READ_WRITE
/* TIM1 Capture/Compare register 1 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR18       : 1;
  unsigned char CCR19       : 1;
  unsigned char CCR110      : 1;
  unsigned char CCR111      : 1;
  unsigned char CCR112      : 1;
  unsigned char CCR113      : 1;
  unsigned char CCR114      : 1;
  unsigned char CCR115      : 1;
} __BITS_TIM1_CCR1H;
#endif
//__IO_REG8_BIT(TIM1_CCR1H,  0x52C6, __READ_WRITE, __BITS_TIM1_CCR1H);
unsigned char TIM1_CCR1H; //0x52C6 __READ_WRITE
__BITS_TIM1_CCR1H TIM1_CCR1H_bit;

/* TIM1 Capture/Compare register 1 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM1_CCR1L;
#endif
//__IO_REG8_BIT(TIM1_CCR1L,  0x52C7, __READ_WRITE, __BITS_TIM1_CCR1L);
unsigned char TIM1_CCR1L; //0x52C7 __READ_WRITE
__BITS_TIM1_CCR1L TIM1_CCR1L_bit;

/* TIM1 Capture/Compare register 2 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR28       : 1;
  unsigned char CCR29       : 1;
  unsigned char CCR210      : 1;
  unsigned char CCR211      : 1;
  unsigned char CCR212      : 1;
  unsigned char CCR213      : 1;
  unsigned char CCR214      : 1;
  unsigned char CCR215      : 1;
} __BITS_TIM1_CCR2H;
#endif
//__IO_REG8_BIT(TIM1_CCR2H,  0x52C8, __READ_WRITE, __BITS_TIM1_CCR2H);
unsigned char TIM1_CCR2H; //0x52C8 __READ_WRITE
__BITS_TIM1_CCR2H TIM1_CCR2H_bit;

/* TIM1 Capture/Compare register 2 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR20       : 1;
  unsigned char CCR21       : 1;
  unsigned char CCR22       : 1;
  unsigned char CCR23       : 1;
  unsigned char CCR24       : 1;
  unsigned char CCR25       : 1;
  unsigned char CCR26       : 1;
  unsigned char CCR27       : 1;
} __BITS_TIM1_CCR2L;
#endif
//__IO_REG8_BIT(TIM1_CCR2L,  0x52C9, __READ_WRITE, __BITS_TIM1_CCR2L);
unsigned char TIM1_CCR2L; //0x52C9 __READ_WRITE
__BITS_TIM1_CCR2L TIM1_CCR2L_bit;

/* TIM1 Capture/Compare register 3 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR38       : 1;
  unsigned char CCR39       : 1;
  unsigned char CCR310      : 1;
  unsigned char CCR311      : 1;
  unsigned char CCR312      : 1;
  unsigned char CCR313      : 1;
  unsigned char CCR314      : 1;
  unsigned char CCR315      : 1;
} __BITS_TIM1_CCR3H;
#endif
//__IO_REG8_BIT(TIM1_CCR3H,  0x52CA, __READ_WRITE, __BITS_TIM1_CCR3H);
unsigned char TIM1_CCR3H; //0x52CA __READ_WRITE
__BITS_TIM1_CCR3H TIM1_CCR3H_bit;

/* TIM1 Capture/Compare register 3 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR30       : 1;
  unsigned char CCR31       : 1;
  unsigned char CCR32       : 1;
  unsigned char CCR33       : 1;
  unsigned char CCR34       : 1;
  unsigned char CCR35       : 1;
  unsigned char CCR36       : 1;
  unsigned char CCR37       : 1;
} __BITS_TIM1_CCR3L;
#endif
//__IO_REG8_BIT(TIM1_CCR3L,  0x52CB, __READ_WRITE, __BITS_TIM1_CCR3L);
unsigned char TIM1_CCR3L; //0x52CB __READ_WRITE
__BITS_TIM1_CCR3L TIM1_CCR3L_bit;

/* TIM1 Capture/Compare register 4 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR48       : 1;
  unsigned char CCR49       : 1;
  unsigned char CCR410      : 1;
  unsigned char CCR411      : 1;
  unsigned char CCR412      : 1;
  unsigned char CCR413      : 1;
  unsigned char CCR414      : 1;
  unsigned char CCR415      : 1;
} __BITS_TIM1_CCR4H;
#endif
//__IO_REG8_BIT(TIM1_CCR4H,  0x52CC, __READ_WRITE, __BITS_TIM1_CCR4H);
unsigned char TIM1_CCR4H; //0x52CC __READ_WRITE
__BITS_TIM1_CCR4H TIM1_CCR4H_bit;

/* TIM1 Capture/Compare register 4 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR40       : 1;
  unsigned char CCR41       : 1;
  unsigned char CCR42       : 1;
  unsigned char CCR43       : 1;
  unsigned char CCR44       : 1;
  unsigned char CCR45       : 1;
  unsigned char CCR46       : 1;
  unsigned char CCR47       : 1;
} __BITS_TIM1_CCR4L;
#endif
//__IO_REG8_BIT(TIM1_CCR4L,  0x52CD, __READ_WRITE, __BITS_TIM1_CCR4L);
unsigned char TIM1_CCR4L; //0x52CD __READ_WRITE
__BITS_TIM1_CCR4L TIM1_CCR4L_bit;

/* TIM1 break register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LOCK        : 2;
  unsigned char OSSI        : 1;
  unsigned char OSSR        : 1;
  unsigned char BKE         : 1;
  unsigned char BKP         : 1;
  unsigned char AOE         : 1;
  unsigned char MOE         : 1;
} __BITS_TIM1_BKR;
#endif
//__IO_REG8_BIT(TIM1_BKR,    0x52CE, __READ_WRITE, __BITS_TIM1_BKR);
unsigned char TIM1_BKR; //0x52CE __READ_WRITE
__BITS_TIM1_BKR TIM1_BKR_bit;

/* TIM1 dead-time register */
//__IO_REG8    (TIM1_DTR,    0x52CF, __READ_WRITE);
unsigned char TIM1_DTR; //0x52CF __READ_WRITE
/* TIM1 output idle state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char OIS1        : 1;
  unsigned char OIS1N       : 1;
  unsigned char OIS2        : 1;
  unsigned char OIS2N       : 1;
  unsigned char OIS3        : 1;
  unsigned char OIS3N       : 1;
} __BITS_TIM1_OISR;
#endif
//__IO_REG8_BIT(TIM1_OISR,   0x52D0, __READ_WRITE, __BITS_TIM1_OISR);
unsigned char TIM1_OISR; //0x52D0 __READ_WRITE
__BITS_TIM1_OISR TIM1_OISR_bit;

/* DMA1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DBA         : 5;
} __BITS_TIM1_DCR1;
#endif
//__IO_REG8_BIT(TIM1_DCR1,   0x52D1, __READ_WRITE, __BITS_TIM1_DCR1);
unsigned char TIM1_DCR1; //0x52D1 __READ_WRITE
__BITS_TIM1_DCR1 TIM1_DCR1_bit;

/* TIM1 DMA1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DBL         : 5;
} __BITS_TIM1_DCR2;
#endif
//__IO_REG8_BIT(TIM1_DCR2,   0x52D2, __READ_WRITE, __BITS_TIM1_DCR2);
unsigned char TIM1_DCR2; //0x52D2 __READ_WRITE
__BITS_TIM1_DCR2 TIM1_DCR2_bit;

/* TIM1 DMA1 address for burst mode */
//__IO_REG8    (TIM1_DMA1R,  0x52D3, __READ_WRITE);
unsigned char TIM1_DMA1R; //0x52D3 __READ_WRITE

/*-------------------------------------------------------------------------
 *      TIM1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM1_CR1_CEN             TIM1_CR1_bit.CEN
#define TIM1_CR1_UDIS            TIM1_CR1_bit.UDIS
#define TIM1_CR1_URS             TIM1_CR1_bit.URS
#define TIM1_CR1_OPM             TIM1_CR1_bit.OPM
#define TIM1_CR1_DIR             TIM1_CR1_bit.DIR
#define TIM1_CR1_CMS             TIM1_CR1_bit.CMS
#define TIM1_CR1_ARPE            TIM1_CR1_bit.ARPE

#define TIM1_CR2_CCPC            TIM1_CR2_bit.CCPC
#define TIM1_CR2_COMS            TIM1_CR2_bit.COMS
#define TIM1_CR2_CCDS            TIM1_CR2_bit.CCDS
#define TIM1_CR2_MMS             TIM1_CR2_bit.MMS
#define TIM1_CR2_TI1S            TIM1_CR2_bit.TI1S

#define TIM1_SMCR_SMS            TIM1_SMCR_bit.SMS
#define TIM1_SMCR_OCCS           TIM1_SMCR_bit.OCCS
#define TIM1_SMCR_TS             TIM1_SMCR_bit.TS
#define TIM1_SMCR_MSM            TIM1_SMCR_bit.MSM

#define TIM1_ETR_ETF             TIM1_ETR_bit.ETF
#define TIM1_ETR_ETPS            TIM1_ETR_bit.ETPS
#define TIM1_ETR_ECE             TIM1_ETR_bit.ECE
#define TIM1_ETR_ETP             TIM1_ETR_bit.ETP

#define TIM1_DER_UDE             TIM1_DER_bit.UDE
#define TIM1_DER_CC1DE           TIM1_DER_bit.CC1DE
#define TIM1_DER_CC2DE           TIM1_DER_bit.CC2DE
#define TIM1_DER_CC3DE           TIM1_DER_bit.CC3DE
#define TIM1_DER_CC4DE           TIM1_DER_bit.CC4DE
#define TIM1_DER_COMDE           TIM1_DER_bit.COMDE

#define TIM1_IER_UIE             TIM1_IER_bit.UIE
#define TIM1_IER_CC1IE           TIM1_IER_bit.CC1IE
#define TIM1_IER_CC2IE           TIM1_IER_bit.CC2IE
#define TIM1_IER_CC3IE           TIM1_IER_bit.CC3IE
#define TIM1_IER_CC4IE           TIM1_IER_bit.CC4IE
#define TIM1_IER_COMIE           TIM1_IER_bit.COMIE
#define TIM1_IER_TIE             TIM1_IER_bit.TIE
#define TIM1_IER_BIE             TIM1_IER_bit.BIE

#define TIM1_SR1_UIF             TIM1_SR1_bit.UIF
#define TIM1_SR1_CC1IF           TIM1_SR1_bit.CC1IF
#define TIM1_SR1_CC2IF           TIM1_SR1_bit.CC2IF
#define TIM1_SR1_CC3IF           TIM1_SR1_bit.CC3IF
#define TIM1_SR1_CC4IF           TIM1_SR1_bit.CC4IF
#define TIM1_SR1_COMIF           TIM1_SR1_bit.COMIF
#define TIM1_SR1_TIF             TIM1_SR1_bit.TIF
#define TIM1_SR1_BIF             TIM1_SR1_bit.BIF

#define TIM1_SR2_CC1OF           TIM1_SR2_bit.CC1OF
#define TIM1_SR2_CC2OF           TIM1_SR2_bit.CC2OF
#define TIM1_SR2_CC3OF           TIM1_SR2_bit.CC3OF
#define TIM1_SR2_CC4OF           TIM1_SR2_bit.CC4OF

#define TIM1_EGR_UG              TIM1_EGR_bit.UG
#define TIM1_EGR_CC1G            TIM1_EGR_bit.CC1G
#define TIM1_EGR_CC2G            TIM1_EGR_bit.CC2G
#define TIM1_EGR_CC3G            TIM1_EGR_bit.CC3G
#define TIM1_EGR_CC4G            TIM1_EGR_bit.CC4G
#define TIM1_EGR_COMG            TIM1_EGR_bit.COMG
#define TIM1_EGR_TG              TIM1_EGR_bit.TG
#define TIM1_EGR_BG              TIM1_EGR_bit.BG

#define TIM1_CCMR1_CC1S          TIM1_CCMR1_bit.CC1S
#define TIM1_CCMR1_OC1FE         TIM1_CCMR1_bit.OC1FE
#define TIM1_CCMR1_OC1PE         TIM1_CCMR1_bit.OC1PE
#define TIM1_CCMR1_OC1M          TIM1_CCMR1_bit.OC1M
#define TIM1_CCMR1_OC1CE         TIM1_CCMR1_bit.OC1CE

#define TIM1_CCMR2_CC2S          TIM1_CCMR2_bit.CC2S
#define TIM1_CCMR2_OC2FE         TIM1_CCMR2_bit.OC2FE
#define TIM1_CCMR2_OC2PE         TIM1_CCMR2_bit.OC2PE
#define TIM1_CCMR2_OC2M          TIM1_CCMR2_bit.OC2M
#define TIM1_CCMR2_OC2CE         TIM1_CCMR2_bit.OC2CE

#define TIM1_CCMR3_CC3S          TIM1_CCMR3_bit.CC3S
#define TIM1_CCMR3_OC3FE         TIM1_CCMR3_bit.OC3FE
#define TIM1_CCMR3_OC3PE         TIM1_CCMR3_bit.OC3PE
#define TIM1_CCMR3_OC3M          TIM1_CCMR3_bit.OC3M
#define TIM1_CCMR3_OC3CE         TIM1_CCMR3_bit.OC3CE

#define TIM1_CCMR4_CC4S          TIM1_CCMR4_bit.CC4S
#define TIM1_CCMR4_OC4PE         TIM1_CCMR4_bit.OC4PE
#define TIM1_CCMR4_OC4M          TIM1_CCMR4_bit.OC4M
#define TIM1_CCMR4_OC4CE         TIM1_CCMR4_bit.OC4CE

#define TIM1_CCER1_CC1E          TIM1_CCER1_bit.CC1E
#define TIM1_CCER1_CC1P          TIM1_CCER1_bit.CC1P
#define TIM1_CCER1_CC1NE         TIM1_CCER1_bit.CC1NE
#define TIM1_CCER1_CC1NP         TIM1_CCER1_bit.CC1NP
#define TIM1_CCER1_CC2E          TIM1_CCER1_bit.CC2E
#define TIM1_CCER1_CC2P          TIM1_CCER1_bit.CC2P
#define TIM1_CCER1_CC2NE         TIM1_CCER1_bit.CC2NE
#define TIM1_CCER1_CC2NP         TIM1_CCER1_bit.CC2NP

#define TIM1_CCER2_CC3E          TIM1_CCER2_bit.CC3E
#define TIM1_CCER2_CC3P          TIM1_CCER2_bit.CC3P
#define TIM1_CCER2_CC3NE         TIM1_CCER2_bit.CC3NE
#define TIM1_CCER2_CC3NP         TIM1_CCER2_bit.CC3NP
#define TIM1_CCER2_CC4E          TIM1_CCER2_bit.CC4E
#define TIM1_CCER2_CC4P          TIM1_CCER2_bit.CC4P

#define TIM1_CNTRH_CNT8          TIM1_CNTRH_bit.CNT8
#define TIM1_CNTRH_CNT9          TIM1_CNTRH_bit.CNT9
#define TIM1_CNTRH_CNT10         TIM1_CNTRH_bit.CNT10
#define TIM1_CNTRH_CNT11         TIM1_CNTRH_bit.CNT11
#define TIM1_CNTRH_CNT12         TIM1_CNTRH_bit.CNT12
#define TIM1_CNTRH_CNT13         TIM1_CNTRH_bit.CNT13
#define TIM1_CNTRH_CNT14         TIM1_CNTRH_bit.CNT14
#define TIM1_CNTRH_CNT15         TIM1_CNTRH_bit.CNT15

#define TIM1_CNTRL_CNT0          TIM1_CNTRL_bit.CNT0
#define TIM1_CNTRL_CNT1          TIM1_CNTRL_bit.CNT1
#define TIM1_CNTRL_CNT2          TIM1_CNTRL_bit.CNT2
#define TIM1_CNTRL_CNT3          TIM1_CNTRL_bit.CNT3
#define TIM1_CNTRL_CNT4          TIM1_CNTRL_bit.CNT4
#define TIM1_CNTRL_CNT5          TIM1_CNTRL_bit.CNT5
#define TIM1_CNTRL_CNT6          TIM1_CNTRL_bit.CNT6
#define TIM1_CNTRL_CNT7          TIM1_CNTRL_bit.CNT7

#define TIM1_PSCRH_PSC8          TIM1_PSCRH_bit.PSC8
#define TIM1_PSCRH_PSC9          TIM1_PSCRH_bit.PSC9
#define TIM1_PSCRH_PSC10         TIM1_PSCRH_bit.PSC10
#define TIM1_PSCRH_PSC11         TIM1_PSCRH_bit.PSC11
#define TIM1_PSCRH_PSC12         TIM1_PSCRH_bit.PSC12
#define TIM1_PSCRH_PSC13         TIM1_PSCRH_bit.PSC13
#define TIM1_PSCRH_PSC14         TIM1_PSCRH_bit.PSC14
#define TIM1_PSCRH_PSC15         TIM1_PSCRH_bit.PSC15

#define TIM1_PSCRL_PSC0          TIM1_PSCRL_bit.PSC0
#define TIM1_PSCRL_PSC1          TIM1_PSCRL_bit.PSC1
#define TIM1_PSCRL_PSC2          TIM1_PSCRL_bit.PSC2
#define TIM1_PSCRL_PSC3          TIM1_PSCRL_bit.PSC3
#define TIM1_PSCRL_PSC4          TIM1_PSCRL_bit.PSC4
#define TIM1_PSCRL_PSC5          TIM1_PSCRL_bit.PSC5
#define TIM1_PSCRL_PSC6          TIM1_PSCRL_bit.PSC6
#define TIM1_PSCRL_PSC7          TIM1_PSCRL_bit.PSC7

#define TIM1_ARRH_ARR8           TIM1_ARRH_bit.ARR8
#define TIM1_ARRH_ARR9           TIM1_ARRH_bit.ARR9
#define TIM1_ARRH_ARR10          TIM1_ARRH_bit.ARR10
#define TIM1_ARRH_ARR11          TIM1_ARRH_bit.ARR11
#define TIM1_ARRH_ARR12          TIM1_ARRH_bit.ARR12
#define TIM1_ARRH_ARR13          TIM1_ARRH_bit.ARR13
#define TIM1_ARRH_ARR14          TIM1_ARRH_bit.ARR14
#define TIM1_ARRH_ARR15          TIM1_ARRH_bit.ARR15

#define TIM1_ARRL_ARR0           TIM1_ARRL_bit.ARR0
#define TIM1_ARRL_ARR1           TIM1_ARRL_bit.ARR1
#define TIM1_ARRL_ARR2           TIM1_ARRL_bit.ARR2
#define TIM1_ARRL_ARR3           TIM1_ARRL_bit.ARR3
#define TIM1_ARRL_ARR4           TIM1_ARRL_bit.ARR4
#define TIM1_ARRL_ARR5           TIM1_ARRL_bit.ARR5
#define TIM1_ARRL_ARR6           TIM1_ARRL_bit.ARR6
#define TIM1_ARRL_ARR7           TIM1_ARRL_bit.ARR7

#define TIM1_CCR1H_CCR18         TIM1_CCR1H_bit.CCR18
#define TIM1_CCR1H_CCR19         TIM1_CCR1H_bit.CCR19
#define TIM1_CCR1H_CCR110        TIM1_CCR1H_bit.CCR110
#define TIM1_CCR1H_CCR111        TIM1_CCR1H_bit.CCR111
#define TIM1_CCR1H_CCR112        TIM1_CCR1H_bit.CCR112
#define TIM1_CCR1H_CCR113        TIM1_CCR1H_bit.CCR113
#define TIM1_CCR1H_CCR114        TIM1_CCR1H_bit.CCR114
#define TIM1_CCR1H_CCR115        TIM1_CCR1H_bit.CCR115

#define TIM1_CCR1L_CCR10         TIM1_CCR1L_bit.CCR10
#define TIM1_CCR1L_CCR11         TIM1_CCR1L_bit.CCR11
#define TIM1_CCR1L_CCR12         TIM1_CCR1L_bit.CCR12
#define TIM1_CCR1L_CCR13         TIM1_CCR1L_bit.CCR13
#define TIM1_CCR1L_CCR14         TIM1_CCR1L_bit.CCR14
#define TIM1_CCR1L_CCR15         TIM1_CCR1L_bit.CCR15
#define TIM1_CCR1L_CCR16         TIM1_CCR1L_bit.CCR16
#define TIM1_CCR1L_CCR17         TIM1_CCR1L_bit.CCR17

#define TIM1_CCR2H_CCR28         TIM1_CCR2H_bit.CCR28
#define TIM1_CCR2H_CCR29         TIM1_CCR2H_bit.CCR29
#define TIM1_CCR2H_CCR210        TIM1_CCR2H_bit.CCR210
#define TIM1_CCR2H_CCR211        TIM1_CCR2H_bit.CCR211
#define TIM1_CCR2H_CCR212        TIM1_CCR2H_bit.CCR212
#define TIM1_CCR2H_CCR213        TIM1_CCR2H_bit.CCR213
#define TIM1_CCR2H_CCR214        TIM1_CCR2H_bit.CCR214
#define TIM1_CCR2H_CCR215        TIM1_CCR2H_bit.CCR215

#define TIM1_CCR2L_CCR20         TIM1_CCR2L_bit.CCR20
#define TIM1_CCR2L_CCR21         TIM1_CCR2L_bit.CCR21
#define TIM1_CCR2L_CCR22         TIM1_CCR2L_bit.CCR22
#define TIM1_CCR2L_CCR23         TIM1_CCR2L_bit.CCR23
#define TIM1_CCR2L_CCR24         TIM1_CCR2L_bit.CCR24
#define TIM1_CCR2L_CCR25         TIM1_CCR2L_bit.CCR25
#define TIM1_CCR2L_CCR26         TIM1_CCR2L_bit.CCR26
#define TIM1_CCR2L_CCR27         TIM1_CCR2L_bit.CCR27

#define TIM1_CCR3H_CCR38         TIM1_CCR3H_bit.CCR38
#define TIM1_CCR3H_CCR39         TIM1_CCR3H_bit.CCR39
#define TIM1_CCR3H_CCR310        TIM1_CCR3H_bit.CCR310
#define TIM1_CCR3H_CCR311        TIM1_CCR3H_bit.CCR311
#define TIM1_CCR3H_CCR312        TIM1_CCR3H_bit.CCR312
#define TIM1_CCR3H_CCR313        TIM1_CCR3H_bit.CCR313
#define TIM1_CCR3H_CCR314        TIM1_CCR3H_bit.CCR314
#define TIM1_CCR3H_CCR315        TIM1_CCR3H_bit.CCR315

#define TIM1_CCR3L_CCR30         TIM1_CCR3L_bit.CCR30
#define TIM1_CCR3L_CCR31         TIM1_CCR3L_bit.CCR31
#define TIM1_CCR3L_CCR32         TIM1_CCR3L_bit.CCR32
#define TIM1_CCR3L_CCR33         TIM1_CCR3L_bit.CCR33
#define TIM1_CCR3L_CCR34         TIM1_CCR3L_bit.CCR34
#define TIM1_CCR3L_CCR35         TIM1_CCR3L_bit.CCR35
#define TIM1_CCR3L_CCR36         TIM1_CCR3L_bit.CCR36
#define TIM1_CCR3L_CCR37         TIM1_CCR3L_bit.CCR37

#define TIM1_CCR4H_CCR48         TIM1_CCR4H_bit.CCR48
#define TIM1_CCR4H_CCR49         TIM1_CCR4H_bit.CCR49
#define TIM1_CCR4H_CCR410        TIM1_CCR4H_bit.CCR410
#define TIM1_CCR4H_CCR411        TIM1_CCR4H_bit.CCR411
#define TIM1_CCR4H_CCR412        TIM1_CCR4H_bit.CCR412
#define TIM1_CCR4H_CCR413        TIM1_CCR4H_bit.CCR413
#define TIM1_CCR4H_CCR414        TIM1_CCR4H_bit.CCR414
#define TIM1_CCR4H_CCR415        TIM1_CCR4H_bit.CCR415

#define TIM1_CCR4L_CCR40         TIM1_CCR4L_bit.CCR40
#define TIM1_CCR4L_CCR41         TIM1_CCR4L_bit.CCR41
#define TIM1_CCR4L_CCR42         TIM1_CCR4L_bit.CCR42
#define TIM1_CCR4L_CCR43         TIM1_CCR4L_bit.CCR43
#define TIM1_CCR4L_CCR44         TIM1_CCR4L_bit.CCR44
#define TIM1_CCR4L_CCR45         TIM1_CCR4L_bit.CCR45
#define TIM1_CCR4L_CCR46         TIM1_CCR4L_bit.CCR46
#define TIM1_CCR4L_CCR47         TIM1_CCR4L_bit.CCR47

#define TIM1_BKR_LOCK            TIM1_BKR_bit.LOCK
#define TIM1_BKR_OSSI            TIM1_BKR_bit.OSSI
#define TIM1_BKR_OSSR            TIM1_BKR_bit.OSSR
#define TIM1_BKR_BKE             TIM1_BKR_bit.BKE
#define TIM1_BKR_BKP             TIM1_BKR_bit.BKP
#define TIM1_BKR_AOE             TIM1_BKR_bit.AOE
#define TIM1_BKR_MOE             TIM1_BKR_bit.MOE

#define TIM1_OISR_OIS1           TIM1_OISR_bit.OIS1
#define TIM1_OISR_OIS1N          TIM1_OISR_bit.OIS1N
#define TIM1_OISR_OIS2           TIM1_OISR_bit.OIS2
#define TIM1_OISR_OIS2N          TIM1_OISR_bit.OIS2N
#define TIM1_OISR_OIS3           TIM1_OISR_bit.OIS3
#define TIM1_OISR_OIS3N          TIM1_OISR_bit.OIS3N

#define TIM1_DCR1_DBA            TIM1_DCR1_bit.DBA

#define TIM1_DCR2_DBL            TIM1_DCR2_bit.DBL

#endif

/*-------------------------------------------------------------------------
 *      TIM1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM1_CR1_CEN        0x01
#define MASK_TIM1_CR1_UDIS       0x02
#define MASK_TIM1_CR1_URS        0x04
#define MASK_TIM1_CR1_OPM        0x08
#define MASK_TIM1_CR1_DIR        0x10
#define MASK_TIM1_CR1_CMS        0x60
#define MASK_TIM1_CR1_ARPE       0x80

#define MASK_TIM1_CR2_CCPC       0x01
#define MASK_TIM1_CR2_COMS       0x04
#define MASK_TIM1_CR2_CCDS       0x08
#define MASK_TIM1_CR2_MMS        0x70
#define MASK_TIM1_CR2_TI1S       0x80

#define MASK_TIM1_SMCR_SMS       0x07
#define MASK_TIM1_SMCR_OCCS      0x08
#define MASK_TIM1_SMCR_TS        0x70
#define MASK_TIM1_SMCR_MSM       0x80

#define MASK_TIM1_ETR_ETF        0x0F
#define MASK_TIM1_ETR_ETPS       0x30
#define MASK_TIM1_ETR_ECE        0x40
#define MASK_TIM1_ETR_ETP        0x80

#define MASK_TIM1_DER_UDE        0x01
#define MASK_TIM1_DER_CC1DE      0x02
#define MASK_TIM1_DER_CC2DE      0x04
#define MASK_TIM1_DER_CC3DE      0x08
#define MASK_TIM1_DER_CC4DE      0x10
#define MASK_TIM1_DER_COMDE      0x20

#define MASK_TIM1_IER_UIE        0x01
#define MASK_TIM1_IER_CC1IE      0x02
#define MASK_TIM1_IER_CC2IE      0x04
#define MASK_TIM1_IER_CC3IE      0x08
#define MASK_TIM1_IER_CC4IE      0x10
#define MASK_TIM1_IER_COMIE      0x20
#define MASK_TIM1_IER_TIE        0x40
#define MASK_TIM1_IER_BIE        0x80

#define MASK_TIM1_SR1_UIF        0x01
#define MASK_TIM1_SR1_CC1IF      0x02
#define MASK_TIM1_SR1_CC2IF      0x04
#define MASK_TIM1_SR1_CC3IF      0x08
#define MASK_TIM1_SR1_CC4IF      0x10
#define MASK_TIM1_SR1_COMIF      0x20
#define MASK_TIM1_SR1_TIF        0x40
#define MASK_TIM1_SR1_BIF        0x80

#define MASK_TIM1_SR2_CC1OF      0x02
#define MASK_TIM1_SR2_CC2OF      0x04
#define MASK_TIM1_SR2_CC3OF      0x08
#define MASK_TIM1_SR2_CC4OF      0x10

#define MASK_TIM1_EGR_UG         0x01
#define MASK_TIM1_EGR_CC1G       0x02
#define MASK_TIM1_EGR_CC2G       0x04
#define MASK_TIM1_EGR_CC3G       0x08
#define MASK_TIM1_EGR_CC4G       0x10
#define MASK_TIM1_EGR_COMG       0x20
#define MASK_TIM1_EGR_TG         0x40
#define MASK_TIM1_EGR_BG         0x80

#define MASK_TIM1_CCMR1_CC1S     0x03
#define MASK_TIM1_CCMR1_OC1FE    0x04
#define MASK_TIM1_CCMR1_OC1PE    0x08
#define MASK_TIM1_CCMR1_OC1M     0x70
#define MASK_TIM1_CCMR1_OC1CE    0x80

#define MASK_TIM1_CCMR2_CC2S     0x03
#define MASK_TIM1_CCMR2_OC2FE    0x04
#define MASK_TIM1_CCMR2_OC2PE    0x08
#define MASK_TIM1_CCMR2_OC2M     0x70
#define MASK_TIM1_CCMR2_OC2CE    0x80

#define MASK_TIM1_CCMR3_CC3S     0x03
#define MASK_TIM1_CCMR3_OC3FE    0x04
#define MASK_TIM1_CCMR3_OC3PE    0x08
#define MASK_TIM1_CCMR3_OC3M     0x70
#define MASK_TIM1_CCMR3_OC3CE    0x80

#define MASK_TIM1_CCMR4_CC4S     0x03
#define MASK_TIM1_CCMR4_OC4PE    0x08
#define MASK_TIM1_CCMR4_OC4M     0x70
#define MASK_TIM1_CCMR4_OC4CE    0x80

#define MASK_TIM1_CCER1_CC1E     0x01
#define MASK_TIM1_CCER1_CC1P     0x02
#define MASK_TIM1_CCER1_CC1NE    0x04
#define MASK_TIM1_CCER1_CC1NP    0x08
#define MASK_TIM1_CCER1_CC2E     0x10
#define MASK_TIM1_CCER1_CC2P     0x20
#define MASK_TIM1_CCER1_CC2NE    0x40
#define MASK_TIM1_CCER1_CC2NP    0x80

#define MASK_TIM1_CCER2_CC3E     0x01
#define MASK_TIM1_CCER2_CC3P     0x02
#define MASK_TIM1_CCER2_CC3NE    0x04
#define MASK_TIM1_CCER2_CC3NP    0x08
#define MASK_TIM1_CCER2_CC4E     0x10
#define MASK_TIM1_CCER2_CC4P     0x20

#define MASK_TIM1_CNTRH_CNT8     0x01
#define MASK_TIM1_CNTRH_CNT9     0x02
#define MASK_TIM1_CNTRH_CNT10    0x04
#define MASK_TIM1_CNTRH_CNT11    0x08
#define MASK_TIM1_CNTRH_CNT12    0x10
#define MASK_TIM1_CNTRH_CNT13    0x20
#define MASK_TIM1_CNTRH_CNT14    0x40
#define MASK_TIM1_CNTRH_CNT15    0x80

#define MASK_TIM1_CNTRL_CNT0     0x01
#define MASK_TIM1_CNTRL_CNT1     0x02
#define MASK_TIM1_CNTRL_CNT2     0x04
#define MASK_TIM1_CNTRL_CNT3     0x08
#define MASK_TIM1_CNTRL_CNT4     0x10
#define MASK_TIM1_CNTRL_CNT5     0x20
#define MASK_TIM1_CNTRL_CNT6     0x40
#define MASK_TIM1_CNTRL_CNT7     0x80

#define MASK_TIM1_PSCRH_PSC8     0x01
#define MASK_TIM1_PSCRH_PSC9     0x02
#define MASK_TIM1_PSCRH_PSC10    0x04
#define MASK_TIM1_PSCRH_PSC11    0x08
#define MASK_TIM1_PSCRH_PSC12    0x10
#define MASK_TIM1_PSCRH_PSC13    0x20
#define MASK_TIM1_PSCRH_PSC14    0x40
#define MASK_TIM1_PSCRH_PSC15    0x80

#define MASK_TIM1_PSCRL_PSC0     0x01
#define MASK_TIM1_PSCRL_PSC1     0x02
#define MASK_TIM1_PSCRL_PSC2     0x04
#define MASK_TIM1_PSCRL_PSC3     0x08
#define MASK_TIM1_PSCRL_PSC4     0x10
#define MASK_TIM1_PSCRL_PSC5     0x20
#define MASK_TIM1_PSCRL_PSC6     0x40
#define MASK_TIM1_PSCRL_PSC7     0x80

#define MASK_TIM1_ARRH_ARR8      0x01
#define MASK_TIM1_ARRH_ARR9      0x02
#define MASK_TIM1_ARRH_ARR10     0x04
#define MASK_TIM1_ARRH_ARR11     0x08
#define MASK_TIM1_ARRH_ARR12     0x10
#define MASK_TIM1_ARRH_ARR13     0x20
#define MASK_TIM1_ARRH_ARR14     0x40
#define MASK_TIM1_ARRH_ARR15     0x80

#define MASK_TIM1_ARRL_ARR0      0x01
#define MASK_TIM1_ARRL_ARR1      0x02
#define MASK_TIM1_ARRL_ARR2      0x04
#define MASK_TIM1_ARRL_ARR3      0x08
#define MASK_TIM1_ARRL_ARR4      0x10
#define MASK_TIM1_ARRL_ARR5      0x20
#define MASK_TIM1_ARRL_ARR6      0x40
#define MASK_TIM1_ARRL_ARR7      0x80

#define MASK_TIM1_CCR1H_CCR18    0x01
#define MASK_TIM1_CCR1H_CCR19    0x02
#define MASK_TIM1_CCR1H_CCR110   0x04
#define MASK_TIM1_CCR1H_CCR111   0x08
#define MASK_TIM1_CCR1H_CCR112   0x10
#define MASK_TIM1_CCR1H_CCR113   0x20
#define MASK_TIM1_CCR1H_CCR114   0x40
#define MASK_TIM1_CCR1H_CCR115   0x80

#define MASK_TIM1_CCR1L_CCR10    0x01
#define MASK_TIM1_CCR1L_CCR11    0x02
#define MASK_TIM1_CCR1L_CCR12    0x04
#define MASK_TIM1_CCR1L_CCR13    0x08
#define MASK_TIM1_CCR1L_CCR14    0x10
#define MASK_TIM1_CCR1L_CCR15    0x20
#define MASK_TIM1_CCR1L_CCR16    0x40
#define MASK_TIM1_CCR1L_CCR17    0x80

#define MASK_TIM1_CCR2H_CCR28    0x01
#define MASK_TIM1_CCR2H_CCR29    0x02
#define MASK_TIM1_CCR2H_CCR210   0x04
#define MASK_TIM1_CCR2H_CCR211   0x08
#define MASK_TIM1_CCR2H_CCR212   0x10
#define MASK_TIM1_CCR2H_CCR213   0x20
#define MASK_TIM1_CCR2H_CCR214   0x40
#define MASK_TIM1_CCR2H_CCR215   0x80

#define MASK_TIM1_CCR2L_CCR20    0x01
#define MASK_TIM1_CCR2L_CCR21    0x02
#define MASK_TIM1_CCR2L_CCR22    0x04
#define MASK_TIM1_CCR2L_CCR23    0x08
#define MASK_TIM1_CCR2L_CCR24    0x10
#define MASK_TIM1_CCR2L_CCR25    0x20
#define MASK_TIM1_CCR2L_CCR26    0x40
#define MASK_TIM1_CCR2L_CCR27    0x80

#define MASK_TIM1_CCR3H_CCR38    0x01
#define MASK_TIM1_CCR3H_CCR39    0x02
#define MASK_TIM1_CCR3H_CCR310   0x04
#define MASK_TIM1_CCR3H_CCR311   0x08
#define MASK_TIM1_CCR3H_CCR312   0x10
#define MASK_TIM1_CCR3H_CCR313   0x20
#define MASK_TIM1_CCR3H_CCR314   0x40
#define MASK_TIM1_CCR3H_CCR315   0x80

#define MASK_TIM1_CCR3L_CCR30    0x01
#define MASK_TIM1_CCR3L_CCR31    0x02
#define MASK_TIM1_CCR3L_CCR32    0x04
#define MASK_TIM1_CCR3L_CCR33    0x08
#define MASK_TIM1_CCR3L_CCR34    0x10
#define MASK_TIM1_CCR3L_CCR35    0x20
#define MASK_TIM1_CCR3L_CCR36    0x40
#define MASK_TIM1_CCR3L_CCR37    0x80

#define MASK_TIM1_CCR4H_CCR48    0x01
#define MASK_TIM1_CCR4H_CCR49    0x02
#define MASK_TIM1_CCR4H_CCR410   0x04
#define MASK_TIM1_CCR4H_CCR411   0x08
#define MASK_TIM1_CCR4H_CCR412   0x10
#define MASK_TIM1_CCR4H_CCR413   0x20
#define MASK_TIM1_CCR4H_CCR414   0x40
#define MASK_TIM1_CCR4H_CCR415   0x80

#define MASK_TIM1_CCR4L_CCR40    0x01
#define MASK_TIM1_CCR4L_CCR41    0x02
#define MASK_TIM1_CCR4L_CCR42    0x04
#define MASK_TIM1_CCR4L_CCR43    0x08
#define MASK_TIM1_CCR4L_CCR44    0x10
#define MASK_TIM1_CCR4L_CCR45    0x20
#define MASK_TIM1_CCR4L_CCR46    0x40
#define MASK_TIM1_CCR4L_CCR47    0x80

#define MASK_TIM1_BKR_LOCK       0x03
#define MASK_TIM1_BKR_OSSI       0x04
#define MASK_TIM1_BKR_OSSR       0x08
#define MASK_TIM1_BKR_BKE        0x10
#define MASK_TIM1_BKR_BKP        0x20
#define MASK_TIM1_BKR_AOE        0x40
#define MASK_TIM1_BKR_MOE        0x80

#define MASK_TIM1_OISR_OIS1      0x01
#define MASK_TIM1_OISR_OIS1N     0x02
#define MASK_TIM1_OISR_OIS2      0x04
#define MASK_TIM1_OISR_OIS2N     0x08
#define MASK_TIM1_OISR_OIS3      0x10
#define MASK_TIM1_OISR_OIS3N     0x20

#define MASK_TIM1_DCR1_DBA       0x1F

#define MASK_TIM1_DCR2_DBL       0x1F


/*-------------------------------------------------------------------------
 *      TIM4 register definitions
 *-----------------------------------------------------------------------*/
/* TIM4 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char             : 3;
  unsigned char ARPE        : 1;
} __BITS_TIM4_CR1;
#endif
//__IO_REG8_BIT(TIM4_CR1,    0x52E0, __READ_WRITE, __BITS_TIM4_CR1);
unsigned char TIM4_CR1; //0x52E0 __READ_WRITE
__BITS_TIM4_CR1 TIM4_CR1_bit;

/* TIM4 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char MMS         : 3;
} __BITS_TIM4_CR2;
#endif
//__IO_REG8_BIT(TIM4_CR2,    0x52E1, __READ_WRITE, __BITS_TIM4_CR2);
unsigned char TIM4_CR2; //0x52E1 __READ_WRITE
__BITS_TIM4_CR2 TIM4_CR2_bit;

/* TIM4 Slave mode control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char             : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM4_SMCR;
#endif
//__IO_REG8_BIT(TIM4_SMCR,   0x52E2, __READ_WRITE, __BITS_TIM4_SMCR);
unsigned char TIM4_SMCR; //0x52E2 __READ_WRITE
__BITS_TIM4_SMCR TIM4_SMCR_bit;

/* TIM4 DMA1 request enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UDE         : 1;
} __BITS_TIM4_DER;
#endif
//__IO_REG8_BIT(TIM4_DER,    0x52E3, __READ_WRITE, __BITS_TIM4_DER);
unsigned char TIM4_DER; //0x52E3 __READ_WRITE
__BITS_TIM4_DER TIM4_DER_bit;

/* TIM4 Interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char             : 5;
  unsigned char TIE         : 1;
} __BITS_TIM4_IER;
#endif
//__IO_REG8_BIT(TIM4_IER,    0x52E4, __READ_WRITE, __BITS_TIM4_IER);
unsigned char TIM4_IER; //0x52E4 __READ_WRITE
__BITS_TIM4_IER TIM4_IER_bit;

/* TIM4 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char             : 5;
  unsigned char TIF         : 1;
} __BITS_TIM4_SR1;
#endif
//__IO_REG8_BIT(TIM4_SR1,    0x52E5, __READ_WRITE, __BITS_TIM4_SR1);
unsigned char TIM4_SR1; //0x52E5 __READ_WRITE
__BITS_TIM4_SR1 TIM4_SR1_bit;

/* TIM4 Event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char             : 5;
  unsigned char TG          : 1;
} __BITS_TIM4_EGR;
#endif
//__IO_REG8_BIT(TIM4_EGR,    0x52E6, __WRITE, __BITS_TIM4_EGR);
unsigned char TIM4_EGR; //0x52E6 __WRITE
__BITS_TIM4_EGR TIM4_EGR_bit;

/* TIM4 counter */
//__IO_REG8    (TIM4_CNTR,   0x52E7, __READ_WRITE);
unsigned char TIM4_CNTR; //0x52E7 __READ_WRITE
/* TIM4 prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 4;
} __BITS_TIM4_PSCR;
#endif
//__IO_REG8_BIT(TIM4_PSCR,   0x52E8, __READ_WRITE, __BITS_TIM4_PSCR);
unsigned char TIM4_PSCR; //0x52E8 __READ_WRITE
__BITS_TIM4_PSCR TIM4_PSCR_bit;

/* TIM4 Auto-reload register */
//__IO_REG8    (TIM4_ARR,    0x52E9, __READ_WRITE);
unsigned char TIM4_ARR; //0x52E9 __READ_WRITE

/*-------------------------------------------------------------------------
 *      TIM4 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM4_CR1_CEN             TIM4_CR1_bit.CEN
#define TIM4_CR1_UDIS            TIM4_CR1_bit.UDIS
#define TIM4_CR1_URS             TIM4_CR1_bit.URS
#define TIM4_CR1_OPM             TIM4_CR1_bit.OPM
#define TIM4_CR1_ARPE            TIM4_CR1_bit.ARPE

#define TIM4_CR2_MMS             TIM4_CR2_bit.MMS

#define TIM4_SMCR_SMS            TIM4_SMCR_bit.SMS
#define TIM4_SMCR_TS             TIM4_SMCR_bit.TS
#define TIM4_SMCR_MSM            TIM4_SMCR_bit.MSM

#define TIM4_DER_UDE             TIM4_DER_bit.UDE

#define TIM4_IER_UIE             TIM4_IER_bit.UIE
#define TIM4_IER_TIE             TIM4_IER_bit.TIE

#define TIM4_SR1_UIF             TIM4_SR1_bit.UIF
#define TIM4_SR1_TIF             TIM4_SR1_bit.TIF

#define TIM4_EGR_UG              TIM4_EGR_bit.UG
#define TIM4_EGR_TG              TIM4_EGR_bit.TG

#define TIM4_PSCR_PSC            TIM4_PSCR_bit.PSC

#endif

/*-------------------------------------------------------------------------
 *      TIM4 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM4_CR1_CEN        0x01
#define MASK_TIM4_CR1_UDIS       0x02
#define MASK_TIM4_CR1_URS        0x04
#define MASK_TIM4_CR1_OPM        0x08
#define MASK_TIM4_CR1_ARPE       0x80

#define MASK_TIM4_CR2_MMS        0x70

#define MASK_TIM4_SMCR_SMS       0x07
#define MASK_TIM4_SMCR_TS        0x70
#define MASK_TIM4_SMCR_MSM       0x80

#define MASK_TIM4_DER_UDE        0x01

#define MASK_TIM4_IER_UIE        0x01
#define MASK_TIM4_IER_TIE        0x40

#define MASK_TIM4_SR1_UIF        0x01
#define MASK_TIM4_SR1_TIF        0x40

#define MASK_TIM4_EGR_UG         0x01
#define MASK_TIM4_EGR_TG         0x40

#define MASK_TIM4_PSCR_PSC       0x0F


/*-------------------------------------------------------------------------
 *      IRTIM register definitions
 *-----------------------------------------------------------------------*/
/* Infrared control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IR_EN       : 1;
  unsigned char HS_EN       : 1;
} __BITS_IR_CR;
#endif
//__IO_REG8_BIT(IR_CR,       0x52FF, __READ_WRITE, __BITS_IR_CR);
unsigned char IR_CR; //0x52FF __READ_WRITE
__BITS_IR_CR IR_CR_bit;


/*-------------------------------------------------------------------------
 *      IRTIM bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define IR_CR_IR_EN              IR_CR_bit.IR_EN
#define IR_CR_HS_EN              IR_CR_bit.HS_EN

#endif

/*-------------------------------------------------------------------------
 *      IRTIM bit masks
 *-----------------------------------------------------------------------*/
#define MASK_IR_CR_IR_EN         0x01
#define MASK_IR_CR_HS_EN         0x02


/*-------------------------------------------------------------------------
 *      TIM5 register definitions
 *-----------------------------------------------------------------------*/
/* TIM5 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char DIR         : 1;
  unsigned char CMS         : 2;
  unsigned char ARPE        : 1;
} __BITS_TIM5_CR1;
#endif
//__IO_REG8_BIT(TIM5_CR1,    0x5300, __READ_WRITE, __BITS_TIM5_CR1);
unsigned char TIM5_CR1; //0x5300 __READ_WRITE
__BITS_TIM5_CR1 TIM5_CR1_bit;

/* TIM5 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 3;
  unsigned char CCDS        : 1;
  unsigned char MMS         : 3;
  unsigned char TI1S        : 1;
} __BITS_TIM5_CR2;
#endif
//__IO_REG8_BIT(TIM5_CR2,    0x5301, __READ_WRITE, __BITS_TIM5_CR2);
unsigned char TIM5_CR2; //0x5301 __READ_WRITE
__BITS_TIM5_CR2 TIM5_CR2_bit;

/* TIM5 Slave mode control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char             : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM5_SMCR;
#endif
//__IO_REG8_BIT(TIM5_SMCR,   0x5302, __READ_WRITE, __BITS_TIM5_SMCR);
unsigned char TIM5_SMCR; //0x5302 __READ_WRITE
__BITS_TIM5_SMCR TIM5_SMCR_bit;

/* TIM5 external trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ETF         : 4;
  unsigned char ETPS        : 2;
  unsigned char ECE         : 1;
  unsigned char ETP         : 1;
} __BITS_TIM5_ETR;
#endif
//__IO_REG8_BIT(TIM5_ETR,    0x5303, __READ_WRITE, __BITS_TIM5_ETR);
unsigned char TIM5_ETR; //0x5303 __READ_WRITE
__BITS_TIM5_ETR TIM5_ETR_bit;

/* TIM5 DMA1 request enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UDE         : 1;
  unsigned char CC1DE       : 1;
  unsigned char CC2DE       : 1;
} __BITS_TIM5_DER;
#endif
//__IO_REG8_BIT(TIM5_DER,    0x5304, __READ_WRITE, __BITS_TIM5_DER);
unsigned char TIM5_DER; //0x5304 __READ_WRITE
__BITS_TIM5_DER TIM5_DER_bit;

/* TIM5 interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char             : 3;
  unsigned char TIE         : 1;
  unsigned char BIE         : 1;
} __BITS_TIM5_IER;
#endif
//__IO_REG8_BIT(TIM5_IER,    0x5305, __READ_WRITE, __BITS_TIM5_IER);
unsigned char TIM5_IER; //0x5305 __READ_WRITE
__BITS_TIM5_IER TIM5_IER_bit;

/* TIM5 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char             : 3;
  unsigned char TIF         : 1;
  unsigned char BIF         : 1;
} __BITS_TIM5_SR1;
#endif
//__IO_REG8_BIT(TIM5_SR1,    0x5306, __READ_WRITE, __BITS_TIM5_SR1);
unsigned char TIM5_SR1; //0x5306 __READ_WRITE
__BITS_TIM5_SR1 TIM5_SR1_bit;

/* TIM5 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
} __BITS_TIM5_SR2;
#endif
//__IO_REG8_BIT(TIM5_SR2,    0x5307, __READ_WRITE, __BITS_TIM5_SR2);
unsigned char TIM5_SR2; //0x5307 __READ_WRITE
__BITS_TIM5_SR2 TIM5_SR2_bit;

/* TIM5 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char             : 3;
  unsigned char TG          : 1;
  unsigned char BG          : 1;
} __BITS_TIM5_EGR;
#endif
//__IO_REG8_BIT(TIM5_EGR,    0x5308, __WRITE, __BITS_TIM5_EGR);
unsigned char TIM5_EGR; //0x5308 __WRITE
__BITS_TIM5_EGR TIM5_EGR_bit;

/* TIM5 Capture/Compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char OC1FE       : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
} __BITS_TIM5_CCMR1;
#endif
//__IO_REG8_BIT(TIM5_CCMR1,  0x5309, __READ_WRITE, __BITS_TIM5_CCMR1);
unsigned char TIM5_CCMR1; //0x5309 __READ_WRITE
__BITS_TIM5_CCMR1 TIM5_CCMR1_bit;

/* TIM5 Capture/Compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char OC2FE       : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
} __BITS_TIM5_CCMR2;
#endif
//__IO_REG8_BIT(TIM5_CCMR2,  0x530A, __READ_WRITE, __BITS_TIM5_CCMR2);
unsigned char TIM5_CCMR2; //0x530A __READ_WRITE
__BITS_TIM5_CCMR2 TIM5_CCMR2_bit;

/* TIM5 Capture/Compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char             : 2;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
} __BITS_TIM5_CCER1;
#endif
//__IO_REG8_BIT(TIM5_CCER1,  0x530B, __READ_WRITE, __BITS_TIM5_CCER1);
unsigned char TIM5_CCER1; //0x530B __READ_WRITE
__BITS_TIM5_CCER1 TIM5_CCER1_bit;

/* TIM5 counter high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT8        : 1;
  unsigned char CNT9        : 1;
  unsigned char CNT10       : 1;
  unsigned char CNT11       : 1;
  unsigned char CNT12       : 1;
  unsigned char CNT13       : 1;
  unsigned char CNT14       : 1;
  unsigned char CNT15       : 1;
} __BITS_TIM5_CNTRH;
#endif
//__IO_REG8_BIT(TIM5_CNTRH,  0x530C, __READ_WRITE, __BITS_TIM5_CNTRH);
unsigned char TIM5_CNTRH; //0x530C __READ_WRITE
__BITS_TIM5_CNTRH TIM5_CNTRH_bit;

/* TIM5 counter low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT0        : 1;
  unsigned char CNT1        : 1;
  unsigned char CNT2        : 1;
  unsigned char CNT3        : 1;
  unsigned char CNT4        : 1;
  unsigned char CNT5        : 1;
  unsigned char CNT6        : 1;
  unsigned char CNT7        : 1;
} __BITS_TIM5_CNTRL;
#endif
//__IO_REG8_BIT(TIM5_CNTRL,  0x530D, __READ_WRITE, __BITS_TIM5_CNTRL);
unsigned char TIM5_CNTRL; //0x530D __READ_WRITE
__BITS_TIM5_CNTRL TIM5_CNTRL_bit;

/* TIM5 prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 3;
} __BITS_TIM5_PSCR;
#endif
//__IO_REG8_BIT(TIM5_PSCR,   0x530E, __READ_WRITE, __BITS_TIM5_PSCR);
unsigned char TIM5_PSCR; //0x530E __READ_WRITE
__BITS_TIM5_PSCR TIM5_PSCR_bit;

/* TIM5 Auto-reload register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR8        : 1;
  unsigned char ARR9        : 1;
  unsigned char ARR10       : 1;
  unsigned char ARR11       : 1;
  unsigned char ARR12       : 1;
  unsigned char ARR13       : 1;
  unsigned char ARR14       : 1;
  unsigned char ARR15       : 1;
} __BITS_TIM5_ARRH;
#endif
//__IO_REG8_BIT(TIM5_ARRH,   0x530F, __READ_WRITE, __BITS_TIM5_ARRH);
unsigned char TIM5_ARRH; //0x530F __READ_WRITE
__BITS_TIM5_ARRH TIM5_ARRH_bit;

/* TIM5 Auto-reload register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR0        : 1;
  unsigned char ARR1        : 1;
  unsigned char ARR2        : 1;
  unsigned char ARR3        : 1;
  unsigned char ARR4        : 1;
  unsigned char ARR5        : 1;
  unsigned char ARR6        : 1;
  unsigned char ARR7        : 1;
} __BITS_TIM5_ARRL;
#endif
//__IO_REG8_BIT(TIM5_ARRL,   0x5310, __READ_WRITE, __BITS_TIM5_ARRL);
unsigned char TIM5_ARRL; //0x5310 __READ_WRITE
__BITS_TIM5_ARRL TIM5_ARRL_bit;

/* TIM5 Capture/Compare register 1 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR18       : 1;
  unsigned char CCR19       : 1;
  unsigned char CCR110      : 1;
  unsigned char CCR111      : 1;
  unsigned char CCR112      : 1;
  unsigned char CCR113      : 1;
  unsigned char CCR114      : 1;
  unsigned char CCR115      : 1;
} __BITS_TIM5_CCR1H;
#endif
//__IO_REG8_BIT(TIM5_CCR1H,  0x5311, __READ_WRITE, __BITS_TIM5_CCR1H);
unsigned char TIM5_CCR1H; //0x5311 __READ_WRITE
__BITS_TIM5_CCR1H TIM5_CCR1H_bit;

/* TIM5 Capture/Compare register 1 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM5_CCR1L;
#endif
//__IO_REG8_BIT(TIM5_CCR1L,  0x5312, __READ_WRITE, __BITS_TIM5_CCR1L);
unsigned char TIM5_CCR1L; //0x5312 __READ_WRITE
__BITS_TIM5_CCR1L TIM5_CCR1L_bit;

/* TIM5 Capture/Compare register 2 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR28       : 1;
  unsigned char CCR29       : 1;
  unsigned char CCR210      : 1;
  unsigned char CCR211      : 1;
  unsigned char CCR212      : 1;
  unsigned char CCR213      : 1;
  unsigned char CCR214      : 1;
  unsigned char CCR215      : 1;
} __BITS_TIM5_CCR2H;
#endif
//__IO_REG8_BIT(TIM5_CCR2H,  0x5313, __READ_WRITE, __BITS_TIM5_CCR2H);
unsigned char TIM5_CCR2H; //0x5313 __READ_WRITE
__BITS_TIM5_CCR2H TIM5_CCR2H_bit;

/* TIM5 Capture/Compare register 2 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM5_CCR2L;
#endif
//__IO_REG8_BIT(TIM5_CCR2L,  0x5314, __READ_WRITE, __BITS_TIM5_CCR2L);
unsigned char TIM5_CCR2L; //0x5314 __READ_WRITE
__BITS_TIM5_CCR2L TIM5_CCR2L_bit;

/* TIM5 break register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LOCK        : 2;
  unsigned char OSSI        : 1;
  unsigned char             : 1;
  unsigned char BKE         : 1;
  unsigned char BKP         : 1;
  unsigned char AOE         : 1;
  unsigned char MOE         : 1;
} __BITS_TIM5_BKR;
#endif
//__IO_REG8_BIT(TIM5_BKR,    0x5315, __READ_WRITE, __BITS_TIM5_BKR);
unsigned char TIM5_BKR; //0x5315 __READ_WRITE
__BITS_TIM5_BKR TIM5_BKR_bit;

/* TIM5 output idle state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char OIS1        : 1;
  unsigned char             : 1;
  unsigned char OIS2        : 1;
} __BITS_TIM5_OISR;
#endif
//__IO_REG8_BIT(TIM5_OISR,   0x5316, __READ_WRITE, __BITS_TIM5_OISR);
unsigned char TIM5_OISR; //0x5316 __READ_WRITE
__BITS_TIM5_OISR TIM5_OISR_bit;


/*-------------------------------------------------------------------------
 *      TIM5 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM5_CR1_CEN             TIM5_CR1_bit.CEN
#define TIM5_CR1_UDIS            TIM5_CR1_bit.UDIS
#define TIM5_CR1_URS             TIM5_CR1_bit.URS
#define TIM5_CR1_OPM             TIM5_CR1_bit.OPM
#define TIM5_CR1_DIR             TIM5_CR1_bit.DIR
#define TIM5_CR1_CMS             TIM5_CR1_bit.CMS
#define TIM5_CR1_ARPE            TIM5_CR1_bit.ARPE

#define TIM5_CR2_CCDS            TIM5_CR2_bit.CCDS
#define TIM5_CR2_MMS             TIM5_CR2_bit.MMS
#define TIM5_CR2_TI1S            TIM5_CR2_bit.TI1S

#define TIM5_SMCR_SMS            TIM5_SMCR_bit.SMS
#define TIM5_SMCR_TS             TIM5_SMCR_bit.TS
#define TIM5_SMCR_MSM            TIM5_SMCR_bit.MSM

#define TIM5_ETR_ETF             TIM5_ETR_bit.ETF
#define TIM5_ETR_ETPS            TIM5_ETR_bit.ETPS
#define TIM5_ETR_ECE             TIM5_ETR_bit.ECE
#define TIM5_ETR_ETP             TIM5_ETR_bit.ETP

#define TIM5_DER_UDE             TIM5_DER_bit.UDE
#define TIM5_DER_CC1DE           TIM5_DER_bit.CC1DE
#define TIM5_DER_CC2DE           TIM5_DER_bit.CC2DE

#define TIM5_IER_UIE             TIM5_IER_bit.UIE
#define TIM5_IER_CC1IE           TIM5_IER_bit.CC1IE
#define TIM5_IER_CC2IE           TIM5_IER_bit.CC2IE
#define TIM5_IER_TIE             TIM5_IER_bit.TIE
#define TIM5_IER_BIE             TIM5_IER_bit.BIE

#define TIM5_SR1_UIF             TIM5_SR1_bit.UIF
#define TIM5_SR1_CC1IF           TIM5_SR1_bit.CC1IF
#define TIM5_SR1_CC2IF           TIM5_SR1_bit.CC2IF
#define TIM5_SR1_TIF             TIM5_SR1_bit.TIF
#define TIM5_SR1_BIF             TIM5_SR1_bit.BIF

#define TIM5_SR2_CC1OF           TIM5_SR2_bit.CC1OF
#define TIM5_SR2_CC2OF           TIM5_SR2_bit.CC2OF

#define TIM5_EGR_UG              TIM5_EGR_bit.UG
#define TIM5_EGR_CC1G            TIM5_EGR_bit.CC1G
#define TIM5_EGR_CC2G            TIM5_EGR_bit.CC2G
#define TIM5_EGR_TG              TIM5_EGR_bit.TG
#define TIM5_EGR_BG              TIM5_EGR_bit.BG

#define TIM5_CCMR1_CC1S          TIM5_CCMR1_bit.CC1S
#define TIM5_CCMR1_OC1FE         TIM5_CCMR1_bit.OC1FE
#define TIM5_CCMR1_OC1PE         TIM5_CCMR1_bit.OC1PE
#define TIM5_CCMR1_OC1M          TIM5_CCMR1_bit.OC1M

#define TIM5_CCMR2_CC2S          TIM5_CCMR2_bit.CC2S
#define TIM5_CCMR2_OC2FE         TIM5_CCMR2_bit.OC2FE
#define TIM5_CCMR2_OC2PE         TIM5_CCMR2_bit.OC2PE
#define TIM5_CCMR2_OC2M          TIM5_CCMR2_bit.OC2M

#define TIM5_CCER1_CC1E          TIM5_CCER1_bit.CC1E
#define TIM5_CCER1_CC1P          TIM5_CCER1_bit.CC1P
#define TIM5_CCER1_CC2E          TIM5_CCER1_bit.CC2E
#define TIM5_CCER1_CC2P          TIM5_CCER1_bit.CC2P

#define TIM5_CNTRH_CNT8          TIM5_CNTRH_bit.CNT8
#define TIM5_CNTRH_CNT9          TIM5_CNTRH_bit.CNT9
#define TIM5_CNTRH_CNT10         TIM5_CNTRH_bit.CNT10
#define TIM5_CNTRH_CNT11         TIM5_CNTRH_bit.CNT11
#define TIM5_CNTRH_CNT12         TIM5_CNTRH_bit.CNT12
#define TIM5_CNTRH_CNT13         TIM5_CNTRH_bit.CNT13
#define TIM5_CNTRH_CNT14         TIM5_CNTRH_bit.CNT14
#define TIM5_CNTRH_CNT15         TIM5_CNTRH_bit.CNT15

#define TIM5_CNTRL_CNT0          TIM5_CNTRL_bit.CNT0
#define TIM5_CNTRL_CNT1          TIM5_CNTRL_bit.CNT1
#define TIM5_CNTRL_CNT2          TIM5_CNTRL_bit.CNT2
#define TIM5_CNTRL_CNT3          TIM5_CNTRL_bit.CNT3
#define TIM5_CNTRL_CNT4          TIM5_CNTRL_bit.CNT4
#define TIM5_CNTRL_CNT5          TIM5_CNTRL_bit.CNT5
#define TIM5_CNTRL_CNT6          TIM5_CNTRL_bit.CNT6
#define TIM5_CNTRL_CNT7          TIM5_CNTRL_bit.CNT7

#define TIM5_PSCR_PSC            TIM5_PSCR_bit.PSC

#define TIM5_ARRH_ARR8           TIM5_ARRH_bit.ARR8
#define TIM5_ARRH_ARR9           TIM5_ARRH_bit.ARR9
#define TIM5_ARRH_ARR10          TIM5_ARRH_bit.ARR10
#define TIM5_ARRH_ARR11          TIM5_ARRH_bit.ARR11
#define TIM5_ARRH_ARR12          TIM5_ARRH_bit.ARR12
#define TIM5_ARRH_ARR13          TIM5_ARRH_bit.ARR13
#define TIM5_ARRH_ARR14          TIM5_ARRH_bit.ARR14
#define TIM5_ARRH_ARR15          TIM5_ARRH_bit.ARR15

#define TIM5_ARRL_ARR0           TIM5_ARRL_bit.ARR0
#define TIM5_ARRL_ARR1           TIM5_ARRL_bit.ARR1
#define TIM5_ARRL_ARR2           TIM5_ARRL_bit.ARR2
#define TIM5_ARRL_ARR3           TIM5_ARRL_bit.ARR3
#define TIM5_ARRL_ARR4           TIM5_ARRL_bit.ARR4
#define TIM5_ARRL_ARR5           TIM5_ARRL_bit.ARR5
#define TIM5_ARRL_ARR6           TIM5_ARRL_bit.ARR6
#define TIM5_ARRL_ARR7           TIM5_ARRL_bit.ARR7

#define TIM5_CCR1H_CCR18         TIM5_CCR1H_bit.CCR18
#define TIM5_CCR1H_CCR19         TIM5_CCR1H_bit.CCR19
#define TIM5_CCR1H_CCR110        TIM5_CCR1H_bit.CCR110
#define TIM5_CCR1H_CCR111        TIM5_CCR1H_bit.CCR111
#define TIM5_CCR1H_CCR112        TIM5_CCR1H_bit.CCR112
#define TIM5_CCR1H_CCR113        TIM5_CCR1H_bit.CCR113
#define TIM5_CCR1H_CCR114        TIM5_CCR1H_bit.CCR114
#define TIM5_CCR1H_CCR115        TIM5_CCR1H_bit.CCR115

#define TIM5_CCR1L_CCR10         TIM5_CCR1L_bit.CCR10
#define TIM5_CCR1L_CCR11         TIM5_CCR1L_bit.CCR11
#define TIM5_CCR1L_CCR12         TIM5_CCR1L_bit.CCR12
#define TIM5_CCR1L_CCR13         TIM5_CCR1L_bit.CCR13
#define TIM5_CCR1L_CCR14         TIM5_CCR1L_bit.CCR14
#define TIM5_CCR1L_CCR15         TIM5_CCR1L_bit.CCR15
#define TIM5_CCR1L_CCR16         TIM5_CCR1L_bit.CCR16
#define TIM5_CCR1L_CCR17         TIM5_CCR1L_bit.CCR17

#define TIM5_CCR2H_CCR28         TIM5_CCR2H_bit.CCR28
#define TIM5_CCR2H_CCR29         TIM5_CCR2H_bit.CCR29
#define TIM5_CCR2H_CCR210        TIM5_CCR2H_bit.CCR210
#define TIM5_CCR2H_CCR211        TIM5_CCR2H_bit.CCR211
#define TIM5_CCR2H_CCR212        TIM5_CCR2H_bit.CCR212
#define TIM5_CCR2H_CCR213        TIM5_CCR2H_bit.CCR213
#define TIM5_CCR2H_CCR214        TIM5_CCR2H_bit.CCR214
#define TIM5_CCR2H_CCR215        TIM5_CCR2H_bit.CCR215

#define TIM5_CCR2L_CCR10         TIM5_CCR2L_bit.CCR10
#define TIM5_CCR2L_CCR11         TIM5_CCR2L_bit.CCR11
#define TIM5_CCR2L_CCR12         TIM5_CCR2L_bit.CCR12
#define TIM5_CCR2L_CCR13         TIM5_CCR2L_bit.CCR13
#define TIM5_CCR2L_CCR14         TIM5_CCR2L_bit.CCR14
#define TIM5_CCR2L_CCR15         TIM5_CCR2L_bit.CCR15
#define TIM5_CCR2L_CCR16         TIM5_CCR2L_bit.CCR16
#define TIM5_CCR2L_CCR17         TIM5_CCR2L_bit.CCR17

#define TIM5_BKR_LOCK            TIM5_BKR_bit.LOCK
#define TIM5_BKR_OSSI            TIM5_BKR_bit.OSSI
#define TIM5_BKR_BKE             TIM5_BKR_bit.BKE
#define TIM5_BKR_BKP             TIM5_BKR_bit.BKP
#define TIM5_BKR_AOE             TIM5_BKR_bit.AOE
#define TIM5_BKR_MOE             TIM5_BKR_bit.MOE

#define TIM5_OISR_OIS1           TIM5_OISR_bit.OIS1
#define TIM5_OISR_OIS2           TIM5_OISR_bit.OIS2

#endif

/*-------------------------------------------------------------------------
 *      TIM5 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM5_CR1_CEN        0x01
#define MASK_TIM5_CR1_UDIS       0x02
#define MASK_TIM5_CR1_URS        0x04
#define MASK_TIM5_CR1_OPM        0x08
#define MASK_TIM5_CR1_DIR        0x10
#define MASK_TIM5_CR1_CMS        0x60
#define MASK_TIM5_CR1_ARPE       0x80

#define MASK_TIM5_CR2_CCDS       0x08
#define MASK_TIM5_CR2_MMS        0x70
#define MASK_TIM5_CR2_TI1S       0x80

#define MASK_TIM5_SMCR_SMS       0x07
#define MASK_TIM5_SMCR_TS        0x70
#define MASK_TIM5_SMCR_MSM       0x80

#define MASK_TIM5_ETR_ETF        0x0F
#define MASK_TIM5_ETR_ETPS       0x30
#define MASK_TIM5_ETR_ECE        0x40
#define MASK_TIM5_ETR_ETP        0x80

#define MASK_TIM5_DER_UDE        0x01
#define MASK_TIM5_DER_CC1DE      0x02
#define MASK_TIM5_DER_CC2DE      0x04

#define MASK_TIM5_IER_UIE        0x01
#define MASK_TIM5_IER_CC1IE      0x02
#define MASK_TIM5_IER_CC2IE      0x04
#define MASK_TIM5_IER_TIE        0x40
#define MASK_TIM5_IER_BIE        0x80

#define MASK_TIM5_SR1_UIF        0x01
#define MASK_TIM5_SR1_CC1IF      0x02
#define MASK_TIM5_SR1_CC2IF      0x04
#define MASK_TIM5_SR1_TIF        0x40
#define MASK_TIM5_SR1_BIF        0x80

#define MASK_TIM5_SR2_CC1OF      0x02
#define MASK_TIM5_SR2_CC2OF      0x04

#define MASK_TIM5_EGR_UG         0x01
#define MASK_TIM5_EGR_CC1G       0x02
#define MASK_TIM5_EGR_CC2G       0x04
#define MASK_TIM5_EGR_TG         0x40
#define MASK_TIM5_EGR_BG         0x80

#define MASK_TIM5_CCMR1_CC1S     0x03
#define MASK_TIM5_CCMR1_OC1FE    0x04
#define MASK_TIM5_CCMR1_OC1PE    0x08
#define MASK_TIM5_CCMR1_OC1M     0x70

#define MASK_TIM5_CCMR2_CC2S     0x03
#define MASK_TIM5_CCMR2_OC2FE    0x04
#define MASK_TIM5_CCMR2_OC2PE    0x08
#define MASK_TIM5_CCMR2_OC2M     0x70

#define MASK_TIM5_CCER1_CC1E     0x01
#define MASK_TIM5_CCER1_CC1P     0x02
#define MASK_TIM5_CCER1_CC2E     0x10
#define MASK_TIM5_CCER1_CC2P     0x20

#define MASK_TIM5_CNTRH_CNT8     0x01
#define MASK_TIM5_CNTRH_CNT9     0x02
#define MASK_TIM5_CNTRH_CNT10    0x04
#define MASK_TIM5_CNTRH_CNT11    0x08
#define MASK_TIM5_CNTRH_CNT12    0x10
#define MASK_TIM5_CNTRH_CNT13    0x20
#define MASK_TIM5_CNTRH_CNT14    0x40
#define MASK_TIM5_CNTRH_CNT15    0x80

#define MASK_TIM5_CNTRL_CNT0     0x01
#define MASK_TIM5_CNTRL_CNT1     0x02
#define MASK_TIM5_CNTRL_CNT2     0x04
#define MASK_TIM5_CNTRL_CNT3     0x08
#define MASK_TIM5_CNTRL_CNT4     0x10
#define MASK_TIM5_CNTRL_CNT5     0x20
#define MASK_TIM5_CNTRL_CNT6     0x40
#define MASK_TIM5_CNTRL_CNT7     0x80

#define MASK_TIM5_PSCR_PSC       0x07

#define MASK_TIM5_ARRH_ARR8      0x01
#define MASK_TIM5_ARRH_ARR9      0x02
#define MASK_TIM5_ARRH_ARR10     0x04
#define MASK_TIM5_ARRH_ARR11     0x08
#define MASK_TIM5_ARRH_ARR12     0x10
#define MASK_TIM5_ARRH_ARR13     0x20
#define MASK_TIM5_ARRH_ARR14     0x40
#define MASK_TIM5_ARRH_ARR15     0x80

#define MASK_TIM5_ARRL_ARR0      0x01
#define MASK_TIM5_ARRL_ARR1      0x02
#define MASK_TIM5_ARRL_ARR2      0x04
#define MASK_TIM5_ARRL_ARR3      0x08
#define MASK_TIM5_ARRL_ARR4      0x10
#define MASK_TIM5_ARRL_ARR5      0x20
#define MASK_TIM5_ARRL_ARR6      0x40
#define MASK_TIM5_ARRL_ARR7      0x80

#define MASK_TIM5_CCR1H_CCR18    0x01
#define MASK_TIM5_CCR1H_CCR19    0x02
#define MASK_TIM5_CCR1H_CCR110   0x04
#define MASK_TIM5_CCR1H_CCR111   0x08
#define MASK_TIM5_CCR1H_CCR112   0x10
#define MASK_TIM5_CCR1H_CCR113   0x20
#define MASK_TIM5_CCR1H_CCR114   0x40
#define MASK_TIM5_CCR1H_CCR115   0x80

#define MASK_TIM5_CCR1L_CCR10    0x01
#define MASK_TIM5_CCR1L_CCR11    0x02
#define MASK_TIM5_CCR1L_CCR12    0x04
#define MASK_TIM5_CCR1L_CCR13    0x08
#define MASK_TIM5_CCR1L_CCR14    0x10
#define MASK_TIM5_CCR1L_CCR15    0x20
#define MASK_TIM5_CCR1L_CCR16    0x40
#define MASK_TIM5_CCR1L_CCR17    0x80

#define MASK_TIM5_CCR2H_CCR28    0x01
#define MASK_TIM5_CCR2H_CCR29    0x02
#define MASK_TIM5_CCR2H_CCR210   0x04
#define MASK_TIM5_CCR2H_CCR211   0x08
#define MASK_TIM5_CCR2H_CCR212   0x10
#define MASK_TIM5_CCR2H_CCR213   0x20
#define MASK_TIM5_CCR2H_CCR214   0x40
#define MASK_TIM5_CCR2H_CCR215   0x80

#define MASK_TIM5_CCR2L_CCR10    0x01
#define MASK_TIM5_CCR2L_CCR11    0x02
#define MASK_TIM5_CCR2L_CCR12    0x04
#define MASK_TIM5_CCR2L_CCR13    0x08
#define MASK_TIM5_CCR2L_CCR14    0x10
#define MASK_TIM5_CCR2L_CCR15    0x20
#define MASK_TIM5_CCR2L_CCR16    0x40
#define MASK_TIM5_CCR2L_CCR17    0x80

#define MASK_TIM5_BKR_LOCK       0x03
#define MASK_TIM5_BKR_OSSI       0x04
#define MASK_TIM5_BKR_BKE        0x10
#define MASK_TIM5_BKR_BKP        0x20
#define MASK_TIM5_BKR_AOE        0x40
#define MASK_TIM5_BKR_MOE        0x80

#define MASK_TIM5_OISR_OIS1      0x01
#define MASK_TIM5_OISR_OIS2      0x04


/*-------------------------------------------------------------------------
 *      ADC1 register definitions
 *-----------------------------------------------------------------------*/
/* ADC1 configuration register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADON        : 1;
  unsigned char START       : 1;
  unsigned char CONT        : 1;
  unsigned char EOCIE       : 1;
  unsigned char AWDIE       : 1;
  unsigned char RES         : 2;
  unsigned char OVERIE      : 1;
} __BITS_ADC1_CR1;
#endif
//__IO_REG8_BIT(ADC1_CR1,    0x5340, __READ_WRITE, __BITS_ADC1_CR1);
unsigned char ADC1_CR1; //0x5340 __READ_WRITE
__BITS_ADC1_CR1 ADC1_CR1_bit;

/* ADC1 configuration register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMTP1       : 3;
  unsigned char EXTSEL0     : 1;
  unsigned char EXTSEL1     : 1;
  unsigned char TRIG_EDGE0  : 1;
  unsigned char TRIG_EDGE1  : 1;
  unsigned char PRESC       : 1;
} __BITS_ADC1_CR2;
#endif
//__IO_REG8_BIT(ADC1_CR2,    0x5341, __READ_WRITE, __BITS_ADC1_CR2);
unsigned char ADC1_CR2; //0x5341 __READ_WRITE
__BITS_ADC1_CR2 ADC1_CR2_bit;

/* ADC1 configuration register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CHSEL       : 5;
  unsigned char SMTP2       : 2;
} __BITS_ADC1_CR3;
#endif
//__IO_REG8_BIT(ADC1_CR3,    0x5342, __READ_WRITE, __BITS_ADC1_CR3);
unsigned char ADC1_CR3; //0x5342 __READ_WRITE
__BITS_ADC1_CR3 ADC1_CR3_bit;

/* ADC1 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EOC         : 1;
  unsigned char AWD         : 1;
  unsigned char OVER        : 1;
} __BITS_ADC1_SR;
#endif
//__IO_REG8_BIT(ADC1_SR,     0x5343, __READ_WRITE, __BITS_ADC1_SR);
unsigned char ADC1_SR; //0x5343 __READ_WRITE
__BITS_ADC1_SR ADC1_SR_bit;

/* ADC1 data register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CONV_DATA8  : 1;
  unsigned char CONV_DATA9  : 1;
  unsigned char CONV_DATA10 : 1;
  unsigned char CONV_DATA11 : 1;
} __BITS_ADC1_DRH;
#endif
//__IO_REG8_BIT(ADC1_DRH,    0x5344, __READ, __BITS_ADC1_DRH);
unsigned char ADC1_DRH; //0x5344 __READ
__BITS_ADC1_DRH ADC1_DRH_bit;

/* ADC1 data register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CONV_DATA0  : 1;
  unsigned char CONV_DATA1  : 1;
  unsigned char CONV_DATA2  : 1;
  unsigned char CONV_DATA3  : 1;
  unsigned char CONV_DATA4  : 1;
  unsigned char CONV_DATA5  : 1;
  unsigned char CONV_DATA6  : 1;
  unsigned char CONV_DATA7  : 1;
} __BITS_ADC1_DRL;
#endif
//__IO_REG8_BIT(ADC1_DRL,    0x5345, __READ, __BITS_ADC1_DRL);
unsigned char ADC1_DRL; //0x5345 __READ
__BITS_ADC1_DRL ADC1_DRL_bit;

/* ADC1 high threshold register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HT8         : 1;
  unsigned char HT9         : 1;
  unsigned char HT10        : 1;
  unsigned char HT11        : 1;
} __BITS_ADC1_HTRH;
#endif
//__IO_REG8_BIT(ADC1_HTRH,   0x5346, __READ_WRITE, __BITS_ADC1_HTRH);
unsigned char ADC1_HTRH; //0x5346 __READ_WRITE
__BITS_ADC1_HTRH ADC1_HTRH_bit;

/* ADC1 high threshold register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HT0         : 1;
  unsigned char HT1         : 1;
  unsigned char HT2         : 1;
  unsigned char HT3         : 1;
  unsigned char HT4         : 1;
  unsigned char HT5         : 1;
  unsigned char HT6         : 1;
  unsigned char HT7         : 1;
} __BITS_ADC1_HTRL;
#endif
//__IO_REG8_BIT(ADC1_HTRL,   0x5347, __READ_WRITE, __BITS_ADC1_HTRL);
unsigned char ADC1_HTRL; //0x5347 __READ_WRITE
__BITS_ADC1_HTRL ADC1_HTRL_bit;

/* ADC1 low threshold register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LT8         : 1;
  unsigned char LT9         : 1;
  unsigned char LT10        : 1;
  unsigned char LT11        : 1;
} __BITS_ADC1_LTRH;
#endif
//__IO_REG8_BIT(ADC1_LTRH,   0x5348, __READ_WRITE, __BITS_ADC1_LTRH);
unsigned char ADC1_LTRH; //0x5348 __READ_WRITE
__BITS_ADC1_LTRH ADC1_LTRH_bit;

/* ADC1 low threshold register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LT0         : 1;
  unsigned char LT1         : 1;
  unsigned char LT2         : 1;
  unsigned char LT3         : 1;
  unsigned char LT4         : 1;
  unsigned char LT5         : 1;
  unsigned char LT6         : 1;
  unsigned char LT7         : 1;
} __BITS_ADC1_LTRL;
#endif
//__IO_REG8_BIT(ADC1_LTRL,   0x5349, __READ_WRITE, __BITS_ADC1_LTRL);
unsigned char ADC1_LTRL; //0x5349 __READ_WRITE
__BITS_ADC1_LTRL ADC1_LTRL_bit;

/* ADC1 channel sequence 1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CHSEL_S24   : 1;
  unsigned char CHSEL_S25   : 1;
  unsigned char CHSEL_S26   : 1;
  unsigned char CHSEL_S27   : 1;
  unsigned char CHSEL_S28   : 1;
  unsigned char CHSEL_S29   : 1;
  unsigned char             : 1;
  unsigned char DMAOFF      : 1;
} __BITS_ADC1_SQR1;
#endif
//__IO_REG8_BIT(ADC1_SQR1,   0x534A, __READ_WRITE, __BITS_ADC1_SQR1);
unsigned char ADC1_SQR1; //0x534A __READ_WRITE
__BITS_ADC1_SQR1 ADC1_SQR1_bit;

/* ADC1 channel sequence 2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CHSEL_S16   : 1;
  unsigned char CHSEL_S17   : 1;
  unsigned char CHSEL_S18   : 1;
  unsigned char CHSEL_S19   : 1;
  unsigned char CHSEL_S20   : 1;
  unsigned char CHSEL_S21   : 1;
  unsigned char CHSEL_S22   : 1;
  unsigned char CHSEL_S23   : 1;
} __BITS_ADC1_SQR2;
#endif
//__IO_REG8_BIT(ADC1_SQR2,   0x534B, __READ_WRITE, __BITS_ADC1_SQR2);
unsigned char ADC1_SQR2; //0x534B __READ_WRITE
__BITS_ADC1_SQR2 ADC1_SQR2_bit;

/* ADC1 channel sequence 3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CHSEL_S8    : 1;
  unsigned char CHSEL_S9    : 1;
  unsigned char CHSEL_S10   : 1;
  unsigned char CHSEL_S11   : 1;
  unsigned char CHSEL_S12   : 1;
  unsigned char CHSEL_S13   : 1;
  unsigned char CHSEL_S14   : 1;
  unsigned char CHSEL_S15   : 1;
} __BITS_ADC1_SQR3;
#endif
//__IO_REG8_BIT(ADC1_SQR3,   0x534C, __READ_WRITE, __BITS_ADC1_SQR3);
unsigned char ADC1_SQR3; //0x534C __READ_WRITE
__BITS_ADC1_SQR3 ADC1_SQR3_bit;

/* ADC1 channel sequence 4 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CHSEL_S0    : 1;
  unsigned char CHSEL_S1    : 1;
  unsigned char CHSEL_S2    : 1;
  unsigned char CHSEL_S3    : 1;
  unsigned char CHSEL_S4    : 1;
  unsigned char CHSEL_S5    : 1;
  unsigned char CHSEL_S6    : 1;
  unsigned char CHSEL_S7    : 1;
} __BITS_ADC1_SQR4;
#endif
//__IO_REG8_BIT(ADC1_SQR4,   0x534D, __READ_WRITE, __BITS_ADC1_SQR4);
unsigned char ADC1_SQR4; //0x534D __READ_WRITE
__BITS_ADC1_SQR4 ADC1_SQR4_bit;

/* ADC1 trigger disable 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRIG24      : 1;
  unsigned char TRIG25      : 1;
  unsigned char TRIG26      : 1;
  unsigned char TRIG27      : 1;
  unsigned char VREFINTON   : 1;
  unsigned char TSON        : 1;
} __BITS_ADC1_TRIGR1;
#endif
//__IO_REG8_BIT(ADC1_TRIGR1, 0x534E, __READ_WRITE, __BITS_ADC1_TRIGR1);
unsigned char ADC1_TRIGR1; //0x534E __READ_WRITE
__BITS_ADC1_TRIGR1 ADC1_TRIGR1_bit;

/* ADC1 trigger disable 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRIG16      : 1;
  unsigned char TRIG17      : 1;
  unsigned char TRIG18      : 1;
  unsigned char TRIG19      : 1;
  unsigned char TRIG20      : 1;
  unsigned char TRIG21      : 1;
  unsigned char TRIG22      : 1;
  unsigned char TRIG23      : 1;
} __BITS_ADC1_TRIGR2;
#endif
//__IO_REG8_BIT(ADC1_TRIGR2, 0x534F, __READ_WRITE, __BITS_ADC1_TRIGR2);
unsigned char ADC1_TRIGR2; //0x534F __READ_WRITE
__BITS_ADC1_TRIGR2 ADC1_TRIGR2_bit;

/* ADC1 trigger disable 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRIG8       : 1;
  unsigned char TRIG9       : 1;
  unsigned char TRIG10      : 1;
  unsigned char TRIG11      : 1;
  unsigned char TRIG12      : 1;
  unsigned char TRIG13      : 1;
  unsigned char TRIG14      : 1;
  unsigned char TRIG15      : 1;
} __BITS_ADC1_TRIGR3;
#endif
//__IO_REG8_BIT(ADC1_TRIGR3, 0x5350, __READ_WRITE, __BITS_ADC1_TRIGR3);
unsigned char ADC1_TRIGR3; //0x5350 __READ_WRITE
__BITS_ADC1_TRIGR3 ADC1_TRIGR3_bit;

/* ADC1 trigger disable 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRIG0       : 1;
  unsigned char TRIG1       : 1;
  unsigned char TRIG2       : 1;
  unsigned char TRIG3       : 1;
  unsigned char TRIG4       : 1;
  unsigned char TRIG5       : 1;
  unsigned char TRIG6       : 1;
  unsigned char TRIG7       : 1;
} __BITS_ADC1_TRIGR4;
#endif
//__IO_REG8_BIT(ADC1_TRIGR4, 0x5351, __READ_WRITE, __BITS_ADC1_TRIGR4);
unsigned char ADC1_TRIGR4; //0x5351 __READ_WRITE
__BITS_ADC1_TRIGR4 ADC1_TRIGR4_bit;


/*-------------------------------------------------------------------------
 *      ADC1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define ADC1_CR1_ADON            ADC1_CR1_bit.ADON
#define ADC1_CR1_START           ADC1_CR1_bit.START
#define ADC1_CR1_CONT            ADC1_CR1_bit.CONT
#define ADC1_CR1_EOCIE           ADC1_CR1_bit.EOCIE
#define ADC1_CR1_AWDIE           ADC1_CR1_bit.AWDIE
#define ADC1_CR1_RES             ADC1_CR1_bit.RES
#define ADC1_CR1_OVERIE          ADC1_CR1_bit.OVERIE

#define ADC1_CR2_SMTP1           ADC1_CR2_bit.SMTP1
#define ADC1_CR2_EXTSEL0         ADC1_CR2_bit.EXTSEL0
#define ADC1_CR2_EXTSEL1         ADC1_CR2_bit.EXTSEL1
#define ADC1_CR2_TRIG_EDGE0      ADC1_CR2_bit.TRIG_EDGE0
#define ADC1_CR2_TRIG_EDGE1      ADC1_CR2_bit.TRIG_EDGE1
#define ADC1_CR2_PRESC           ADC1_CR2_bit.PRESC

#define ADC1_CR3_CHSEL           ADC1_CR3_bit.CHSEL
#define ADC1_CR3_SMTP2           ADC1_CR3_bit.SMTP2

#define ADC1_SR_EOC              ADC1_SR_bit.EOC
#define ADC1_SR_AWD              ADC1_SR_bit.AWD
#define ADC1_SR_OVER             ADC1_SR_bit.OVER

#define ADC1_DRH_CONV_DATA8      ADC1_DRH_bit.CONV_DATA8
#define ADC1_DRH_CONV_DATA9      ADC1_DRH_bit.CONV_DATA9
#define ADC1_DRH_CONV_DATA10     ADC1_DRH_bit.CONV_DATA10
#define ADC1_DRH_CONV_DATA11     ADC1_DRH_bit.CONV_DATA11

#define ADC1_DRL_CONV_DATA0      ADC1_DRL_bit.CONV_DATA0
#define ADC1_DRL_CONV_DATA1      ADC1_DRL_bit.CONV_DATA1
#define ADC1_DRL_CONV_DATA2      ADC1_DRL_bit.CONV_DATA2
#define ADC1_DRL_CONV_DATA3      ADC1_DRL_bit.CONV_DATA3
#define ADC1_DRL_CONV_DATA4      ADC1_DRL_bit.CONV_DATA4
#define ADC1_DRL_CONV_DATA5      ADC1_DRL_bit.CONV_DATA5
#define ADC1_DRL_CONV_DATA6      ADC1_DRL_bit.CONV_DATA6
#define ADC1_DRL_CONV_DATA7      ADC1_DRL_bit.CONV_DATA7

#define ADC1_HTRH_HT8            ADC1_HTRH_bit.HT8
#define ADC1_HTRH_HT9            ADC1_HTRH_bit.HT9
#define ADC1_HTRH_HT10           ADC1_HTRH_bit.HT10
#define ADC1_HTRH_HT11           ADC1_HTRH_bit.HT11

#define ADC1_HTRL_HT0            ADC1_HTRL_bit.HT0
#define ADC1_HTRL_HT1            ADC1_HTRL_bit.HT1
#define ADC1_HTRL_HT2            ADC1_HTRL_bit.HT2
#define ADC1_HTRL_HT3            ADC1_HTRL_bit.HT3
#define ADC1_HTRL_HT4            ADC1_HTRL_bit.HT4
#define ADC1_HTRL_HT5            ADC1_HTRL_bit.HT5
#define ADC1_HTRL_HT6            ADC1_HTRL_bit.HT6
#define ADC1_HTRL_HT7            ADC1_HTRL_bit.HT7

#define ADC1_LTRH_LT8            ADC1_LTRH_bit.LT8
#define ADC1_LTRH_LT9            ADC1_LTRH_bit.LT9
#define ADC1_LTRH_LT10           ADC1_LTRH_bit.LT10
#define ADC1_LTRH_LT11           ADC1_LTRH_bit.LT11

#define ADC1_LTRL_LT0            ADC1_LTRL_bit.LT0
#define ADC1_LTRL_LT1            ADC1_LTRL_bit.LT1
#define ADC1_LTRL_LT2            ADC1_LTRL_bit.LT2
#define ADC1_LTRL_LT3            ADC1_LTRL_bit.LT3
#define ADC1_LTRL_LT4            ADC1_LTRL_bit.LT4
#define ADC1_LTRL_LT5            ADC1_LTRL_bit.LT5
#define ADC1_LTRL_LT6            ADC1_LTRL_bit.LT6
#define ADC1_LTRL_LT7            ADC1_LTRL_bit.LT7

#define ADC1_SQR1_CHSEL_S24      ADC1_SQR1_bit.CHSEL_S24
#define ADC1_SQR1_CHSEL_S25      ADC1_SQR1_bit.CHSEL_S25
#define ADC1_SQR1_CHSEL_S26      ADC1_SQR1_bit.CHSEL_S26
#define ADC1_SQR1_CHSEL_S27      ADC1_SQR1_bit.CHSEL_S27
#define ADC1_SQR1_CHSEL_S28      ADC1_SQR1_bit.CHSEL_S28
#define ADC1_SQR1_CHSEL_S29      ADC1_SQR1_bit.CHSEL_S29
#define ADC1_SQR1_DMAOFF         ADC1_SQR1_bit.DMAOFF

#define ADC1_SQR2_CHSEL_S16      ADC1_SQR2_bit.CHSEL_S16
#define ADC1_SQR2_CHSEL_S17      ADC1_SQR2_bit.CHSEL_S17
#define ADC1_SQR2_CHSEL_S18      ADC1_SQR2_bit.CHSEL_S18
#define ADC1_SQR2_CHSEL_S19      ADC1_SQR2_bit.CHSEL_S19
#define ADC1_SQR2_CHSEL_S20      ADC1_SQR2_bit.CHSEL_S20
#define ADC1_SQR2_CHSEL_S21      ADC1_SQR2_bit.CHSEL_S21
#define ADC1_SQR2_CHSEL_S22      ADC1_SQR2_bit.CHSEL_S22
#define ADC1_SQR2_CHSEL_S23      ADC1_SQR2_bit.CHSEL_S23

#define ADC1_SQR3_CHSEL_S8       ADC1_SQR3_bit.CHSEL_S8
#define ADC1_SQR3_CHSEL_S9       ADC1_SQR3_bit.CHSEL_S9
#define ADC1_SQR3_CHSEL_S10      ADC1_SQR3_bit.CHSEL_S10
#define ADC1_SQR3_CHSEL_S11      ADC1_SQR3_bit.CHSEL_S11
#define ADC1_SQR3_CHSEL_S12      ADC1_SQR3_bit.CHSEL_S12
#define ADC1_SQR3_CHSEL_S13      ADC1_SQR3_bit.CHSEL_S13
#define ADC1_SQR3_CHSEL_S14      ADC1_SQR3_bit.CHSEL_S14
#define ADC1_SQR3_CHSEL_S15      ADC1_SQR3_bit.CHSEL_S15

#define ADC1_SQR4_CHSEL_S0       ADC1_SQR4_bit.CHSEL_S0
#define ADC1_SQR4_CHSEL_S1       ADC1_SQR4_bit.CHSEL_S1
#define ADC1_SQR4_CHSEL_S2       ADC1_SQR4_bit.CHSEL_S2
#define ADC1_SQR4_CHSEL_S3       ADC1_SQR4_bit.CHSEL_S3
#define ADC1_SQR4_CHSEL_S4       ADC1_SQR4_bit.CHSEL_S4
#define ADC1_SQR4_CHSEL_S5       ADC1_SQR4_bit.CHSEL_S5
#define ADC1_SQR4_CHSEL_S6       ADC1_SQR4_bit.CHSEL_S6
#define ADC1_SQR4_CHSEL_S7       ADC1_SQR4_bit.CHSEL_S7

#define ADC1_TRIGR1_TRIG24       ADC1_TRIGR1_bit.TRIG24
#define ADC1_TRIGR1_TRIG25       ADC1_TRIGR1_bit.TRIG25
#define ADC1_TRIGR1_TRIG26       ADC1_TRIGR1_bit.TRIG26
#define ADC1_TRIGR1_TRIG27       ADC1_TRIGR1_bit.TRIG27
#define ADC1_TRIGR1_VREFINTON    ADC1_TRIGR1_bit.VREFINTON
#define ADC1_TRIGR1_TSON         ADC1_TRIGR1_bit.TSON

#define ADC1_TRIGR2_TRIG16       ADC1_TRIGR2_bit.TRIG16
#define ADC1_TRIGR2_TRIG17       ADC1_TRIGR2_bit.TRIG17
#define ADC1_TRIGR2_TRIG18       ADC1_TRIGR2_bit.TRIG18
#define ADC1_TRIGR2_TRIG19       ADC1_TRIGR2_bit.TRIG19
#define ADC1_TRIGR2_TRIG20       ADC1_TRIGR2_bit.TRIG20
#define ADC1_TRIGR2_TRIG21       ADC1_TRIGR2_bit.TRIG21
#define ADC1_TRIGR2_TRIG22       ADC1_TRIGR2_bit.TRIG22
#define ADC1_TRIGR2_TRIG23       ADC1_TRIGR2_bit.TRIG23

#define ADC1_TRIGR3_TRIG8        ADC1_TRIGR3_bit.TRIG8
#define ADC1_TRIGR3_TRIG9        ADC1_TRIGR3_bit.TRIG9
#define ADC1_TRIGR3_TRIG10       ADC1_TRIGR3_bit.TRIG10
#define ADC1_TRIGR3_TRIG11       ADC1_TRIGR3_bit.TRIG11
#define ADC1_TRIGR3_TRIG12       ADC1_TRIGR3_bit.TRIG12
#define ADC1_TRIGR3_TRIG13       ADC1_TRIGR3_bit.TRIG13
#define ADC1_TRIGR3_TRIG14       ADC1_TRIGR3_bit.TRIG14
#define ADC1_TRIGR3_TRIG15       ADC1_TRIGR3_bit.TRIG15

#define ADC1_TRIGR4_TRIG0        ADC1_TRIGR4_bit.TRIG0
#define ADC1_TRIGR4_TRIG1        ADC1_TRIGR4_bit.TRIG1
#define ADC1_TRIGR4_TRIG2        ADC1_TRIGR4_bit.TRIG2
#define ADC1_TRIGR4_TRIG3        ADC1_TRIGR4_bit.TRIG3
#define ADC1_TRIGR4_TRIG4        ADC1_TRIGR4_bit.TRIG4
#define ADC1_TRIGR4_TRIG5        ADC1_TRIGR4_bit.TRIG5
#define ADC1_TRIGR4_TRIG6        ADC1_TRIGR4_bit.TRIG6
#define ADC1_TRIGR4_TRIG7        ADC1_TRIGR4_bit.TRIG7

#endif

/*-------------------------------------------------------------------------
 *      ADC1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_ADC1_CR1_ADON       0x01
#define MASK_ADC1_CR1_START      0x02
#define MASK_ADC1_CR1_CONT       0x04
#define MASK_ADC1_CR1_EOCIE      0x08
#define MASK_ADC1_CR1_AWDIE      0x10
#define MASK_ADC1_CR1_RES        0x60
#define MASK_ADC1_CR1_OVERIE     0x80

#define MASK_ADC1_CR2_SMTP1      0x07
#define MASK_ADC1_CR2_EXTSEL0    0x08
#define MASK_ADC1_CR2_EXTSEL1    0x10
#define MASK_ADC1_CR2_TRIG_EDGE0 0x20
#define MASK_ADC1_CR2_TRIG_EDGE1 0x40
#define MASK_ADC1_CR2_PRESC      0x80

#define MASK_ADC1_CR3_CHSEL      0x1F
#define MASK_ADC1_CR3_SMTP2      0x60

#define MASK_ADC1_SR_EOC         0x01
#define MASK_ADC1_SR_AWD         0x02
#define MASK_ADC1_SR_OVER        0x04

#define MASK_ADC1_DRH_CONV_DATA8 0x01
#define MASK_ADC1_DRH_CONV_DATA9 0x02
#define MASK_ADC1_DRH_CONV_DATA10 0x04
#define MASK_ADC1_DRH_CONV_DATA11 0x08

#define MASK_ADC1_DRL_CONV_DATA0 0x01
#define MASK_ADC1_DRL_CONV_DATA1 0x02
#define MASK_ADC1_DRL_CONV_DATA2 0x04
#define MASK_ADC1_DRL_CONV_DATA3 0x08
#define MASK_ADC1_DRL_CONV_DATA4 0x10
#define MASK_ADC1_DRL_CONV_DATA5 0x20
#define MASK_ADC1_DRL_CONV_DATA6 0x40
#define MASK_ADC1_DRL_CONV_DATA7 0x80

#define MASK_ADC1_HTRH_HT8       0x01
#define MASK_ADC1_HTRH_HT9       0x02
#define MASK_ADC1_HTRH_HT10      0x04
#define MASK_ADC1_HTRH_HT11      0x08

#define MASK_ADC1_HTRL_HT0       0x01
#define MASK_ADC1_HTRL_HT1       0x02
#define MASK_ADC1_HTRL_HT2       0x04
#define MASK_ADC1_HTRL_HT3       0x08
#define MASK_ADC1_HTRL_HT4       0x10
#define MASK_ADC1_HTRL_HT5       0x20
#define MASK_ADC1_HTRL_HT6       0x40
#define MASK_ADC1_HTRL_HT7       0x80

#define MASK_ADC1_LTRH_LT8       0x01
#define MASK_ADC1_LTRH_LT9       0x02
#define MASK_ADC1_LTRH_LT10      0x04
#define MASK_ADC1_LTRH_LT11      0x08

#define MASK_ADC1_LTRL_LT0       0x01
#define MASK_ADC1_LTRL_LT1       0x02
#define MASK_ADC1_LTRL_LT2       0x04
#define MASK_ADC1_LTRL_LT3       0x08
#define MASK_ADC1_LTRL_LT4       0x10
#define MASK_ADC1_LTRL_LT5       0x20
#define MASK_ADC1_LTRL_LT6       0x40
#define MASK_ADC1_LTRL_LT7       0x80

#define MASK_ADC1_SQR1_CHSEL_S24 0x01
#define MASK_ADC1_SQR1_CHSEL_S25 0x02
#define MASK_ADC1_SQR1_CHSEL_S26 0x04
#define MASK_ADC1_SQR1_CHSEL_S27 0x08
#define MASK_ADC1_SQR1_CHSEL_S28 0x10
#define MASK_ADC1_SQR1_CHSEL_S29 0x20
#define MASK_ADC1_SQR1_DMAOFF    0x80

#define MASK_ADC1_SQR2_CHSEL_S16 0x01
#define MASK_ADC1_SQR2_CHSEL_S17 0x02
#define MASK_ADC1_SQR2_CHSEL_S18 0x04
#define MASK_ADC1_SQR2_CHSEL_S19 0x08
#define MASK_ADC1_SQR2_CHSEL_S20 0x10
#define MASK_ADC1_SQR2_CHSEL_S21 0x20
#define MASK_ADC1_SQR2_CHSEL_S22 0x40
#define MASK_ADC1_SQR2_CHSEL_S23 0x80

#define MASK_ADC1_SQR3_CHSEL_S8  0x01
#define MASK_ADC1_SQR3_CHSEL_S9  0x02
#define MASK_ADC1_SQR3_CHSEL_S10 0x04
#define MASK_ADC1_SQR3_CHSEL_S11 0x08
#define MASK_ADC1_SQR3_CHSEL_S12 0x10
#define MASK_ADC1_SQR3_CHSEL_S13 0x20
#define MASK_ADC1_SQR3_CHSEL_S14 0x40
#define MASK_ADC1_SQR3_CHSEL_S15 0x80

#define MASK_ADC1_SQR4_CHSEL_S0  0x01
#define MASK_ADC1_SQR4_CHSEL_S1  0x02
#define MASK_ADC1_SQR4_CHSEL_S2  0x04
#define MASK_ADC1_SQR4_CHSEL_S3  0x08
#define MASK_ADC1_SQR4_CHSEL_S4  0x10
#define MASK_ADC1_SQR4_CHSEL_S5  0x20
#define MASK_ADC1_SQR4_CHSEL_S6  0x40
#define MASK_ADC1_SQR4_CHSEL_S7  0x80

#define MASK_ADC1_TRIGR1_TRIG24  0x01
#define MASK_ADC1_TRIGR1_TRIG25  0x02
#define MASK_ADC1_TRIGR1_TRIG26  0x04
#define MASK_ADC1_TRIGR1_TRIG27  0x08
#define MASK_ADC1_TRIGR1_VREFINTON 0x10
#define MASK_ADC1_TRIGR1_TSON    0x20

#define MASK_ADC1_TRIGR2_TRIG16  0x01
#define MASK_ADC1_TRIGR2_TRIG17  0x02
#define MASK_ADC1_TRIGR2_TRIG18  0x04
#define MASK_ADC1_TRIGR2_TRIG19  0x08
#define MASK_ADC1_TRIGR2_TRIG20  0x10
#define MASK_ADC1_TRIGR2_TRIG21  0x20
#define MASK_ADC1_TRIGR2_TRIG22  0x40
#define MASK_ADC1_TRIGR2_TRIG23  0x80

#define MASK_ADC1_TRIGR3_TRIG8   0x01
#define MASK_ADC1_TRIGR3_TRIG9   0x02
#define MASK_ADC1_TRIGR3_TRIG10  0x04
#define MASK_ADC1_TRIGR3_TRIG11  0x08
#define MASK_ADC1_TRIGR3_TRIG12  0x10
#define MASK_ADC1_TRIGR3_TRIG13  0x20
#define MASK_ADC1_TRIGR3_TRIG14  0x40
#define MASK_ADC1_TRIGR3_TRIG15  0x80

#define MASK_ADC1_TRIGR4_TRIG0   0x01
#define MASK_ADC1_TRIGR4_TRIG1   0x02
#define MASK_ADC1_TRIGR4_TRIG2   0x04
#define MASK_ADC1_TRIGR4_TRIG3   0x08
#define MASK_ADC1_TRIGR4_TRIG4   0x10
#define MASK_ADC1_TRIGR4_TRIG5   0x20
#define MASK_ADC1_TRIGR4_TRIG6   0x40
#define MASK_ADC1_TRIGR4_TRIG7   0x80


/*-------------------------------------------------------------------------
 *      DAC register definitions
 *-----------------------------------------------------------------------*/
/* DAC channel 1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char BOFF        : 1;
  unsigned char TEN         : 1;
  unsigned char TSEL        : 3;
  unsigned char WAVEN       : 2;
} __BITS_DAC_CH1CR1;
#endif
//__IO_REG8_BIT(DAC_CH1CR1,  0x5380, __READ_WRITE, __BITS_DAC_CH1CR1);
unsigned char DAC_CH1CR1; //0x5380 __READ_WRITE
__BITS_DAC_CH1CR1 DAC_CH1CR1_bit;

/* DAC channel 1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MAMP        : 4;
  unsigned char DMAEN       : 1;
  unsigned char DMAUDRIE    : 1;
} __BITS_DAC_CH1CR2;
#endif
//__IO_REG8_BIT(DAC_CH1CR2,  0x5381, __READ_WRITE, __BITS_DAC_CH1CR2);
unsigned char DAC_CH1CR2; //0x5381 __READ_WRITE
__BITS_DAC_CH1CR2 DAC_CH1CR2_bit;

/* DAC channel 2 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char BOFF        : 1;
  unsigned char TEN         : 1;
  unsigned char TSEL        : 3;
  unsigned char WAVEN       : 2;
} __BITS_DAC_CH2CR1;
#endif
//__IO_REG8_BIT(DAC_CH2CR1,  0x5382, __READ_WRITE, __BITS_DAC_CH2CR1);
unsigned char DAC_CH2CR1; //0x5382 __READ_WRITE
__BITS_DAC_CH2CR1 DAC_CH2CR1_bit;

/* DAC channel 2 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MAMP        : 4;
  unsigned char DMAEN       : 1;
  unsigned char DMAUDRIE    : 1;
} __BITS_DAC_CH2CR2;
#endif
//__IO_REG8_BIT(DAC_CH2CR2,  0x5383, __READ_WRITE, __BITS_DAC_CH2CR2);
unsigned char DAC_CH2CR2; //0x5383 __READ_WRITE
__BITS_DAC_CH2CR2 DAC_CH2CR2_bit;

/* DAC software trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWTRIG1     : 1;
  unsigned char SWTRIG2     : 1;
} __BITS_DAC_SWTRIG;
#endif
//__IO_REG8_BIT(DAC_SWTRIG,  0x5384, __READ_WRITE, __BITS_DAC_SWTRIG);
unsigned char DAC_SWTRIG; //0x5384 __READ_WRITE
__BITS_DAC_SWTRIG DAC_SWTRIG_bit;

/* DAC status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DMAUDR1     : 1;
  unsigned char DMAUDR2     : 1;
} __BITS_DAC_SR;
#endif
//__IO_REG8_BIT(DAC_SR,      0x5385, __READ_WRITE, __BITS_DAC_SR);
unsigned char DAC_SR; //0x5385 __READ_WRITE
__BITS_DAC_SR DAC_SR_bit;

/* DAC channel 1 right aligned data holding register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RDHRH00     : 1;
  unsigned char RDHRH10     : 1;
  unsigned char RDHRH20     : 1;
  unsigned char RDHRH30     : 1;
} __BITS_DAC_CH1RDHRH;
#endif
//__IO_REG8_BIT(DAC_CH1RDHRH, 0x5388, __READ_WRITE, __BITS_DAC_CH1RDHRH);
unsigned char DAC_CH1RDHRH; //0x5388 __READ_WRITE
__BITS_DAC_CH1RDHRH DAC_CH1RDHRH_bit;

/* DAC channel 1 right aligned data holding register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RDHRL00     : 1;
  unsigned char RDHRL10     : 1;
  unsigned char RDHRL20     : 1;
  unsigned char RDHRL30     : 1;
  unsigned char RDHRL40     : 1;
  unsigned char RDHRL50     : 1;
  unsigned char RDHRL60     : 1;
  unsigned char RDHRL70     : 1;
} __BITS_DAC_CH1RDHRL;
#endif
//__IO_REG8_BIT(DAC_CH1RDHRL, 0x5389, __READ_WRITE, __BITS_DAC_CH1RDHRL);
unsigned char DAC_CH1RDHRL; //0x5389 __READ_WRITE
__BITS_DAC_CH1RDHRL DAC_CH1RDHRL_bit;

/* DAC channel 1 left aligned data holding register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LDHRH00     : 1;
  unsigned char LDHRH10     : 1;
  unsigned char LDHRH20     : 1;
  unsigned char LDHRH30     : 1;
  unsigned char LDHRH40     : 1;
  unsigned char LDHRH50     : 1;
  unsigned char LDHRH60     : 1;
  unsigned char LDHRH70     : 1;
} __BITS_DAC_CH1LDHRH;
#endif
//__IO_REG8_BIT(DAC_CH1LDHRH, 0x538C, __READ_WRITE, __BITS_DAC_CH1LDHRH);
unsigned char DAC_CH1LDHRH; //0x538C __READ_WRITE
__BITS_DAC_CH1LDHRH DAC_CH1LDHRH_bit;

/* DAC channel 1 left aligned data holding register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char LDHRL4      : 1;
  unsigned char LDHRL5      : 1;
  unsigned char LDHRL6      : 1;
  unsigned char LDHRL7      : 1;
} __BITS_DAC_CH1LDHRL;
#endif
//__IO_REG8_BIT(DAC_CH1LDHRL, 0x538D, __READ_WRITE, __BITS_DAC_CH1LDHRL);
unsigned char DAC_CH1LDHRL; //0x538D __READ_WRITE
__BITS_DAC_CH1LDHRL DAC_CH1LDHRL_bit;

/* DAC channel 1 8-bit data holding register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DHR00       : 1;
  unsigned char DHR10       : 1;
  unsigned char DHR20       : 1;
  unsigned char DHR30       : 1;
  unsigned char DHR40       : 1;
  unsigned char DHR50       : 1;
  unsigned char DHR60       : 1;
  unsigned char DHR70       : 1;
} __BITS_DAC_CH1DHR8;
#endif
//__IO_REG8_BIT(DAC_CH1DHR8, 0x5390, __READ_WRITE, __BITS_DAC_CH1DHR8);
unsigned char DAC_CH1DHR8; //0x5390 __READ_WRITE
__BITS_DAC_CH1DHR8 DAC_CH1DHR8_bit;

/* DAC channel 2 right aligned data holding register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RDHRH00     : 1;
  unsigned char RDHRH10     : 1;
  unsigned char RDHRH20     : 1;
  unsigned char RDHRH30     : 1;
} __BITS_DAC_CH2RDHRH;
#endif
//__IO_REG8_BIT(DAC_CH2RDHRH, 0x5394, __READ_WRITE, __BITS_DAC_CH2RDHRH);
unsigned char DAC_CH2RDHRH; //0x5394 __READ_WRITE
__BITS_DAC_CH2RDHRH DAC_CH2RDHRH_bit;

/* DAC channel 2 right aligned data holding register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RDHRL00     : 1;
  unsigned char RDHRL10     : 1;
  unsigned char RDHRL20     : 1;
  unsigned char RDHRL30     : 1;
  unsigned char RDHRL40     : 1;
  unsigned char RDHRL50     : 1;
  unsigned char RDHRL60     : 1;
  unsigned char RDHRL70     : 1;
} __BITS_DAC_CH2RDHRL;
#endif
//__IO_REG8_BIT(DAC_CH2RDHRL, 0x5395, __READ_WRITE, __BITS_DAC_CH2RDHRL);
unsigned char DAC_CH2RDHRL; //0x5395 __READ_WRITE
__BITS_DAC_CH2RDHRL DAC_CH2RDHRL_bit;

/* DAC channel 2 left aligned data holding register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LDHRH00     : 1;
  unsigned char LDHRH10     : 1;
  unsigned char LDHRH20     : 1;
  unsigned char LDHRH30     : 1;
  unsigned char LDHRH40     : 1;
  unsigned char LDHRH50     : 1;
  unsigned char LDHRH60     : 1;
  unsigned char LDHRH70     : 1;
} __BITS_DAC_CH2LDHRH;
#endif
//__IO_REG8_BIT(DAC_CH2LDHRH, 0x5398, __READ_WRITE, __BITS_DAC_CH2LDHRH);
unsigned char DAC_CH2LDHRH; //0x5398 __READ_WRITE
__BITS_DAC_CH2LDHRH DAC_CH2LDHRH_bit;

/* DAC channel 2 left aligned data holding register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char LDHRL4      : 1;
  unsigned char LDHRL5      : 1;
  unsigned char LDHRL6      : 1;
  unsigned char LDHRL7      : 1;
} __BITS_DAC_CH2LDHRL;
#endif
//__IO_REG8_BIT(DAC_CH2LDHRL, 0x5399, __READ_WRITE, __BITS_DAC_CH2LDHRL);
unsigned char DAC_CH2LDHRL; //0x5399 __READ_WRITE
__BITS_DAC_CH2LDHRL DAC_CH2LDHRL_bit;

/* DAC channel 2 8-bit data holding register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DHR00       : 1;
  unsigned char DHR10       : 1;
  unsigned char DHR20       : 1;
  unsigned char DHR30       : 1;
  unsigned char DHR40       : 1;
  unsigned char DHR50       : 1;
  unsigned char DHR60       : 1;
  unsigned char DHR70       : 1;
} __BITS_DAC_CH2DHR8;
#endif
//__IO_REG8_BIT(DAC_CH2DHR8, 0x539C, __READ_WRITE, __BITS_DAC_CH2DHR8);
unsigned char DAC_CH2DHR8; //0x539C __READ_WRITE
__BITS_DAC_CH2DHR8 DAC_CH2DHR8_bit;

/* DAC channel 1 right aligned data holding register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RDHRH00     : 1;
  unsigned char RDHRH10     : 1;
  unsigned char RDHRH20     : 1;
  unsigned char RDHRH30     : 1;
} __BITS_DAC_DCH1RDHRH;
#endif
//__IO_REG8_BIT(DAC_DCH1RDHRH, 0x53A0, __READ_WRITE, __BITS_DAC_DCH1RDHRH);
unsigned char DAC_DCH1RDHRH; //0x53A0 __READ_WRITE
__BITS_DAC_DCH1RDHRH DAC_DCH1RDHRH_bit;

/* DAC channel 1 right aligned data holding register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RDHRL00     : 1;
  unsigned char RDHRL10     : 1;
  unsigned char RDHRL20     : 1;
  unsigned char RDHRL30     : 1;
  unsigned char RDHRL40     : 1;
  unsigned char RDHRL50     : 1;
  unsigned char RDHRL60     : 1;
  unsigned char RDHRL70     : 1;
} __BITS_DAC_DCH1RDHRL;
#endif
//__IO_REG8_BIT(DAC_DCH1RDHRL, 0x53A1, __READ_WRITE, __BITS_DAC_DCH1RDHRL);
unsigned char DAC_DCH1RDHRL; //0x53A1 __READ_WRITE
__BITS_DAC_DCH1RDHRL DAC_DCH1RDHRL_bit;

/* DAC data output register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DORH        : 4;
} __BITS_DAC_DORH;
#endif
//__IO_REG8_BIT(DAC_DORH,    0x53AC, __READ, __BITS_DAC_DORH);
unsigned char DAC_DORH; //0x53AC __READ
__BITS_DAC_DORH DAC_DORH_bit;

/* DAC data output register low */
//__IO_REG8    (DAC_DORL,    0x53AD, __READ);
unsigned char DAC_DORL; //0x53AD __READ
/* DAC channel 2 right aligned data holding register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RDHRH00     : 1;
  unsigned char RDHRH10     : 1;
  unsigned char RDHRH20     : 1;
  unsigned char RDHRH30     : 1;
} __BITS_DAC_DCH2RDHRH;
#endif
//__IO_REG8_BIT(DAC_DCH2RDHRH, 0x53A2, __READ_WRITE, __BITS_DAC_DCH2RDHRH);
unsigned char DAC_DCH2RDHRH; //0x53A2 __READ_WRITE
__BITS_DAC_DCH2RDHRH DAC_DCH2RDHRH_bit;

/* DAC channel 2 right aligned data holding register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RDHRL00     : 1;
  unsigned char RDHRL10     : 1;
  unsigned char RDHRL20     : 1;
  unsigned char RDHRL30     : 1;
  unsigned char RDHRL40     : 1;
  unsigned char RDHRL50     : 1;
  unsigned char RDHRL60     : 1;
  unsigned char RDHRL70     : 1;
} __BITS_DAC_DCH2RDHRL;
#endif
//__IO_REG8_BIT(DAC_DCH2RDHRL, 0x53A3, __READ_WRITE, __BITS_DAC_DCH2RDHRL);
unsigned char DAC_DCH2RDHRL; //0x53A3 __READ_WRITE
__BITS_DAC_DCH2RDHRL DAC_DCH2RDHRL_bit;

/* DAC channel 1left aligned data holding register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LDHRH00     : 1;
  unsigned char LDHRH10     : 1;
  unsigned char LDHRH20     : 1;
  unsigned char LDHRH30     : 1;
  unsigned char LDHRH40     : 1;
  unsigned char LDHRH50     : 1;
  unsigned char LDHRH60     : 1;
  unsigned char LDHRH70     : 1;
} __BITS_DAC_DCH1LDHRH;
#endif
//__IO_REG8_BIT(DAC_DCH1LDHRH, 0x53A4, __READ_WRITE, __BITS_DAC_DCH1LDHRH);
unsigned char DAC_DCH1LDHRH; //0x53A4 __READ_WRITE
__BITS_DAC_DCH1LDHRH DAC_DCH1LDHRH_bit;

/* DAC channel 1left aligned data holding register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char LDHRL40     : 1;
  unsigned char LDHRL50     : 1;
  unsigned char LDHRL60     : 1;
  unsigned char LDHRL70     : 1;
} __BITS_DAC_DCH1LDHRL;
#endif
//__IO_REG8_BIT(DAC_DCH1LDHRL, 0x53A5, __READ_WRITE, __BITS_DAC_DCH1LDHRL);
unsigned char DAC_DCH1LDHRL; //0x53A5 __READ_WRITE
__BITS_DAC_DCH1LDHRL DAC_DCH1LDHRL_bit;

/* DAC channel 2 left aligned data holding register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LDHRH00     : 1;
  unsigned char LDHRH10     : 1;
  unsigned char LDHRH20     : 1;
  unsigned char LDHRH30     : 1;
  unsigned char LDHRH40     : 1;
  unsigned char LDHRH50     : 1;
  unsigned char LDHRH60     : 1;
  unsigned char LDHRH70     : 1;
} __BITS_DAC_DCH2LDHRH;
#endif
//__IO_REG8_BIT(DAC_DCH2LDHRH, 0x53A6, __READ_WRITE, __BITS_DAC_DCH2LDHRH);
unsigned char DAC_DCH2LDHRH; //0x53A6 __READ_WRITE
__BITS_DAC_DCH2LDHRH DAC_DCH2LDHRH_bit;

/* DAC channel 2 left aligned data holding register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char LDHRL40     : 1;
  unsigned char LDHRL50     : 1;
  unsigned char LDHRL60     : 1;
  unsigned char LDHRL70     : 1;
} __BITS_DAC_DCH2LDHRL;
#endif
//__IO_REG8_BIT(DAC_DCH2LDHRL, 0x53A7, __READ_WRITE, __BITS_DAC_DCH2LDHRL);
unsigned char DAC_DCH2LDHRL; //0x53A7 __READ_WRITE
__BITS_DAC_DCH2LDHRL DAC_DCH2LDHRL_bit;

/* DAC channel 1 8-bit mode data holding register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DHR00       : 1;
  unsigned char DHR10       : 1;
  unsigned char DHR20       : 1;
  unsigned char DHR30       : 1;
  unsigned char DHR40       : 1;
  unsigned char DHR50       : 1;
  unsigned char DHR60       : 1;
  unsigned char DHR70       : 1;
} __BITS_DAC_DCH1DHR8;
#endif
//__IO_REG8_BIT(DAC_DCH1DHR8, 0x53A8, __READ_WRITE, __BITS_DAC_DCH1DHR8);
unsigned char DAC_DCH1DHR8; //0x53A8 __READ_WRITE
__BITS_DAC_DCH1DHR8 DAC_DCH1DHR8_bit;

/* DAC channel 2 8-bit mode data holding register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DHR00       : 1;
  unsigned char DHR10       : 1;
  unsigned char DHR20       : 1;
  unsigned char DHR30       : 1;
  unsigned char DHR40       : 1;
  unsigned char DHR50       : 1;
  unsigned char DHR60       : 1;
  unsigned char DHR70       : 1;
} __BITS_DAC_DCH2DHR8;
#endif
//__IO_REG8_BIT(DAC_DCH2DHR8, 0x53A9, __READ_WRITE, __BITS_DAC_DCH2DHR8);
unsigned char DAC_DCH2DHR8; //0x53A9 __READ_WRITE
__BITS_DAC_DCH2DHR8 DAC_DCH2DHR8_bit;

/* DAC channel 1 data output register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DORH00      : 1;
  unsigned char DORH10      : 1;
  unsigned char DORH20      : 1;
  unsigned char DORH30      : 1;
} __BITS_DAC_CH1DORH;
#endif
//__IO_REG8_BIT(DAC_CH1DORH, 0x53AC, __READ_WRITE, __BITS_DAC_CH1DORH);
unsigned char DAC_CH1DORH; //0x53AC __READ_WRITE
__BITS_DAC_CH1DORH DAC_CH1DORH_bit;

/* DAC channel 1 data output register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DORL00      : 1;
  unsigned char DORL10      : 1;
  unsigned char DORL20      : 1;
  unsigned char DORL30      : 1;
  unsigned char DORL40      : 1;
  unsigned char DORL50      : 1;
  unsigned char DORL60      : 1;
  unsigned char DORL70      : 1;
} __BITS_DAC_CH1DORL;
#endif
//__IO_REG8_BIT(DAC_CH1DORL, 0x53AD, __READ_WRITE, __BITS_DAC_CH1DORL);
unsigned char DAC_CH1DORL; //0x53AD __READ_WRITE
__BITS_DAC_CH1DORL DAC_CH1DORL_bit;

/* DAC channel 2 data output register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DORH00      : 1;
  unsigned char DORH10      : 1;
  unsigned char DORH20      : 1;
  unsigned char DORH30      : 1;
} __BITS_DAC_CH2DORH;
#endif
//__IO_REG8_BIT(DAC_CH2DORH, 0x53B0, __READ_WRITE, __BITS_DAC_CH2DORH);
unsigned char DAC_CH2DORH; //0x53B0 __READ_WRITE
__BITS_DAC_CH2DORH DAC_CH2DORH_bit;

/* DAC channel 2 data output register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DORL00      : 1;
  unsigned char DORL10      : 1;
  unsigned char DORL20      : 1;
  unsigned char DORL30      : 1;
  unsigned char DORL40      : 1;
  unsigned char DORL50      : 1;
  unsigned char DORL60      : 1;
  unsigned char DORL70      : 1;
} __BITS_DAC_CH2DORL;
#endif
//__IO_REG8_BIT(DAC_CH2DORL, 0x53B1, __READ_WRITE, __BITS_DAC_CH2DORL);
unsigned char DAC_CH2DORL; //0x53B1 __READ_WRITE
__BITS_DAC_CH2DORL DAC_CH2DORL_bit;


/*-------------------------------------------------------------------------
 *      DAC bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define DAC_CH1CR1_EN            DAC_CH1CR1_bit.EN
#define DAC_CH1CR1_BOFF          DAC_CH1CR1_bit.BOFF
#define DAC_CH1CR1_TEN           DAC_CH1CR1_bit.TEN
#define DAC_CH1CR1_TSEL          DAC_CH1CR1_bit.TSEL
#define DAC_CH1CR1_WAVEN         DAC_CH1CR1_bit.WAVEN

#define DAC_CH1CR2_MAMP          DAC_CH1CR2_bit.MAMP
#define DAC_CH1CR2_DMAEN         DAC_CH1CR2_bit.DMAEN
#define DAC_CH1CR2_DMAUDRIE      DAC_CH1CR2_bit.DMAUDRIE

#define DAC_CH2CR1_EN            DAC_CH2CR1_bit.EN
#define DAC_CH2CR1_BOFF          DAC_CH2CR1_bit.BOFF
#define DAC_CH2CR1_TEN           DAC_CH2CR1_bit.TEN
#define DAC_CH2CR1_TSEL          DAC_CH2CR1_bit.TSEL
#define DAC_CH2CR1_WAVEN         DAC_CH2CR1_bit.WAVEN

#define DAC_CH2CR2_MAMP          DAC_CH2CR2_bit.MAMP
#define DAC_CH2CR2_DMAEN         DAC_CH2CR2_bit.DMAEN
#define DAC_CH2CR2_DMAUDRIE      DAC_CH2CR2_bit.DMAUDRIE

#define DAC_SWTRIG_SWTRIG1       DAC_SWTRIG_bit.SWTRIG1
#define DAC_SWTRIG_SWTRIG2       DAC_SWTRIG_bit.SWTRIG2

#define DAC_SR_DMAUDR1           DAC_SR_bit.DMAUDR1
#define DAC_SR_DMAUDR2           DAC_SR_bit.DMAUDR2

#define DAC_CH1RDHRH_RDHRH00     DAC_CH1RDHRH_bit.RDHRH00
#define DAC_CH1RDHRH_RDHRH10     DAC_CH1RDHRH_bit.RDHRH10
#define DAC_CH1RDHRH_RDHRH20     DAC_CH1RDHRH_bit.RDHRH20
#define DAC_CH1RDHRH_RDHRH30     DAC_CH1RDHRH_bit.RDHRH30

#define DAC_CH1RDHRL_RDHRL00     DAC_CH1RDHRL_bit.RDHRL00
#define DAC_CH1RDHRL_RDHRL10     DAC_CH1RDHRL_bit.RDHRL10
#define DAC_CH1RDHRL_RDHRL20     DAC_CH1RDHRL_bit.RDHRL20
#define DAC_CH1RDHRL_RDHRL30     DAC_CH1RDHRL_bit.RDHRL30
#define DAC_CH1RDHRL_RDHRL40     DAC_CH1RDHRL_bit.RDHRL40
#define DAC_CH1RDHRL_RDHRL50     DAC_CH1RDHRL_bit.RDHRL50
#define DAC_CH1RDHRL_RDHRL60     DAC_CH1RDHRL_bit.RDHRL60
#define DAC_CH1RDHRL_RDHRL70     DAC_CH1RDHRL_bit.RDHRL70

#define DAC_CH1LDHRH_LDHRH00     DAC_CH1LDHRH_bit.LDHRH00
#define DAC_CH1LDHRH_LDHRH10     DAC_CH1LDHRH_bit.LDHRH10
#define DAC_CH1LDHRH_LDHRH20     DAC_CH1LDHRH_bit.LDHRH20
#define DAC_CH1LDHRH_LDHRH30     DAC_CH1LDHRH_bit.LDHRH30
#define DAC_CH1LDHRH_LDHRH40     DAC_CH1LDHRH_bit.LDHRH40
#define DAC_CH1LDHRH_LDHRH50     DAC_CH1LDHRH_bit.LDHRH50
#define DAC_CH1LDHRH_LDHRH60     DAC_CH1LDHRH_bit.LDHRH60
#define DAC_CH1LDHRH_LDHRH70     DAC_CH1LDHRH_bit.LDHRH70

#define DAC_CH1LDHRL_LDHRL4      DAC_CH1LDHRL_bit.LDHRL4
#define DAC_CH1LDHRL_LDHRL5      DAC_CH1LDHRL_bit.LDHRL5
#define DAC_CH1LDHRL_LDHRL6      DAC_CH1LDHRL_bit.LDHRL6
#define DAC_CH1LDHRL_LDHRL7      DAC_CH1LDHRL_bit.LDHRL7

#define DAC_CH1DHR8_DHR00        DAC_CH1DHR8_bit.DHR00
#define DAC_CH1DHR8_DHR10        DAC_CH1DHR8_bit.DHR10
#define DAC_CH1DHR8_DHR20        DAC_CH1DHR8_bit.DHR20
#define DAC_CH1DHR8_DHR30        DAC_CH1DHR8_bit.DHR30
#define DAC_CH1DHR8_DHR40        DAC_CH1DHR8_bit.DHR40
#define DAC_CH1DHR8_DHR50        DAC_CH1DHR8_bit.DHR50
#define DAC_CH1DHR8_DHR60        DAC_CH1DHR8_bit.DHR60
#define DAC_CH1DHR8_DHR70        DAC_CH1DHR8_bit.DHR70

#define DAC_CH2RDHRH_RDHRH00     DAC_CH2RDHRH_bit.RDHRH00
#define DAC_CH2RDHRH_RDHRH10     DAC_CH2RDHRH_bit.RDHRH10
#define DAC_CH2RDHRH_RDHRH20     DAC_CH2RDHRH_bit.RDHRH20
#define DAC_CH2RDHRH_RDHRH30     DAC_CH2RDHRH_bit.RDHRH30

#define DAC_CH2RDHRL_RDHRL00     DAC_CH2RDHRL_bit.RDHRL00
#define DAC_CH2RDHRL_RDHRL10     DAC_CH2RDHRL_bit.RDHRL10
#define DAC_CH2RDHRL_RDHRL20     DAC_CH2RDHRL_bit.RDHRL20
#define DAC_CH2RDHRL_RDHRL30     DAC_CH2RDHRL_bit.RDHRL30
#define DAC_CH2RDHRL_RDHRL40     DAC_CH2RDHRL_bit.RDHRL40
#define DAC_CH2RDHRL_RDHRL50     DAC_CH2RDHRL_bit.RDHRL50
#define DAC_CH2RDHRL_RDHRL60     DAC_CH2RDHRL_bit.RDHRL60
#define DAC_CH2RDHRL_RDHRL70     DAC_CH2RDHRL_bit.RDHRL70

#define DAC_CH2LDHRH_LDHRH00     DAC_CH2LDHRH_bit.LDHRH00
#define DAC_CH2LDHRH_LDHRH10     DAC_CH2LDHRH_bit.LDHRH10
#define DAC_CH2LDHRH_LDHRH20     DAC_CH2LDHRH_bit.LDHRH20
#define DAC_CH2LDHRH_LDHRH30     DAC_CH2LDHRH_bit.LDHRH30
#define DAC_CH2LDHRH_LDHRH40     DAC_CH2LDHRH_bit.LDHRH40
#define DAC_CH2LDHRH_LDHRH50     DAC_CH2LDHRH_bit.LDHRH50
#define DAC_CH2LDHRH_LDHRH60     DAC_CH2LDHRH_bit.LDHRH60
#define DAC_CH2LDHRH_LDHRH70     DAC_CH2LDHRH_bit.LDHRH70

#define DAC_CH2LDHRL_LDHRL4      DAC_CH2LDHRL_bit.LDHRL4
#define DAC_CH2LDHRL_LDHRL5      DAC_CH2LDHRL_bit.LDHRL5
#define DAC_CH2LDHRL_LDHRL6      DAC_CH2LDHRL_bit.LDHRL6
#define DAC_CH2LDHRL_LDHRL7      DAC_CH2LDHRL_bit.LDHRL7

#define DAC_CH2DHR8_DHR00        DAC_CH2DHR8_bit.DHR00
#define DAC_CH2DHR8_DHR10        DAC_CH2DHR8_bit.DHR10
#define DAC_CH2DHR8_DHR20        DAC_CH2DHR8_bit.DHR20
#define DAC_CH2DHR8_DHR30        DAC_CH2DHR8_bit.DHR30
#define DAC_CH2DHR8_DHR40        DAC_CH2DHR8_bit.DHR40
#define DAC_CH2DHR8_DHR50        DAC_CH2DHR8_bit.DHR50
#define DAC_CH2DHR8_DHR60        DAC_CH2DHR8_bit.DHR60
#define DAC_CH2DHR8_DHR70        DAC_CH2DHR8_bit.DHR70

#define DAC_DCH1RDHRH_RDHRH00    DAC_DCH1RDHRH_bit.RDHRH00
#define DAC_DCH1RDHRH_RDHRH10    DAC_DCH1RDHRH_bit.RDHRH10
#define DAC_DCH1RDHRH_RDHRH20    DAC_DCH1RDHRH_bit.RDHRH20
#define DAC_DCH1RDHRH_RDHRH30    DAC_DCH1RDHRH_bit.RDHRH30

#define DAC_DCH1RDHRL_RDHRL00    DAC_DCH1RDHRL_bit.RDHRL00
#define DAC_DCH1RDHRL_RDHRL10    DAC_DCH1RDHRL_bit.RDHRL10
#define DAC_DCH1RDHRL_RDHRL20    DAC_DCH1RDHRL_bit.RDHRL20
#define DAC_DCH1RDHRL_RDHRL30    DAC_DCH1RDHRL_bit.RDHRL30
#define DAC_DCH1RDHRL_RDHRL40    DAC_DCH1RDHRL_bit.RDHRL40
#define DAC_DCH1RDHRL_RDHRL50    DAC_DCH1RDHRL_bit.RDHRL50
#define DAC_DCH1RDHRL_RDHRL60    DAC_DCH1RDHRL_bit.RDHRL60
#define DAC_DCH1RDHRL_RDHRL70    DAC_DCH1RDHRL_bit.RDHRL70

#define DAC_DORH_DORH            DAC_DORH_bit.DORH

#define DAC_DCH2RDHRH_RDHRH00    DAC_DCH2RDHRH_bit.RDHRH00
#define DAC_DCH2RDHRH_RDHRH10    DAC_DCH2RDHRH_bit.RDHRH10
#define DAC_DCH2RDHRH_RDHRH20    DAC_DCH2RDHRH_bit.RDHRH20
#define DAC_DCH2RDHRH_RDHRH30    DAC_DCH2RDHRH_bit.RDHRH30

#define DAC_DCH2RDHRL_RDHRL00    DAC_DCH2RDHRL_bit.RDHRL00
#define DAC_DCH2RDHRL_RDHRL10    DAC_DCH2RDHRL_bit.RDHRL10
#define DAC_DCH2RDHRL_RDHRL20    DAC_DCH2RDHRL_bit.RDHRL20
#define DAC_DCH2RDHRL_RDHRL30    DAC_DCH2RDHRL_bit.RDHRL30
#define DAC_DCH2RDHRL_RDHRL40    DAC_DCH2RDHRL_bit.RDHRL40
#define DAC_DCH2RDHRL_RDHRL50    DAC_DCH2RDHRL_bit.RDHRL50
#define DAC_DCH2RDHRL_RDHRL60    DAC_DCH2RDHRL_bit.RDHRL60
#define DAC_DCH2RDHRL_RDHRL70    DAC_DCH2RDHRL_bit.RDHRL70

#define DAC_DCH1LDHRH_LDHRH00    DAC_DCH1LDHRH_bit.LDHRH00
#define DAC_DCH1LDHRH_LDHRH10    DAC_DCH1LDHRH_bit.LDHRH10
#define DAC_DCH1LDHRH_LDHRH20    DAC_DCH1LDHRH_bit.LDHRH20
#define DAC_DCH1LDHRH_LDHRH30    DAC_DCH1LDHRH_bit.LDHRH30
#define DAC_DCH1LDHRH_LDHRH40    DAC_DCH1LDHRH_bit.LDHRH40
#define DAC_DCH1LDHRH_LDHRH50    DAC_DCH1LDHRH_bit.LDHRH50
#define DAC_DCH1LDHRH_LDHRH60    DAC_DCH1LDHRH_bit.LDHRH60
#define DAC_DCH1LDHRH_LDHRH70    DAC_DCH1LDHRH_bit.LDHRH70

#define DAC_DCH1LDHRL_LDHRL40    DAC_DCH1LDHRL_bit.LDHRL40
#define DAC_DCH1LDHRL_LDHRL50    DAC_DCH1LDHRL_bit.LDHRL50
#define DAC_DCH1LDHRL_LDHRL60    DAC_DCH1LDHRL_bit.LDHRL60
#define DAC_DCH1LDHRL_LDHRL70    DAC_DCH1LDHRL_bit.LDHRL70

#define DAC_DCH2LDHRH_LDHRH00    DAC_DCH2LDHRH_bit.LDHRH00
#define DAC_DCH2LDHRH_LDHRH10    DAC_DCH2LDHRH_bit.LDHRH10
#define DAC_DCH2LDHRH_LDHRH20    DAC_DCH2LDHRH_bit.LDHRH20
#define DAC_DCH2LDHRH_LDHRH30    DAC_DCH2LDHRH_bit.LDHRH30
#define DAC_DCH2LDHRH_LDHRH40    DAC_DCH2LDHRH_bit.LDHRH40
#define DAC_DCH2LDHRH_LDHRH50    DAC_DCH2LDHRH_bit.LDHRH50
#define DAC_DCH2LDHRH_LDHRH60    DAC_DCH2LDHRH_bit.LDHRH60
#define DAC_DCH2LDHRH_LDHRH70    DAC_DCH2LDHRH_bit.LDHRH70

#define DAC_DCH2LDHRL_LDHRL40    DAC_DCH2LDHRL_bit.LDHRL40
#define DAC_DCH2LDHRL_LDHRL50    DAC_DCH2LDHRL_bit.LDHRL50
#define DAC_DCH2LDHRL_LDHRL60    DAC_DCH2LDHRL_bit.LDHRL60
#define DAC_DCH2LDHRL_LDHRL70    DAC_DCH2LDHRL_bit.LDHRL70

#define DAC_DCH1DHR8_DHR00       DAC_DCH1DHR8_bit.DHR00
#define DAC_DCH1DHR8_DHR10       DAC_DCH1DHR8_bit.DHR10
#define DAC_DCH1DHR8_DHR20       DAC_DCH1DHR8_bit.DHR20
#define DAC_DCH1DHR8_DHR30       DAC_DCH1DHR8_bit.DHR30
#define DAC_DCH1DHR8_DHR40       DAC_DCH1DHR8_bit.DHR40
#define DAC_DCH1DHR8_DHR50       DAC_DCH1DHR8_bit.DHR50
#define DAC_DCH1DHR8_DHR60       DAC_DCH1DHR8_bit.DHR60
#define DAC_DCH1DHR8_DHR70       DAC_DCH1DHR8_bit.DHR70

#define DAC_DCH2DHR8_DHR00       DAC_DCH2DHR8_bit.DHR00
#define DAC_DCH2DHR8_DHR10       DAC_DCH2DHR8_bit.DHR10
#define DAC_DCH2DHR8_DHR20       DAC_DCH2DHR8_bit.DHR20
#define DAC_DCH2DHR8_DHR30       DAC_DCH2DHR8_bit.DHR30
#define DAC_DCH2DHR8_DHR40       DAC_DCH2DHR8_bit.DHR40
#define DAC_DCH2DHR8_DHR50       DAC_DCH2DHR8_bit.DHR50
#define DAC_DCH2DHR8_DHR60       DAC_DCH2DHR8_bit.DHR60
#define DAC_DCH2DHR8_DHR70       DAC_DCH2DHR8_bit.DHR70

#define DAC_CH1DORH_DORH00       DAC_CH1DORH_bit.DORH00
#define DAC_CH1DORH_DORH10       DAC_CH1DORH_bit.DORH10
#define DAC_CH1DORH_DORH20       DAC_CH1DORH_bit.DORH20
#define DAC_CH1DORH_DORH30       DAC_CH1DORH_bit.DORH30

#define DAC_CH1DORL_DORL00       DAC_CH1DORL_bit.DORL00
#define DAC_CH1DORL_DORL10       DAC_CH1DORL_bit.DORL10
#define DAC_CH1DORL_DORL20       DAC_CH1DORL_bit.DORL20
#define DAC_CH1DORL_DORL30       DAC_CH1DORL_bit.DORL30
#define DAC_CH1DORL_DORL40       DAC_CH1DORL_bit.DORL40
#define DAC_CH1DORL_DORL50       DAC_CH1DORL_bit.DORL50
#define DAC_CH1DORL_DORL60       DAC_CH1DORL_bit.DORL60
#define DAC_CH1DORL_DORL70       DAC_CH1DORL_bit.DORL70

#define DAC_CH2DORH_DORH00       DAC_CH2DORH_bit.DORH00
#define DAC_CH2DORH_DORH10       DAC_CH2DORH_bit.DORH10
#define DAC_CH2DORH_DORH20       DAC_CH2DORH_bit.DORH20
#define DAC_CH2DORH_DORH30       DAC_CH2DORH_bit.DORH30

#define DAC_CH2DORL_DORL00       DAC_CH2DORL_bit.DORL00
#define DAC_CH2DORL_DORL10       DAC_CH2DORL_bit.DORL10
#define DAC_CH2DORL_DORL20       DAC_CH2DORL_bit.DORL20
#define DAC_CH2DORL_DORL30       DAC_CH2DORL_bit.DORL30
#define DAC_CH2DORL_DORL40       DAC_CH2DORL_bit.DORL40
#define DAC_CH2DORL_DORL50       DAC_CH2DORL_bit.DORL50
#define DAC_CH2DORL_DORL60       DAC_CH2DORL_bit.DORL60
#define DAC_CH2DORL_DORL70       DAC_CH2DORL_bit.DORL70

#endif

/*-------------------------------------------------------------------------
 *      DAC bit masks
 *-----------------------------------------------------------------------*/
#define MASK_DAC_CH1CR1_EN       0x01
#define MASK_DAC_CH1CR1_BOFF     0x02
#define MASK_DAC_CH1CR1_TEN      0x04
#define MASK_DAC_CH1CR1_TSEL     0x38
#define MASK_DAC_CH1CR1_WAVEN    0xC0

#define MASK_DAC_CH1CR2_MAMP     0x0F
#define MASK_DAC_CH1CR2_DMAEN    0x10
#define MASK_DAC_CH1CR2_DMAUDRIE 0x20

#define MASK_DAC_CH2CR1_EN       0x01
#define MASK_DAC_CH2CR1_BOFF     0x02
#define MASK_DAC_CH2CR1_TEN      0x04
#define MASK_DAC_CH2CR1_TSEL     0x38
#define MASK_DAC_CH2CR1_WAVEN    0xC0

#define MASK_DAC_CH2CR2_MAMP     0x0F
#define MASK_DAC_CH2CR2_DMAEN    0x10
#define MASK_DAC_CH2CR2_DMAUDRIE 0x20

#define MASK_DAC_SWTRIG_SWTRIG1  0x01
#define MASK_DAC_SWTRIG_SWTRIG2  0x02

#define MASK_DAC_SR_DMAUDR1      0x01
#define MASK_DAC_SR_DMAUDR2      0x02

#define MASK_DAC_CH1RDHRH_RDHRH00 0x01
#define MASK_DAC_CH1RDHRH_RDHRH10 0x02
#define MASK_DAC_CH1RDHRH_RDHRH20 0x04
#define MASK_DAC_CH1RDHRH_RDHRH30 0x08

#define MASK_DAC_CH1RDHRL_RDHRL00 0x01
#define MASK_DAC_CH1RDHRL_RDHRL10 0x02
#define MASK_DAC_CH1RDHRL_RDHRL20 0x04
#define MASK_DAC_CH1RDHRL_RDHRL30 0x08
#define MASK_DAC_CH1RDHRL_RDHRL40 0x10
#define MASK_DAC_CH1RDHRL_RDHRL50 0x20
#define MASK_DAC_CH1RDHRL_RDHRL60 0x40
#define MASK_DAC_CH1RDHRL_RDHRL70 0x80

#define MASK_DAC_CH1LDHRH_LDHRH00 0x01
#define MASK_DAC_CH1LDHRH_LDHRH10 0x02
#define MASK_DAC_CH1LDHRH_LDHRH20 0x04
#define MASK_DAC_CH1LDHRH_LDHRH30 0x08
#define MASK_DAC_CH1LDHRH_LDHRH40 0x10
#define MASK_DAC_CH1LDHRH_LDHRH50 0x20
#define MASK_DAC_CH1LDHRH_LDHRH60 0x40
#define MASK_DAC_CH1LDHRH_LDHRH70 0x80

#define MASK_DAC_CH1LDHRL_LDHRL4 0x10
#define MASK_DAC_CH1LDHRL_LDHRL5 0x20
#define MASK_DAC_CH1LDHRL_LDHRL6 0x40
#define MASK_DAC_CH1LDHRL_LDHRL7 0x80

#define MASK_DAC_CH1DHR8_DHR00   0x01
#define MASK_DAC_CH1DHR8_DHR10   0x02
#define MASK_DAC_CH1DHR8_DHR20   0x04
#define MASK_DAC_CH1DHR8_DHR30   0x08
#define MASK_DAC_CH1DHR8_DHR40   0x10
#define MASK_DAC_CH1DHR8_DHR50   0x20
#define MASK_DAC_CH1DHR8_DHR60   0x40
#define MASK_DAC_CH1DHR8_DHR70   0x80

#define MASK_DAC_CH2RDHRH_RDHRH00 0x01
#define MASK_DAC_CH2RDHRH_RDHRH10 0x02
#define MASK_DAC_CH2RDHRH_RDHRH20 0x04
#define MASK_DAC_CH2RDHRH_RDHRH30 0x08

#define MASK_DAC_CH2RDHRL_RDHRL00 0x01
#define MASK_DAC_CH2RDHRL_RDHRL10 0x02
#define MASK_DAC_CH2RDHRL_RDHRL20 0x04
#define MASK_DAC_CH2RDHRL_RDHRL30 0x08
#define MASK_DAC_CH2RDHRL_RDHRL40 0x10
#define MASK_DAC_CH2RDHRL_RDHRL50 0x20
#define MASK_DAC_CH2RDHRL_RDHRL60 0x40
#define MASK_DAC_CH2RDHRL_RDHRL70 0x80

#define MASK_DAC_CH2LDHRH_LDHRH00 0x01
#define MASK_DAC_CH2LDHRH_LDHRH10 0x02
#define MASK_DAC_CH2LDHRH_LDHRH20 0x04
#define MASK_DAC_CH2LDHRH_LDHRH30 0x08
#define MASK_DAC_CH2LDHRH_LDHRH40 0x10
#define MASK_DAC_CH2LDHRH_LDHRH50 0x20
#define MASK_DAC_CH2LDHRH_LDHRH60 0x40
#define MASK_DAC_CH2LDHRH_LDHRH70 0x80

#define MASK_DAC_CH2LDHRL_LDHRL4 0x10
#define MASK_DAC_CH2LDHRL_LDHRL5 0x20
#define MASK_DAC_CH2LDHRL_LDHRL6 0x40
#define MASK_DAC_CH2LDHRL_LDHRL7 0x80

#define MASK_DAC_CH2DHR8_DHR00   0x01
#define MASK_DAC_CH2DHR8_DHR10   0x02
#define MASK_DAC_CH2DHR8_DHR20   0x04
#define MASK_DAC_CH2DHR8_DHR30   0x08
#define MASK_DAC_CH2DHR8_DHR40   0x10
#define MASK_DAC_CH2DHR8_DHR50   0x20
#define MASK_DAC_CH2DHR8_DHR60   0x40
#define MASK_DAC_CH2DHR8_DHR70   0x80

#define MASK_DAC_DCH1RDHRH_RDHRH00 0x01
#define MASK_DAC_DCH1RDHRH_RDHRH10 0x02
#define MASK_DAC_DCH1RDHRH_RDHRH20 0x04
#define MASK_DAC_DCH1RDHRH_RDHRH30 0x08

#define MASK_DAC_DCH1RDHRL_RDHRL00 0x01
#define MASK_DAC_DCH1RDHRL_RDHRL10 0x02
#define MASK_DAC_DCH1RDHRL_RDHRL20 0x04
#define MASK_DAC_DCH1RDHRL_RDHRL30 0x08
#define MASK_DAC_DCH1RDHRL_RDHRL40 0x10
#define MASK_DAC_DCH1RDHRL_RDHRL50 0x20
#define MASK_DAC_DCH1RDHRL_RDHRL60 0x40
#define MASK_DAC_DCH1RDHRL_RDHRL70 0x80

#define MASK_DAC_DORH_DORH       0x0F

#define MASK_DAC_DCH2RDHRH_RDHRH00 0x01
#define MASK_DAC_DCH2RDHRH_RDHRH10 0x02
#define MASK_DAC_DCH2RDHRH_RDHRH20 0x04
#define MASK_DAC_DCH2RDHRH_RDHRH30 0x08

#define MASK_DAC_DCH2RDHRL_RDHRL00 0x01
#define MASK_DAC_DCH2RDHRL_RDHRL10 0x02
#define MASK_DAC_DCH2RDHRL_RDHRL20 0x04
#define MASK_DAC_DCH2RDHRL_RDHRL30 0x08
#define MASK_DAC_DCH2RDHRL_RDHRL40 0x10
#define MASK_DAC_DCH2RDHRL_RDHRL50 0x20
#define MASK_DAC_DCH2RDHRL_RDHRL60 0x40
#define MASK_DAC_DCH2RDHRL_RDHRL70 0x80

#define MASK_DAC_DCH1LDHRH_LDHRH00 0x01
#define MASK_DAC_DCH1LDHRH_LDHRH10 0x02
#define MASK_DAC_DCH1LDHRH_LDHRH20 0x04
#define MASK_DAC_DCH1LDHRH_LDHRH30 0x08
#define MASK_DAC_DCH1LDHRH_LDHRH40 0x10
#define MASK_DAC_DCH1LDHRH_LDHRH50 0x20
#define MASK_DAC_DCH1LDHRH_LDHRH60 0x40
#define MASK_DAC_DCH1LDHRH_LDHRH70 0x80

#define MASK_DAC_DCH1LDHRL_LDHRL40 0x10
#define MASK_DAC_DCH1LDHRL_LDHRL50 0x20
#define MASK_DAC_DCH1LDHRL_LDHRL60 0x40
#define MASK_DAC_DCH1LDHRL_LDHRL70 0x80

#define MASK_DAC_DCH2LDHRH_LDHRH00 0x01
#define MASK_DAC_DCH2LDHRH_LDHRH10 0x02
#define MASK_DAC_DCH2LDHRH_LDHRH20 0x04
#define MASK_DAC_DCH2LDHRH_LDHRH30 0x08
#define MASK_DAC_DCH2LDHRH_LDHRH40 0x10
#define MASK_DAC_DCH2LDHRH_LDHRH50 0x20
#define MASK_DAC_DCH2LDHRH_LDHRH60 0x40
#define MASK_DAC_DCH2LDHRH_LDHRH70 0x80

#define MASK_DAC_DCH2LDHRL_LDHRL40 0x10
#define MASK_DAC_DCH2LDHRL_LDHRL50 0x20
#define MASK_DAC_DCH2LDHRL_LDHRL60 0x40
#define MASK_DAC_DCH2LDHRL_LDHRL70 0x80

#define MASK_DAC_DCH1DHR8_DHR00  0x01
#define MASK_DAC_DCH1DHR8_DHR10  0x02
#define MASK_DAC_DCH1DHR8_DHR20  0x04
#define MASK_DAC_DCH1DHR8_DHR30  0x08
#define MASK_DAC_DCH1DHR8_DHR40  0x10
#define MASK_DAC_DCH1DHR8_DHR50  0x20
#define MASK_DAC_DCH1DHR8_DHR60  0x40
#define MASK_DAC_DCH1DHR8_DHR70  0x80

#define MASK_DAC_DCH2DHR8_DHR00  0x01
#define MASK_DAC_DCH2DHR8_DHR10  0x02
#define MASK_DAC_DCH2DHR8_DHR20  0x04
#define MASK_DAC_DCH2DHR8_DHR30  0x08
#define MASK_DAC_DCH2DHR8_DHR40  0x10
#define MASK_DAC_DCH2DHR8_DHR50  0x20
#define MASK_DAC_DCH2DHR8_DHR60  0x40
#define MASK_DAC_DCH2DHR8_DHR70  0x80

#define MASK_DAC_CH1DORH_DORH00  0x01
#define MASK_DAC_CH1DORH_DORH10  0x02
#define MASK_DAC_CH1DORH_DORH20  0x04
#define MASK_DAC_CH1DORH_DORH30  0x08

#define MASK_DAC_CH1DORL_DORL00  0x01
#define MASK_DAC_CH1DORL_DORL10  0x02
#define MASK_DAC_CH1DORL_DORL20  0x04
#define MASK_DAC_CH1DORL_DORL30  0x08
#define MASK_DAC_CH1DORL_DORL40  0x10
#define MASK_DAC_CH1DORL_DORL50  0x20
#define MASK_DAC_CH1DORL_DORL60  0x40
#define MASK_DAC_CH1DORL_DORL70  0x80

#define MASK_DAC_CH2DORH_DORH00  0x01
#define MASK_DAC_CH2DORH_DORH10  0x02
#define MASK_DAC_CH2DORH_DORH20  0x04
#define MASK_DAC_CH2DORH_DORH30  0x08

#define MASK_DAC_CH2DORL_DORL00  0x01
#define MASK_DAC_CH2DORL_DORL10  0x02
#define MASK_DAC_CH2DORL_DORL20  0x04
#define MASK_DAC_CH2DORL_DORL30  0x08
#define MASK_DAC_CH2DORL_DORL40  0x10
#define MASK_DAC_CH2DORL_DORL50  0x20
#define MASK_DAC_CH2DORL_DORL60  0x40
#define MASK_DAC_CH2DORL_DORL70  0x80


/*-------------------------------------------------------------------------
 *      SPI2 register definitions
 *-----------------------------------------------------------------------*/
/* SPI2 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char MSTR        : 1;
  unsigned char BR          : 3;
  unsigned char SPE         : 1;
  unsigned char LSBFIRST    : 1;
} __BITS_SPI2_CR1;
#endif
//__IO_REG8_BIT(SPI2_CR1,    0x53C0, __READ_WRITE, __BITS_SPI2_CR1);
unsigned char SPI2_CR1; //0x53C0 __READ_WRITE
__BITS_SPI2_CR1 SPI2_CR1_bit;

/* SPI2 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SSI         : 1;
  unsigned char SSM         : 1;
  unsigned char RXONLY      : 1;
  unsigned char             : 1;
  unsigned char CRCNEXT     : 1;
  unsigned char CRCEN       : 1;
  unsigned char BDOE        : 1;
  unsigned char BDM         : 1;
} __BITS_SPI2_CR2;
#endif
//__IO_REG8_BIT(SPI2_CR2,    0x53C1, __READ_WRITE, __BITS_SPI2_CR2);
unsigned char SPI2_CR2; //0x53C1 __READ_WRITE
__BITS_SPI2_CR2 SPI2_CR2_bit;

/* SPI2 interrupt control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RXDMAEN     : 1;
  unsigned char TXDMAEN     : 1;
  unsigned char             : 2;
  unsigned char WKIE        : 1;
  unsigned char ERRIE       : 1;
  unsigned char RXIE        : 1;
  unsigned char TXIE        : 1;
} __BITS_SPI2_ICR;
#endif
//__IO_REG8_BIT(SPI2_ICR,    0x53C2, __READ_WRITE, __BITS_SPI2_ICR);
unsigned char SPI2_ICR; //0x53C2 __READ_WRITE
__BITS_SPI2_ICR SPI2_ICR_bit;

/* SPI2 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RXNE        : 1;
  unsigned char TXE         : 1;
  unsigned char             : 1;
  unsigned char WKUP        : 1;
  unsigned char CRCERR      : 1;
  unsigned char MODF        : 1;
  unsigned char OVR         : 1;
  unsigned char BSY         : 1;
} __BITS_SPI2_SR;
#endif
//__IO_REG8_BIT(SPI2_SR,     0x53C3, __READ_WRITE, __BITS_SPI2_SR);
unsigned char SPI2_SR; //0x53C3 __READ_WRITE
__BITS_SPI2_SR SPI2_SR_bit;

/* SPI2 data register */
//__IO_REG8    (SPI2_DR,     0x53C4, __READ_WRITE);
unsigned char SPI2_DR; //0x53C4 __READ_WRITE
/* SPI2 CRC polynomial register */
//__IO_REG8    (SPI2_CRCPR,  0x53C5, __READ_WRITE);
unsigned char SPI2_CRCPR; //0x53C5 __READ_WRITE
/* SPI2 Rx CRC register */
//__IO_REG8    (SPI2_RXCRCR, 0x53C6, __READ);
unsigned char SPI2_RXCRCR; //0x53C6 __READ
/* SPI2 Tx CRC register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TXCRC       : 7;
} __BITS_SPI2_TXCRCR;
#endif
//__IO_REG8_BIT(SPI2_TXCRCR, 0x53C7, __READ, __BITS_SPI2_TXCRCR);
unsigned char SPI2_TXCRCR; //0x53C7 __READ
__BITS_SPI2_TXCRCR SPI2_TXCRCR_bit;


/*-------------------------------------------------------------------------
 *      SPI2 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SPI2_CR1_CPHA            SPI2_CR1_bit.CPHA
#define SPI2_CR1_CPOL            SPI2_CR1_bit.CPOL
#define SPI2_CR1_MSTR            SPI2_CR1_bit.MSTR
#define SPI2_CR1_BR              SPI2_CR1_bit.BR
#define SPI2_CR1_SPE             SPI2_CR1_bit.SPE
#define SPI2_CR1_LSBFIRST        SPI2_CR1_bit.LSBFIRST

#define SPI2_CR2_SSI             SPI2_CR2_bit.SSI
#define SPI2_CR2_SSM             SPI2_CR2_bit.SSM
#define SPI2_CR2_RXONLY          SPI2_CR2_bit.RXONLY
#define SPI2_CR2_CRCNEXT         SPI2_CR2_bit.CRCNEXT
#define SPI2_CR2_CRCEN           SPI2_CR2_bit.CRCEN
#define SPI2_CR2_BDOE            SPI2_CR2_bit.BDOE
#define SPI2_CR2_BDM             SPI2_CR2_bit.BDM

#define SPI2_ICR_RXDMAEN         SPI2_ICR_bit.RXDMAEN
#define SPI2_ICR_TXDMAEN         SPI2_ICR_bit.TXDMAEN
#define SPI2_ICR_WKIE            SPI2_ICR_bit.WKIE
#define SPI2_ICR_ERRIE           SPI2_ICR_bit.ERRIE
#define SPI2_ICR_RXIE            SPI2_ICR_bit.RXIE
#define SPI2_ICR_TXIE            SPI2_ICR_bit.TXIE

#define SPI2_SR_RXNE             SPI2_SR_bit.RXNE
#define SPI2_SR_TXE              SPI2_SR_bit.TXE
#define SPI2_SR_WKUP             SPI2_SR_bit.WKUP
#define SPI2_SR_CRCERR           SPI2_SR_bit.CRCERR
#define SPI2_SR_MODF             SPI2_SR_bit.MODF
#define SPI2_SR_OVR              SPI2_SR_bit.OVR
#define SPI2_SR_BSY              SPI2_SR_bit.BSY

#define SPI2_TXCRCR_TXCRC        SPI2_TXCRCR_bit.TXCRC

#endif

/*-------------------------------------------------------------------------
 *      SPI2 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SPI2_CR1_CPHA       0x01
#define MASK_SPI2_CR1_CPOL       0x02
#define MASK_SPI2_CR1_MSTR       0x04
#define MASK_SPI2_CR1_BR         0x38
#define MASK_SPI2_CR1_SPE        0x40
#define MASK_SPI2_CR1_LSBFIRST   0x80

#define MASK_SPI2_CR2_SSI        0x01
#define MASK_SPI2_CR2_SSM        0x02
#define MASK_SPI2_CR2_RXONLY     0x04
#define MASK_SPI2_CR2_CRCNEXT    0x10
#define MASK_SPI2_CR2_CRCEN      0x20
#define MASK_SPI2_CR2_BDOE       0x40
#define MASK_SPI2_CR2_BDM        0x80

#define MASK_SPI2_ICR_RXDMAEN    0x01
#define MASK_SPI2_ICR_TXDMAEN    0x02
#define MASK_SPI2_ICR_WKIE       0x10
#define MASK_SPI2_ICR_ERRIE      0x20
#define MASK_SPI2_ICR_RXIE       0x40
#define MASK_SPI2_ICR_TXIE       0x80

#define MASK_SPI2_SR_RXNE        0x01
#define MASK_SPI2_SR_TXE         0x02
#define MASK_SPI2_SR_WKUP        0x08
#define MASK_SPI2_SR_CRCERR      0x10
#define MASK_SPI2_SR_MODF        0x20
#define MASK_SPI2_SR_OVR         0x40
#define MASK_SPI2_SR_BSY         0x80

#define MASK_SPI2_TXCRCR_TXCRC   0x7F


/*-------------------------------------------------------------------------
 *      USART2 register definitions
 *-----------------------------------------------------------------------*/
/* USART2 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PE          : 1;
  unsigned char FE          : 1;
  unsigned char NF          : 1;
  unsigned char OR          : 1;
  unsigned char IDLE        : 1;
  unsigned char RXNE        : 1;
  unsigned char TC          : 1;
  unsigned char TXE         : 1;
} __BITS_USART2_SR;
#endif
//__IO_REG8_BIT(USART2_SR,   0x53E0, __READ, __BITS_USART2_SR);
unsigned char USART2_SR; //0x53E0 __READ
__BITS_USART2_SR USART2_SR_bit;

/* USART2 data register */
//__IO_REG8    (USART2_DR,   0x53E1, __READ_WRITE);
unsigned char USART2_DR; //0x53E1 __READ_WRITE
/* USART2 baud rate register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char USART_DIV4  : 1;
  unsigned char USART_DIV5  : 1;
  unsigned char USART_DIV6  : 1;
  unsigned char USART_DIV7  : 1;
  unsigned char USART_DIV8  : 1;
  unsigned char USART_DIV9  : 1;
  unsigned char USART_DIV10 : 1;
  unsigned char USART_DIV11 : 1;
} __BITS_USART2_BRR1;
#endif
//__IO_REG8_BIT(USART2_BRR1, 0x53E2, __READ_WRITE, __BITS_USART2_BRR1);
unsigned char USART2_BRR1; //0x53E2 __READ_WRITE
__BITS_USART2_BRR1 USART2_BRR1_bit;

/* USART2 baud rate register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char USART_DIV0  : 1;
  unsigned char USART_DIV1  : 1;
  unsigned char USART_DIV2  : 1;
  unsigned char USART_DIV3  : 1;
  unsigned char USART_DIV12 : 1;
  unsigned char USART_DIV13 : 1;
  unsigned char USART_DIV14 : 1;
  unsigned char USART_DIV15 : 1;
} __BITS_USART2_BRR2;
#endif
//__IO_REG8_BIT(USART2_BRR2, 0x53E3, __READ_WRITE, __BITS_USART2_BRR2);
unsigned char USART2_BRR2; //0x53E3 __READ_WRITE
__BITS_USART2_BRR2 USART2_BRR2_bit;

/* USART2 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PIEN        : 1;
  unsigned char PS          : 1;
  unsigned char PCEN        : 1;
  unsigned char WAKE        : 1;
  unsigned char M           : 1;
  unsigned char USARTD      : 1;
  unsigned char T8          : 1;
  unsigned char R8          : 1;
} __BITS_USART2_CR1;
#endif
//__IO_REG8_BIT(USART2_CR1,  0x53E4, __READ_WRITE, __BITS_USART2_CR1);
unsigned char USART2_CR1; //0x53E4 __READ_WRITE
__BITS_USART2_CR1 USART2_CR1_bit;

/* USART2 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SBK         : 1;
  unsigned char RWU         : 1;
  unsigned char REN         : 1;
  unsigned char TEN         : 1;
  unsigned char ILIEN       : 1;
  unsigned char RIEN        : 1;
  unsigned char TCIEN       : 1;
  unsigned char TIEN        : 1;
} __BITS_USART2_CR2;
#endif
//__IO_REG8_BIT(USART2_CR2,  0x53E5, __READ_WRITE, __BITS_USART2_CR2);
unsigned char USART2_CR2; //0x53E5 __READ_WRITE
__BITS_USART2_CR2 USART2_CR2_bit;

/* USART2 control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LBCL        : 1;
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char CLKEN       : 1;
  unsigned char STOP        : 2;
} __BITS_USART2_CR3;
#endif
//__IO_REG8_BIT(USART2_CR3,  0x53E6, __READ_WRITE, __BITS_USART2_CR3);
unsigned char USART2_CR3; //0x53E6 __READ_WRITE
__BITS_USART2_CR3 USART2_CR3_bit;

/* USART2 control register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD         : 4;
} __BITS_USART2_CR4;
#endif
//__IO_REG8_BIT(USART2_CR4,  0x53E7, __READ_WRITE, __BITS_USART2_CR4);
unsigned char USART2_CR4; //0x53E7 __READ_WRITE
__BITS_USART2_CR4 USART2_CR4_bit;

/* USART2 control register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EIE         : 1;
  unsigned char IREN        : 1;
  unsigned char IRLP        : 1;
  unsigned char HDSEL       : 1;
  unsigned char NACK        : 1;
  unsigned char SCEN        : 1;
  unsigned char DMAR        : 1;
  unsigned char DMAT        : 1;
} __BITS_USART2_CR5;
#endif
//__IO_REG8_BIT(USART2_CR5,  0x53E8, __READ_WRITE, __BITS_USART2_CR5);
unsigned char USART2_CR5; //0x53E8 __READ_WRITE
__BITS_USART2_CR5 USART2_CR5_bit;

/* USART2 guard time register */
//__IO_REG8    (USART2_GTR,  0x53E9, __READ_WRITE);
unsigned char USART2_GTR; //0x53E9 __READ_WRITE
/* USART2 prescaler register */
//__IO_REG8    (USART2_PSCR, 0x53EA, __READ_WRITE);
unsigned char USART2_PSCR; //0x53EA __READ_WRITE

/*-------------------------------------------------------------------------
 *      USART2 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define USART2_SR_PE             USART2_SR_bit.PE
#define USART2_SR_FE             USART2_SR_bit.FE
#define USART2_SR_NF             USART2_SR_bit.NF
#define USART2_SR_OR             USART2_SR_bit.OR
#define USART2_SR_IDLE           USART2_SR_bit.IDLE
#define USART2_SR_RXNE           USART2_SR_bit.RXNE
#define USART2_SR_TC             USART2_SR_bit.TC
#define USART2_SR_TXE            USART2_SR_bit.TXE

#define USART2_BRR1_USART_DIV4   USART2_BRR1_bit.USART_DIV4
#define USART2_BRR1_USART_DIV5   USART2_BRR1_bit.USART_DIV5
#define USART2_BRR1_USART_DIV6   USART2_BRR1_bit.USART_DIV6
#define USART2_BRR1_USART_DIV7   USART2_BRR1_bit.USART_DIV7
#define USART2_BRR1_USART_DIV8   USART2_BRR1_bit.USART_DIV8
#define USART2_BRR1_USART_DIV9   USART2_BRR1_bit.USART_DIV9
#define USART2_BRR1_USART_DIV10  USART2_BRR1_bit.USART_DIV10
#define USART2_BRR1_USART_DIV11  USART2_BRR1_bit.USART_DIV11

#define USART2_BRR2_USART_DIV0   USART2_BRR2_bit.USART_DIV0
#define USART2_BRR2_USART_DIV1   USART2_BRR2_bit.USART_DIV1
#define USART2_BRR2_USART_DIV2   USART2_BRR2_bit.USART_DIV2
#define USART2_BRR2_USART_DIV3   USART2_BRR2_bit.USART_DIV3
#define USART2_BRR2_USART_DIV12  USART2_BRR2_bit.USART_DIV12
#define USART2_BRR2_USART_DIV13  USART2_BRR2_bit.USART_DIV13
#define USART2_BRR2_USART_DIV14  USART2_BRR2_bit.USART_DIV14
#define USART2_BRR2_USART_DIV15  USART2_BRR2_bit.USART_DIV15

#define USART2_CR1_PIEN          USART2_CR1_bit.PIEN
#define USART2_CR1_PS            USART2_CR1_bit.PS
#define USART2_CR1_PCEN          USART2_CR1_bit.PCEN
#define USART2_CR1_WAKE          USART2_CR1_bit.WAKE
#define USART2_CR1_M             USART2_CR1_bit.M
#define USART2_CR1_USARTD        USART2_CR1_bit.USARTD
#define USART2_CR1_T8            USART2_CR1_bit.T8
#define USART2_CR1_R8            USART2_CR1_bit.R8

#define USART2_CR2_SBK           USART2_CR2_bit.SBK
#define USART2_CR2_RWU           USART2_CR2_bit.RWU
#define USART2_CR2_REN           USART2_CR2_bit.REN
#define USART2_CR2_TEN           USART2_CR2_bit.TEN
#define USART2_CR2_ILIEN         USART2_CR2_bit.ILIEN
#define USART2_CR2_RIEN          USART2_CR2_bit.RIEN
#define USART2_CR2_TCIEN         USART2_CR2_bit.TCIEN
#define USART2_CR2_TIEN          USART2_CR2_bit.TIEN

#define USART2_CR3_LBCL          USART2_CR3_bit.LBCL
#define USART2_CR3_CPHA          USART2_CR3_bit.CPHA
#define USART2_CR3_CPOL          USART2_CR3_bit.CPOL
#define USART2_CR3_CLKEN         USART2_CR3_bit.CLKEN
#define USART2_CR3_STOP          USART2_CR3_bit.STOP

#define USART2_CR4_ADD           USART2_CR4_bit.ADD

#define USART2_CR5_EIE           USART2_CR5_bit.EIE
#define USART2_CR5_IREN          USART2_CR5_bit.IREN
#define USART2_CR5_IRLP          USART2_CR5_bit.IRLP
#define USART2_CR5_HDSEL         USART2_CR5_bit.HDSEL
#define USART2_CR5_NACK          USART2_CR5_bit.NACK
#define USART2_CR5_SCEN          USART2_CR5_bit.SCEN
#define USART2_CR5_DMAR          USART2_CR5_bit.DMAR
#define USART2_CR5_DMAT          USART2_CR5_bit.DMAT

#endif

/*-------------------------------------------------------------------------
 *      USART2 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_USART2_SR_PE        0x01
#define MASK_USART2_SR_FE        0x02
#define MASK_USART2_SR_NF        0x04
#define MASK_USART2_SR_OR        0x08
#define MASK_USART2_SR_IDLE      0x10
#define MASK_USART2_SR_RXNE      0x20
#define MASK_USART2_SR_TC        0x40
#define MASK_USART2_SR_TXE       0x80

#define MASK_USART2_BRR1_USART_DIV4 0x01
#define MASK_USART2_BRR1_USART_DIV5 0x02
#define MASK_USART2_BRR1_USART_DIV6 0x04
#define MASK_USART2_BRR1_USART_DIV7 0x08
#define MASK_USART2_BRR1_USART_DIV8 0x10
#define MASK_USART2_BRR1_USART_DIV9 0x20
#define MASK_USART2_BRR1_USART_DIV10 0x40
#define MASK_USART2_BRR1_USART_DIV11 0x80

#define MASK_USART2_BRR2_USART_DIV0 0x01
#define MASK_USART2_BRR2_USART_DIV1 0x02
#define MASK_USART2_BRR2_USART_DIV2 0x04
#define MASK_USART2_BRR2_USART_DIV3 0x08
#define MASK_USART2_BRR2_USART_DIV12 0x10
#define MASK_USART2_BRR2_USART_DIV13 0x20
#define MASK_USART2_BRR2_USART_DIV14 0x40
#define MASK_USART2_BRR2_USART_DIV15 0x80

#define MASK_USART2_CR1_PIEN     0x01
#define MASK_USART2_CR1_PS       0x02
#define MASK_USART2_CR1_PCEN     0x04
#define MASK_USART2_CR1_WAKE     0x08
#define MASK_USART2_CR1_M        0x10
#define MASK_USART2_CR1_USARTD   0x20
#define MASK_USART2_CR1_T8       0x40
#define MASK_USART2_CR1_R8       0x80

#define MASK_USART2_CR2_SBK      0x01
#define MASK_USART2_CR2_RWU      0x02
#define MASK_USART2_CR2_REN      0x04
#define MASK_USART2_CR2_TEN      0x08
#define MASK_USART2_CR2_ILIEN    0x10
#define MASK_USART2_CR2_RIEN     0x20
#define MASK_USART2_CR2_TCIEN    0x40
#define MASK_USART2_CR2_TIEN     0x80

#define MASK_USART2_CR3_LBCL     0x01
#define MASK_USART2_CR3_CPHA     0x02
#define MASK_USART2_CR3_CPOL     0x04
#define MASK_USART2_CR3_CLKEN    0x08
#define MASK_USART2_CR3_STOP     0x30

#define MASK_USART2_CR4_ADD      0x0F

#define MASK_USART2_CR5_EIE      0x01
#define MASK_USART2_CR5_IREN     0x02
#define MASK_USART2_CR5_IRLP     0x04
#define MASK_USART2_CR5_HDSEL    0x08
#define MASK_USART2_CR5_NACK     0x10
#define MASK_USART2_CR5_SCEN     0x20
#define MASK_USART2_CR5_DMAR     0x40
#define MASK_USART2_CR5_DMAT     0x80


/*-------------------------------------------------------------------------
 *      USART3 register definitions
 *-----------------------------------------------------------------------*/
/* USART3 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PE          : 1;
  unsigned char FE          : 1;
  unsigned char NF          : 1;
  unsigned char OR          : 1;
  unsigned char IDLE        : 1;
  unsigned char RXNE        : 1;
  unsigned char TC          : 1;
  unsigned char TXE         : 1;
} __BITS_USART3_SR;
#endif
//__IO_REG8_BIT(USART3_SR,   0x53F0, __READ, __BITS_USART3_SR);
unsigned char USART3_SR; //0x53F0 __READ
__BITS_USART3_SR USART3_SR_bit;

/* USART3 data register */
//__IO_REG8    (USART3_DR,   0x53F1, __READ_WRITE);
unsigned char USART3_DR; //0x53F1 __READ_WRITE
/* USART3 baud rate register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char USART_DIV4  : 1;
  unsigned char USART_DIV5  : 1;
  unsigned char USART_DIV6  : 1;
  unsigned char USART_DIV7  : 1;
  unsigned char USART_DIV8  : 1;
  unsigned char USART_DIV9  : 1;
  unsigned char USART_DIV10 : 1;
  unsigned char USART_DIV11 : 1;
} __BITS_USART3_BRR1;
#endif
//__IO_REG8_BIT(USART3_BRR1, 0x53F2, __READ_WRITE, __BITS_USART3_BRR1);
unsigned char USART3_BRR1; //0x53F2 __READ_WRITE
__BITS_USART3_BRR1 USART3_BRR1_bit;

/* USART3 baud rate register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char USART_DIV0  : 1;
  unsigned char USART_DIV1  : 1;
  unsigned char USART_DIV2  : 1;
  unsigned char USART_DIV3  : 1;
  unsigned char USART_DIV12 : 1;
  unsigned char USART_DIV13 : 1;
  unsigned char USART_DIV14 : 1;
  unsigned char USART_DIV15 : 1;
} __BITS_USART3_BRR2;
#endif
//__IO_REG8_BIT(USART3_BRR2, 0x53F3, __READ_WRITE, __BITS_USART3_BRR2);
unsigned char USART3_BRR2; //0x53F3 __READ_WRITE
__BITS_USART3_BRR2 USART3_BRR2_bit;

/* USART3 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PIEN        : 1;
  unsigned char PS          : 1;
  unsigned char PCEN        : 1;
  unsigned char WAKE        : 1;
  unsigned char M           : 1;
  unsigned char USARTD      : 1;
  unsigned char T8          : 1;
  unsigned char R8          : 1;
} __BITS_USART3_CR1;
#endif
//__IO_REG8_BIT(USART3_CR1,  0x53F4, __READ_WRITE, __BITS_USART3_CR1);
unsigned char USART3_CR1; //0x53F4 __READ_WRITE
__BITS_USART3_CR1 USART3_CR1_bit;

/* USART3 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SBK         : 1;
  unsigned char RWU         : 1;
  unsigned char REN         : 1;
  unsigned char TEN         : 1;
  unsigned char ILIEN       : 1;
  unsigned char RIEN        : 1;
  unsigned char TCIEN       : 1;
  unsigned char TIEN        : 1;
} __BITS_USART3_CR2;
#endif
//__IO_REG8_BIT(USART3_CR2,  0x53F5, __READ_WRITE, __BITS_USART3_CR2);
unsigned char USART3_CR2; //0x53F5 __READ_WRITE
__BITS_USART3_CR2 USART3_CR2_bit;

/* USART3 control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LBCL        : 1;
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char CLKEN       : 1;
  unsigned char STOP        : 2;
} __BITS_USART3_CR3;
#endif
//__IO_REG8_BIT(USART3_CR3,  0x53F6, __READ_WRITE, __BITS_USART3_CR3);
unsigned char USART3_CR3; //0x53F6 __READ_WRITE
__BITS_USART3_CR3 USART3_CR3_bit;

/* USART3 control register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD         : 4;
} __BITS_USART3_CR4;
#endif
//__IO_REG8_BIT(USART3_CR4,  0x53F7, __READ_WRITE, __BITS_USART3_CR4);
unsigned char USART3_CR4; //0x53F7 __READ_WRITE
__BITS_USART3_CR4 USART3_CR4_bit;

/* USART3 control register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EIE         : 1;
  unsigned char IREN        : 1;
  unsigned char IRLP        : 1;
  unsigned char HDSEL       : 1;
  unsigned char NACK        : 1;
  unsigned char SCEN        : 1;
  unsigned char DMAR        : 1;
  unsigned char DMAT        : 1;
} __BITS_USART3_CR5;
#endif
//__IO_REG8_BIT(USART3_CR5,  0x53F8, __READ_WRITE, __BITS_USART3_CR5);
unsigned char USART3_CR5; //0x53F8 __READ_WRITE
__BITS_USART3_CR5 USART3_CR5_bit;

/* USART3 guard time register */
//__IO_REG8    (USART3_GTR,  0x53F9, __READ_WRITE);
unsigned char USART3_GTR; //0x53F9 __READ_WRITE
/* USART3 prescaler register */
//__IO_REG8    (USART3_PSCR, 0x53FA, __READ_WRITE);
unsigned char USART3_PSCR; //0x53FA __READ_WRITE

/*-------------------------------------------------------------------------
 *      USART3 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define USART3_SR_PE             USART3_SR_bit.PE
#define USART3_SR_FE             USART3_SR_bit.FE
#define USART3_SR_NF             USART3_SR_bit.NF
#define USART3_SR_OR             USART3_SR_bit.OR
#define USART3_SR_IDLE           USART3_SR_bit.IDLE
#define USART3_SR_RXNE           USART3_SR_bit.RXNE
#define USART3_SR_TC             USART3_SR_bit.TC
#define USART3_SR_TXE            USART3_SR_bit.TXE

#define USART3_BRR1_USART_DIV4   USART3_BRR1_bit.USART_DIV4
#define USART3_BRR1_USART_DIV5   USART3_BRR1_bit.USART_DIV5
#define USART3_BRR1_USART_DIV6   USART3_BRR1_bit.USART_DIV6
#define USART3_BRR1_USART_DIV7   USART3_BRR1_bit.USART_DIV7
#define USART3_BRR1_USART_DIV8   USART3_BRR1_bit.USART_DIV8
#define USART3_BRR1_USART_DIV9   USART3_BRR1_bit.USART_DIV9
#define USART3_BRR1_USART_DIV10  USART3_BRR1_bit.USART_DIV10
#define USART3_BRR1_USART_DIV11  USART3_BRR1_bit.USART_DIV11

#define USART3_BRR2_USART_DIV0   USART3_BRR2_bit.USART_DIV0
#define USART3_BRR2_USART_DIV1   USART3_BRR2_bit.USART_DIV1
#define USART3_BRR2_USART_DIV2   USART3_BRR2_bit.USART_DIV2
#define USART3_BRR2_USART_DIV3   USART3_BRR2_bit.USART_DIV3
#define USART3_BRR2_USART_DIV12  USART3_BRR2_bit.USART_DIV12
#define USART3_BRR2_USART_DIV13  USART3_BRR2_bit.USART_DIV13
#define USART3_BRR2_USART_DIV14  USART3_BRR2_bit.USART_DIV14
#define USART3_BRR2_USART_DIV15  USART3_BRR2_bit.USART_DIV15

#define USART3_CR1_PIEN          USART3_CR1_bit.PIEN
#define USART3_CR1_PS            USART3_CR1_bit.PS
#define USART3_CR1_PCEN          USART3_CR1_bit.PCEN
#define USART3_CR1_WAKE          USART3_CR1_bit.WAKE
#define USART3_CR1_M             USART3_CR1_bit.M
#define USART3_CR1_USARTD        USART3_CR1_bit.USARTD
#define USART3_CR1_T8            USART3_CR1_bit.T8
#define USART3_CR1_R8            USART3_CR1_bit.R8

#define USART3_CR2_SBK           USART3_CR2_bit.SBK
#define USART3_CR2_RWU           USART3_CR2_bit.RWU
#define USART3_CR2_REN           USART3_CR2_bit.REN
#define USART3_CR2_TEN           USART3_CR2_bit.TEN
#define USART3_CR2_ILIEN         USART3_CR2_bit.ILIEN
#define USART3_CR2_RIEN          USART3_CR2_bit.RIEN
#define USART3_CR2_TCIEN         USART3_CR2_bit.TCIEN
#define USART3_CR2_TIEN          USART3_CR2_bit.TIEN

#define USART3_CR3_LBCL          USART3_CR3_bit.LBCL
#define USART3_CR3_CPHA          USART3_CR3_bit.CPHA
#define USART3_CR3_CPOL          USART3_CR3_bit.CPOL
#define USART3_CR3_CLKEN         USART3_CR3_bit.CLKEN
#define USART3_CR3_STOP          USART3_CR3_bit.STOP

#define USART3_CR4_ADD           USART3_CR4_bit.ADD

#define USART3_CR5_EIE           USART3_CR5_bit.EIE
#define USART3_CR5_IREN          USART3_CR5_bit.IREN
#define USART3_CR5_IRLP          USART3_CR5_bit.IRLP
#define USART3_CR5_HDSEL         USART3_CR5_bit.HDSEL
#define USART3_CR5_NACK          USART3_CR5_bit.NACK
#define USART3_CR5_SCEN          USART3_CR5_bit.SCEN
#define USART3_CR5_DMAR          USART3_CR5_bit.DMAR
#define USART3_CR5_DMAT          USART3_CR5_bit.DMAT

#endif

/*-------------------------------------------------------------------------
 *      USART3 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_USART3_SR_PE        0x01
#define MASK_USART3_SR_FE        0x02
#define MASK_USART3_SR_NF        0x04
#define MASK_USART3_SR_OR        0x08
#define MASK_USART3_SR_IDLE      0x10
#define MASK_USART3_SR_RXNE      0x20
#define MASK_USART3_SR_TC        0x40
#define MASK_USART3_SR_TXE       0x80

#define MASK_USART3_BRR1_USART_DIV4 0x01
#define MASK_USART3_BRR1_USART_DIV5 0x02
#define MASK_USART3_BRR1_USART_DIV6 0x04
#define MASK_USART3_BRR1_USART_DIV7 0x08
#define MASK_USART3_BRR1_USART_DIV8 0x10
#define MASK_USART3_BRR1_USART_DIV9 0x20
#define MASK_USART3_BRR1_USART_DIV10 0x40
#define MASK_USART3_BRR1_USART_DIV11 0x80

#define MASK_USART3_BRR2_USART_DIV0 0x01
#define MASK_USART3_BRR2_USART_DIV1 0x02
#define MASK_USART3_BRR2_USART_DIV2 0x04
#define MASK_USART3_BRR2_USART_DIV3 0x08
#define MASK_USART3_BRR2_USART_DIV12 0x10
#define MASK_USART3_BRR2_USART_DIV13 0x20
#define MASK_USART3_BRR2_USART_DIV14 0x40
#define MASK_USART3_BRR2_USART_DIV15 0x80

#define MASK_USART3_CR1_PIEN     0x01
#define MASK_USART3_CR1_PS       0x02
#define MASK_USART3_CR1_PCEN     0x04
#define MASK_USART3_CR1_WAKE     0x08
#define MASK_USART3_CR1_M        0x10
#define MASK_USART3_CR1_USARTD   0x20
#define MASK_USART3_CR1_T8       0x40
#define MASK_USART3_CR1_R8       0x80

#define MASK_USART3_CR2_SBK      0x01
#define MASK_USART3_CR2_RWU      0x02
#define MASK_USART3_CR2_REN      0x04
#define MASK_USART3_CR2_TEN      0x08
#define MASK_USART3_CR2_ILIEN    0x10
#define MASK_USART3_CR2_RIEN     0x20
#define MASK_USART3_CR2_TCIEN    0x40
#define MASK_USART3_CR2_TIEN     0x80

#define MASK_USART3_CR3_LBCL     0x01
#define MASK_USART3_CR3_CPHA     0x02
#define MASK_USART3_CR3_CPOL     0x04
#define MASK_USART3_CR3_CLKEN    0x08
#define MASK_USART3_CR3_STOP     0x30

#define MASK_USART3_CR4_ADD      0x0F

#define MASK_USART3_CR5_EIE      0x01
#define MASK_USART3_CR5_IREN     0x02
#define MASK_USART3_CR5_IRLP     0x04
#define MASK_USART3_CR5_HDSEL    0x08
#define MASK_USART3_CR5_NACK     0x10
#define MASK_USART3_CR5_SCEN     0x20
#define MASK_USART3_CR5_DMAR     0x40
#define MASK_USART3_CR5_DMAT     0x80


/*-------------------------------------------------------------------------
 *      LCD register definitions
 *-----------------------------------------------------------------------*/
/* LCD control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char B2          : 1;
  unsigned char DUTY0       : 1;
  unsigned char DUTY1       : 1;
  unsigned char BLINKF0     : 1;
  unsigned char BLINKF1     : 1;
  unsigned char BLINKF2     : 1;
  unsigned char BLINK0      : 1;
  unsigned char BLINK1      : 1;
} __BITS_LCD_CR1;
#endif
//__IO_REG8_BIT(LCD_CR1,     0x5400, __READ_WRITE, __BITS_LCD_CR1);
unsigned char LCD_CR1; //0x5400 __READ_WRITE
__BITS_LCD_CR1 LCD_CR1_bit;

/* LCD control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VSEL        : 1;
  unsigned char CC0         : 1;
  unsigned char CC1         : 1;
  unsigned char CC2         : 1;
  unsigned char HD          : 1;
  unsigned char PON0        : 1;
  unsigned char PON1        : 1;
  unsigned char PON2        : 1;
} __BITS_LCD_CR2;
#endif
//__IO_REG8_BIT(LCD_CR2,     0x5401, __READ_WRITE, __BITS_LCD_CR2);
unsigned char LCD_CR2; //0x5401 __READ_WRITE
__BITS_LCD_CR2 LCD_CR2_bit;

/* LCD control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DEAD0       : 1;
  unsigned char DEAD1       : 1;
  unsigned char DEAD2       : 1;
  unsigned char SOFC        : 1;
  unsigned char SOF         : 1;
  unsigned char SOFIE       : 1;
  unsigned char LCDEN       : 1;
} __BITS_LCD_CR3;
#endif
//__IO_REG8_BIT(LCD_CR3,     0x5402, __READ_WRITE, __BITS_LCD_CR3);
unsigned char LCD_CR3; //0x5402 __READ_WRITE
__BITS_LCD_CR3 LCD_CR3_bit;

/* LCD frequency selection register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DIV0        : 1;
  unsigned char DIV1        : 1;
  unsigned char DIV2        : 1;
  unsigned char DIV3        : 1;
  unsigned char PS0         : 1;
  unsigned char PS1         : 1;
  unsigned char PS2         : 1;
  unsigned char PS3         : 1;
} __BITS_LCD_FRQ;
#endif
//__IO_REG8_BIT(LCD_FRQ,     0x5403, __READ_WRITE, __BITS_LCD_FRQ);
unsigned char LCD_FRQ; //0x5403 __READ_WRITE
__BITS_LCD_FRQ LCD_FRQ_bit;

/* LCD Port mask register 0 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SEG00       : 1;
  unsigned char SEG01       : 1;
  unsigned char SEG02       : 1;
  unsigned char SEG03       : 1;
  unsigned char SEG04       : 1;
  unsigned char SEG05       : 1;
  unsigned char SEG06       : 1;
} __BITS_LCD_PM0;
#endif
//__IO_REG8_BIT(LCD_PM0,     0x5404, __READ_WRITE, __BITS_LCD_PM0);
unsigned char LCD_PM0; //0x5404 __READ_WRITE
__BITS_LCD_PM0 LCD_PM0_bit;

/* LCD Port mask register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SEG08       : 1;
  unsigned char SEG09       : 1;
  unsigned char SEG10       : 1;
  unsigned char SEG11       : 1;
  unsigned char SEG12       : 1;
  unsigned char SEG13       : 1;
  unsigned char SEG14       : 1;
  unsigned char SEG07       : 1;
  unsigned char SEG15       : 1;
} __BITS_LCD_PM1;
#endif
//__IO_REG8_BIT(LCD_PM1,     0x5405, __READ_WRITE, __BITS_LCD_PM1);
unsigned char LCD_PM1; //0x5405 __READ_WRITE
__BITS_LCD_PM1 LCD_PM1_bit;

/* LCD Port mask register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SEG16       : 1;
  unsigned char SEG17       : 1;
  unsigned char SEG18       : 1;
  unsigned char SEG19       : 1;
  unsigned char SEG20       : 1;
  unsigned char SEG21       : 1;
  unsigned char SEG22       : 1;
  unsigned char SEG23       : 1;
} __BITS_LCD_PM2;
#endif
//__IO_REG8_BIT(LCD_PM2,     0x5406, __READ_WRITE, __BITS_LCD_PM2);
unsigned char LCD_PM2; //0x5406 __READ_WRITE
__BITS_LCD_PM2 LCD_PM2_bit;

/* LCD Port mask register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SEG24       : 1;
  unsigned char SEG25       : 1;
  unsigned char SEG26       : 1;
  unsigned char SEG27       : 1;
  unsigned char SEG28       : 1;
  unsigned char SEG29       : 1;
  unsigned char SEG30       : 1;
  unsigned char SEG31       : 1;
} __BITS_LCD_PM3;
#endif
//__IO_REG8_BIT(LCD_PM3,     0x5407, __READ_WRITE, __BITS_LCD_PM3);
unsigned char LCD_PM3; //0x5407 __READ_WRITE
__BITS_LCD_PM3 LCD_PM3_bit;

/* LCD Port mask register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SEG32       : 1;
  unsigned char SEG33       : 1;
  unsigned char SEG34       : 1;
  unsigned char SEG35       : 1;
  unsigned char SEG36       : 1;
  unsigned char SEG37       : 1;
  unsigned char SEG38       : 1;
  unsigned char SEG39       : 1;
} __BITS_LCD_PM4;
#endif
//__IO_REG8_BIT(LCD_PM4,     0x5408, __READ_WRITE, __BITS_LCD_PM4);
unsigned char LCD_PM4; //0x5408 __READ_WRITE
__BITS_LCD_PM4 LCD_PM4_bit;

/* LCD Port mask register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SEG40       : 1;
  unsigned char SEG41       : 1;
  unsigned char SEG42       : 1;
  unsigned char SEG43       : 1;
} __BITS_LCD_PM5;
#endif
//__IO_REG8_BIT(LCD_PM5,     0x5409, __READ_WRITE, __BITS_LCD_PM5);
unsigned char LCD_PM5; //0x5409 __READ_WRITE
__BITS_LCD_PM5 LCD_PM5_bit;

/* LCD display memory 0 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S000        : 1;
  unsigned char S001        : 1;
  unsigned char S002        : 1;
  unsigned char S003        : 1;
  unsigned char S004        : 1;
  unsigned char S005        : 1;
  unsigned char S006        : 1;
  unsigned char S007        : 1;
} __BITS_LCD_RAM0;
#endif
//__IO_REG8_BIT(LCD_RAM0,    0x540C, __READ_WRITE, __BITS_LCD_RAM0);
unsigned char LCD_RAM0; //0x540C __READ_WRITE
__BITS_LCD_RAM0 LCD_RAM0_bit;

/* LCD display memory 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S008        : 1;
  unsigned char S009        : 1;
  unsigned char S010        : 1;
  unsigned char S011        : 1;
  unsigned char S012        : 1;
  unsigned char S013        : 1;
  unsigned char S014        : 1;
  unsigned char S015        : 1;
} __BITS_LCD_RAM1;
#endif
//__IO_REG8_BIT(LCD_RAM1,    0x540D, __READ_WRITE, __BITS_LCD_RAM1);
unsigned char LCD_RAM1; //0x540D __READ_WRITE
__BITS_LCD_RAM1 LCD_RAM1_bit;

/* LCD display memory 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S016        : 1;
  unsigned char S017        : 1;
  unsigned char S018        : 1;
  unsigned char S019        : 1;
  unsigned char S020        : 1;
  unsigned char S021        : 1;
  unsigned char S022        : 1;
  unsigned char S023        : 1;
} __BITS_LCD_RAM2;
#endif
//__IO_REG8_BIT(LCD_RAM2,    0x540E, __READ_WRITE, __BITS_LCD_RAM2);
unsigned char LCD_RAM2; //0x540E __READ_WRITE
__BITS_LCD_RAM2 LCD_RAM2_bit;

/* LCD display memory 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S024        : 1;
  unsigned char S025        : 1;
  unsigned char S026        : 1;
  unsigned char S027        : 1;
  unsigned char S100        : 1;
  unsigned char S101        : 1;
  unsigned char S102        : 1;
  unsigned char S103        : 1;
} __BITS_LCD_RAM3;
#endif
//__IO_REG8_BIT(LCD_RAM3,    0x540F, __READ_WRITE, __BITS_LCD_RAM3);
unsigned char LCD_RAM3; //0x540F __READ_WRITE
__BITS_LCD_RAM3 LCD_RAM3_bit;

/* LCD display memory 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S104        : 1;
  unsigned char S105        : 1;
  unsigned char S106        : 1;
  unsigned char S107        : 1;
  unsigned char S108        : 1;
  unsigned char S109        : 1;
  unsigned char S110        : 1;
  unsigned char S111        : 1;
} __BITS_LCD_RAM4;
#endif
//__IO_REG8_BIT(LCD_RAM4,    0x5410, __READ_WRITE, __BITS_LCD_RAM4);
unsigned char LCD_RAM4; //0x5410 __READ_WRITE
__BITS_LCD_RAM4 LCD_RAM4_bit;

/* LCD display memory 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S112        : 1;
  unsigned char S113        : 1;
  unsigned char S114        : 1;
  unsigned char S115        : 1;
  unsigned char S116        : 1;
  unsigned char S117        : 1;
  unsigned char S118        : 1;
  unsigned char S119        : 1;
} __BITS_LCD_RAM5;
#endif
//__IO_REG8_BIT(LCD_RAM5,    0x5411, __READ_WRITE, __BITS_LCD_RAM5);
unsigned char LCD_RAM5; //0x5411 __READ_WRITE
__BITS_LCD_RAM5 LCD_RAM5_bit;

/* LCD display memory 6 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S120        : 1;
  unsigned char S121        : 1;
  unsigned char S122        : 1;
  unsigned char S123        : 1;
  unsigned char S124        : 1;
  unsigned char S125        : 1;
  unsigned char S126        : 1;
  unsigned char S127        : 1;
} __BITS_LCD_RAM6;
#endif
//__IO_REG8_BIT(LCD_RAM6,    0x5412, __READ_WRITE, __BITS_LCD_RAM6);
unsigned char LCD_RAM6; //0x5412 __READ_WRITE
__BITS_LCD_RAM6 LCD_RAM6_bit;

/* LCD display memory 7 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S200        : 1;
  unsigned char S201        : 1;
  unsigned char S202        : 1;
  unsigned char S203        : 1;
  unsigned char S204        : 1;
  unsigned char S205        : 1;
  unsigned char S206        : 1;
  unsigned char S207        : 1;
} __BITS_LCD_RAM7;
#endif
//__IO_REG8_BIT(LCD_RAM7,    0x5413, __READ_WRITE, __BITS_LCD_RAM7);
unsigned char LCD_RAM7; //0x5413 __READ_WRITE
__BITS_LCD_RAM7 LCD_RAM7_bit;

/* LCD display memory 8 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S208        : 1;
  unsigned char S209        : 1;
  unsigned char S210        : 1;
  unsigned char S211        : 1;
  unsigned char S212        : 1;
  unsigned char S213        : 1;
  unsigned char S214        : 1;
  unsigned char S215        : 1;
} __BITS_LCD_RAM8;
#endif
//__IO_REG8_BIT(LCD_RAM8,    0x5414, __READ_WRITE, __BITS_LCD_RAM8);
unsigned char LCD_RAM8; //0x5414 __READ_WRITE
__BITS_LCD_RAM8 LCD_RAM8_bit;

/* LCD display memory 9 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S216        : 1;
  unsigned char S217        : 1;
  unsigned char S218        : 1;
  unsigned char S219        : 1;
  unsigned char S220        : 1;
  unsigned char S221        : 1;
  unsigned char S222        : 1;
  unsigned char S223        : 1;
} __BITS_LCD_RAM9;
#endif
//__IO_REG8_BIT(LCD_RAM9,    0x5415, __READ_WRITE, __BITS_LCD_RAM9);
unsigned char LCD_RAM9; //0x5415 __READ_WRITE
__BITS_LCD_RAM9 LCD_RAM9_bit;

/* LCD display memory 10 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S224        : 1;
  unsigned char S225        : 1;
  unsigned char S226        : 1;
  unsigned char S227        : 1;
  unsigned char S300        : 1;
  unsigned char S301        : 1;
  unsigned char S302        : 1;
  unsigned char S303        : 1;
} __BITS_LCD_RAM10;
#endif
//__IO_REG8_BIT(LCD_RAM10,   0x5416, __READ_WRITE, __BITS_LCD_RAM10);
unsigned char LCD_RAM10; //0x5416 __READ_WRITE
__BITS_LCD_RAM10 LCD_RAM10_bit;

/* LCD display memory 11 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S304        : 1;
  unsigned char S305        : 1;
  unsigned char S306        : 1;
  unsigned char S307        : 1;
  unsigned char S308        : 1;
  unsigned char S309        : 1;
  unsigned char S310        : 1;
  unsigned char S311        : 1;
} __BITS_LCD_RAM11;
#endif
//__IO_REG8_BIT(LCD_RAM11,   0x5417, __READ_WRITE, __BITS_LCD_RAM11);
unsigned char LCD_RAM11; //0x5417 __READ_WRITE
__BITS_LCD_RAM11 LCD_RAM11_bit;

/* LCD display memory 12 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S312        : 1;
  unsigned char S313        : 1;
  unsigned char S314        : 1;
  unsigned char S315        : 1;
  unsigned char S316        : 1;
  unsigned char S317        : 1;
  unsigned char S318        : 1;
  unsigned char S319        : 1;
} __BITS_LCD_RAM12;
#endif
//__IO_REG8_BIT(LCD_RAM12,   0x5418, __READ_WRITE, __BITS_LCD_RAM12);
unsigned char LCD_RAM12; //0x5418 __READ_WRITE
__BITS_LCD_RAM12 LCD_RAM12_bit;

/* LCD display memory 13 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S320        : 1;
  unsigned char S321        : 1;
  unsigned char S322        : 1;
  unsigned char S323        : 1;
  unsigned char S324        : 1;
  unsigned char S305        : 1;
  unsigned char S306        : 1;
  unsigned char S327        : 1;
} __BITS_LCD_RAM13;
#endif
//__IO_REG8_BIT(LCD_RAM13,   0x5419, __READ_WRITE, __BITS_LCD_RAM13);
unsigned char LCD_RAM13; //0x5419 __READ_WRITE
__BITS_LCD_RAM13 LCD_RAM13_bit;

/* LCD display memory 12 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S028        : 1;
  unsigned char S029        : 1;
  unsigned char S030        : 1;
  unsigned char S031        : 1;
  unsigned char S032        : 1;
  unsigned char S033        : 1;
  unsigned char S034        : 1;
  unsigned char S035        : 1;
} __BITS_LCD_RAM14;
#endif
//__IO_REG8_BIT(LCD_RAM14,   0x541A, __READ_WRITE, __BITS_LCD_RAM14);
unsigned char LCD_RAM14; //0x541A __READ_WRITE
__BITS_LCD_RAM14 LCD_RAM14_bit;

/* LCD display memory 13 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S036        : 1;
  unsigned char S037        : 1;
  unsigned char S038        : 1;
  unsigned char S039        : 1;
  unsigned char S040        : 1;
  unsigned char S041        : 1;
  unsigned char S042        : 1;
  unsigned char S043        : 1;
} __BITS_LCD_RAM15;
#endif
//__IO_REG8_BIT(LCD_RAM15,   0x541B, __READ_WRITE, __BITS_LCD_RAM15);
unsigned char LCD_RAM15; //0x541B __READ_WRITE
__BITS_LCD_RAM15 LCD_RAM15_bit;

/* LCD display memory 11 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S128        : 1;
  unsigned char S129        : 1;
  unsigned char S130        : 1;
  unsigned char S131        : 1;
  unsigned char S132        : 1;
  unsigned char S133        : 1;
  unsigned char S134        : 1;
  unsigned char S135        : 1;
} __BITS_LCD_RAM16;
#endif
//__IO_REG8_BIT(LCD_RAM16,   0x541C, __READ_WRITE, __BITS_LCD_RAM16);
unsigned char LCD_RAM16; //0x541C __READ_WRITE
__BITS_LCD_RAM16 LCD_RAM16_bit;

/* LCD display memory 12 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S136        : 1;
  unsigned char S137        : 1;
  unsigned char S138        : 1;
  unsigned char S139        : 1;
  unsigned char S140        : 1;
  unsigned char S141        : 1;
  unsigned char S142        : 1;
  unsigned char S143        : 1;
} __BITS_LCD_RAM17;
#endif
//__IO_REG8_BIT(LCD_RAM17,   0x541D, __READ_WRITE, __BITS_LCD_RAM17);
unsigned char LCD_RAM17; //0x541D __READ_WRITE
__BITS_LCD_RAM17 LCD_RAM17_bit;

/* LCD display memory 13 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S228        : 1;
  unsigned char S229        : 1;
  unsigned char S230        : 1;
  unsigned char S231        : 1;
  unsigned char S232        : 1;
  unsigned char S233        : 1;
  unsigned char S234        : 1;
  unsigned char S235        : 1;
} __BITS_LCD_RAM18;
#endif
//__IO_REG8_BIT(LCD_RAM18,   0x541E, __READ_WRITE, __BITS_LCD_RAM18);
unsigned char LCD_RAM18; //0x541E __READ_WRITE
__BITS_LCD_RAM18 LCD_RAM18_bit;

/* LCD display memory 12 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S236        : 1;
  unsigned char S237        : 1;
  unsigned char S238        : 1;
  unsigned char S239        : 1;
  unsigned char S240        : 1;
  unsigned char S241        : 1;
  unsigned char S242        : 1;
  unsigned char S243        : 1;
} __BITS_LCD_RAM19;
#endif
//__IO_REG8_BIT(LCD_RAM19,   0x541F, __READ_WRITE, __BITS_LCD_RAM19);
unsigned char LCD_RAM19; //0x541F __READ_WRITE
__BITS_LCD_RAM19 LCD_RAM19_bit;

/* LCD display memory 13 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S328        : 1;
  unsigned char S329        : 1;
  unsigned char S330        : 1;
  unsigned char S331        : 1;
  unsigned char S332        : 1;
  unsigned char S333        : 1;
  unsigned char S334        : 1;
  unsigned char S335        : 1;
} __BITS_LCD_RAM20;
#endif
//__IO_REG8_BIT(LCD_RAM20,   0x5420, __READ_WRITE, __BITS_LCD_RAM20);
unsigned char LCD_RAM20; //0x5420 __READ_WRITE
__BITS_LCD_RAM20 LCD_RAM20_bit;

/* LCD display memory 13 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char S336        : 1;
  unsigned char S337        : 1;
  unsigned char S338        : 1;
  unsigned char S339        : 1;
  unsigned char S340        : 1;
  unsigned char S341        : 1;
  unsigned char S342        : 1;
  unsigned char S343        : 1;
} __BITS_LCD_RAM21;
#endif
//__IO_REG8_BIT(LCD_RAM21,   0x5421, __READ_WRITE, __BITS_LCD_RAM21);
unsigned char LCD_RAM21; //0x5421 __READ_WRITE
__BITS_LCD_RAM21 LCD_RAM21_bit;

/* Timer input capture routing register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IC2CS       : 5;
} __BITS_RI_ICR1;
#endif
//__IO_REG8_BIT(RI_ICR1,     0x5431, __READ_WRITE, __BITS_RI_ICR1);
unsigned char RI_ICR1; //0x5431 __READ_WRITE
__BITS_RI_ICR1 RI_ICR1_bit;

/* Timer input capture routing register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IC3CS       : 5;
} __BITS_RI_ICR2;
#endif
//__IO_REG8_BIT(RI_ICR2,     0x5432, __READ_WRITE, __BITS_RI_ICR2);
unsigned char RI_ICR2; //0x5432 __READ_WRITE
__BITS_RI_ICR2 RI_ICR2_bit;

/* I/O input register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH1I        : 1;
  unsigned char CH4I        : 1;
  unsigned char CH7I        : 1;
  unsigned char CH10I       : 1;
  unsigned char CH13I       : 1;
  unsigned char CH16I       : 1;
  unsigned char CH19I       : 1;
  unsigned char CH22I       : 1;
} __BITS_RI_IOIR1;
#endif
//__IO_REG8_BIT(RI_IOIR1,    0x5433, __READ, __BITS_RI_IOIR1);
unsigned char RI_IOIR1; //0x5433 __READ
__BITS_RI_IOIR1 RI_IOIR1_bit;

/* I/O input register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH2I        : 1;
  unsigned char CH5I        : 1;
  unsigned char CH8I        : 1;
  unsigned char CH11I       : 1;
  unsigned char CH14I       : 1;
  unsigned char CH17I       : 1;
  unsigned char CH20I       : 1;
  unsigned char CH23I       : 1;
} __BITS_RI_IOIR2;
#endif
//__IO_REG8_BIT(RI_IOIR2,    0x5434, __READ, __BITS_RI_IOIR2);
unsigned char RI_IOIR2; //0x5434 __READ
__BITS_RI_IOIR2 RI_IOIR2_bit;

/* I/O input register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH3I        : 1;
  unsigned char CH6I        : 1;
  unsigned char CH9I        : 1;
  unsigned char CH12I       : 1;
  unsigned char CH15I       : 1;
  unsigned char CH18I       : 1;
  unsigned char CH21I       : 1;
  unsigned char CH24I       : 1;
} __BITS_RI_IOIR3;
#endif
//__IO_REG8_BIT(RI_IOIR3,    0x5435, __READ, __BITS_RI_IOIR3);
unsigned char RI_IOIR3; //0x5435 __READ
__BITS_RI_IOIR3 RI_IOIR3_bit;

/* I/O control mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH1M        : 1;
  unsigned char CH4M        : 1;
  unsigned char CH7M        : 1;
  unsigned char CH10M       : 1;
  unsigned char CH13M       : 1;
  unsigned char CH16M       : 1;
  unsigned char CH19M       : 1;
  unsigned char CH22M       : 1;
} __BITS_RI_IOCMR1;
#endif
//__IO_REG8_BIT(RI_IOCMR1,   0x5436, __READ_WRITE, __BITS_RI_IOCMR1);
unsigned char RI_IOCMR1; //0x5436 __READ_WRITE
__BITS_RI_IOCMR1 RI_IOCMR1_bit;

/* I/O control mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH2M        : 1;
  unsigned char CH5M        : 1;
  unsigned char CH8M        : 1;
  unsigned char CH11M       : 1;
  unsigned char CH14M       : 1;
  unsigned char CH17M       : 1;
  unsigned char CH20M       : 1;
  unsigned char CH23M       : 1;
} __BITS_RI_IOCMR2;
#endif
//__IO_REG8_BIT(RI_IOCMR2,   0x5437, __READ_WRITE, __BITS_RI_IOCMR2);
unsigned char RI_IOCMR2; //0x5437 __READ_WRITE
__BITS_RI_IOCMR2 RI_IOCMR2_bit;

/* I/O control mode register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH3M        : 1;
  unsigned char CH6M        : 1;
  unsigned char CH9M        : 1;
  unsigned char CH12M       : 1;
  unsigned char CH53M       : 1;
  unsigned char CH18M       : 1;
  unsigned char CH21M       : 1;
  unsigned char CH24M       : 1;
} __BITS_RI_IOCMR3;
#endif
//__IO_REG8_BIT(RI_IOCMR3,   0x5438, __READ_WRITE, __BITS_RI_IOCMR3);
unsigned char RI_IOCMR3; //0x5438 __READ_WRITE
__BITS_RI_IOCMR3 RI_IOCMR3_bit;

/* I/O switch register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH1E        : 1;
  unsigned char CH4E        : 1;
  unsigned char CH7E        : 1;
  unsigned char CH10E       : 1;
  unsigned char CH13E       : 1;
  unsigned char CH16E       : 1;
  unsigned char CH19E       : 1;
  unsigned char CH22E       : 1;
} __BITS_RI_IOSR1;
#endif
//__IO_REG8_BIT(RI_IOSR1,    0x5439, __READ_WRITE, __BITS_RI_IOSR1);
unsigned char RI_IOSR1; //0x5439 __READ_WRITE
__BITS_RI_IOSR1 RI_IOSR1_bit;

/* I/O switch register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH2E        : 1;
  unsigned char CH5E        : 1;
  unsigned char CH8E        : 1;
  unsigned char CH11E       : 1;
  unsigned char CH14E       : 1;
  unsigned char CH17E       : 1;
  unsigned char CH20E       : 1;
  unsigned char CH23E       : 1;
} __BITS_RI_IOSR2;
#endif
//__IO_REG8_BIT(RI_IOSR2,    0x543A, __READ_WRITE, __BITS_RI_IOSR2);
unsigned char RI_IOSR2; //0x543A __READ_WRITE
__BITS_RI_IOSR2 RI_IOSR2_bit;

/* I/O switch register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH3E        : 1;
  unsigned char CH6E        : 1;
  unsigned char CH9E        : 1;
  unsigned char CH12E       : 1;
  unsigned char CH15E       : 1;
  unsigned char CH18E       : 1;
  unsigned char CH21E       : 1;
  unsigned char CH24E       : 1;
} __BITS_RI_IOSR3;
#endif
//__IO_REG8_BIT(RI_IOSR3,    0x543B, __READ_WRITE, __BITS_RI_IOSR3);
unsigned char RI_IOSR3; //0x543B __READ_WRITE
__BITS_RI_IOSR3 RI_IOSR3_bit;

/* I/O group control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IOM1        : 2;
  unsigned char IOM2        : 2;
  unsigned char IOM3        : 2;
} __BITS_RI_IOGCR;
#endif
//__IO_REG8_BIT(RI_IOGCR,    0x543C, __READ_WRITE, __BITS_RI_IOGCR);
unsigned char RI_IOGCR; //0x543C __READ_WRITE
__BITS_RI_IOGCR RI_IOGCR_bit;

/* Analog switch register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AS0         : 1;
  unsigned char AS1         : 1;
  unsigned char AS2         : 1;
  unsigned char AS3         : 1;
  unsigned char AS4         : 1;
  unsigned char AS5         : 1;
  unsigned char AS6         : 1;
  unsigned char AS7         : 1;
} __BITS_RI_ASCR1;
#endif
//__IO_REG8_BIT(RI_ASCR1,    0x543D, __READ_WRITE, __BITS_RI_ASCR1);
unsigned char RI_ASCR1; //0x543D __READ_WRITE
__BITS_RI_ASCR1 RI_ASCR1_bit;

/* Analog switch register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AS8         : 1;
  unsigned char             : 5;
  unsigned char AS14        : 1;
} __BITS_RI_ASCR2;
#endif
//__IO_REG8_BIT(RI_ASCR2,    0x543E, __READ_WRITE, __BITS_RI_ASCR2);
unsigned char RI_ASCR2; //0x543E __READ_WRITE
__BITS_RI_ASCR2 RI_ASCR2_bit;

/* Resistor control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char KPU10       : 1;
  unsigned char KPU400      : 1;
  unsigned char KPD10       : 1;
  unsigned char KPD400      : 1;
} __BITS_RI_RCR;
#endif
//__IO_REG8_BIT(RI_RCR,      0x543F, __READ_WRITE, __BITS_RI_RCR);
unsigned char RI_RCR; //0x543F __READ_WRITE
__BITS_RI_RCR RI_RCR_bit;


/*-------------------------------------------------------------------------
 *      LCD bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define LCD_CR1_B2               LCD_CR1_bit.B2
#define LCD_CR1_DUTY0            LCD_CR1_bit.DUTY0
#define LCD_CR1_DUTY1            LCD_CR1_bit.DUTY1
#define LCD_CR1_BLINKF0          LCD_CR1_bit.BLINKF0
#define LCD_CR1_BLINKF1          LCD_CR1_bit.BLINKF1
#define LCD_CR1_BLINKF2          LCD_CR1_bit.BLINKF2
#define LCD_CR1_BLINK0           LCD_CR1_bit.BLINK0
#define LCD_CR1_BLINK1           LCD_CR1_bit.BLINK1

#define LCD_CR2_VSEL             LCD_CR2_bit.VSEL
#define LCD_CR2_CC0              LCD_CR2_bit.CC0
#define LCD_CR2_CC1              LCD_CR2_bit.CC1
#define LCD_CR2_CC2              LCD_CR2_bit.CC2
#define LCD_CR2_HD               LCD_CR2_bit.HD
#define LCD_CR2_PON0             LCD_CR2_bit.PON0
#define LCD_CR2_PON1             LCD_CR2_bit.PON1
#define LCD_CR2_PON2             LCD_CR2_bit.PON2

#define LCD_CR3_DEAD0            LCD_CR3_bit.DEAD0
#define LCD_CR3_DEAD1            LCD_CR3_bit.DEAD1
#define LCD_CR3_DEAD2            LCD_CR3_bit.DEAD2
#define LCD_CR3_SOFC             LCD_CR3_bit.SOFC
#define LCD_CR3_SOF              LCD_CR3_bit.SOF
#define LCD_CR3_SOFIE            LCD_CR3_bit.SOFIE
#define LCD_CR3_LCDEN            LCD_CR3_bit.LCDEN

#define LCD_FRQ_DIV0             LCD_FRQ_bit.DIV0
#define LCD_FRQ_DIV1             LCD_FRQ_bit.DIV1
#define LCD_FRQ_DIV2             LCD_FRQ_bit.DIV2
#define LCD_FRQ_DIV3             LCD_FRQ_bit.DIV3
#define LCD_FRQ_PS0              LCD_FRQ_bit.PS0
#define LCD_FRQ_PS1              LCD_FRQ_bit.PS1
#define LCD_FRQ_PS2              LCD_FRQ_bit.PS2
#define LCD_FRQ_PS3              LCD_FRQ_bit.PS3

#define LCD_PM0_SEG00            LCD_PM0_bit.SEG00
#define LCD_PM0_SEG01            LCD_PM0_bit.SEG01
#define LCD_PM0_SEG02            LCD_PM0_bit.SEG02
#define LCD_PM0_SEG03            LCD_PM0_bit.SEG03
#define LCD_PM0_SEG04            LCD_PM0_bit.SEG04
#define LCD_PM0_SEG05            LCD_PM0_bit.SEG05
#define LCD_PM0_SEG06            LCD_PM0_bit.SEG06

#define LCD_PM1_SEG08            LCD_PM1_bit.SEG08
#define LCD_PM1_SEG09            LCD_PM1_bit.SEG09
#define LCD_PM1_SEG10            LCD_PM1_bit.SEG10
#define LCD_PM1_SEG11            LCD_PM1_bit.SEG11
#define LCD_PM1_SEG12            LCD_PM1_bit.SEG12
#define LCD_PM1_SEG13            LCD_PM1_bit.SEG13
#define LCD_PM1_SEG14            LCD_PM1_bit.SEG14
#define LCD_PM1_SEG07            LCD_PM1_bit.SEG07
#define LCD_PM1_SEG15            LCD_PM1_bit.SEG15

#define LCD_PM2_SEG16            LCD_PM2_bit.SEG16
#define LCD_PM2_SEG17            LCD_PM2_bit.SEG17
#define LCD_PM2_SEG18            LCD_PM2_bit.SEG18
#define LCD_PM2_SEG19            LCD_PM2_bit.SEG19
#define LCD_PM2_SEG20            LCD_PM2_bit.SEG20
#define LCD_PM2_SEG21            LCD_PM2_bit.SEG21
#define LCD_PM2_SEG22            LCD_PM2_bit.SEG22
#define LCD_PM2_SEG23            LCD_PM2_bit.SEG23

#define LCD_PM3_SEG24            LCD_PM3_bit.SEG24
#define LCD_PM3_SEG25            LCD_PM3_bit.SEG25
#define LCD_PM3_SEG26            LCD_PM3_bit.SEG26
#define LCD_PM3_SEG27            LCD_PM3_bit.SEG27
#define LCD_PM3_SEG28            LCD_PM3_bit.SEG28
#define LCD_PM3_SEG29            LCD_PM3_bit.SEG29
#define LCD_PM3_SEG30            LCD_PM3_bit.SEG30
#define LCD_PM3_SEG31            LCD_PM3_bit.SEG31

#define LCD_PM4_SEG32            LCD_PM4_bit.SEG32
#define LCD_PM4_SEG33            LCD_PM4_bit.SEG33
#define LCD_PM4_SEG34            LCD_PM4_bit.SEG34
#define LCD_PM4_SEG35            LCD_PM4_bit.SEG35
#define LCD_PM4_SEG36            LCD_PM4_bit.SEG36
#define LCD_PM4_SEG37            LCD_PM4_bit.SEG37
#define LCD_PM4_SEG38            LCD_PM4_bit.SEG38
#define LCD_PM4_SEG39            LCD_PM4_bit.SEG39

#define LCD_PM5_SEG40            LCD_PM5_bit.SEG40
#define LCD_PM5_SEG41            LCD_PM5_bit.SEG41
#define LCD_PM5_SEG42            LCD_PM5_bit.SEG42
#define LCD_PM5_SEG43            LCD_PM5_bit.SEG43

#define LCD_RAM0_S000            LCD_RAM0_bit.S000
#define LCD_RAM0_S001            LCD_RAM0_bit.S001
#define LCD_RAM0_S002            LCD_RAM0_bit.S002
#define LCD_RAM0_S003            LCD_RAM0_bit.S003
#define LCD_RAM0_S004            LCD_RAM0_bit.S004
#define LCD_RAM0_S005            LCD_RAM0_bit.S005
#define LCD_RAM0_S006            LCD_RAM0_bit.S006
#define LCD_RAM0_S007            LCD_RAM0_bit.S007

#define LCD_RAM1_S008            LCD_RAM1_bit.S008
#define LCD_RAM1_S009            LCD_RAM1_bit.S009
#define LCD_RAM1_S010            LCD_RAM1_bit.S010
#define LCD_RAM1_S011            LCD_RAM1_bit.S011
#define LCD_RAM1_S012            LCD_RAM1_bit.S012
#define LCD_RAM1_S013            LCD_RAM1_bit.S013
#define LCD_RAM1_S014            LCD_RAM1_bit.S014
#define LCD_RAM1_S015            LCD_RAM1_bit.S015

#define LCD_RAM2_S016            LCD_RAM2_bit.S016
#define LCD_RAM2_S017            LCD_RAM2_bit.S017
#define LCD_RAM2_S018            LCD_RAM2_bit.S018
#define LCD_RAM2_S019            LCD_RAM2_bit.S019
#define LCD_RAM2_S020            LCD_RAM2_bit.S020
#define LCD_RAM2_S021            LCD_RAM2_bit.S021
#define LCD_RAM2_S022            LCD_RAM2_bit.S022
#define LCD_RAM2_S023            LCD_RAM2_bit.S023

#define LCD_RAM3_S024            LCD_RAM3_bit.S024
#define LCD_RAM3_S025            LCD_RAM3_bit.S025
#define LCD_RAM3_S026            LCD_RAM3_bit.S026
#define LCD_RAM3_S027            LCD_RAM3_bit.S027
#define LCD_RAM3_S100            LCD_RAM3_bit.S100
#define LCD_RAM3_S101            LCD_RAM3_bit.S101
#define LCD_RAM3_S102            LCD_RAM3_bit.S102
#define LCD_RAM3_S103            LCD_RAM3_bit.S103

#define LCD_RAM4_S104            LCD_RAM4_bit.S104
#define LCD_RAM4_S105            LCD_RAM4_bit.S105
#define LCD_RAM4_S106            LCD_RAM4_bit.S106
#define LCD_RAM4_S107            LCD_RAM4_bit.S107
#define LCD_RAM4_S108            LCD_RAM4_bit.S108
#define LCD_RAM4_S109            LCD_RAM4_bit.S109
#define LCD_RAM4_S110            LCD_RAM4_bit.S110
#define LCD_RAM4_S111            LCD_RAM4_bit.S111

#define LCD_RAM5_S112            LCD_RAM5_bit.S112
#define LCD_RAM5_S113            LCD_RAM5_bit.S113
#define LCD_RAM5_S114            LCD_RAM5_bit.S114
#define LCD_RAM5_S115            LCD_RAM5_bit.S115
#define LCD_RAM5_S116            LCD_RAM5_bit.S116
#define LCD_RAM5_S117            LCD_RAM5_bit.S117
#define LCD_RAM5_S118            LCD_RAM5_bit.S118
#define LCD_RAM5_S119            LCD_RAM5_bit.S119

#define LCD_RAM6_S120            LCD_RAM6_bit.S120
#define LCD_RAM6_S121            LCD_RAM6_bit.S121
#define LCD_RAM6_S122            LCD_RAM6_bit.S122
#define LCD_RAM6_S123            LCD_RAM6_bit.S123
#define LCD_RAM6_S124            LCD_RAM6_bit.S124
#define LCD_RAM6_S125            LCD_RAM6_bit.S125
#define LCD_RAM6_S126            LCD_RAM6_bit.S126
#define LCD_RAM6_S127            LCD_RAM6_bit.S127

#define LCD_RAM7_S200            LCD_RAM7_bit.S200
#define LCD_RAM7_S201            LCD_RAM7_bit.S201
#define LCD_RAM7_S202            LCD_RAM7_bit.S202
#define LCD_RAM7_S203            LCD_RAM7_bit.S203
#define LCD_RAM7_S204            LCD_RAM7_bit.S204
#define LCD_RAM7_S205            LCD_RAM7_bit.S205
#define LCD_RAM7_S206            LCD_RAM7_bit.S206
#define LCD_RAM7_S207            LCD_RAM7_bit.S207

#define LCD_RAM8_S208            LCD_RAM8_bit.S208
#define LCD_RAM8_S209            LCD_RAM8_bit.S209
#define LCD_RAM8_S210            LCD_RAM8_bit.S210
#define LCD_RAM8_S211            LCD_RAM8_bit.S211
#define LCD_RAM8_S212            LCD_RAM8_bit.S212
#define LCD_RAM8_S213            LCD_RAM8_bit.S213
#define LCD_RAM8_S214            LCD_RAM8_bit.S214
#define LCD_RAM8_S215            LCD_RAM8_bit.S215

#define LCD_RAM9_S216            LCD_RAM9_bit.S216
#define LCD_RAM9_S217            LCD_RAM9_bit.S217
#define LCD_RAM9_S218            LCD_RAM9_bit.S218
#define LCD_RAM9_S219            LCD_RAM9_bit.S219
#define LCD_RAM9_S220            LCD_RAM9_bit.S220
#define LCD_RAM9_S221            LCD_RAM9_bit.S221
#define LCD_RAM9_S222            LCD_RAM9_bit.S222
#define LCD_RAM9_S223            LCD_RAM9_bit.S223

#define LCD_RAM10_S224           LCD_RAM10_bit.S224
#define LCD_RAM10_S225           LCD_RAM10_bit.S225
#define LCD_RAM10_S226           LCD_RAM10_bit.S226
#define LCD_RAM10_S227           LCD_RAM10_bit.S227
#define LCD_RAM10_S300           LCD_RAM10_bit.S300
#define LCD_RAM10_S301           LCD_RAM10_bit.S301
#define LCD_RAM10_S302           LCD_RAM10_bit.S302
#define LCD_RAM10_S303           LCD_RAM10_bit.S303

#define LCD_RAM11_S304           LCD_RAM11_bit.S304
#define LCD_RAM11_S305           LCD_RAM11_bit.S305
#define LCD_RAM11_S306           LCD_RAM11_bit.S306
#define LCD_RAM11_S307           LCD_RAM11_bit.S307
#define LCD_RAM11_S308           LCD_RAM11_bit.S308
#define LCD_RAM11_S309           LCD_RAM11_bit.S309
#define LCD_RAM11_S310           LCD_RAM11_bit.S310
#define LCD_RAM11_S311           LCD_RAM11_bit.S311

#define LCD_RAM12_S312           LCD_RAM12_bit.S312
#define LCD_RAM12_S313           LCD_RAM12_bit.S313
#define LCD_RAM12_S314           LCD_RAM12_bit.S314
#define LCD_RAM12_S315           LCD_RAM12_bit.S315
#define LCD_RAM12_S316           LCD_RAM12_bit.S316
#define LCD_RAM12_S317           LCD_RAM12_bit.S317
#define LCD_RAM12_S318           LCD_RAM12_bit.S318
#define LCD_RAM12_S319           LCD_RAM12_bit.S319

#define LCD_RAM13_S320           LCD_RAM13_bit.S320
#define LCD_RAM13_S321           LCD_RAM13_bit.S321
#define LCD_RAM13_S322           LCD_RAM13_bit.S322
#define LCD_RAM13_S323           LCD_RAM13_bit.S323
#define LCD_RAM13_S324           LCD_RAM13_bit.S324
#define LCD_RAM13_S305           LCD_RAM13_bit.S305
#define LCD_RAM13_S306           LCD_RAM13_bit.S306
#define LCD_RAM13_S327           LCD_RAM13_bit.S327

#define LCD_RAM14_S028           LCD_RAM14_bit.S028
#define LCD_RAM14_S029           LCD_RAM14_bit.S029
#define LCD_RAM14_S030           LCD_RAM14_bit.S030
#define LCD_RAM14_S031           LCD_RAM14_bit.S031
#define LCD_RAM14_S032           LCD_RAM14_bit.S032
#define LCD_RAM14_S033           LCD_RAM14_bit.S033
#define LCD_RAM14_S034           LCD_RAM14_bit.S034
#define LCD_RAM14_S035           LCD_RAM14_bit.S035

#define LCD_RAM15_S036           LCD_RAM15_bit.S036
#define LCD_RAM15_S037           LCD_RAM15_bit.S037
#define LCD_RAM15_S038           LCD_RAM15_bit.S038
#define LCD_RAM15_S039           LCD_RAM15_bit.S039
#define LCD_RAM15_S040           LCD_RAM15_bit.S040
#define LCD_RAM15_S041           LCD_RAM15_bit.S041
#define LCD_RAM15_S042           LCD_RAM15_bit.S042
#define LCD_RAM15_S043           LCD_RAM15_bit.S043

#define LCD_RAM16_S128           LCD_RAM16_bit.S128
#define LCD_RAM16_S129           LCD_RAM16_bit.S129
#define LCD_RAM16_S130           LCD_RAM16_bit.S130
#define LCD_RAM16_S131           LCD_RAM16_bit.S131
#define LCD_RAM16_S132           LCD_RAM16_bit.S132
#define LCD_RAM16_S133           LCD_RAM16_bit.S133
#define LCD_RAM16_S134           LCD_RAM16_bit.S134
#define LCD_RAM16_S135           LCD_RAM16_bit.S135

#define LCD_RAM17_S136           LCD_RAM17_bit.S136
#define LCD_RAM17_S137           LCD_RAM17_bit.S137
#define LCD_RAM17_S138           LCD_RAM17_bit.S138
#define LCD_RAM17_S139           LCD_RAM17_bit.S139
#define LCD_RAM17_S140           LCD_RAM17_bit.S140
#define LCD_RAM17_S141           LCD_RAM17_bit.S141
#define LCD_RAM17_S142           LCD_RAM17_bit.S142
#define LCD_RAM17_S143           LCD_RAM17_bit.S143

#define LCD_RAM18_S228           LCD_RAM18_bit.S228
#define LCD_RAM18_S229           LCD_RAM18_bit.S229
#define LCD_RAM18_S230           LCD_RAM18_bit.S230
#define LCD_RAM18_S231           LCD_RAM18_bit.S231
#define LCD_RAM18_S232           LCD_RAM18_bit.S232
#define LCD_RAM18_S233           LCD_RAM18_bit.S233
#define LCD_RAM18_S234           LCD_RAM18_bit.S234
#define LCD_RAM18_S235           LCD_RAM18_bit.S235

#define LCD_RAM19_S236           LCD_RAM19_bit.S236
#define LCD_RAM19_S237           LCD_RAM19_bit.S237
#define LCD_RAM19_S238           LCD_RAM19_bit.S238
#define LCD_RAM19_S239           LCD_RAM19_bit.S239
#define LCD_RAM19_S240           LCD_RAM19_bit.S240
#define LCD_RAM19_S241           LCD_RAM19_bit.S241
#define LCD_RAM19_S242           LCD_RAM19_bit.S242
#define LCD_RAM19_S243           LCD_RAM19_bit.S243

#define LCD_RAM20_S328           LCD_RAM20_bit.S328
#define LCD_RAM20_S329           LCD_RAM20_bit.S329
#define LCD_RAM20_S330           LCD_RAM20_bit.S330
#define LCD_RAM20_S331           LCD_RAM20_bit.S331
#define LCD_RAM20_S332           LCD_RAM20_bit.S332
#define LCD_RAM20_S333           LCD_RAM20_bit.S333
#define LCD_RAM20_S334           LCD_RAM20_bit.S334
#define LCD_RAM20_S335           LCD_RAM20_bit.S335

#define LCD_RAM21_S336           LCD_RAM21_bit.S336
#define LCD_RAM21_S337           LCD_RAM21_bit.S337
#define LCD_RAM21_S338           LCD_RAM21_bit.S338
#define LCD_RAM21_S339           LCD_RAM21_bit.S339
#define LCD_RAM21_S340           LCD_RAM21_bit.S340
#define LCD_RAM21_S341           LCD_RAM21_bit.S341
#define LCD_RAM21_S342           LCD_RAM21_bit.S342
#define LCD_RAM21_S343           LCD_RAM21_bit.S343

#define RI_ICR1_IC2CS            RI_ICR1_bit.IC2CS

#define RI_ICR2_IC3CS            RI_ICR2_bit.IC3CS

#define RI_IOIR1_CH1I            RI_IOIR1_bit.CH1I
#define RI_IOIR1_CH4I            RI_IOIR1_bit.CH4I
#define RI_IOIR1_CH7I            RI_IOIR1_bit.CH7I
#define RI_IOIR1_CH10I           RI_IOIR1_bit.CH10I
#define RI_IOIR1_CH13I           RI_IOIR1_bit.CH13I
#define RI_IOIR1_CH16I           RI_IOIR1_bit.CH16I
#define RI_IOIR1_CH19I           RI_IOIR1_bit.CH19I
#define RI_IOIR1_CH22I           RI_IOIR1_bit.CH22I

#define RI_IOIR2_CH2I            RI_IOIR2_bit.CH2I
#define RI_IOIR2_CH5I            RI_IOIR2_bit.CH5I
#define RI_IOIR2_CH8I            RI_IOIR2_bit.CH8I
#define RI_IOIR2_CH11I           RI_IOIR2_bit.CH11I
#define RI_IOIR2_CH14I           RI_IOIR2_bit.CH14I
#define RI_IOIR2_CH17I           RI_IOIR2_bit.CH17I
#define RI_IOIR2_CH20I           RI_IOIR2_bit.CH20I
#define RI_IOIR2_CH23I           RI_IOIR2_bit.CH23I

#define RI_IOIR3_CH3I            RI_IOIR3_bit.CH3I
#define RI_IOIR3_CH6I            RI_IOIR3_bit.CH6I
#define RI_IOIR3_CH9I            RI_IOIR3_bit.CH9I
#define RI_IOIR3_CH12I           RI_IOIR3_bit.CH12I
#define RI_IOIR3_CH15I           RI_IOIR3_bit.CH15I
#define RI_IOIR3_CH18I           RI_IOIR3_bit.CH18I
#define RI_IOIR3_CH21I           RI_IOIR3_bit.CH21I
#define RI_IOIR3_CH24I           RI_IOIR3_bit.CH24I

#define RI_IOCMR1_CH1M           RI_IOCMR1_bit.CH1M
#define RI_IOCMR1_CH4M           RI_IOCMR1_bit.CH4M
#define RI_IOCMR1_CH7M           RI_IOCMR1_bit.CH7M
#define RI_IOCMR1_CH10M          RI_IOCMR1_bit.CH10M
#define RI_IOCMR1_CH13M          RI_IOCMR1_bit.CH13M
#define RI_IOCMR1_CH16M          RI_IOCMR1_bit.CH16M
#define RI_IOCMR1_CH19M          RI_IOCMR1_bit.CH19M
#define RI_IOCMR1_CH22M          RI_IOCMR1_bit.CH22M

#define RI_IOCMR2_CH2M           RI_IOCMR2_bit.CH2M
#define RI_IOCMR2_CH5M           RI_IOCMR2_bit.CH5M
#define RI_IOCMR2_CH8M           RI_IOCMR2_bit.CH8M
#define RI_IOCMR2_CH11M          RI_IOCMR2_bit.CH11M
#define RI_IOCMR2_CH14M          RI_IOCMR2_bit.CH14M
#define RI_IOCMR2_CH17M          RI_IOCMR2_bit.CH17M
#define RI_IOCMR2_CH20M          RI_IOCMR2_bit.CH20M
#define RI_IOCMR2_CH23M          RI_IOCMR2_bit.CH23M

#define RI_IOCMR3_CH3M           RI_IOCMR3_bit.CH3M
#define RI_IOCMR3_CH6M           RI_IOCMR3_bit.CH6M
#define RI_IOCMR3_CH9M           RI_IOCMR3_bit.CH9M
#define RI_IOCMR3_CH12M          RI_IOCMR3_bit.CH12M
#define RI_IOCMR3_CH53M          RI_IOCMR3_bit.CH53M
#define RI_IOCMR3_CH18M          RI_IOCMR3_bit.CH18M
#define RI_IOCMR3_CH21M          RI_IOCMR3_bit.CH21M
#define RI_IOCMR3_CH24M          RI_IOCMR3_bit.CH24M

#define RI_IOSR1_CH1E            RI_IOSR1_bit.CH1E
#define RI_IOSR1_CH4E            RI_IOSR1_bit.CH4E
#define RI_IOSR1_CH7E            RI_IOSR1_bit.CH7E
#define RI_IOSR1_CH10E           RI_IOSR1_bit.CH10E
#define RI_IOSR1_CH13E           RI_IOSR1_bit.CH13E
#define RI_IOSR1_CH16E           RI_IOSR1_bit.CH16E
#define RI_IOSR1_CH19E           RI_IOSR1_bit.CH19E
#define RI_IOSR1_CH22E           RI_IOSR1_bit.CH22E

#define RI_IOSR2_CH2E            RI_IOSR2_bit.CH2E
#define RI_IOSR2_CH5E            RI_IOSR2_bit.CH5E
#define RI_IOSR2_CH8E            RI_IOSR2_bit.CH8E
#define RI_IOSR2_CH11E           RI_IOSR2_bit.CH11E
#define RI_IOSR2_CH14E           RI_IOSR2_bit.CH14E
#define RI_IOSR2_CH17E           RI_IOSR2_bit.CH17E
#define RI_IOSR2_CH20E           RI_IOSR2_bit.CH20E
#define RI_IOSR2_CH23E           RI_IOSR2_bit.CH23E

#define RI_IOSR3_CH3E            RI_IOSR3_bit.CH3E
#define RI_IOSR3_CH6E            RI_IOSR3_bit.CH6E
#define RI_IOSR3_CH9E            RI_IOSR3_bit.CH9E
#define RI_IOSR3_CH12E           RI_IOSR3_bit.CH12E
#define RI_IOSR3_CH15E           RI_IOSR3_bit.CH15E
#define RI_IOSR3_CH18E           RI_IOSR3_bit.CH18E
#define RI_IOSR3_CH21E           RI_IOSR3_bit.CH21E
#define RI_IOSR3_CH24E           RI_IOSR3_bit.CH24E

#define RI_IOGCR_IOM1            RI_IOGCR_bit.IOM1
#define RI_IOGCR_IOM2            RI_IOGCR_bit.IOM2
#define RI_IOGCR_IOM3            RI_IOGCR_bit.IOM3

#define RI_ASCR1_AS0             RI_ASCR1_bit.AS0
#define RI_ASCR1_AS1             RI_ASCR1_bit.AS1
#define RI_ASCR1_AS2             RI_ASCR1_bit.AS2
#define RI_ASCR1_AS3             RI_ASCR1_bit.AS3
#define RI_ASCR1_AS4             RI_ASCR1_bit.AS4
#define RI_ASCR1_AS5             RI_ASCR1_bit.AS5
#define RI_ASCR1_AS6             RI_ASCR1_bit.AS6
#define RI_ASCR1_AS7             RI_ASCR1_bit.AS7

#define RI_ASCR2_AS8             RI_ASCR2_bit.AS8
#define RI_ASCR2_AS14            RI_ASCR2_bit.AS14

#define RI_RCR_KPU10             RI_RCR_bit.KPU10
#define RI_RCR_KPU400            RI_RCR_bit.KPU400
#define RI_RCR_KPD10             RI_RCR_bit.KPD10
#define RI_RCR_KPD400            RI_RCR_bit.KPD400

#endif

/*-------------------------------------------------------------------------
 *      LCD bit masks
 *-----------------------------------------------------------------------*/
#define MASK_LCD_CR1_B2          0x01
#define MASK_LCD_CR1_DUTY0       0x02
#define MASK_LCD_CR1_DUTY1       0x04
#define MASK_LCD_CR1_BLINKF0     0x08
#define MASK_LCD_CR1_BLINKF1     0x10
#define MASK_LCD_CR1_BLINKF2     0x20
#define MASK_LCD_CR1_BLINK0      0x40
#define MASK_LCD_CR1_BLINK1      0x80

#define MASK_LCD_CR2_VSEL        0x01
#define MASK_LCD_CR2_CC0         0x02
#define MASK_LCD_CR2_CC1         0x04
#define MASK_LCD_CR2_CC2         0x08
#define MASK_LCD_CR2_HD          0x10
#define MASK_LCD_CR2_PON0        0x20
#define MASK_LCD_CR2_PON1        0x40
#define MASK_LCD_CR2_PON2        0x80

#define MASK_LCD_CR3_DEAD0       0x01
#define MASK_LCD_CR3_DEAD1       0x02
#define MASK_LCD_CR3_DEAD2       0x04
#define MASK_LCD_CR3_SOFC        0x08
#define MASK_LCD_CR3_SOF         0x10
#define MASK_LCD_CR3_SOFIE       0x20
#define MASK_LCD_CR3_LCDEN       0x40

#define MASK_LCD_FRQ_DIV0        0x01
#define MASK_LCD_FRQ_DIV1        0x02
#define MASK_LCD_FRQ_DIV2        0x04
#define MASK_LCD_FRQ_DIV3        0x08
#define MASK_LCD_FRQ_PS0         0x10
#define MASK_LCD_FRQ_PS1         0x20
#define MASK_LCD_FRQ_PS2         0x40
#define MASK_LCD_FRQ_PS3         0x80

#define MASK_LCD_PM0_SEG00       0x01
#define MASK_LCD_PM0_SEG01       0x02
#define MASK_LCD_PM0_SEG02       0x04
#define MASK_LCD_PM0_SEG03       0x08
#define MASK_LCD_PM0_SEG04       0x10
#define MASK_LCD_PM0_SEG05       0x20
#define MASK_LCD_PM0_SEG06       0x40

#define MASK_LCD_PM1_SEG08       0x01
#define MASK_LCD_PM1_SEG09       0x02
#define MASK_LCD_PM1_SEG10       0x04
#define MASK_LCD_PM1_SEG11       0x08
#define MASK_LCD_PM1_SEG12       0x10
#define MASK_LCD_PM1_SEG13       0x20
#define MASK_LCD_PM1_SEG14       0x40
#define MASK_LCD_PM1_SEG07       0x80
#define MASK_LCD_PM1_SEG15       0x80

#define MASK_LCD_PM2_SEG16       0x01
#define MASK_LCD_PM2_SEG17       0x02
#define MASK_LCD_PM2_SEG18       0x04
#define MASK_LCD_PM2_SEG19       0x08
#define MASK_LCD_PM2_SEG20       0x10
#define MASK_LCD_PM2_SEG21       0x20
#define MASK_LCD_PM2_SEG22       0x40
#define MASK_LCD_PM2_SEG23       0x80

#define MASK_LCD_PM3_SEG24       0x01
#define MASK_LCD_PM3_SEG25       0x02
#define MASK_LCD_PM3_SEG26       0x04
#define MASK_LCD_PM3_SEG27       0x08
#define MASK_LCD_PM3_SEG28       0x10
#define MASK_LCD_PM3_SEG29       0x20
#define MASK_LCD_PM3_SEG30       0x40
#define MASK_LCD_PM3_SEG31       0x80

#define MASK_LCD_PM4_SEG32       0x01
#define MASK_LCD_PM4_SEG33       0x02
#define MASK_LCD_PM4_SEG34       0x04
#define MASK_LCD_PM4_SEG35       0x08
#define MASK_LCD_PM4_SEG36       0x10
#define MASK_LCD_PM4_SEG37       0x20
#define MASK_LCD_PM4_SEG38       0x40
#define MASK_LCD_PM4_SEG39       0x80

#define MASK_LCD_PM5_SEG40       0x01
#define MASK_LCD_PM5_SEG41       0x02
#define MASK_LCD_PM5_SEG42       0x04
#define MASK_LCD_PM5_SEG43       0x08

#define MASK_LCD_RAM0_S000       0x01
#define MASK_LCD_RAM0_S001       0x02
#define MASK_LCD_RAM0_S002       0x04
#define MASK_LCD_RAM0_S003       0x08
#define MASK_LCD_RAM0_S004       0x10
#define MASK_LCD_RAM0_S005       0x20
#define MASK_LCD_RAM0_S006       0x40
#define MASK_LCD_RAM0_S007       0x80

#define MASK_LCD_RAM1_S008       0x01
#define MASK_LCD_RAM1_S009       0x02
#define MASK_LCD_RAM1_S010       0x04
#define MASK_LCD_RAM1_S011       0x08
#define MASK_LCD_RAM1_S012       0x10
#define MASK_LCD_RAM1_S013       0x20
#define MASK_LCD_RAM1_S014       0x40
#define MASK_LCD_RAM1_S015       0x80

#define MASK_LCD_RAM2_S016       0x01
#define MASK_LCD_RAM2_S017       0x02
#define MASK_LCD_RAM2_S018       0x04
#define MASK_LCD_RAM2_S019       0x08
#define MASK_LCD_RAM2_S020       0x10
#define MASK_LCD_RAM2_S021       0x20
#define MASK_LCD_RAM2_S022       0x40
#define MASK_LCD_RAM2_S023       0x80

#define MASK_LCD_RAM3_S024       0x01
#define MASK_LCD_RAM3_S025       0x02
#define MASK_LCD_RAM3_S026       0x04
#define MASK_LCD_RAM3_S027       0x08
#define MASK_LCD_RAM3_S100       0x10
#define MASK_LCD_RAM3_S101       0x20
#define MASK_LCD_RAM3_S102       0x40
#define MASK_LCD_RAM3_S103       0x80

#define MASK_LCD_RAM4_S104       0x01
#define MASK_LCD_RAM4_S105       0x02
#define MASK_LCD_RAM4_S106       0x04
#define MASK_LCD_RAM4_S107       0x08
#define MASK_LCD_RAM4_S108       0x10
#define MASK_LCD_RAM4_S109       0x20
#define MASK_LCD_RAM4_S110       0x40
#define MASK_LCD_RAM4_S111       0x80

#define MASK_LCD_RAM5_S112       0x01
#define MASK_LCD_RAM5_S113       0x02
#define MASK_LCD_RAM5_S114       0x04
#define MASK_LCD_RAM5_S115       0x08
#define MASK_LCD_RAM5_S116       0x10
#define MASK_LCD_RAM5_S117       0x20
#define MASK_LCD_RAM5_S118       0x40
#define MASK_LCD_RAM5_S119       0x80

#define MASK_LCD_RAM6_S120       0x01
#define MASK_LCD_RAM6_S121       0x02
#define MASK_LCD_RAM6_S122       0x04
#define MASK_LCD_RAM6_S123       0x08
#define MASK_LCD_RAM6_S124       0x10
#define MASK_LCD_RAM6_S125       0x20
#define MASK_LCD_RAM6_S126       0x40
#define MASK_LCD_RAM6_S127       0x80

#define MASK_LCD_RAM7_S200       0x01
#define MASK_LCD_RAM7_S201       0x02
#define MASK_LCD_RAM7_S202       0x04
#define MASK_LCD_RAM7_S203       0x08
#define MASK_LCD_RAM7_S204       0x10
#define MASK_LCD_RAM7_S205       0x20
#define MASK_LCD_RAM7_S206       0x40
#define MASK_LCD_RAM7_S207       0x80

#define MASK_LCD_RAM8_S208       0x01
#define MASK_LCD_RAM8_S209       0x02
#define MASK_LCD_RAM8_S210       0x04
#define MASK_LCD_RAM8_S211       0x08
#define MASK_LCD_RAM8_S212       0x10
#define MASK_LCD_RAM8_S213       0x20
#define MASK_LCD_RAM8_S214       0x40
#define MASK_LCD_RAM8_S215       0x80

#define MASK_LCD_RAM9_S216       0x01
#define MASK_LCD_RAM9_S217       0x02
#define MASK_LCD_RAM9_S218       0x04
#define MASK_LCD_RAM9_S219       0x08
#define MASK_LCD_RAM9_S220       0x10
#define MASK_LCD_RAM9_S221       0x20
#define MASK_LCD_RAM9_S222       0x40
#define MASK_LCD_RAM9_S223       0x80

#define MASK_LCD_RAM10_S224      0x01
#define MASK_LCD_RAM10_S225      0x02
#define MASK_LCD_RAM10_S226      0x04
#define MASK_LCD_RAM10_S227      0x08
#define MASK_LCD_RAM10_S300      0x10
#define MASK_LCD_RAM10_S301      0x20
#define MASK_LCD_RAM10_S302      0x40
#define MASK_LCD_RAM10_S303      0x80

#define MASK_LCD_RAM11_S304      0x01
#define MASK_LCD_RAM11_S305      0x02
#define MASK_LCD_RAM11_S306      0x04
#define MASK_LCD_RAM11_S307      0x08
#define MASK_LCD_RAM11_S308      0x10
#define MASK_LCD_RAM11_S309      0x20
#define MASK_LCD_RAM11_S310      0x40
#define MASK_LCD_RAM11_S311      0x80

#define MASK_LCD_RAM12_S312      0x01
#define MASK_LCD_RAM12_S313      0x02
#define MASK_LCD_RAM12_S314      0x04
#define MASK_LCD_RAM12_S315      0x08
#define MASK_LCD_RAM12_S316      0x10
#define MASK_LCD_RAM12_S317      0x20
#define MASK_LCD_RAM12_S318      0x40
#define MASK_LCD_RAM12_S319      0x80

#define MASK_LCD_RAM13_S320      0x01
#define MASK_LCD_RAM13_S321      0x02
#define MASK_LCD_RAM13_S322      0x04
#define MASK_LCD_RAM13_S323      0x08
#define MASK_LCD_RAM13_S324      0x10
#define MASK_LCD_RAM13_S305      0x20
#define MASK_LCD_RAM13_S306      0x40
#define MASK_LCD_RAM13_S327      0x80

#define MASK_LCD_RAM14_S028      0x01
#define MASK_LCD_RAM14_S029      0x02
#define MASK_LCD_RAM14_S030      0x04
#define MASK_LCD_RAM14_S031      0x08
#define MASK_LCD_RAM14_S032      0x10
#define MASK_LCD_RAM14_S033      0x20
#define MASK_LCD_RAM14_S034      0x40
#define MASK_LCD_RAM14_S035      0x80

#define MASK_LCD_RAM15_S036      0x01
#define MASK_LCD_RAM15_S037      0x02
#define MASK_LCD_RAM15_S038      0x04
#define MASK_LCD_RAM15_S039      0x08
#define MASK_LCD_RAM15_S040      0x10
#define MASK_LCD_RAM15_S041      0x20
#define MASK_LCD_RAM15_S042      0x40
#define MASK_LCD_RAM15_S043      0x80

#define MASK_LCD_RAM16_S128      0x01
#define MASK_LCD_RAM16_S129      0x02
#define MASK_LCD_RAM16_S130      0x04
#define MASK_LCD_RAM16_S131      0x08
#define MASK_LCD_RAM16_S132      0x10
#define MASK_LCD_RAM16_S133      0x20
#define MASK_LCD_RAM16_S134      0x40
#define MASK_LCD_RAM16_S135      0x80

#define MASK_LCD_RAM17_S136      0x01
#define MASK_LCD_RAM17_S137      0x02
#define MASK_LCD_RAM17_S138      0x04
#define MASK_LCD_RAM17_S139      0x08
#define MASK_LCD_RAM17_S140      0x10
#define MASK_LCD_RAM17_S141      0x20
#define MASK_LCD_RAM17_S142      0x40
#define MASK_LCD_RAM17_S143      0x80

#define MASK_LCD_RAM18_S228      0x01
#define MASK_LCD_RAM18_S229      0x02
#define MASK_LCD_RAM18_S230      0x04
#define MASK_LCD_RAM18_S231      0x08
#define MASK_LCD_RAM18_S232      0x10
#define MASK_LCD_RAM18_S233      0x20
#define MASK_LCD_RAM18_S234      0x40
#define MASK_LCD_RAM18_S235      0x80

#define MASK_LCD_RAM19_S236      0x01
#define MASK_LCD_RAM19_S237      0x02
#define MASK_LCD_RAM19_S238      0x04
#define MASK_LCD_RAM19_S239      0x08
#define MASK_LCD_RAM19_S240      0x10
#define MASK_LCD_RAM19_S241      0x20
#define MASK_LCD_RAM19_S242      0x40
#define MASK_LCD_RAM19_S243      0x80

#define MASK_LCD_RAM20_S328      0x01
#define MASK_LCD_RAM20_S329      0x02
#define MASK_LCD_RAM20_S330      0x04
#define MASK_LCD_RAM20_S331      0x08
#define MASK_LCD_RAM20_S332      0x10
#define MASK_LCD_RAM20_S333      0x20
#define MASK_LCD_RAM20_S334      0x40
#define MASK_LCD_RAM20_S335      0x80

#define MASK_LCD_RAM21_S336      0x01
#define MASK_LCD_RAM21_S337      0x02
#define MASK_LCD_RAM21_S338      0x04
#define MASK_LCD_RAM21_S339      0x08
#define MASK_LCD_RAM21_S340      0x10
#define MASK_LCD_RAM21_S341      0x20
#define MASK_LCD_RAM21_S342      0x40
#define MASK_LCD_RAM21_S343      0x80

#define MASK_RI_ICR1_IC2CS       0x1F

#define MASK_RI_ICR2_IC3CS       0x1F

#define MASK_RI_IOIR1_CH1I       0x01
#define MASK_RI_IOIR1_CH4I       0x02
#define MASK_RI_IOIR1_CH7I       0x04
#define MASK_RI_IOIR1_CH10I      0x08
#define MASK_RI_IOIR1_CH13I      0x10
#define MASK_RI_IOIR1_CH16I      0x20
#define MASK_RI_IOIR1_CH19I      0x40
#define MASK_RI_IOIR1_CH22I      0x80

#define MASK_RI_IOIR2_CH2I       0x01
#define MASK_RI_IOIR2_CH5I       0x02
#define MASK_RI_IOIR2_CH8I       0x04
#define MASK_RI_IOIR2_CH11I      0x08
#define MASK_RI_IOIR2_CH14I      0x10
#define MASK_RI_IOIR2_CH17I      0x20
#define MASK_RI_IOIR2_CH20I      0x40
#define MASK_RI_IOIR2_CH23I      0x80

#define MASK_RI_IOIR3_CH3I       0x01
#define MASK_RI_IOIR3_CH6I       0x02
#define MASK_RI_IOIR3_CH9I       0x04
#define MASK_RI_IOIR3_CH12I      0x08
#define MASK_RI_IOIR3_CH15I      0x10
#define MASK_RI_IOIR3_CH18I      0x20
#define MASK_RI_IOIR3_CH21I      0x40
#define MASK_RI_IOIR3_CH24I      0x80

#define MASK_RI_IOCMR1_CH1M      0x01
#define MASK_RI_IOCMR1_CH4M      0x02
#define MASK_RI_IOCMR1_CH7M      0x04
#define MASK_RI_IOCMR1_CH10M     0x08
#define MASK_RI_IOCMR1_CH13M     0x10
#define MASK_RI_IOCMR1_CH16M     0x20
#define MASK_RI_IOCMR1_CH19M     0x40
#define MASK_RI_IOCMR1_CH22M     0x80

#define MASK_RI_IOCMR2_CH2M      0x01
#define MASK_RI_IOCMR2_CH5M      0x02
#define MASK_RI_IOCMR2_CH8M      0x04
#define MASK_RI_IOCMR2_CH11M     0x08
#define MASK_RI_IOCMR2_CH14M     0x10
#define MASK_RI_IOCMR2_CH17M     0x20
#define MASK_RI_IOCMR2_CH20M     0x40
#define MASK_RI_IOCMR2_CH23M     0x80

#define MASK_RI_IOCMR3_CH3M      0x01
#define MASK_RI_IOCMR3_CH6M      0x02
#define MASK_RI_IOCMR3_CH9M      0x04
#define MASK_RI_IOCMR3_CH12M     0x08
#define MASK_RI_IOCMR3_CH53M     0x10
#define MASK_RI_IOCMR3_CH18M     0x20
#define MASK_RI_IOCMR3_CH21M     0x40
#define MASK_RI_IOCMR3_CH24M     0x80

#define MASK_RI_IOSR1_CH1E       0x01
#define MASK_RI_IOSR1_CH4E       0x02
#define MASK_RI_IOSR1_CH7E       0x04
#define MASK_RI_IOSR1_CH10E      0x08
#define MASK_RI_IOSR1_CH13E      0x10
#define MASK_RI_IOSR1_CH16E      0x20
#define MASK_RI_IOSR1_CH19E      0x40
#define MASK_RI_IOSR1_CH22E      0x80

#define MASK_RI_IOSR2_CH2E       0x01
#define MASK_RI_IOSR2_CH5E       0x02
#define MASK_RI_IOSR2_CH8E       0x04
#define MASK_RI_IOSR2_CH11E      0x08
#define MASK_RI_IOSR2_CH14E      0x10
#define MASK_RI_IOSR2_CH17E      0x20
#define MASK_RI_IOSR2_CH20E      0x40
#define MASK_RI_IOSR2_CH23E      0x80

#define MASK_RI_IOSR3_CH3E       0x01
#define MASK_RI_IOSR3_CH6E       0x02
#define MASK_RI_IOSR3_CH9E       0x04
#define MASK_RI_IOSR3_CH12E      0x08
#define MASK_RI_IOSR3_CH15E      0x10
#define MASK_RI_IOSR3_CH18E      0x20
#define MASK_RI_IOSR3_CH21E      0x40
#define MASK_RI_IOSR3_CH24E      0x80

#define MASK_RI_IOGCR_IOM1       0x03
#define MASK_RI_IOGCR_IOM2       0x0C
#define MASK_RI_IOGCR_IOM3       0x30

#define MASK_RI_ASCR1_AS0        0x01
#define MASK_RI_ASCR1_AS1        0x02
#define MASK_RI_ASCR1_AS2        0x04
#define MASK_RI_ASCR1_AS3        0x08
#define MASK_RI_ASCR1_AS4        0x10
#define MASK_RI_ASCR1_AS5        0x20
#define MASK_RI_ASCR1_AS6        0x40
#define MASK_RI_ASCR1_AS7        0x80

#define MASK_RI_ASCR2_AS8        0x01
#define MASK_RI_ASCR2_AS14       0x40

#define MASK_RI_RCR_KPU10        0x01
#define MASK_RI_RCR_KPU400       0x02
#define MASK_RI_RCR_KPD10        0x04
#define MASK_RI_RCR_KPD400       0x08


/*-------------------------------------------------------------------------
 *      COMP1/COMP2 register definitions
 *-----------------------------------------------------------------------*/
/* Comparator control and status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CMP1        : 2;
  unsigned char STE         : 1;
  unsigned char CMP1OUT     : 1;
  unsigned char EF1         : 1;
  unsigned char IE1         : 1;
} __BITS_COMP_CSR1;
#endif
//__IO_REG8_BIT(COMP_CSR1,   0x5440, __READ_WRITE, __BITS_COMP_CSR1);
unsigned char COMP_CSR1; //0x5440 __READ_WRITE
__BITS_COMP_CSR1 COMP_CSR1_bit;

/* Comparator control and status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CMP2        : 2;
  unsigned char SPEED       : 1;
  unsigned char CMP2OUT     : 1;
  unsigned char EF2         : 1;
  unsigned char IE2         : 1;
} __BITS_COMP_CSR2;
#endif
//__IO_REG8_BIT(COMP_CSR2,   0x5441, __READ_WRITE, __BITS_COMP_CSR2);
unsigned char COMP_CSR2; //0x5441 __READ_WRITE
__BITS_COMP_CSR2 COMP_CSR2_bit;

/* Comparator control and status register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VREFOUTEN   : 1;
  unsigned char WNDWE       : 1;
  unsigned char VREFEN      : 1;
  unsigned char INSEL       : 3;
  unsigned char OUTSEL      : 2;
} __BITS_COMP_CSR3;
#endif
//__IO_REG8_BIT(COMP_CSR3,   0x5442, __READ_WRITE, __BITS_COMP_CSR3);
unsigned char COMP_CSR3; //0x5442 __READ_WRITE
__BITS_COMP_CSR3 COMP_CSR3_bit;

/* Comparator control and status register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INVTRIG     : 3;
  unsigned char NINVTRIG    : 3;
} __BITS_COMP_CSR4;
#endif
//__IO_REG8_BIT(COMP_CSR4,   0x5443, __READ_WRITE, __BITS_COMP_CSR4);
unsigned char COMP_CSR4; //0x5443 __READ_WRITE
__BITS_COMP_CSR4 COMP_CSR4_bit;

/* Comparator control and status register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VREFTRIG    : 3;
  unsigned char DACTRIG     : 3;
} __BITS_COMP_CSR5;
#endif
//__IO_REG8_BIT(COMP_CSR5,   0x5444, __READ_WRITE, __BITS_COMP_CSR5);
unsigned char COMP_CSR5; //0x5444 __READ_WRITE
__BITS_COMP_CSR5 COMP_CSR5_bit;


/*-------------------------------------------------------------------------
 *      COMP1/COMP2 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define COMP_CSR1_CMP1           COMP_CSR1_bit.CMP1
#define COMP_CSR1_STE            COMP_CSR1_bit.STE
#define COMP_CSR1_CMP1OUT        COMP_CSR1_bit.CMP1OUT
#define COMP_CSR1_EF1            COMP_CSR1_bit.EF1
#define COMP_CSR1_IE1            COMP_CSR1_bit.IE1

#define COMP_CSR2_CMP2           COMP_CSR2_bit.CMP2
#define COMP_CSR2_SPEED          COMP_CSR2_bit.SPEED
#define COMP_CSR2_CMP2OUT        COMP_CSR2_bit.CMP2OUT
#define COMP_CSR2_EF2            COMP_CSR2_bit.EF2
#define COMP_CSR2_IE2            COMP_CSR2_bit.IE2

#define COMP_CSR3_VREFOUTEN      COMP_CSR3_bit.VREFOUTEN
#define COMP_CSR3_WNDWE          COMP_CSR3_bit.WNDWE
#define COMP_CSR3_VREFEN         COMP_CSR3_bit.VREFEN
#define COMP_CSR3_INSEL          COMP_CSR3_bit.INSEL
#define COMP_CSR3_OUTSEL         COMP_CSR3_bit.OUTSEL

#define COMP_CSR4_INVTRIG        COMP_CSR4_bit.INVTRIG
#define COMP_CSR4_NINVTRIG       COMP_CSR4_bit.NINVTRIG

#define COMP_CSR5_VREFTRIG       COMP_CSR5_bit.VREFTRIG
#define COMP_CSR5_DACTRIG        COMP_CSR5_bit.DACTRIG

#endif

/*-------------------------------------------------------------------------
 *      COMP1/COMP2 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_COMP_CSR1_CMP1      0x03
#define MASK_COMP_CSR1_STE       0x04
#define MASK_COMP_CSR1_CMP1OUT   0x08
#define MASK_COMP_CSR1_EF1       0x10
#define MASK_COMP_CSR1_IE1       0x20

#define MASK_COMP_CSR2_CMP2      0x03
#define MASK_COMP_CSR2_SPEED     0x04
#define MASK_COMP_CSR2_CMP2OUT   0x08
#define MASK_COMP_CSR2_EF2       0x10
#define MASK_COMP_CSR2_IE2       0x20

#define MASK_COMP_CSR3_VREFOUTEN 0x01
#define MASK_COMP_CSR3_WNDWE     0x02
#define MASK_COMP_CSR3_VREFEN    0x04
#define MASK_COMP_CSR3_INSEL     0x38
#define MASK_COMP_CSR3_OUTSEL    0xC0

#define MASK_COMP_CSR4_INVTRIG   0x07
#define MASK_COMP_CSR4_NINVTRIG  0x38

#define MASK_COMP_CSR5_VREFTRIG  0x07
#define MASK_COMP_CSR5_DACTRIG   0x38


/*-------------------------------------------------------------------------
 *      CPU register definitions
 *-----------------------------------------------------------------------*/
/* Accumulator */
//__IO_REG8    (CPU_A,       0x7F00, __READ_WRITE);
unsigned char CPU_A; //0x7F00 __READ_WRITE
/* Program counter extended */
//__IO_REG8    (CPU_PCE,     0x7F01, __READ_WRITE);
unsigned char CPU_PCE; //0x7F01 __READ_WRITE
/* Program counter high */
//__IO_REG8    (CPU_PCH,     0x7F02, __READ_WRITE);
unsigned char CPU_PCH; //0x7F02 __READ_WRITE
/* Program counter low */
//__IO_REG8    (CPU_PCL,     0x7F03, __READ_WRITE);
unsigned char CPU_PCL; //0x7F03 __READ_WRITE
/* X index register high */
//__IO_REG8    (CPU_XH,      0x7F04, __READ_WRITE);
unsigned char CPU_XH; //0x7F04 __READ_WRITE
/* X index register low */
//__IO_REG8    (CPU_XL,      0x7F05, __READ_WRITE);
unsigned char CPU_XL; //0x7F05 __READ_WRITE
/* Y index register high */
//__IO_REG8    (CPU_YH,      0x7F06, __READ_WRITE);
unsigned char CPU_YH; //0x7F06 __READ_WRITE
/* Y index register low */
//__IO_REG8    (CPU_YL,      0x7F07, __READ_WRITE);
unsigned char CPU_YL; //0x7F07 __READ_WRITE
/* Stack pointer high */
//__IO_REG8    (CPU_SPH,     0x7F08, __READ_WRITE);
unsigned char CPU_SPH; //0x7F08 __READ_WRITE
/* Stack pointer low */
//__IO_REG8    (CPU_SPL,     0x7F09, __READ_WRITE);
unsigned char CPU_SPL; //0x7F09 __READ_WRITE
/* Condition code register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C           : 1;
  unsigned char Z           : 1;
  unsigned char N           : 1;
  unsigned char I0          : 1;
  unsigned char H           : 1;
  unsigned char I1          : 1;
  unsigned char             : 1;
  unsigned char V           : 1;
} __BITS_CPU_CCR;
#endif
//__IO_REG8_BIT(CPU_CCR,     0x7F0A, __READ_WRITE, __BITS_CPU_CCR);
unsigned char CPU_CCR; //0x7F0A __READ_WRITE
__BITS_CPU_CCR CPU_CCR_bit;

/* Global configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWD         : 1;
  unsigned char AL          : 1;
} __BITS_CPU_CFG_GCR;
#endif
//__IO_REG8_BIT(CPU_CFG_GCR, 0x7F60, __READ_WRITE, __BITS_CPU_CFG_GCR);
unsigned char CPU_CFG_GCR; //0x7F60 __READ_WRITE
__BITS_CPU_CFG_GCR CPU_CFG_GCR_bit;


/*-------------------------------------------------------------------------
 *      CPU bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define CPU_CCR_C                CPU_CCR_bit.C
#define CPU_CCR_Z                CPU_CCR_bit.Z
#define CPU_CCR_N                CPU_CCR_bit.N
#define CPU_CCR_I0               CPU_CCR_bit.I0
#define CPU_CCR_H                CPU_CCR_bit.H
#define CPU_CCR_I1               CPU_CCR_bit.I1
#define CPU_CCR_V                CPU_CCR_bit.V

#define CPU_CFG_GCR_SWD          CPU_CFG_GCR_bit.SWD
#define CPU_CFG_GCR_AL           CPU_CFG_GCR_bit.AL

#endif

/*-------------------------------------------------------------------------
 *      CPU bit masks
 *-----------------------------------------------------------------------*/
#define MASK_CPU_CCR_C           0x01
#define MASK_CPU_CCR_Z           0x02
#define MASK_CPU_CCR_N           0x04
#define MASK_CPU_CCR_I0          0x08
#define MASK_CPU_CCR_H           0x10
#define MASK_CPU_CCR_I1          0x20
#define MASK_CPU_CCR_V           0x80

#define MASK_CPU_CFG_GCR_SWD     0x01
#define MASK_CPU_CFG_GCR_AL      0x02


/*-------------------------------------------------------------------------
 *      ITC-SPR register definitions
 *-----------------------------------------------------------------------*/
/* Interrupt Software priority register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT0SPR    : 2;
  unsigned char VECT1SPR    : 2;
  unsigned char VECT2SPR    : 2;
  unsigned char VECT3SPR    : 2;
} __BITS_ITC_SPR1;
#endif
//__IO_REG8_BIT(ITC_SPR1,    0x7F70, __READ_WRITE, __BITS_ITC_SPR1);
unsigned char ITC_SPR1; //0x7F70 __READ_WRITE
__BITS_ITC_SPR1 ITC_SPR1_bit;

/* Interrupt Software priority register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT4SPR    : 2;
  unsigned char VECT5SPR    : 2;
  unsigned char VECT6SPR    : 2;
  unsigned char VECT7SPR    : 2;
} __BITS_ITC_SPR2;
#endif
//__IO_REG8_BIT(ITC_SPR2,    0x7F71, __READ_WRITE, __BITS_ITC_SPR2);
unsigned char ITC_SPR2; //0x7F71 __READ_WRITE
__BITS_ITC_SPR2 ITC_SPR2_bit;

/* Interrupt Software priority register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT8SPR    : 2;
  unsigned char VECT9SPR    : 2;
  unsigned char VECT10SPR   : 2;
  unsigned char VECT11SPR   : 2;
} __BITS_ITC_SPR3;
#endif
//__IO_REG8_BIT(ITC_SPR3,    0x7F72, __READ_WRITE, __BITS_ITC_SPR3);
unsigned char ITC_SPR3; //0x7F72 __READ_WRITE
__BITS_ITC_SPR3 ITC_SPR3_bit;

/* Interrupt Software priority register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT12SPR   : 2;
  unsigned char VECT13SPR   : 2;
  unsigned char VECT14SPR   : 2;
  unsigned char VECT15SPR   : 2;
} __BITS_ITC_SPR4;
#endif
//__IO_REG8_BIT(ITC_SPR4,    0x7F73, __READ_WRITE, __BITS_ITC_SPR4);
unsigned char ITC_SPR4; //0x7F73 __READ_WRITE
__BITS_ITC_SPR4 ITC_SPR4_bit;

/* Interrupt Software priority register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT16SPR   : 2;
  unsigned char VECT17SPR   : 2;
  unsigned char VECT18SPR   : 2;
  unsigned char VECT19SPR   : 2;
} __BITS_ITC_SPR5;
#endif
//__IO_REG8_BIT(ITC_SPR5,    0x7F74, __READ_WRITE, __BITS_ITC_SPR5);
unsigned char ITC_SPR5; //0x7F74 __READ_WRITE
__BITS_ITC_SPR5 ITC_SPR5_bit;

/* Interrupt Software priority register 6 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT20SPR   : 2;
  unsigned char VECT21SPR   : 2;
  unsigned char VECT22SPR   : 2;
  unsigned char VECT23SPR   : 2;
} __BITS_ITC_SPR6;
#endif
//__IO_REG8_BIT(ITC_SPR6,    0x7F75, __READ_WRITE, __BITS_ITC_SPR6);
unsigned char ITC_SPR6; //0x7F75 __READ_WRITE
__BITS_ITC_SPR6 ITC_SPR6_bit;

/* Interrupt Software priority register 7 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT24SPR   : 2;
  unsigned char VECT25SPR   : 2;
  unsigned char VECT26SPR   : 2;
  unsigned char VECT27SPR   : 2;
} __BITS_ITC_SPR7;
#endif
//__IO_REG8_BIT(ITC_SPR7,    0x7F76, __READ_WRITE, __BITS_ITC_SPR7);
unsigned char ITC_SPR7; //0x7F76 __READ_WRITE
__BITS_ITC_SPR7 ITC_SPR7_bit;

/* Interrupt Software priority register 8 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT28SPR   : 2;
  unsigned char VECT29SPR   : 2;
} __BITS_ITC_SPR8;
#endif
//__IO_REG8_BIT(ITC_SPR8,    0x7F77, __READ_WRITE, __BITS_ITC_SPR8);
unsigned char ITC_SPR8; //0x7F77 __READ_WRITE
__BITS_ITC_SPR8 ITC_SPR8_bit;


/*-------------------------------------------------------------------------
 *      ITC-SPR bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define ITC_SPR1_VECT0SPR        ITC_SPR1_bit.VECT0SPR
#define ITC_SPR1_VECT1SPR        ITC_SPR1_bit.VECT1SPR
#define ITC_SPR1_VECT2SPR        ITC_SPR1_bit.VECT2SPR
#define ITC_SPR1_VECT3SPR        ITC_SPR1_bit.VECT3SPR

#define ITC_SPR2_VECT4SPR        ITC_SPR2_bit.VECT4SPR
#define ITC_SPR2_VECT5SPR        ITC_SPR2_bit.VECT5SPR
#define ITC_SPR2_VECT6SPR        ITC_SPR2_bit.VECT6SPR
#define ITC_SPR2_VECT7SPR        ITC_SPR2_bit.VECT7SPR

#define ITC_SPR3_VECT8SPR        ITC_SPR3_bit.VECT8SPR
#define ITC_SPR3_VECT9SPR        ITC_SPR3_bit.VECT9SPR
#define ITC_SPR3_VECT10SPR       ITC_SPR3_bit.VECT10SPR
#define ITC_SPR3_VECT11SPR       ITC_SPR3_bit.VECT11SPR

#define ITC_SPR4_VECT12SPR       ITC_SPR4_bit.VECT12SPR
#define ITC_SPR4_VECT13SPR       ITC_SPR4_bit.VECT13SPR
#define ITC_SPR4_VECT14SPR       ITC_SPR4_bit.VECT14SPR
#define ITC_SPR4_VECT15SPR       ITC_SPR4_bit.VECT15SPR

#define ITC_SPR5_VECT16SPR       ITC_SPR5_bit.VECT16SPR
#define ITC_SPR5_VECT17SPR       ITC_SPR5_bit.VECT17SPR
#define ITC_SPR5_VECT18SPR       ITC_SPR5_bit.VECT18SPR
#define ITC_SPR5_VECT19SPR       ITC_SPR5_bit.VECT19SPR

#define ITC_SPR6_VECT20SPR       ITC_SPR6_bit.VECT20SPR
#define ITC_SPR6_VECT21SPR       ITC_SPR6_bit.VECT21SPR
#define ITC_SPR6_VECT22SPR       ITC_SPR6_bit.VECT22SPR
#define ITC_SPR6_VECT23SPR       ITC_SPR6_bit.VECT23SPR

#define ITC_SPR7_VECT24SPR       ITC_SPR7_bit.VECT24SPR
#define ITC_SPR7_VECT25SPR       ITC_SPR7_bit.VECT25SPR
#define ITC_SPR7_VECT26SPR       ITC_SPR7_bit.VECT26SPR
#define ITC_SPR7_VECT27SPR       ITC_SPR7_bit.VECT27SPR

#define ITC_SPR8_VECT28SPR       ITC_SPR8_bit.VECT28SPR
#define ITC_SPR8_VECT29SPR       ITC_SPR8_bit.VECT29SPR

#endif

/*-------------------------------------------------------------------------
 *      ITC-SPR bit masks
 *-----------------------------------------------------------------------*/
#define MASK_ITC_SPR1_VECT0SPR   0x03
#define MASK_ITC_SPR1_VECT1SPR   0x0C
#define MASK_ITC_SPR1_VECT2SPR   0x30
#define MASK_ITC_SPR1_VECT3SPR   0xC0

#define MASK_ITC_SPR2_VECT4SPR   0x03
#define MASK_ITC_SPR2_VECT5SPR   0x0C
#define MASK_ITC_SPR2_VECT6SPR   0x30
#define MASK_ITC_SPR2_VECT7SPR   0xC0

#define MASK_ITC_SPR3_VECT8SPR   0x03
#define MASK_ITC_SPR3_VECT9SPR   0x0C
#define MASK_ITC_SPR3_VECT10SPR  0x30
#define MASK_ITC_SPR3_VECT11SPR  0xC0

#define MASK_ITC_SPR4_VECT12SPR  0x03
#define MASK_ITC_SPR4_VECT13SPR  0x0C
#define MASK_ITC_SPR4_VECT14SPR  0x30
#define MASK_ITC_SPR4_VECT15SPR  0xC0

#define MASK_ITC_SPR5_VECT16SPR  0x03
#define MASK_ITC_SPR5_VECT17SPR  0x0C
#define MASK_ITC_SPR5_VECT18SPR  0x30
#define MASK_ITC_SPR5_VECT19SPR  0xC0

#define MASK_ITC_SPR6_VECT20SPR  0x03
#define MASK_ITC_SPR6_VECT21SPR  0x0C
#define MASK_ITC_SPR6_VECT22SPR  0x30
#define MASK_ITC_SPR6_VECT23SPR  0xC0

#define MASK_ITC_SPR7_VECT24SPR  0x03
#define MASK_ITC_SPR7_VECT25SPR  0x0C
#define MASK_ITC_SPR7_VECT26SPR  0x30
#define MASK_ITC_SPR7_VECT27SPR  0xC0

#define MASK_ITC_SPR8_VECT28SPR  0x03
#define MASK_ITC_SPR8_VECT29SPR  0x0C


/*-------------------------------------------------------------------------
 *      SWIM register definitions
 *-----------------------------------------------------------------------*/
/* SWIM control status register */
//__IO_REG8    (SWIM_CSR,    0x7F80, __READ_WRITE);
unsigned char SWIM_CSR; //0x7F80 __READ_WRITE


/*-------------------------------------------------------------------------
 *      DM register definitions
 *-----------------------------------------------------------------------*/
/* DM breakpoint 1 register extended byte */
//__IO_REG8    (DM_BK1RE,    0x7F90, __READ_WRITE);
unsigned char DM_BK1RE; //0x7F90 __READ_WRITE
/* DM breakpoint 1 register high byte */
//__IO_REG8    (DM_BK1RH,    0x7F91, __READ_WRITE);
unsigned char DM_BK1RH; //0x7F91 __READ_WRITE
/* DM breakpoint 1 register low byte */
//__IO_REG8    (DM_BK1RL,    0x7F92, __READ_WRITE);
unsigned char DM_BK1RL; //0x7F92 __READ_WRITE
/* DM breakpoint 2 register extended byte */
//__IO_REG8    (DM_BK2RE,    0x7F93, __READ_WRITE);
unsigned char DM_BK2RE; //0x7F93 __READ_WRITE
/* DM breakpoint 2 register high byte */
//__IO_REG8    (DM_BK2RH,    0x7F94, __READ_WRITE);
unsigned char DM_BK2RH; //0x7F94 __READ_WRITE
/* DM breakpoint 2 register low byte */
//__IO_REG8    (DM_BK2RL,    0x7F95, __READ_WRITE);
unsigned char DM_BK2RL; //0x7F95 __READ_WRITE
/* DM Debug module control register 1 */
//__IO_REG8    (DM_CR1,      0x7F96, __READ_WRITE);
unsigned char DM_CR1; //0x7F96 __READ_WRITE
/* DM Debug module control register 2 */
//__IO_REG8    (DM_CR2,      0x7F97, __READ_WRITE);
unsigned char DM_CR2; //0x7F97 __READ_WRITE
/* DM Debug module control/status register 1 */
//__IO_REG8    (DM_CSR1,     0x7F98, __READ_WRITE);
unsigned char DM_CSR1; //0x7F98 __READ_WRITE
/* DM Debug module control/status register 2 */
//__IO_REG8    (DM_CSR2,     0x7F99, __READ_WRITE);
unsigned char DM_CSR2; //0x7F99 __READ_WRITE
/* DM enable function register */
//__IO_REG8    (DM_ENFCTR,   0x7F9A, __READ_WRITE);
unsigned char DM_ENFCTR; //0x7F9A __READ_WRITE


/*-------------------------------------------------------------------------
 *      Interrupt vector numbers
 *-----------------------------------------------------------------------*/
#define FLASH_EOP_vector                     0x03
#define FLASH_WR_PG_DIS_vector               0x03
#define DMA1_CH0_HT_vector                   0x04
#define DMA1_CH0_TC_vector                   0x04
#define DMA1_CH1_HT_vector                   0x04
#define DMA1_CH1_TC_vector                   0x04
#define DMA1_CH2_HT_vector                   0x05
#define DMA1_CH2_TC_vector                   0x05
#define DMA1_CH3_HT_vector                   0x05
#define DMA1_CH3_TC_vector                   0x05
#define RTC_ALARM_vector                     0x06
#define RTC_WAKEUP_vector                    0x06
#define RTC_TAMP1_vector                     0x06
#define RTC_TAMP2_vector                     0x06
#define RTC_TAMP3_vector                     0x06
#define LSE_CSS_vector                       0x06
#define EXTIE_vector                         0x07
#define EXTIF_vector                         0x07
#define EXTIPVD_vector                       0x07
#define EXTIB_vector                         0x08
#define EXTIG_vector                         0x08
#define EXTID_vector                         0x09
#define EXTID_vector                         0x09
#define EXTI0_vector                         0x0A
#define EXTI1_vector                         0x0B
#define EXTI2_vector                         0x0C
#define EXTI3_vector                         0x0D
#define EXTI4_vector                         0x0E
#define EXTI5_vector                         0x0F
#define EXTI6_vector                         0x10
#define EXTI7_vector                         0x11
#define LCD_SOF_vector                       0x12
#define CLK_CSS_vector                       0x13
#define CLK_SWITCH_vector                    0x13
#define TIM1_BIF_vector                      0x13
#define DAC_DMAUDR1_vector                   0x13
#define DAC_DMAUDR2_vector                   0x13
#define COMP_EF1_vector                      0x14
#define COMP_EF2_vector                      0x14
#define ADC_EOC_vector                       0x14
#define ADC_OVER_vector                      0x14
#define TIM2_OVR_UIF_vector                  0x15
#define USART2_T_TXE_vector                  0x15
#define USART2_T_TC_vector                   0x15
#define TIM2_CAPCOM_BIF_vector               0x16
#define TIM2_CAPCOM_TIF_vector               0x16
#define TIM2_CAPCOM_CC2IF_vector             0x16
#define TIM2_CAPCOM_CC1IF_vector             0x16
#define USART2_R_RXNE_vector                 0x16
#define USART2_R_OR_vector                   0x16
#define USART2_R_IDLE_vector                 0x16
#define USART2_R_PE_vector                   0x16
#define TIM3_OVR_UIF_vector                  0x17
#define USART3_T_TXE_vector                  0x17
#define USART3_T_TC_vector                   0x17
#define TIM3_CAPCOM_BIF_vector               0x18
#define TIM3_CAPCOM_TIF_vector               0x18
#define TIM3_CAPCOM_CC2IF_vector             0x18
#define TIM3_CAPCOM_CC1IF_vector             0x18
#define USART3_R_RXNE_vector                 0x18
#define USART3_R_OR_vector                   0x18
#define USART3_R_IDLE_vector                 0x18
#define USART3_R_PE_vector                   0x18
#define TIM1_OVR_UIF_vector                  0x19
#define TIM1_CAPCOM_TIF_vector               0x1A
#define TIM1_CAPCOM_CC4IF_vector             0x1A
#define TIM1_CAPCOM_CC3IF_vector             0x1A
#define TIM1_CAPCOM_CC2IF_vector             0x1A
#define TIM1_CAPCOM_CC1IF_vector             0x1A
#define TIM1_CAPCOM_COMIF_vector             0x1A
#define TIM4_TIF_vector                      0x1B
#define TIM4_UIF_vector                      0x1B
#define SPI_TXE_vector                       0x1C
#define SPI_RXNE_vector                      0x1C
#define SPI_WKUP_vector                      0x1C
#define SPI_MODF_vector                      0x1C
#define SPI_OVR_vector                       0x1C
#define TIM5_OVR_UIF_vector                  0x1D
#define USART1_T_TXE_vector                  0x1D
#define USART1_T_TC_vector                   0x1D
#define TIM5_CAPCOM_BIF_vector               0x1E
#define TIM5_CAPCOM_TIF_vector               0x1E
#define TIM5_CAPCOM_CC2IF_vector             0x1E
#define TIM5_CAPCOM_CC1IF_vector             0x1E
#define USART1_R_RXNE_vector                 0x1E
#define USART1_R_OR_vector                   0x1E
#define USART1_R_IDLE_vector                 0x1E
#define USART1_R_PE_vector                   0x1E
#define I2C_SB_vector                        0x1F
#define I2C_ADDR_vector                      0x1F
#define I2C_ADD10_vector                     0x1F
#define I2C_STOPF_vector                     0x1F
#define I2C_BTF_vector                       0x1F
#define I2C_WUFH_vector                      0x1F
#define I2C_RXNE_vector                      0x1F
#define I2C_TXE_vector                       0x1F
#define I2C_BERR_vector                      0x1F
#define I2C_ARLO_vector                      0x1F
#define I2C_AF_vector                        0x1F
#define I2C_OVR_vector                       0x1F

#ifdef __IAR_SYSTEMS_ICC__
#pragma language=restore
#endif

#endif    /* __IOSTM8L152M8_H__ */

/*----------------------------------------------
 *      End of file
 *--------------------------------------------*/
