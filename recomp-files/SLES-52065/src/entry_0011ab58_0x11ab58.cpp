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

// Function: entry_0011ab58
// Address: 0x11ab58 - 0x11ab70
void entry_0011ab58_0x11ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ab58_0x11ab58");
#endif

    ctx->pc = 0x11ab58u;

    // 0x11ab58: 0x2119021  addu        $s2, $s0, $s1
    ctx->pc = 0x11ab58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11ab5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11ab60: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11AB60u;
    {
        const bool branch_taken_0x11ab60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB60u;
        // 0x11ab64: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab60) {
            ctx->pc = 0x11AB14u;
            return;
        }
    }
    ctx->pc = 0x11AB68u;
    // 0x11ab68: 0xc07c95e  jal         func_1F2578
    ctx->pc = 0x11AB68u;
    SET_GPR_U32(ctx, 31, 0x11AB70u);
    ctx->pc = 0x1F2578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2578u, 0x11AB68u, 0x11AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB70u;
}
