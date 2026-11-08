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

// Function: entry_00177440
// Address: 0x177440 - 0x1774bc
void entry_00177440_0x177440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177440_0x177440");
#endif

    ctx->pc = 0x177440u;

    // 0x177440: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x177440u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177444: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x177444u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x177448: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x177448u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17744c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17744cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177450: 0x0  nop
    ctx->pc = 0x177450u;
    // NOP
    // 0x177454: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x177454u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177458: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x177458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17745c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17745cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177460: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x177460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x177464: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x177464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x177468: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x177468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17746c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x17746Cu;
    {
        const bool branch_taken_0x17746c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17746Cu;
        // 0x177470: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17746c) {
            ctx->pc = 0x1774BCu;
            return;
        }
    }
    ctx->pc = 0x177474u;
    // 0x177474: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x177474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177478: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x177478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17747c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177480: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177484: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177488: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17748c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177490: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x177490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177494: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177498: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17749c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17749cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1774a0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1774a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1774a4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1774a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1774a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1774a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1774ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1774acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1774b0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1774b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1774b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1774B4u;
    {
        const bool branch_taken_0x1774b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774B4u;
        // 0x1774b8: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774b4) {
            ctx->pc = 0x1774C8u;
            return;
        }
    }
    ctx->pc = 0x1774BCu;
}
