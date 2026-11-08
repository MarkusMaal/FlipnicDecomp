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

// Function: entry_0014e72c
// Address: 0x14e72c - 0x14e74c
void entry_0014e72c_0x14e72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e72c_0x14e72c");
#endif

    switch (ctx->pc) {
        case 0x14e734u: goto label_14e734;
        case 0x14e740u: goto label_14e740;
        default: break;
    }

    ctx->pc = 0x14e72cu;

label_14e72c:
    // 0x14e72c: 0xc0539e8  jal         func_14E7A0
    ctx->pc = 0x14E72Cu;
    SET_GPR_U32(ctx, 31, 0x14E734u);
    ctx->pc = 0x14E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E72Cu;
    // 0x14e730: 0x2631fff4  addiu       $s1, $s1, -0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7A0u, 0x14E72Cu, 0x14E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E734u;
label_14e734:
    // 0x14e734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e738: 0xc05363c  jal         func_14D8F0
    ctx->pc = 0x14E738u;
    SET_GPR_U32(ctx, 31, 0x14E740u);
    ctx->pc = 0x14E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E738u;
    // 0x14e73c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D8F0u, 0x14E738u, 0x14E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E740u;
label_14e740:
    // 0x14e740: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14e740u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e744: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14E744u;
    {
        const bool branch_taken_0x14e744 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E744u;
        // 0x14e748: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e744) {
            ctx->pc = 0x14E72Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e72c;
        }
    }
    ctx->pc = 0x14E74Cu;
}
