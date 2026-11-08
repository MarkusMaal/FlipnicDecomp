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

// Function: entry_001bcac0
// Address: 0x1bcac0 - 0x1bcad8
void entry_001bcac0_0x1bcac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcac0_0x1bcac0");
#endif

    switch (ctx->pc) {
        case 0x1bcac8u: goto label_1bcac8;
        default: break;
    }

    ctx->pc = 0x1bcac0u;

    // 0x1bcac0: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCAC0u;
    SET_GPR_U32(ctx, 31, 0x1BCAC8u);
    ctx->pc = 0x1BCAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAC0u;
    // 0x1bcac4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCAC0u, 0x1BCAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAC8u;
label_1bcac8:
    // 0x1bcac8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BCAC8u;
    {
        const bool branch_taken_0x1bcac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcac8) {
            ctx->pc = 0x1BCAF8u;
            return;
        }
    }
    ctx->pc = 0x1BCAD0u;
    // 0x1bcad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCAD0u;
    {
        const bool branch_taken_0x1bcad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcad0) {
            ctx->pc = 0x1BCAE0u;
            return;
        }
    }
    ctx->pc = 0x1BCAD8u;
}
