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

// Function: entry_001aa9a8
// Address: 0x1aa9a8 - 0x1aa9c4
void entry_001aa9a8_0x1aa9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa9a8_0x1aa9a8");
#endif

    ctx->pc = 0x1aa9a8u;

    // 0x1aa9a8: 0x8ea30710  lw          $v1, 0x710($s5)
    ctx->pc = 0x1aa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1808)));
    // 0x1aa9ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aa9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1aa9b0: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA9B0u;
    {
        const bool branch_taken_0x1aa9b0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9B0u;
        // 0x1aa9b4: 0xaea30710  sw          $v1, 0x710($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1808), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9b0) {
            ctx->pc = 0x1AA9C4u;
            return;
        }
    }
    ctx->pc = 0x1AA9B8u;
    // 0x1aa9b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1aa9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9bc: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AA9BCu;
    SET_GPR_U32(ctx, 31, 0x1AA9C4u);
    ctx->pc = 0x1AA9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9BCu;
    // 0x1aa9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AA9BCu, 0x1AA9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9C4u;
}
