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

// Function: entry_00187728
// Address: 0x187728 - 0x187748
void entry_00187728_0x187728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187728_0x187728");
#endif

    ctx->pc = 0x187728u;

    // 0x187728: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x187728u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18772c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x18772Cu;
    {
        const bool branch_taken_0x18772c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x187730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18772Cu;
        // 0x187730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18772c) {
            ctx->pc = 0x18777Cu;
            return;
        }
    }
    ctx->pc = 0x187734u;
    // 0x187734: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x187734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x187738: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187738u;
    {
        const bool branch_taken_0x187738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187738u;
        // 0x18773c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187738) {
            ctx->pc = 0x187748u;
            return;
        }
    }
    ctx->pc = 0x187740u;
    // 0x187740: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x187740u;
    SET_GPR_U32(ctx, 31, 0x187748u);
    ctx->pc = 0x1876B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876B0u, 0x187740u, 0x187748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187748u;
}
