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

// Function: caseD_b
// Address: 0x1bab08 - 0x1bab48
void caseD_b_0x1bab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1bab08");
#endif

    ctx->pc = 0x1bab08u;

    // 0x1bab08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bab08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bab0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1bab0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bab10: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x1bab10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x1bab14: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1bab14u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1bab18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bab18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bab1c: 0x46032183  div.s       $f6, $f4, $f3
    ctx->pc = 0x1bab1cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x1bab20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bab20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bab24: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bab24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bab28: 0x46062880  add.s       $f2, $f5, $f6
    ctx->pc = 0x1bab28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1bab2c: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1bab2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1bab30: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x1bab30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x1bab34: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x1bab34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1bab38: 0x0  nop
    ctx->pc = 0x1bab38u;
    // NOP
    // 0x1bab3c: 0xe4810114  swc1        $f1, 0x114($a0)
    ctx->pc = 0x1bab3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x1bab40: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1BAB40u;
    {
        const bool branch_taken_0x1bab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB40u;
        // 0x1bab44: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab40) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BAB48u;
}
