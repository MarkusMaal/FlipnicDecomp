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

// Function: entry_00104a5c
// Address: 0x104a5c - 0x104a98
void entry_00104a5c_0x104a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104a5c_0x104a5c");
#endif

    switch (ctx->pc) {
        case 0x104a64u: goto label_104a64;
        case 0x104a74u: goto label_104a74;
        default: break;
    }

    ctx->pc = 0x104a5cu;

    // 0x104a5c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104A5Cu;
    SET_GPR_U32(ctx, 31, 0x104A64u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104A5Cu, 0x104A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A64u;
label_104a64:
    // 0x104a64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104A64u;
    {
        const bool branch_taken_0x104a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A64u;
        // 0x104a68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a64) {
            ctx->pc = 0x104A98u;
            return;
        }
    }
    ctx->pc = 0x104A6Cu;
    // 0x104a6c: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104A6Cu;
    SET_GPR_U32(ctx, 31, 0x104A74u);
    ctx->pc = 0x104A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A6Cu;
    // 0x104a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104A6Cu, 0x104A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A74u;
label_104a74:
    // 0x104a74: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104a78: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104a7c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x104a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x104a80: 0x2463a490  addiu       $v1, $v1, -0x5B70
    ctx->pc = 0x104a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943888));
    // 0x104a84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104a88: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104a8c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104a90: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x104a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x104a94: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104a98u;
}
