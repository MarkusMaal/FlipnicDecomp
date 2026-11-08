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

// Function: entry_001227a4
// Address: 0x1227a4 - 0x1227c4
void entry_001227a4_0x1227a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001227a4_0x1227a4");
#endif

    ctx->pc = 0x1227a4u;

    // 0x1227a4: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1227a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1227a8: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1227A8u;
    {
        const bool branch_taken_0x1227a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227A8u;
        // 0x1227ac: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227a8) {
            ctx->pc = 0x122804u;
            return;
        }
    }
    ctx->pc = 0x1227B0u;
    // 0x1227b0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1227b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1227b4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1227B4u;
    {
        const bool branch_taken_0x1227b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227B4u;
        // 0x1227b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227b4) {
            ctx->pc = 0x1227C4u;
            return;
        }
    }
    ctx->pc = 0x1227BCu;
    // 0x1227bc: 0xc048990  jal         func_122640
    ctx->pc = 0x1227BCu;
    SET_GPR_U32(ctx, 31, 0x1227C4u);
    ctx->pc = 0x122640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122640u, 0x1227BCu, 0x1227C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227C4u;
}
