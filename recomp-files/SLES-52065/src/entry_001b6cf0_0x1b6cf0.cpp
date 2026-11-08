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

// Function: entry_001b6cf0
// Address: 0x1b6cf0 - 0x1b6d08
void entry_001b6cf0_0x1b6cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6cf0_0x1b6cf0");
#endif

    switch (ctx->pc) {
        case 0x1b6d04u: goto label_1b6d04;
        default: break;
    }

    ctx->pc = 0x1b6cf0u;

    // 0x1b6cf0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1b6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b6cf4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6CF4u;
    {
        const bool branch_taken_0x1b6cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CF4u;
        // 0x1b6cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cf4) {
            ctx->pc = 0x1B6D08u;
            return;
        }
    }
    ctx->pc = 0x1B6CFCu;
    // 0x1b6cfc: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6CFCu;
    SET_GPR_U32(ctx, 31, 0x1B6D04u);
    ctx->pc = 0x1B6D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6CFCu;
    // 0x1b6d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6CFCu, 0x1B6D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D04u;
label_1b6d04:
    // 0x1b6d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6d08u;
}
