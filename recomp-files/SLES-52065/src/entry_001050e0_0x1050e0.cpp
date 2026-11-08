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

// Function: entry_001050e0
// Address: 0x1050e0 - 0x10511c
void entry_001050e0_0x1050e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001050e0_0x1050e0");
#endif

    switch (ctx->pc) {
        case 0x1050e8u: goto label_1050e8;
        case 0x1050f8u: goto label_1050f8;
        default: break;
    }

    ctx->pc = 0x1050e0u;

    // 0x1050e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1050E0u;
    SET_GPR_U32(ctx, 31, 0x1050E8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1050E0u, 0x1050E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050E8u;
label_1050e8:
    // 0x1050e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1050E8u;
    {
        const bool branch_taken_0x1050e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050E8u;
        // 0x1050ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050e8) {
            ctx->pc = 0x10511Cu;
            return;
        }
    }
    ctx->pc = 0x1050F0u;
    // 0x1050f0: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x1050F0u;
    SET_GPR_U32(ctx, 31, 0x1050F8u);
    ctx->pc = 0x1050F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050F0u;
    // 0x1050f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x1050F0u, 0x1050F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050F8u;
label_1050f8:
    // 0x1050f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1050f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1050fc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1050fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x105100: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x105100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x105104: 0x2463a130  addiu       $v1, $v1, -0x5ED0
    ctx->pc = 0x105104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943024));
    // 0x105108: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10510c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10510cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105110: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x105114: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x105114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
    // 0x105118: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10511cu;
}
