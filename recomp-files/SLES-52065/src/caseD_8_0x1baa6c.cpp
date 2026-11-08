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

// Function: caseD_8
// Address: 0x1baa6c - 0x1baa8c
void caseD_8_0x1baa6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1baa6c");
#endif

    ctx->pc = 0x1baa6cu;

    // 0x1baa6c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baa6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa70: 0x0  nop
    ctx->pc = 0x1baa70u;
    // NOP
    // 0x1baa74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baa74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baa78: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1baa78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1baa7c: 0x0  nop
    ctx->pc = 0x1baa7cu;
    // NOP
    // 0x1baa80: 0x0  nop
    ctx->pc = 0x1baa80u;
    // NOP
    // 0x1baa84: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1BAA84u;
    {
        const bool branch_taken_0x1baa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA84u;
        // 0x1baa88: 0xe4800114  swc1        $f0, 0x114($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa84) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BAA8Cu;
}
