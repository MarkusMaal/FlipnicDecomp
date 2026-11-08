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

// Function: entry_001048d0
// Address: 0x1048d0 - 0x10490c
void entry_001048d0_0x1048d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001048d0_0x1048d0");
#endif

    switch (ctx->pc) {
        case 0x1048d8u: goto label_1048d8;
        case 0x1048e8u: goto label_1048e8;
        default: break;
    }

    ctx->pc = 0x1048d0u;

    // 0x1048d0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1048D0u;
    SET_GPR_U32(ctx, 31, 0x1048D8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1048D0u, 0x1048D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048D8u;
label_1048d8:
    // 0x1048d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1048D8u;
    {
        const bool branch_taken_0x1048d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048D8u;
        // 0x1048dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048d8) {
            ctx->pc = 0x10490Cu;
            return;
        }
    }
    ctx->pc = 0x1048E0u;
    // 0x1048e0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1048E0u;
    SET_GPR_U32(ctx, 31, 0x1048E8u);
    ctx->pc = 0x1048E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1048E0u;
    // 0x1048e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1048E0u, 0x1048E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048E8u;
label_1048e8:
    // 0x1048e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1048e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1048ec: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1048ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1048f0: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1048f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1048f4: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1048f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1048f8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1048f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1048fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1048fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104900: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104904: 0x24429d10  addiu       $v0, $v0, -0x62F0
    ctx->pc = 0x104904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941968));
    // 0x104908: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10490cu;
}
