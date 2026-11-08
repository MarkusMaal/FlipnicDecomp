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

// Function: entry_001b9318
// Address: 0x1b9318 - 0x1b936c
void entry_001b9318_0x1b9318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9318_0x1b9318");
#endif

    ctx->pc = 0x1b9318u;

    // 0x1b9318: 0x920300c3  lbu         $v1, 0xC3($s0)
    ctx->pc = 0x1b9318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 195)));
    // 0x1b931c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B931Cu;
    {
        const bool branch_taken_0x1b931c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b931c) {
            ctx->pc = 0x1B93CCu;
            return;
        }
    }
    ctx->pc = 0x1B9324u;
    // 0x1b9324: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9328: 0xc420f450  lwc1        $f0, -0xBB0($at)
    ctx->pc = 0x1b9328u;
    { uint32_t bits = FAST_READ32(0x36F450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b932c: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1b932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9330: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9334: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b9334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b9338: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b933c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1b933cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1b9340: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1b9340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b9344: 0xc4212f50  lwc1        $f1, 0x2F50($at)
    ctx->pc = 0x1b9344u;
    { uint32_t bits = FAST_READ32(0x212F50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9348: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1b9348u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1b934c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b934cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9350: 0x0  nop
    ctx->pc = 0x1b9350u;
    // NOP
    // 0x1b9354: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9354u;
    {
        const bool branch_taken_0x1b9354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9354u;
        // 0x1b9358: 0x27a30078  addiu       $v1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9354) {
            ctx->pc = 0x1B936Cu;
            return;
        }
    }
    ctx->pc = 0x1B935Cu;
    // 0x1b935c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1b935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1b9360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9360u;
    {
        const bool branch_taken_0x1b9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9360u;
        // 0x1b9364: 0x24632f50  addiu       $v1, $v1, 0x2F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9360) {
            ctx->pc = 0x1B936Cu;
            return;
        }
    }
    ctx->pc = 0x1B9368u;
    // 0x1b9368: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x1b9368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->pc = 0x1b936cu;
}
