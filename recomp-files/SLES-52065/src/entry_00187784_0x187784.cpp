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

// Function: entry_00187784
// Address: 0x187784 - 0x1877b0
void entry_00187784_0x187784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187784_0x187784");
#endif

    ctx->pc = 0x187784u;

    // 0x187784: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x187784u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x187788: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x187788u;
    {
        const bool branch_taken_0x187788 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187788u;
        // 0x18778c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187788) {
            ctx->pc = 0x187840u;
            return;
        }
    }
    ctx->pc = 0x187790u;
    // 0x187790: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x187790u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187794: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x187794u;
    {
        const bool branch_taken_0x187794 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x187794) {
            ctx->pc = 0x1877E0u;
            return;
        }
    }
    ctx->pc = 0x18779Cu;
    // 0x18779c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x18779cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1877a0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1877A0u;
    {
        const bool branch_taken_0x1877a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877A0u;
        // 0x1877a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877a0) {
            ctx->pc = 0x1877B0u;
            return;
        }
    }
    ctx->pc = 0x1877A8u;
    // 0x1877a8: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x1877A8u;
    SET_GPR_U32(ctx, 31, 0x1877B0u);
    ctx->pc = 0x1876B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876B0u, 0x1877A8u, 0x1877B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877B0u;
}
