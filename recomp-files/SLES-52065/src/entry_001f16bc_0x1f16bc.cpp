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

// Function: entry_001f16bc
// Address: 0x1f16bc - 0x1f16e0
void entry_001f16bc_0x1f16bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f16bc_0x1f16bc");
#endif

    switch (ctx->pc) {
        case 0x1f16c8u: goto label_1f16c8;
        case 0x1f16d8u: goto label_1f16d8;
        default: break;
    }

    ctx->pc = 0x1f16bcu;

    // 0x1f16bc: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1f16bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1f16c0: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F16C0u;
    SET_GPR_U32(ctx, 31, 0x1F16C8u);
    ctx->pc = 0x1F16C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16C0u;
    // 0x1f16c4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F16C0u, 0x1F16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16C8u;
label_1f16c8:
    // 0x1f16c8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F16C8u;
    {
        const bool branch_taken_0x1f16c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f16c8) {
            ctx->pc = 0x1F16E0u;
            return;
        }
    }
    ctx->pc = 0x1F16D0u;
    // 0x1f16d0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F16D0u;
    SET_GPR_U32(ctx, 31, 0x1F16D8u);
    ctx->pc = 0x1F16D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16D0u;
    // 0x1f16d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F16D0u, 0x1F16D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16D8u;
label_1f16d8:
    // 0x1f16d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F16D8u;
    {
        const bool branch_taken_0x1f16d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16D8u;
        // 0x1f16dc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16d8) {
            ctx->pc = 0x1F16F4u;
            return;
        }
    }
    ctx->pc = 0x1F16E0u;
}
