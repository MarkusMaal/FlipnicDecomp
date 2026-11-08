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

// Function: entry_0010e1c0
// Address: 0x10e1c0 - 0x10e1d8
void entry_0010e1c0_0x10e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e1c0_0x10e1c0");
#endif

    ctx->pc = 0x10e1c0u;

    // 0x10e1c0: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x10e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x10e1c4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x10e1c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10e1c8: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x10E1C8u;
    {
        const bool branch_taken_0x10e1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e1c8) {
            ctx->pc = 0x10E148u;
            return;
        }
    }
    ctx->pc = 0x10E1D0u;
    // 0x10e1d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x10E1D0u;
    {
        const bool branch_taken_0x10e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e1d0) {
            ctx->pc = 0x10E268u;
            return;
        }
    }
    ctx->pc = 0x10E1D8u;
}
