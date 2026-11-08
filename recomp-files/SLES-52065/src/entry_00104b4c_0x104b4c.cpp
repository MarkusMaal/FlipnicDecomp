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

// Function: entry_00104b4c
// Address: 0x104b4c - 0x104b88
void entry_00104b4c_0x104b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104b4c_0x104b4c");
#endif

    switch (ctx->pc) {
        case 0x104b54u: goto label_104b54;
        case 0x104b64u: goto label_104b64;
        default: break;
    }

    ctx->pc = 0x104b4cu;

    // 0x104b4c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104B4Cu;
    SET_GPR_U32(ctx, 31, 0x104B54u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104B4Cu, 0x104B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B54u;
label_104b54:
    // 0x104b54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104B54u;
    {
        const bool branch_taken_0x104b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B54u;
        // 0x104b58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b54) {
            ctx->pc = 0x104B88u;
            return;
        }
    }
    ctx->pc = 0x104B5Cu;
    // 0x104b5c: 0xc056360  jal         func_158D80
    ctx->pc = 0x104B5Cu;
    SET_GPR_U32(ctx, 31, 0x104B64u);
    ctx->pc = 0x104B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B5Cu;
    // 0x104b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104B5Cu, 0x104B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B64u;
label_104b64:
    // 0x104b64: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104b68: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104b6c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x104b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104b70: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104b74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104b78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104b7c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104b80: 0x2442adc0  addiu       $v0, $v0, -0x5240
    ctx->pc = 0x104b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
    // 0x104b84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104b88u;
}
