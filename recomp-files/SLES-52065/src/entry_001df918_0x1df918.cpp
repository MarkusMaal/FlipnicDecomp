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

// Function: entry_001df918
// Address: 0x1df918 - 0x1df930
void entry_001df918_0x1df918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df918_0x1df918");
#endif

    switch (ctx->pc) {
        case 0x1df924u: goto label_1df924;
        default: break;
    }

    ctx->pc = 0x1df918u;

    // 0x1df918: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df91c: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DF91Cu;
    SET_GPR_U32(ctx, 31, 0x1DF924u);
    ctx->pc = 0x1DF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF91Cu;
    // 0x1df920: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DF91Cu, 0x1DF924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF924u;
label_1df924:
    // 0x1df924: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1DF924u;
    {
        const bool branch_taken_0x1df924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF924u;
        // 0x1df928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df924) {
            ctx->pc = 0x1DFA40u;
            return;
        }
    }
    ctx->pc = 0x1DF92Cu;
    // 0x1df92c: 0x0  nop
    ctx->pc = 0x1df92cu;
    // NOP
    ctx->pc = 0x1df930u;
}
