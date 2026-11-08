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

// Function: entry_00110824
// Address: 0x110824 - 0x110854
void entry_00110824_0x110824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110824_0x110824");
#endif

    switch (ctx->pc) {
        case 0x11084cu: goto label_11084c;
        default: break;
    }

    ctx->pc = 0x110824u;

    // 0x110824: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x110824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11082c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110830: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x110830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x110834: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11083c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110840: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110844: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x110844u;
    SET_GPR_U32(ctx, 31, 0x11084Cu);
    ctx->pc = 0x110848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110844u;
    // 0x110848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x110844u, 0x11084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11084Cu;
label_11084c:
    // 0x11084c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x11084cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x110850: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x110850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x110854u;
}
