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

// Function: entry_0013b630
// Address: 0x13b630 - 0x13b668
void entry_0013b630_0x13b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b630_0x13b630");
#endif

    ctx->pc = 0x13b630u;

    // 0x13b630: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B630u;
    {
        const bool branch_taken_0x13b630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b630) {
            ctx->pc = 0x13B668u;
            return;
        }
    }
    ctx->pc = 0x13B638u;
    // 0x13b638: 0x7a480000  lq          $t0, 0x0($s2)
    ctx->pc = 0x13b638u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b63c: 0x7a470010  lq          $a3, 0x10($s2)
    ctx->pc = 0x13b63cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13b640: 0x7a460020  lq          $a2, 0x20($s2)
    ctx->pc = 0x13b640u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x13b644: 0x7a450030  lq          $a1, 0x30($s2)
    ctx->pc = 0x13b644u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x13b648: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x13b648u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x13b64c: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x13b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x13b650: 0x7c660020  sq          $a2, 0x20($v1)
    ctx->pc = 0x13b650u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
    // 0x13b654: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x13b654u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x13b658: 0x7a460040  lq          $a2, 0x40($s2)
    ctx->pc = 0x13b658u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x13b65c: 0x7a450050  lq          $a1, 0x50($s2)
    ctx->pc = 0x13b65cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x13b660: 0x7c660040  sq          $a2, 0x40($v1)
    ctx->pc = 0x13b660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 6));
    // 0x13b664: 0x7c650050  sq          $a1, 0x50($v1)
    ctx->pc = 0x13b664u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 5));
    ctx->pc = 0x13b668u;
}
