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

// Function: entry_0012d2e8
// Address: 0x12d2e8 - 0x12d354
void entry_0012d2e8_0x12d2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d2e8_0x12d2e8");
#endif

    ctx->pc = 0x12d2e8u;

    // 0x12d2e8: 0xc6260034  lwc1        $f6, 0x34($s1)
    ctx->pc = 0x12d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x12d2ec: 0x3c044360  lui         $a0, 0x4360
    ctx->pc = 0x12d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17248 << 16));
    // 0x12d2f0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12d2f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d2f4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x12d2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12d2f8: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x12d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12d2fc: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x12d2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d300: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x12d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d304: 0xc6250030  lwc1        $f5, 0x30($s1)
    ctx->pc = 0x12d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12d308: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x12d308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d30c: 0x468018a0  cvt.s.w     $f2, $f3
    ctx->pc = 0x12d30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12d310: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x12d310u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12d314: 0x460231c0  add.s       $f7, $f6, $f2
    ctx->pc = 0x12d314u;
    ctx->f[7] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x12d318: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x12d318u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d31c: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x12d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12d320: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12d320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12d324: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x12d324u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12d328: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x12d328u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x12d32c: 0xc6280038  lwc1        $f8, 0x38($s1)
    ctx->pc = 0x12d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x12d330: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x12D330u;
    {
        const bool branch_taken_0x12d330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D330u;
        // 0x12d334: 0x46022140  add.s       $f5, $f4, $f2 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d330) {
            ctx->pc = 0x12D354u;
            return;
        }
    }
    ctx->pc = 0x12D338u;
    // 0x12d338: 0x3c0443a0  lui         $a0, 0x43A0
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17312 << 16));
    // 0x12d33c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12d33cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d340: 0x0  nop
    ctx->pc = 0x12d340u;
    // NOP
    // 0x12d344: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x12d344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d348: 0x0  nop
    ctx->pc = 0x12d348u;
    // NOP
    // 0x12d34c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D34Cu;
    {
        const bool branch_taken_0x12d34c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D34Cu;
        // 0x12d350: 0x3c04c360  lui         $a0, 0xC360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50016 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d34c) {
            ctx->pc = 0x12D364u;
            return;
        }
    }
    ctx->pc = 0x12D354u;
}
