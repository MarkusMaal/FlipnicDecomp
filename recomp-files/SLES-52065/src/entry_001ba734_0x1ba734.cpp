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

// Function: entry_001ba734
// Address: 0x1ba734 - 0x1ba758
void entry_001ba734_0x1ba734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba734_0x1ba734");
#endif

    ctx->pc = 0x1ba734u;

    // 0x1ba734: 0x1472821  addu        $a1, $t2, $a3
    ctx->pc = 0x1ba734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1ba738: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1ba738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ba73c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ba73cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba744: 0x0  nop
    ctx->pc = 0x1ba744u;
    // NOP
    // 0x1ba748: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ba74c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba750: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1ba750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba754: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    ctx->pc = 0x1ba758u;
}
