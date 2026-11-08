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

// Function: FUN_00166f80
// Address: 0x166f80 - 0x16703c
void FUN_00166f80_0x166f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00166f80_0x166f80");
#endif

    switch (ctx->pc) {
        case 0x166facu: goto label_166fac;
        default: break;
    }

    ctx->pc = 0x166f80u;

    // 0x166f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x166f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x166f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x166f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x166f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x166f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166f90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x166f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166f98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x166f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f9c: 0x8c9001f0  lw          $s0, 0x1F0($a0)
    ctx->pc = 0x166f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x166fa0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x166fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x166fa4: 0xc054cf0  jal         func_1533C0
    ctx->pc = 0x166FA4u;
    SET_GPR_U32(ctx, 31, 0x166FACu);
    ctx->pc = 0x166FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FA4u;
    // 0x166fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1533C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1533C0u, 0x166FA4u, 0x166FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FACu;
label_166fac:
    // 0x166fac: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x166facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x166fb0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x166fb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166fb4: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x166fb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166fb8: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x166fb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166fbc: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x166fbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166fc0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166fc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166fc4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166fc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166fc8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x166fc8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x166fcc: 0x4a0003bf  vwaitq
    ctx->pc = 0x166fccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166fd0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x166fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166fd4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x166fd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166fdc: 0xae420200  sw          $v0, 0x200($s2)
    ctx->pc = 0x166fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
    // 0x166fe0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x166fe0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166fe4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x166fe4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166fe8: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x166fe8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166fec: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x166fecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166ff0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166ff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166ff4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166ff8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x166ff8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x166ffc: 0x4a0003bf  vwaitq
    ctx->pc = 0x166ffcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x167000: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x167000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167004: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x167004u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x167008: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16700c: 0xc6400200  lwc1        $f0, 0x200($s2)
    ctx->pc = 0x16700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167010: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x167010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167014: 0x0  nop
    ctx->pc = 0x167014u;
    // NOP
    // 0x167018: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x167018u;
    {
        const bool branch_taken_0x167018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167018u;
        // 0x16701c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167018) {
            ctx->pc = 0x167024u;
            goto label_167024;
        }
    }
    ctx->pc = 0x167020u;
    // 0x167020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167024:
    // 0x167024: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x167024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16702c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16702cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167034: 0x3e00008  jr          $ra
    ctx->pc = 0x167034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167034u;
        // 0x167038: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16703Cu;
}
