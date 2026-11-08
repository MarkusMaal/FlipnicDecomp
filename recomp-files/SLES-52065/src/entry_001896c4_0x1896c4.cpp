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

// Function: entry_001896c4
// Address: 0x1896c4 - 0x1896e0
void entry_001896c4_0x1896c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001896c4_0x1896c4");
#endif

    ctx->pc = 0x1896c4u;

    // 0x1896c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1896c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1896c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1896c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1896cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1896ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1896d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1896d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1896d4: 0x0  nop
    ctx->pc = 0x1896d4u;
    // NOP
    // 0x1896d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1896d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1896dc: 0xa3a300dd  sb          $v1, 0xDD($sp)
    ctx->pc = 0x1896dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 221), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1896e0u;
}
