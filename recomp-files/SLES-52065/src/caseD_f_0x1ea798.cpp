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

// Function: caseD_f
// Address: 0x1ea798 - 0x1ea7d4
void caseD_f_0x1ea798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1ea798");
#endif

    switch (ctx->pc) {
        case 0x1ea7a8u: goto label_1ea7a8;
        case 0x1ea7b4u: goto label_1ea7b4;
        case 0x1ea7c0u: goto label_1ea7c0;
        default: break;
    }

    ctx->pc = 0x1ea798u;

    // 0x1ea798: 0x12e80016  beq         $s7, $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EA798u;
    {
        const bool branch_taken_0x1ea798 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 8));
        ctx->pc = 0x1EA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA798u;
        // 0x1ea79c: 0x25040001  addiu       $a0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea798) {
            ctx->pc = 0x1EA7F4u;
            return;
        }
    }
    ctx->pc = 0x1EA7A0u;
    // 0x1ea7a0: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA7A0u;
    SET_GPR_U32(ctx, 31, 0x1EA7A8u);
    ctx->pc = 0x1EA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7A0u;
    // 0x1ea7a4: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA7A0u, 0x1EA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7A8u;
label_1ea7a8:
    // 0x1ea7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7ac: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA7ACu;
    SET_GPR_U32(ctx, 31, 0x1EA7B4u);
    ctx->pc = 0x1EA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7ACu;
    // 0x1ea7b0: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA7ACu, 0x1EA7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7B4u;
label_1ea7b4:
    // 0x1ea7b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7b8: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA7B8u;
    SET_GPR_U32(ctx, 31, 0x1EA7C0u);
    ctx->pc = 0x1EA7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7B8u;
    // 0x1ea7bc: 0x27a50104  addiu       $a1, $sp, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA7B8u, 0x1EA7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7C0u;
label_1ea7c0:
    // 0x1ea7c0: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1ea7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1ea7c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ea7c8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ea7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea7cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA7CCu;
    {
        const bool branch_taken_0x1ea7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7CCu;
        // 0x1ea7d0: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7cc) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
    ctx->pc = 0x1EA7D4u;
}
