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

// Function: entry_00130f60
// Address: 0x130f60 - 0x130f78
void entry_00130f60_0x130f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130f60_0x130f60");
#endif

    switch (ctx->pc) {
        case 0x130f74u: goto label_130f74;
        default: break;
    }

    ctx->pc = 0x130f60u;

    // 0x130f60: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130f64: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130F64u;
    {
        const bool branch_taken_0x130f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F64u;
        // 0x130f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f64) {
            ctx->pc = 0x130F78u;
            return;
        }
    }
    ctx->pc = 0x130F6Cu;
    // 0x130f6c: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130F6Cu;
    SET_GPR_U32(ctx, 31, 0x130F74u);
    ctx->pc = 0x130F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F6Cu;
    // 0x130f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130E10u, 0x130F6Cu, 0x130F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F74u;
label_130f74:
    // 0x130f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130f78u;
}
