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

// Function: FUN_00156c80
// Address: 0x156c80 - 0x156cf0
void FUN_00156c80_0x156c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00156c80_0x156c80");
#endif

    switch (ctx->pc) {
        case 0x156cd8u: goto label_156cd8;
        default: break;
    }

    ctx->pc = 0x156c80u;

    // 0x156c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x156c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c90: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x156c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x156c94: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x156c94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156c98: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x156c98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156c9c: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x156c9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156ca0: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x156ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x156ca4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x156ca4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156ca8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x156ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156cac: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x156cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156cb0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x156cb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156cb4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x156cb4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x156cb8: 0x4a0003bf  vwaitq
    ctx->pc = 0x156cb8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x156cbc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x156cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156cc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x156cc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x156cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156cc8: 0xac8202ec  sw          $v0, 0x2EC($a0)
    ctx->pc = 0x156cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 748), GPR_U32(ctx, 2));
    // 0x156ccc: 0xc48c02ec  lwc1        $f12, 0x2EC($a0)
    ctx->pc = 0x156cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x156cd0: 0xc055cf4  jal         func_1573D0
    ctx->pc = 0x156CD0u;
    SET_GPR_U32(ctx, 31, 0x156CD8u);
    ctx->pc = 0x156CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CD0u;
    // 0x156cd4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1573D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1573D0u, 0x156CD0u, 0x156CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CD8u;
label_156cd8:
    // 0x156cd8: 0xe60002f0  swc1        $f0, 0x2F0($s0)
    ctx->pc = 0x156cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x156cdc: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x156cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
    // 0x156ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x156CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CE8u;
        // 0x156cec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156CF0u;
}
