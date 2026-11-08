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

// Function: entry_00110b4c
// Address: 0x110b4c - 0x110b7c
void entry_00110b4c_0x110b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110b4c_0x110b4c");
#endif

    switch (ctx->pc) {
        case 0x110b74u: goto label_110b74;
        default: break;
    }

    ctx->pc = 0x110b4cu;

    // 0x110b4c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b54: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110b58: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x110b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x110b5c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110b5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110b68: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110b6c: 0xc043da0  jal         func_10F680
    ctx->pc = 0x110B6Cu;
    SET_GPR_U32(ctx, 31, 0x110B74u);
    ctx->pc = 0x110B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B6Cu;
    // 0x110b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x110B6Cu, 0x110B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B74u;
label_110b74:
    // 0x110b74: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x110b74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x110b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x110b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x110b7cu;
}
