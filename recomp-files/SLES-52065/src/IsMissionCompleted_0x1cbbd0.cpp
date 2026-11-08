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

// Function: IsMissionCompleted
// Address: 0x1cbbd0 - 0x1cbc10
void IsMissionCompleted_0x1cbbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsMissionCompleted_0x1cbbd0");
#endif

    ctx->pc = 0x1cbbd0u;

    // 0x1cbbd0: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x1cbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1cbbd4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cbbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cbbd8: 0x8c24ca84  lw          $a0, -0x357C($at)
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cbbdc: 0x61a40  sll         $v1, $a2, 9
    ctx->pc = 0x1cbbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x1cbbe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cbbe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbbe8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1cbbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cbbec: 0x9043214c  lbu         $v1, 0x214C($v0)
    ctx->pc = 0x1cbbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8524)));
    // 0x1cbbf0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1cbbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1cbbf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBBF4u;
    {
        const bool branch_taken_0x1cbbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBF4u;
        // 0x1cbbf8: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbf4) {
            ctx->pc = 0x1CBC04u;
            goto label_1cbc04;
        }
    }
    ctx->pc = 0x1CBBFCu;
    // 0x1cbbfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBBFCu;
    {
        const bool branch_taken_0x1cbbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBFCu;
        // 0x1cbc00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbfc) {
            ctx->pc = 0x1CBC08u;
            goto label_1cbc08;
        }
    }
    ctx->pc = 0x1CBC04u;
label_1cbc04:
    // 0x1cbc04: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1cbc04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cbc08:
    // 0x1cbc08: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBC10u;
}
