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

// Function: entry_00170d74
// Address: 0x170d74 - 0x170db4
void entry_00170d74_0x170d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170d74_0x170d74");
#endif

    ctx->pc = 0x170d74u;

    // 0x170d74: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x170d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170d78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170d7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x170d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170d80: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x170d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170d84: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x170d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x170d88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x170d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x170d8c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x170d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x170d90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170d90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x170d94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x170d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x170d98: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x170d98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x170d9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x170d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x170da0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x170da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170da4: 0x0  nop
    ctx->pc = 0x170da4u;
    // NOP
    // 0x170da8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x170DA8u;
    {
        const bool branch_taken_0x170da8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DA8u;
        // 0x170dac: 0xe6000244  swc1        $f0, 0x244($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170da8) {
            ctx->pc = 0x170DB4u;
            return;
        }
    }
    ctx->pc = 0x170DB0u;
    // 0x170db0: 0xe6030244  swc1        $f3, 0x244($s0)
    ctx->pc = 0x170db0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
    ctx->pc = 0x170db4u;
}
