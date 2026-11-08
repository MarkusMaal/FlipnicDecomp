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

// Function: entry_001b67e0
// Address: 0x1b67e0 - 0x1b6800
void entry_001b67e0_0x1b67e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b67e0_0x1b67e0");
#endif

    switch (ctx->pc) {
        case 0x1b67e8u: goto label_1b67e8;
        case 0x1b67f8u: goto label_1b67f8;
        default: break;
    }

    ctx->pc = 0x1b67e0u;

    // 0x1b67e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B67E0u;
    SET_GPR_U32(ctx, 31, 0x1B67E8u);
    ctx->pc = 0x1B67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67E0u;
    // 0x1b67e4: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B67E0u, 0x1B67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67E8u;
label_1b67e8:
    // 0x1b67e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B67E8u;
    {
        const bool branch_taken_0x1b67e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67e8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B67F0u;
    // 0x1b67f0: 0xc073b38  jal         func_1CECE0
    ctx->pc = 0x1B67F0u;
    SET_GPR_U32(ctx, 31, 0x1B67F8u);
    ctx->pc = 0x1B67F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67F0u;
    // 0x1b67f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECE0u, 0x1B67F0u, 0x1B67F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67F8u;
label_1b67f8:
    // 0x1b67f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B67F8u;
    {
        const bool branch_taken_0x1b67f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67f8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6800u;
}
