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

// Function: FUN_001d1f70
// Address: 0x1d1f70 - 0x1d1fa8
void FUN_001d1f70_0x1d1f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1f70_0x1d1f70");
#endif

    ctx->pc = 0x1d1f70u;

    // 0x1d1f70: 0x908201e0  lbu         $v0, 0x1E0($a0)
    ctx->pc = 0x1d1f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x1d1f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1f78: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1F78u;
    {
        const bool branch_taken_0x1d1f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d1f78) {
            ctx->pc = 0x1D1F88u;
            goto label_1d1f88;
        }
    }
    ctx->pc = 0x1D1F80u;
    // 0x1d1f80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1F80u;
    {
        const bool branch_taken_0x1d1f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F80u;
        // 0x1d1f84: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f80) {
            ctx->pc = 0x1D1FA0u;
            goto label_1d1fa0;
        }
    }
    ctx->pc = 0x1D1F88u;
label_1d1f88:
    // 0x1d1f88: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d1f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1f8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d1f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1f90: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1F90u;
    {
        const bool branch_taken_0x1d1f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1f90) {
            ctx->pc = 0x1D1FA0u;
            goto label_1d1fa0;
        }
    }
    ctx->pc = 0x1D1F98u;
    // 0x1d1f98: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1F98u;
    {
        const bool branch_taken_0x1d1f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F98u;
        // 0x1d1f9c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f98) {
            ctx->pc = 0x1D1FA0u;
            goto label_1d1fa0;
        }
    }
    ctx->pc = 0x1D1FA0u;
label_1d1fa0:
    // 0x1d1fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1FA8u;
}
