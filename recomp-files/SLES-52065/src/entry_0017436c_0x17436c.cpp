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

// Function: entry_0017436c
// Address: 0x17436c - 0x174380
void entry_0017436c_0x17436c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017436c_0x17436c");
#endif

    switch (ctx->pc) {
        case 0x174378u: goto label_174378;
        default: break;
    }

    ctx->pc = 0x17436cu;

    // 0x17436c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17436cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x174370: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x174370u;
    SET_GPR_U32(ctx, 31, 0x174378u);
    ctx->pc = 0x174374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174370u;
    // 0x174374: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x174370u, 0x174378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174378u;
label_174378:
    // 0x174378: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x174378u;
    {
        const bool branch_taken_0x174378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174378u;
        // 0x17437c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174378) {
            ctx->pc = 0x1744C8u;
            return;
        }
    }
    ctx->pc = 0x174380u;
}
