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

// Function: FUN_001540e0
// Address: 0x1540e0 - 0x1543dc
void FUN_001540e0_0x1540e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001540e0_0x1540e0");
#endif

    ctx->pc = 0x1540e0u;

    // 0x1540e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1540e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1540e4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1540e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1540e8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1540e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1540ec: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1540ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1540f0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1540f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1540f4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1540f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1540f8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1540f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1540fc: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1540fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x154100: 0x4bc521aa  vmul.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x154100u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154104: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x154104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154108: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x154108u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15410c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15410cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154110: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x154110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x154114: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x154114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x154118: 0x0  nop
    ctx->pc = 0x154118u;
    // NOP
    // 0x15411c: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x15411cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x154120: 0x4bc529aa  vmul.xyz    $vf6, $vf5, $vf5
    ctx->pc = 0x154120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154124: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x154124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154128: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x154128u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15412c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x15412cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x154130: 0x4bc421aa  vmul.xyz    $vf6, $vf4, $vf4
    ctx->pc = 0x154130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154134: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x154134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154138: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x154138u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15413c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15413cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154140: 0x460d6040  add.s       $f1, $f12, $f13
    ctx->pc = 0x154140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x154144: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x154144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x154148: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x154148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x15414c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15414cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154150: 0x0  nop
    ctx->pc = 0x154150u;
    // NOP
    // 0x154154: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x154154u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x154158: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x154158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x15415c: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x15415cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x154160: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x154160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154164: 0x4601019d  msub.s      $f6, $f0, $f1
    ctx->pc = 0x154164u;
    ctx->f[6] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x154168: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x154168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15416c: 0x0  nop
    ctx->pc = 0x15416cu;
    // NOP
    // 0x154170: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x154170u;
    {
        const bool branch_taken_0x154170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154170u;
        // 0x154174: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154170) {
            ctx->pc = 0x154184u;
            goto label_154184;
        }
    }
    ctx->pc = 0x154178u;
    // 0x154178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15417c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15417Cu;
    {
        const bool branch_taken_0x15417c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15417c) {
            ctx->pc = 0x1541E8u;
            goto label_1541e8;
        }
    }
    ctx->pc = 0x154184u;
label_154184:
    // 0x154184: 0x0  nop
    ctx->pc = 0x154184u;
    // NOP
    // 0x154188: 0x0  nop
    ctx->pc = 0x154188u;
    // NOP
    // 0x15418c: 0x0  nop
    ctx->pc = 0x15418cu;
    // NOP
    // 0x154190: 0x46060184  c1          0x60184
    ctx->pc = 0x154190u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x154194: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x154194u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x154198: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x154198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x15419c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x15419cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x1541a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1541a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1541a4: 0x0  nop
    ctx->pc = 0x1541a4u;
    // NOP
    // 0x1541a8: 0x0  nop
    ctx->pc = 0x1541a8u;
    // NOP
    // 0x1541ac: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1541acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1541b0: 0x0  nop
    ctx->pc = 0x1541b0u;
    // NOP
    // 0x1541b4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1541B4u;
    {
        const bool branch_taken_0x1541b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1541B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541B4u;
        // 0x1541b8: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541b4) {
            ctx->pc = 0x1541E4u;
            goto label_1541e4;
        }
    }
    ctx->pc = 0x1541BCu;
    // 0x1541bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1541bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1541c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1541c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1541c4: 0x0  nop
    ctx->pc = 0x1541c4u;
    // NOP
    // 0x1541c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1541c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1541cc: 0x0  nop
    ctx->pc = 0x1541ccu;
    // NOP
    // 0x1541d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1541D0u;
    {
        const bool branch_taken_0x1541d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1541d0) {
            ctx->pc = 0x1541E0u;
            goto label_1541e0;
        }
    }
    ctx->pc = 0x1541D8u;
    // 0x1541d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1541D8u;
    {
        const bool branch_taken_0x1541d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1541d8) {
            ctx->pc = 0x1541E8u;
            goto label_1541e8;
        }
    }
    ctx->pc = 0x1541E0u;
label_1541e0:
    // 0x1541e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1541e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1541e4:
    // 0x1541e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1541e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1541e8:
    // 0x1541e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1541e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1541ec: 0x0  nop
    ctx->pc = 0x1541ecu;
    // NOP
    // 0x1541f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1541f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1541f4: 0x0  nop
    ctx->pc = 0x1541f4u;
    // NOP
    // 0x1541f8: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x1541F8u;
    {
        const bool branch_taken_0x1541f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1541FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541F8u;
        // 0x1541fc: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541f8) {
            ctx->pc = 0x1542B4u;
            goto label_1542b4;
        }
    }
    ctx->pc = 0x154200u;
    // 0x154200: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x154200u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x154204: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x154204u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154208: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154208u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15420c: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x15420cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154210: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x154210u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154214: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x154214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154218: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15421c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15421cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154220: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154220u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154224: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x154224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154228: 0x460d6040  add.s       $f1, $f12, $f13
    ctx->pc = 0x154228u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x15422c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x15422cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x154230: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x154230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154234: 0x0  nop
    ctx->pc = 0x154234u;
    // NOP
    // 0x154238: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x154238u;
    {
        const bool branch_taken_0x154238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154238) {
            ctx->pc = 0x154248u;
            goto label_154248;
        }
    }
    ctx->pc = 0x154240u;
    // 0x154240: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x154240u;
    {
        const bool branch_taken_0x154240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154240u;
        // 0x154244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154240) {
            ctx->pc = 0x15424Cu;
            goto label_15424c;
        }
    }
    ctx->pc = 0x154248u;
label_154248:
    // 0x154248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x154248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15424c:
    // 0x15424c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15424Cu;
    {
        const bool branch_taken_0x15424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15424c) {
            ctx->pc = 0x1542B4u;
            goto label_1542b4;
        }
    }
    ctx->pc = 0x154254u;
    // 0x154254: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x154254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x154258: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x154258u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15425c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x15425cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x154260: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154264: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x154264u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154268: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x154268u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15426c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x15426cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x154270: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154270u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154274: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x154274u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154278: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x154278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15427c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15427cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154280: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154284: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154288: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x154288u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15428c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15428cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154290: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x154290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154294: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x154294u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x154298: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x154298u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15429c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15429cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1542a0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1542a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1542a4: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x1542a4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1542a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1542a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1542ac: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1542ACu;
    {
        const bool branch_taken_0x1542ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1542B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542ACu;
        // 0x1542b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542ac) {
            ctx->pc = 0x1543D4u;
            goto label_1543d4;
        }
    }
    ctx->pc = 0x1542B4u;
label_1542b4:
    // 0x1542b4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1542b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1542b8: 0x0  nop
    ctx->pc = 0x1542b8u;
    // NOP
    // 0x1542bc: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x1542bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1542c0: 0x0  nop
    ctx->pc = 0x1542c0u;
    // NOP
    // 0x1542c4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1542C4u;
    {
        const bool branch_taken_0x1542c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1542C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542C4u;
        // 0x1542c8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542c4) {
            ctx->pc = 0x1542DCu;
            goto label_1542dc;
        }
    }
    ctx->pc = 0x1542CCu;
    // 0x1542cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1542ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1542d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1542d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1542d4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1542D4u;
    {
        const bool branch_taken_0x1542d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1542d4) {
            ctx->pc = 0x1543D0u;
            goto label_1543d0;
        }
    }
    ctx->pc = 0x1542DCu;
label_1542dc:
    // 0x1542dc: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1542dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1542e0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1542e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1542e4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1542e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1542e8: 0x0  nop
    ctx->pc = 0x1542e8u;
    // NOP
    // 0x1542ec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1542ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1542f0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1542f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1542f4: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1542f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1542f8: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1542f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1542fc: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x1542fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x154300: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x154300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x154304: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x154304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154308: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x154308u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15430c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15430cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154310: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x154310u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154314: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x154314u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154318: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154318u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15431c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x15431cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154320: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x154320u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x154324: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x154324u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154328: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x154328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15432c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15432cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154330: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154334: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154334u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154338: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x154338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15433c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x15433cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x154340: 0x460c6900  add.s       $f4, $f13, $f12
    ctx->pc = 0x154340u;
    ctx->f[4] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x154344: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x154344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x154348: 0x460429c3  div.s       $f7, $f5, $f4
    ctx->pc = 0x154348u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x15434c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x15434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154350: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x154350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x154354: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x154354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154358: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x154358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15435c: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x15435cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x154360: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x154360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154364: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x154364u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x154368: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x154368u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x15436c: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x15436cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[4]));
    // 0x154370: 0x46022902  mul.s       $f4, $f5, $f2
    ctx->pc = 0x154370u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x154374: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x154374u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x154378: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x154378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x15437c: 0xe4e60004  swc1        $f6, 0x4($a3)
    ctx->pc = 0x15437cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x154380: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x154380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154384: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x154384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154388: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x154388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15438c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x15438cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x154390: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x154390u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x154394: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x154394u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[3]));
    // 0x154398: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x154398u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x15439c: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x15439cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1543a0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1543a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1543a4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1543a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1543a8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1543a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1543ac: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1543acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1543b0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1543b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1543b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1543b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1543b8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1543b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1543bc: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1543bcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1543c0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1543c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1543c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1543c4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1543c8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1543c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1543cc: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x1543ccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_1543d0:
    // 0x1543d0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1543d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1543d4:
    // 0x1543d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1543D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1543D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1543DCu;
}
