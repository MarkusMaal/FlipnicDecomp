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

// Function: entry_001be5e0
// Address: 0x1be5e0 - 0x1be600
void entry_001be5e0_0x1be5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be5e0_0x1be5e0");
#endif

    ctx->pc = 0x1be5e0u;

    // 0x1be5e0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1be5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1be5e4: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BE5E4u;
    {
        const bool branch_taken_0x1be5e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5E4u;
        // 0x1be5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5e4) {
            ctx->pc = 0x1BE634u;
            return;
        }
    }
    ctx->pc = 0x1BE5ECu;
    // 0x1be5ec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be5f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE5F0u;
    {
        const bool branch_taken_0x1be5f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5F0u;
        // 0x1be5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5f0) {
            ctx->pc = 0x1BE600u;
            return;
        }
    }
    ctx->pc = 0x1BE5F8u;
    // 0x1be5f8: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE5F8u;
    SET_GPR_U32(ctx, 31, 0x1BE600u);
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE5F8u, 0x1BE600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE600u;
}
