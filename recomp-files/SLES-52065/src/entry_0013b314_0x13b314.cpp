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

// Function: entry_0013b314
// Address: 0x13b314 - 0x13b34c
void entry_0013b314_0x13b314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b314_0x13b314");
#endif

    ctx->pc = 0x13b314u;

    // 0x13b314: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B314u;
    {
        const bool branch_taken_0x13b314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b314) {
            ctx->pc = 0x13B34Cu;
            return;
        }
    }
    ctx->pc = 0x13B31Cu;
    // 0x13b31c: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x13b31cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13b320: 0x79270010  lq          $a3, 0x10($t1)
    ctx->pc = 0x13b320u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x13b324: 0x79260020  lq          $a2, 0x20($t1)
    ctx->pc = 0x13b324u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x13b328: 0x79230030  lq          $v1, 0x30($t1)
    ctx->pc = 0x13b328u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x13b32c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x13b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x13b330: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x13b330u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
    // 0x13b334: 0x7ca60020  sq          $a2, 0x20($a1)
    ctx->pc = 0x13b334u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 6));
    // 0x13b338: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x13b338u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x13b33c: 0x79260040  lq          $a2, 0x40($t1)
    ctx->pc = 0x13b33cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x13b340: 0x79230050  lq          $v1, 0x50($t1)
    ctx->pc = 0x13b340u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x13b344: 0x7ca60040  sq          $a2, 0x40($a1)
    ctx->pc = 0x13b344u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 6));
    // 0x13b348: 0x7ca30050  sq          $v1, 0x50($a1)
    ctx->pc = 0x13b348u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 3));
    ctx->pc = 0x13b34cu;
}
