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

// Function: FUN_00154a20
// Address: 0x154a20 - 0x154b98
void FUN_00154a20_0x154a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00154a20_0x154a20");
#endif

    switch (ctx->pc) {
        case 0x154a84u: goto label_154a84;
        case 0x154ad0u: goto label_154ad0;
        default: break;
    }

    ctx->pc = 0x154a20u;

    // 0x154a20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x154a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x154a24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x154a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x154a28: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x154a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x154a2c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x154a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x154a30: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x154a30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a34: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x154a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x154a38: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x154a38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a3c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x154a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x154a40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x154a40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a44: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x154a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x154a48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x154a48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x154a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x154a50: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x154a50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x154a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x154a58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x154a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x154a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x154a60: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x154a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a64: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x154a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a70: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x154a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a74: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x154a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a78: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x154a78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a7c: 0xc05536c  jal         func_154DB0
    ctx->pc = 0x154A7Cu;
    SET_GPR_U32(ctx, 31, 0x154A84u);
    ctx->pc = 0x154A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A7Cu;
    // 0x154a80: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DB0u, 0x154A7Cu, 0x154A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A84u;
label_154a84:
    // 0x154a84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x154a84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x154a88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x154a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x154a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154a90: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x154a90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x154a94: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x154a94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x154a98: 0x0  nop
    ctx->pc = 0x154a98u;
    // NOP
    // 0x154a9c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x154a9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x154aa0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x154aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154aa4: 0xfa860000  sqc2        $vf6, 0x0($s4)
    ctx->pc = 0x154aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154aa8: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x154aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x154aac: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x154aacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154ab0: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x154ab0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x154ab4: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154ab8: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x154ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154abc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x154abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ac0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x154ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ac4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x154ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ac8: 0xc055358  jal         func_154D60
    ctx->pc = 0x154AC8u;
    SET_GPR_U32(ctx, 31, 0x154AD0u);
    ctx->pc = 0x154ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AC8u;
    // 0x154acc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x154AC8u, 0x154AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AD0u;
label_154ad0:
    // 0x154ad0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x154ad4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x154ad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154ad8: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x154ad8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154adc: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154adcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154ae0: 0xfaa60000  sqc2        $vf6, 0x0($s5)
    ctx->pc = 0x154ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154ae4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x154ae4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x154ae8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x154ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154aec: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154af0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154af0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154af4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x154af4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x154af8: 0x4a0003bf  vwaitq
    ctx->pc = 0x154af8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154afc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x154afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154b00: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x154b00u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x154b04: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x154b04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154b08: 0x4a0003bf  vwaitq
    ctx->pc = 0x154b08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154b0c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x154b0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154b10: 0xfaa60000  sqc2        $vf6, 0x0($s5)
    ctx->pc = 0x154b10u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154b14: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x154b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x154b18: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x154b18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154b1c: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x154b1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154b20: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154b20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154b24: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x154b24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154b28: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x154b28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154b2c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x154b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154b30: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154b34: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154b34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154b38: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x154b38u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x154b3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x154b3cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154b40: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x154b40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154b44: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154b44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154b4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x154b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154b50: 0x0  nop
    ctx->pc = 0x154b50u;
    // NOP
    // 0x154b54: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x154b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154b58: 0x0  nop
    ctx->pc = 0x154b58u;
    // NOP
    // 0x154b5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x154B5Cu;
    {
        const bool branch_taken_0x154b5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154b5c) {
            ctx->pc = 0x154B68u;
            goto label_154b68;
        }
    }
    ctx->pc = 0x154B64u;
    // 0x154b64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x154b64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_154b68:
    // 0x154b68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x154b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x154b6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x154b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x154b70: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x154b70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x154b74: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x154b74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x154b78: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x154b78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x154b7c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x154b7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x154b80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x154b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154b84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x154b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154b88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x154b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154b8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x154b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154b90: 0x3e00008  jr          $ra
    ctx->pc = 0x154B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B90u;
        // 0x154b94: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154B98u;
}
