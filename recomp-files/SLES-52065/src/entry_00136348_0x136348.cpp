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

// Function: entry_00136348
// Address: 0x136348 - 0x13636c
void entry_00136348_0x136348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136348_0x136348");
#endif

    ctx->pc = 0x136348u;

label_136348:
    // 0x136348: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x136348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13634c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13634cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x136350: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x136350u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x136354: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x136354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x136358: 0x0  nop
    ctx->pc = 0x136358u;
    // NOP
    // 0x13635c: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13635Cu;
    {
        const bool branch_taken_0x13635c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13635c) {
            ctx->pc = 0x136348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136348;
        }
    }
    ctx->pc = 0x136364u;
    // 0x136364: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x136364u;
    {
        const bool branch_taken_0x136364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136364u;
        // 0x136368: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136364) {
            ctx->pc = 0x13651Cu;
            return;
        }
    }
    ctx->pc = 0x13636Cu;
}
