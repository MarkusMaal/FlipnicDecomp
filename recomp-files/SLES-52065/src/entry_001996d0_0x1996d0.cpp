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

// Function: entry_001996d0
// Address: 0x1996d0 - 0x1996ec
void entry_001996d0_0x1996d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001996d0_0x1996d0");
#endif

    switch (ctx->pc) {
        case 0x1996e8u: goto label_1996e8;
        default: break;
    }

    ctx->pc = 0x1996d0u;

    // 0x1996d0: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x1996d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x1996d4: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1996d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1996d8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1996D8u;
    {
        const bool branch_taken_0x1996d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996D8u;
        // 0x1996dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1996d8) {
            ctx->pc = 0x1996ECu;
            return;
        }
    }
    ctx->pc = 0x1996E0u;
    // 0x1996e0: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1996E0u;
    SET_GPR_U32(ctx, 31, 0x1996E8u);
    ctx->pc = 0x1996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996E0u;
    // 0x1996e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1996E0u, 0x1996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996E8u;
label_1996e8:
    // 0x1996e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1996e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1996ecu;
}
