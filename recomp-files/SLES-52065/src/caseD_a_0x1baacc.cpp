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

// Function: caseD_a
// Address: 0x1baacc - 0x1bab08
void caseD_a_0x1baacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1baacc");
#endif

    ctx->pc = 0x1baaccu;

    // 0x1baacc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baaccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baad0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1baad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1baad4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1baad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1baad8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1baad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1baadc: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x1baadcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1baae0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1baae0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1baae4: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x1baae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x1baae8: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1baae8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1baaec: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1baaecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1baaf0: 0x0  nop
    ctx->pc = 0x1baaf0u;
    // NOP
    // 0x1baaf4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1baaf4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1baaf8: 0x0  nop
    ctx->pc = 0x1baaf8u;
    // NOP
    // 0x1baafc: 0x0  nop
    ctx->pc = 0x1baafcu;
    // NOP
    // 0x1bab00: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1BAB00u;
    {
        const bool branch_taken_0x1bab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB00u;
        // 0x1bab04: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab00) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BAB08u;
}
