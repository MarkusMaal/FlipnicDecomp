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

// Function: entry_001ce368
// Address: 0x1ce368 - 0x1ce38c
void entry_001ce368_0x1ce368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce368_0x1ce368");
#endif

    switch (ctx->pc) {
        case 0x1ce370u: goto label_1ce370;
        case 0x1ce384u: goto label_1ce384;
        default: break;
    }

    ctx->pc = 0x1ce368u;

    // 0x1ce368: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CE368u;
    SET_GPR_U32(ctx, 31, 0x1CE370u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CE368u, 0x1CE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE370u;
label_1ce370:
    // 0x1ce370: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce374: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ce374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce37c: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CE37Cu;
    SET_GPR_U32(ctx, 31, 0x1CE384u);
    ctx->pc = 0x1CE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE37Cu;
    // 0x1ce380: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CE37Cu, 0x1CE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE384u;
label_1ce384:
    // 0x1ce384: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE384u;
    {
        const bool branch_taken_0x1ce384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE384u;
        // 0x1ce388: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce384) {
            ctx->pc = 0x1CE3A4u;
            return;
        }
    }
    ctx->pc = 0x1CE38Cu;
}
