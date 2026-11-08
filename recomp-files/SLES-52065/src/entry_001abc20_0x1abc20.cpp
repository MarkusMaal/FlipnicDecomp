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

// Function: entry_001abc20
// Address: 0x1abc20 - 0x1abc74
void entry_001abc20_0x1abc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abc20_0x1abc20");
#endif

    switch (ctx->pc) {
        case 0x1abc2cu: goto label_1abc2c;
        case 0x1abc38u: goto label_1abc38;
        case 0x1abc50u: goto label_1abc50;
        case 0x1abc5cu: goto label_1abc5c;
        default: break;
    }

    ctx->pc = 0x1abc20u;

    // 0x1abc20: 0x26040710  addiu       $a0, $s0, 0x710
    ctx->pc = 0x1abc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1808));
    // 0x1abc24: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1ABC24u;
    SET_GPR_U32(ctx, 31, 0x1ABC2Cu);
    ctx->pc = 0x1ABC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC24u;
    // 0x1abc28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1ABC24u, 0x1ABC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC2Cu;
label_1abc2c:
    // 0x1abc2c: 0x260406f0  addiu       $a0, $s0, 0x6F0
    ctx->pc = 0x1abc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
    // 0x1abc30: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x1ABC30u;
    SET_GPR_U32(ctx, 31, 0x1ABC38u);
    ctx->pc = 0x1ABC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC30u;
    // 0x1abc34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x1ABC30u, 0x1ABC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC38u;
label_1abc38:
    // 0x1abc38: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1abc38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1abc3c: 0x26040670  addiu       $a0, $s0, 0x670
    ctx->pc = 0x1abc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x1abc40: 0x24a5acd0  addiu       $a1, $a1, -0x5330
    ctx->pc = 0x1abc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946000));
    // 0x1abc44: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1abc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1abc48: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x1ABC48u;
    SET_GPR_U32(ctx, 31, 0x1ABC50u);
    ctx->pc = 0x1ABC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC48u;
    // 0x1abc4c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x1ABC48u, 0x1ABC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC50u;
label_1abc50:
    // 0x1abc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc54: 0xc064324  jal         func_190C90
    ctx->pc = 0x1ABC54u;
    SET_GPR_U32(ctx, 31, 0x1ABC5Cu);
    ctx->pc = 0x1ABC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC54u;
    // 0x1abc58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1ABC54u, 0x1ABC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC5Cu;
label_1abc5c:
    // 0x1abc5c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1abc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1abc60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1abc60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1abc64: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABC64u;
    {
        const bool branch_taken_0x1abc64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ABC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC64u;
        // 0x1abc68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc64) {
            ctx->pc = 0x1ABC78u;
            return;
        }
    }
    ctx->pc = 0x1ABC6Cu;
    // 0x1abc6c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1ABC6Cu;
    SET_GPR_U32(ctx, 31, 0x1ABC74u);
    ctx->pc = 0x1ABC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC6Cu;
    // 0x1abc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1ABC6Cu, 0x1ABC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC74u;
}
