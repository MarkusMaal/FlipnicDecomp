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

// Function: FUN_001664c0
// Address: 0x1664c0 - 0x16663c
void FUN_001664c0_0x1664c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001664c0_0x1664c0");
#endif

    switch (ctx->pc) {
        case 0x1664fcu: goto label_1664fc;
        default: break;
    }

    ctx->pc = 0x1664c0u;

    // 0x1664c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1664c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1664c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1664c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1664c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1664c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1664cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1664ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1664d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1664d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1664d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1664d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1664d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1664dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1664e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1664e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1664e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1664e8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1664e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1664ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1664f0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1664f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1664f4: 0xc054ed0  jal         func_153B40
    ctx->pc = 0x1664F4u;
    SET_GPR_U32(ctx, 31, 0x1664FCu);
    ctx->pc = 0x1664F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664F4u;
    // 0x1664f8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153B40u, 0x1664F4u, 0x1664FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664FCu;
label_1664fc:
    // 0x1664fc: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1664fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x166500: 0x0  nop
    ctx->pc = 0x166500u;
    // NOP
    // 0x166504: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x166504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166508: 0x0  nop
    ctx->pc = 0x166508u;
    // NOP
    // 0x16650c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16650Cu;
    {
        const bool branch_taken_0x16650c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16650Cu;
        // 0x166510: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16650c) {
            ctx->pc = 0x166524u;
            goto label_166524;
        }
    }
    ctx->pc = 0x166514u;
    // 0x166514: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x166518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16651c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x16651Cu;
    {
        const bool branch_taken_0x16651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16651Cu;
        // 0x166520: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16651c) {
            ctx->pc = 0x16661Cu;
            goto label_16661c;
        }
    }
    ctx->pc = 0x166524u;
label_166524:
    // 0x166524: 0xda670000  lqc2        $vf7, 0x0($s3)
    ctx->pc = 0x166524u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x166528: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x166528u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16652c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16652cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x166530: 0x0  nop
    ctx->pc = 0x166530u;
    // NOP
    // 0x166534: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x166534u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x166538: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x166538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16653c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16653cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166540: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x166540u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166544: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x166544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x166548: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x166548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16654c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x16654cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x166550: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x166550u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166554: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x166554u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166558: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x166558u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16655c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16655cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166560: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x166560u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166564: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x166564u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x166568: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x166568u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16656c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x16656cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166570: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x166570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166574: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166578: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16657c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16657cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166580: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x166580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x166584: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x166584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x166588: 0x4615a100  add.s       $f4, $f20, $f21
    ctx->pc = 0x166588u;
    ctx->f[4] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x16658c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16658cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x166590: 0x460429c3  div.s       $f7, $f5, $f4
    ctx->pc = 0x166590u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x166594: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x166594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166598: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x166598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x16659c: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x16659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1665a0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1665a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1665a4: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x1665a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1665a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1665a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1665ac: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1665acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1665b0: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x1665b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x1665b4: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x1665b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[4]));
    // 0x1665b8: 0x46022902  mul.s       $f4, $f5, $f2
    ctx->pc = 0x1665b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1665bc: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x1665bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1665c0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1665c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1665c4: 0xe6060004  swc1        $f6, 0x4($s0)
    ctx->pc = 0x1665c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1665c8: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x1665c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1665cc: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1665ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1665d0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1665d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1665d4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1665d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1665d8: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x1665d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1665dc: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x1665dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[3]));
    // 0x1665e0: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x1665e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1665e4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1665e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1665e8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1665e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1665ec: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1665ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1665f0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1665f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1665f4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1665f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1665f8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1665f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1665fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1665fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166600: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x166600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166604: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x166604u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x166608: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x166608u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16660c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16660cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166610: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x166610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166614: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x166614u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x166618: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x166618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16661c:
    // 0x16661c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16661cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x166620: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x166620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166624: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x166624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x166628: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x166628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16662c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16662cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166630: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x166630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166634: 0x3e00008  jr          $ra
    ctx->pc = 0x166634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166634u;
        // 0x166638: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16663Cu;
}
