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

// Function: FUN_0012fd10
// Address: 0x12fd10 - 0x12fd60
void FUN_0012fd10_0x12fd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012fd10_0x12fd10");
#endif

    switch (ctx->pc) {
        case 0x12fd20u: goto label_12fd20;
        default: break;
    }

    ctx->pc = 0x12fd10u;

    // 0x12fd10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12fd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12fd14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd18: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x12fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x12fd1c: 0x24633e70  addiu       $v1, $v1, 0x3E70
    ctx->pc = 0x12fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15984));
label_12fd20:
    // 0x12fd20: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x12fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12fd24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fd28: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12FD28u;
    {
        const bool branch_taken_0x12fd28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x12FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD28u;
        // 0x12fd2c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd28) {
            ctx->pc = 0x12FD44u;
            goto label_12fd44;
        }
    }
    ctx->pc = 0x12FD30u;
    // 0x12fd30: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x12fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12fd34: 0x24423e74  addiu       $v0, $v0, 0x3E74
    ctx->pc = 0x12fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15988));
    // 0x12fd38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12fd3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12FD3Cu;
    {
        const bool branch_taken_0x12fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD3Cu;
        // 0x12fd40: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd3c) {
            ctx->pc = 0x12FD58u;
            goto label_12fd58;
        }
    }
    ctx->pc = 0x12FD44u;
label_12fd44:
    // 0x12fd44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12fd48: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x12fd48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x12fd4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12FD4Cu;
    {
        const bool branch_taken_0x12fd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD4Cu;
        // 0x12fd50: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd4c) {
            ctx->pc = 0x12FD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fd20;
        }
    }
    ctx->pc = 0x12FD54u;
    // 0x12fd54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12fd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12fd58:
    // 0x12fd58: 0x3e00008  jr          $ra
    ctx->pc = 0x12FD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FD60u;
}
