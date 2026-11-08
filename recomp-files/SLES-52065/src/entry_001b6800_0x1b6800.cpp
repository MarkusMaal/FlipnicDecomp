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

// Function: entry_001b6800
// Address: 0x1b6800 - 0x1b6820
void entry_001b6800_0x1b6800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6800_0x1b6800");
#endif

    switch (ctx->pc) {
        case 0x1b6808u: goto label_1b6808;
        case 0x1b6818u: goto label_1b6818;
        default: break;
    }

    ctx->pc = 0x1b6800u;

    // 0x1b6800: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6800u;
    SET_GPR_U32(ctx, 31, 0x1B6808u);
    ctx->pc = 0x1B6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6800u;
    // 0x1b6804: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6800u, 0x1B6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6808u;
label_1b6808:
    // 0x1b6808: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6808u;
    {
        const bool branch_taken_0x1b6808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6808) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6810u;
    // 0x1b6810: 0xc073ec0  jal         func_1CFB00
    ctx->pc = 0x1B6810u;
    SET_GPR_U32(ctx, 31, 0x1B6818u);
    ctx->pc = 0x1B6814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6810u;
    // 0x1b6814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFB00u, 0x1B6810u, 0x1B6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6818u;
label_1b6818:
    // 0x1b6818: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6818u;
    {
        const bool branch_taken_0x1b6818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6818) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6820u;
}
