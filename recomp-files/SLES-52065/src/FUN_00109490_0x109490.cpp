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

// Function: FUN_00109490
// Address: 0x109490 - 0x1095b8
void FUN_00109490_0x109490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00109490_0x109490");
#endif

    switch (ctx->pc) {
        case 0x1094a4u: goto label_1094a4;
        case 0x1094b0u: goto label_1094b0;
        case 0x10959cu: goto label_10959c;
        case 0x1095a8u: goto label_1095a8;
        default: break;
    }

    ctx->pc = 0x109490u;

    // 0x109490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x109494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x109498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10949c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10949Cu;
    SET_GPR_U32(ctx, 31, 0x1094A4u);
    ctx->pc = 0x1094A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10949Cu;
    // 0x1094a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10949Cu, 0x1094A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094A4u;
label_1094a4:
    // 0x1094a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1094a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094a8: 0xc04a058  jal         func_128160
    ctx->pc = 0x1094A8u;
    SET_GPR_U32(ctx, 31, 0x1094B0u);
    ctx->pc = 0x1094ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094A8u;
    // 0x1094ac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128160u, 0x1094A8u, 0x1094B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094B0u;
label_1094b0:
    // 0x1094b0: 0x8e032cd0  lw          $v1, 0x2CD0($s0)
    ctx->pc = 0x1094b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11472)));
    // 0x1094b4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1094B4u;
    {
        const bool branch_taken_0x1094b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1094B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094B4u;
        // 0x1094b8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094b4) {
            ctx->pc = 0x1094C4u;
            goto label_1094c4;
        }
    }
    ctx->pc = 0x1094BCu;
    // 0x1094bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1094BCu;
    {
        const bool branch_taken_0x1094bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1094C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094BCu;
        // 0x1094c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094bc) {
            ctx->pc = 0x1094DCu;
            goto label_1094dc;
        }
    }
    ctx->pc = 0x1094C4u;
label_1094c4:
    // 0x1094c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1094c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1094c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1094c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1094cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1094ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1094d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1094d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1094d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1094d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1094d8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1094d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1094dc:
    // 0x1094dc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1094dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1094e0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1094e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1094e4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1094e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1094e8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1094e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1094ec: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1094ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1094f0: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1094f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1094f4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1094f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1094f8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1094f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1094fc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1094fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109500: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x109500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109504: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x109504u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x109508: 0x4a0003bf  vwaitq
    ctx->pc = 0x109508u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10950c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10950cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109510: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x109510u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x109514: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x109514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x109518: 0x4a0003bf  vwaitq
    ctx->pc = 0x109518u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10951c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x10951cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x109520: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x109520u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x109524: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x109524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x109528: 0x24427510  addiu       $v0, $v0, 0x7510
    ctx->pc = 0x109528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x10952c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10952cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109530: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x109530u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x367510u));
    // 0x109534: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x109534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109538: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x109538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10953c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10953cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109540: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x109540u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109544: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x109544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x109548: 0x3c033f61  lui         $v1, 0x3F61
    ctx->pc = 0x109548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16225 << 16));
    // 0x10954c: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x10954cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x109550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x109550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109554: 0x0  nop
    ctx->pc = 0x109554u;
    // NOP
    // 0x109558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x109558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10955c: 0x0  nop
    ctx->pc = 0x10955cu;
    // NOP
    // 0x109560: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x109560u;
    {
        const bool branch_taken_0x109560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x109560) {
            ctx->pc = 0x1095A8u;
            goto label_1095a8;
        }
    }
    ctx->pc = 0x109568u;
    // 0x109568: 0x8e032cd0  lw          $v1, 0x2CD0($s0)
    ctx->pc = 0x109568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11472)));
    // 0x10956c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10956Cu;
    {
        const bool branch_taken_0x10956c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x109570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10956Cu;
        // 0x109570: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10956c) {
            ctx->pc = 0x10957Cu;
            goto label_10957c;
        }
    }
    ctx->pc = 0x109574u;
    // 0x109574: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109574u;
    {
        const bool branch_taken_0x109574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109574u;
        // 0x109578: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109574) {
            ctx->pc = 0x109594u;
            goto label_109594;
        }
    }
    ctx->pc = 0x10957Cu;
label_10957c:
    // 0x10957c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10957cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109588: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10958c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x109590: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x109590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_109594:
    // 0x109594: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x109594u;
    SET_GPR_U32(ctx, 31, 0x10959Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109594u, 0x10959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10959Cu;
label_10959c:
    // 0x10959c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095a0: 0xc04a018  jal         func_128060
    ctx->pc = 0x1095A0u;
    SET_GPR_U32(ctx, 31, 0x1095A8u);
    ctx->pc = 0x1095A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095A0u;
    // 0x1095a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x1095A0u, 0x1095A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095A8u;
label_1095a8:
    // 0x1095a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1095a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1095ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1095acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1095b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1095B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1095B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095B0u;
        // 0x1095b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1095B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1095B8u;
}
