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

// Function: entry_00197c94
// Address: 0x197c94 - 0x197cc8
void entry_00197c94_0x197c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197c94_0x197c94");
#endif

    ctx->pc = 0x197c94u;

label_197c94:
    // 0x197c94: 0x0  nop
    ctx->pc = 0x197c94u;
    // NOP
    // 0x197c98: 0x1483021  addu        $a2, $t2, $t0
    ctx->pc = 0x197c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x197c9c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x197ca0: 0x10660009  beq         $v1, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x197CA0u;
    {
        const bool branch_taken_0x197ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x197ca0) {
            ctx->pc = 0x197CC8u;
            return;
        }
    }
    ctx->pc = 0x197CA8u;
    // 0x197ca8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x197ca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x197cac: 0x29610005  slti        $at, $t3, 0x5
    ctx->pc = 0x197cacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x197cb0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x197CB0u;
    {
        const bool branch_taken_0x197cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CB0u;
        // 0x197cb4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cb0) {
            ctx->pc = 0x197CC8u;
            return;
        }
    }
    ctx->pc = 0x197CB8u;
    // 0x197cb8: 0x1483021  addu        $a2, $t2, $t0
    ctx->pc = 0x197cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x197cbc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x197cc0: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x197CC0u;
    {
        const bool branch_taken_0x197cc0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x197cc0) {
            ctx->pc = 0x197C94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197c94;
        }
    }
    ctx->pc = 0x197CC8u;
}
