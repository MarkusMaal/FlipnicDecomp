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

// Function: entry_001f0810
// Address: 0x1f0810 - 0x1f0834
void entry_001f0810_0x1f0810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0810_0x1f0810");
#endif

    switch (ctx->pc) {
        case 0x1f081cu: goto label_1f081c;
        case 0x1f082cu: goto label_1f082c;
        default: break;
    }

    ctx->pc = 0x1f0810u;

    // 0x1f0810: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1f0810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1f0814: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0814u;
    SET_GPR_U32(ctx, 31, 0x1F081Cu);
    ctx->pc = 0x1F0818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0814u;
    // 0x1f0818: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0814u, 0x1F081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F081Cu;
label_1f081c:
    // 0x1f081c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F081Cu;
    {
        const bool branch_taken_0x1f081c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f081c) {
            ctx->pc = 0x1F0834u;
            return;
        }
    }
    ctx->pc = 0x1F0824u;
    // 0x1f0824: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0824u;
    SET_GPR_U32(ctx, 31, 0x1F082Cu);
    ctx->pc = 0x1F0828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0824u;
    // 0x1f0828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0824u, 0x1F082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F082Cu;
label_1f082c:
    // 0x1f082c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F082Cu;
    {
        const bool branch_taken_0x1f082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F082Cu;
        // 0x1f0830: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f082c) {
            ctx->pc = 0x1F0848u;
            return;
        }
    }
    ctx->pc = 0x1F0834u;
}
