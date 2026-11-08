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

// Function: FUN_00158800
// Address: 0x158800 - 0x158864
void FUN_00158800_0x158800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158800_0x158800");
#endif

    switch (ctx->pc) {
        case 0x158848u: goto label_158848;
        default: break;
    }

    ctx->pc = 0x158800u;

    // 0x158800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15880c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x158810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158814: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x158814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158818: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x158818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15881c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x15881cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x158820: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x158820u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158824: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x158824u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158828: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x158828u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15882c: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x15882cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x158830: 0xfa050020  sqc2        $vf5, 0x20($s0)
    ctx->pc = 0x158830u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x158834: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x158834u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158838: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x158838u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15883c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158840: 0xc05490c  jal         func_152430
    ctx->pc = 0x158840u;
    SET_GPR_U32(ctx, 31, 0x158848u);
    ctx->pc = 0x158844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158840u;
    // 0x158844: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152430u, 0x158840u, 0x158848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158848u;
label_158848:
    // 0x158848: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x158848u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15884c: 0x7e060030  sq          $a2, 0x30($s0)
    ctx->pc = 0x15884cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 6));
    // 0x158850: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15885c: 0x3e00008  jr          $ra
    ctx->pc = 0x15885Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15885Cu;
        // 0x158860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15885Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158864u;
}
