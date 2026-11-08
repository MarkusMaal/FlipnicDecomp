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

// Function: entry_001deb4c
// Address: 0x1deb4c - 0x1deb64
void entry_001deb4c_0x1deb4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deb4c_0x1deb4c");
#endif

    switch (ctx->pc) {
        case 0x1deb54u: goto label_1deb54;
        default: break;
    }

    ctx->pc = 0x1deb4cu;

    // 0x1deb4c: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DEB4Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB54u);
    ctx->pc = 0x1DEB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB4Cu;
    // 0x1deb50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DEB4Cu, 0x1DEB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB54u;
label_1deb54:
    // 0x1deb54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1deb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1deb58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1deb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1deb5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1deb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1deb60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1deb60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1deb64u;
}
