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

// Function: entry_00130d60
// Address: 0x130d60 - 0x130d78
void entry_00130d60_0x130d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d60_0x130d60");
#endif

    switch (ctx->pc) {
        case 0x130d74u: goto label_130d74;
        default: break;
    }

    ctx->pc = 0x130d60u;

    // 0x130d60: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130d64: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130D64u;
    {
        const bool branch_taken_0x130d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D64u;
        // 0x130d68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d64) {
            ctx->pc = 0x130D78u;
            return;
        }
    }
    ctx->pc = 0x130D6Cu;
    // 0x130d6c: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130D6Cu;
    SET_GPR_U32(ctx, 31, 0x130D74u);
    ctx->pc = 0x130D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D6Cu;
    // 0x130d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x130D6Cu, 0x130D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D74u;
label_130d74:
    // 0x130d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130d78u;
}
