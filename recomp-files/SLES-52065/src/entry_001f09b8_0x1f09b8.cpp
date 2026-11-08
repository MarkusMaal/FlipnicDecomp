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

// Function: entry_001f09b8
// Address: 0x1f09b8 - 0x1f09dc
void entry_001f09b8_0x1f09b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f09b8_0x1f09b8");
#endif

    switch (ctx->pc) {
        case 0x1f09c4u: goto label_1f09c4;
        case 0x1f09d4u: goto label_1f09d4;
        default: break;
    }

    ctx->pc = 0x1f09b8u;

    // 0x1f09b8: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f09b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f09bc: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F09BCu;
    SET_GPR_U32(ctx, 31, 0x1F09C4u);
    ctx->pc = 0x1F09C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09BCu;
    // 0x1f09c0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F09BCu, 0x1F09C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09C4u;
label_1f09c4:
    // 0x1f09c4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F09C4u;
    {
        const bool branch_taken_0x1f09c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f09c4) {
            ctx->pc = 0x1F09DCu;
            return;
        }
    }
    ctx->pc = 0x1F09CCu;
    // 0x1f09cc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F09CCu;
    SET_GPR_U32(ctx, 31, 0x1F09D4u);
    ctx->pc = 0x1F09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09CCu;
    // 0x1f09d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F09CCu, 0x1F09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09D4u;
label_1f09d4:
    // 0x1f09d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F09D4u;
    {
        const bool branch_taken_0x1f09d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09D4u;
        // 0x1f09d8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09d4) {
            ctx->pc = 0x1F09F0u;
            return;
        }
    }
    ctx->pc = 0x1F09DCu;
}
