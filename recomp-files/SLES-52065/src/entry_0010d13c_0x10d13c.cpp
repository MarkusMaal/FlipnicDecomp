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

// Function: entry_0010d13c
// Address: 0x10d13c - 0x10d198
void entry_0010d13c_0x10d13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d13c_0x10d13c");
#endif

    ctx->pc = 0x10d13cu;

    // 0x10d13c: 0x8e280244  lw          $t0, 0x244($s1)
    ctx->pc = 0x10d13cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x10d140: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x10d140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x10d144: 0x26230220  addiu       $v1, $s1, 0x220
    ctx->pc = 0x10d144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x10d148: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x10d148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10d14c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x10d14cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10d150: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x10d150u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d154: 0x0  nop
    ctx->pc = 0x10d154u;
    // NOP
    // 0x10d158: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x10d158u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x10d15c: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x10d15cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10d160: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x10d160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x10d164: 0x4be621bc  vmulax.xyzw $ACC, $vf4, $vf6x
    ctx->pc = 0x10d164u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x10d168: 0x4be82a48  vmaddx.xyzw $vf9, $vf5, $vf8x
    ctx->pc = 0x10d168u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x10d16c: 0xf8a90000  sqc2        $vf9, 0x0($a1)
    ctx->pc = 0x10d16cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x10d170: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10d170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10d174: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10d174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d178: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x10d178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x10d17c: 0xc6200244  lwc1        $f0, 0x244($s1)
    ctx->pc = 0x10d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d180: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10d180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d184: 0x0  nop
    ctx->pc = 0x10d184u;
    // NOP
    // 0x10d188: 0x4501008d  bc1t        . + 4 + (0x8D << 2)
    ctx->pc = 0x10D188u;
    {
        const bool branch_taken_0x10d188 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D188u;
        // 0x10d18c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d188) {
            ctx->pc = 0x10D3C0u;
            return;
        }
    }
    ctx->pc = 0x10D190u;
    // 0x10d190: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x10D190u;
    {
        const bool branch_taken_0x10d190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D190u;
        // 0x10d194: 0xa623024e  sh          $v1, 0x24E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d190) {
            ctx->pc = 0x10D3C0u;
            return;
        }
    }
    ctx->pc = 0x10D198u;
}
