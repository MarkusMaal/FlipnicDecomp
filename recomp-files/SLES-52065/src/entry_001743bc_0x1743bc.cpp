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

// Function: entry_001743bc
// Address: 0x1743bc - 0x174484
void entry_001743bc_0x1743bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001743bc_0x1743bc");
#endif

    ctx->pc = 0x1743bcu;

    // 0x1743bc: 0x0  nop
    ctx->pc = 0x1743bcu;
    // NOP
    // 0x1743c0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1743c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1743c4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1743c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1743c8: 0x24421850  addiu       $v0, $v0, 0x1850
    ctx->pc = 0x1743c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6224));
    // 0x1743cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1743ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1743d0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1743d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1743d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1743d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1743d8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1743d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1743dc: 0x0  nop
    ctx->pc = 0x1743dcu;
    // NOP
    // 0x1743e0: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x1743e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1743e4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1743e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1743e8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1743e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1743ec: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1743ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1743f0: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x1743f0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1743f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1743f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1743f8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1743f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1743fc: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1743fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x174400: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x174400u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x174404: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x174404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174408: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x174408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17440c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x17440cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174410: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x174410u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x174414: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x174414u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x174418: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x174418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17441c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x174420: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x174420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174428: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x174428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17442c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x17442cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174430: 0x0  nop
    ctx->pc = 0x174430u;
    // NOP
    // 0x174434: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x174434u;
    {
        const bool branch_taken_0x174434 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x174438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174434u;
        // 0x174438: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174434) {
            ctx->pc = 0x174484u;
            return;
        }
    }
    ctx->pc = 0x17443Cu;
    // 0x17443c: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x17443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174440: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x174440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174444: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x174444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x174448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17444c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x17444cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174450: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x174450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x174454: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x174454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174458: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x174458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17445c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17445cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174460: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174464: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x174464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x174468: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x174468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17446c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x17446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174470: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x174470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174474: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174478: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x174478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17447c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17447Cu;
    {
        const bool branch_taken_0x17447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17447Cu;
        // 0x174480: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17447c) {
            ctx->pc = 0x174490u;
            return;
        }
    }
    ctx->pc = 0x174484u;
}
