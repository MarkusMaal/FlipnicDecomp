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

// Function: entry_0010e6e8
// Address: 0x10e6e8 - 0x10e6f8
void entry_0010e6e8_0x10e6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e6e8_0x10e6e8");
#endif

    ctx->pc = 0x10e6e8u;

    // 0x10e6e8: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x10e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10e6ec: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x10e6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10e6f0: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x10E6F0u;
    {
        const bool branch_taken_0x10e6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e6f0) {
            ctx->pc = 0x10E6B4u;
            return;
        }
    }
    ctx->pc = 0x10E6F8u;
}
