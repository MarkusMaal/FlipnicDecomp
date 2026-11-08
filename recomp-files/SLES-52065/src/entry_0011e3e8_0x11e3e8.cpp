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

// Function: entry_0011e3e8
// Address: 0x11e3e8 - 0x11e410
void entry_0011e3e8_0x11e3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e3e8_0x11e3e8");
#endif

    switch (ctx->pc) {
        case 0x11e3fcu: goto label_11e3fc;
        case 0x11e408u: goto label_11e408;
        default: break;
    }

    ctx->pc = 0x11e3e8u;

    // 0x11e3e8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E3E8u;
    {
        const bool branch_taken_0x11e3e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3E8u;
        // 0x11e3ec: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3e8) {
            ctx->pc = 0x11E410u;
            return;
        }
    }
    ctx->pc = 0x11E3F0u;
    // 0x11e3f0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x11e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x11e3f4: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E3F4u;
    SET_GPR_U32(ctx, 31, 0x11E3FCu);
    ctx->pc = 0x11E3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3F4u;
    // 0x11e3f8: 0x264503c4  addiu       $a1, $s2, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E3F4u, 0x11E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3FCu;
label_11e3fc:
    // 0x11e3fc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x11e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x11e400: 0xc080664  jal         func_201990
    ctx->pc = 0x11E400u;
    SET_GPR_U32(ctx, 31, 0x11E408u);
    ctx->pc = 0x11E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E400u;
    // 0x11e404: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11E400u, 0x11E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E408u;
label_11e408:
    // 0x11e408: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11E408u;
    {
        const bool branch_taken_0x11e408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E408u;
        // 0x11e40c: 0x8e510100  lw          $s1, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e408) {
            ctx->pc = 0x11E42Cu;
            return;
        }
    }
    ctx->pc = 0x11E410u;
}
