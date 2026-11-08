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

// Function: entry_00177758
// Address: 0x177758 - 0x1777c4
void entry_00177758_0x177758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177758_0x177758");
#endif

    ctx->pc = 0x177758u;

    // 0x177758: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x177758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17775c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17775cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177760: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x177760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177764: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x177764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x177768: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x177768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17776c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x17776cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177770: 0x0  nop
    ctx->pc = 0x177770u;
    // NOP
    // 0x177774: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x177774u;
    {
        const bool branch_taken_0x177774 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177774u;
        // 0x177778: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177774) {
            ctx->pc = 0x1777C4u;
            return;
        }
    }
    ctx->pc = 0x17777Cu;
    // 0x17777c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x17777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177784: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x177784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177788: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17778c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17778cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177790: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x177794: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x177794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177798: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x177798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17779c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17779cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1777a0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1777a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1777a4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1777a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1777a8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1777a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1777ac: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1777acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1777b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1777b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1777b4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1777b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1777b8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1777b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1777bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1777BCu;
    {
        const bool branch_taken_0x1777bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777BCu;
        // 0x1777c0: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777bc) {
            ctx->pc = 0x1777D0u;
            return;
        }
    }
    ctx->pc = 0x1777C4u;
}
