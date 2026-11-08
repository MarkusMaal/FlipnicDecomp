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

// Function: entry_0011e708
// Address: 0x11e708 - 0x11e734
void entry_0011e708_0x11e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e708_0x11e708");
#endif

    switch (ctx->pc) {
        case 0x11e714u: goto label_11e714;
        case 0x11e720u: goto label_11e720;
        default: break;
    }

    ctx->pc = 0x11e708u;

    // 0x11e708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e70c: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11E70Cu;
    SET_GPR_U32(ctx, 31, 0x11E714u);
    ctx->pc = 0x11E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E70Cu;
    // 0x11e710: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11E70Cu, 0x11E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E714u;
label_11e714:
    // 0x11e714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e718: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11E718u;
    SET_GPR_U32(ctx, 31, 0x11E720u);
    ctx->pc = 0x11E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E718u;
    // 0x11e71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11E718u, 0x11E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E720u;
label_11e720:
    // 0x11e720: 0x260307ff  addiu       $v1, $s0, 0x7FF
    ctx->pc = 0x11e720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
    // 0x11e724: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E724u;
    {
        const bool branch_taken_0x11e724 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E724u;
        // 0x11e728: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e724) {
            ctx->pc = 0x11E734u;
            return;
        }
    }
    ctx->pc = 0x11E72Cu;
    // 0x11e72c: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x11e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11e730: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x11e730u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    ctx->pc = 0x11e734u;
}
