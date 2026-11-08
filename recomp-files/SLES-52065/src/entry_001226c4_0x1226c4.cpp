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

// Function: entry_001226c4
// Address: 0x1226c4 - 0x1226e4
void entry_001226c4_0x1226c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001226c4_0x1226c4");
#endif

    ctx->pc = 0x1226c4u;

    // 0x1226c4: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1226c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1226c8: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1226C8u;
    {
        const bool branch_taken_0x1226c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226C8u;
        // 0x1226cc: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226c8) {
            ctx->pc = 0x122724u;
            return;
        }
    }
    ctx->pc = 0x1226D0u;
    // 0x1226d0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1226d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1226D4u;
    {
        const bool branch_taken_0x1226d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226D4u;
        // 0x1226d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226d4) {
            ctx->pc = 0x1226E4u;
            return;
        }
    }
    ctx->pc = 0x1226DCu;
    // 0x1226dc: 0xc048990  jal         func_122640
    ctx->pc = 0x1226DCu;
    SET_GPR_U32(ctx, 31, 0x1226E4u);
    ctx->pc = 0x122640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122640u, 0x1226DCu, 0x1226E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226E4u;
}
