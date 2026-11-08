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

// Function: FUN_00157980
// Address: 0x157980 - 0x157b18
void FUN_00157980_0x157980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157980_0x157980");
#endif

    switch (ctx->pc) {
        case 0x1579fcu: goto label_1579fc;
        case 0x157a10u: goto label_157a10;
        case 0x157a34u: goto label_157a34;
        case 0x157a48u: goto label_157a48;
        case 0x157a6cu: goto label_157a6c;
        case 0x157a80u: goto label_157a80;
        default: break;
    }

    ctx->pc = 0x157980u;

    // 0x157980: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x157980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x157984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157988: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x157988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15798c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157994: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157994u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157998: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157998u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15799c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x15799cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1579a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1579a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1579a4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1579a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1579a8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1579a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1579ac: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1579acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1579b0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1579b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1579b4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1579b4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1579b8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1579b8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1579bc: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x1579bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1579c0: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x1579c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1579c4: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x1579c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1579c8: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x1579c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1579cc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1579ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1579d0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1579d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1579d4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1579d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1579d8: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1579d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1579dc: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1579dcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1579e0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1579e0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1579e4: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1579e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1579e8: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x1579e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1579ec: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1579ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1579f0: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1579f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1579f4: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x1579F4u;
    SET_GPR_U32(ctx, 31, 0x1579FCu);
    ctx->pc = 0x1579F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1579F4u;
    // 0x1579f8: 0xc48c0260  lwc1        $f12, 0x260($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x1579F4u, 0x1579FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1579FCu;
label_1579fc:
    // 0x1579fc: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x1579fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x157a00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157a04: 0xc60c0260  lwc1        $f12, 0x260($s0)
    ctx->pc = 0x157a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157a08: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x157A08u;
    SET_GPR_U32(ctx, 31, 0x157A10u);
    ctx->pc = 0x157A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A08u;
    // 0x157a0c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x157A08u, 0x157A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A10u;
label_157a10:
    // 0x157a10: 0xc60c0268  lwc1        $f12, 0x268($s0)
    ctx->pc = 0x157a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157a14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157a18: 0x0  nop
    ctx->pc = 0x157a18u;
    // NOP
    // 0x157a1c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x157a1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157a20: 0x0  nop
    ctx->pc = 0x157a20u;
    // NOP
    // 0x157a24: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x157A24u;
    {
        const bool branch_taken_0x157a24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x157a24) {
            ctx->pc = 0x157A48u;
            goto label_157a48;
        }
    }
    ctx->pc = 0x157A2Cu;
    // 0x157a2c: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x157A2Cu;
    SET_GPR_U32(ctx, 31, 0x157A34u);
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x157A2Cu, 0x157A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A34u;
label_157a34:
    // 0x157a34: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x157a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x157a38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157a3c: 0xc60c0268  lwc1        $f12, 0x268($s0)
    ctx->pc = 0x157a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157a40: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x157A40u;
    SET_GPR_U32(ctx, 31, 0x157A48u);
    ctx->pc = 0x157A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A40u;
    // 0x157a44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x157A40u, 0x157A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A48u;
label_157a48:
    // 0x157a48: 0xc60c0264  lwc1        $f12, 0x264($s0)
    ctx->pc = 0x157a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157a50: 0x0  nop
    ctx->pc = 0x157a50u;
    // NOP
    // 0x157a54: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x157a54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157a58: 0x0  nop
    ctx->pc = 0x157a58u;
    // NOP
    // 0x157a5c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x157A5Cu;
    {
        const bool branch_taken_0x157a5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A5Cu;
        // 0x157a60: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a5c) {
            ctx->pc = 0x157A84u;
            goto label_157a84;
        }
    }
    ctx->pc = 0x157A64u;
    // 0x157a64: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x157A64u;
    SET_GPR_U32(ctx, 31, 0x157A6Cu);
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x157A64u, 0x157A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A6Cu;
label_157a6c:
    // 0x157a6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157a70: 0xe6000264  swc1        $f0, 0x264($s0)
    ctx->pc = 0x157a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x157a74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x157a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a78: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x157A78u;
    SET_GPR_U32(ctx, 31, 0x157A80u);
    ctx->pc = 0x157A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A78u;
    // 0x157a7c: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x157A78u, 0x157A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A80u;
label_157a80:
    // 0x157a80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_157a84:
    // 0x157a84: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x157a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x157a88: 0x26050270  addiu       $a1, $s0, 0x270
    ctx->pc = 0x157a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x157a8c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x157a8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157a90: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x157a90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x157a94: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x157a94u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x157a98: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x157a98u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x157a9c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x157a9cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157aa0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x157aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157aa4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x157aa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157aa8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x157aa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157aac: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x157aacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x157ab0: 0xf8a90000  sqc2        $vf9, 0x0($a1)
    ctx->pc = 0x157ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x157ab4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157ab4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157ab8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x157ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157abc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x157abcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157ac0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x157ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157ac4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x157ac4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x157ac8: 0x4a0003bf  vwaitq
    ctx->pc = 0x157ac8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x157acc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x157accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157ad0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x157ad0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x157ad4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x157ad4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157ad8: 0x4a0003bf  vwaitq
    ctx->pc = 0x157ad8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x157adc: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x157adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157ae0: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x157ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157ae4: 0x3c033d1e  lui         $v1, 0x3D1E
    ctx->pc = 0x157ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15646 << 16));
    // 0x157ae8: 0x3463611c  ori         $v1, $v1, 0x611C
    ctx->pc = 0x157ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24860);
    // 0x157aec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157af0: 0xc600026c  lwc1        $f0, 0x26C($s0)
    ctx->pc = 0x157af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157af4: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x157af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157af8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x157af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157afc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x157afcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157b00: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x157b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x157b04: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x157b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x157b08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157b10: 0x3e00008  jr          $ra
    ctx->pc = 0x157B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B10u;
        // 0x157b14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157B18u;
}
