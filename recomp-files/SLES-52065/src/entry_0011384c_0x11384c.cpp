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

// Function: entry_0011384c
// Address: 0x11384c - 0x11387c
void entry_0011384c_0x11384c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011384c_0x11384c");
#endif

    switch (ctx->pc) {
        case 0x113874u: goto label_113874;
        default: break;
    }

    ctx->pc = 0x11384cu;

    // 0x11384c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11384cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113854: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113858: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x113858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11385c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11385cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113868: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x113868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11386c: 0xc043da0  jal         func_10F680
    ctx->pc = 0x11386Cu;
    SET_GPR_U32(ctx, 31, 0x113874u);
    ctx->pc = 0x113870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11386Cu;
    // 0x113870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x11386Cu, 0x113874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113874u;
label_113874:
    // 0x113874: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x113874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x113878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x11387cu;
}
