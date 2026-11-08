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

// Function: entry_0012d5a4
// Address: 0x12d5a4 - 0x12d5c0
void entry_0012d5a4_0x12d5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d5a4_0x12d5a4");
#endif

    ctx->pc = 0x12d5a4u;

    // 0x12d5a4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x12d5a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x12d5a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x12d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12d5ac: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d5acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d5b0: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d5b4: 0x0  nop
    ctx->pc = 0x12d5b4u;
    // NOP
    // 0x12d5b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12d5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12d5bc: 0x3c024700  lui         $v0, 0x4700
    ctx->pc = 0x12d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
    ctx->pc = 0x12d5c0u;
}
