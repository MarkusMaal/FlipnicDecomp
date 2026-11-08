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

// Function: entry_001e5da0
// Address: 0x1e5da0 - 0x1e5dbc
void entry_001e5da0_0x1e5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5da0_0x1e5da0");
#endif

    switch (ctx->pc) {
        case 0x1e5da8u: goto label_1e5da8;
        default: break;
    }

    ctx->pc = 0x1e5da0u;

    // 0x1e5da0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E5DA0u;
    SET_GPR_U32(ctx, 31, 0x1E5DA8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E5DA0u, 0x1E5DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DA8u;
label_1e5da8:
    // 0x1e5da8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5DA8u;
    {
        const bool branch_taken_0x1e5da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DA8u;
        // 0x1e5dac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5da8) {
            ctx->pc = 0x1E5DBCu;
            return;
        }
    }
    ctx->pc = 0x1E5DB0u;
    // 0x1e5db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5db4: 0xc079b20  jal         func_1E6C80
    ctx->pc = 0x1E5DB4u;
    SET_GPR_U32(ctx, 31, 0x1E5DBCu);
    ctx->pc = 0x1E5DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DB4u;
    // 0x1e5db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6C80u, 0x1E5DB4u, 0x1E5DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DBCu;
}
