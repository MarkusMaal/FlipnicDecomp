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

// Function: entry_0018a6b0
// Address: 0x18a6b0 - 0x18a6c4
void entry_0018a6b0_0x18a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a6b0_0x18a6b0");
#endif

    ctx->pc = 0x18a6b0u;

    // 0x18a6b0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18a6b4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A6B4u;
    {
        const bool branch_taken_0x18a6b4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6B4u;
        // 0x18a6b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6b4) {
            ctx->pc = 0x18A6C4u;
            return;
        }
    }
    ctx->pc = 0x18A6BCu;
    // 0x18a6bc: 0xc076654  jal         func_1D9950
    ctx->pc = 0x18A6BCu;
    SET_GPR_U32(ctx, 31, 0x18A6C4u);
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x18A6BCu, 0x18A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6C4u;
}
