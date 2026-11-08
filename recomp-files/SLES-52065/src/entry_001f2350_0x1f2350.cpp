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

// Function: entry_001f2350
// Address: 0x1f2350 - 0x1f2374
void entry_001f2350_0x1f2350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2350_0x1f2350");
#endif

    switch (ctx->pc) {
        case 0x1f235cu: goto label_1f235c;
        case 0x1f236cu: goto label_1f236c;
        default: break;
    }

    ctx->pc = 0x1f2350u;

    // 0x1f2350: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f2350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f2354: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F2354u;
    SET_GPR_U32(ctx, 31, 0x1F235Cu);
    ctx->pc = 0x1F2358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2354u;
    // 0x1f2358: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F2354u, 0x1F235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F235Cu;
label_1f235c:
    // 0x1f235c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F235Cu;
    {
        const bool branch_taken_0x1f235c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f235c) {
            ctx->pc = 0x1F2374u;
            return;
        }
    }
    ctx->pc = 0x1F2364u;
    // 0x1f2364: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F2364u;
    SET_GPR_U32(ctx, 31, 0x1F236Cu);
    ctx->pc = 0x1F2368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2364u;
    // 0x1f2368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F2364u, 0x1F236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F236Cu;
label_1f236c:
    // 0x1f236c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F236Cu;
    {
        const bool branch_taken_0x1f236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F236Cu;
        // 0x1f2370: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f236c) {
            ctx->pc = 0x1F2388u;
            return;
        }
    }
    ctx->pc = 0x1F2374u;
}
