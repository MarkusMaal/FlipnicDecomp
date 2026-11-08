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

// Function: entry_0013c3c0
// Address: 0x13c3c0 - 0x13c3dc
void entry_0013c3c0_0x13c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c3c0_0x13c3c0");
#endif

    ctx->pc = 0x13c3c0u;

    // 0x13c3c0: 0x26440190  addiu       $a0, $s2, 0x190
    ctx->pc = 0x13c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
    // 0x13c3c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C3C4u;
    {
        const bool branch_taken_0x13c3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c3c4) {
            ctx->pc = 0x13C3DCu;
            return;
        }
    }
    ctx->pc = 0x13C3CCu;
    // 0x13c3cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C3CCu;
    {
        const bool branch_taken_0x13c3cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3CCu;
        // 0x13c3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3cc) {
            ctx->pc = 0x13C3DCu;
            return;
        }
    }
    ctx->pc = 0x13C3D4u;
    // 0x13c3d4: 0xc048414  jal         func_121050
    ctx->pc = 0x13C3D4u;
    SET_GPR_U32(ctx, 31, 0x13C3DCu);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x13C3D4u, 0x13C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3DCu;
}
