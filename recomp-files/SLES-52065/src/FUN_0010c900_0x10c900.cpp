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

// Function: FUN_0010c900
// Address: 0x10c900 - 0x10ca20
void FUN_0010c900_0x10c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010c900_0x10c900");
#endif

    switch (ctx->pc) {
        case 0x10c900u: goto label_10c900;
        case 0x10c904u: goto label_10c904;
        case 0x10c908u: goto label_10c908;
        case 0x10c90cu: goto label_10c90c;
        case 0x10c910u: goto label_10c910;
        case 0x10c914u: goto label_10c914;
        case 0x10c918u: goto label_10c918;
        case 0x10c91cu: goto label_10c91c;
        case 0x10c920u: goto label_10c920;
        case 0x10c924u: goto label_10c924;
        case 0x10c928u: goto label_10c928;
        case 0x10c92cu: goto label_10c92c;
        case 0x10c930u: goto label_10c930;
        case 0x10c934u: goto label_10c934;
        case 0x10c938u: goto label_10c938;
        case 0x10c93cu: goto label_10c93c;
        case 0x10c940u: goto label_10c940;
        case 0x10c944u: goto label_10c944;
        case 0x10c948u: goto label_10c948;
        case 0x10c94cu: goto label_10c94c;
        case 0x10c950u: goto label_10c950;
        case 0x10c954u: goto label_10c954;
        case 0x10c958u: goto label_10c958;
        case 0x10c95cu: goto label_10c95c;
        case 0x10c960u: goto label_10c960;
        case 0x10c964u: goto label_10c964;
        case 0x10c968u: goto label_10c968;
        case 0x10c96cu: goto label_10c96c;
        case 0x10c970u: goto label_10c970;
        case 0x10c974u: goto label_10c974;
        case 0x10c978u: goto label_10c978;
        case 0x10c97cu: goto label_10c97c;
        case 0x10c980u: goto label_10c980;
        case 0x10c984u: goto label_10c984;
        case 0x10c988u: goto label_10c988;
        case 0x10c98cu: goto label_10c98c;
        case 0x10c990u: goto label_10c990;
        case 0x10c994u: goto label_10c994;
        case 0x10c998u: goto label_10c998;
        case 0x10c99cu: goto label_10c99c;
        case 0x10c9a0u: goto label_10c9a0;
        case 0x10c9a4u: goto label_10c9a4;
        case 0x10c9a8u: goto label_10c9a8;
        case 0x10c9acu: goto label_10c9ac;
        case 0x10c9b0u: goto label_10c9b0;
        case 0x10c9b4u: goto label_10c9b4;
        case 0x10c9b8u: goto label_10c9b8;
        case 0x10c9bcu: goto label_10c9bc;
        case 0x10c9c0u: goto label_10c9c0;
        case 0x10c9c4u: goto label_10c9c4;
        case 0x10c9c8u: goto label_10c9c8;
        case 0x10c9ccu: goto label_10c9cc;
        case 0x10c9d0u: goto label_10c9d0;
        case 0x10c9d4u: goto label_10c9d4;
        case 0x10c9d8u: goto label_10c9d8;
        case 0x10c9dcu: goto label_10c9dc;
        case 0x10c9e0u: goto label_10c9e0;
        case 0x10c9e4u: goto label_10c9e4;
        case 0x10c9e8u: goto label_10c9e8;
        case 0x10c9ecu: goto label_10c9ec;
        case 0x10c9f0u: goto label_10c9f0;
        case 0x10c9f4u: goto label_10c9f4;
        case 0x10c9f8u: goto label_10c9f8;
        case 0x10c9fcu: goto label_10c9fc;
        case 0x10ca00u: goto label_10ca00;
        case 0x10ca04u: goto label_10ca04;
        case 0x10ca08u: goto label_10ca08;
        case 0x10ca0cu: goto label_10ca0c;
        case 0x10ca10u: goto label_10ca10;
        case 0x10ca14u: goto label_10ca14;
        case 0x10ca18u: goto label_10ca18;
        case 0x10ca1cu: goto label_10ca1c;
        default: break;
    }

    ctx->pc = 0x10c900u;

label_10c900:
    // 0x10c900: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10c904:
    // 0x10c904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10c908:
    // 0x10c908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10c908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10c90c:
    // 0x10c90c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10c910:
    // 0x10c910: 0xc0596a0  jal         func_165A80
label_10c914:
    if (ctx->pc == 0x10C914u) {
        ctx->pc = 0x10C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C910u;
        // 0x10c914: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C918u;
        goto label_10c918;
    }
    ctx->pc = 0x10C910u;
    SET_GPR_U32(ctx, 31, 0x10C918u);
    ctx->pc = 0x10C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C910u;
    // 0x10c914: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x10C910u, 0x10C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C918u;
label_10c918:
    // 0x10c918: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10c918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10c91c:
    // 0x10c91c: 0xc046458  jal         func_119160
label_10c920:
    if (ctx->pc == 0x10C920u) {
        ctx->pc = 0x10C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C91Cu;
        // 0x10c920: 0x2484e328  addiu       $a0, $a0, -0x1CD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C924u;
        goto label_10c924;
    }
    ctx->pc = 0x10C91Cu;
    SET_GPR_U32(ctx, 31, 0x10C924u);
    ctx->pc = 0x10C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C91Cu;
    // 0x10c920: 0x2484e328  addiu       $a0, $a0, -0x1CD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10C91Cu, 0x10C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C924u;
label_10c924:
    // 0x10c924: 0xa6220254  sh          $v0, 0x254($s1)
    ctx->pc = 0x10c924u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 596), (uint16_t)GPR_U32(ctx, 2));
label_10c928:
    // 0x10c928: 0x86220254  lh          $v0, 0x254($s1)
    ctx->pc = 0x10c928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 596)));
label_10c92c:
    // 0x10c92c: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
label_10c930:
    if (ctx->pc == 0x10C930u) {
        ctx->pc = 0x10C934u;
        goto label_10c934;
    }
    ctx->pc = 0x10C92Cu;
    {
        const bool branch_taken_0x10c92c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c92c) {
            ctx->pc = 0x10C9ACu;
            goto label_10c9ac;
        }
    }
    ctx->pc = 0x10C934u;
label_10c934:
    // 0x10c934: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x10c934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_10c938:
    // 0x10c938: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10c938u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10c93c:
    // 0x10c93c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10c93cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10c940:
    // 0x10c940: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10c940u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10c944:
    // 0x10c944: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10c944u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10c948:
    // 0x10c948: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10c948u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_10c94c:
    // 0x10c94c: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x10c94cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_10c950:
    // 0x10c950: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x10c950u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_10c954:
    // 0x10c954: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x10c954u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_10c958:
    // 0x10c958: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x10c958u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_10c95c:
    // 0x10c95c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x10c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c960:
    // 0x10c960: 0x86230254  lh          $v1, 0x254($s1)
    ctx->pc = 0x10c960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 596)));
label_10c964:
    // 0x10c964: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10c968:
    // 0x10c968: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10c968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10c96c:
    // 0x10c96c: 0xc0465f0  jal         func_1197C0
label_10c970:
    if (ctx->pc == 0x10C970u) {
        ctx->pc = 0x10C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C96Cu;
        // 0x10c970: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C974u;
        goto label_10c974;
    }
    ctx->pc = 0x10C96Cu;
    SET_GPR_U32(ctx, 31, 0x10C974u);
    ctx->pc = 0x10C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C96Cu;
    // 0x10c970: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10C96Cu, 0x10C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C974u;
label_10c974:
    // 0x10c974: 0xa6220256  sh          $v0, 0x256($s1)
    ctx->pc = 0x10c974u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 598), (uint16_t)GPR_U32(ctx, 2));
label_10c978:
    // 0x10c978: 0x86240254  lh          $a0, 0x254($s1)
    ctx->pc = 0x10c978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 596)));
label_10c97c:
    // 0x10c97c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10c980:
    // 0x10c980: 0x86230256  lh          $v1, 0x256($s1)
    ctx->pc = 0x10c980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 598)));
label_10c984:
    // 0x10c984: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10c984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_10c988:
    // 0x10c988: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10c98c:
    // 0x10c98c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10c990:
    // 0x10c990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10c990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10c994:
    // 0x10c994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10c998:
    // 0x10c998: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10c99c:
    // 0x10c99c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c99cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c9a0:
    // 0x10c9a0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10c9a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10c9a4:
    // 0x10c9a4: 0x320f809  jalr        $t9
label_10c9a8:
    if (ctx->pc == 0x10C9A8u) {
        ctx->pc = 0x10C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9A4u;
        // 0x10c9a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C9ACu;
        goto label_10c9ac;
    }
    ctx->pc = 0x10C9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C9ACu);
        ctx->pc = 0x10C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9A4u;
        // 0x10c9a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C9A4u, 0x10C9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C9ACu;
label_10c9ac:
    // 0x10c9ac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10c9b0:
    // 0x10c9b0: 0xc046458  jal         func_119160
label_10c9b4:
    if (ctx->pc == 0x10C9B4u) {
        ctx->pc = 0x10C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9B0u;
        // 0x10c9b4: 0x2484e338  addiu       $a0, $a0, -0x1CC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C9B8u;
        goto label_10c9b8;
    }
    ctx->pc = 0x10C9B0u;
    SET_GPR_U32(ctx, 31, 0x10C9B8u);
    ctx->pc = 0x10C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9B0u;
    // 0x10c9b4: 0x2484e338  addiu       $a0, $a0, -0x1CC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10C9B0u, 0x10C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9B8u;
label_10c9b8:
    // 0x10c9b8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10c9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10c9bc:
    // 0x10c9bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c9c0:
    // 0x10c9c0: 0xc046458  jal         func_119160
label_10c9c4:
    if (ctx->pc == 0x10C9C4u) {
        ctx->pc = 0x10C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9C0u;
        // 0x10c9c4: 0x2484e348  addiu       $a0, $a0, -0x1CB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C9C8u;
        goto label_10c9c8;
    }
    ctx->pc = 0x10C9C0u;
    SET_GPR_U32(ctx, 31, 0x10C9C8u);
    ctx->pc = 0x10C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9C0u;
    // 0x10c9c4: 0x2484e348  addiu       $a0, $a0, -0x1CB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10C9C0u, 0x10C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9C8u;
label_10c9c8:
    // 0x10c9c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_10c9cc:
    if (ctx->pc == 0x10C9CCu) {
        ctx->pc = 0x10C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9C8u;
        // 0x10c9cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C9D0u;
        goto label_10c9d0;
    }
    ctx->pc = 0x10C9C8u;
    {
        const bool branch_taken_0x10c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9C8u;
        // 0x10c9cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9c8) {
            ctx->pc = 0x10C9E8u;
            goto label_10c9e8;
        }
    }
    ctx->pc = 0x10C9D0u;
label_10c9d0:
    // 0x10c9d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10c9d4:
    // 0x10c9d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10c9d8:
    // 0x10c9d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10c9dc:
    // 0x10c9dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10c9e0:
    // 0x10c9e0: 0xa4700688  sh          $s0, 0x688($v1)
    ctx->pc = 0x10c9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1672), (uint16_t)GPR_U32(ctx, 16));
label_10c9e4:
    // 0x10c9e4: 0xa462068a  sh          $v0, 0x68A($v1)
    ctx->pc = 0x10c9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1674), (uint16_t)GPR_U32(ctx, 2));
label_10c9e8:
    // 0x10c9e8: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x10c9e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_10c9ec:
    // 0x10c9ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_10c9f0:
    if (ctx->pc == 0x10C9F0u) {
        ctx->pc = 0x10C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9ECu;
        // 0x10c9f0: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C9F4u;
        goto label_10c9f4;
    }
    ctx->pc = 0x10C9ECu;
    {
        const bool branch_taken_0x10c9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9ECu;
        // 0x10c9f0: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9ec) {
            ctx->pc = 0x10C9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c9d0;
        }
    }
    ctx->pc = 0x10C9F4u;
label_10c9f4:
    // 0x10c9f4: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x10c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_10c9f8:
    // 0x10c9f8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x10c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10c9fc:
    // 0x10c9fc: 0xae230264  sw          $v1, 0x264($s1)
    ctx->pc = 0x10c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 3));
label_10ca00:
    // 0x10ca00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10ca04:
    // 0x10ca04: 0xae24026c  sw          $a0, 0x26C($s1)
    ctx->pc = 0x10ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 4));
label_10ca08:
    // 0x10ca08: 0xae230274  sw          $v1, 0x274($s1)
    ctx->pc = 0x10ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 3));
label_10ca0c:
    // 0x10ca0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ca0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10ca10:
    // 0x10ca10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10ca10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10ca14:
    // 0x10ca14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ca14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10ca18:
    // 0x10ca18: 0x3e00008  jr          $ra
label_10ca1c:
    if (ctx->pc == 0x10CA1Cu) {
        ctx->pc = 0x10CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA18u;
        // 0x10ca1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CA20u;
        goto label_fallthrough_0x10ca18;
    }
    ctx->pc = 0x10CA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA18u;
        // 0x10ca1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10ca18:
    ctx->pc = 0x10CA20u;
}
