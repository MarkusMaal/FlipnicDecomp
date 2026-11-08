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

// Function: entry_00226420
// Address: 0x226420 - 0x226444
void entry_00226420_0x226420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226420_0x226420");
#endif

    ctx->pc = 0x226420u;

label_226420:
    // 0x226420: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x226420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x226424: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x226424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x226428: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x226428u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22642c: 0x28e30022  slti        $v1, $a3, 0x22
    ctx->pc = 0x22642cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x226430: 0xa1260001  sb          $a2, 0x1($t1)
    ctx->pc = 0x226430u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x226434: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x226434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x226438: 0xa1260002  sb          $a2, 0x2($t1)
    ctx->pc = 0x226438u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x22643c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22643Cu;
    {
        const bool branch_taken_0x22643c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22643Cu;
        // 0x226440: 0xa1240003  sb          $a0, 0x3($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22643c) {
            ctx->pc = 0x226420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226420;
        }
    }
    ctx->pc = 0x226444u;
}
