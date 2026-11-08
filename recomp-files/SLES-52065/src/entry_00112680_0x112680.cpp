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

// Function: entry_00112680
// Address: 0x112680 - 0x1126b0
void entry_00112680_0x112680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112680_0x112680");
#endif

    switch (ctx->pc) {
        case 0x1126a8u: goto label_1126a8;
        default: break;
    }

    ctx->pc = 0x112680u;

    // 0x112680: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x112680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112684: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x112684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112688: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11268c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x11268cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x112690: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112690u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11269c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x11269cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1126a0: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1126A0u;
    SET_GPR_U32(ctx, 31, 0x1126A8u);
    ctx->pc = 0x1126A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126A0u;
    // 0x1126a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1126A0u, 0x1126A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126A8u;
label_1126a8:
    // 0x1126a8: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1126a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1126ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1126acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1126b0u;
}
