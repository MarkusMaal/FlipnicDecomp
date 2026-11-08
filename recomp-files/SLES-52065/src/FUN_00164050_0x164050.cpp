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

// Function: FUN_00164050
// Address: 0x164050 - 0x164368
void FUN_00164050_0x164050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164050_0x164050");
#endif

    switch (ctx->pc) {
        case 0x1640b0u: goto label_1640b0;
        case 0x16415cu: goto label_16415c;
        case 0x164170u: goto label_164170;
        case 0x16424cu: goto label_16424c;
        case 0x1642b4u: goto label_1642b4;
        default: break;
    }

    ctx->pc = 0x164050u;

    // 0x164050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x164050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x164054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x164054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x164058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x164058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16405c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164064: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x164064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16406c: 0xc4a102f0  lwc1        $f1, 0x2F0($a1)
    ctx->pc = 0x16406cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164070: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x164070u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164074: 0x0  nop
    ctx->pc = 0x164074u;
    // NOP
    // 0x164078: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x164078u;
    {
        const bool branch_taken_0x164078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164078u;
        // 0x16407c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164078) {
            ctx->pc = 0x164088u;
            goto label_164088;
        }
    }
    ctx->pc = 0x164080u;
    // 0x164080: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x164080u;
    {
        const bool branch_taken_0x164080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164080u;
        // 0x164084: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164080) {
            ctx->pc = 0x164350u;
            goto label_164350;
        }
    }
    ctx->pc = 0x164088u;
label_164088:
    // 0x164088: 0x8e4301d4  lw          $v1, 0x1D4($s2)
    ctx->pc = 0x164088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x16408c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16408Cu;
    {
        const bool branch_taken_0x16408c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16408Cu;
        // 0x164090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16408c) {
            ctx->pc = 0x16409Cu;
            goto label_16409c;
        }
    }
    ctx->pc = 0x164094u;
    // 0x164094: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x164094u;
    {
        const bool branch_taken_0x164094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164094u;
        // 0x164098: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164094) {
            ctx->pc = 0x164350u;
            goto label_164350;
        }
    }
    ctx->pc = 0x16409Cu;
label_16409c:
    // 0x16409c: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1640A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16409Cu;
        // 0x1640a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16409c) {
            ctx->pc = 0x164168u;
            goto label_164168;
        }
    }
    ctx->pc = 0x1640A4u;
    // 0x1640a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1640a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1640a8: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1640A8u;
    SET_GPR_U32(ctx, 31, 0x1640B0u);
    ctx->pc = 0x1640ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1640A8u;
    // 0x1640ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1640A8u, 0x1640B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1640B0u;
label_1640b0:
    // 0x1640b0: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x1640b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x1640b4: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x1640b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x1640b8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1640b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1640bc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1640bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1640c0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1640c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1640c4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1640c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1640c8: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1640c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1640cc: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x1640ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x1640d0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1640d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1640d4: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x1640d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x1640d8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1640d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1640dc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1640dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1640e0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1640e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1640e4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1640e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1640e8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1640e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1640ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x1640ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1640f0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1640f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1640f4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1640f4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1640f8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1640f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1640fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1640fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x164100: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x164100u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164104: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x164104u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x164108: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x164108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x16410c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x16410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x164110: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x164110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164114: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164114u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164118: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x164118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16411c: 0x0  nop
    ctx->pc = 0x16411cu;
    // NOP
    // 0x164120: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x164120u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x164124: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x164124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164128: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x164128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16412c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16412cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164130: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x164130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x164134: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x164134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x164138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16413c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16413cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164140: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164148: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x164148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16414c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16414cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164150: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x164150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x164154: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x164154u;
    SET_GPR_U32(ctx, 31, 0x16415Cu);
    ctx->pc = 0x164158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164154u;
    // 0x164158: 0xae2002e8  sw          $zero, 0x2E8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x164154u, 0x16415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16415Cu;
label_16415c:
    // 0x16415c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164160: 0xae4201d4  sw          $v0, 0x1D4($s2)
    ctx->pc = 0x164160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
    // 0x164164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164168:
    // 0x164168: 0xc058e84  jal         func_163A10
    ctx->pc = 0x164168u;
    SET_GPR_U32(ctx, 31, 0x164170u);
    ctx->pc = 0x16416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164168u;
    // 0x16416c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163A10u, 0x164168u, 0x164170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164170u;
label_164170:
    // 0x164170: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x164170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x164174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164178: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x164178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x16417c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x16417cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x164180: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x164180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x164184: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x164184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x164188: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x164188u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16418c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x16418cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x164190: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164190u;
    {
        const bool branch_taken_0x164190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164190u;
        // 0x164194: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164190) {
            ctx->pc = 0x1641ACu;
            goto label_1641ac;
        }
    }
    ctx->pc = 0x164198u;
    // 0x164198: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x164198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x16419c: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x16419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x1641a0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1641a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1641a4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1641a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1641a8: 0x0  nop
    ctx->pc = 0x1641a8u;
    // NOP
label_1641ac:
    // 0x1641ac: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1641ACu;
    {
        const bool branch_taken_0x1641ac = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1641B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641ACu;
        // 0x1641b0: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641ac) {
            ctx->pc = 0x1641BCu;
            goto label_1641bc;
        }
    }
    ctx->pc = 0x1641B4u;
    // 0x1641b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1641B4u;
    {
        const bool branch_taken_0x1641b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641B4u;
        // 0x1641b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641b4) {
            ctx->pc = 0x1641DCu;
            goto label_1641dc;
        }
    }
    ctx->pc = 0x1641BCu;
label_1641bc:
    // 0x1641bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1641bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1641c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1641c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1641c4: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1641c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1641c8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1641C8u;
    {
        const bool branch_taken_0x1641c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1641c8) {
            ctx->pc = 0x1641D8u;
            goto label_1641d8;
        }
    }
    ctx->pc = 0x1641D0u;
    // 0x1641d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1641D0u;
    {
        const bool branch_taken_0x1641d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641d0) {
            ctx->pc = 0x1641DCu;
            goto label_1641dc;
        }
    }
    ctx->pc = 0x1641D8u;
label_1641d8:
    // 0x1641d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1641d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1641dc:
    // 0x1641dc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1641DCu;
    {
        const bool branch_taken_0x1641dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641dc) {
            ctx->pc = 0x164208u;
            goto label_164208;
        }
    }
    ctx->pc = 0x1641E4u;
    // 0x1641e4: 0x862203c4  lh          $v0, 0x3C4($s1)
    ctx->pc = 0x1641e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x1641e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1641E8u;
    {
        const bool branch_taken_0x1641e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641e8) {
            ctx->pc = 0x164208u;
            goto label_164208;
        }
    }
    ctx->pc = 0x1641F0u;
    // 0x1641f0: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x1641f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x1641f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1641f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1641f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1641F8u;
    {
        const bool branch_taken_0x1641f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1641f8) {
            ctx->pc = 0x164208u;
            goto label_164208;
        }
    }
    ctx->pc = 0x164200u;
    // 0x164200: 0xa62203c6  sh          $v0, 0x3C6($s1)
    ctx->pc = 0x164200u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 2));
    // 0x164204: 0xae2003c0  sw          $zero, 0x3C0($s1)
    ctx->pc = 0x164204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 960), GPR_U32(ctx, 0));
label_164208:
    // 0x164208: 0x862303c6  lh          $v1, 0x3C6($s1)
    ctx->pc = 0x164208u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x16420c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16420cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164210: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x164210u;
    {
        const bool branch_taken_0x164210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164210u;
        // 0x164214: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164210) {
            ctx->pc = 0x164294u;
            goto label_164294;
        }
    }
    ctx->pc = 0x164218u;
    // 0x164218: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x164218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16421c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16421cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164220: 0x4a802103  vaddw.y     $vf4, $vf4, $vf0w
    ctx->pc = 0x164220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164224: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164224u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164228: 0xc62102a0  lwc1        $f1, 0x2A0($s1)
    ctx->pc = 0x164228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16422c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x16422cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x164230: 0xc62003c0  lwc1        $f0, 0x3C0($s1)
    ctx->pc = 0x164230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164234: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x164234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x164238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x164238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16423c: 0xe62003c0  swc1        $f0, 0x3C0($s1)
    ctx->pc = 0x16423cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
    // 0x164240: 0xc62e03c0  lwc1        $f14, 0x3C0($s1)
    ctx->pc = 0x164240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x164244: 0xc05be24  jal         func_16F890
    ctx->pc = 0x164244u;
    SET_GPR_U32(ctx, 31, 0x16424Cu);
    ctx->pc = 0x164248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164244u;
    // 0x164248: 0xc62d03c8  lwc1        $f13, 0x3C8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F890u, 0x164244u, 0x16424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16424Cu;
label_16424c:
    // 0x16424c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16424cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164250: 0x0  nop
    ctx->pc = 0x164250u;
    // NOP
    // 0x164254: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x164254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164258: 0x0  nop
    ctx->pc = 0x164258u;
    // NOP
    // 0x16425c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16425Cu;
    {
        const bool branch_taken_0x16425c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16425Cu;
        // 0x164260: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16425c) {
            ctx->pc = 0x164270u;
            goto label_164270;
        }
    }
    ctx->pc = 0x164264u;
    // 0x164264: 0xa62003c6  sh          $zero, 0x3C6($s1)
    ctx->pc = 0x164264u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 966), (uint16_t)GPR_U32(ctx, 0));
    // 0x164268: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x164268u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x16426c: 0xe62103c0  swc1        $f1, 0x3C0($s1)
    ctx->pc = 0x16426cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
label_164270:
    // 0x164270: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x164270u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164274: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164274u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164278: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x164278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16427c: 0x0  nop
    ctx->pc = 0x16427cu;
    // NOP
    // 0x164280: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x164280u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x164284: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x164284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164288: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x164288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16428c: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x16428cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164290: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x164290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_164294:
    // 0x164294: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164294u;
    {
        const bool branch_taken_0x164294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x164298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164294u;
        // 0x164298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164294) {
            ctx->pc = 0x1642A8u;
            goto label_1642a8;
        }
    }
    ctx->pc = 0x16429Cu;
    // 0x16429c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1642a0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1642A0u;
    {
        const bool branch_taken_0x1642a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1642a0) {
            ctx->pc = 0x1642CCu;
            goto label_1642cc;
        }
    }
    ctx->pc = 0x1642A8u;
label_1642a8:
    // 0x1642a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1642a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642ac: 0xc058d4c  jal         func_163530
    ctx->pc = 0x1642ACu;
    SET_GPR_U32(ctx, 31, 0x1642B4u);
    ctx->pc = 0x1642B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642ACu;
    // 0x1642b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163530u, 0x1642ACu, 0x1642B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642B4u;
label_1642b4:
    // 0x1642b4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1642B4u;
    {
        const bool branch_taken_0x1642b4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1642B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642B4u;
        // 0x1642b8: 0xae4001d4  sw          $zero, 0x1D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642b4) {
            ctx->pc = 0x1642C4u;
            goto label_1642c4;
        }
    }
    ctx->pc = 0x1642BCu;
    // 0x1642bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1642BCu;
    {
        const bool branch_taken_0x1642bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642BCu;
        // 0x1642c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642bc) {
            ctx->pc = 0x164350u;
            goto label_164350;
        }
    }
    ctx->pc = 0x1642C4u;
label_1642c4:
    // 0x1642c4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1642C4u;
    {
        const bool branch_taken_0x1642c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642C4u;
        // 0x1642c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642c4) {
            ctx->pc = 0x164350u;
            goto label_164350;
        }
    }
    ctx->pc = 0x1642CCu;
label_1642cc:
    // 0x1642cc: 0xa62201e8  sh          $v0, 0x1E8($s1)
    ctx->pc = 0x1642ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 2));
    // 0x1642d0: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x1642d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x1642d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1642d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1642d8: 0x8e43021c  lw          $v1, 0x21C($s2)
    ctx->pc = 0x1642d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 540)));
    // 0x1642dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1642dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1642e0: 0xc6240344  lwc1        $f4, 0x344($s1)
    ctx->pc = 0x1642e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1642e4: 0xc6420228  lwc1        $f2, 0x228($s2)
    ctx->pc = 0x1642e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1642e8: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x1642e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1642ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1642ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1642f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1642f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1642f4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1642f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1642f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1642f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1642fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1642fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164300: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x164300u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x164304: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x164304u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x164308: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x164308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x16430c: 0xe6200348  swc1        $f0, 0x348($s1)
    ctx->pc = 0x16430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 840), bits); }
    // 0x164310: 0xc620034c  lwc1        $f0, 0x34C($s1)
    ctx->pc = 0x164310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164314: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x164314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164318: 0x0  nop
    ctx->pc = 0x164318u;
    // NOP
    // 0x16431c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x16431Cu;
    {
        const bool branch_taken_0x16431c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16431c) {
            ctx->pc = 0x164344u;
            goto label_164344;
        }
    }
    ctx->pc = 0x164324u;
    // 0x164324: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x164324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164328: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x164328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16432c: 0x0  nop
    ctx->pc = 0x16432cu;
    // NOP
    // 0x164330: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x164330u;
    {
        const bool branch_taken_0x164330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164330) {
            ctx->pc = 0x164344u;
            goto label_164344;
        }
    }
    ctx->pc = 0x164338u;
    // 0x164338: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x164338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x16433c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164340: 0xae420234  sw          $v0, 0x234($s2)
    ctx->pc = 0x164340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 2));
label_164344:
    // 0x164344: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x164344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16434c: 0xe620034c  swc1        $f0, 0x34C($s1)
    ctx->pc = 0x16434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
label_164350:
    // 0x164350: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x164350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16435c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16435cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164360: 0x3e00008  jr          $ra
    ctx->pc = 0x164360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164360u;
        // 0x164364: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164368u;
}
