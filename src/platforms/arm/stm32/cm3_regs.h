#ifndef __CM3_REGS
#define __CM3_REGS

#include <stdint.h>

#ifdef __cplusplus
#define   __I     volatile             /*!< Defines 'read only' permissions                 */
#else
#define   __I     volatile const       /*!< Defines 'read only' permissions                 */
#endif
#define   __O     volatile             /*!< Defines 'write only' permissions                */
#define   __IO    volatile             /*!< Defines 'read / write' permissions              */


typedef struct
{
    __IO uint32_t DHCSR;                   /*!< Offset: 0x000 (R/W)  Debug Halting Control and Status    */
    __O  uint32_t DCRSR;                   /*!< Offset: 0x004 ( /W)  Debug Core Selector        */
    __IO uint32_t DCRDR;                   /*!< Offset: 0x008 (R/W)  Debug Core Data            */
    __IO uint32_t DEMCR;                   /*!< Offset: 0x00C (R/W)  Debug Exception and Monitor Control */
} CoreDebug_Type;

#define CoreDebug_BASE      (0xE000EDF0UL)                            /*!< Core Debug Base Address            */
#define CoreDebug           ((CoreDebug_Type *)     CoreDebug_BASE)   /*!< Core Debug configuration struct    */

#define CoreDebug_DEMCR_TRCENA_Pos         24                                             /*!< CoreDebug DEMCR: TRCENA Position */
#define CoreDebug_DEMCR_TRCENA_Msk         (1UL << CoreDebug_DEMCR_TRCENA_Pos)            /*!< CoreDebug DEMCR: TRCENA Mask */

typedef struct
{
    __IO uint32_t CTRL;                    /*!< Offset: 0x000 (R/W)  Control                          */
    __IO uint32_t CYCCNT;                  /*!< Offset: 0x004 (R/W)  Cycle Count                      */
    __IO uint32_t CPICNT;                  /*!< Offset: 0x008 (R/W)  CPI Count                        */
    __IO uint32_t EXCCNT;                  /*!< Offset: 0x00C (R/W)  Exception Overhead Count         */
    __IO uint32_t SLEEPCNT;                /*!< Offset: 0x010 (R/W)  Sleep Count                      */
    __IO uint32_t LSUCNT;                  /*!< Offset: 0x014 (R/W)  LSU Count                        */
    __IO uint32_t FOLDCNT;                 /*!< Offset: 0x018 (R/W)  Folded-instruction Count         */
    __I  uint32_t PCSR;                    /*!< Offset: 0x01C (R/ )  Program Counter Sample           */
    __IO uint32_t COMP0;                   /*!< Offset: 0x020 (R/W)  Comparator 0                     */
    __IO uint32_t MASK0;                   /*!< Offset: 0x024 (R/W)  Mask 0                           */
    __IO uint32_t FUNCTION0;               /*!< Offset: 0x028 (R/W)  Function 0                       */
          uint32_t RESERVED0[1];
    __IO uint32_t COMP1;                   /*!< Offset: 0x030 (R/W)  Comparator 1                     */
    __IO uint32_t MASK1;                   /*!< Offset: 0x034 (R/W)  Mask 1                           */
    __IO uint32_t FUNCTION1;               /*!< Offset: 0x038 (R/W)  Function 1                       */
          uint32_t RESERVED1[1];
    __IO uint32_t COMP2;                   /*!< Offset: 0x040 (R/W)  Comparator 2                     */
    __IO uint32_t MASK2;                   /*!< Offset: 0x044 (R/W)  Mask 2                           */
    __IO uint32_t FUNCTION2;               /*!< Offset: 0x048 (R/W)  Function 2                       */
          uint32_t RESERVED2[1];
    __IO uint32_t COMP3;                   /*!< Offset: 0x050 (R/W)  Comparator 3                     */
    __IO uint32_t MASK3;                   /*!< Offset: 0x054 (R/W)  Mask 3                           */
    __IO uint32_t FUNCTION3;               /*!< Offset: 0x058 (R/W)  Function 3                       */
} DWT_Type;


#define DWT_BASE            (0xE0001000UL)                            /*!< DWT Base Address                   */
#define DWT                 ((DWT_Type       *)     DWT_BASE      )   /*!< DWT configuration struct           */

#define DWT_CTRL_CYCCNTENA_Pos              0                                          /*!< DWT CTRL: CYCCNTENA Position */
#define DWT_CTRL_CYCCNTENA_Msk             (0x1UL << DWT_CTRL_CYCCNTENA_Pos)           /*!< DWT CTRL: CYCCNTENA Mask */

#endif // __CM3_REGS
