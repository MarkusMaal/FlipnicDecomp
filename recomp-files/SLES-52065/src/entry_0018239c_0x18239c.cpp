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

// Function: entry_0018239c
// Address: 0x18239c - 0x1823b8
void entry_0018239c_0x18239c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018239c_0x18239c");
#endif

    ctx->pc = 0x18239cu;

    // 0x18239c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18239cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1823a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1823a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1823a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1823a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1823a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1823a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1823ac: 0x0  nop
    ctx->pc = 0x1823acu;
    // NOP
    // 0x1823b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1823b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1823b4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1823b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    ctx->pc = 0x1823b8u;
}
