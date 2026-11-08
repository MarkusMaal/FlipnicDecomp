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

// Function: entry_0011037c
// Address: 0x11037c - 0x110390
void entry_0011037c_0x11037c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011037c_0x11037c");
#endif

    ctx->pc = 0x11037cu;

    // 0x11037c: 0x0  nop
    ctx->pc = 0x11037cu;
    // NOP
    // 0x110380: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110384: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x110384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110388: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x110388u;
    {
        const bool branch_taken_0x110388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110388) {
            ctx->pc = 0x11034Cu;
            return;
        }
    }
    ctx->pc = 0x110390u;
}
