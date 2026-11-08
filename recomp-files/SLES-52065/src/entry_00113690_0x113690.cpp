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

// Function: entry_00113690
// Address: 0x113690 - 0x1136c0
void entry_00113690_0x113690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113690_0x113690");
#endif

    switch (ctx->pc) {
        case 0x1136b8u: goto label_1136b8;
        default: break;
    }

    ctx->pc = 0x113690u;

    // 0x113690: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x113690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113698: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11369c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1136a0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1136a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1136a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1136a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1136a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1136a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1136ac: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1136acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1136b0: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1136B0u;
    SET_GPR_U32(ctx, 31, 0x1136B8u);
    ctx->pc = 0x1136B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136B0u;
    // 0x1136b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1136B0u, 0x1136B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136B8u;
label_1136b8:
    // 0x1136b8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1136b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1136bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1136bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1136c0u;
}
