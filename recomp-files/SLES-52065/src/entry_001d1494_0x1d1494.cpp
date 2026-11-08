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

// Function: entry_001d1494
// Address: 0x1d1494 - 0x1d14b8
void entry_001d1494_0x1d1494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1494_0x1d1494");
#endif

    switch (ctx->pc) {
        case 0x1d14acu: goto label_1d14ac;
        default: break;
    }

    ctx->pc = 0x1d1494u;

    // 0x1d1494: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d1494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d1498: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d1498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d149c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D149Cu;
    {
        const bool branch_taken_0x1d149c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d149c) {
            ctx->pc = 0x1D14B8u;
            return;
        }
    }
    ctx->pc = 0x1D14A4u;
    // 0x1d14a4: 0xc04d988  jal         func_136620
    ctx->pc = 0x1D14A4u;
    SET_GPR_U32(ctx, 31, 0x1D14ACu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1D14A4u, 0x1D14ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14ACu;
label_1d14ac:
    // 0x1d14ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d14acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14b0: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1D14B0u;
    SET_GPR_U32(ctx, 31, 0x1D14B8u);
    ctx->pc = 0x1D14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14B0u;
    // 0x1d14b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1D14B0u, 0x1D14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14B8u;
}
