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

// Function: entry_001f0b88
// Address: 0x1f0b88 - 0x1f0bac
void entry_001f0b88_0x1f0b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0b88_0x1f0b88");
#endif

    switch (ctx->pc) {
        case 0x1f0b94u: goto label_1f0b94;
        case 0x1f0ba4u: goto label_1f0ba4;
        default: break;
    }

    ctx->pc = 0x1f0b88u;

    // 0x1f0b88: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f0b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f0b8c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F0B94u);
    ctx->pc = 0x1F0B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B8Cu;
    // 0x1f0b90: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0B8Cu, 0x1F0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B94u;
label_1f0b94:
    // 0x1f0b94: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0B94u;
    {
        const bool branch_taken_0x1f0b94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b94) {
            ctx->pc = 0x1F0BACu;
            return;
        }
    }
    ctx->pc = 0x1F0B9Cu;
    // 0x1f0b9c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0B9Cu;
    SET_GPR_U32(ctx, 31, 0x1F0BA4u);
    ctx->pc = 0x1F0BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B9Cu;
    // 0x1f0ba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0B9Cu, 0x1F0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BA4u;
label_1f0ba4:
    // 0x1f0ba4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0BA4u;
    {
        const bool branch_taken_0x1f0ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BA4u;
        // 0x1f0ba8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ba4) {
            ctx->pc = 0x1F0BC0u;
            return;
        }
    }
    ctx->pc = 0x1F0BACu;
}
