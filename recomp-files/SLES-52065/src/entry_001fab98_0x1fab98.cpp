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

// Function: entry_001fab98
// Address: 0x1fab98 - 0x1faba4
void entry_001fab98_0x1fab98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fab98_0x1fab98");
#endif

    ctx->pc = 0x1fab98u;

    // 0x1fab98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fab98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fab9c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1fab9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1faba0: 0x0  nop
    ctx->pc = 0x1faba0u;
    // NOP
    ctx->pc = 0x1faba4u;
}
