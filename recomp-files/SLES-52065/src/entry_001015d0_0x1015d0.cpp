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

// Function: entry_001015d0
// Address: 0x1015d0 - 0x1015e4
void entry_001015d0_0x1015d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001015d0_0x1015d0");
#endif

    ctx->pc = 0x1015d0u;

    // 0x1015d0: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1015D0u;
    {
        const bool branch_taken_0x1015d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1015D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015D0u;
        // 0x1015d4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015d0) {
            ctx->pc = 0x1015E4u;
            return;
        }
    }
    ctx->pc = 0x1015D8u;
    // 0x1015d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1015d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1015dc: 0xc080664  jal         func_201990
    ctx->pc = 0x1015DCu;
    SET_GPR_U32(ctx, 31, 0x1015E4u);
    ctx->pc = 0x1015E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015DCu;
    // 0x1015e0: 0x24a5dfd0  addiu       $a1, $a1, -0x2030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1015DCu, 0x1015E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015E4u;
}
