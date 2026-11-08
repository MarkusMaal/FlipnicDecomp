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

// Function: entry_0018ac30
// Address: 0x18ac30 - 0x18ac44
void entry_0018ac30_0x18ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ac30_0x18ac30");
#endif

    ctx->pc = 0x18ac30u;

    // 0x18ac30: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18ac34: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC34u;
    {
        const bool branch_taken_0x18ac34 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18ac34) {
            ctx->pc = 0x18AC44u;
            return;
        }
    }
    ctx->pc = 0x18AC3Cu;
    // 0x18ac3c: 0xc076654  jal         func_1D9950
    ctx->pc = 0x18AC3Cu;
    SET_GPR_U32(ctx, 31, 0x18AC44u);
    ctx->pc = 0x18AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC3Cu;
    // 0x18ac40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x18AC3Cu, 0x18AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC44u;
}
