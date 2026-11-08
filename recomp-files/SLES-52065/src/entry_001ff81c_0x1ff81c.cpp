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

// Function: entry_001ff81c
// Address: 0x1ff81c - 0x1ff854
void entry_001ff81c_0x1ff81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff81c_0x1ff81c");
#endif

    ctx->pc = 0x1ff81cu;

label_1ff81c:
    // 0x1ff81c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1ff81cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff820: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1ff820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1ff824: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1ff824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ff828: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x1ff828u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff82c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1ff82cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1ff830: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1ff830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1ff834: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ff834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff838: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1ff838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ff83c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1ff83cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1ff840: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FF840u;
    {
        const bool branch_taken_0x1ff840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF840u;
        // 0x1ff844: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff840) {
            ctx->pc = 0x1FF81Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff81c;
        }
    }
    ctx->pc = 0x1FF848u;
    // 0x1ff848: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ff848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ff84c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF84Cu;
    {
        const bool branch_taken_0x1ff84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF84Cu;
        // 0x1ff850: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff84c) {
            ctx->pc = 0x1FF874u;
            return;
        }
    }
    ctx->pc = 0x1FF854u;
}
