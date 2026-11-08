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

// Function: entry_001b6820
// Address: 0x1b6820 - 0x1b6838
void entry_001b6820_0x1b6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6820_0x1b6820");
#endif

    switch (ctx->pc) {
        case 0x1b6828u: goto label_1b6828;
        default: break;
    }

    ctx->pc = 0x1b6820u;

    // 0x1b6820: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6820u;
    SET_GPR_U32(ctx, 31, 0x1B6828u);
    ctx->pc = 0x1B6824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6820u;
    // 0x1b6824: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6820u, 0x1B6828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6828u;
label_1b6828:
    // 0x1b6828: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6828u;
    {
        const bool branch_taken_0x1b6828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6828) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6830u;
    // 0x1b6830: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1B6830u;
    SET_GPR_U32(ctx, 31, 0x1B6838u);
    ctx->pc = 0x1B6834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6830u;
    // 0x1b6834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1B6830u, 0x1B6838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6838u;
}
