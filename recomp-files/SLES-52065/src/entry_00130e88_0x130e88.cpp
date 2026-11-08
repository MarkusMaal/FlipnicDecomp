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

// Function: entry_00130e88
// Address: 0x130e88 - 0x130ea8
void entry_00130e88_0x130e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130e88_0x130e88");
#endif

    ctx->pc = 0x130e88u;

    // 0x130e88: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x130e88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130e8c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x130E8Cu;
    {
        const bool branch_taken_0x130e8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E8Cu;
        // 0x130e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e8c) {
            ctx->pc = 0x130EDCu;
            return;
        }
    }
    ctx->pc = 0x130E94u;
    // 0x130e94: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130e98: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130E98u;
    {
        const bool branch_taken_0x130e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E98u;
        // 0x130e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e98) {
            ctx->pc = 0x130EA8u;
            return;
        }
    }
    ctx->pc = 0x130EA0u;
    // 0x130ea0: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130EA0u;
    SET_GPR_U32(ctx, 31, 0x130EA8u);
    ctx->pc = 0x130E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130E10u, 0x130EA0u, 0x130EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EA8u;
}
