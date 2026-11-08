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

// Function: caseD_9
// Address: 0x1baa8c - 0x1baacc
void caseD_9_0x1baa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1baa8c");
#endif

    ctx->pc = 0x1baa8cu;

    // 0x1baa8c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1baa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1baa90: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1baa90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1baa94: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1baa94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa98: 0x46041943  div.s       $f5, $f3, $f4
    ctx->pc = 0x1baa98u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x1baa9c: 0x46050880  add.s       $f2, $f1, $f5
    ctx->pc = 0x1baa9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1baaa0: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1baaa0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1baaa4: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x1baaa4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x1baaa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baaa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baaac: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1baaacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1baab0: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x1baab0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
    // 0x1baab4: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x1baab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1baab8: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x1baab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1baabc: 0x0  nop
    ctx->pc = 0x1baabcu;
    // NOP
    // 0x1baac0: 0xe4810110  swc1        $f1, 0x110($a0)
    ctx->pc = 0x1baac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x1baac4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1BAAC4u;
    {
        const bool branch_taken_0x1baac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAC4u;
        // 0x1baac8: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baac4) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BAACCu;
}
