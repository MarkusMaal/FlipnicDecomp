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

// Function: entry_0013ef04
// Address: 0x13ef04 - 0x13ef24
void entry_0013ef04_0x13ef04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ef04_0x13ef04");
#endif

    ctx->pc = 0x13ef04u;

    // 0x13ef04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ef08: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13ef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ef0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ef0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef10: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x13ef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ef14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13ef14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13ef18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13ef18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13ef1c: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x13ef1cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x13ef20: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x13ef20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    ctx->pc = 0x13ef24u;
}
