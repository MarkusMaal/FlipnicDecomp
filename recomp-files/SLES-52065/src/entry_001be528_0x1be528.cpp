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

// Function: entry_001be528
// Address: 0x1be528 - 0x1be548
void entry_001be528_0x1be528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be528_0x1be528");
#endif

    ctx->pc = 0x1be528u;

    // 0x1be528: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1be528u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1be52c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BE52Cu;
    {
        const bool branch_taken_0x1be52c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE52Cu;
        // 0x1be530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be52c) {
            ctx->pc = 0x1BE57Cu;
            return;
        }
    }
    ctx->pc = 0x1BE534u;
    // 0x1be534: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be538: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE538u;
    {
        const bool branch_taken_0x1be538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE538u;
        // 0x1be53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be538) {
            ctx->pc = 0x1BE548u;
            return;
        }
    }
    ctx->pc = 0x1BE540u;
    // 0x1be540: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE540u;
    SET_GPR_U32(ctx, 31, 0x1BE548u);
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE540u, 0x1BE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE548u;
}
