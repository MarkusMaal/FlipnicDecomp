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

// Function: entry_0015b3e0
// Address: 0x15b3e0 - 0x15b478
void entry_0015b3e0_0x15b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b3e0_0x15b3e0");
#endif

    ctx->pc = 0x15b3e0u;

    // 0x15b3e0: 0x46002841  sub.s       $f1, $f5, $f0
    ctx->pc = 0x15b3e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x15b3e4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x15b3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15b3e8: 0x0  nop
    ctx->pc = 0x15b3e8u;
    // NOP
    // 0x15b3ec: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x15b3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b3f0: 0x0  nop
    ctx->pc = 0x15b3f0u;
    // NOP
    // 0x15b3f4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x15B3F4u;
    {
        const bool branch_taken_0x15b3f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3F4u;
        // 0x15b3f8: 0x46002041  sub.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3f4) {
            ctx->pc = 0x15B478u;
            return;
        }
    }
    ctx->pc = 0x15B3FCu;
    // 0x15b3fc: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x15b3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b400: 0x0  nop
    ctx->pc = 0x15b400u;
    // NOP
    // 0x15b404: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x15B404u;
    {
        const bool branch_taken_0x15b404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b404) {
            ctx->pc = 0x15B478u;
            return;
        }
    }
    ctx->pc = 0x15B40Cu;
    // 0x15b40c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x15b40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15b410: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15b410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15b414: 0xc4a40300  lwc1        $f4, 0x300($a1)
    ctx->pc = 0x15b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15b418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15b418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b41c: 0x0  nop
    ctx->pc = 0x15b41cu;
    // NOP
    // 0x15b420: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x15b420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x15b424: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x15b424u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x15b428: 0x0  nop
    ctx->pc = 0x15b428u;
    // NOP
    // 0x15b42c: 0x0  nop
    ctx->pc = 0x15b42cu;
    // NOP
    // 0x15b430: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x15b430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b434: 0x0  nop
    ctx->pc = 0x15b434u;
    // NOP
    // 0x15b438: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x15B438u;
    {
        const bool branch_taken_0x15b438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b438) {
            ctx->pc = 0x15B478u;
            return;
        }
    }
    ctx->pc = 0x15B440u;
    // 0x15b440: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x15b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b444: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x15b444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b448: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x15b448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15b44c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15b44cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15b450: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x15b450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b454: 0x0  nop
    ctx->pc = 0x15b454u;
    // NOP
    // 0x15b458: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15B458u;
    {
        const bool branch_taken_0x15b458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b458) {
            ctx->pc = 0x15B478u;
            return;
        }
    }
    ctx->pc = 0x15B460u;
    // 0x15b460: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x15b460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b464: 0x0  nop
    ctx->pc = 0x15b464u;
    // NOP
    // 0x15b468: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15B468u;
    {
        const bool branch_taken_0x15b468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b468) {
            ctx->pc = 0x15B478u;
            return;
        }
    }
    ctx->pc = 0x15B470u;
    // 0x15b470: 0xe4a402e8  swc1        $f4, 0x2E8($a1)
    ctx->pc = 0x15b470u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
    // 0x15b474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15b478u;
}
