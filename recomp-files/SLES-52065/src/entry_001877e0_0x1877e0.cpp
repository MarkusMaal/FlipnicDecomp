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

// Function: entry_001877e0
// Address: 0x1877e0 - 0x187800
void entry_001877e0_0x1877e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001877e0_0x1877e0");
#endif

    ctx->pc = 0x1877e0u;

    // 0x1877e0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1877e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1877e4: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1877E4u;
    {
        const bool branch_taken_0x1877e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877E4u;
        // 0x1877e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877e4) {
            ctx->pc = 0x187834u;
            return;
        }
    }
    ctx->pc = 0x1877ECu;
    // 0x1877ec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1877ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1877f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1877F0u;
    {
        const bool branch_taken_0x1877f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877F0u;
        // 0x1877f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877f0) {
            ctx->pc = 0x187800u;
            return;
        }
    }
    ctx->pc = 0x1877F8u;
    // 0x1877f8: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x1877F8u;
    SET_GPR_U32(ctx, 31, 0x187800u);
    ctx->pc = 0x1876B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876B0u, 0x1877F8u, 0x187800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187800u;
}
