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

// Function: entry_001045a0
// Address: 0x1045a0 - 0x1045dc
void entry_001045a0_0x1045a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001045a0_0x1045a0");
#endif

    switch (ctx->pc) {
        case 0x1045a8u: goto label_1045a8;
        case 0x1045b8u: goto label_1045b8;
        default: break;
    }

    ctx->pc = 0x1045a0u;

    // 0x1045a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1045A0u;
    SET_GPR_U32(ctx, 31, 0x1045A8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1045A0u, 0x1045A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045A8u;
label_1045a8:
    // 0x1045a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1045A8u;
    {
        const bool branch_taken_0x1045a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045A8u;
        // 0x1045ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045a8) {
            ctx->pc = 0x1045DCu;
            return;
        }
    }
    ctx->pc = 0x1045B0u;
    // 0x1045b0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1045B0u;
    SET_GPR_U32(ctx, 31, 0x1045B8u);
    ctx->pc = 0x1045B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045B0u;
    // 0x1045b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1045B0u, 0x1045B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045B8u;
label_1045b8:
    // 0x1045b8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1045b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1045bc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1045bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1045c0: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1045c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1045c4: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1045c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1045c8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1045c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1045cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1045ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1045d0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1045d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1045d4: 0x2442a130  addiu       $v0, $v0, -0x5ED0
    ctx->pc = 0x1045d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943024));
    // 0x1045d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1045d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1045dcu;
}
