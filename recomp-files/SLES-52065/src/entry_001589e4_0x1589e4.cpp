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

// Function: entry_001589e4
// Address: 0x1589e4 - 0x158a44
void entry_001589e4_0x1589e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001589e4_0x1589e4");
#endif

    ctx->pc = 0x1589e4u;

    // 0x1589e4: 0x0  nop
    ctx->pc = 0x1589e4u;
    // NOP
    // 0x1589e8: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1589e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1589ec: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1589ECu;
    {
        const bool branch_taken_0x1589ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1589F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589ECu;
        // 0x1589f0: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589ec) {
            ctx->pc = 0x1589CCu;
            return;
        }
    }
    ctx->pc = 0x1589F4u;
    // 0x1589f4: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1589f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1589f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1589f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1589fc: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x1589fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x158a00: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x158a04: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x158a04u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x158a08: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x158a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x158a0c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x158a0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x158a10: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x158a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x158a14: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x158a14u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158a18: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x158a18u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158a1c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x158a1cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158a20: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x158a20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x158a24: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x158a24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x158a28: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x158a28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158a2c: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x158a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x158a30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x158a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x158a34: 0x0  nop
    ctx->pc = 0x158a34u;
    // NOP
    // 0x158a38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x158a38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x158a3c: 0x8056294  j           func_158A50
    ctx->pc = 0x158A3Cu;
    ctx->pc = 0x158A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A3Cu;
    // 0x158a40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158A50u;
    FUN_00158a50_0x158a50(rdram, ctx, runtime); return;
    ctx->pc = 0x158A44u;
}
