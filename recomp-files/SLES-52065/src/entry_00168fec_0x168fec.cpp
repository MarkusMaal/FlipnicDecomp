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

// Function: entry_00168fec
// Address: 0x168fec - 0x169008
void entry_00168fec_0x168fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168fec_0x168fec");
#endif

    ctx->pc = 0x168fecu;

    // 0x168fec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x168fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168ff0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x168ff0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168ff4: 0x0  nop
    ctx->pc = 0x168ff4u;
    // NOP
    // 0x168ff8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x168ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x168ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x168ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169000: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x169000u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x169004: 0xe6000240  swc1        $f0, 0x240($s0)
    ctx->pc = 0x169004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
    ctx->pc = 0x169008u;
}
