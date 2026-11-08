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

// Function: entry_0011b12c
// Address: 0x11b12c - 0x11b140
void entry_0011b12c_0x11b12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b12c_0x11b12c");
#endif

    switch (ctx->pc) {
        case 0x11b138u: goto label_11b138;
        default: break;
    }

    ctx->pc = 0x11b12cu;

    // 0x11b12c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x11b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x11b130: 0xc046dd4  jal         func_11B750
    ctx->pc = 0x11B130u;
    SET_GPR_U32(ctx, 31, 0x11B138u);
    ctx->pc = 0x11B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B130u;
    // 0x11b134: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x11B130u, 0x11B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B138u;
label_11b138:
    // 0x11b138: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x11b138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11b13c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11b13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b140u;
}
