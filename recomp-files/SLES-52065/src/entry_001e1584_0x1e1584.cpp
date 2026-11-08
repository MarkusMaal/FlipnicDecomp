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

// Function: entry_001e1584
// Address: 0x1e1584 - 0x1e15a4
void entry_001e1584_0x1e1584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1584_0x1e1584");
#endif

    switch (ctx->pc) {
        case 0x1e159cu: goto label_1e159c;
        default: break;
    }

    ctx->pc = 0x1e1584u;

    // 0x1e1584: 0x0  nop
    ctx->pc = 0x1e1584u;
    // NOP
    // 0x1e1588: 0x8e320020  lw          $s2, 0x20($s1)
    ctx->pc = 0x1e1588u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1e158c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E158Cu;
    {
        const bool branch_taken_0x1e158c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E158Cu;
        // 0x1e1590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e158c) {
            ctx->pc = 0x1E15A4u;
            return;
        }
    }
    ctx->pc = 0x1E1594u;
    // 0x1e1594: 0xc0482a4  jal         func_120A90
    ctx->pc = 0x1E1594u;
    SET_GPR_U32(ctx, 31, 0x1E159Cu);
    ctx->pc = 0x1E1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1594u;
    // 0x1e1598: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A90u, 0x1E1594u, 0x1E159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E159Cu;
label_1e159c:
    // 0x1e159c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E159Cu;
    SET_GPR_U32(ctx, 31, 0x1E15A4u);
    ctx->pc = 0x1E15A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E159Cu;
    // 0x1e15a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E159Cu, 0x1E15A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15A4u;
}
