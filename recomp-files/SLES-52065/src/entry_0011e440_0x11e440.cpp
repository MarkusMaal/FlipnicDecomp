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

// Function: entry_0011e440
// Address: 0x11e440 - 0x11e45c
void entry_0011e440_0x11e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e440_0x11e440");
#endif

    switch (ctx->pc) {
        case 0x11e448u: goto label_11e448;
        default: break;
    }

    ctx->pc = 0x11e440u;

    // 0x11e440: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11E440u;
    SET_GPR_U32(ctx, 31, 0x11E448u);
    ctx->pc = 0x11E444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E440u;
    // 0x11e444: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11E440u, 0x11E448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E448u;
label_11e448:
    // 0x11e448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E448u;
    {
        const bool branch_taken_0x11e448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e448) {
            ctx->pc = 0x11E45Cu;
            return;
        }
    }
    ctx->pc = 0x11E450u;
    // 0x11e450: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x11e450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e454: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11E454u;
    {
        const bool branch_taken_0x11e454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E454u;
        // 0x11e458: 0x8e310038  lw          $s1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e454) {
            ctx->pc = 0x11E430u;
            return;
        }
    }
    ctx->pc = 0x11E45Cu;
}
