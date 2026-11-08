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

// Function: FUN_001af1a0
// Address: 0x1af1a0 - 0x1af1fc
void FUN_001af1a0_0x1af1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af1a0_0x1af1a0");
#endif

    switch (ctx->pc) {
        case 0x1af1b4u: goto label_1af1b4;
        default: break;
    }

    ctx->pc = 0x1af1a0u;

    // 0x1af1a0: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1af1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1af1a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af1a8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1af1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1af1ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AF1ACu;
    {
        const bool branch_taken_0x1af1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1ACu;
        // 0x1af1b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1ac) {
            ctx->pc = 0x1AF1E8u;
            goto label_1af1e8;
        }
    }
    ctx->pc = 0x1AF1B4u;
label_1af1b4:
    // 0x1af1b4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1af1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1af1b8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1af1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1af1bc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1af1bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af1c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af1c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1af1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1af1c8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1af1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1af1cc: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x1af1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x1af1d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF1D0u;
    {
        const bool branch_taken_0x1af1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1D0u;
        // 0x1af1d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1d0) {
            ctx->pc = 0x1AF1E0u;
            goto label_1af1e0;
        }
    }
    ctx->pc = 0x1AF1D8u;
    // 0x1af1d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF1D8u;
    {
        const bool branch_taken_0x1af1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af1d8) {
            ctx->pc = 0x1AF1F4u;
            goto label_1af1f4;
        }
    }
    ctx->pc = 0x1AF1E0u;
label_1af1e0:
    // 0x1af1e0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1af1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1af1e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1af1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1af1e8:
    // 0x1af1e8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1af1e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1af1ec: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AF1ECu;
    {
        const bool branch_taken_0x1af1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1ECu;
        // 0x1af1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1ec) {
            ctx->pc = 0x1AF1B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af1b4;
        }
    }
    ctx->pc = 0x1AF1F4u;
label_1af1f4:
    // 0x1af1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF1FCu;
}
