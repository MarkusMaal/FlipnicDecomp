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

// Function: FUN_0016c4a0
// Address: 0x16c4a0 - 0x16c60c
void FUN_0016c4a0_0x16c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016c4a0_0x16c4a0");
#endif

    switch (ctx->pc) {
        case 0x16c4a0u: goto label_16c4a0;
        case 0x16c4a4u: goto label_16c4a4;
        case 0x16c4a8u: goto label_16c4a8;
        case 0x16c4acu: goto label_16c4ac;
        case 0x16c4b0u: goto label_16c4b0;
        case 0x16c4b4u: goto label_16c4b4;
        case 0x16c4b8u: goto label_16c4b8;
        case 0x16c4bcu: goto label_16c4bc;
        case 0x16c4c0u: goto label_16c4c0;
        case 0x16c4c4u: goto label_16c4c4;
        case 0x16c4c8u: goto label_16c4c8;
        case 0x16c4ccu: goto label_16c4cc;
        case 0x16c4d0u: goto label_16c4d0;
        case 0x16c4d4u: goto label_16c4d4;
        case 0x16c4d8u: goto label_16c4d8;
        case 0x16c4dcu: goto label_16c4dc;
        case 0x16c4e0u: goto label_16c4e0;
        case 0x16c4e4u: goto label_16c4e4;
        case 0x16c4e8u: goto label_16c4e8;
        case 0x16c4ecu: goto label_16c4ec;
        case 0x16c4f0u: goto label_16c4f0;
        case 0x16c4f4u: goto label_16c4f4;
        case 0x16c4f8u: goto label_16c4f8;
        case 0x16c4fcu: goto label_16c4fc;
        case 0x16c500u: goto label_16c500;
        case 0x16c504u: goto label_16c504;
        case 0x16c508u: goto label_16c508;
        case 0x16c50cu: goto label_16c50c;
        case 0x16c510u: goto label_16c510;
        case 0x16c514u: goto label_16c514;
        case 0x16c518u: goto label_16c518;
        case 0x16c51cu: goto label_16c51c;
        case 0x16c520u: goto label_16c520;
        case 0x16c524u: goto label_16c524;
        case 0x16c528u: goto label_16c528;
        case 0x16c52cu: goto label_16c52c;
        case 0x16c530u: goto label_16c530;
        case 0x16c534u: goto label_16c534;
        case 0x16c538u: goto label_16c538;
        case 0x16c53cu: goto label_16c53c;
        case 0x16c540u: goto label_16c540;
        case 0x16c544u: goto label_16c544;
        case 0x16c548u: goto label_16c548;
        case 0x16c54cu: goto label_16c54c;
        case 0x16c550u: goto label_16c550;
        case 0x16c554u: goto label_16c554;
        case 0x16c558u: goto label_16c558;
        case 0x16c55cu: goto label_16c55c;
        case 0x16c560u: goto label_16c560;
        case 0x16c564u: goto label_16c564;
        case 0x16c568u: goto label_16c568;
        case 0x16c56cu: goto label_16c56c;
        case 0x16c570u: goto label_16c570;
        case 0x16c574u: goto label_16c574;
        case 0x16c578u: goto label_16c578;
        case 0x16c57cu: goto label_16c57c;
        case 0x16c580u: goto label_16c580;
        case 0x16c584u: goto label_16c584;
        case 0x16c588u: goto label_16c588;
        case 0x16c58cu: goto label_16c58c;
        case 0x16c590u: goto label_16c590;
        case 0x16c594u: goto label_16c594;
        case 0x16c598u: goto label_16c598;
        case 0x16c59cu: goto label_16c59c;
        case 0x16c5a0u: goto label_16c5a0;
        case 0x16c5a4u: goto label_16c5a4;
        case 0x16c5a8u: goto label_16c5a8;
        case 0x16c5acu: goto label_16c5ac;
        case 0x16c5b0u: goto label_16c5b0;
        case 0x16c5b4u: goto label_16c5b4;
        case 0x16c5b8u: goto label_16c5b8;
        case 0x16c5bcu: goto label_16c5bc;
        case 0x16c5c0u: goto label_16c5c0;
        case 0x16c5c4u: goto label_16c5c4;
        case 0x16c5c8u: goto label_16c5c8;
        case 0x16c5ccu: goto label_16c5cc;
        case 0x16c5d0u: goto label_16c5d0;
        case 0x16c5d4u: goto label_16c5d4;
        case 0x16c5d8u: goto label_16c5d8;
        case 0x16c5dcu: goto label_16c5dc;
        case 0x16c5e0u: goto label_16c5e0;
        case 0x16c5e4u: goto label_16c5e4;
        case 0x16c5e8u: goto label_16c5e8;
        case 0x16c5ecu: goto label_16c5ec;
        case 0x16c5f0u: goto label_16c5f0;
        case 0x16c5f4u: goto label_16c5f4;
        case 0x16c5f8u: goto label_16c5f8;
        case 0x16c5fcu: goto label_16c5fc;
        case 0x16c600u: goto label_16c600;
        case 0x16c604u: goto label_16c604;
        case 0x16c608u: goto label_16c608;
        default: break;
    }

    ctx->pc = 0x16c4a0u;

label_16c4a0:
    // 0x16c4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16c4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16c4a4:
    // 0x16c4a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16c4a8:
    // 0x16c4a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c4ac:
    // 0x16c4ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c4b0:
    // 0x16c4b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c4b4:
    // 0x16c4b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16c4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c4b8:
    // 0x16c4b8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x16c4b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_16c4bc:
    // 0x16c4bc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16c4bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16c4c0:
    // 0x16c4c0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16c4c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16c4c4:
    // 0x16c4c4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16c4c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16c4c8:
    // 0x16c4c8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16c4c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_16c4cc:
    // 0x16c4cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16c4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16c4d0:
    // 0x16c4d0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x16c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_16c4d4:
    // 0x16c4d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c4d8:
    // 0x16c4d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_16c4dc:
    // 0x16c4dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c4e0:
    // 0x16c4e0: 0x0  nop
    ctx->pc = 0x16c4e0u;
    // NOP
label_16c4e4:
    // 0x16c4e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x16c4e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_16c4e8:
    // 0x16c4e8: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x16c4e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c4ec:
    // 0x16c4ec: 0x0  nop
    ctx->pc = 0x16c4ecu;
    // NOP
label_16c4f0:
    // 0x16c4f0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_16c4f4:
    if (ctx->pc == 0x16C4F4u) {
        ctx->pc = 0x16C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4F0u;
        // 0x16c4f4: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C4F8u;
        goto label_16c4f8;
    }
    ctx->pc = 0x16C4F0u;
    {
        const bool branch_taken_0x16c4f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4F0u;
        // 0x16c4f4: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4f0) {
            ctx->pc = 0x16C588u;
            goto label_16c588;
        }
    }
    ctx->pc = 0x16C4F8u;
label_16c4f8:
    // 0x16c4f8: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x16c4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c4fc:
    // 0x16c4fc: 0x0  nop
    ctx->pc = 0x16c4fcu;
    // NOP
label_16c500:
    // 0x16c500: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_16c504:
    if (ctx->pc == 0x16C504u) {
        ctx->pc = 0x16C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C500u;
        // 0x16c504: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C508u;
        goto label_16c508;
    }
    ctx->pc = 0x16C500u;
    {
        const bool branch_taken_0x16c500 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C500u;
        // 0x16c504: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c500) {
            ctx->pc = 0x16C588u;
            goto label_16c588;
        }
    }
    ctx->pc = 0x16C508u;
label_16c508:
    // 0x16c508: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16c508u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16c50c:
    // 0x16c50c: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_16c510:
    // 0x16c510: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16c510u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_16c514:
    // 0x16c514: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x16c514u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_16c518:
    // 0x16c518: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16c518u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16c51c:
    // 0x16c51c: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x16c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_16c520:
    // 0x16c520: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16c520u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_16c524:
    // 0x16c524: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16c524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16c528:
    // 0x16c528: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16c528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16c52c:
    // 0x16c52c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16c52cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16c530:
    // 0x16c530: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16c530u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_16c534:
    // 0x16c534: 0x4a0003bf  vwaitq
    ctx->pc = 0x16c534u;
    // VWAITQ (Q already resolved in this runtime)
label_16c538:
    // 0x16c538: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16c538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16c53c:
    // 0x16c53c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16c53cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_16c540:
    // 0x16c540: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16c540u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16c544:
    // 0x16c544: 0x4a0003bf  vwaitq
    ctx->pc = 0x16c544u;
    // VWAITQ (Q already resolved in this runtime)
label_16c548:
    // 0x16c548: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16c548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16c54c:
    // 0x16c54c: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x16c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_16c550:
    // 0x16c550: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c554:
    // 0x16c554: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16c558:
    // 0x16c558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c55c:
    // 0x16c55c: 0x26070290  addiu       $a3, $s0, 0x290
    ctx->pc = 0x16c55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_16c560:
    // 0x16c560: 0x460d6003  div.s       $f0, $f12, $f13
    ctx->pc = 0x16c560u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
label_16c564:
    // 0x16c564: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16c568:
    // 0x16c568: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x16c568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c56c:
    // 0x16c56c: 0xc055b84  jal         func_156E10
label_16c570:
    if (ctx->pc == 0x16C570u) {
        ctx->pc = 0x16C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C56Cu;
        // 0x16c570: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C574u;
        goto label_16c574;
    }
    ctx->pc = 0x16C56Cu;
    SET_GPR_U32(ctx, 31, 0x16C574u);
    ctx->pc = 0x16C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C56Cu;
    // 0x16c570: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156E10u, 0x16C56Cu, 0x16C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C574u;
label_16c574:
    // 0x16c574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c578:
    // 0x16c578: 0xc0564b8  jal         func_1592E0
label_16c57c:
    if (ctx->pc == 0x16C57Cu) {
        ctx->pc = 0x16C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C578u;
        // 0x16c57c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C580u;
        goto label_16c580;
    }
    ctx->pc = 0x16C578u;
    SET_GPR_U32(ctx, 31, 0x16C580u);
    ctx->pc = 0x16C57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C578u;
    // 0x16c57c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x16C578u, 0x16C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C580u;
label_16c580:
    // 0x16c580: 0x1000001d  b           . + 4 + (0x1D << 2)
label_16c584:
    if (ctx->pc == 0x16C584u) {
        ctx->pc = 0x16C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C580u;
        // 0x16c584: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C588u;
        goto label_16c588;
    }
    ctx->pc = 0x16C580u;
    {
        const bool branch_taken_0x16c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C580u;
        // 0x16c584: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c580) {
            ctx->pc = 0x16C5F8u;
            goto label_16c5f8;
        }
    }
    ctx->pc = 0x16C588u;
label_16c588:
    // 0x16c588: 0x8e220240  lw          $v0, 0x240($s1)
    ctx->pc = 0x16c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
label_16c58c:
    // 0x16c58c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_16c590:
    if (ctx->pc == 0x16C590u) {
        ctx->pc = 0x16C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C58Cu;
        // 0x16c590: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C594u;
        goto label_16c594;
    }
    ctx->pc = 0x16C58Cu;
    {
        const bool branch_taken_0x16c58c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C58Cu;
        // 0x16c590: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c58c) {
            ctx->pc = 0x16C59Cu;
            goto label_16c59c;
        }
    }
    ctx->pc = 0x16C594u;
label_16c594:
    // 0x16c594: 0x10000018  b           . + 4 + (0x18 << 2)
label_16c598:
    if (ctx->pc == 0x16C598u) {
        ctx->pc = 0x16C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C594u;
        // 0x16c598: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C59Cu;
        goto label_16c59c;
    }
    ctx->pc = 0x16C594u;
    {
        const bool branch_taken_0x16c594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C594u;
        // 0x16c598: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c594) {
            ctx->pc = 0x16C5F8u;
            goto label_16c5f8;
        }
    }
    ctx->pc = 0x16C59Cu;
label_16c59c:
    // 0x16c59c: 0xc05b040  jal         func_16C100
label_16c5a0:
    if (ctx->pc == 0x16C5A0u) {
        ctx->pc = 0x16C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C59Cu;
        // 0x16c5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5A4u;
        goto label_16c5a4;
    }
    ctx->pc = 0x16C59Cu;
    SET_GPR_U32(ctx, 31, 0x16C5A4u);
    ctx->pc = 0x16C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C59Cu;
    // 0x16c5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C100u, 0x16C59Cu, 0x16C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C5A4u;
label_16c5a4:
    // 0x16c5a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c5a8:
    // 0x16c5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c5ac:
    // 0x16c5ac: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_16c5b0:
    if (ctx->pc == 0x16C5B0u) {
        ctx->pc = 0x16C5B4u;
        goto label_16c5b4;
    }
    ctx->pc = 0x16C5ACu;
    {
        const bool branch_taken_0x16c5ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c5ac) {
            ctx->pc = 0x16C5C8u;
            goto label_16c5c8;
        }
    }
    ctx->pc = 0x16C5B4u;
label_16c5b4:
    // 0x16c5b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16c5b8:
    // 0x16c5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c5bc:
    // 0x16c5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16c5c0:
    // 0x16c5c0: 0xc0425a4  jal         func_109690
label_16c5c4:
    if (ctx->pc == 0x16C5C4u) {
        ctx->pc = 0x16C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5C0u;
        // 0x16c5c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5C8u;
        goto label_16c5c8;
    }
    ctx->pc = 0x16C5C0u;
    SET_GPR_U32(ctx, 31, 0x16C5C8u);
    ctx->pc = 0x16C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C5C0u;
    // 0x16c5c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16C5C0u, 0x16C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C5C8u;
label_16c5c8:
    // 0x16c5c8: 0x86230222  lh          $v1, 0x222($s1)
    ctx->pc = 0x16c5c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
label_16c5cc:
    // 0x16c5cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_16c5d0:
    if (ctx->pc == 0x16C5D0u) {
        ctx->pc = 0x16C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5CCu;
        // 0x16c5d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5D4u;
        goto label_16c5d4;
    }
    ctx->pc = 0x16C5CCu;
    {
        const bool branch_taken_0x16c5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5CCu;
        // 0x16c5d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5cc) {
            ctx->pc = 0x16C5F8u;
            goto label_16c5f8;
        }
    }
    ctx->pc = 0x16C5D4u;
label_16c5d4:
    // 0x16c5d4: 0x86220220  lh          $v0, 0x220($s1)
    ctx->pc = 0x16c5d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
label_16c5d8:
    // 0x16c5d8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16c5d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16c5dc:
    // 0x16c5dc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_16c5e0:
    if (ctx->pc == 0x16C5E0u) {
        ctx->pc = 0x16C5E4u;
        goto label_16c5e4;
    }
    ctx->pc = 0x16C5DCu;
    {
        const bool branch_taken_0x16c5dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c5dc) {
            ctx->pc = 0x16C5F4u;
            goto label_16c5f4;
        }
    }
    ctx->pc = 0x16C5E4u;
label_16c5e4:
    // 0x16c5e4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c5e8:
    // 0x16c5e8: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x16c5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_16c5ec:
    // 0x16c5ec: 0x320f809  jalr        $t9
label_16c5f0:
    if (ctx->pc == 0x16C5F0u) {
        ctx->pc = 0x16C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ECu;
        // 0x16c5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5F4u;
        goto label_16c5f4;
    }
    ctx->pc = 0x16C5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C5F4u);
        ctx->pc = 0x16C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ECu;
        // 0x16c5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C5ECu, 0x16C5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C5F4u;
label_16c5f4:
    // 0x16c5f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16c5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c5f8:
    // 0x16c5f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16c5fc:
    // 0x16c5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c600:
    // 0x16c600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c604:
    // 0x16c604: 0x3e00008  jr          $ra
label_16c608:
    if (ctx->pc == 0x16C608u) {
        ctx->pc = 0x16C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C604u;
        // 0x16c608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C60Cu;
        goto label_fallthrough_0x16c604;
    }
    ctx->pc = 0x16C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C604u;
        // 0x16c608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16c604:
    ctx->pc = 0x16C60Cu;
}
