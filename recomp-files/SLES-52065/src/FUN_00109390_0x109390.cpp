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

// Function: FUN_00109390
// Address: 0x109390 - 0x109490
void FUN_00109390_0x109390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00109390_0x109390");
#endif

    switch (ctx->pc) {
        case 0x1093a4u: goto label_1093a4;
        case 0x1093b0u: goto label_1093b0;
        case 0x1093b8u: goto label_1093b8;
        case 0x1093c4u: goto label_1093c4;
        case 0x1093fcu: goto label_1093fc;
        case 0x109408u: goto label_109408;
        default: break;
    }

    ctx->pc = 0x109390u;

    // 0x109390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x109398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10939c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10939Cu;
    SET_GPR_U32(ctx, 31, 0x1093A4u);
    ctx->pc = 0x1093A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10939Cu;
    // 0x1093a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10939Cu, 0x1093A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093A4u;
label_1093a4:
    // 0x1093a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1093a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093a8: 0xc049f70  jal         func_127DC0
    ctx->pc = 0x1093A8u;
    SET_GPR_U32(ctx, 31, 0x1093B0u);
    ctx->pc = 0x1093ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093A8u;
    // 0x1093ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127DC0u, 0x1093A8u, 0x1093B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093B0u;
label_1093b0:
    // 0x1093b0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1093B0u;
    SET_GPR_U32(ctx, 31, 0x1093B8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1093B0u, 0x1093B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093B8u;
label_1093b8:
    // 0x1093b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1093b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093bc: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x1093BCu;
    SET_GPR_U32(ctx, 31, 0x1093C4u);
    ctx->pc = 0x1093C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093BCu;
    // 0x1093c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x1093BCu, 0x1093C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093C4u;
label_1093c4:
    // 0x1093c4: 0x8e032cd0  lw          $v1, 0x2CD0($s0)
    ctx->pc = 0x1093c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11472)));
    // 0x1093c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1093C8u;
    {
        const bool branch_taken_0x1093c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1093CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C8u;
        // 0x1093cc: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093c8) {
            ctx->pc = 0x1093D8u;
            goto label_1093d8;
        }
    }
    ctx->pc = 0x1093D0u;
    // 0x1093d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1093D0u;
    {
        const bool branch_taken_0x1093d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093D0u;
        // 0x1093d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093d0) {
            ctx->pc = 0x1093F0u;
            goto label_1093f0;
        }
    }
    ctx->pc = 0x1093D8u;
label_1093d8:
    // 0x1093d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1093d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1093dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1093dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1093e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1093e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1093e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1093e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1093e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1093e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1093ec: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x1093ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1093f0:
    // 0x1093f0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1093f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1093f4: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1093F4u;
    SET_GPR_U32(ctx, 31, 0x1093FCu);
    ctx->pc = 0x1093F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093F4u;
    // 0x1093f8: 0xa46201e8  sh          $v0, 0x1E8($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 488), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1093F4u, 0x1093FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093FCu;
label_1093fc:
    // 0x1093fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1093fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109400: 0xc04a058  jal         func_128160
    ctx->pc = 0x109400u;
    SET_GPR_U32(ctx, 31, 0x109408u);
    ctx->pc = 0x109404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109400u;
    // 0x109404: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128160u, 0x109400u, 0x109408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109408u;
label_109408:
    // 0x109408: 0x8e042cd0  lw          $a0, 0x2CD0($s0)
    ctx->pc = 0x109408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11472)));
    // 0x10940c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10940Cu;
    {
        const bool branch_taken_0x10940c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x109410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10940Cu;
        // 0x109410: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10940c) {
            ctx->pc = 0x10941Cu;
            goto label_10941c;
        }
    }
    ctx->pc = 0x109414u;
    // 0x109414: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109414u;
    {
        const bool branch_taken_0x109414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109414u;
        // 0x109418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109414) {
            ctx->pc = 0x109434u;
            goto label_109434;
        }
    }
    ctx->pc = 0x10941Cu;
label_10941c:
    // 0x10941c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x10941cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x109420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x109420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x109424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x109428: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x109428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10942c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x10942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x109430: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x109430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_109434:
    // 0x109434: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x109434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x109438: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x109438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10943c: 0x24847510  addiu       $a0, $a0, 0x7510
    ctx->pc = 0x10943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29968));
    // 0x109440: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x109440u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109444: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x109444u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109448: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x109448u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10944c: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10944cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x109450: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x109450u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109454: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x109454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109458: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x109458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10945c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10945cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109460: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x109460u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x109464: 0x4a0003bf  vwaitq
    ctx->pc = 0x109464u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x109468: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x109468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10946c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x10946cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x109470: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x109470u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x109474: 0x4a0003bf  vwaitq
    ctx->pc = 0x109474u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x109478: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x109478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10947c: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10947cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x109480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109488: 0x3e00008  jr          $ra
    ctx->pc = 0x109488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109488u;
        // 0x10948c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109490u;
}
