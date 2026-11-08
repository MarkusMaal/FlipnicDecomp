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

// Function: entry_0017e568
// Address: 0x17e568 - 0x17e584
void entry_0017e568_0x17e568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e568_0x17e568");
#endif

    switch (ctx->pc) {
        case 0x17e570u: goto label_17e570;
        default: break;
    }

    ctx->pc = 0x17e568u;

    // 0x17e568: 0xc051198  jal         func_144660
    ctx->pc = 0x17E568u;
    SET_GPR_U32(ctx, 31, 0x17E570u);
    ctx->pc = 0x144660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144660u, 0x17E568u, 0x17E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E570u;
label_17e570:
    // 0x17e570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e574: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E574u;
    {
        const bool branch_taken_0x17e574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e574) {
            ctx->pc = 0x17E584u;
            return;
        }
    }
    ctx->pc = 0x17E57Cu;
    // 0x17e57c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17E57Cu;
    {
        const bool branch_taken_0x17e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E57Cu;
        // 0x17e580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e57c) {
            ctx->pc = 0x17E5BCu;
            return;
        }
    }
    ctx->pc = 0x17E584u;
}
