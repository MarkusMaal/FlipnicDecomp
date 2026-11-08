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

// Function: entry_001ecfb4
// Address: 0x1ecfb4 - 0x1ecfd4
void entry_001ecfb4_0x1ecfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecfb4_0x1ecfb4");
#endif

    switch (ctx->pc) {
        case 0x1ecfc4u: goto label_1ecfc4;
        default: break;
    }

    ctx->pc = 0x1ecfb4u;

    // 0x1ecfb4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ecfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1ecfb8: 0xdc254290  ld          $a1, 0x4290($at)
    ctx->pc = 0x1ecfb8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x224290u));
    // 0x1ecfbc: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1ECFBCu;
    SET_GPR_U32(ctx, 31, 0x1ECFC4u);
    ctx->pc = 0x1ECFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECFBCu;
    // 0x1ecfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1ECFBCu, 0x1ECFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFC4u;
label_1ecfc4:
    // 0x1ecfc4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1ECFC4u;
    {
        const bool branch_taken_0x1ecfc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ECFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFC4u;
        // 0x1ecfc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecfc4) {
            ctx->pc = 0x1ECFA0u;
            return;
        }
    }
    ctx->pc = 0x1ECFCCu;
    // 0x1ecfcc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1ECFCCu;
    {
        const bool branch_taken_0x1ecfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecfcc) {
            ctx->pc = 0x1ED024u;
            return;
        }
    }
    ctx->pc = 0x1ECFD4u;
}
