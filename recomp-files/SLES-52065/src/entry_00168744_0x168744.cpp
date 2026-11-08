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

// Function: entry_00168744
// Address: 0x168744 - 0x168764
void entry_00168744_0x168744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168744_0x168744");
#endif

    switch (ctx->pc) {
        case 0x168754u: goto label_168754;
        case 0x168760u: goto label_168760;
        default: break;
    }

    ctx->pc = 0x168744u;

label_168744:
    // 0x168744: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x168744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_168748:
    // 0x168748: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x168748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_16874c:
    // 0x16874c: 0x320f809  jalr        $t9
label_168750:
    if (ctx->pc == 0x168750u) {
        ctx->pc = 0x168754u;
        goto label_168754;
    }
    ctx->pc = 0x16874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168754u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16874Cu, 0x168754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x168754u;
label_168754:
    // 0x168754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168758:
    // 0x168758: 0xc0564c8  jal         func_159320
label_16875c:
    if (ctx->pc == 0x16875Cu) {
        ctx->pc = 0x16875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168758u;
        // 0x16875c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168760u;
        goto label_168760;
    }
    ctx->pc = 0x168758u;
    SET_GPR_U32(ctx, 31, 0x168760u);
    ctx->pc = 0x16875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168758u;
    // 0x16875c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159320u, 0x168758u, 0x168760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168760u;
label_168760:
    // 0x168760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x168764u;
}
