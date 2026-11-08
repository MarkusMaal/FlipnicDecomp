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

// Function: entry_00187388
// Address: 0x187388 - 0x1873b4
void entry_00187388_0x187388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187388_0x187388");
#endif

    switch (ctx->pc) {
        case 0x187390u: goto label_187390;
        default: break;
    }

    ctx->pc = 0x187388u;

    // 0x187388: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x187388u;
    SET_GPR_U32(ctx, 31, 0x187390u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x187388u, 0x187390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187390u;
label_187390:
    // 0x187390: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x187390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x187394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187398: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x187398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18739c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x18739cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1873a0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1873A0u;
    {
        const bool branch_taken_0x1873a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1873a0) {
            ctx->pc = 0x187318u;
            return;
        }
    }
    ctx->pc = 0x1873A8u;
    // 0x1873a8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1873a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1873ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1873ACu;
    {
        const bool branch_taken_0x1873ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1873B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873ACu;
        // 0x1873b0: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1873ac) {
            ctx->pc = 0x1873ECu;
            return;
        }
    }
    ctx->pc = 0x1873B4u;
}
