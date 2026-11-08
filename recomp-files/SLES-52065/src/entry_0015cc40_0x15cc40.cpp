#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0015cc40
// Address: 0x15cc40 - 0x15cd5c
void entry_0015cc40_0x15cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cc40_0x15cc40");
#endif

    ctx->pc = 0x15cc40u;

label_15cc40:
    // 0x15cc40: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15cc40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15cc44: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x15cc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x15cc48: 0x24e700b0  addiu       $a3, $a3, 0xB0
    ctx->pc = 0x15cc48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x15cc4c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x15cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15cc50: 0x80e90000  lb          $t1, 0x0($a3)
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15cc54: 0x64402a  slt         $t0, $v1, $a0
    ctx->pc = 0x15cc54u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15cc58: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x15cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x15cc5c: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x15cc60: 0x918b0041  lbu         $t3, 0x41($t4)
    ctx->pc = 0x15cc60u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 65)));
    // 0x15cc64: 0x918a0042  lbu         $t2, 0x42($t4)
    ctx->pc = 0x15cc64u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 66)));
    // 0x15cc68: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cc68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x15cc6c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15cc6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x15cc70: 0xa1890042  sb          $t1, 0x42($t4)
    ctx->pc = 0x15cc70u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 66), (uint8_t)GPR_U32(ctx, 9));
    // 0x15cc74: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15cc74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15cc78: 0x80e90004  lb          $t1, 0x4($a3)
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15cc7c: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15cc7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x15cc80: 0x918b0091  lbu         $t3, 0x91($t4)
    ctx->pc = 0x15cc80u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 145)));
    // 0x15cc84: 0x918a0092  lbu         $t2, 0x92($t4)
    ctx->pc = 0x15cc84u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 146)));
    // 0x15cc88: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cc88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x15cc8c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15cc8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x15cc90: 0xa1890092  sb          $t1, 0x92($t4)
    ctx->pc = 0x15cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 146), (uint8_t)GPR_U32(ctx, 9));
    // 0x15cc94: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15cc94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15cc98: 0x80e90008  lb          $t1, 0x8($a3)
    ctx->pc = 0x15cc98u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x15cc9c: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15cc9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x15cca0: 0x918b00e1  lbu         $t3, 0xE1($t4)
    ctx->pc = 0x15cca0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 225)));
    // 0x15cca4: 0x918a00e2  lbu         $t2, 0xE2($t4)
    ctx->pc = 0x15cca4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 226)));
    // 0x15cca8: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cca8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x15ccac: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15ccacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x15ccb0: 0xa18900e2  sb          $t1, 0xE2($t4)
    ctx->pc = 0x15ccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 226), (uint8_t)GPR_U32(ctx, 9));
    // 0x15ccb4: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15ccb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15ccb8: 0x80e9000c  lb          $t1, 0xC($a3)
    ctx->pc = 0x15ccb8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x15ccbc: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15ccbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x15ccc0: 0x918b0131  lbu         $t3, 0x131($t4)
    ctx->pc = 0x15ccc0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 305)));
    // 0x15ccc4: 0x918a0132  lbu         $t2, 0x132($t4)
    ctx->pc = 0x15ccc4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 306)));
    // 0x15ccc8: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15ccc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x15cccc: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15ccccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x15ccd0: 0xa1890132  sb          $t1, 0x132($t4)
    ctx->pc = 0x15ccd0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 306), (uint8_t)GPR_U32(ctx, 9));
    // 0x15ccd4: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15ccd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15ccd8: 0x80e90010  lb          $t1, 0x10($a3)
    ctx->pc = 0x15ccd8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15ccdc: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15ccdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x15cce0: 0x918b0181  lbu         $t3, 0x181($t4)
    ctx->pc = 0x15cce0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 385)));
    // 0x15cce4: 0x918a0182  lbu         $t2, 0x182($t4)
    ctx->pc = 0x15cce4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 386)));
    // 0x15cce8: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cce8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x15ccec: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15ccecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x15ccf0: 0xa1890182  sb          $t1, 0x182($t4)
    ctx->pc = 0x15ccf0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 386), (uint8_t)GPR_U32(ctx, 9));
    // 0x15ccf4: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15ccf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15ccf8: 0x80e90014  lb          $t1, 0x14($a3)
    ctx->pc = 0x15ccf8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x15ccfc: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15ccfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x15cd00: 0x918b01d1  lbu         $t3, 0x1D1($t4)
    ctx->pc = 0x15cd00u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 465)));
    // 0x15cd04: 0x918a01d2  lbu         $t2, 0x1D2($t4)
    ctx->pc = 0x15cd04u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 466)));
    // 0x15cd08: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cd08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x15cd0c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15cd0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x15cd10: 0xa18901d2  sb          $t1, 0x1D2($t4)
    ctx->pc = 0x15cd10u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 466), (uint8_t)GPR_U32(ctx, 9));
    // 0x15cd14: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15cd14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15cd18: 0x80e90018  lb          $t1, 0x18($a3)
    ctx->pc = 0x15cd18u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x15cd1c: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15cd1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x15cd20: 0x918b0221  lbu         $t3, 0x221($t4)
    ctx->pc = 0x15cd20u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 545)));
    // 0x15cd24: 0x918a0222  lbu         $t2, 0x222($t4)
    ctx->pc = 0x15cd24u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 546)));
    // 0x15cd28: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cd28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x15cd2c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15cd2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x15cd30: 0xa1890222  sb          $t1, 0x222($t4)
    ctx->pc = 0x15cd30u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 546), (uint8_t)GPR_U32(ctx, 9));
    // 0x15cd34: 0x8ea92c1c  lw          $t1, 0x2C1C($s5)
    ctx->pc = 0x15cd34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15cd38: 0x80e7001c  lb          $a3, 0x1C($a3)
    ctx->pc = 0x15cd38u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x15cd3c: 0x1255821  addu        $t3, $t1, $a1
    ctx->pc = 0x15cd3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x15cd40: 0x916a0271  lbu         $t2, 0x271($t3)
    ctx->pc = 0x15cd40u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 625)));
    // 0x15cd44: 0x24a50280  addiu       $a1, $a1, 0x280
    ctx->pc = 0x15cd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x15cd48: 0x91690272  lbu         $t1, 0x272($t3)
    ctx->pc = 0x15cd48u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 626)));
    // 0x15cd4c: 0x1473825  or          $a3, $t2, $a3
    ctx->pc = 0x15cd4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x15cd50: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x15cd50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x15cd54: 0x1500ffba  bnez        $t0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x15CD54u;
    {
        const bool branch_taken_0x15cd54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD54u;
        // 0x15cd58: 0xa1670272  sb          $a3, 0x272($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 626), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd54) {
            ctx->pc = 0x15CC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cc40;
        }
    }
    ctx->pc = 0x15CD5Cu;
}
