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

// Function: entry_001ecfa0
// Address: 0x1ecfa0 - 0x1ecfb4
void entry_001ecfa0_0x1ecfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecfa0_0x1ecfa0");
#endif

    switch (ctx->pc) {
        case 0x1ecfb0u: goto label_1ecfb0;
        default: break;
    }

    ctx->pc = 0x1ecfa0u;

    // 0x1ecfa0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1ecfa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1ecfa4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1ecfa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1ecfa8: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1ECFA8u;
    SET_GPR_U32(ctx, 31, 0x1ECFB0u);
    ctx->pc = 0x1ECFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECFA8u;
    // 0x1ecfac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1ECFA8u, 0x1ECFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFB0u;
label_1ecfb0:
    // 0x1ecfb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ecfb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ecfb4u;
}
