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

// Function: FUN_001588b0
// Address: 0x1588b0 - 0x15893c
void FUN_001588b0_0x1588b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001588b0_0x1588b0");
#endif

    switch (ctx->pc) {
        case 0x1588f8u: goto label_1588f8;
        default: break;
    }

    ctx->pc = 0x1588b0u;

    // 0x1588b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1588b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1588b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1588b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1588b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1588b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1588bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1588bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1588c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1588c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1588c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588c8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1588c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1588cc: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1588ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1588d0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1588d0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1588d4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1588d4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1588d8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1588d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1588dc: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x1588dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1588e0: 0xfa050020  sqc2        $vf5, 0x20($s0)
    ctx->pc = 0x1588e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1588e4: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x1588e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1588e8: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x1588e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1588ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1588ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588f0: 0xc05490c  jal         func_152430
    ctx->pc = 0x1588F0u;
    SET_GPR_U32(ctx, 31, 0x1588F8u);
    ctx->pc = 0x1588F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1588F0u;
    // 0x1588f4: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152430u, 0x1588F0u, 0x1588F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588F8u;
label_1588f8:
    // 0x1588f8: 0x9223006b  lbu         $v1, 0x6B($s1)
    ctx->pc = 0x1588f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 107)));
    // 0x1588fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1588FCu;
    {
        const bool branch_taken_0x1588fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588FCu;
        // 0x158900: 0x262301b0  addiu       $v1, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1588fc) {
            ctx->pc = 0x158920u;
            goto label_158920;
        }
    }
    ctx->pc = 0x158904u;
    // 0x158904: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x158904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x158908: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x158908u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15890c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x15890cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158910: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x158910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158914: 0x4bc521a8  vadd.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x158914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158918: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158918u;
    {
        const bool branch_taken_0x158918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158918u;
        // 0x15891c: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158918) {
            ctx->pc = 0x158928u;
            goto label_158928;
        }
    }
    ctx->pc = 0x158920u;
label_158920:
    // 0x158920: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x158920u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x158924: 0x7e060030  sq          $a2, 0x30($s0)
    ctx->pc = 0x158924u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 6));
label_158928:
    // 0x158928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15892c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15892cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158934: 0x3e00008  jr          $ra
    ctx->pc = 0x158934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158934u;
        // 0x158938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15893Cu;
}
