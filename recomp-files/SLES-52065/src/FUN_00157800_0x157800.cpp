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

// Function: FUN_00157800
// Address: 0x157800 - 0x157974
void FUN_00157800_0x157800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157800_0x157800");
#endif

    switch (ctx->pc) {
        case 0x15787cu: goto label_15787c;
        case 0x157890u: goto label_157890;
        case 0x1578b4u: goto label_1578b4;
        case 0x1578c8u: goto label_1578c8;
        case 0x1578ecu: goto label_1578ec;
        case 0x157900u: goto label_157900;
        default: break;
    }

    ctx->pc = 0x157800u;

    // 0x157800: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x157800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x157804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157808: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x157808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15780c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157814: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157818: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157818u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15781c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x15781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157820: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x157820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x157824: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x157824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x157828: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157828u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15782c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x15782cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157830: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x157830u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157834: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x157834u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157838: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x157838u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15783c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x15783cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157840: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x157840u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157844: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x157844u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157848: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x157848u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15784c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x15784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x157850: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157850u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157854: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x157854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157858: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x157858u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15785c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x15785cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157860: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x157860u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157864: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x157864u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157868: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x157868u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15786c: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x15786cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157870: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x157870u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x157874: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x157874u;
    SET_GPR_U32(ctx, 31, 0x15787Cu);
    ctx->pc = 0x157878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157874u;
    // 0x157878: 0xc48c0260  lwc1        $f12, 0x260($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x157874u, 0x15787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15787Cu;
label_15787c:
    // 0x15787c: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x15787cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x157880: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157884: 0xc60c0260  lwc1        $f12, 0x260($s0)
    ctx->pc = 0x157884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157888: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x157888u;
    SET_GPR_U32(ctx, 31, 0x157890u);
    ctx->pc = 0x15788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157888u;
    // 0x15788c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x157888u, 0x157890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157890u;
label_157890:
    // 0x157890: 0xc60c0268  lwc1        $f12, 0x268($s0)
    ctx->pc = 0x157890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157898: 0x0  nop
    ctx->pc = 0x157898u;
    // NOP
    // 0x15789c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x15789cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1578a0: 0x0  nop
    ctx->pc = 0x1578a0u;
    // NOP
    // 0x1578a4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1578A4u;
    {
        const bool branch_taken_0x1578a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1578a4) {
            ctx->pc = 0x1578C8u;
            goto label_1578c8;
        }
    }
    ctx->pc = 0x1578ACu;
    // 0x1578ac: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x1578ACu;
    SET_GPR_U32(ctx, 31, 0x1578B4u);
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x1578ACu, 0x1578B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578B4u;
label_1578b4:
    // 0x1578b4: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x1578b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x1578b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1578b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1578bc: 0xc60c0268  lwc1        $f12, 0x268($s0)
    ctx->pc = 0x1578bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1578c0: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x1578C0u;
    SET_GPR_U32(ctx, 31, 0x1578C8u);
    ctx->pc = 0x1578C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578C0u;
    // 0x1578c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x1578C0u, 0x1578C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578C8u;
label_1578c8:
    // 0x1578c8: 0xc60c0264  lwc1        $f12, 0x264($s0)
    ctx->pc = 0x1578c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1578cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1578ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1578d0: 0x0  nop
    ctx->pc = 0x1578d0u;
    // NOP
    // 0x1578d4: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x1578d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1578d8: 0x0  nop
    ctx->pc = 0x1578d8u;
    // NOP
    // 0x1578dc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1578DCu;
    {
        const bool branch_taken_0x1578dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1578E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578DCu;
        // 0x1578e0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578dc) {
            ctx->pc = 0x157904u;
            goto label_157904;
        }
    }
    ctx->pc = 0x1578E4u;
    // 0x1578e4: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x1578E4u;
    SET_GPR_U32(ctx, 31, 0x1578ECu);
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x1578E4u, 0x1578ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578ECu;
label_1578ec:
    // 0x1578ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1578ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1578f0: 0xe6000264  swc1        $f0, 0x264($s0)
    ctx->pc = 0x1578f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x1578f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1578f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578f8: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x1578F8u;
    SET_GPR_U32(ctx, 31, 0x157900u);
    ctx->pc = 0x1578FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578F8u;
    // 0x1578fc: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x1578F8u, 0x157900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157900u;
label_157900:
    // 0x157900: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_157904:
    // 0x157904: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x157904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x157908: 0x26050270  addiu       $a1, $s0, 0x270
    ctx->pc = 0x157908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x15790c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15790cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157910: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x157910u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x157914: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x157914u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x157918: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x157918u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x15791c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x15791cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157920: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x157920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157924: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x157924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157928: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x157928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x15792c: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x15792cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x157930: 0xf8a90000  sqc2        $vf9, 0x0($a1)
    ctx->pc = 0x157930u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x157934: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157934u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157938: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x157938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15793c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15793cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157940: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x157940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157944: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x157944u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x157948: 0x4a0003bf  vwaitq
    ctx->pc = 0x157948u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15794c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x15794cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157950: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x157950u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x157954: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x157954u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157958: 0x4a0003bf  vwaitq
    ctx->pc = 0x157958u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15795c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x15795cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157960: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x157960u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15796c: 0x3e00008  jr          $ra
    ctx->pc = 0x15796Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15796Cu;
        // 0x157970: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15796Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157974u;
}
