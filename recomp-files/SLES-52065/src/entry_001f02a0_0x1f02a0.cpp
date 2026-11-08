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

// Function: entry_001f02a0
// Address: 0x1f02a0 - 0x1f02c4
void entry_001f02a0_0x1f02a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f02a0_0x1f02a0");
#endif

    switch (ctx->pc) {
        case 0x1f02acu: goto label_1f02ac;
        case 0x1f02bcu: goto label_1f02bc;
        default: break;
    }

    ctx->pc = 0x1f02a0u;

    // 0x1f02a0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f02a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f02a4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F02A4u;
    SET_GPR_U32(ctx, 31, 0x1F02ACu);
    ctx->pc = 0x1F02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02A4u;
    // 0x1f02a8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F02A4u, 0x1F02ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02ACu;
label_1f02ac:
    // 0x1f02ac: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F02ACu;
    {
        const bool branch_taken_0x1f02ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02ACu;
        // 0x1f02b0: 0x32c28000  andi        $v0, $s6, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02ac) {
            ctx->pc = 0x1F02C4u;
            return;
        }
    }
    ctx->pc = 0x1F02B4u;
    // 0x1f02b4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F02B4u;
    SET_GPR_U32(ctx, 31, 0x1F02BCu);
    ctx->pc = 0x1F02B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02B4u;
    // 0x1f02b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F02B4u, 0x1F02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02BCu;
label_1f02bc:
    // 0x1f02bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F02BCu;
    {
        const bool branch_taken_0x1f02bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02BCu;
        // 0x1f02c0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02bc) {
            ctx->pc = 0x1F02F0u;
            return;
        }
    }
    ctx->pc = 0x1F02C4u;
}
