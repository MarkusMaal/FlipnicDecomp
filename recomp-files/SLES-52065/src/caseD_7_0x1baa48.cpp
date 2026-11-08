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

// Function: caseD_7
// Address: 0x1baa48 - 0x1baa6c
void caseD_7_0x1baa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1baa48");
#endif

    ctx->pc = 0x1baa48u;

    // 0x1baa48: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1baa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1baa4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baa4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa50: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1baa50u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1baa54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baa54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baa58: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1baa58u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1baa5c: 0x0  nop
    ctx->pc = 0x1baa5cu;
    // NOP
    // 0x1baa60: 0x0  nop
    ctx->pc = 0x1baa60u;
    // NOP
    // 0x1baa64: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1BAA64u;
    {
        const bool branch_taken_0x1baa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA64u;
        // 0x1baa68: 0xe4800114  swc1        $f0, 0x114($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa64) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BAA6Cu;
}
