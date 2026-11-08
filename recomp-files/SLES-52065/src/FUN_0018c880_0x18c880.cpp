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

// Function: FUN_0018c880
// Address: 0x18c880 - 0x18c9b8
void FUN_0018c880_0x18c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c880_0x18c880");
#endif

    switch (ctx->pc) {
        case 0x18c8a8u: goto label_18c8a8;
        case 0x18c8f8u: goto label_18c8f8;
        case 0x18c958u: goto label_18c958;
        default: break;
    }

    ctx->pc = 0x18c880u;

    // 0x18c880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18c880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18c884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c888: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c88c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c890: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18c890u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18c894: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c898: 0x260505c0  addiu       $a1, $s0, 0x5C0
    ctx->pc = 0x18c898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    // 0x18c89c: 0x260604d0  addiu       $a2, $s0, 0x4D0
    ctx->pc = 0x18c89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
    // 0x18c8a0: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x18C8A0u;
    SET_GPR_U32(ctx, 31, 0x18C8A8u);
    ctx->pc = 0x18C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8A0u;
    // 0x18c8a4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18C8A0u, 0x18C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8A8u;
label_18c8a8:
    // 0x18c8a8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x18c8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c8ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18c8b0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x18c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c8b4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x18c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x18c8b8: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x18c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x18c8bc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x18c8bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18c8c0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x18c8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18c8c4: 0xc60204f0  lwc1        $f2, 0x4F0($s0)
    ctx->pc = 0x18c8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c8c8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x18c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c8cc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x18c8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c8d0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x18c8d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18c8d4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x18c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x18c8d8: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x18c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c8dc: 0xc60304f8  lwc1        $f3, 0x4F8($s0)
    ctx->pc = 0x18c8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18c8e0: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x18c8e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x18c8e4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x18c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x18c8e8: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x18c8e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x18c8ec: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x18c8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c8f0: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x18C8F0u;
    SET_GPR_U32(ctx, 31, 0x18C8F8u);
    ctx->pc = 0x18C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8F0u;
    // 0x18c8f4: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x18C8F0u, 0x18C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8F8u;
label_18c8f8:
    // 0x18c8f8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x18c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18c8fc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x18c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18c900: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18c900u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x18c904: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18c904u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c908: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x18c908u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c90c: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x18c90cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c910: 0x4bc5292a  vmul.xyz    $vf4, $vf5, $vf5
    ctx->pc = 0x18c910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18c914: 0x4b85233d  vmr32.xy    $vf5, $vf4
    ctx->pc = 0x18c914u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c918: 0x4b062b3d  vmr32.x     $vf6, $vf5
    ctx->pc = 0x18c918u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18c91c: 0x4b0521e8  vadd.x      $vf7, $vf4, $vf5
    ctx->pc = 0x18c91cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18c920: 0x4b073168  vadd.x      $vf5, $vf6, $vf7
    ctx->pc = 0x18c920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c924: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18c924u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18c928: 0x4a0003bf  vwaitq
    ctx->pc = 0x18c928u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18c92c: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x18c92cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c930: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x18c930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18c934: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x18c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c938: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x18c938u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x18c93c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x18c93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x18c940: 0xc60004f4  lwc1        $f0, 0x4F4($s0)
    ctx->pc = 0x18c940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c944: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x18c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c948: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18c948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x18c94c: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x18c94cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x18c950: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x18C950u;
    SET_GPR_U32(ctx, 31, 0x18C958u);
    ctx->pc = 0x18C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C950u;
    // 0x18c954: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x18C950u, 0x18C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C958u;
label_18c958:
    // 0x18c958: 0xe6150510  swc1        $f21, 0x510($s0)
    ctx->pc = 0x18c958u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
    // 0x18c95c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x18c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18c960: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x18c960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18c964: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18c964u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18c968: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x18c968u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c96c: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x18c96cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c970: 0x4bc5292a  vmul.xyz    $vf4, $vf5, $vf5
    ctx->pc = 0x18c970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18c974: 0x4b85233d  vmr32.xy    $vf5, $vf4
    ctx->pc = 0x18c974u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c978: 0x4b062b3d  vmr32.x     $vf6, $vf5
    ctx->pc = 0x18c978u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18c97c: 0x4b0521e8  vadd.x      $vf7, $vf4, $vf5
    ctx->pc = 0x18c97cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18c980: 0x4b073168  vadd.x      $vf5, $vf6, $vf7
    ctx->pc = 0x18c980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18c984: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18c984u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18c988: 0x4a0003bf  vwaitq
    ctx->pc = 0x18c988u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18c98c: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x18c98cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c990: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c994: 0xae020510  sw          $v0, 0x510($s0)
    ctx->pc = 0x18c994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 2));
    // 0x18c998: 0xe6000500  swc1        $f0, 0x500($s0)
    ctx->pc = 0x18c998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
    // 0x18c99c: 0xe6140504  swc1        $f20, 0x504($s0)
    ctx->pc = 0x18c99cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1284), bits); }
    // 0x18c9a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c9a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18c9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18c9a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c9ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18c9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18C9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9B0u;
        // 0x18c9b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C9B8u;
}
