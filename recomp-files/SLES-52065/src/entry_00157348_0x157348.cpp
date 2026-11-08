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

// Function: entry_00157348
// Address: 0x157348 - 0x15739c
void entry_00157348_0x157348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157348_0x157348");
#endif

    ctx->pc = 0x157348u;

    // 0x157348: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157348u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15734c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x15734cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157350: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x157350u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157354: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x157354u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157358: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x157358u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15735c: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x15735cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157360: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x157360u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157364: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x157364u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157368: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x157368u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15736c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x15736cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x157370: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x157370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157378: 0xc4420134  lwc1        $f2, 0x134($v0)
    ctx->pc = 0x157378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15737c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x15737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157380: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x157380u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x157384: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x157384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157388: 0x0  nop
    ctx->pc = 0x157388u;
    // NOP
    // 0x15738c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15738Cu;
    {
        const bool branch_taken_0x15738c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15738Cu;
        // 0x157390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15738c) {
            ctx->pc = 0x15739Cu;
            return;
        }
    }
    ctx->pc = 0x157394u;
    // 0x157394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x157394u;
    {
        const bool branch_taken_0x157394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157394) {
            ctx->pc = 0x1573B0u;
            return;
        }
    }
    ctx->pc = 0x15739Cu;
}
