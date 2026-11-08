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

// Function: entry_001dadd8
// Address: 0x1dadd8 - 0x1dadfc
void entry_001dadd8_0x1dadd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dadd8_0x1dadd8");
#endif

    ctx->pc = 0x1dadd8u;

label_1dadd8:
    // 0x1dadd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dadd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1daddc: 0x1040ff3a  beqz        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x1DADDCu;
    {
        const bool branch_taken_0x1daddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADDCu;
        // 0x1dade0: 0x2463ff18  addiu       $v1, $v1, -0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daddc) {
            ctx->pc = 0x1DAAC8u;
            return;
        }
    }
    ctx->pc = 0x1DADE4u;
    // 0x1dade4: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x1dade4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x1dade8: 0x2718ff18  addiu       $t8, $t8, -0xE8
    ctx->pc = 0x1dade8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967064));
    // 0x1dadec: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1dadecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1dadf0: 0x0  nop
    ctx->pc = 0x1dadf0u;
    // NOP
    // 0x1dadf4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DADF4u;
    {
        const bool branch_taken_0x1dadf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADF4u;
        // 0x1dadf8: 0x27deff18  addiu       $fp, $fp, -0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadf4) {
            ctx->pc = 0x1DADD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dadd8;
        }
    }
    ctx->pc = 0x1DADFCu;
}
