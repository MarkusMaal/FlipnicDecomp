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

// Function: entry_001deb9c
// Address: 0x1deb9c - 0x1debb4
void entry_001deb9c_0x1deb9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deb9c_0x1deb9c");
#endif

    switch (ctx->pc) {
        case 0x1deba4u: goto label_1deba4;
        default: break;
    }

    ctx->pc = 0x1deb9cu;

    // 0x1deb9c: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DEB9Cu;
    SET_GPR_U32(ctx, 31, 0x1DEBA4u);
    ctx->pc = 0x1DEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB9Cu;
    // 0x1deba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DEB9Cu, 0x1DEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBA4u;
label_1deba4:
    // 0x1deba4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1deba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1deba8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1deba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1debac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1debacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1debb0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1debb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1debb4u;
}
