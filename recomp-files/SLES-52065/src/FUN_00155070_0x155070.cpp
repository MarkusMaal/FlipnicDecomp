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

// Function: FUN_00155070
// Address: 0x155070 - 0x155354
void FUN_00155070_0x155070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155070_0x155070");
#endif

    switch (ctx->pc) {
        case 0x1550c4u: goto label_1550c4;
        case 0x15516cu: goto label_15516c;
        case 0x155208u: goto label_155208;
        case 0x1552ccu: goto label_1552cc;
        default: break;
    }

    ctx->pc = 0x155070u;

    // 0x155070: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x155070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x155074: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x155074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x155078: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x155078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15507c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15507cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155080: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x155080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x155084: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x155084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x155088: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x155088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x15508c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15508cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155090: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x155090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x155094: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x155094u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155098: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x155098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15509c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x15509cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1550a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1550a4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1550a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1550a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1550ac: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x1550acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1550b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1550b4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1550b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1550b8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1550b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1550bc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1550BCu;
    {
        const bool branch_taken_0x1550bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550BCu;
        // 0x1550c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550bc) {
            ctx->pc = 0x1551E4u;
            goto label_1551e4;
        }
    }
    ctx->pc = 0x1550C4u;
label_1550c4:
    // 0x1550c4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1550c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1550c8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1550c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1550cc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1550ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1550d0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1550d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550d4: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x1550d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1550d8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1550d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1550dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1550dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550e0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1550e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1550e4: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1550e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1550e8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1550e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1550ec: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1550ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1550f0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1550f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1550f4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1550f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1550f8: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1550f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1550fc: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x1550fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155100: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x155100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155104: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155108: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x155108u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15510c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x15510cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155110: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155110u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155114: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x155114u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155118: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x155118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15511c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x15511cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155120: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x155120u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x155124: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155124u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155128: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155128u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15512c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x15512cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155130: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x155130u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155134: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x155134u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x155138: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x155138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15513c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15513cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155140: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x155140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155144: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x155144u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x155148: 0x4a0003bf  vwaitq
    ctx->pc = 0x155148u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15514c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x15514cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155150: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x155150u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x155154: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x155154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155158: 0x4a0003bf  vwaitq
    ctx->pc = 0x155158u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15515c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x15515cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155160: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x155160u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155164: 0xc055334  jal         func_154CD0
    ctx->pc = 0x155164u;
    SET_GPR_U32(ctx, 31, 0x15516Cu);
    ctx->pc = 0x155168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155164u;
    // 0x155168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x155164u, 0x15516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15516Cu;
label_15516c:
    // 0x15516c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x15516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x155170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155174: 0x0  nop
    ctx->pc = 0x155174u;
    // NOP
    // 0x155178: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x155178u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x15517c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15517cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155180: 0x0  nop
    ctx->pc = 0x155180u;
    // NOP
    // 0x155184: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x155184u;
    {
        const bool branch_taken_0x155184 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x155188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155184u;
        // 0x155188: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155184) {
            ctx->pc = 0x155194u;
            goto label_155194;
        }
    }
    ctx->pc = 0x15518Cu;
    // 0x15518c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x15518Cu;
    {
        const bool branch_taken_0x15518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15518Cu;
        // 0x155190: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15518c) {
            ctx->pc = 0x15532Cu;
            goto label_15532c;
        }
    }
    ctx->pc = 0x155194u;
label_155194:
    // 0x155194: 0x0  nop
    ctx->pc = 0x155194u;
    // NOP
    // 0x155198: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x155198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15519c: 0x0  nop
    ctx->pc = 0x15519cu;
    // NOP
    // 0x1551a0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1551A0u;
    {
        const bool branch_taken_0x1551a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1551a0) {
            ctx->pc = 0x1551DCu;
            goto label_1551dc;
        }
    }
    ctx->pc = 0x1551A8u;
    // 0x1551a8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1551a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1551ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1551acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1551b0: 0x0  nop
    ctx->pc = 0x1551b0u;
    // NOP
    // 0x1551b4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1551B4u;
    {
        const bool branch_taken_0x1551b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1551B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551B4u;
        // 0x1551b8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551b4) {
            ctx->pc = 0x1551DCu;
            goto label_1551dc;
        }
    }
    ctx->pc = 0x1551BCu;
    // 0x1551bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1551bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1551c0: 0x0  nop
    ctx->pc = 0x1551c0u;
    // NOP
    // 0x1551c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1551c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1551c8: 0x0  nop
    ctx->pc = 0x1551c8u;
    // NOP
    // 0x1551cc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1551CCu;
    {
        const bool branch_taken_0x1551cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1551cc) {
            ctx->pc = 0x1551DCu;
            goto label_1551dc;
        }
    }
    ctx->pc = 0x1551D4u;
    // 0x1551d4: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x1551d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x1551d8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1551d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1551dc:
    // 0x1551dc: 0x0  nop
    ctx->pc = 0x1551dcu;
    // NOP
    // 0x1551e0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_1551e4:
    // 0x1551e4: 0x0  nop
    ctx->pc = 0x1551e4u;
    // NOP
    // 0x1551e8: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x1551e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1551ec: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1551ECu;
    {
        const bool branch_taken_0x1551ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1551F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551ECu;
        // 0x1551f0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551ec) {
            ctx->pc = 0x1550C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1550c4;
        }
    }
    ctx->pc = 0x1551F4u;
    // 0x1551f4: 0x600004c  bltz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1551F4u;
    {
        const bool branch_taken_0x1551f4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1551F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551F4u;
        // 0x1551f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551f4) {
            ctx->pc = 0x155328u;
            goto label_155328;
        }
    }
    ctx->pc = 0x1551FCu;
    // 0x1551fc: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1551fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155200: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x155200u;
    {
        const bool branch_taken_0x155200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155200u;
        // 0x155204: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155200) {
            ctx->pc = 0x155224u;
            goto label_155224;
        }
    }
    ctx->pc = 0x155208u;
label_155208:
    // 0x155208: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x155208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x15520c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x15520cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x155210: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x155210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x155214: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x155214u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x155218: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x155218u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x15521c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x15521cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x155220: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x155220u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_155224:
    // 0x155224: 0x0  nop
    ctx->pc = 0x155224u;
    // NOP
    // 0x155228: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x155228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15522c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x15522Cu;
    {
        const bool branch_taken_0x15522c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15522c) {
            ctx->pc = 0x155208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155208;
        }
    }
    ctx->pc = 0x155234u;
    // 0x155234: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x155234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155238: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x155238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x15523c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x15523cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x155240: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x155240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x155244: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x155244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155248: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x155248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15524c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x15524cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x155250: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x155250u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x155254: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x155254u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155258: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15525c: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x15525cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155260: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x155260u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155264: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155264u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155268: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x155268u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15526c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x15526cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155270: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155270u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155274: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x155274u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155278: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x155278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15527c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x15527cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155280: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x155280u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x155284: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155284u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155288: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155288u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15528c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x15528cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155290: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x155290u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155294: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x155294u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x155298: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x155298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15529c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15529cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1552a0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1552a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1552a4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1552a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1552a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1552a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1552ac: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1552acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1552b0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1552b0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1552b4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1552b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1552b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1552b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1552bc: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1552bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1552c0: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x1552c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1552c4: 0xc055334  jal         func_154CD0
    ctx->pc = 0x1552C4u;
    SET_GPR_U32(ctx, 31, 0x1552CCu);
    ctx->pc = 0x1552C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552C4u;
    // 0x1552c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x1552C4u, 0x1552CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552CCu;
label_1552cc:
    // 0x1552cc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1552ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1552d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1552d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1552d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1552d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1552d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1552dc: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x1552dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1552e0: 0x46140881  sub.s       $f2, $f1, $f20
    ctx->pc = 0x1552e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1552e4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1552e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1552e8: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1552e8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1552ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1552ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1552f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1552f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1552f4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1552f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1552f8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1552f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1552fc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1552fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155300: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x155300u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x155304: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x155304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x155308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x155308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15530c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x15530cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x155310: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x155310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155314: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x155314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155318: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x155318u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x15531c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15531cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x155320: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x155320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x155324: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x155324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_155328:
    // 0x155328: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x155328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_15532c:
    // 0x15532c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x155330: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x155330u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155334: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x155334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155338: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x155338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15533c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15533cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155340: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x155340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155344: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x155344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x155348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15534c: 0x3e00008  jr          $ra
    ctx->pc = 0x15534Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15534Cu;
        // 0x155350: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15534Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155354u;
}
