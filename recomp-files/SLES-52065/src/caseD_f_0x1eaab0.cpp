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
// Address: 0x1eaab0 - 0x1eaae8
void caseD_f_0x1eaab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1eaab0");
#endif

    switch (ctx->pc) {
        case 0x1eaabcu: goto label_1eaabc;
        case 0x1eaac8u: goto label_1eaac8;
        case 0x1eaad4u: goto label_1eaad4;
        default: break;
    }

    ctx->pc = 0x1eaab0u;

    // 0x1eaab0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1eaab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eaab4: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAAB4u;
    SET_GPR_U32(ctx, 31, 0x1EAABCu);
    ctx->pc = 0x1EAAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAB4u;
    // 0x1eaab8: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAAB4u, 0x1EAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAABCu;
label_1eaabc:
    // 0x1eaabc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eaabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaac0: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAAC0u;
    SET_GPR_U32(ctx, 31, 0x1EAAC8u);
    ctx->pc = 0x1EAAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAC0u;
    // 0x1eaac4: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAAC0u, 0x1EAAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAC8u;
label_1eaac8:
    // 0x1eaac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eaac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaacc: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAACCu;
    SET_GPR_U32(ctx, 31, 0x1EAAD4u);
    ctx->pc = 0x1EAAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAACCu;
    // 0x1eaad0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAACCu, 0x1EAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAD4u;
label_1eaad4:
    // 0x1eaad4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1eaad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1eaad8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eaad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eaadc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eaadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eaae0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EAAE0u;
    {
        const bool branch_taken_0x1eaae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAE0u;
        // 0x1eaae4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaae0) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EAAE8u;
}
