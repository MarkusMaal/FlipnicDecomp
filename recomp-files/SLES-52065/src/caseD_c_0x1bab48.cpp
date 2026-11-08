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

// Function: caseD_c
// Address: 0x1bab48 - 0x1bab84
void caseD_c_0x1bab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1bab48");
#endif

    ctx->pc = 0x1bab48u;

    // 0x1bab48: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bab48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bab4c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bab50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bab50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bab54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bab54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bab58: 0x46022003  div.s       $f0, $f4, $f2
    ctx->pc = 0x1bab58u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x1bab5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bab5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bab60: 0xe4800114  swc1        $f0, 0x114($a0)
    ctx->pc = 0x1bab60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x1bab64: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x1bab64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x1bab68: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1bab68u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1bab6c: 0x0  nop
    ctx->pc = 0x1bab6cu;
    // NOP
    // 0x1bab70: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bab70u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bab74: 0x0  nop
    ctx->pc = 0x1bab74u;
    // NOP
    // 0x1bab78: 0x0  nop
    ctx->pc = 0x1bab78u;
    // NOP
    // 0x1bab7c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1BAB7Cu;
    {
        const bool branch_taken_0x1bab7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB7Cu;
        // 0x1bab80: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab7c) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BAB84u;
}
