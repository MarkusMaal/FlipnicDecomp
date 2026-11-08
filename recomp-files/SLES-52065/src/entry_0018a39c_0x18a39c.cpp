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

// Function: entry_0018a39c
// Address: 0x18a39c - 0x18a3ac
void entry_0018a39c_0x18a39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a39c_0x18a39c");
#endif

    ctx->pc = 0x18a39cu;

    // 0x18a39c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x18a39cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a3a0: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x18a3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a3a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18a3a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18a3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x18a3acu;
}
