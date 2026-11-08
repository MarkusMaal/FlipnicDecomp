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

// Function: caseD_5
// Address: 0x1baa04 - 0x1baa28
void caseD_5_0x1baa04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1baa04");
#endif

    ctx->pc = 0x1baa04u;

    // 0x1baa04: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baa04u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa08: 0x0  nop
    ctx->pc = 0x1baa08u;
    // NOP
    // 0x1baa0c: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x1baa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1baa10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baa10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baa14: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1baa14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1baa18: 0x0  nop
    ctx->pc = 0x1baa18u;
    // NOP
    // 0x1baa1c: 0x0  nop
    ctx->pc = 0x1baa1cu;
    // NOP
    // 0x1baa20: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1BAA20u;
    {
        const bool branch_taken_0x1baa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA20u;
        // 0x1baa24: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa20) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BAA28u;
}
