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

// Function: FUN_00143390
// Address: 0x143390 - 0x1433cc
void FUN_00143390_0x143390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143390_0x143390");
#endif

    ctx->pc = 0x143390u;

    // 0x143390: 0x9082002c  lbu         $v0, 0x2C($a0)
    ctx->pc = 0x143390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x143394: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x143394u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143398: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x143398u;
    {
        const bool branch_taken_0x143398 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143398u;
        // 0x14339c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143398) {
            ctx->pc = 0x1433A8u;
            goto label_1433a8;
        }
    }
    ctx->pc = 0x1433A0u;
    // 0x1433a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1433A0u;
    {
        const bool branch_taken_0x1433a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1433a0) {
            ctx->pc = 0x1433C4u;
            goto label_1433c4;
        }
    }
    ctx->pc = 0x1433A8u;
label_1433a8:
    // 0x1433a8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1433a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1433ac: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1433acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1433b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1433b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1433b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1433b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1433b8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1433b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1433bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1433bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1433c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1433c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1433c4:
    // 0x1433c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1433C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1433C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1433CCu;
}
