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

// Function: entry_0016e394
// Address: 0x16e394 - 0x16e3b0
void entry_0016e394_0x16e394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e394_0x16e394");
#endif

    ctx->pc = 0x16e394u;

    // 0x16e394: 0x8e4301d8  lw          $v1, 0x1D8($s2)
    ctx->pc = 0x16e394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
    // 0x16e398: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x16e398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16e39c: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x16e39cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x16e3a0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E3A0u;
    {
        const bool branch_taken_0x16e3a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16e3a0) {
            ctx->pc = 0x16E3B0u;
            return;
        }
    }
    ctx->pc = 0x16E3A8u;
    // 0x16e3a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E3A8u;
    {
        const bool branch_taken_0x16e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e3a8) {
            ctx->pc = 0x16E3B4u;
            return;
        }
    }
    ctx->pc = 0x16E3B0u;
}
