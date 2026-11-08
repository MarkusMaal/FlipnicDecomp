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

// Function: caseD_1
// Address: 0x1ba980 - 0x1ba9a0
void caseD_1_0x1ba980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1ba980");
#endif

    ctx->pc = 0x1ba980u;

    // 0x1ba980: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba980u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba984: 0xe4850034  swc1        $f5, 0x34($a0)
    ctx->pc = 0x1ba984u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1ba988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba98c: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x1ba98cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x1ba990: 0x0  nop
    ctx->pc = 0x1ba990u;
    // NOP
    // 0x1ba994: 0x0  nop
    ctx->pc = 0x1ba994u;
    // NOP
    // 0x1ba998: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1BA998u;
    {
        const bool branch_taken_0x1ba998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA998u;
        // 0x1ba99c: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba998) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BA9A0u;
}
