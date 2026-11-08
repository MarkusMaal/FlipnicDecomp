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

// Function: entry_0011b78c
// Address: 0x11b78c - 0x11b7d4
void entry_0011b78c_0x11b78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b78c_0x11b78c");
#endif

    switch (ctx->pc) {
        case 0x11b79cu: goto label_11b79c;
        case 0x11b7bcu: goto label_11b7bc;
        default: break;
    }

    ctx->pc = 0x11b78cu;

    // 0x11b78c: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x11B78Cu;
    {
        const bool branch_taken_0x11b78c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B78Cu;
        // 0x11b790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b78c) {
            ctx->pc = 0x11B824u;
            return;
        }
    }
    ctx->pc = 0x11B794u;
    // 0x11b794: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11B794u;
    SET_GPR_U32(ctx, 31, 0x11B79Cu);
    ctx->pc = 0x11B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B794u;
    // 0x11b798: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11B794u, 0x11B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B79Cu;
label_11b79c:
    // 0x11b79c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11B79Cu;
    {
        const bool branch_taken_0x11b79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b79c) {
            ctx->pc = 0x11B818u;
            return;
        }
    }
    ctx->pc = 0x11B7A4u;
    // 0x11b7a4: 0x8f8383c4  lw          $v1, -0x7C3C($gp)
    ctx->pc = 0x11b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935492)));
    // 0x11b7a8: 0x14750013  bne         $v1, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x11B7A8u;
    {
        const bool branch_taken_0x11b7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x11B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7A8u;
        // 0x11b7ac: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7a8) {
            ctx->pc = 0x11B7F8u;
            return;
        }
    }
    ctx->pc = 0x11B7B0u;
    // 0x11b7b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11b7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7b4: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11B7B4u;
    SET_GPR_U32(ctx, 31, 0x11B7BCu);
    ctx->pc = 0x11B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7B4u;
    // 0x11b7b8: 0x2484dae0  addiu       $a0, $a0, -0x2520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11B7B4u, 0x11B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7BCu;
label_11b7bc:
    // 0x11b7bc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11B7BCu;
    {
        const bool branch_taken_0x11b7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b7bc) {
            ctx->pc = 0x11B7F8u;
            return;
        }
    }
    ctx->pc = 0x11B7C4u;
    // 0x11b7c4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7C4u;
    {
        const bool branch_taken_0x11b7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7C4u;
        // 0x11b7c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7c4) {
            ctx->pc = 0x11B7D8u;
            return;
        }
    }
    ctx->pc = 0x11B7CCu;
    // 0x11b7cc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11B7CCu;
    SET_GPR_U32(ctx, 31, 0x11B7D4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11B7CCu, 0x11B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7D4u;
}
