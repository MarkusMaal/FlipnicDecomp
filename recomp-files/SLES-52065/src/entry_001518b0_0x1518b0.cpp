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

// Function: entry_001518b0
// Address: 0x1518b0 - 0x15194c
void entry_001518b0_0x1518b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001518b0_0x1518b0");
#endif

    ctx->pc = 0x1518b0u;

label_1518b0:
    // 0x1518b0: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1518b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1518b4: 0xcc100  sll         $t8, $t4, 4
    ctx->pc = 0x1518b4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1518b8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1518b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1518bc: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x1518bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1518c0: 0x165682a  slt         $t5, $t3, $a1
    ctx->pc = 0x1518c0u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1518c4: 0xa1ca0003  sb          $t2, 0x3($t6)
    ctx->pc = 0x1518c4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x1518c8: 0xa1c00002  sb          $zero, 0x2($t6)
    ctx->pc = 0x1518c8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1518cc: 0xadc40004  sw          $a0, 0x4($t6)
    ctx->pc = 0x1518ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 4));
    // 0x1518d0: 0xa5c90000  sh          $t1, 0x0($t6)
    ctx->pc = 0x1518d0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1518d4: 0xadc80008  sw          $t0, 0x8($t6)
    ctx->pc = 0x1518d4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 8));
    // 0x1518d8: 0xadc3000c  sw          $v1, 0xC($t6)
    ctx->pc = 0x1518d8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 3));
    // 0x1518dc: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1518dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1518e0: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x1518e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x1518e4: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x1518e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x1518e8: 0x8e2e0064  lw          $t6, 0x64($s1)
    ctx->pc = 0x1518e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1518ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1518ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1518f0: 0x1d87021  addu        $t6, $t6, $t8
    ctx->pc = 0x1518f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x1518f4: 0xa32a0003  sb          $t2, 0x3($t9)
    ctx->pc = 0x1518f4u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x1518f8: 0xa3200002  sb          $zero, 0x2($t9)
    ctx->pc = 0x1518f8u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1518fc: 0xaf2e0004  sw          $t6, 0x4($t9)
    ctx->pc = 0x1518fcu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 14));
    // 0x151900: 0xa7320000  sh          $s2, 0x0($t9)
    ctx->pc = 0x151900u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x151904: 0xaf280008  sw          $t0, 0x8($t9)
    ctx->pc = 0x151904u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 8));
    // 0x151908: 0xaf2f000c  sw          $t7, 0xC($t9)
    ctx->pc = 0x151908u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 15));
    // 0x15190c: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x15190cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151910: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x151910u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x151914: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x151914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x151918: 0x8f8e84e4  lw          $t6, -0x7B1C($gp)
    ctx->pc = 0x151918u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
    // 0x15191c: 0x8e180000  lw          $t8, 0x0($s0)
    ctx->pc = 0x15191cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151920: 0x1c77025  or          $t6, $t6, $a3
    ctx->pc = 0x151920u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 7));
    // 0x151924: 0xa3060003  sb          $a2, 0x3($t8)
    ctx->pc = 0x151924u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x151928: 0xa3000002  sb          $zero, 0x2($t8)
    ctx->pc = 0x151928u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15192c: 0xaf000004  sw          $zero, 0x4($t8)
    ctx->pc = 0x15192cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 0));
    // 0x151930: 0xa7000000  sh          $zero, 0x0($t8)
    ctx->pc = 0x151930u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x151934: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x151934u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
    // 0x151938: 0xaf0e000c  sw          $t6, 0xC($t8)
    ctx->pc = 0x151938u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 14));
    // 0x15193c: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x15193cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151940: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x151940u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x151944: 0x15a0ffda  bnez        $t5, . + 4 + (-0x26 << 2)
    ctx->pc = 0x151944u;
    {
        const bool branch_taken_0x151944 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x151948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151944u;
        // 0x151948: 0xae0e0000  sw          $t6, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151944) {
            ctx->pc = 0x1518B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1518b0;
        }
    }
    ctx->pc = 0x15194Cu;
}
