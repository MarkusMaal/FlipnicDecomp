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

// Function: entry_001577dc
// Address: 0x1577dc - 0x1577f8
void entry_001577dc_0x1577dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001577dc_0x1577dc");
#endif

    ctx->pc = 0x1577dcu;

    // 0x1577dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1577dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1577e0: 0x0  nop
    ctx->pc = 0x1577e0u;
    // NOP
    // 0x1577e4: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1577e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1577e8: 0x0  nop
    ctx->pc = 0x1577e8u;
    // NOP
    // 0x1577ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1577ECu;
    {
        const bool branch_taken_0x1577ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1577ec) {
            ctx->pc = 0x1577F8u;
            return;
        }
    }
    ctx->pc = 0x1577F4u;
    // 0x1577f4: 0xe481026c  swc1        $f1, 0x26C($a0)
    ctx->pc = 0x1577f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 620), bits); }
    ctx->pc = 0x1577f8u;
}
