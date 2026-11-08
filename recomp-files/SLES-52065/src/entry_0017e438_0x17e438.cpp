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

// Function: entry_0017e438
// Address: 0x17e438 - 0x17e454
void entry_0017e438_0x17e438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e438_0x17e438");
#endif

    switch (ctx->pc) {
        case 0x17e440u: goto label_17e440;
        default: break;
    }

    ctx->pc = 0x17e438u;

    // 0x17e438: 0xc051198  jal         func_144660
    ctx->pc = 0x17E438u;
    SET_GPR_U32(ctx, 31, 0x17E440u);
    ctx->pc = 0x144660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144660u, 0x17E438u, 0x17E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E440u;
label_17e440:
    // 0x17e440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e444: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E444u;
    {
        const bool branch_taken_0x17e444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e444) {
            ctx->pc = 0x17E454u;
            return;
        }
    }
    ctx->pc = 0x17E44Cu;
    // 0x17e44c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17E44Cu;
    {
        const bool branch_taken_0x17e44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E44Cu;
        // 0x17e450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e44c) {
            ctx->pc = 0x17E494u;
            return;
        }
    }
    ctx->pc = 0x17E454u;
}
