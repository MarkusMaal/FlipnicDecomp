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

// Function: entry_0010436c
// Address: 0x10436c - 0x1043a8
void entry_0010436c_0x10436c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010436c_0x10436c");
#endif

    switch (ctx->pc) {
        case 0x104374u: goto label_104374;
        case 0x104384u: goto label_104384;
        default: break;
    }

    ctx->pc = 0x10436cu;

    // 0x10436c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10436Cu;
    SET_GPR_U32(ctx, 31, 0x104374u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10436Cu, 0x104374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104374u;
label_104374:
    // 0x104374: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104374u;
    {
        const bool branch_taken_0x104374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104374u;
        // 0x104378: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104374) {
            ctx->pc = 0x1043A8u;
            return;
        }
    }
    ctx->pc = 0x10437Cu;
    // 0x10437c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10437Cu;
    SET_GPR_U32(ctx, 31, 0x104384u);
    ctx->pc = 0x104380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10437Cu;
    // 0x104380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10437Cu, 0x104384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104384u;
label_104384:
    // 0x104384: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104388: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10438c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104390: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104394: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104398: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10439c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10439cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1043a0: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x1043a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
    // 0x1043a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1043a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1043a8u;
}
