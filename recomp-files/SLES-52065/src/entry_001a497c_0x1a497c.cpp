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

// Function: entry_001a497c
// Address: 0x1a497c - 0x1a49a8
void entry_001a497c_0x1a497c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a497c_0x1a497c");
#endif

    switch (ctx->pc) {
        case 0x1a498cu: goto label_1a498c;
        default: break;
    }

    ctx->pc = 0x1a497cu;

    // 0x1a497c: 0x0  nop
    ctx->pc = 0x1a497cu;
    // NOP
    // 0x1a4980: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a4980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1a4984: 0xc04ad30  jal         func_12B4C0
    ctx->pc = 0x1A4984u;
    SET_GPR_U32(ctx, 31, 0x1A498Cu);
    ctx->pc = 0x1A4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4984u;
    // 0x1a4988: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B4C0u, 0x1A4984u, 0x1A498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A498Cu;
label_1a498c:
    // 0x1a498c: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1a4990: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4990u;
    {
        const bool branch_taken_0x1a4990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4990) {
            ctx->pc = 0x1A49A8u;
            return;
        }
    }
    ctx->pc = 0x1A4998u;
    // 0x1a4998: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1a4998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a499c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a49a0: 0xc064c20  jal         func_193080
    ctx->pc = 0x1A49A0u;
    SET_GPR_U32(ctx, 31, 0x1A49A8u);
    ctx->pc = 0x1A49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A49A0u;
    // 0x1a49a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x1A49A0u, 0x1A49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A49A8u;
}
