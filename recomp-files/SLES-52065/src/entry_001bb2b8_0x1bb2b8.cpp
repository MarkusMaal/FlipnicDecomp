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

// Function: entry_001bb2b8
// Address: 0x1bb2b8 - 0x1bb2d0
void entry_001bb2b8_0x1bb2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb2b8_0x1bb2b8");
#endif

    switch (ctx->pc) {
        case 0x1bb2ccu: goto label_1bb2cc;
        default: break;
    }

    ctx->pc = 0x1bb2b8u;

    // 0x1bb2b8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb2bc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB2BCu;
    {
        const bool branch_taken_0x1bb2bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2BCu;
        // 0x1bb2c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2bc) {
            ctx->pc = 0x1BB2D0u;
            return;
        }
    }
    ctx->pc = 0x1BB2C4u;
    // 0x1bb2c4: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB2C4u;
    SET_GPR_U32(ctx, 31, 0x1BB2CCu);
    ctx->pc = 0x1BB2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2C4u;
    // 0x1bb2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB270u, 0x1BB2C4u, 0x1BB2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2CCu;
label_1bb2cc:
    // 0x1bb2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb2d0u;
}
