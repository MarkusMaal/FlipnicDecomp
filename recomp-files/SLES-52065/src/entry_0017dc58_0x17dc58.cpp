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

// Function: entry_0017dc58
// Address: 0x17dc58 - 0x17dc9c
void entry_0017dc58_0x17dc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc58_0x17dc58");
#endif

    switch (ctx->pc) {
        case 0x17dc94u: goto label_17dc94;
        default: break;
    }

    ctx->pc = 0x17dc58u;

    // 0x17dc58: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17dc5c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x17dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17dc60: 0x802026  xor         $a0, $a0, $zero
    ctx->pc = 0x17dc60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
    // 0x17dc64: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x17dc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x17dc68: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x17dc68u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17dc6c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x17dc6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17dc70: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x17dc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x17dc74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17dc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x17dc78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x17dc78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17dc7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17dc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17dc80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DC80u;
    {
        const bool branch_taken_0x17dc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC80u;
        // 0x17dc84: 0x27a40458  addiu       $a0, $sp, 0x458 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc80) {
            ctx->pc = 0x17DC9Cu;
            return;
        }
    }
    ctx->pc = 0x17DC88u;
    // 0x17dc88: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x17dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
    // 0x17dc8c: 0xc04619c  jal         func_118670
    ctx->pc = 0x17DC8Cu;
    SET_GPR_U32(ctx, 31, 0x17DC94u);
    ctx->pc = 0x17DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC8Cu;
    // 0x17dc90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17DC8Cu, 0x17DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC94u;
label_17dc94:
    // 0x17dc94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17DC94u;
    {
        const bool branch_taken_0x17dc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC94u;
        // 0x17dc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc94) {
            ctx->pc = 0x17DCA8u;
            return;
        }
    }
    ctx->pc = 0x17DC9Cu;
}
