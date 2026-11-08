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

// Function: entry_00112884
// Address: 0x112884 - 0x1128b4
void entry_00112884_0x112884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112884_0x112884");
#endif

    switch (ctx->pc) {
        case 0x1128acu: goto label_1128ac;
        default: break;
    }

    ctx->pc = 0x112884u;

    // 0x112884: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x112884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112888: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x112888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11288c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112890: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x112894: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11289c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1128a0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1128a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1128a4: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1128A4u;
    SET_GPR_U32(ctx, 31, 0x1128ACu);
    ctx->pc = 0x1128A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128A4u;
    // 0x1128a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1128A4u, 0x1128ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128ACu;
label_1128ac:
    // 0x1128ac: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1128acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1128b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1128b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1128b4u;
}
