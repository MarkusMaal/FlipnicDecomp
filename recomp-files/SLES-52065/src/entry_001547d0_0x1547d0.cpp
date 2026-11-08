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

// Function: entry_001547d0
// Address: 0x1547d0 - 0x154938
void entry_001547d0_0x1547d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001547d0_0x1547d0");
#endif

    switch (ctx->pc) {
        case 0x1548c0u: goto label_1548c0;
        case 0x154930u: goto label_154930;
        default: break;
    }

    ctx->pc = 0x1547d0u;

    // 0x1547d0: 0xd8c70000  lqc2        $vf7, 0x0($a2)
    ctx->pc = 0x1547d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1547d4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1547d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1547d8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1547d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1547dc: 0x0  nop
    ctx->pc = 0x1547dcu;
    // NOP
    // 0x1547e0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1547e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1547e4: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1547e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1547e8: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1547e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1547ec: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1547ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1547f0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1547f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1547f4: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x1547f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1547f8: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1547f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1547fc: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1547fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x154800: 0x0  nop
    ctx->pc = 0x154800u;
    // NOP
    // 0x154804: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x154804u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x154808: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x154808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15480c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x15480cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154810: 0xf8650000  sqc2        $vf5, 0x0($v1)
    ctx->pc = 0x154810u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154814: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x154814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x154818: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x154818u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15481c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x15481cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154820: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154820u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154824: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x154824u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154828: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x154828u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15482c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x15482cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154830: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154834: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154838: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x154838u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15483c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15483cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154840: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x154840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154844: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x154844u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x154848: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x154848u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15484c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15484cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154850: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x154850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154854: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x154854u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154858: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x154858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15485c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x15485cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154860: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x154860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x154864: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x154864u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x154868: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x154868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15486c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x15486cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x154870: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x154870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x154874: 0xc7a60068  lwc1        $f6, 0x68($sp)
    ctx->pc = 0x154874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x154878: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x154878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15487c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x15487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154880: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x154880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154884: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x154884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x154888: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x154888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x15488c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15488cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x154890: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x154890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x154894: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x154894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x154898: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x154898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x15489c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x15489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1548a0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1548a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1548a4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1548a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1548a8: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x1548a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1548ac: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x1548acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1548b0: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1548b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1548b4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1548b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1548b8: 0xc0552e8  jal         func_154BA0
    ctx->pc = 0x1548B8u;
    SET_GPR_U32(ctx, 31, 0x1548C0u);
    ctx->pc = 0x1548BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548B8u;
    // 0x1548bc: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154BA0u, 0x1548B8u, 0x1548C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548C0u;
label_1548c0:
    // 0x1548c0: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x1548c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1548c4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1548c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1548c8: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x1548c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1548cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1548ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548d0: 0xc7a60068  lwc1        $f6, 0x68($sp)
    ctx->pc = 0x1548d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1548d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1548d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548d8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1548d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1548dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1548dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1548e0: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1548e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1548e4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1548e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548e8: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x1548e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1548ec: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x1548ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1548f0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x1548f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1548f4: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x1548f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1548f8: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1548f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1548fc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1548fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x154900: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x154900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x154904: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x154904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x154908: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x154908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x15490c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x15490cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x154910: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x154910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x154914: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x154914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x154918: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x154918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15491c: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x15491cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x154920: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x154920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x154924: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x154924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x154928: 0xc0552e8  jal         func_154BA0
    ctx->pc = 0x154928u;
    SET_GPR_U32(ctx, 31, 0x154930u);
    ctx->pc = 0x15492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154928u;
    // 0x15492c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154BA0u, 0x154928u, 0x154930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154930u;
label_154930:
    // 0x154930: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x154930u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x154934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x154934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x154938u;
}
