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

// Function: entry_001b1944
// Address: 0x1b1944 - 0x1b1980
void entry_001b1944_0x1b1944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1944_0x1b1944");
#endif

    ctx->pc = 0x1b1944u;

    // 0x1b1944: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x1b1944u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1948: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b1948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b194c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b194cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b1950: 0x0  nop
    ctx->pc = 0x1b1950u;
    // NOP
    // 0x1b1954: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b1954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b1958: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1b1958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1b195c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b195cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b1960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b1960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1964: 0x0  nop
    ctx->pc = 0x1b1964u;
    // NOP
    // 0x1b1968: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b1968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b196c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b196cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1970: 0x0  nop
    ctx->pc = 0x1b1970u;
    // NOP
    // 0x1b1974: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b1974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b1978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1978u;
    {
        const bool branch_taken_0x1b1978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1978u;
        // 0x1b197c: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1978) {
            ctx->pc = 0x1B1988u;
            return;
        }
    }
    ctx->pc = 0x1B1980u;
}
