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

// Function: entry_0016b1f8
// Address: 0x16b1f8 - 0x16b234
void entry_0016b1f8_0x16b1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b1f8_0x16b1f8");
#endif

    ctx->pc = 0x16b1f8u;

    // 0x16b1f8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b1f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b1fc: 0x0  nop
    ctx->pc = 0x16b1fcu;
    // NOP
    // 0x16b200: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x16b200u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16b204: 0x0  nop
    ctx->pc = 0x16b204u;
    // NOP
    // 0x16b208: 0x0  nop
    ctx->pc = 0x16b208u;
    // NOP
    // 0x16b20c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16b20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b210: 0x0  nop
    ctx->pc = 0x16b210u;
    // NOP
    // 0x16b214: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16B214u;
    {
        const bool branch_taken_0x16b214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b214) {
            ctx->pc = 0x16B234u;
            return;
        }
    }
    ctx->pc = 0x16B21Cu;
    // 0x16b21c: 0x0  nop
    ctx->pc = 0x16b21cu;
    // NOP
    // 0x16b220: 0x0  nop
    ctx->pc = 0x16b220u;
    // NOP
    // 0x16b224: 0x46040b03  div.s       $f12, $f1, $f4
    ctx->pc = 0x16b224u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x16b228: 0x0  nop
    ctx->pc = 0x16b228u;
    // NOP
    // 0x16b22c: 0x0  nop
    ctx->pc = 0x16b22cu;
    // NOP
    // 0x16b230: 0x0  nop
    ctx->pc = 0x16b230u;
    // NOP
    ctx->pc = 0x16b234u;
}
