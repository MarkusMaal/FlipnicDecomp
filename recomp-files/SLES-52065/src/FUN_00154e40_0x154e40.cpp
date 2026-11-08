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

// Function: FUN_00154e40
// Address: 0x154e40 - 0x154ee8
void FUN_00154e40_0x154e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00154e40_0x154e40");
#endif

    switch (ctx->pc) {
        case 0x154ea8u: goto label_154ea8;
        default: break;
    }

    ctx->pc = 0x154e40u;

    // 0x154e40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x154e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x154e44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x154e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x154e48: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x154e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x154e4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154e50: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x154e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x154e54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154e58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x154e58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154e60: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x154e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e64: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x154e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e68: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x154e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x154e6c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x154e6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x154e70: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x154e70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x154e74: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154e74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154e78: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x154e78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154e7c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x154e7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154e80: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154e80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154e84: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x154e84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154e88: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x154e88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154e8c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154e8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154e90: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x154e90u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154e94: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x154e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x154e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x154e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x154ea0: 0xc055334  jal         func_154CD0
    ctx->pc = 0x154EA0u;
    SET_GPR_U32(ctx, 31, 0x154EA8u);
    ctx->pc = 0x154EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EA0u;
    // 0x154ea4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x154EA0u, 0x154EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EA8u;
label_154ea8:
    // 0x154ea8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x154ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x154eac: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x154eacu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154eb0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x154eb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154eb4: 0x0  nop
    ctx->pc = 0x154eb4u;
    // NOP
    // 0x154eb8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x154eb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x154ebc: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x154ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154ec0: 0x4be6396c  vsub.xyzw   $vf5, $vf7, $vf6
    ctx->pc = 0x154ec0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154ec4: 0xfa450000  sqc2        $vf5, 0x0($s2)
    ctx->pc = 0x154ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154ec8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x154ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154ecc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x154eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154ed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154edc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x154edcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x154ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x154EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EE0u;
        // 0x154ee4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154EE8u;
}
