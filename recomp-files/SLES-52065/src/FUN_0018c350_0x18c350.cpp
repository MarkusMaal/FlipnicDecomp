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

// Function: FUN_0018c350
// Address: 0x18c350 - 0x18c550
void FUN_0018c350_0x18c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c350_0x18c350");
#endif

    switch (ctx->pc) {
        case 0x18c3a4u: goto label_18c3a4;
        case 0x18c3d4u: goto label_18c3d4;
        case 0x18c430u: goto label_18c430;
        case 0x18c4c4u: goto label_18c4c4;
        case 0x18c4d0u: goto label_18c4d0;
        case 0x18c4e8u: goto label_18c4e8;
        case 0x18c4f4u: goto label_18c4f4;
        case 0x18c50cu: goto label_18c50c;
        default: break;
    }

    ctx->pc = 0x18c350u;

    // 0x18c350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18c354: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18c358: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18c35c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18c360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18c360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c364: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x18c364u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18c368: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18c368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c36c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x18c36cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18c370: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x18c370u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18c374: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18c374u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18c378: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18c378u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18c37c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x18c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c380: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x18c380u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x18c384: 0xe4800520  swc1        $f0, 0x520($a0)
    ctx->pc = 0x18c384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1312), bits); }
    // 0x18c388: 0xac800524  sw          $zero, 0x524($a0)
    ctx->pc = 0x18c388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1316), GPR_U32(ctx, 0));
    // 0x18c38c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c390: 0xe4800528  swc1        $f0, 0x528($a0)
    ctx->pc = 0x18c390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1320), bits); }
    // 0x18c394: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18c394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18c398: 0x24a52880  addiu       $a1, $a1, 0x2880
    ctx->pc = 0x18c398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    // 0x18c39c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x18C39Cu;
    SET_GPR_U32(ctx, 31, 0x18C3A4u);
    ctx->pc = 0x18C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C39Cu;
    // 0x18c3a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x18C39Cu, 0x18C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3A4u;
label_18c3a4:
    // 0x18c3a4: 0xc62004d0  lwc1        $f0, 0x4D0($s1)
    ctx->pc = 0x18c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c3a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x18c3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18c3ac: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x18c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x18c3b0: 0xc62004d8  lwc1        $f0, 0x4D8($s1)
    ctx->pc = 0x18c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c3b4: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x18c3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c3b8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x18c3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18c3bc: 0xc6230520  lwc1        $f3, 0x520($s1)
    ctx->pc = 0x18c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18c3c0: 0xc6210528  lwc1        $f1, 0x528($s1)
    ctx->pc = 0x18c3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c3c4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x18c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c3c8: 0x46031301  sub.s       $f12, $f2, $f3
    ctx->pc = 0x18c3c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x18c3cc: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x18C3CCu;
    SET_GPR_U32(ctx, 31, 0x18C3D4u);
    ctx->pc = 0x18C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3CCu;
    // 0x18c3d0: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x18C3CCu, 0x18C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3D4u;
label_18c3d4:
    // 0x18c3d4: 0x26230520  addiu       $v1, $s1, 0x520
    ctx->pc = 0x18c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    // 0x18c3d8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x18c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18c3dc: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x18c3dcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x18c3e0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18c3e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c3e4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x18c3e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c3e8: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x18c3e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c3ec: 0x4bc5292a  vmul.xyz    $vf4, $vf5, $vf5
    ctx->pc = 0x18c3ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18c3f0: 0x4b85233d  vmr32.xy    $vf5, $vf4
    ctx->pc = 0x18c3f0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c3f4: 0x4b062b3d  vmr32.x     $vf6, $vf5
    ctx->pc = 0x18c3f4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18c3f8: 0x4b0521e8  vadd.x      $vf7, $vf4, $vf5
    ctx->pc = 0x18c3f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18c3fc: 0x4b073168  vadd.x      $vf5, $vf6, $vf7
    ctx->pc = 0x18c3fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c400: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18c400u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18c404: 0x4a0003bf  vwaitq
    ctx->pc = 0x18c404u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18c408: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x18c408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c40c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18c40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18c410: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x18c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c414: 0xe6200524  swc1        $f0, 0x524($s1)
    ctx->pc = 0x18c414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1316), bits); }
    // 0x18c418: 0xc62004d4  lwc1        $f0, 0x4D4($s1)
    ctx->pc = 0x18c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c41c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x18c41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x18c420: 0xc6210524  lwc1        $f1, 0x524($s1)
    ctx->pc = 0x18c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c424: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x18c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c428: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x18C428u;
    SET_GPR_U32(ctx, 31, 0x18C430u);
    ctx->pc = 0x18C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C428u;
    // 0x18c42c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x18C428u, 0x18C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C430u;
label_18c430:
    // 0x18c430: 0x26230520  addiu       $v1, $s1, 0x520
    ctx->pc = 0x18c430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    // 0x18c434: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x18c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18c438: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x18c438u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x18c43c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18c43cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c440: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x18c440u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c444: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x18c444u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c448: 0x4bc5292a  vmul.xyz    $vf4, $vf5, $vf5
    ctx->pc = 0x18c448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18c44c: 0x4b85233d  vmr32.xy    $vf5, $vf4
    ctx->pc = 0x18c44cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c450: 0x4b062b3d  vmr32.x     $vf6, $vf5
    ctx->pc = 0x18c450u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18c454: 0x4b0521e8  vadd.x      $vf7, $vf4, $vf5
    ctx->pc = 0x18c454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18c458: 0x4b073168  vadd.x      $vf5, $vf6, $vf7
    ctx->pc = 0x18c458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c45c: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18c45cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18c460: 0x4a0003bf  vwaitq
    ctx->pc = 0x18c460u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18c464: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x18c464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c468: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x18c468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18c46c: 0x0  nop
    ctx->pc = 0x18c46cu;
    // NOP
    // 0x18c470: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x18c470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c474: 0x0  nop
    ctx->pc = 0x18c474u;
    // NOP
    // 0x18c478: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x18C478u;
    {
        const bool branch_taken_0x18c478 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C478u;
        // 0x18c47c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c478) {
            ctx->pc = 0x18C4BCu;
            goto label_18c4bc;
        }
    }
    ctx->pc = 0x18C480u;
    // 0x18c480: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x18c480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c488: 0xc62004d0  lwc1        $f0, 0x4D0($s1)
    ctx->pc = 0x18c488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c48c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c48cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c490: 0xe6200550  swc1        $f0, 0x550($s1)
    ctx->pc = 0x18c490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1360), bits); }
    // 0x18c494: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x18c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c498: 0xc62004d8  lwc1        $f0, 0x4D8($s1)
    ctx->pc = 0x18c498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c49c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c49cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c4a0: 0xe6200558  swc1        $f0, 0x558($s1)
    ctx->pc = 0x18c4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1368), bits); }
    // 0x18c4a4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x18c4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c4a8: 0xc62004d4  lwc1        $f0, 0x4D4($s1)
    ctx->pc = 0x18c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c4ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c4acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c4b0: 0xe6200554  swc1        $f0, 0x554($s1)
    ctx->pc = 0x18c4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1364), bits); }
    // 0x18c4b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18C4B4u;
    {
        const bool branch_taken_0x18c4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4B4u;
        // 0x18c4b8: 0xae230540  sw          $v1, 0x540($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4b4) {
            ctx->pc = 0x18C528u;
            goto label_18c528;
        }
    }
    ctx->pc = 0x18C4BCu;
label_18c4bc:
    // 0x18c4bc: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18C4BCu;
    SET_GPR_U32(ctx, 31, 0x18C4C4u);
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18C4BCu, 0x18C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4C4u;
label_18c4c4:
    // 0x18c4c4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x18c4c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x18c4c8: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18C4C8u;
    SET_GPR_U32(ctx, 31, 0x18C4D0u);
    ctx->pc = 0x18C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4C8u;
    // 0x18c4cc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18C4C8u, 0x18C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4D0u;
label_18c4d0:
    // 0x18c4d0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x18c4d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x18c4d4: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x18c4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x18c4d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18c4d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18c4dc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x18c4dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x18c4e0: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18C4E0u;
    SET_GPR_U32(ctx, 31, 0x18C4E8u);
    ctx->pc = 0x18C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4E0u;
    // 0x18c4e4: 0xe6200550  swc1        $f0, 0x550($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18C4E0u, 0x18C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4E8u;
label_18c4e8:
    // 0x18c4e8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x18c4e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x18c4ec: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x18C4ECu;
    SET_GPR_U32(ctx, 31, 0x18C4F4u);
    ctx->pc = 0x18C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4ECu;
    // 0x18c4f0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x18C4ECu, 0x18C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4F4u;
label_18c4f4:
    // 0x18c4f4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x18c4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x18c4f8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x18c4f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x18c4fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18c4fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18c500: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18c500u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18c504: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18C504u;
    SET_GPR_U32(ctx, 31, 0x18C50Cu);
    ctx->pc = 0x18C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C504u;
    // 0x18c508: 0xe6200558  swc1        $f0, 0x558($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18C504u, 0x18C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C50Cu;
label_18c50c:
    // 0x18c50c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x18c50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x18c510: 0xe6200554  swc1        $f0, 0x554($s1)
    ctx->pc = 0x18c510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1364), bits); }
    // 0x18c514: 0x4615a003  div.s       $f0, $f20, $f21
    ctx->pc = 0x18c514u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[21]); }
    // 0x18c518: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c51c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18c51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18c520: 0xe635055c  swc1        $f21, 0x55C($s1)
    ctx->pc = 0x18c520u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1372), bits); }
    // 0x18c524: 0xae230540  sw          $v1, 0x540($s1)
    ctx->pc = 0x18c524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1344), GPR_U32(ctx, 3));
label_18c528:
    // 0x18c528: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18c528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c52c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x18c52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18c530: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18c530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c534: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x18c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18c538: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18c538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c53c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x18c53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18c540: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18c540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18c544: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18c544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18c548: 0x3e00008  jr          $ra
    ctx->pc = 0x18C548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C548u;
        // 0x18c54c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C550u;
}
