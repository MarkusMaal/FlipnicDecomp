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

// Function: entry_0019f2f0
// Address: 0x19f2f0 - 0x19f310
void entry_0019f2f0_0x19f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f2f0_0x19f2f0");
#endif

    switch (ctx->pc) {
        case 0x19f308u: goto label_19f308;
        default: break;
    }

    ctx->pc = 0x19f2f0u;

    // 0x19f2f0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19f2f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f2fc: 0xa040002e  sb          $zero, 0x2E($v0)
    ctx->pc = 0x19f2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f300: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F300u;
    SET_GPR_U32(ctx, 31, 0x19F308u);
    ctx->pc = 0x19F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F300u;
    // 0x19f304: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F300u, 0x19F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F308u;
label_19f308:
    // 0x19f308: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x19F308u;
    {
        const bool branch_taken_0x19f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f308) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F310u;
}
