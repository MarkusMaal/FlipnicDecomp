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

// Function: entry_0020452c
// Address: 0x20452c - 0x204544
void entry_0020452c_0x20452c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020452c_0x20452c");
#endif

    switch (ctx->pc) {
        case 0x204534u: goto label_204534;
        default: break;
    }

    ctx->pc = 0x20452cu;

    // 0x20452c: 0xc080e4c  jal         func_203930
    ctx->pc = 0x20452Cu;
    SET_GPR_U32(ctx, 31, 0x204534u);
    ctx->pc = 0x204530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20452Cu;
    // 0x204530: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x20452Cu, 0x204534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204534u;
label_204534:
    // 0x204534: 0x14400290  bnez        $v0, . + 4 + (0x290 << 2)
    ctx->pc = 0x204534u;
    {
        const bool branch_taken_0x204534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204534u;
        // 0x204538: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204534) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x20453Cu;
    // 0x20453c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20453Cu;
    {
        const bool branch_taken_0x20453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20453Cu;
        // 0x204540: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20453c) {
            ctx->pc = 0x204548u;
            return;
        }
    }
    ctx->pc = 0x204544u;
}
