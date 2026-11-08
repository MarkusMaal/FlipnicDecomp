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

// Function: FUN_001572d0
// Address: 0x1572d0 - 0x15732c
void FUN_001572d0_0x1572d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001572d0_0x1572d0");
#endif

    ctx->pc = 0x1572d0u;

    // 0x1572d0: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x1572d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1572d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1572d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1572d8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1572d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1572dc: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1572DCu;
    {
        const bool branch_taken_0x1572dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1572dc) {
            ctx->pc = 0x1572E8u;
            goto label_1572e8;
        }
    }
    ctx->pc = 0x1572E4u;
    // 0x1572e4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1572e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1572e8:
    // 0x1572e8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1572e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1572ec: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1572ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1572f0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1572f0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1572f4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1572f4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1572f8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1572f8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1572fc: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x1572fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157300: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x157300u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157304: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x157304u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157308: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x157308u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15730c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x15730cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x157310: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x157310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157314: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x157314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157318: 0xc4410134  lwc1        $f1, 0x134($v0)
    ctx->pc = 0x157318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15731c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157320: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x157320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x157324: 0x807d428  j           func_1F50A0
    ctx->pc = 0x157324u;
    ctx->pc = 0x157328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157324u;
    // 0x157328: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    FUN_001f50a0_0x1f50a0(rdram, ctx, runtime); return;
    ctx->pc = 0x15732Cu;
}
