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

// Function: entry_00127014
// Address: 0x127014 - 0x127028
void entry_00127014_0x127014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127014_0x127014");
#endif

    ctx->pc = 0x127014u;

    // 0x127014: 0x0  nop
    ctx->pc = 0x127014u;
    // NOP
    // 0x127018: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x127018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12701c: 0x0  nop
    ctx->pc = 0x12701cu;
    // NOP
    // 0x127020: 0x4500fffb  bc1f        . + 4 + (-0x5 << 2)
    ctx->pc = 0x127020u;
    {
        const bool branch_taken_0x127020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127020) {
            ctx->pc = 0x127010u;
            return;
        }
    }
    ctx->pc = 0x127028u;
}
