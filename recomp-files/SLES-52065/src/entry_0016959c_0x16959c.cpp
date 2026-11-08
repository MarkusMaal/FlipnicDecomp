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

// Function: entry_0016959c
// Address: 0x16959c - 0x1696e0
void entry_0016959c_0x16959c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016959c_0x16959c");
#endif

    switch (ctx->pc) {
        case 0x1695c0u: goto label_1695c0;
        case 0x169658u: goto label_169658;
        case 0x16968cu: goto label_16968c;
        case 0x1696dcu: goto label_1696dc;
        default: break;
    }

    ctx->pc = 0x16959cu;

    // 0x16959c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16959cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1695a0: 0x24421660  addiu       $v0, $v0, 0x1660
    ctx->pc = 0x1695a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5728));
    // 0x1695a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1695a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695a8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1695a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1695ac: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1695acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1695b0: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x1695b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1695b4: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x1695b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1695b8: 0xc054e18  jal         func_153860
    ctx->pc = 0x1695B8u;
    SET_GPR_U32(ctx, 31, 0x1695C0u);
    ctx->pc = 0x1695BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695B8u;
    // 0x1695bc: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153860u, 0x1695B8u, 0x1695C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695C0u;
label_1695c0:
    // 0x1695c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1695c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1695c4: 0x0  nop
    ctx->pc = 0x1695c4u;
    // NOP
    // 0x1695c8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1695c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1695cc: 0x0  nop
    ctx->pc = 0x1695ccu;
    // NOP
    // 0x1695d0: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x1695D0u;
    {
        const bool branch_taken_0x1695d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1695D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695D0u;
        // 0x1695d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695d0) {
            ctx->pc = 0x169714u;
            return;
        }
    }
    ctx->pc = 0x1695D8u;
    // 0x1695d8: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x1695d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1695dc: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x1695dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1695e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1695e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1695e4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1695e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1695e8: 0x0  nop
    ctx->pc = 0x1695e8u;
    // NOP
    // 0x1695ec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1695ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1695f0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1695f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1695f4: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1695f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1695f8: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1695f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1695fc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1695fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x169600: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x169600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x169604: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x169604u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169608: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x169608u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16960c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16960cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x169610: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x169610u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x169614: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x169614u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x169618: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x169618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16961c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16961cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169620: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x169620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169624: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x169624u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x169628: 0x4a0003bf  vwaitq
    ctx->pc = 0x169628u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16962c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16962cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169630: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x169630u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x169634: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x169634u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x169638: 0x4a0003bf  vwaitq
    ctx->pc = 0x169638u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16963c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16963cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x169640: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x169640u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x169644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169648: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x169648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16964c: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x16964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x169650: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x169650u;
    SET_GPR_U32(ctx, 31, 0x169658u);
    ctx->pc = 0x169654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169650u;
    // 0x169654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x169650u, 0x169658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169658u;
label_169658:
    // 0x169658: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x169658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x16965c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x16965cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x169660: 0x24421630  addiu       $v0, $v0, 0x1630
    ctx->pc = 0x169660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5680));
    // 0x169664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169668: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x169668u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x211630u));
    // 0x16966c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x16966cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x169670: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x169670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x169674: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x169674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169678: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x169678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16967c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x16967cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x169680: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x169680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169684: 0xc054e18  jal         func_153860
    ctx->pc = 0x169684u;
    SET_GPR_U32(ctx, 31, 0x16968Cu);
    ctx->pc = 0x169688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169684u;
    // 0x169688: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153860u, 0x169684u, 0x16968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16968Cu;
label_16968c:
    // 0x16968c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16968cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169690: 0x0  nop
    ctx->pc = 0x169690u;
    // NOP
    // 0x169694: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x169694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169698: 0x0  nop
    ctx->pc = 0x169698u;
    // NOP
    // 0x16969c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x16969Cu;
    {
        const bool branch_taken_0x16969c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1696A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16969Cu;
        // 0x1696a0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16969c) {
            ctx->pc = 0x1696E0u;
            return;
        }
    }
    ctx->pc = 0x1696A4u;
    // 0x1696a4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1696a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1696a8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1696a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1696ac: 0x24421640  addiu       $v0, $v0, 0x1640
    ctx->pc = 0x1696acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
    // 0x1696b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1696b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1696b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1696b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x211640u));
    // 0x1696b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1696b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1696bc: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x1696bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1696c0: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x1696c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x1696c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1696c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1696c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1696cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1696ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696d0: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x1696d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1696d4: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x1696D4u;
    SET_GPR_U32(ctx, 31, 0x1696DCu);
    ctx->pc = 0x1696D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696D4u;
    // 0x1696d8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x1696D4u, 0x1696DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696DCu;
label_1696dc:
    // 0x1696dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1696dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1696e0u;
}
