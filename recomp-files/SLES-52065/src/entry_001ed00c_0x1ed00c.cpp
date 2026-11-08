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

// Function: entry_001ed00c
// Address: 0x1ed00c - 0x1ed024
void entry_001ed00c_0x1ed00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed00c_0x1ed00c");
#endif

    switch (ctx->pc) {
        case 0x1ed01cu: goto label_1ed01c;
        default: break;
    }

    ctx->pc = 0x1ed00cu;

    // 0x1ed00c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1ed00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1ed010: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1ed010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1ed014: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1ED014u;
    SET_GPR_U32(ctx, 31, 0x1ED01Cu);
    ctx->pc = 0x1ED018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED014u;
    // 0x1ed018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1ED014u, 0x1ED01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED01Cu;
label_1ed01c:
    // 0x1ed01c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1ED01Cu;
    {
        const bool branch_taken_0x1ed01c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ED020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED01Cu;
        // 0x1ed020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed01c) {
            ctx->pc = 0x1ECFF8u;
            return;
        }
    }
    ctx->pc = 0x1ED024u;
}
