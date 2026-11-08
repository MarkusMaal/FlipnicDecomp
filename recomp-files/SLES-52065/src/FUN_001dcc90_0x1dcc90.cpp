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

// Function: FUN_001dcc90
// Address: 0x1dcc90 - 0x1dccf8
void FUN_001dcc90_0x1dcc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dcc90_0x1dcc90");
#endif

    switch (ctx->pc) {
        case 0x1dcca0u: goto label_1dcca0;
        default: break;
    }

    ctx->pc = 0x1dcc90u;

    // 0x1dcc90: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dcc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dcc94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dcc94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc98: 0x24437330  addiu       $v1, $v0, 0x7330
    ctx->pc = 0x1dcc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1dcc9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcca0:
    // 0x1dcca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dcca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcca4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcca8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1DCCA8u;
    {
        const bool branch_taken_0x1dcca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcca8) {
            ctx->pc = 0x1DCCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCCA8u;
            // 0x1dccac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCCE4u;
            goto label_1dcce4;
        }
    }
    ctx->pc = 0x1DCCB0u;
    // 0x1dccb0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1dccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dccb4: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCCB4u;
    {
        const bool branch_taken_0x1dccb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dccb4) {
            ctx->pc = 0x1DCCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCCB4u;
            // 0x1dccb8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCCE4u;
            goto label_1dcce4;
        }
    }
    ctx->pc = 0x1DCCBCu;
    // 0x1dccbc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1dccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1dccc0: 0x54460008  bnel        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCCC0u;
    {
        const bool branch_taken_0x1dccc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1dccc0) {
            ctx->pc = 0x1DCCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCCC0u;
            // 0x1dccc4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCCE4u;
            goto label_1dcce4;
        }
    }
    ctx->pc = 0x1DCCC8u;
    // 0x1dccc8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1dccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1dcccc: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCCCCu;
    {
        const bool branch_taken_0x1dcccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1dcccc) {
            ctx->pc = 0x1DCCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCCCCu;
            // 0x1dccd0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCCE4u;
            goto label_1dcce4;
        }
    }
    ctx->pc = 0x1DCCD4u;
    // 0x1dccd4: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1dccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1dccd8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dccdc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1dccdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1dcce0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dcce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dcce4:
    // 0x1dcce4: 0x29020030  slti        $v0, $t0, 0x30
    ctx->pc = 0x1dcce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dcce8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DCCE8u;
    {
        const bool branch_taken_0x1dcce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCE8u;
        // 0x1dccec: 0x246300e8  addiu       $v1, $v1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcce8) {
            ctx->pc = 0x1DCCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcca0;
        }
    }
    ctx->pc = 0x1DCCF0u;
    // 0x1dccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCF0u;
        // 0x1dccf4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCCF8u;
}
