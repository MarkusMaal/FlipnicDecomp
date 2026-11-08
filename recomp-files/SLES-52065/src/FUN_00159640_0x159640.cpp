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

// Function: FUN_00159640
// Address: 0x159640 - 0x1597f4
void FUN_00159640_0x159640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159640_0x159640");
#endif

    ctx->pc = 0x159640u;

    // 0x159640: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x159640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x159644: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159648: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15964c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x15964cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159650: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x159650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159654: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x159654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159658: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x159658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15965c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15965cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x159660: 0x4a0003bf  vwaitq
    ctx->pc = 0x159660u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159664: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x159664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159668: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x159668u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15966c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15966cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159670: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x159670u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x159674: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x159674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159678: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x159678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15967c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15967cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x159680: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x159680u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x159684: 0x4a0003bf  vwaitq
    ctx->pc = 0x159684u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x159688: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x159688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15968c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15968cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159694: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x159694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x159698: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x159698u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x15969c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x15969cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1596a0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1596a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1596a4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1596a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1596a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1596a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1596ac: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1596acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1596b0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1596b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1596b4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1596b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1596b8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1596b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1596bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1596bcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1596c0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1596c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1596c4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1596c4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1596c8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1596c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1596cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1596ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1596d0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1596d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1596d4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1596d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1596d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1596d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1596dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1596dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1596e0: 0x0  nop
    ctx->pc = 0x1596e0u;
    // NOP
    // 0x1596e4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1596e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1596e8: 0x0  nop
    ctx->pc = 0x1596e8u;
    // NOP
    // 0x1596ec: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1596ECu;
    {
        const bool branch_taken_0x1596ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1596F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596ECu;
        // 0x1596f0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596ec) {
            ctx->pc = 0x159754u;
            goto label_159754;
        }
    }
    ctx->pc = 0x1596F4u;
    // 0x1596f4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1596f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1596f8: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1596f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1596fc: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1596fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x159700: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x159700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x159704: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x159704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x159708: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x159708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15970c: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x15970cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x159710: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x159710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x159714: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x159714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159718: 0x460310c1  sub.s       $f3, $f2, $f3
    ctx->pc = 0x159718u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15971c: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x15971cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x159720: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x159720u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x159724: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x159724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x159728: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x159728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15972c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x15972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159730: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x159730u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x159734: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x159734u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x159738: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x159738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x15973c: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x15973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159740: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x159740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159744: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x159744u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x159748: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x159748u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x15974c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x15974Cu;
    {
        const bool branch_taken_0x15974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15974Cu;
        // 0x159750: 0xe4e10008  swc1        $f1, 0x8($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15974c) {
            ctx->pc = 0x1597BCu;
            goto label_1597bc;
        }
    }
    ctx->pc = 0x159754u;
label_159754:
    // 0x159754: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x159754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x159758: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x159758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15975c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x159760: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x159760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x159764: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x159764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x159768: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x159768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15976c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x15976cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x159770: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x159770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159774: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x159774u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x159778: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x159778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15977c: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x15977cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x159780: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x159780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x159784: 0x0  nop
    ctx->pc = 0x159784u;
    // NOP
    // 0x159788: 0x460310c1  sub.s       $f3, $f2, $f3
    ctx->pc = 0x159788u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15978c: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x15978cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x159790: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x159790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x159794: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x159794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159798: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x159798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15979c: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x15979cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1597a0: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x1597a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x1597a4: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x1597a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1597a8: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1597a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1597ac: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1597acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1597b0: 0x4604101a  mula.s      $f2, $f4
    ctx->pc = 0x1597b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1597b4: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x1597b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x1597b8: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x1597b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1597bc:
    // 0x1597bc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1597bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1597c0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1597c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1597c4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1597c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1597c8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1597c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1597cc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1597ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1597d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1597d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1597d4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1597d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1597d8: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1597d8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1597dc: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1597dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1597e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1597e0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1597e4: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1597e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1597e8: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x1597e8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1597ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1597ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1597F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597ECu;
        // 0x1597f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1597ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1597F4u;
}
