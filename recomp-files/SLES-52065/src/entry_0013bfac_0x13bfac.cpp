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

// Function: entry_0013bfac
// Address: 0x13bfac - 0x13bfc0
void entry_0013bfac_0x13bfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bfac_0x13bfac");
#endif

    switch (ctx->pc) {
        case 0x13bfb4u: goto label_13bfb4;
        case 0x13bfbcu: goto label_13bfbc;
        default: break;
    }

    ctx->pc = 0x13bfacu;

    // 0x13bfac: 0xc04eedc  jal         func_13BB70
    ctx->pc = 0x13BFACu;
    SET_GPR_U32(ctx, 31, 0x13BFB4u);
    ctx->pc = 0x13BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB70u, 0x13BFACu, 0x13BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFB4u;
label_13bfb4:
    // 0x13bfb4: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x13BFB4u;
    SET_GPR_U32(ctx, 31, 0x13BFBCu);
    ctx->pc = 0x13BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BFB4u;
    // 0x13bfb8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x13BFB4u, 0x13BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFBCu;
label_13bfbc:
    // 0x13bfbc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x13bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x13bfc0u;
}
