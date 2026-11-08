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

// Function: entry_001bb2e8
// Address: 0x1bb2e8 - 0x1bb308
void entry_001bb2e8_0x1bb2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb2e8_0x1bb2e8");
#endif

    ctx->pc = 0x1bb2e8u;

    // 0x1bb2e8: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1bb2e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bb2ec: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BB2ECu;
    {
        const bool branch_taken_0x1bb2ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2ECu;
        // 0x1bb2f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2ec) {
            ctx->pc = 0x1BB33Cu;
            return;
        }
    }
    ctx->pc = 0x1BB2F4u;
    // 0x1bb2f4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb2f8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB2F8u;
    {
        const bool branch_taken_0x1bb2f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2F8u;
        // 0x1bb2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2f8) {
            ctx->pc = 0x1BB308u;
            return;
        }
    }
    ctx->pc = 0x1BB300u;
    // 0x1bb300: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB300u;
    SET_GPR_U32(ctx, 31, 0x1BB308u);
    ctx->pc = 0x1BB270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB270u, 0x1BB300u, 0x1BB308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB308u;
}
