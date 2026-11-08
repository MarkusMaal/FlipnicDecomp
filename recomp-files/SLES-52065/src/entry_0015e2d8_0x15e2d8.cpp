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

// Function: entry_0015e2d8
// Address: 0x15e2d8 - 0x15e37c
void entry_0015e2d8_0x15e2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e2d8_0x15e2d8");
#endif

    ctx->pc = 0x15e2d8u;

    // 0x15e2d8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x15e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x15e2dc: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x15e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e2e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e2e4: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x15e2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e2e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15e2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15e2ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15e2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e2f0: 0x0  nop
    ctx->pc = 0x15e2f0u;
    // NOP
    // 0x15e2f4: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x15E2F4u;
    {
        const bool branch_taken_0x15e2f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e2f4) {
            ctx->pc = 0x15E37Cu;
            return;
        }
    }
    ctx->pc = 0x15E2FCu;
    // 0x15e2fc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x15e2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e300: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15e300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15e304: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15e304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e308: 0x0  nop
    ctx->pc = 0x15e308u;
    // NOP
    // 0x15e30c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x15E30Cu;
    {
        const bool branch_taken_0x15e30c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e30c) {
            ctx->pc = 0x15E37Cu;
            return;
        }
    }
    ctx->pc = 0x15E314u;
    // 0x15e314: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x15e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e318: 0xc4820044  lwc1        $f2, 0x44($a0)
    ctx->pc = 0x15e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e31c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15e31cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15e320: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15e320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e324: 0x0  nop
    ctx->pc = 0x15e324u;
    // NOP
    // 0x15e328: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x15E328u;
    {
        const bool branch_taken_0x15e328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e328) {
            ctx->pc = 0x15E37Cu;
            return;
        }
    }
    ctx->pc = 0x15E330u;
    // 0x15e330: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x15e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e334: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15e334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15e338: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15e338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e33c: 0x0  nop
    ctx->pc = 0x15e33cu;
    // NOP
    // 0x15e340: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x15E340u;
    {
        const bool branch_taken_0x15e340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e340) {
            ctx->pc = 0x15E37Cu;
            return;
        }
    }
    ctx->pc = 0x15E348u;
    // 0x15e348: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x15e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e34c: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x15e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e350: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15e350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15e354: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15e354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e358: 0x0  nop
    ctx->pc = 0x15e358u;
    // NOP
    // 0x15e35c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x15E35Cu;
    {
        const bool branch_taken_0x15e35c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e35c) {
            ctx->pc = 0x15E37Cu;
            return;
        }
    }
    ctx->pc = 0x15E364u;
    // 0x15e364: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x15e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e368: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15e368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15e36c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15e36cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e370: 0x0  nop
    ctx->pc = 0x15e370u;
    // NOP
    // 0x15e374: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15E374u;
    {
        const bool branch_taken_0x15e374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e374) {
            ctx->pc = 0x15E388u;
            return;
        }
    }
    ctx->pc = 0x15E37Cu;
}
