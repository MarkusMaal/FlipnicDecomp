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

// Function: entry_0011830c
// Address: 0x11830c - 0x118320
void entry_0011830c_0x11830c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011830c_0x11830c");
#endif

    ctx->pc = 0x11830cu;

    // 0x11830c: 0x0  nop
    ctx->pc = 0x11830cu;
    // NOP
    // 0x118310: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x118310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x118314: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x118314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x118318: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x118318u;
    {
        const bool branch_taken_0x118318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x118318) {
            ctx->pc = 0x11823Cu;
            return;
        }
    }
    ctx->pc = 0x118320u;
}
