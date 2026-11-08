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

// Function: entry_00190e7c
// Address: 0x190e7c - 0x190eb0
void entry_00190e7c_0x190e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190e7c_0x190e7c");
#endif

    switch (ctx->pc) {
        case 0x190e84u: goto label_190e84;
        case 0x190e94u: goto label_190e94;
        case 0x190ea0u: goto label_190ea0;
        default: break;
    }

    ctx->pc = 0x190e7cu;

    // 0x190e7c: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x190E7Cu;
    SET_GPR_U32(ctx, 31, 0x190E84u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x190E7Cu, 0x190E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E84u;
label_190e84:
    // 0x190e84: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x190E84u;
    {
        const bool branch_taken_0x190e84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x190e84) {
            ctx->pc = 0x190EB0u;
            return;
        }
    }
    ctx->pc = 0x190E8Cu;
    // 0x190e8c: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x190E8Cu;
    SET_GPR_U32(ctx, 31, 0x190E94u);
    ctx->pc = 0x190E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E8Cu;
    // 0x190e90: 0x8e300028  lw          $s0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x190E8Cu, 0x190E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E94u;
label_190e94:
    // 0x190e94: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x190e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x190e98: 0xc067f0c  jal         func_19FC30
    ctx->pc = 0x190E98u;
    SET_GPR_U32(ctx, 31, 0x190EA0u);
    ctx->pc = 0x190E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E98u;
    // 0x190e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x190E98u, 0x190EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190EA0u;
label_190ea0:
    // 0x190ea0: 0x120201fd  beq         $s0, $v0, . + 4 + (0x1FD << 2)
    ctx->pc = 0x190EA0u;
    {
        const bool branch_taken_0x190ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x190ea0) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x190EA8u;
    // 0x190ea8: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x190EA8u;
    {
        const bool branch_taken_0x190ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EA8u;
        // 0x190eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ea8) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190EB0u;
}
