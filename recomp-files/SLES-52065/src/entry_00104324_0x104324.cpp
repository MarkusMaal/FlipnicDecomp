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

// Function: entry_00104324
// Address: 0x104324 - 0x104360
void entry_00104324_0x104324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104324_0x104324");
#endif

    switch (ctx->pc) {
        case 0x10432cu: goto label_10432c;
        case 0x10433cu: goto label_10433c;
        default: break;
    }

    ctx->pc = 0x104324u;

    // 0x104324: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104324u;
    SET_GPR_U32(ctx, 31, 0x10432Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104324u, 0x10432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10432Cu;
label_10432c:
    // 0x10432c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10432Cu;
    {
        const bool branch_taken_0x10432c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10432Cu;
        // 0x104330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10432c) {
            ctx->pc = 0x104360u;
            return;
        }
    }
    ctx->pc = 0x104334u;
    // 0x104334: 0xc056360  jal         func_158D80
    ctx->pc = 0x104334u;
    SET_GPR_U32(ctx, 31, 0x10433Cu);
    ctx->pc = 0x104338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104334u;
    // 0x104338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104334u, 0x10433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10433Cu;
label_10433c:
    // 0x10433c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104340: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104344: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x104344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104348: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x10434c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10434cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104350: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104354: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104358: 0x24429dd0  addiu       $v0, $v0, -0x6230
    ctx->pc = 0x104358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942160));
    // 0x10435c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10435cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104360u;
}
