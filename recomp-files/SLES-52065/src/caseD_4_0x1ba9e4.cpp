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

// Function: caseD_4
// Address: 0x1ba9e4 - 0x1baa04
void caseD_4_0x1ba9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1ba9e4");
#endif

    ctx->pc = 0x1ba9e4u;

    // 0x1ba9e4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba9e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba9e8: 0x0  nop
    ctx->pc = 0x1ba9e8u;
    // NOP
    // 0x1ba9ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba9f0: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x1ba9f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x1ba9f4: 0x0  nop
    ctx->pc = 0x1ba9f4u;
    // NOP
    // 0x1ba9f8: 0x0  nop
    ctx->pc = 0x1ba9f8u;
    // NOP
    // 0x1ba9fc: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1BA9FCu;
    {
        const bool branch_taken_0x1ba9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9FCu;
        // 0x1baa00: 0xe4800114  swc1        $f0, 0x114($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9fc) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BAA04u;
}
