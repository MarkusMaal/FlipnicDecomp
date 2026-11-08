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

// Function: entry_001105d4
// Address: 0x1105d4 - 0x110604
void entry_001105d4_0x1105d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001105d4_0x1105d4");
#endif

    switch (ctx->pc) {
        case 0x1105fcu: goto label_1105fc;
        default: break;
    }

    ctx->pc = 0x1105d4u;

    // 0x1105d4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1105d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1105d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1105d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1105dc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1105dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1105e0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1105e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1105e4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1105e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1105e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1105e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1105ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1105ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1105f0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1105f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1105f4: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1105F4u;
    SET_GPR_U32(ctx, 31, 0x1105FCu);
    ctx->pc = 0x1105F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105F4u;
    // 0x1105f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1105F4u, 0x1105FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105FCu;
label_1105fc:
    // 0x1105fc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1105fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x110600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x110600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x110604u;
}
