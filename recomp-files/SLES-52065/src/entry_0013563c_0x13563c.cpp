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

// Function: entry_0013563c
// Address: 0x13563c - 0x135654
void entry_0013563c_0x13563c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013563c_0x13563c");
#endif

    ctx->pc = 0x13563cu;

    // 0x13563c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135640: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x135640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135644: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x135644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x135648: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x135648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13564c: 0x1450fff0  bne         $v0, $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13564Cu;
    {
        const bool branch_taken_0x13564c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x13564c) {
            ctx->pc = 0x135610u;
            return;
        }
    }
    ctx->pc = 0x135654u;
}
