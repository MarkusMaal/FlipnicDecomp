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

// Function: entry_00189124
// Address: 0x189124 - 0x189140
void entry_00189124_0x189124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189124_0x189124");
#endif

    ctx->pc = 0x189124u;

    // 0x189124: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x189124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189128: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x189128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18912c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18912cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189130: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189134: 0x0  nop
    ctx->pc = 0x189134u;
    // NOP
    // 0x189138: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18913c: 0xa3a3007f  sb          $v1, 0x7F($sp)
    ctx->pc = 0x18913cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x189140u;
}
