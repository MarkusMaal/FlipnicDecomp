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

// Function: entry_00190e20
// Address: 0x190e20 - 0x190e54
void entry_00190e20_0x190e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190e20_0x190e20");
#endif

    switch (ctx->pc) {
        case 0x190e28u: goto label_190e28;
        case 0x190e38u: goto label_190e38;
        case 0x190e44u: goto label_190e44;
        default: break;
    }

    ctx->pc = 0x190e20u;

    // 0x190e20: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x190E20u;
    SET_GPR_U32(ctx, 31, 0x190E28u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x190E20u, 0x190E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E28u;
label_190e28:
    // 0x190e28: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x190E28u;
    {
        const bool branch_taken_0x190e28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x190e28) {
            ctx->pc = 0x190E54u;
            return;
        }
    }
    ctx->pc = 0x190E30u;
    // 0x190e30: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x190E30u;
    SET_GPR_U32(ctx, 31, 0x190E38u);
    ctx->pc = 0x190E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E30u;
    // 0x190e34: 0x8e300028  lw          $s0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x190E30u, 0x190E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E38u;
label_190e38:
    // 0x190e38: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x190e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x190e3c: 0xc067f0c  jal         func_19FC30
    ctx->pc = 0x190E3Cu;
    SET_GPR_U32(ctx, 31, 0x190E44u);
    ctx->pc = 0x190E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E3Cu;
    // 0x190e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x190E3Cu, 0x190E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E44u;
label_190e44:
    // 0x190e44: 0x16020214  bne         $s0, $v0, . + 4 + (0x214 << 2)
    ctx->pc = 0x190E44u;
    {
        const bool branch_taken_0x190e44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x190e44) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x190E4Cu;
    // 0x190e4c: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x190E4Cu;
    {
        const bool branch_taken_0x190e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E4Cu;
        // 0x190e50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e4c) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190E54u;
}
