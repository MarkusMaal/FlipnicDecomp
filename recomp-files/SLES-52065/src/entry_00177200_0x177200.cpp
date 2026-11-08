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

// Function: entry_00177200
// Address: 0x177200 - 0x177240
void entry_00177200_0x177200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177200_0x177200");
#endif

    ctx->pc = 0x177200u;

    // 0x177200: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x177200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x177204: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x177204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x177208: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x177208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17720c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x17720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x177210: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x177210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177214: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x177214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177218: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x177218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17721c: 0x0  nop
    ctx->pc = 0x17721cu;
    // NOP
    // 0x177220: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x177220u;
    {
        const bool branch_taken_0x177220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x177220) {
            ctx->pc = 0x177240u;
            return;
        }
    }
    ctx->pc = 0x177228u;
    // 0x177228: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x177228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17722c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17722cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177230: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x177230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x177234: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x177234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177238: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x177238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17723c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x17723cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    ctx->pc = 0x177240u;
}
