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

// Function: entry_00197c20
// Address: 0x197c20 - 0x197c4c
void entry_00197c20_0x197c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197c20_0x197c20");
#endif

    ctx->pc = 0x197c20u;

label_197c20:
    // 0x197c20: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x197c24: 0x10660009  beq         $v1, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x197C24u;
    {
        const bool branch_taken_0x197c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x197c24) {
            ctx->pc = 0x197C4Cu;
            return;
        }
    }
    ctx->pc = 0x197C2Cu;
    // 0x197c2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x197c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x197c30: 0x29210005  slti        $at, $t1, 0x5
    ctx->pc = 0x197c30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x197c34: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x197C34u;
    {
        const bool branch_taken_0x197c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C34u;
        // 0x197c38: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c34) {
            ctx->pc = 0x197C4Cu;
            return;
        }
    }
    ctx->pc = 0x197C3Cu;
    // 0x197c3c: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x197c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x197c40: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x197c44: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x197C44u;
    {
        const bool branch_taken_0x197c44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x197C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C44u;
        // 0x197c48: 0x1073021  addu        $a2, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c44) {
            ctx->pc = 0x197C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197c20;
        }
    }
    ctx->pc = 0x197C4Cu;
}
