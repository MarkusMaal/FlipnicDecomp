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

// Function: FUN_0010c840
// Address: 0x10c840 - 0x10c8f4
void FUN_0010c840_0x10c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010c840_0x10c840");
#endif

    switch (ctx->pc) {
        case 0x10c840u: goto label_10c840;
        case 0x10c844u: goto label_10c844;
        case 0x10c848u: goto label_10c848;
        case 0x10c84cu: goto label_10c84c;
        case 0x10c850u: goto label_10c850;
        case 0x10c854u: goto label_10c854;
        case 0x10c858u: goto label_10c858;
        case 0x10c85cu: goto label_10c85c;
        case 0x10c860u: goto label_10c860;
        case 0x10c864u: goto label_10c864;
        case 0x10c868u: goto label_10c868;
        case 0x10c86cu: goto label_10c86c;
        case 0x10c870u: goto label_10c870;
        case 0x10c874u: goto label_10c874;
        case 0x10c878u: goto label_10c878;
        case 0x10c87cu: goto label_10c87c;
        case 0x10c880u: goto label_10c880;
        case 0x10c884u: goto label_10c884;
        case 0x10c888u: goto label_10c888;
        case 0x10c88cu: goto label_10c88c;
        case 0x10c890u: goto label_10c890;
        case 0x10c894u: goto label_10c894;
        case 0x10c898u: goto label_10c898;
        case 0x10c89cu: goto label_10c89c;
        case 0x10c8a0u: goto label_10c8a0;
        case 0x10c8a4u: goto label_10c8a4;
        case 0x10c8a8u: goto label_10c8a8;
        case 0x10c8acu: goto label_10c8ac;
        case 0x10c8b0u: goto label_10c8b0;
        case 0x10c8b4u: goto label_10c8b4;
        case 0x10c8b8u: goto label_10c8b8;
        case 0x10c8bcu: goto label_10c8bc;
        case 0x10c8c0u: goto label_10c8c0;
        case 0x10c8c4u: goto label_10c8c4;
        case 0x10c8c8u: goto label_10c8c8;
        case 0x10c8ccu: goto label_10c8cc;
        case 0x10c8d0u: goto label_10c8d0;
        case 0x10c8d4u: goto label_10c8d4;
        case 0x10c8d8u: goto label_10c8d8;
        case 0x10c8dcu: goto label_10c8dc;
        case 0x10c8e0u: goto label_10c8e0;
        case 0x10c8e4u: goto label_10c8e4;
        case 0x10c8e8u: goto label_10c8e8;
        case 0x10c8ecu: goto label_10c8ec;
        case 0x10c8f0u: goto label_10c8f0;
        default: break;
    }

    ctx->pc = 0x10c840u;

label_10c840:
    // 0x10c840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_10c844:
    // 0x10c844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10c848:
    // 0x10c848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10c84c:
    // 0x10c84c: 0xc0596a0  jal         func_165A80
label_10c850:
    if (ctx->pc == 0x10C850u) {
        ctx->pc = 0x10C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C84Cu;
        // 0x10c850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C854u;
        goto label_10c854;
    }
    ctx->pc = 0x10C84Cu;
    SET_GPR_U32(ctx, 31, 0x10C854u);
    ctx->pc = 0x10C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C84Cu;
    // 0x10c850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x10C84Cu, 0x10C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C854u;
label_10c854:
    // 0x10c854: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10c854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10c858:
    // 0x10c858: 0xc046458  jal         func_119160
label_10c85c:
    if (ctx->pc == 0x10C85Cu) {
        ctx->pc = 0x10C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C858u;
        // 0x10c85c: 0x2484e328  addiu       $a0, $a0, -0x1CD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C860u;
        goto label_10c860;
    }
    ctx->pc = 0x10C858u;
    SET_GPR_U32(ctx, 31, 0x10C860u);
    ctx->pc = 0x10C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C858u;
    // 0x10c85c: 0x2484e328  addiu       $a0, $a0, -0x1CD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10C858u, 0x10C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C860u;
label_10c860:
    // 0x10c860: 0xa6020254  sh          $v0, 0x254($s0)
    ctx->pc = 0x10c860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 596), (uint16_t)GPR_U32(ctx, 2));
label_10c864:
    // 0x10c864: 0x86030254  lh          $v1, 0x254($s0)
    ctx->pc = 0x10c864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 596)));
label_10c868:
    // 0x10c868: 0x460001e  bltz        $v1, . + 4 + (0x1E << 2)
label_10c86c:
    if (ctx->pc == 0x10C86Cu) {
        ctx->pc = 0x10C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C868u;
        // 0x10c86c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C870u;
        goto label_10c870;
    }
    ctx->pc = 0x10C868u;
    {
        const bool branch_taken_0x10c868 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C868u;
        // 0x10c86c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c868) {
            ctx->pc = 0x10C8E4u;
            goto label_10c8e4;
        }
    }
    ctx->pc = 0x10C870u;
label_10c870:
    // 0x10c870: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10c870u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10c874:
    // 0x10c874: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10c874u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10c878:
    // 0x10c878: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10c878u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10c87c:
    // 0x10c87c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10c87cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10c880:
    // 0x10c880: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10c880u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_10c884:
    // 0x10c884: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x10c884u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_10c888:
    // 0x10c888: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x10c888u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_10c88c:
    // 0x10c88c: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x10c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_10c890:
    // 0x10c890: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x10c890u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_10c894:
    // 0x10c894: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x10c894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c898:
    // 0x10c898: 0x86030254  lh          $v1, 0x254($s0)
    ctx->pc = 0x10c898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 596)));
label_10c89c:
    // 0x10c89c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10c8a0:
    // 0x10c8a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10c8a4:
    // 0x10c8a4: 0xc0465f0  jal         func_1197C0
label_10c8a8:
    if (ctx->pc == 0x10C8A8u) {
        ctx->pc = 0x10C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8A4u;
        // 0x10c8a8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C8ACu;
        goto label_10c8ac;
    }
    ctx->pc = 0x10C8A4u;
    SET_GPR_U32(ctx, 31, 0x10C8ACu);
    ctx->pc = 0x10C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C8A4u;
    // 0x10c8a8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10C8A4u, 0x10C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C8ACu;
label_10c8ac:
    // 0x10c8ac: 0xa6020256  sh          $v0, 0x256($s0)
    ctx->pc = 0x10c8acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 598), (uint16_t)GPR_U32(ctx, 2));
label_10c8b0:
    // 0x10c8b0: 0x86040254  lh          $a0, 0x254($s0)
    ctx->pc = 0x10c8b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 596)));
label_10c8b4:
    // 0x10c8b4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10c8b8:
    // 0x10c8b8: 0x86030256  lh          $v1, 0x256($s0)
    ctx->pc = 0x10c8b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 598)));
label_10c8bc:
    // 0x10c8bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_10c8c0:
    // 0x10c8c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10c8c4:
    // 0x10c8c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10c8c8:
    // 0x10c8c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10c8cc:
    // 0x10c8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10c8d0:
    // 0x10c8d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10c8d4:
    // 0x10c8d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c8d8:
    // 0x10c8d8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10c8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10c8dc:
    // 0x10c8dc: 0x320f809  jalr        $t9
label_10c8e0:
    if (ctx->pc == 0x10C8E0u) {
        ctx->pc = 0x10C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8DCu;
        // 0x10c8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C8E4u;
        goto label_10c8e4;
    }
    ctx->pc = 0x10C8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C8E4u);
        ctx->pc = 0x10C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8DCu;
        // 0x10c8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C8DCu, 0x10C8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C8E4u;
label_10c8e4:
    // 0x10c8e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10c8e8:
    // 0x10c8e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10c8ec:
    // 0x10c8ec: 0x3e00008  jr          $ra
label_10c8f0:
    if (ctx->pc == 0x10C8F0u) {
        ctx->pc = 0x10C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8ECu;
        // 0x10c8f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C8F4u;
        goto label_fallthrough_0x10c8ec;
    }
    ctx->pc = 0x10C8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8ECu;
        // 0x10c8f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10c8ec:
    ctx->pc = 0x10C8F4u;
}
