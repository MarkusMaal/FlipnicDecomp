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

// Function: entry_0012d4e8
// Address: 0x12d4e8 - 0x12d500
void entry_0012d4e8_0x12d4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d4e8_0x12d4e8");
#endif

    ctx->pc = 0x12d4e8u;

    // 0x12d4e8: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x12d4e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x12d4ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x12d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12d4f0: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d4f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d4f4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d4f8: 0x0  nop
    ctx->pc = 0x12d4f8u;
    // NOP
    // 0x12d4fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12d4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x12d500u;
}
