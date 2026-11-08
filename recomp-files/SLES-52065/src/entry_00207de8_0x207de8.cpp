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

// Function: entry_00207de8
// Address: 0x207de8 - 0x207e10
void entry_00207de8_0x207de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207de8_0x207de8");
#endif

    ctx->pc = 0x207de8u;

    // 0x207de8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207DE8u;
    {
        const bool branch_taken_0x207de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DE8u;
        // 0x207dec: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207de8) {
            ctx->pc = 0x207E10u;
            return;
        }
    }
    ctx->pc = 0x207DF0u;
    // 0x207df0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x207DF0u;
    {
        const bool branch_taken_0x207df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207df0) {
            ctx->pc = 0x207DCCu;
            return;
        }
    }
    ctx->pc = 0x207DF8u;
    // 0x207df8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x207df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x207dfc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x207dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x207e00: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x207E00u;
    {
        const bool branch_taken_0x207e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E00u;
        // 0x207e04: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e00) {
            ctx->pc = 0x207DCCu;
            return;
        }
    }
    ctx->pc = 0x207E08u;
    // 0x207e08: 0x3e00008  jr          $ra
    ctx->pc = 0x207E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E08u;
        // 0x207e0c: 0x24422c00  addiu       $v0, $v0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207E10u;
}
