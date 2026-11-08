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

// Function: FUN_00152c50
// Address: 0x152c50 - 0x152f38
void FUN_00152c50_0x152c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152c50_0x152c50");
#endif

    switch (ctx->pc) {
        case 0x152ca0u: goto label_152ca0;
        case 0x152d38u: goto label_152d38;
        case 0x152d60u: goto label_152d60;
        case 0x152d6cu: goto label_152d6c;
        case 0x152d78u: goto label_152d78;
        default: break;
    }

    ctx->pc = 0x152c50u;

    // 0x152c50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x152c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x152c54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x152c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x152c58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x152c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x152c5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x152c60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x152c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x152c64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x152c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x152c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x152c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c70: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x152c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x152c74: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x152c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x152c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c7c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x152c7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x152c80: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x152c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x152c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c88: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x152c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x152c8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x152c90: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x152c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x152c94: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x152c94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x152c98: 0xc055254  jal         func_154950
    ctx->pc = 0x152C98u;
    SET_GPR_U32(ctx, 31, 0x152CA0u);
    ctx->pc = 0x152C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C98u;
    // 0x152c9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154950u, 0x152C98u, 0x152CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CA0u;
label_152ca0:
    // 0x152ca0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x152ca0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x152ca4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x152ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x152ca8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x152ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x152cac: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x152cacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x152cb0: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x152cb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152cb4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x152cb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152cb8: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x152cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152cbc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x152cbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x152cc0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x152cc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152cc4: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x152cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152cc8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x152cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x152ccc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x152cccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152cd0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x152cd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152cd4: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x152cd4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x152cd8: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x152cd8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152cdc: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x152cdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152ce0: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x152ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152ce4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x152ce4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152ce8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x152ce8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152cec: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x152cecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152cf0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x152cf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152cf4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x152cf4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x152cf8: 0x4a0003bf  vwaitq
    ctx->pc = 0x152cf8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x152cfc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x152cfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152d00: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x152d00u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x152d04: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x152d04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152d08: 0x4a0003bf  vwaitq
    ctx->pc = 0x152d08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x152d0c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x152d0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152d10: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x152d10u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152d14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152d18: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x152d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152d1c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x152d1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x152d20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x152d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152d24: 0x0  nop
    ctx->pc = 0x152d24u;
    // NOP
    // 0x152d28: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x152D28u;
    {
        const bool branch_taken_0x152d28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x152D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D28u;
        // 0x152d2c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d28) {
            ctx->pc = 0x152E4Cu;
            goto label_152e4c;
        }
    }
    ctx->pc = 0x152D30u;
    // 0x152d30: 0xc082520  jal         func_209480
    ctx->pc = 0x152D30u;
    SET_GPR_U32(ctx, 31, 0x152D38u);
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x152D30u, 0x152D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D38u;
label_152d38:
    // 0x152d38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x152d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d3c: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x152d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    // 0x152d40: 0x34439999  ori         $v1, $v0, 0x9999
    ctx->pc = 0x152d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x152d44: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x152d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
    // 0x152d48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x152d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x152d4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x152d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x152d50: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x152d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x152d54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x152d54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x152d58: 0xc082520  jal         func_209480
    ctx->pc = 0x152D58u;
    SET_GPR_U32(ctx, 31, 0x152D60u);
    ctx->pc = 0x152D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D58u;
    // 0x152d5c: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x152D58u, 0x152D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D60u;
label_152d60:
    // 0x152d60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x152d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d64: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x152D64u;
    SET_GPR_U32(ctx, 31, 0x152D6Cu);
    ctx->pc = 0x152D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D64u;
    // 0x152d68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x152D64u, 0x152D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D6Cu;
label_152d6c:
    // 0x152d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d70: 0xc0400f4  jal         func_1003D0
    ctx->pc = 0x152D70u;
    SET_GPR_U32(ctx, 31, 0x152D78u);
    ctx->pc = 0x152D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D70u;
    // 0x152d74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003D0u, 0x152D70u, 0x152D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D78u;
label_152d78:
    // 0x152d78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x152D78u;
    {
        const bool branch_taken_0x152d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D78u;
        // 0x152d7c: 0x3c033fb3  lui         $v1, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d78) {
            ctx->pc = 0x152DA0u;
            goto label_152da0;
        }
    }
    ctx->pc = 0x152D80u;
    // 0x152d80: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x152d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x152d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152d88: 0x0  nop
    ctx->pc = 0x152d88u;
    // NOP
    // 0x152d8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x152d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x152d90: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x152d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152d94: 0x0  nop
    ctx->pc = 0x152d94u;
    // NOP
    // 0x152d98: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x152D98u;
    {
        const bool branch_taken_0x152d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152d98) {
            ctx->pc = 0x152E4Cu;
            goto label_152e4c;
        }
    }
    ctx->pc = 0x152DA0u;
label_152da0:
    // 0x152da0: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152da4: 0x3c033f83  lui         $v1, 0x3F83
    ctx->pc = 0x152da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16259 << 16));
    // 0x152da8: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x152da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152dac: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x152dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x152db0: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152db4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x152db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152db8: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x152db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152dbc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x152dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152dc0: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x152dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x152dc4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152dc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152dc8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152dc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152dcc: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152dccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152dd0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152dd4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152dd4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152dd8: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152ddc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x152ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x152de0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x152de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152de4: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152de8: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x152de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152dec: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152df0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x152df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152df4: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x152df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152df8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152dfc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152dfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152e00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152e04: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152e04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152e08: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152e08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152e0c: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152e10: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x152e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x152e14: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x152e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152e18: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152e1c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x152e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152e20: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152e24: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x152e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152e28: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x152e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152e2c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152e30: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152e30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152e34: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152e38: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152e38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152e3c: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152e3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152e40: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152e44: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x152E44u;
    {
        const bool branch_taken_0x152e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E44u;
        // 0x152e48: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e44) {
            ctx->pc = 0x152F14u;
            goto label_152f14;
        }
    }
    ctx->pc = 0x152E4Cu;
label_152e4c:
    // 0x152e4c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x152e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152e54: 0x0  nop
    ctx->pc = 0x152e54u;
    // NOP
    // 0x152e58: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x152e58u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x152e5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x152e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152e60: 0x0  nop
    ctx->pc = 0x152e60u;
    // NOP
    // 0x152e64: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x152E64u;
    {
        const bool branch_taken_0x152e64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152e64) {
            ctx->pc = 0x152F14u;
            goto label_152f14;
        }
    }
    ctx->pc = 0x152E6Cu;
    // 0x152e6c: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152e70: 0x3c033f83  lui         $v1, 0x3F83
    ctx->pc = 0x152e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16259 << 16));
    // 0x152e74: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x152e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152e78: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x152e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x152e7c: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152e80: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x152e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152e84: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x152e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152e88: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x152e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152e8c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x152e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x152e90: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152e90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152e94: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152e94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152e98: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152e98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152e9c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152ea0: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152ea0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152ea4: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152ea8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x152ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x152eac: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x152eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152eb0: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152eb4: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x152eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152eb8: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152ebc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x152ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152ec0: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x152ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152ec4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152ec8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152ec8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152ecc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152ed0: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152ed0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152ed4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152ed4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152ed8: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152edc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x152edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x152ee0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x152ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152ee4: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x152ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152ee8: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x152ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152eec: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x152eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152ef0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x152ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152ef4: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x152ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152ef8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x152ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x152efc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x152efcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x152f00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x152f00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152f04: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x152f04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x152f08: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x152f08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x152f0c: 0x4614001d  msub.s      $f0, $f0, $f20
    ctx->pc = 0x152f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x152f10: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x152f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_152f14:
    // 0x152f14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x152f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152f18: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x152f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x152f1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x152f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152f20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x152f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152f24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x152f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152f28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x152f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152f2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x152f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152f30: 0x3e00008  jr          $ra
    ctx->pc = 0x152F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F30u;
        // 0x152f34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152F38u;
}
