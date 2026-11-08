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

// Function: entry_0011248c
// Address: 0x11248c - 0x1124bc
void entry_0011248c_0x11248c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011248c_0x11248c");
#endif

    switch (ctx->pc) {
        case 0x1124b4u: goto label_1124b4;
        default: break;
    }

    ctx->pc = 0x11248cu;

    // 0x11248c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x112490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112494: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112498: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x112498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11249c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11249cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1124a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1124a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1124a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1124a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1124a8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1124a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1124ac: 0xc043da0  jal         func_10F680
    ctx->pc = 0x1124ACu;
    SET_GPR_U32(ctx, 31, 0x1124B4u);
    ctx->pc = 0x1124B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124ACu;
    // 0x1124b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x1124ACu, 0x1124B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124B4u;
label_1124b4:
    // 0x1124b4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1124b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1124b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1124b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1124bcu;
}
