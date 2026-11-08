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

// Function: FUN_001dcbe0
// Address: 0x1dcbe0 - 0x1dcc30
void FUN_001dcbe0_0x1dcbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dcbe0_0x1dcbe0");
#endif

    switch (ctx->pc) {
        case 0x1dcbf0u: goto label_1dcbf0;
        default: break;
    }

    ctx->pc = 0x1dcbe0u;

    // 0x1dcbe0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dcbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dcbe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcbe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbe8: 0x24467330  addiu       $a2, $v0, 0x7330
    ctx->pc = 0x1dcbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1dcbec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dcbecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcbf0:
    // 0x1dcbf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dcbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dcbf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcbf8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCBF8u;
    {
        const bool branch_taken_0x1dcbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcbf8) {
            ctx->pc = 0x1DCBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCBF8u;
            // 0x1dcbfc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC1Cu;
            goto label_1dcc1c;
        }
    }
    ctx->pc = 0x1DCC00u;
    // 0x1dcc00: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1dcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1dcc04: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCC04u;
    {
        const bool branch_taken_0x1dcc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dcc04) {
            ctx->pc = 0x1DCC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCC04u;
            // 0x1dcc08: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC1Cu;
            goto label_1dcc1c;
        }
    }
    ctx->pc = 0x1DCC0Cu;
    // 0x1dcc0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1dcc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1dcc10: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dcc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dcc14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dcc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dcc18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dcc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1dcc1c:
    // 0x1dcc1c: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x1dcc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dcc20: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DCC20u;
    {
        const bool branch_taken_0x1dcc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC20u;
        // 0x1dcc24: 0x24c600e8  addiu       $a2, $a2, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc20) {
            ctx->pc = 0x1DCBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcbf0;
        }
    }
    ctx->pc = 0x1DCC28u;
    // 0x1dcc28: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC28u;
        // 0x1dcc2c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC30u;
}
