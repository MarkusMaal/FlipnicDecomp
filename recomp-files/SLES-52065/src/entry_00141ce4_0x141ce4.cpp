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

// Function: entry_00141ce4
// Address: 0x141ce4 - 0x141d08
void entry_00141ce4_0x141ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ce4_0x141ce4");
#endif

    ctx->pc = 0x141ce4u;

    // 0x141ce4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x141ce4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141ce8: 0x0  nop
    ctx->pc = 0x141ce8u;
    // NOP
    // 0x141cec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x141cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x141cf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x141cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x141cf4: 0x0  nop
    ctx->pc = 0x141cf4u;
    // NOP
    // 0x141cf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x141cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x141cfc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x141cfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x141d00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x141d00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x141d04: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x141d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    ctx->pc = 0x141d08u;
}
