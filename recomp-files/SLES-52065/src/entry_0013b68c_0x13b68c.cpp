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

// Function: entry_0013b68c
// Address: 0x13b68c - 0x13b6c4
void entry_0013b68c_0x13b68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b68c_0x13b68c");
#endif

    ctx->pc = 0x13b68cu;

    // 0x13b68c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B68Cu;
    {
        const bool branch_taken_0x13b68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b68c) {
            ctx->pc = 0x13B6C4u;
            return;
        }
    }
    ctx->pc = 0x13B694u;
    // 0x13b694: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x13b694u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b698: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x13b698u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13b69c: 0x78860020  lq          $a2, 0x20($a0)
    ctx->pc = 0x13b69cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13b6a0: 0x78850030  lq          $a1, 0x30($a0)
    ctx->pc = 0x13b6a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13b6a4: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x13b6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x13b6a8: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x13b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x13b6ac: 0x7c660020  sq          $a2, 0x20($v1)
    ctx->pc = 0x13b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
    // 0x13b6b0: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x13b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x13b6b4: 0x78860040  lq          $a2, 0x40($a0)
    ctx->pc = 0x13b6b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13b6b8: 0x78850050  lq          $a1, 0x50($a0)
    ctx->pc = 0x13b6b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x13b6bc: 0x7c660040  sq          $a2, 0x40($v1)
    ctx->pc = 0x13b6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 6));
    // 0x13b6c0: 0x7c650050  sq          $a1, 0x50($v1)
    ctx->pc = 0x13b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 5));
    ctx->pc = 0x13b6c4u;
}
