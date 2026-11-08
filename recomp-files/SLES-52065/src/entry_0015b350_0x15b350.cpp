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

// Function: entry_0015b350
// Address: 0x15b350 - 0x15b3e0
void entry_0015b350_0x15b350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b350_0x15b350");
#endif

    ctx->pc = 0x15b350u;

    // 0x15b350: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x15b350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15b354: 0x0  nop
    ctx->pc = 0x15b354u;
    // NOP
    // 0x15b358: 0x46073036  c.le.s      $f6, $f7
    ctx->pc = 0x15b358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b35c: 0x0  nop
    ctx->pc = 0x15b35cu;
    // NOP
    // 0x15b360: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x15B360u;
    {
        const bool branch_taken_0x15b360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B360u;
        // 0x15b364: 0x46012981  sub.s       $f6, $f5, $f1 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b360) {
            ctx->pc = 0x15B3E0u;
            return;
        }
    }
    ctx->pc = 0x15B368u;
    // 0x15b368: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x15b368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b36c: 0x0  nop
    ctx->pc = 0x15b36cu;
    // NOP
    // 0x15b370: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x15B370u;
    {
        const bool branch_taken_0x15b370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b370) {
            ctx->pc = 0x15B3E0u;
            return;
        }
    }
    ctx->pc = 0x15B378u;
    // 0x15b378: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x15b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15b37c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15b380: 0xc4a70300  lwc1        $f7, 0x300($a1)
    ctx->pc = 0x15b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15b384: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x15b384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15b388: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x15b388u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x15b38c: 0x460709c3  div.s       $f7, $f1, $f7
    ctx->pc = 0x15b38cu;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[1], ctx->f[7]); }
    // 0x15b390: 0x0  nop
    ctx->pc = 0x15b390u;
    // NOP
    // 0x15b394: 0x0  nop
    ctx->pc = 0x15b394u;
    // NOP
    // 0x15b398: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x15b398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b39c: 0x0  nop
    ctx->pc = 0x15b39cu;
    // NOP
    // 0x15b3a0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x15B3A0u;
    {
        const bool branch_taken_0x15b3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b3a0) {
            ctx->pc = 0x15B3E0u;
            return;
        }
    }
    ctx->pc = 0x15B3A8u;
    // 0x15b3a8: 0xc4a10308  lwc1        $f1, 0x308($a1)
    ctx->pc = 0x15b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b3ac: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x15b3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15b3b0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x15b3b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x15b3b4: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x15b3b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x15b3b8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x15b3b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b3bc: 0x0  nop
    ctx->pc = 0x15b3bcu;
    // NOP
    // 0x15b3c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15B3C0u;
    {
        const bool branch_taken_0x15b3c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b3c0) {
            ctx->pc = 0x15B3E0u;
            return;
        }
    }
    ctx->pc = 0x15B3C8u;
    // 0x15b3c8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x15b3c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b3cc: 0x0  nop
    ctx->pc = 0x15b3ccu;
    // NOP
    // 0x15b3d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15B3D0u;
    {
        const bool branch_taken_0x15b3d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b3d0) {
            ctx->pc = 0x15B3E0u;
            return;
        }
    }
    ctx->pc = 0x15B3D8u;
    // 0x15b3d8: 0xe4a702e8  swc1        $f7, 0x2E8($a1)
    ctx->pc = 0x15b3d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
    // 0x15b3dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15b3e0u;
}
