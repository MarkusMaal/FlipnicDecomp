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

// Function: entry_0019c828
// Address: 0x19c828 - 0x19c844
void entry_0019c828_0x19c828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c828_0x19c828");
#endif

    ctx->pc = 0x19c828u;

    // 0x19c828: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19c82c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c830: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x19c830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19c834: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C834u;
    {
        const bool branch_taken_0x19c834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19c834) {
            ctx->pc = 0x19C844u;
            return;
        }
    }
    ctx->pc = 0x19C83Cu;
    // 0x19c83c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C83Cu;
    {
        const bool branch_taken_0x19c83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c83c) {
            ctx->pc = 0x19C848u;
            return;
        }
    }
    ctx->pc = 0x19C844u;
}
