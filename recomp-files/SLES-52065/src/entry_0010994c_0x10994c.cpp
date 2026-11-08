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

// Function: entry_0010994c
// Address: 0x10994c - 0x109964
void entry_0010994c_0x10994c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010994c_0x10994c");
#endif

    ctx->pc = 0x10994cu;

    // 0x10994c: 0x84500062  lh          $s0, 0x62($v0)
    ctx->pc = 0x10994cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x109950: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109950u;
    {
        const bool branch_taken_0x109950 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x109950) {
            ctx->pc = 0x109964u;
            return;
        }
    }
    ctx->pc = 0x109958u;
    // 0x109958: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x109958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x10995c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10995Cu;
    {
        const bool branch_taken_0x10995c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10995c) {
            ctx->pc = 0x10996Cu;
            return;
        }
    }
    ctx->pc = 0x109964u;
}
