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

// Function: entry_0013b2ac
// Address: 0x13b2ac - 0x13b2e4
void entry_0013b2ac_0x13b2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b2ac_0x13b2ac");
#endif

    ctx->pc = 0x13b2acu;

    // 0x13b2ac: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B2ACu;
    {
        const bool branch_taken_0x13b2ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b2ac) {
            ctx->pc = 0x13B2E4u;
            return;
        }
    }
    ctx->pc = 0x13B2B4u;
    // 0x13b2b4: 0x7a490000  lq          $t1, 0x0($s2)
    ctx->pc = 0x13b2b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b2b8: 0x7a480010  lq          $t0, 0x10($s2)
    ctx->pc = 0x13b2b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13b2bc: 0x7a470020  lq          $a3, 0x20($s2)
    ctx->pc = 0x13b2bcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x13b2c0: 0x7a460030  lq          $a2, 0x30($s2)
    ctx->pc = 0x13b2c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x13b2c4: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x13b2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x13b2c8: 0x7ca80010  sq          $t0, 0x10($a1)
    ctx->pc = 0x13b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 8));
    // 0x13b2cc: 0x7ca70020  sq          $a3, 0x20($a1)
    ctx->pc = 0x13b2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 7));
    // 0x13b2d0: 0x7ca60030  sq          $a2, 0x30($a1)
    ctx->pc = 0x13b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 6));
    // 0x13b2d4: 0x7a470040  lq          $a3, 0x40($s2)
    ctx->pc = 0x13b2d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x13b2d8: 0x7a460050  lq          $a2, 0x50($s2)
    ctx->pc = 0x13b2d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x13b2dc: 0x7ca70040  sq          $a3, 0x40($a1)
    ctx->pc = 0x13b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 7));
    // 0x13b2e0: 0x7ca60050  sq          $a2, 0x50($a1)
    ctx->pc = 0x13b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 6));
    ctx->pc = 0x13b2e4u;
}
