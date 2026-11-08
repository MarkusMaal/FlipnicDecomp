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

// Function: entry_00196c94
// Address: 0x196c94 - 0x196cc8
void entry_00196c94_0x196c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196c94_0x196c94");
#endif

    ctx->pc = 0x196c94u;

label_196c94:
    // 0x196c94: 0x0  nop
    ctx->pc = 0x196c94u;
    // NOP
    // 0x196c98: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x196c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x196c9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x196c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196ca0: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x196CA0u;
    {
        const bool branch_taken_0x196ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x196ca0) {
            ctx->pc = 0x196CC8u;
            return;
        }
    }
    ctx->pc = 0x196CA8u;
    // 0x196ca8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x196ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x196cac: 0x29210005  slti        $at, $t1, 0x5
    ctx->pc = 0x196cacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x196cb0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x196CB0u;
    {
        const bool branch_taken_0x196cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CB0u;
        // 0x196cb4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cb0) {
            ctx->pc = 0x196CC8u;
            return;
        }
    }
    ctx->pc = 0x196CB8u;
    // 0x196cb8: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x196cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x196cbc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x196cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196cc0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x196CC0u;
    {
        const bool branch_taken_0x196cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196cc0) {
            ctx->pc = 0x196C94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196c94;
        }
    }
    ctx->pc = 0x196CC8u;
}
