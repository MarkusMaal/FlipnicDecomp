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

// Function: entry_00196648
// Address: 0x196648 - 0x196668
void entry_00196648_0x196648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196648_0x196648");
#endif

    ctx->pc = 0x196648u;

    // 0x196648: 0x8e630674  lw          $v1, 0x674($s3)
    ctx->pc = 0x196648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1652)));
    // 0x19664c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19664Cu;
    {
        const bool branch_taken_0x19664c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19664c) {
            ctx->pc = 0x196668u;
            return;
        }
    }
    ctx->pc = 0x196654u;
    // 0x196654: 0x8c640320  lw          $a0, 0x320($v1)
    ctx->pc = 0x196654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x196658: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x196658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19665c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19665Cu;
    {
        const bool branch_taken_0x19665c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19665c) {
            ctx->pc = 0x196668u;
            return;
        }
    }
    ctx->pc = 0x196664u;
    // 0x196664: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x196668u;
}
