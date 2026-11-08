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

// Function: entry_00163978
// Address: 0x163978 - 0x1639ec
void entry_00163978_0x163978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163978_0x163978");
#endif

    ctx->pc = 0x163978u;

    // 0x163978: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x163978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16397c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x163980: 0xe620034c  swc1        $f0, 0x34C($s1)
    ctx->pc = 0x163980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
    // 0x163984: 0x86430218  lh          $v1, 0x218($s2)
    ctx->pc = 0x163984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x163988: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x163988u;
    {
        const bool branch_taken_0x163988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163988u;
        // 0x16398c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163988) {
            ctx->pc = 0x1639F0u;
            return;
        }
    }
    ctx->pc = 0x163990u;
    // 0x163990: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x163990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x163994: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163998: 0xc6210348  lwc1        $f1, 0x348($s1)
    ctx->pc = 0x163998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16399c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16399cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1639a0: 0xc4620058  lwc1        $f2, 0x58($v1)
    ctx->pc = 0x1639a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1639a4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1639a4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1639a8: 0x0  nop
    ctx->pc = 0x1639a8u;
    // NOP
    // 0x1639ac: 0x0  nop
    ctx->pc = 0x1639acu;
    // NOP
    // 0x1639b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1639b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1639b4: 0x0  nop
    ctx->pc = 0x1639b4u;
    // NOP
    // 0x1639b8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1639B8u;
    {
        const bool branch_taken_0x1639b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1639BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639B8u;
        // 0x1639bc: 0x26220360  addiu       $v0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639b8) {
            ctx->pc = 0x1639ECu;
            return;
        }
    }
    ctx->pc = 0x1639C0u;
    // 0x1639c0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1639c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1639c4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1639c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1639c8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1639c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1639cc: 0x0  nop
    ctx->pc = 0x1639ccu;
    // NOP
    // 0x1639d0: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x1639d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1639d4: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x1639d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1639d8: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x1639d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1639dc: 0x4be621bc  vmulax.xyzw $ACC, $vf4, $vf6x
    ctx->pc = 0x1639dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1639e0: 0x4be82a48  vmaddx.xyzw $vf9, $vf5, $vf8x
    ctx->pc = 0x1639e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1639e4: 0xfa290000  sqc2        $vf9, 0x0($s1)
    ctx->pc = 0x1639e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1639e8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1639e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->pc = 0x1639ecu;
}
