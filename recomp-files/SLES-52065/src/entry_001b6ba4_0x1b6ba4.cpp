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

// Function: entry_001b6ba4
// Address: 0x1b6ba4 - 0x1b6bd0
void entry_001b6ba4_0x1b6ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6ba4_0x1b6ba4");
#endif

    ctx->pc = 0x1b6ba4u;

    // 0x1b6ba4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1b6ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6ba8: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B6BA8u;
    {
        const bool branch_taken_0x1b6ba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BA8u;
        // 0x1b6bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ba8) {
            ctx->pc = 0x1B6C60u;
            return;
        }
    }
    ctx->pc = 0x1B6BB0u;
    // 0x1b6bb0: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1b6bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b6bb4: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B6BB4u;
    {
        const bool branch_taken_0x1b6bb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6bb4) {
            ctx->pc = 0x1B6C00u;
            return;
        }
    }
    ctx->pc = 0x1B6BBCu;
    // 0x1b6bbc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1b6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b6bc0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6BC0u;
    {
        const bool branch_taken_0x1b6bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BC0u;
        // 0x1b6bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bc0) {
            ctx->pc = 0x1B6BD0u;
            return;
        }
    }
    ctx->pc = 0x1B6BC8u;
    // 0x1b6bc8: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6BC8u;
    SET_GPR_U32(ctx, 31, 0x1B6BD0u);
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6BC8u, 0x1B6BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BD0u;
}
