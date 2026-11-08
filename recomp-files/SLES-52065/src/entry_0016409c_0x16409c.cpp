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

// Function: entry_0016409c
// Address: 0x16409c - 0x164168
void entry_0016409c_0x16409c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016409c_0x16409c");
#endif

    switch (ctx->pc) {
        case 0x1640b0u: goto label_1640b0;
        case 0x16415cu: goto label_16415c;
        default: break;
    }

    ctx->pc = 0x16409cu;

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
            return;
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
    ctx->pc = 0x164168u;
}
