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

// Function: entry_001ae700
// Address: 0x1ae700 - 0x1ae71c
void entry_001ae700_0x1ae700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae700_0x1ae700");
#endif

    switch (ctx->pc) {
        case 0x1ae708u: goto label_1ae708;
        default: break;
    }

    ctx->pc = 0x1ae700u;

label_1ae700:
    // 0x1ae700: 0xc063e14  jal         func_18F850
label_1ae704:
    if (ctx->pc == 0x1AE704u) {
        ctx->pc = 0x1AE708u;
        goto label_1ae708;
    }
    ctx->pc = 0x1AE700u;
    SET_GPR_U32(ctx, 31, 0x1AE708u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE700u, 0x1AE708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE708u;
label_1ae708:
    // 0x1ae708: 0x8e8406c4  lw          $a0, 0x6C4($s4)
    ctx->pc = 0x1ae708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1732)));
label_1ae70c:
    // 0x1ae70c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ae70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae710:
    // 0x1ae710: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ae710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ae714:
    // 0x1ae714: 0x320f809  jalr        $t9
label_1ae718:
    if (ctx->pc == 0x1AE718u) {
        ctx->pc = 0x1AE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE714u;
        // 0x1ae718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE71Cu;
        goto label_fallthrough_0x1ae714;
    }
    ctx->pc = 0x1AE714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE71Cu);
        ctx->pc = 0x1AE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE714u;
        // 0x1ae718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE714u, 0x1AE71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ae714:
    ctx->pc = 0x1AE71Cu;
}
