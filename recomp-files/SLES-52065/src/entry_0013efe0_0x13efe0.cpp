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

// Function: entry_0013efe0
// Address: 0x13efe0 - 0x13effc
void entry_0013efe0_0x13efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013efe0_0x13efe0");
#endif

    switch (ctx->pc) {
        case 0x13efe8u: goto label_13efe8;
        default: break;
    }

    ctx->pc = 0x13efe0u;

    // 0x13efe0: 0xc04c888  jal         func_132220
    ctx->pc = 0x13EFE0u;
    SET_GPR_U32(ctx, 31, 0x13EFE8u);
    ctx->pc = 0x13EFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EFE0u;
    // 0x13efe4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132220u, 0x13EFE0u, 0x13EFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFE8u;
label_13efe8:
    // 0x13efe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13efec: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x13efecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x13eff0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13eff4: 0xc05068c  jal         func_141A30
    ctx->pc = 0x13EFF4u;
    SET_GPR_U32(ctx, 31, 0x13EFFCu);
    ctx->pc = 0x13EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EFF4u;
    // 0x13eff8: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A30u, 0x13EFF4u, 0x13EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFFCu;
}
