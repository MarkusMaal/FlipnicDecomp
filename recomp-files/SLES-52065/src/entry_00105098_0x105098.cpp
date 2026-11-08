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

// Function: entry_00105098
// Address: 0x105098 - 0x1050d4
void entry_00105098_0x105098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105098_0x105098");
#endif

    switch (ctx->pc) {
        case 0x1050a0u: goto label_1050a0;
        case 0x1050b0u: goto label_1050b0;
        default: break;
    }

    ctx->pc = 0x105098u;

    // 0x105098: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x105098u;
    SET_GPR_U32(ctx, 31, 0x1050A0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x105098u, 0x1050A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050A0u;
label_1050a0:
    // 0x1050a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1050A0u;
    {
        const bool branch_taken_0x1050a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050A0u;
        // 0x1050a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050a0) {
            ctx->pc = 0x1050D4u;
            return;
        }
    }
    ctx->pc = 0x1050A8u;
    // 0x1050a8: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x1050A8u;
    SET_GPR_U32(ctx, 31, 0x1050B0u);
    ctx->pc = 0x1050ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050A8u;
    // 0x1050ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x1050A8u, 0x1050B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050B0u;
label_1050b0:
    // 0x1050b0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1050b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1050b4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1050b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1050b8: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1050b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1050bc: 0x2463a130  addiu       $v1, $v1, -0x5ED0
    ctx->pc = 0x1050bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943024));
    // 0x1050c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1050c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1050c4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1050c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1050c8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1050c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1050cc: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x1050ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
    // 0x1050d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1050d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1050d4u;
}
