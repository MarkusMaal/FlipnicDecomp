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

// Function: entry_00158b38
// Address: 0x158b38 - 0x158b80
void entry_00158b38_0x158b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b38_0x158b38");
#endif

    ctx->pc = 0x158b38u;

    // 0x158b38: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x158b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x158b3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x158b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158b40: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x158b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x158b44: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158b44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158b48: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x158b48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158b4c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x158b4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158b50: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x158b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158b54: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x158b54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158b58: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x158b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158b5c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x158b5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158b60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158b64: 0x0  nop
    ctx->pc = 0x158b64u;
    // NOP
    // 0x158b68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158b6c: 0x0  nop
    ctx->pc = 0x158b6cu;
    // NOP
    // 0x158b70: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x158B70u;
    {
        const bool branch_taken_0x158b70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158b70) {
            ctx->pc = 0x158B80u;
            return;
        }
    }
    ctx->pc = 0x158B78u;
    // 0x158b78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158B78u;
    {
        const bool branch_taken_0x158b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B78u;
        // 0x158b7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b78) {
            ctx->pc = 0x158B98u;
            return;
        }
    }
    ctx->pc = 0x158B80u;
}
