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

// Function: entry_001b6b68
// Address: 0x1b6b68 - 0x1b6b80
void entry_001b6b68_0x1b6b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b68_0x1b6b68");
#endif

    switch (ctx->pc) {
        case 0x1b6b7cu: goto label_1b6b7c;
        default: break;
    }

    ctx->pc = 0x1b6b68u;

    // 0x1b6b68: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1b6b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b6b6c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6B6Cu;
    {
        const bool branch_taken_0x1b6b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B6Cu;
        // 0x1b6b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b6c) {
            ctx->pc = 0x1B6B80u;
            return;
        }
    }
    ctx->pc = 0x1B6B74u;
    // 0x1b6b74: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6B74u;
    SET_GPR_U32(ctx, 31, 0x1B6B7Cu);
    ctx->pc = 0x1B6B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B74u;
    // 0x1b6b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6B74u, 0x1B6B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B7Cu;
label_1b6b7c:
    // 0x1b6b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6b80u;
}
