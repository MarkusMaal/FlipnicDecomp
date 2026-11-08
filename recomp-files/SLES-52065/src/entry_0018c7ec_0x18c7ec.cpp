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

// Function: entry_0018c7ec
// Address: 0x18c7ec - 0x18c85c
void entry_0018c7ec_0x18c7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c7ec_0x18c7ec");
#endif

    ctx->pc = 0x18c7ecu;

    // 0x18c7ec: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x18c7ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c7f0: 0x0  nop
    ctx->pc = 0x18c7f0u;
    // NOP
    // 0x18c7f4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x18C7F4u;
    {
        const bool branch_taken_0x18c7f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c7f4) {
            ctx->pc = 0x18C85Cu;
            return;
        }
    }
    ctx->pc = 0x18C7FCu;
    // 0x18c7fc: 0x0  nop
    ctx->pc = 0x18c7fcu;
    // NOP
    // 0x18c800: 0x0  nop
    ctx->pc = 0x18c800u;
    // NOP
    // 0x18c804: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x18c804u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x18c808: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18c808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18c80c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c810: 0x0  nop
    ctx->pc = 0x18c810u;
    // NOP
    // 0x18c814: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18c814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18c818: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x18c818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x18c81c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c81cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18c820: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c820u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c824: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18c824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18c828: 0x0  nop
    ctx->pc = 0x18c828u;
    // NOP
    // 0x18c82c: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x18c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
    // 0x18c830: 0xc6010560  lwc1        $f1, 0x560($s0)
    ctx->pc = 0x18c830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c834: 0xc6000570  lwc1        $f0, 0x570($s0)
    ctx->pc = 0x18c834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c838: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c83c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c83cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18c840: 0xe6000570  swc1        $f0, 0x570($s0)
    ctx->pc = 0x18c840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x18c844: 0xc6010560  lwc1        $f1, 0x560($s0)
    ctx->pc = 0x18c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c848: 0xc6000574  lwc1        $f0, 0x574($s0)
    ctx->pc = 0x18c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c84c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c850: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c850u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18c854: 0xe6000574  swc1        $f0, 0x574($s0)
    ctx->pc = 0x18c854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
    // 0x18c858: 0xe614057c  swc1        $f20, 0x57C($s0)
    ctx->pc = 0x18c858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1404), bits); }
    ctx->pc = 0x18c85cu;
}
