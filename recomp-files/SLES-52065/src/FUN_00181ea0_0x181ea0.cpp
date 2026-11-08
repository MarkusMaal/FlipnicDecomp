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

// Function: FUN_00181ea0
// Address: 0x181ea0 - 0x181ee4
void FUN_00181ea0_0x181ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00181ea0_0x181ea0");
#endif

    ctx->pc = 0x181ea0u;

    // 0x181ea0: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x181ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x181ea4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181EA4u;
    {
        const bool branch_taken_0x181ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181ea4) {
            ctx->pc = 0x181EB4u;
            goto label_181eb4;
        }
    }
    ctx->pc = 0x181EACu;
    // 0x181eac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x181EACu;
    {
        const bool branch_taken_0x181eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EACu;
        // 0x181eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181eac) {
            ctx->pc = 0x181EDCu;
            goto label_181edc;
        }
    }
    ctx->pc = 0x181EB4u;
label_181eb4:
    // 0x181eb4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x181eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x181eb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x181eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181ebc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181EBCu;
    {
        const bool branch_taken_0x181ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181ebc) {
            ctx->pc = 0x181ECCu;
            goto label_181ecc;
        }
    }
    ctx->pc = 0x181EC4u;
    // 0x181ec4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181EC4u;
    {
        const bool branch_taken_0x181ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EC4u;
        // 0x181ec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ec4) {
            ctx->pc = 0x181EDCu;
            goto label_181edc;
        }
    }
    ctx->pc = 0x181ECCu;
label_181ecc:
    // 0x181ecc: 0x8f82865c  lw          $v0, -0x79A4($gp)
    ctx->pc = 0x181eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
    // 0x181ed0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x181ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x181ed4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x181ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x181ed8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x181ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_181edc:
    // 0x181edc: 0x3e00008  jr          $ra
    ctx->pc = 0x181EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181EE4u;
}
