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

// Function: entry_0010a3c0
// Address: 0x10a3c0 - 0x10a3d0
void entry_0010a3c0_0x10a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a3c0_0x10a3c0");
#endif

    ctx->pc = 0x10a3c0u;

    // 0x10a3c0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x10a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x10a3c4: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x10a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10a3c8: 0xc057424  jal         func_15D090
    ctx->pc = 0x10A3C8u;
    SET_GPR_U32(ctx, 31, 0x10A3D0u);
    ctx->pc = 0x10A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3C8u;
    // 0x10a3cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D090u, 0x10A3C8u, 0x10A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3D0u;
}
