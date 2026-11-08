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

// Function: FUN_001cbc60
// Address: 0x1cbc60 - 0x1cbcac
void FUN_001cbc60_0x1cbc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cbc60_0x1cbc60");
#endif

    switch (ctx->pc) {
        case 0x1cbc7cu: goto label_1cbc7c;
        default: break;
    }

    ctx->pc = 0x1cbc60u;

    // 0x1cbc60: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cbc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cbc64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cbc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cbc68: 0x8c23ca84  lw          $v1, -0x357C($at)
    ctx->pc = 0x1cbc68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cbc6c: 0x246610c8  addiu       $a2, $v1, 0x10C8
    ctx->pc = 0x1cbc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4296));
    // 0x1cbc70: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1cbc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cbc74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBC74u;
    {
        const bool branch_taken_0x1cbc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC74u;
        // 0x1cbc78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc74) {
            ctx->pc = 0x1CBC94u;
            goto label_1cbc94;
        }
    }
    ctx->pc = 0x1CBC7Cu;
label_1cbc7c:
    // 0x1cbc7c: 0x90631694  lbu         $v1, 0x1694($v1)
    ctx->pc = 0x1cbc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5780)));
    // 0x1cbc80: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1cbc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1cbc84: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBC84u;
    {
        const bool branch_taken_0x1cbc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc84) {
            ctx->pc = 0x1CBC90u;
            goto label_1cbc90;
        }
    }
    ctx->pc = 0x1CBC8Cu;
    // 0x1cbc8c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1cbc8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc90:
    // 0x1cbc90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cbc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cbc94:
    // 0x1cbc94: 0x0  nop
    ctx->pc = 0x1cbc94u;
    // NOP
    // 0x1cbc98: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x1cbc98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1cbc9c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CBC9Cu;
    {
        const bool branch_taken_0x1cbc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC9Cu;
        // 0x1cbca0: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc9c) {
            ctx->pc = 0x1CBC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbc7c;
        }
    }
    ctx->pc = 0x1CBCA4u;
    // 0x1cbca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBCACu;
}
