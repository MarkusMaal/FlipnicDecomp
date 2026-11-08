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

// Function: entry_00196be0
// Address: 0x196be0 - 0x196c0c
void entry_00196be0_0x196be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196be0_0x196be0");
#endif

    ctx->pc = 0x196be0u;

label_196be0:
    // 0x196be0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x196be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196be4: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x196BE4u;
    {
        const bool branch_taken_0x196be4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x196be4) {
            ctx->pc = 0x196C0Cu;
            return;
        }
    }
    ctx->pc = 0x196BECu;
    // 0x196bec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x196becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x196bf0: 0x29210005  slti        $at, $t1, 0x5
    ctx->pc = 0x196bf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x196bf4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x196BF4u;
    {
        const bool branch_taken_0x196bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x196BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BF4u;
        // 0x196bf8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bf4) {
            ctx->pc = 0x196C0Cu;
            return;
        }
    }
    ctx->pc = 0x196BFCu;
    // 0x196bfc: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x196bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x196c00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x196c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196c04: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x196C04u;
    {
        const bool branch_taken_0x196c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x196C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C04u;
        // 0x196c08: 0x1062021  addu        $a0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c04) {
            ctx->pc = 0x196BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196be0;
        }
    }
    ctx->pc = 0x196C0Cu;
}
