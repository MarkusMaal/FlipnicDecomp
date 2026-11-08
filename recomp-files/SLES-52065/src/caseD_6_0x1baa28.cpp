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

// Function: caseD_6
// Address: 0x1baa28 - 0x1baa48
void caseD_6_0x1baa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1baa28");
#endif

    ctx->pc = 0x1baa28u;

    // 0x1baa28: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baa28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa2c: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1baa2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1baa30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baa30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baa34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1baa34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1baa38: 0x0  nop
    ctx->pc = 0x1baa38u;
    // NOP
    // 0x1baa3c: 0x0  nop
    ctx->pc = 0x1baa3cu;
    // NOP
    // 0x1baa40: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1BAA40u;
    {
        const bool branch_taken_0x1baa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA40u;
        // 0x1baa44: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa40) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BAA48u;
}
