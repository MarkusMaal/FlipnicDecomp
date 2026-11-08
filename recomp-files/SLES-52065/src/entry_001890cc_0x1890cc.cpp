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

// Function: entry_001890cc
// Address: 0x1890cc - 0x1890e8
void entry_001890cc_0x1890cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001890cc_0x1890cc");
#endif

    ctx->pc = 0x1890ccu;

    // 0x1890cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1890ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1890d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1890d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1890d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1890d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1890d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1890d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1890dc: 0x0  nop
    ctx->pc = 0x1890dcu;
    // NOP
    // 0x1890e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1890e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1890e4: 0xa3a3007e  sb          $v1, 0x7E($sp)
    ctx->pc = 0x1890e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1890e8u;
}
