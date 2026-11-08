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

// Function: caseD_3
// Address: 0x1ba9c0 - 0x1ba9e4
void caseD_3_0x1ba9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ba9c0");
#endif

    ctx->pc = 0x1ba9c0u;

    // 0x1ba9c0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba9c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba9c4: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x1ba9c4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x1ba9c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba9cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba9ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ba9d0: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1ba9d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba9d4: 0x0  nop
    ctx->pc = 0x1ba9d4u;
    // NOP
    // 0x1ba9d8: 0x0  nop
    ctx->pc = 0x1ba9d8u;
    // NOP
    // 0x1ba9dc: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1BA9DCu;
    {
        const bool branch_taken_0x1ba9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9DCu;
        // 0x1ba9e0: 0xe4800114  swc1        $f0, 0x114($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9dc) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BA9E4u;
}
