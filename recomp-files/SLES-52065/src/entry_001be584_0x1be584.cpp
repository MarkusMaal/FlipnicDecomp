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

// Function: entry_001be584
// Address: 0x1be584 - 0x1be5b0
void entry_001be584_0x1be584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be584_0x1be584");
#endif

    ctx->pc = 0x1be584u;

    // 0x1be584: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1be588: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BE588u;
    {
        const bool branch_taken_0x1be588 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE588u;
        // 0x1be58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be588) {
            ctx->pc = 0x1BE640u;
            return;
        }
    }
    ctx->pc = 0x1BE590u;
    // 0x1be590: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1be590u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1be594: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE594u;
    {
        const bool branch_taken_0x1be594 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be594) {
            ctx->pc = 0x1BE5E0u;
            return;
        }
    }
    ctx->pc = 0x1BE59Cu;
    // 0x1be59c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be5a0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE5A0u;
    {
        const bool branch_taken_0x1be5a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5A0u;
        // 0x1be5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5a0) {
            ctx->pc = 0x1BE5B0u;
            return;
        }
    }
    ctx->pc = 0x1BE5A8u;
    // 0x1be5a8: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE5A8u;
    SET_GPR_U32(ctx, 31, 0x1BE5B0u);
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE5A8u, 0x1BE5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5B0u;
}
