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

// Function: entry_001b6720
// Address: 0x1b6720 - 0x1b6740
void entry_001b6720_0x1b6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6720_0x1b6720");
#endif

    switch (ctx->pc) {
        case 0x1b6728u: goto label_1b6728;
        case 0x1b6738u: goto label_1b6738;
        default: break;
    }

    ctx->pc = 0x1b6720u;

    // 0x1b6720: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6720u;
    SET_GPR_U32(ctx, 31, 0x1B6728u);
    ctx->pc = 0x1B6724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6720u;
    // 0x1b6724: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6720u, 0x1B6728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6728u;
label_1b6728:
    // 0x1b6728: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1B6728u;
    {
        const bool branch_taken_0x1b6728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6728) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6730u;
    // 0x1b6730: 0xc074540  jal         func_1D1500
    ctx->pc = 0x1B6730u;
    SET_GPR_U32(ctx, 31, 0x1B6738u);
    ctx->pc = 0x1B6734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6730u;
    // 0x1b6734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1500u, 0x1B6730u, 0x1B6738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6738u;
label_1b6738:
    // 0x1b6738: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1B6738u;
    {
        const bool branch_taken_0x1b6738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6738) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6740u;
}
