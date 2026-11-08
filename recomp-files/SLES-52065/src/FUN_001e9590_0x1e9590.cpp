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

// Function: FUN_001e9590
// Address: 0x1e9590 - 0x1e95c4
void FUN_001e9590_0x1e9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9590_0x1e9590");
#endif

    switch (ctx->pc) {
        case 0x1e9590u: goto label_1e9590;
        case 0x1e9594u: goto label_1e9594;
        case 0x1e9598u: goto label_1e9598;
        case 0x1e959cu: goto label_1e959c;
        case 0x1e95a0u: goto label_1e95a0;
        case 0x1e95a4u: goto label_1e95a4;
        case 0x1e95a8u: goto label_1e95a8;
        case 0x1e95acu: goto label_1e95ac;
        case 0x1e95b0u: goto label_1e95b0;
        case 0x1e95b4u: goto label_1e95b4;
        case 0x1e95b8u: goto label_1e95b8;
        case 0x1e95bcu: goto label_1e95bc;
        case 0x1e95c0u: goto label_1e95c0;
        default: break;
    }

    ctx->pc = 0x1e9590u;

label_1e9590:
    // 0x1e9590: 0x8f210000  lw          $at, 0x0($t9)
    ctx->pc = 0x1e9590u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_1e9594:
    // 0x1e9594: 0x8f380004  lw          $t8, 0x4($t9)
    ctx->pc = 0x1e9594u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
label_1e9598:
    // 0x1e9598: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e9598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e959c:
    // 0x1e959c: 0x7000007  bltz        $t8, . + 4 + (0x7 << 2)
label_1e95a0:
    if (ctx->pc == 0x1E95A0u) {
        ctx->pc = 0x1E95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E959Cu;
        // 0x1e95a0: 0x812021  addu        $a0, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E95A4u;
        goto label_1e95a4;
    }
    ctx->pc = 0x1E959Cu;
    {
        const bool branch_taken_0x1e959c = (GPR_S32(ctx, 24) < 0);
        ctx->pc = 0x1E95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E959Cu;
        // 0x1e95a0: 0x812021  addu        $a0, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e959c) {
            ctx->pc = 0x1E95BCu;
            goto label_1e95bc;
        }
    }
    ctx->pc = 0x1E95A4u;
label_1e95a4:
    // 0x1e95a4: 0x99c821  addu        $t9, $a0, $t9
    ctx->pc = 0x1e95a4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
label_1e95a8:
    // 0x1e95a8: 0x8f390000  lw          $t9, 0x0($t9)
    ctx->pc = 0x1e95a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_1e95ac:
    // 0x1e95ac: 0x0  nop
    ctx->pc = 0x1e95acu;
    // NOP
label_1e95b0:
    // 0x1e95b0: 0x338c821  addu        $t9, $t9, $t8
    ctx->pc = 0x1e95b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
label_1e95b4:
    // 0x1e95b4: 0x8f390000  lw          $t9, 0x0($t9)
    ctx->pc = 0x1e95b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_1e95b8:
    // 0x1e95b8: 0x0  nop
    ctx->pc = 0x1e95b8u;
    // NOP
label_1e95bc:
    // 0x1e95bc: 0x3200008  jr          $t9
label_1e95c0:
    if (ctx->pc == 0x1E95C0u) {
        ctx->pc = 0x1E95C4u;
        goto label_fallthrough_0x1e95bc;
    }
    ctx->pc = 0x1E95BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E95BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1e95bc:
    ctx->pc = 0x1E95C4u;
}
