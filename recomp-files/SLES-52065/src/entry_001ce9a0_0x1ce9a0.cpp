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

// Function: entry_001ce9a0
// Address: 0x1ce9a0 - 0x1ce9d0
void entry_001ce9a0_0x1ce9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce9a0_0x1ce9a0");
#endif

    switch (ctx->pc) {
        case 0x1ce9a8u: goto label_1ce9a8;
        default: break;
    }

    ctx->pc = 0x1ce9a0u;

    // 0x1ce9a0: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CE9A0u;
    SET_GPR_U32(ctx, 31, 0x1CE9A8u);
    ctx->pc = 0x1CE9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9A0u;
    // 0x1ce9a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CE9A0u, 0x1CE9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9A8u;
label_1ce9a8:
    // 0x1ce9a8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CE9A8u;
    {
        const bool branch_taken_0x1ce9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9A8u;
        // 0x1ce9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9a8) {
            ctx->pc = 0x1CE9E4u;
            return;
        }
    }
    ctx->pc = 0x1CE9B0u;
    // 0x1ce9b0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1ce9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ce9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce9b8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE9B8u;
    {
        const bool branch_taken_0x1ce9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce9b8) {
            ctx->pc = 0x1CE9D8u;
            return;
        }
    }
    ctx->pc = 0x1CE9C0u;
    // 0x1ce9c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE9C0u;
    {
        const bool branch_taken_0x1ce9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce9c0) {
            ctx->pc = 0x1CE9D0u;
            return;
        }
    }
    ctx->pc = 0x1CE9C8u;
    // 0x1ce9c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE9C8u;
    {
        const bool branch_taken_0x1ce9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce9c8) {
            ctx->pc = 0x1CE9E0u;
            return;
        }
    }
    ctx->pc = 0x1CE9D0u;
}
