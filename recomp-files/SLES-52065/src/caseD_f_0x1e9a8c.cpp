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
// Address: 0x1e9a8c - 0x1e9ad4
void caseD_f_0x1e9a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1e9a8c");
#endif

    switch (ctx->pc) {
        case 0x1e9a9cu: goto label_1e9a9c;
        case 0x1e9aacu: goto label_1e9aac;
        case 0x1e9abcu: goto label_1e9abc;
        default: break;
    }

    ctx->pc = 0x1e9a8cu;

    // 0x1e9a8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9a90: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x1e9a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x1e9a94: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1E9A94u;
    SET_GPR_U32(ctx, 31, 0x1E9A9Cu);
    ctx->pc = 0x1E9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A94u;
    // 0x1e9a98: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1E9A94u, 0x1E9A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A9Cu;
label_1e9a9c:
    // 0x1e9a9c: 0x27b70384  addiu       $s7, $sp, 0x384
    ctx->pc = 0x1e9a9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 900));
    // 0x1e9aa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9aa4: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1E9AA4u;
    SET_GPR_U32(ctx, 31, 0x1E9AACu);
    ctx->pc = 0x1E9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AA4u;
    // 0x1e9aa8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1E9AA4u, 0x1E9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AACu;
label_1e9aac:
    // 0x1e9aac: 0x27be0388  addiu       $fp, $sp, 0x388
    ctx->pc = 0x1e9aacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
    // 0x1e9ab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ab4: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1E9AB4u;
    SET_GPR_U32(ctx, 31, 0x1E9ABCu);
    ctx->pc = 0x1E9AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AB4u;
    // 0x1e9ab8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1E9AB4u, 0x1E9ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9ABCu;
label_1e9abc:
    // 0x1e9abc: 0x27a3038c  addiu       $v1, $sp, 0x38C
    ctx->pc = 0x1e9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 908));
    // 0x1e9ac0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e9ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9ac4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1e9ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9ac8: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x1e9ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e9acc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E9ACCu;
    {
        const bool branch_taken_0x1e9acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9ACCu;
        // 0x1e9ad0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9acc) {
            ctx->pc = 0x1E9B30u;
            return;
        }
    }
    ctx->pc = 0x1E9AD4u;
}
