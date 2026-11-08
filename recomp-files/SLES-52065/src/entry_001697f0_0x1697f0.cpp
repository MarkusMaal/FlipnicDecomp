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

// Function: entry_001697f0
// Address: 0x1697f0 - 0x169808
void entry_001697f0_0x1697f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001697f0_0x1697f0");
#endif

    ctx->pc = 0x1697f0u;

label_1697f0:
    // 0x1697f0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_1697f4:
    if (ctx->pc == 0x1697F4u) {
        ctx->pc = 0x1697F8u;
        goto label_1697f8;
    }
    ctx->pc = 0x1697F0u;
    {
        const bool branch_taken_0x1697f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1697f0) {
            ctx->pc = 0x169808u;
            return;
        }
    }
    ctx->pc = 0x1697F8u;
label_1697f8:
    // 0x1697f8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1697f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1697fc:
    // 0x1697fc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1697fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169800:
    // 0x169800: 0x320f809  jalr        $t9
label_169804:
    if (ctx->pc == 0x169804u) {
        ctx->pc = 0x169804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169800u;
        // 0x169804: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169808u;
        goto label_fallthrough_0x169800;
    }
    ctx->pc = 0x169800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169808u);
        ctx->pc = 0x169804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169800u;
        // 0x169804: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169800u, 0x169808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x169800:
    ctx->pc = 0x169808u;
}
