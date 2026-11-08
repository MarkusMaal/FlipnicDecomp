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

// Function: entry_00162a70
// Address: 0x162a70 - 0x162ac4
void entry_00162a70_0x162a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162a70_0x162a70");
#endif

    ctx->pc = 0x162a70u;

    // 0x162a70: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x162a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x162a74: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x162a74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162a78: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x162a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162a7c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x162a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162a80: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x162a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162a84: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x162a84u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x162a88: 0x4a0003bf  vwaitq
    ctx->pc = 0x162a88u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x162a8c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x162a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162a90: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x162a90u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x162a94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162a98: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x162a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x162a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162aa0: 0x0  nop
    ctx->pc = 0x162aa0u;
    // NOP
    // 0x162aa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162aa8: 0x0  nop
    ctx->pc = 0x162aa8u;
    // NOP
    // 0x162aac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x162AACu;
    {
        const bool branch_taken_0x162aac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AACu;
        // 0x162ab0: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162aac) {
            ctx->pc = 0x162AC4u;
            return;
        }
    }
    ctx->pc = 0x162AB4u;
    // 0x162ab4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x162ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162abc: 0x0  nop
    ctx->pc = 0x162abcu;
    // NOP
    // 0x162ac0: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x162ac0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->pc = 0x162ac4u;
}
