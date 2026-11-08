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

// Function: entry_00188974
// Address: 0x188974 - 0x1889b0
void entry_00188974_0x188974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188974_0x188974");
#endif

    switch (ctx->pc) {
        case 0x188988u: goto label_188988;
        default: break;
    }

    ctx->pc = 0x188974u;

    // 0x188974: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x188974u;
    {
        const bool branch_taken_0x188974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x188974) {
            ctx->pc = 0x1889ECu;
            return;
        }
    }
    ctx->pc = 0x18897Cu;
    // 0x18897c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x18897cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x188980: 0xc062874  jal         func_18A1D0
    ctx->pc = 0x188980u;
    SET_GPR_U32(ctx, 31, 0x188988u);
    ctx->pc = 0x188984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188980u;
    // 0x188984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1D0u, 0x188980u, 0x188988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188988u;
label_188988:
    // 0x188988: 0x8ea40048  lw          $a0, 0x48($s5)
    ctx->pc = 0x188988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x18898c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188990: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x188990u;
    {
        const bool branch_taken_0x188990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188990u;
        // 0x188994: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188990) {
            ctx->pc = 0x1889E0u;
            return;
        }
    }
    ctx->pc = 0x188998u;
    // 0x188998: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x188998u;
    {
        const bool branch_taken_0x188998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188998) {
            ctx->pc = 0x1889BCu;
            return;
        }
    }
    ctx->pc = 0x1889A0u;
    // 0x1889a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1889A0u;
    {
        const bool branch_taken_0x1889a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889a0) {
            ctx->pc = 0x1889B0u;
            return;
        }
    }
    ctx->pc = 0x1889A8u;
    // 0x1889a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1889A8u;
    {
        const bool branch_taken_0x1889a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889a8) {
            ctx->pc = 0x1889E4u;
            return;
        }
    }
    ctx->pc = 0x1889B0u;
}
