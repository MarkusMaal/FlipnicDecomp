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

// Function: entry_001edb20
// Address: 0x1edb20 - 0x1edb68
void entry_001edb20_0x1edb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edb20_0x1edb20");
#endif

    switch (ctx->pc) {
        case 0x1edb60u: goto label_1edb60;
        default: break;
    }

    ctx->pc = 0x1edb20u;

    // 0x1edb20: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EDB20u;
    {
        const bool branch_taken_0x1edb20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1EDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB20u;
        // 0x1edb24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb20) {
            ctx->pc = 0x1EDB68u;
            return;
        }
    }
    ctx->pc = 0x1EDB28u;
    // 0x1edb28: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1edb28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1edb2c: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1edb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1edb30: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x1edb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x1edb34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1edb34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edb38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1edb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1edb3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1edb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1edb40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1edb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1edb44: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x1edb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x1edb48: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1edb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1edb4c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1edb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1edb50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDB50u;
    {
        const bool branch_taken_0x1edb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB50u;
        // 0x1edb54: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb50) {
            ctx->pc = 0x1EDB74u;
            return;
        }
    }
    ctx->pc = 0x1EDB58u;
    // 0x1edb58: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EDB58u;
    SET_GPR_U32(ctx, 31, 0x1EDB60u);
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EDB58u, 0x1EDB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB60u;
label_1edb60:
    // 0x1edb60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDB60u;
    {
        const bool branch_taken_0x1edb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB60u;
        // 0x1edb64: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb60) {
            ctx->pc = 0x1EDB78u;
            return;
        }
    }
    ctx->pc = 0x1EDB68u;
}
