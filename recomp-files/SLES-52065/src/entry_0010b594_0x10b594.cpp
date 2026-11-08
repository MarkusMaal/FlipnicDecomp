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

// Function: entry_0010b594
// Address: 0x10b594 - 0x10b614
void entry_0010b594_0x10b594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b594_0x10b594");
#endif

    switch (ctx->pc) {
        case 0x10b5f0u: goto label_10b5f0;
        case 0x10b60cu: goto label_10b60c;
        default: break;
    }

    ctx->pc = 0x10b594u;

    // 0x10b594: 0x8e03231c  lw          $v1, 0x231C($s0)
    ctx->pc = 0x10b594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x10b598: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x10b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x10b59c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10b59cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10b5a0: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10b5a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10b5a4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10b5a4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10b5a8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10b5a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10b5ac: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10b5acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10b5b0: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x10b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10b5b4: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x10b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10b5b8: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x10b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10b5bc: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x10b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10b5c0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x10b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x10b5c4: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x10b5c4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b5c8: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x10b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x10b5cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10b5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b5d0: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
    // 0x10b5d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5d8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10b5dc: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
    // 0x10b5e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b5e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10b5e8: 0xc0466e4  jal         func_119B90
    ctx->pc = 0x10B5E8u;
    SET_GPR_U32(ctx, 31, 0x10B5F0u);
    ctx->pc = 0x10B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5E8u;
    // 0x10b5ec: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x10B5E8u, 0x10B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5F0u;
label_10b5f0:
    // 0x10b5f0: 0x8e02231c  lw          $v0, 0x231C($s0)
    ctx->pc = 0x10b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x10b5f4: 0x260443c0  addiu       $a0, $s0, 0x43C0
    ctx->pc = 0x10b5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x10b5f8: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x10b5f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b5fc: 0x7e0643c0  sq          $a2, 0x43C0($s0)
    ctx->pc = 0x10b5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 17344), GPR_VEC(ctx, 6));
    // 0x10b600: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x10b600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x10b604: 0xc042930  jal         func_10A4C0
    ctx->pc = 0x10B604u;
    SET_GPR_U32(ctx, 31, 0x10B60Cu);
    ctx->pc = 0x10B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B604u;
    // 0x10b608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4C0u, 0x10B604u, 0x10B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B60Cu;
label_10b60c:
    // 0x10b60c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x10B60Cu;
    {
        const bool branch_taken_0x10b60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b60c) {
            ctx->pc = 0x10B814u;
            return;
        }
    }
    ctx->pc = 0x10B614u;
}
