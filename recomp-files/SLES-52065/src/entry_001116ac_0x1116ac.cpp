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

// Function: entry_001116ac
// Address: 0x1116ac - 0x1116dc
void entry_001116ac_0x1116ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001116ac_0x1116ac");
#endif

    switch (ctx->pc) {
        case 0x1116d4u: goto label_1116d4;
        default: break;
    }

    ctx->pc = 0x1116acu;

    // 0x1116ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1116acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1116b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1116b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1116b4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1116b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1116b8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1116b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1116bc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1116bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1116c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1116c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1116c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1116c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1116c8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1116c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1116cc: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1116CCu;
    SET_GPR_U32(ctx, 31, 0x1116D4u);
    ctx->pc = 0x1116D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116CCu;
    // 0x1116d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1116CCu, 0x1116D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116D4u;
label_1116d4:
    // 0x1116d4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1116d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1116d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1116d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1116dcu;
}
