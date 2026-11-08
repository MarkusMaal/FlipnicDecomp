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

// Function: entry_001f0f4c
// Address: 0x1f0f4c - 0x1f0f70
void entry_001f0f4c_0x1f0f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0f4c_0x1f0f4c");
#endif

    switch (ctx->pc) {
        case 0x1f0f58u: goto label_1f0f58;
        case 0x1f0f68u: goto label_1f0f68;
        default: break;
    }

    ctx->pc = 0x1f0f4cu;

    // 0x1f0f4c: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1f0f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f0f50: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0F50u;
    SET_GPR_U32(ctx, 31, 0x1F0F58u);
    ctx->pc = 0x1F0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F50u;
    // 0x1f0f54: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0F50u, 0x1F0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F58u;
label_1f0f58:
    // 0x1f0f58: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0F58u;
    {
        const bool branch_taken_0x1f0f58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f58) {
            ctx->pc = 0x1F0F70u;
            return;
        }
    }
    ctx->pc = 0x1F0F60u;
    // 0x1f0f60: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0F60u;
    SET_GPR_U32(ctx, 31, 0x1F0F68u);
    ctx->pc = 0x1F0F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F60u;
    // 0x1f0f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0F60u, 0x1F0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F68u;
label_1f0f68:
    // 0x1f0f68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0F68u;
    {
        const bool branch_taken_0x1f0f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F68u;
        // 0x1f0f6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f68) {
            ctx->pc = 0x1F0F84u;
            return;
        }
    }
    ctx->pc = 0x1F0F70u;
}
