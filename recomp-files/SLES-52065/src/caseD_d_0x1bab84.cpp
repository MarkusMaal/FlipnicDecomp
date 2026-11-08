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

// Function: caseD_d
// Address: 0x1bab84 - 0x1babec
void caseD_d_0x1bab84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1bab84");
#endif

    ctx->pc = 0x1bab84u;

    // 0x1bab84: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bab84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bab88: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bab88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bab8c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1bab8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1bab90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1bab90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bab94: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1bab94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1bab98: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x1bab98u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
    // 0x1bab9c: 0x460619c3  div.s       $f7, $f3, $f6
    ctx->pc = 0x1bab9cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[3], ctx->f[6]); }
    // 0x1baba0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1baba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1baba4: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1baba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1baba8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1baba8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1babac: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x1babacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1babb0: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x1babb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x1babb4: 0x46023803  div.s       $f0, $f7, $f2
    ctx->pc = 0x1babb4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[7], ctx->f[2]); }
    // 0x1babb8: 0x460620c3  div.s       $f3, $f4, $f6
    ctx->pc = 0x1babb8u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[6]); }
    // 0x1babbc: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x1babbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x1babc0: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x1babc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x1babc4: 0x46032840  add.s       $f1, $f5, $f3
    ctx->pc = 0x1babc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1babc8: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1babc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1babcc: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x1babccu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
    // 0x1babd0: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x1babd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1babd4: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1babd4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1babd8: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x1babd8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1babdc: 0x0  nop
    ctx->pc = 0x1babdcu;
    // NOP
    // 0x1babe0: 0xe4810114  swc1        $f1, 0x114($a0)
    ctx->pc = 0x1babe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x1babe4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BABE4u;
    {
        const bool branch_taken_0x1babe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABE4u;
        // 0x1babe8: 0xe4800124  swc1        $f0, 0x124($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babe4) {
            ctx->pc = 0x1BAC34u;
            return;
        }
    }
    ctx->pc = 0x1BABECu;
}
