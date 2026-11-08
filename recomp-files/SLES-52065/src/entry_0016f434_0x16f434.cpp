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

// Function: entry_0016f434
// Address: 0x16f434 - 0x16f44c
void entry_0016f434_0x16f434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f434_0x16f434");
#endif

    switch (ctx->pc) {
        case 0x16f43cu: goto label_16f43c;
        default: break;
    }

    ctx->pc = 0x16f434u;

    // 0x16f434: 0xc05bc60  jal         func_16F180
    ctx->pc = 0x16F434u;
    SET_GPR_U32(ctx, 31, 0x16F43Cu);
    ctx->pc = 0x16F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F434u;
    // 0x16f438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F180u, 0x16F434u, 0x16F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F43Cu;
label_16f43c:
    // 0x16f43c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F43Cu;
    {
        const bool branch_taken_0x16f43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f43c) {
            ctx->pc = 0x16F44Cu;
            return;
        }
    }
    ctx->pc = 0x16F444u;
    // 0x16f444: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16F444u;
    {
        const bool branch_taken_0x16f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F444u;
        // 0x16f448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f444) {
            ctx->pc = 0x16F464u;
            return;
        }
    }
    ctx->pc = 0x16F44Cu;
}
