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

// Function: entry_0015c6e0
// Address: 0x15c6e0 - 0x15c6f8
void entry_0015c6e0_0x15c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c6e0_0x15c6e0");
#endif

    ctx->pc = 0x15c6e0u;

    // 0x15c6e0: 0x460408c2  mul.s       $f3, $f1, $f4
    ctx->pc = 0x15c6e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x15c6e4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x15c6e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c6e8: 0x0  nop
    ctx->pc = 0x15c6e8u;
    // NOP
    // 0x15c6ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C6ECu;
    {
        const bool branch_taken_0x15c6ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c6ec) {
            ctx->pc = 0x15C6F8u;
            return;
        }
    }
    ctx->pc = 0x15C6F4u;
    // 0x15c6f4: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x15c6f4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    ctx->pc = 0x15c6f8u;
}
