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

// Function: entry_0013b390
// Address: 0x13b390 - 0x13b3c8
void entry_0013b390_0x13b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b390_0x13b390");
#endif

    ctx->pc = 0x13b390u;

    // 0x13b390: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x13B390u;
    {
        const bool branch_taken_0x13b390 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b390) {
            ctx->pc = 0x13B3C8u;
            return;
        }
    }
    ctx->pc = 0x13B398u;
    // 0x13b398: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x13b398u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13b39c: 0x79270010  lq          $a3, 0x10($t1)
    ctx->pc = 0x13b39cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x13b3a0: 0x79260020  lq          $a2, 0x20($t1)
    ctx->pc = 0x13b3a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x13b3a4: 0x79250030  lq          $a1, 0x30($t1)
    ctx->pc = 0x13b3a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x13b3a8: 0x7d480000  sq          $t0, 0x0($t2)
    ctx->pc = 0x13b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 8));
    // 0x13b3ac: 0x7d470010  sq          $a3, 0x10($t2)
    ctx->pc = 0x13b3acu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 7));
    // 0x13b3b0: 0x7d460020  sq          $a2, 0x20($t2)
    ctx->pc = 0x13b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 6));
    // 0x13b3b4: 0x7d450030  sq          $a1, 0x30($t2)
    ctx->pc = 0x13b3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 5));
    // 0x13b3b8: 0x79260040  lq          $a2, 0x40($t1)
    ctx->pc = 0x13b3b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x13b3bc: 0x79250050  lq          $a1, 0x50($t1)
    ctx->pc = 0x13b3bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x13b3c0: 0x7d460040  sq          $a2, 0x40($t2)
    ctx->pc = 0x13b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 64), GPR_VEC(ctx, 6));
    // 0x13b3c4: 0x7d450050  sq          $a1, 0x50($t2)
    ctx->pc = 0x13b3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 80), GPR_VEC(ctx, 5));
    ctx->pc = 0x13b3c8u;
}
