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

// Function: entry_00157204
// Address: 0x157204 - 0x157250
void entry_00157204_0x157204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157204_0x157204");
#endif

    ctx->pc = 0x157204u;

    // 0x157204: 0x0  nop
    ctx->pc = 0x157204u;
    // NOP
    // 0x157208: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x157208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x15720c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x157210: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x157210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x157214: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x157214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157218: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x157218u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15721c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15721cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157220: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x157220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157224: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x157224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157228: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x157228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15722c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x15722cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157230: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157234: 0x0  nop
    ctx->pc = 0x157234u;
    // NOP
    // 0x157238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15723c: 0x0  nop
    ctx->pc = 0x15723cu;
    // NOP
    // 0x157240: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x157240u;
    {
        const bool branch_taken_0x157240 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157240u;
        // 0x157244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157240) {
            ctx->pc = 0x157250u;
            return;
        }
    }
    ctx->pc = 0x157248u;
    // 0x157248: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x157248u;
    {
        const bool branch_taken_0x157248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157248) {
            ctx->pc = 0x157264u;
            return;
        }
    }
    ctx->pc = 0x157250u;
}
