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

// Function: entry_0017452c
// Address: 0x17452c - 0x174634
void entry_0017452c_0x17452c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017452c_0x17452c");
#endif

    ctx->pc = 0x17452cu;

    // 0x17452c: 0x0  nop
    ctx->pc = 0x17452cu;
    // NOP
    // 0x174530: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x174530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x174534: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x174534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x174538: 0x244217f0  addiu       $v0, $v0, 0x17F0
    ctx->pc = 0x174538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6128));
    // 0x17453c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174540: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x174540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x174544: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x174544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174548: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x174548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x17454c: 0x0  nop
    ctx->pc = 0x17454cu;
    // NOP
    // 0x174550: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x174550u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x174554: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x174554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x174558: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x174558u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17455c: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x17455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x174560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174564: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x174564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x174568: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x174568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17456c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17456cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174570: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x174570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x174574: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x174574u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174578: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x174578u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17457c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x17457cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x174580: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x174580u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x174584: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x174584u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x174588: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x174588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17458c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x17458cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174590: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x174590u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174594: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x174594u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x174598: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x174598u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x17459c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x17459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1745a0: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x1745a0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1745a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1745a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1745a8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1745a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1745ac: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1745acu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1745b0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1745b0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1745b4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1745b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1745b8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1745b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1745bc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1745bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1745c0: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1745c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1745c4: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x1745c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1745c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1745c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1745cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1745ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1745d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1745d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1745d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1745d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1745d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1745d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1745dc: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1745dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1745e0: 0x0  nop
    ctx->pc = 0x1745e0u;
    // NOP
    // 0x1745e4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1745E4u;
    {
        const bool branch_taken_0x1745e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1745E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745E4u;
        // 0x1745e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745e4) {
            ctx->pc = 0x174634u;
            return;
        }
    }
    ctx->pc = 0x1745ECu;
    // 0x1745ec: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1745ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1745f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1745f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1745f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1745f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1745f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1745f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1745fc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1745fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174600: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x174600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x174604: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x174604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174608: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x174608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17460c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17460cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174610: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174614: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x174614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x174618: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x174618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17461c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x17461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174620: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x174620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174624: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174628: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x174628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17462c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17462Cu;
    {
        const bool branch_taken_0x17462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17462Cu;
        // 0x174630: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17462c) {
            ctx->pc = 0x174640u;
            return;
        }
    }
    ctx->pc = 0x174634u;
}
