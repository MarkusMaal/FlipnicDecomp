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

// Function: entry_0010fee8
// Address: 0x10fee8 - 0x10ff18
void entry_0010fee8_0x10fee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fee8_0x10fee8");
#endif

    switch (ctx->pc) {
        case 0x10ff10u: goto label_10ff10;
        default: break;
    }

    ctx->pc = 0x10fee8u;

    // 0x10fee8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10feec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10feecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10fef0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10fef4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x10fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x10fef8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10fef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10fefc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10ff00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ff04: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x10ff08: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x10FF08u;
    SET_GPR_U32(ctx, 31, 0x10FF10u);
    ctx->pc = 0x10FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF08u;
    // 0x10ff0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x10FF08u, 0x10FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF10u;
label_10ff10:
    // 0x10ff10: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x10ff10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x10ff14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10ff14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x10ff18u;
}
