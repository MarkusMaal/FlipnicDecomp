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

// Function: entry_001043fc
// Address: 0x1043fc - 0x104438
void entry_001043fc_0x1043fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001043fc_0x1043fc");
#endif

    switch (ctx->pc) {
        case 0x104404u: goto label_104404;
        case 0x104414u: goto label_104414;
        default: break;
    }

    ctx->pc = 0x1043fcu;

    // 0x1043fc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1043FCu;
    SET_GPR_U32(ctx, 31, 0x104404u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1043FCu, 0x104404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104404u;
label_104404:
    // 0x104404: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104404u;
    {
        const bool branch_taken_0x104404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104404u;
        // 0x104408: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104404) {
            ctx->pc = 0x104438u;
            return;
        }
    }
    ctx->pc = 0x10440Cu;
    // 0x10440c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10440Cu;
    SET_GPR_U32(ctx, 31, 0x104414u);
    ctx->pc = 0x104410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10440Cu;
    // 0x104410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10440Cu, 0x104414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104414u;
label_104414:
    // 0x104414: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104418: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10441c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104420: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104424: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104428: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10442c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10442cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104430: 0x24429e90  addiu       $v0, $v0, -0x6170
    ctx->pc = 0x104430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942352));
    // 0x104434: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104438u;
}
