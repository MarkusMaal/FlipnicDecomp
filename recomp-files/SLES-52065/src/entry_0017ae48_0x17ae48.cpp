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

// Function: entry_0017ae48
// Address: 0x17ae48 - 0x17aec0
void entry_0017ae48_0x17ae48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ae48_0x17ae48");
#endif

    switch (ctx->pc) {
        case 0x17ae94u: goto label_17ae94;
        case 0x17aebcu: goto label_17aebc;
        default: break;
    }

    ctx->pc = 0x17ae48u;

    // 0x17ae48: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17AE48u;
    {
        const bool branch_taken_0x17ae48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE48u;
        // 0x17ae4c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae48) {
            ctx->pc = 0x17AEC0u;
            return;
        }
    }
    ctx->pc = 0x17AE50u;
    // 0x17ae50: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x17ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x17ae54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17ae58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17ae58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ae5c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17ae5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ae60: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17ae60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ae64: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17ae64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ae68: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17ae68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x17ae6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17ae6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17ae70: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17ae70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ae74: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17ae74u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x17ae78: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17ae78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17ae7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17ae7cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17ae80: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17ae80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17ae84: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x17ae84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17ae88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17ae88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ae8c: 0xc054924  jal         func_152490
    ctx->pc = 0x17AE8Cu;
    SET_GPR_U32(ctx, 31, 0x17AE94u);
    ctx->pc = 0x17AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE8Cu;
    // 0x17ae90: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152490u, 0x17AE8Cu, 0x17AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AE94u;
label_17ae94:
    // 0x17ae94: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x17ae94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ae98: 0x7e260050  sq          $a2, 0x50($s1)
    ctx->pc = 0x17ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 6));
    // 0x17ae9c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17ae9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17aea0: 0x86230408  lh          $v1, 0x408($s1)
    ctx->pc = 0x17aea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1032)));
    // 0x17aea4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x17aea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x17aea8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x17aeac: 0x8e250404  lw          $a1, 0x404($s1)
    ctx->pc = 0x17aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
    // 0x17aeb0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17aeb4: 0xc0466e4  jal         func_119B90
    ctx->pc = 0x17AEB4u;
    SET_GPR_U32(ctx, 31, 0x17AEBCu);
    ctx->pc = 0x17AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEB4u;
    // 0x17aeb8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x17AEB4u, 0x17AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AEBCu;
label_17aebc:
    // 0x17aebc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x17aec0u;
}
