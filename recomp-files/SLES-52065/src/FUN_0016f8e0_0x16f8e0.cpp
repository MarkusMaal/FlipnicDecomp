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

// Function: FUN_0016f8e0
// Address: 0x16f8e0 - 0x17006c
void FUN_0016f8e0_0x16f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f8e0_0x16f8e0");
#endif

    switch (ctx->pc) {
        case 0x16f940u: goto label_16f940;
        case 0x16f9b0u: goto label_16f9b0;
        case 0x16f9d4u: goto label_16f9d4;
        case 0x16fa00u: goto label_16fa00;
        case 0x16fa90u: goto label_16fa90;
        case 0x16fab4u: goto label_16fab4;
        case 0x16fae0u: goto label_16fae0;
        case 0x16fb38u: goto label_16fb38;
        case 0x16fb50u: goto label_16fb50;
        case 0x16fd0cu: goto label_16fd0c;
        case 0x16fd50u: goto label_16fd50;
        default: break;
    }

    ctx->pc = 0x16f8e0u;

    // 0x16f8e0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x16f8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x16f8e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x16f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x16f8e8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x16f8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x16f8ec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x16f8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x16f8f0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x16f8f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x16f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x16f8f8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x16f8f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x16f900: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16f900u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f904: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16f908: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16f908u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f90c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16f90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16f910: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x16f910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f914: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16f914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16f918: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x16f918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f91c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f920: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x16f920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f924: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16f924u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16f928: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x16f928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f92c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16f92cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16f930: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x16f930u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x16f934: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x16f934u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x16f938: 0xc054d78  jal         func_1535E0
    ctx->pc = 0x16F938u;
    SET_GPR_U32(ctx, 31, 0x16F940u);
    ctx->pc = 0x16F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F938u;
    // 0x16f93c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1535E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1535E0u, 0x16F938u, 0x16F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F940u;
label_16f940:
    // 0x16f940: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16f940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16f944: 0x0  nop
    ctx->pc = 0x16f944u;
    // NOP
    // 0x16f948: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x16f948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f94c: 0x0  nop
    ctx->pc = 0x16f94cu;
    // NOP
    // 0x16f950: 0x45000083  bc1f        . + 4 + (0x83 << 2)
    ctx->pc = 0x16F950u;
    {
        const bool branch_taken_0x16f950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F950u;
        // 0x16f954: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f950) {
            ctx->pc = 0x16FB60u;
            goto label_16fb60;
        }
    }
    ctx->pc = 0x16F958u;
    // 0x16f958: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16f958u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16f95c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x16f95cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16f960: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x16f960u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16f964: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x16f964u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16f968: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x16f968u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16f96c: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x16f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16f970: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x16f970u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16f974: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x16f974u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16f978: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x16f978u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16f97c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x16f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16f980: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16f980u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16f984: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x16f984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16f988: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x16f988u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16f98c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x16f98cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16f990: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x16f990u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16f994: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x16f994u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16f998: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x16f998u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16f99c: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x16f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16f9a0: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x16f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16f9a4: 0xc6200260  lwc1        $f0, 0x260($s1)
    ctx->pc = 0x16f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f9a8: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x16F9A8u;
    SET_GPR_U32(ctx, 31, 0x16F9B0u);
    ctx->pc = 0x16F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9A8u;
    // 0x16f9ac: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x16F9A8u, 0x16F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9B0u;
label_16f9b0:
    // 0x16f9b0: 0xc62c0268  lwc1        $f12, 0x268($s1)
    ctx->pc = 0x16f9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16f9b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f9b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f9b8: 0x0  nop
    ctx->pc = 0x16f9b8u;
    // NOP
    // 0x16f9bc: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x16f9bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f9c0: 0x0  nop
    ctx->pc = 0x16f9c0u;
    // NOP
    // 0x16f9c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F9C4u;
    {
        const bool branch_taken_0x16f9c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9C4u;
        // 0x16f9c8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9c4) {
            ctx->pc = 0x16F9D4u;
            goto label_16f9d4;
        }
    }
    ctx->pc = 0x16F9CCu;
    // 0x16f9cc: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x16F9CCu;
    SET_GPR_U32(ctx, 31, 0x16F9D4u);
    ctx->pc = 0x16F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9CCu;
    // 0x16f9d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x16F9CCu, 0x16F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9D4u;
label_16f9d4:
    // 0x16f9d4: 0xc6210264  lwc1        $f1, 0x264($s1)
    ctx->pc = 0x16f9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f9d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f9dc: 0x0  nop
    ctx->pc = 0x16f9dcu;
    // NOP
    // 0x16f9e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16f9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f9e4: 0x0  nop
    ctx->pc = 0x16f9e4u;
    // NOP
    // 0x16f9e8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x16F9E8u;
    {
        const bool branch_taken_0x16f9e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9E8u;
        // 0x16f9ec: 0x27a20130  addiu       $v0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9e8) {
            ctx->pc = 0x16FA04u;
            goto label_16fa04;
        }
    }
    ctx->pc = 0x16F9F0u;
    // 0x16f9f0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x16f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x16f9f4: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x16f9f4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x16f9f8: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x16F9F8u;
    SET_GPR_U32(ctx, 31, 0x16FA00u);
    ctx->pc = 0x16F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9F8u;
    // 0x16f9fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x16F9F8u, 0x16FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA00u;
label_16fa00:
    // 0x16fa00: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x16fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_16fa04:
    // 0x16fa04: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x16fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x16fa08: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16fa08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fa0c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16fa0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16fa10: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16fa10u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16fa14: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16fa14u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16fa18: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x16fa18u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16fa1c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16fa1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fa20: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16fa20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fa24: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16fa24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fa28: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x16fa28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x16fa2c: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x16fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x16fa30: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x16fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x16fa34: 0xc7b40124  lwc1        $f20, 0x124($sp)
    ctx->pc = 0x16fa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16fa38: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16fa38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16fa3c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x16fa3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16fa40: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x16fa40u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fa44: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x16fa44u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fa48: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x16fa48u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16fa4c: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x16fa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16fa50: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x16fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16fa54: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x16fa54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fa58: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x16fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16fa5c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x16fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x16fa60: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16fa60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16fa64: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x16fa64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16fa68: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x16fa68u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fa6c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x16fa6cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fa70: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x16fa70u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16fa74: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x16fa74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16fa78: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x16fa78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16fa7c: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x16fa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fa80: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x16fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16fa84: 0xc6000260  lwc1        $f0, 0x260($s0)
    ctx->pc = 0x16fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fa88: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x16FA88u;
    SET_GPR_U32(ctx, 31, 0x16FA90u);
    ctx->pc = 0x16FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA88u;
    // 0x16fa8c: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x16FA88u, 0x16FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA90u;
label_16fa90:
    // 0x16fa90: 0xc60c0268  lwc1        $f12, 0x268($s0)
    ctx->pc = 0x16fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16fa94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16fa94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fa98: 0x0  nop
    ctx->pc = 0x16fa98u;
    // NOP
    // 0x16fa9c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x16fa9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16faa0: 0x0  nop
    ctx->pc = 0x16faa0u;
    // NOP
    // 0x16faa4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16FAA4u;
    {
        const bool branch_taken_0x16faa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAA4u;
        // 0x16faa8: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faa4) {
            ctx->pc = 0x16FAB4u;
            goto label_16fab4;
        }
    }
    ctx->pc = 0x16FAACu;
    // 0x16faac: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x16FAACu;
    SET_GPR_U32(ctx, 31, 0x16FAB4u);
    ctx->pc = 0x16FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAACu;
    // 0x16fab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x16FAACu, 0x16FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FAB4u;
label_16fab4:
    // 0x16fab4: 0xc6010264  lwc1        $f1, 0x264($s0)
    ctx->pc = 0x16fab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16fab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fabc: 0x0  nop
    ctx->pc = 0x16fabcu;
    // NOP
    // 0x16fac0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16fac0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fac4: 0x0  nop
    ctx->pc = 0x16fac4u;
    // NOP
    // 0x16fac8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x16FAC8u;
    {
        const bool branch_taken_0x16fac8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAC8u;
        // 0x16facc: 0x27a20180  addiu       $v0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fac8) {
            ctx->pc = 0x16FAE4u;
            goto label_16fae4;
        }
    }
    ctx->pc = 0x16FAD0u;
    // 0x16fad0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x16fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x16fad4: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x16fad4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x16fad8: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x16FAD8u;
    SET_GPR_U32(ctx, 31, 0x16FAE0u);
    ctx->pc = 0x16FADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAD8u;
    // 0x16fadc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x16FAD8u, 0x16FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FAE0u;
label_16fae0:
    // 0x16fae0: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x16fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_16fae4:
    // 0x16fae4: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x16fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x16fae8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16fae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16faec: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16faecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16faf0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16faf0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16faf4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16faf4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16faf8: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x16faf8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16fafc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16fafcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fb00: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16fb00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fb04: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16fb04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fb08: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x16fb08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x16fb0c: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x16fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x16fb10: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x16fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fb14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16fb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fb18: 0x0  nop
    ctx->pc = 0x16fb18u;
    // NOP
    // 0x16fb1c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16FB1Cu;
    {
        const bool branch_taken_0x16fb1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB1Cu;
        // 0x16fb20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb1c) {
            ctx->pc = 0x16FB40u;
            goto label_16fb40;
        }
    }
    ctx->pc = 0x16FB24u;
    // 0x16fb24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16fb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16fb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16fb2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16fb30: 0xc054f5c  jal         func_153D70
    ctx->pc = 0x16FB30u;
    SET_GPR_U32(ctx, 31, 0x16FB38u);
    ctx->pc = 0x16FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB30u;
    // 0x16fb34: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153D70u, 0x16FB30u, 0x16FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB38u;
label_16fb38:
    // 0x16fb38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16FB38u;
    {
        const bool branch_taken_0x16fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB38u;
        // 0x16fb3c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb38) {
            ctx->pc = 0x16FB54u;
            goto label_16fb54;
        }
    }
    ctx->pc = 0x16FB40u;
label_16fb40:
    // 0x16fb40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16fb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16fb44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16fb48: 0xc054f5c  jal         func_153D70
    ctx->pc = 0x16FB48u;
    SET_GPR_U32(ctx, 31, 0x16FB50u);
    ctx->pc = 0x16FB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB48u;
    // 0x16fb4c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153D70u, 0x16FB48u, 0x16FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB50u;
label_16fb50:
    // 0x16fb50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16fb54:
    // 0x16fb54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fb58: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x16FB58u;
    {
        const bool branch_taken_0x16fb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB58u;
        // 0x16fb5c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb58) {
            ctx->pc = 0x170038u;
            goto label_170038;
        }
    }
    ctx->pc = 0x16FB60u;
label_16fb60:
    // 0x16fb60: 0xc62102a0  lwc1        $f1, 0x2A0($s1)
    ctx->pc = 0x16fb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fb64: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x16fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x16fb68: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x16fb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x16fb6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16fb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16fb70: 0x0  nop
    ctx->pc = 0x16fb70u;
    // NOP
    // 0x16fb74: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x16fb74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fb78: 0x0  nop
    ctx->pc = 0x16fb78u;
    // NOP
    // 0x16fb7c: 0x45010079  bc1t        . + 4 + (0x79 << 2)
    ctx->pc = 0x16FB7Cu;
    {
        const bool branch_taken_0x16fb7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB7Cu;
        // 0x16fb80: 0x27a200b0  addiu       $v0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb7c) {
            ctx->pc = 0x16FD64u;
            goto label_16fd64;
        }
    }
    ctx->pc = 0x16FB84u;
    // 0x16fb84: 0xc60102a0  lwc1        $f1, 0x2A0($s0)
    ctx->pc = 0x16fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fb88: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x16fb88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fb8c: 0x0  nop
    ctx->pc = 0x16fb8cu;
    // NOP
    // 0x16fb90: 0x45010073  bc1t        . + 4 + (0x73 << 2)
    ctx->pc = 0x16FB90u;
    {
        const bool branch_taken_0x16fb90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fb90) {
            ctx->pc = 0x16FD60u;
            goto label_16fd60;
        }
    }
    ctx->pc = 0x16FB98u;
    // 0x16fb98: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x16fb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x16fb9c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x16fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16fba0: 0xe62002e8  swc1        $f0, 0x2E8($s1)
    ctx->pc = 0x16fba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
    // 0x16fba4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x16fba4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16fba8: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x16fba8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16fbac: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16fbacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fbb0: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x16fbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fbb4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16fbb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fbb8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16fbb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fbbc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fbbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fbc0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16fbc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fbc4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16fbc4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16fbc8: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fbc8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fbcc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16fbccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fbd0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16fbd0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16fbd4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16fbd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fbd8: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fbd8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fbdc: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16fbdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fbe0: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x16fbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fbe4: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x16fbe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x16fbe8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16fbe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fbec: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fbecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fbf0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16fbf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fbf4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16fbf4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16fbf8: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fbf8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fbfc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16fbfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fc00: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16fc00u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16fc04: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16fc04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fc08: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fc08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fc0c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16fc0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fc10: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x16fc10u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fc14: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x16fc14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16fc18: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16fc18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fc1c: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16fc1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fc20: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x16fc20u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fc24: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x16fc24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x16fc28: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16fc28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fc2c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fc2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fc30: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16fc30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fc34: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16fc34u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16fc38: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fc38u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fc3c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16fc3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fc40: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16fc40u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16fc44: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16fc44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fc48: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fc48u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fc4c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16fc4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fc50: 0xfa660000  sqc2        $vf6, 0x0($s3)
    ctx->pc = 0x16fc50u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fc54: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x16fc54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16fc58: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16fc58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fc5c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16fc5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fc60: 0xfa660000  sqc2        $vf6, 0x0($s3)
    ctx->pc = 0x16fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fc64: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x16fc64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16fc68: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16fc68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fc6c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fc6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fc70: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16fc70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fc74: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16fc74u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16fc78: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fc78u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fc7c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16fc7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fc80: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16fc80u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16fc84: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16fc84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fc88: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fc88u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fc8c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16fc8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fc90: 0xfa660000  sqc2        $vf6, 0x0($s3)
    ctx->pc = 0x16fc90u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fc94: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x16fc94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16fc98: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16fc98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fc9c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fc9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fca0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16fca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fca4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16fca4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16fca8: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fca8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fcac: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16fcacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fcb0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16fcb0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16fcb4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16fcb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fcb8: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fcb8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fcbc: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16fcbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fcc0: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x16fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fcc4: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x16fcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x16fcc8: 0xe62002e8  swc1        $f0, 0x2E8($s1)
    ctx->pc = 0x16fcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
    // 0x16fccc: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x16fcccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x16fcd0: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x16fcd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16fcd4: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x16fcd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fcd8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fcd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fcdc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16fcdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fce0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16fce0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16fce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16fce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16fce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcec: 0xc62002f0  lwc1        $f0, 0x2F0($s1)
    ctx->pc = 0x16fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fcf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16fcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16fcf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcf8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x16fcf8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16fcfc: 0x0  nop
    ctx->pc = 0x16fcfcu;
    // NOP
    // 0x16fd00: 0x0  nop
    ctx->pc = 0x16fd00u;
    // NOP
    // 0x16fd04: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x16FD04u;
    SET_GPR_U32(ctx, 31, 0x16FD0Cu);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x16FD04u, 0x16FD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD0Cu;
label_16fd0c:
    // 0x16fd0c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x16fd0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x16fd10: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x16fd10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16fd14: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x16fd14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fd18: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fd18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fd1c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16fd1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fd20: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16fd20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16fd24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16fd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16fd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd2c: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x16fd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fd30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16fd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd34: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16fd34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16fd38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16fd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd3c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x16fd3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16fd40: 0x0  nop
    ctx->pc = 0x16fd40u;
    // NOP
    // 0x16fd44: 0x0  nop
    ctx->pc = 0x16fd44u;
    // NOP
    // 0x16fd48: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x16FD48u;
    SET_GPR_U32(ctx, 31, 0x16FD50u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x16FD48u, 0x16FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD50u;
label_16fd50:
    // 0x16fd50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16fd54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16fd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fd58: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x16FD58u;
    {
        const bool branch_taken_0x16fd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fd58) {
            ctx->pc = 0x170034u;
            goto label_170034;
        }
    }
    ctx->pc = 0x16FD60u;
label_16fd60:
    // 0x16fd60: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x16fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16fd64:
    // 0x16fd64: 0xdaa70000  lqc2        $vf7, 0x0($s5)
    ctx->pc = 0x16fd64u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16fd68: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x16fd68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x16fd6c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16fd6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16fd70: 0x0  nop
    ctx->pc = 0x16fd70u;
    // NOP
    // 0x16fd74: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16fd74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16fd78: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16fd78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fd7c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16fd7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fd80: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16fd84: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x16fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16fd88: 0xda870000  lqc2        $vf7, 0x0($s4)
    ctx->pc = 0x16fd88u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16fd8c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x16fd8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x16fd90: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16fd90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16fd94: 0x0  nop
    ctx->pc = 0x16fd94u;
    // NOP
    // 0x16fd98: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16fd98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16fd9c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16fd9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fda0: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16fda0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fda4: 0xf8650000  sqc2        $vf5, 0x0($v1)
    ctx->pc = 0x16fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16fda8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16fdac: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16fdacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16fdb0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16fdb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fdb4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16fdb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fdb8: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16fdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fdbc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16fdbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fdc0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16fdc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fdc4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fdc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fdc8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16fdc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fdcc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16fdccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16fdd0: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fdd0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fdd4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16fdd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fdd8: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16fdd8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16fddc: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16fddcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fde0: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fde0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fde4: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16fde4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fde8: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fdec: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x16fdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16fdf0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x16fdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16fdf4: 0xc7a600b0  lwc1        $f6, 0xB0($sp)
    ctx->pc = 0x16fdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x16fdf8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16fdfc: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x16fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16fe00: 0xc7a700d8  lwc1        $f7, 0xD8($sp)
    ctx->pc = 0x16fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x16fe04: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x16fe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16fe08: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x16fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16fe0c: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x16fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16fe10: 0x46053040  add.s       $f1, $f6, $f5
    ctx->pc = 0x16fe10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x16fe14: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x16fe14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x16fe18: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x16fe18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x16fe1c: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x16fe1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x16fe20: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x16fe20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x16fe24: 0x46051041  sub.s       $f1, $f2, $f5
    ctx->pc = 0x16fe24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x16fe28: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x16fe28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x16fe2c: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x16fe2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x16fe30: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x16fe30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x16fe34: 0x46032040  add.s       $f1, $f4, $f3
    ctx->pc = 0x16fe34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x16fe38: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x16fe38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x16fe3c: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x16fe3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x16fe40: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x16fe40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x16fe44: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x16fe44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x16fe48: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16fe48u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fe4c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16fe4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fe50: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x16fe50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16fe54: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x16fe54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fe58: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x16fe58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16fe5c: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x16fe5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x16fe60: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x16fe60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fe64: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x16fe64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fe68: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x16fe68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fe6c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16fe6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16fe70: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16fe70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fe74: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fe74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fe78: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16fe78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fe7c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16fe7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16fe80: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fe80u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fe84: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16fe84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fe88: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16fe88u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16fe8c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16fe8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fe90: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fe90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16fe94: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16fe94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fe98: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x16fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16fe9c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x16fe9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16fea0: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x16fea0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16fea4: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x16fea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fea8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16feac: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16feacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16feb0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16feb0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16feb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16feb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16feb8: 0x4be7233c  vmove.xyzw  $vf7, $vf4
    ctx->pc = 0x16feb8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x16febc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16febcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16fec0: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x16fec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x16fec4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16fec4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16fec8: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x16fec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x16fecc: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16feccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16fed0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x16fed0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16fed4: 0x0  nop
    ctx->pc = 0x16fed4u;
    // NOP
    // 0x16fed8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16fed8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16fedc: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16fedcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fee0: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16fee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fee4: 0xfa650000  sqc2        $vf5, 0x0($s3)
    ctx->pc = 0x16fee4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16fee8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x16fee8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16feec: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16feecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fef0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16fef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fef4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16fef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16fef8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16fef8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16fefc: 0x4a0003bf  vwaitq
    ctx->pc = 0x16fefcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ff00: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16ff00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ff04: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16ff04u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16ff08: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16ff08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ff0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ff0cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ff10: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ff10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ff14: 0xfa660000  sqc2        $vf6, 0x0($s3)
    ctx->pc = 0x16ff14u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ff18: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x16ff18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16ff1c: 0xc7a600c0  lwc1        $f6, 0xC0($sp)
    ctx->pc = 0x16ff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x16ff20: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x16ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16ff24: 0xc7a700d8  lwc1        $f7, 0xD8($sp)
    ctx->pc = 0x16ff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x16ff28: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x16ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ff2c: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x16ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16ff30: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x16ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16ff34: 0x46053040  add.s       $f1, $f6, $f5
    ctx->pc = 0x16ff34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x16ff38: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x16ff38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x16ff3c: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x16ff3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x16ff40: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x16ff40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x16ff44: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x16ff44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x16ff48: 0x46051041  sub.s       $f1, $f2, $f5
    ctx->pc = 0x16ff48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x16ff4c: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x16ff4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x16ff50: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x16ff50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x16ff54: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x16ff54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x16ff58: 0x46032040  add.s       $f1, $f4, $f3
    ctx->pc = 0x16ff58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x16ff5c: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x16ff5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x16ff60: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x16ff60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x16ff64: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x16ff64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x16ff68: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x16ff68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x16ff6c: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x16ff6cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ff70: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ff70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ff74: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x16ff74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ff78: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x16ff78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ff7c: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x16ff7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16ff80: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x16ff80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x16ff84: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x16ff84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ff88: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x16ff88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ff8c: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x16ff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ff90: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16ff90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16ff94: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16ff94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ff98: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16ff98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ff9c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16ff9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ffa0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16ffa0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16ffa4: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ffa4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ffa8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16ffa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ffac: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16ffacu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16ffb0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16ffb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ffb4: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ffb4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ffb8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ffb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ffbc: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x16ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ffc0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x16ffc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ffc4: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x16ffc4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16ffc8: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x16ffc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ffcc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16ffccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ffd0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16ffd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ffd4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16ffd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16ffd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ffd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ffdc: 0x4be7233c  vmove.xyzw  $vf7, $vf4
    ctx->pc = 0x16ffdcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x16ffe0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16ffe0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16ffe4: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x16ffe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x16ffe8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16ffe8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16ffec: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x16ffecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16fff0: 0x0  nop
    ctx->pc = 0x16fff0u;
    // NOP
    // 0x16fff4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16fff4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16fff8: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16fff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16fffc: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16fffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x170000: 0xfa450000  sqc2        $vf5, 0x0($s2)
    ctx->pc = 0x170000u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x170004: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x170004u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x170008: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x170008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17000c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17000cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x170010: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x170010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x170014: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x170014u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x170018: 0x4a0003bf  vwaitq
    ctx->pc = 0x170018u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17001c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17001cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x170020: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x170020u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x170024: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x170024u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x170028: 0x4a0003bf  vwaitq
    ctx->pc = 0x170028u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17002c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17002cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x170030: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x170030u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_170034:
    // 0x170034: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x170034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_170038:
    // 0x170038: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x170038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17003c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17003cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x170040: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x170040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x170044: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x170044u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170048: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x170048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17004c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17004cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170050: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x170050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170054: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x170054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170058: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x170058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17005c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17005cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170060: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170064: 0x3e00008  jr          $ra
    ctx->pc = 0x170064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170064u;
        // 0x170068: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17006Cu;
}
