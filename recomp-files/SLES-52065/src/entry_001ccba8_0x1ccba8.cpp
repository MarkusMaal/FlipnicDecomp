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

// Function: entry_001ccba8
// Address: 0x1ccba8 - 0x1ccbe4
void entry_001ccba8_0x1ccba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccba8_0x1ccba8");
#endif

    switch (ctx->pc) {
        case 0x1ccbb0u: goto label_1ccbb0;
        case 0x1ccbd0u: goto label_1ccbd0;
        case 0x1ccbdcu: goto label_1ccbdc;
        default: break;
    }

    ctx->pc = 0x1ccba8u;

    // 0x1ccba8: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CCBA8u;
    SET_GPR_U32(ctx, 31, 0x1CCBB0u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CCBA8u, 0x1CCBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBB0u;
label_1ccbb0:
    // 0x1ccbb0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1ccbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ccbb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ccbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ccbb8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CCBB8u;
    {
        const bool branch_taken_0x1ccbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBB8u;
        // 0x1ccbbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbb8) {
            ctx->pc = 0x1CCBE4u;
            return;
        }
    }
    ctx->pc = 0x1CCBC0u;
    // 0x1ccbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ccbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccbc8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCBC8u;
    SET_GPR_U32(ctx, 31, 0x1CCBD0u);
    ctx->pc = 0x1CCBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBC8u;
    // 0x1ccbcc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCBC8u, 0x1CCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBD0u;
label_1ccbd0:
    // 0x1ccbd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbd4: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CCBD4u;
    SET_GPR_U32(ctx, 31, 0x1CCBDCu);
    ctx->pc = 0x1CCBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBD4u;
    // 0x1ccbd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CCBD4u, 0x1CCBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBDCu;
label_1ccbdc:
    // 0x1ccbdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCBDCu;
    {
        const bool branch_taken_0x1ccbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBDCu;
        // 0x1ccbe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbdc) {
            ctx->pc = 0x1CCC00u;
            return;
        }
    }
    ctx->pc = 0x1CCBE4u;
}
