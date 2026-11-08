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

// Function: FUN_00153e70
// Address: 0x153e70 - 0x1540dc
void FUN_00153e70_0x153e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153e70_0x153e70");
#endif

    switch (ctx->pc) {
        case 0x153eb0u: goto label_153eb0;
        case 0x1540b0u: goto label_1540b0;
        default: break;
    }

    ctx->pc = 0x153e70u;

    // 0x153e70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x153e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x153e74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x153e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x153e78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x153e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x153e7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x153e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x153e80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x153e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153e84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x153e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x153e88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x153e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153e8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x153e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x153e90: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x153e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153e94: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x153e94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x153e98: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x153e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153e9c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x153e9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x153ea0: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x153ea0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x153ea4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x153ea4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x153ea8: 0xc054e18  jal         func_153860
    ctx->pc = 0x153EA8u;
    SET_GPR_U32(ctx, 31, 0x153EB0u);
    ctx->pc = 0x153EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153EA8u;
    // 0x153eac: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x153860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153860u, 0x153EA8u, 0x153EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153EB0u;
label_153eb0:
    // 0x153eb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x153eb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x153eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153eb8: 0x0  nop
    ctx->pc = 0x153eb8u;
    // NOP
    // 0x153ebc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x153ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153ec0: 0x0  nop
    ctx->pc = 0x153ec0u;
    // NOP
    // 0x153ec4: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x153EC4u;
    {
        const bool branch_taken_0x153ec4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EC4u;
        // 0x153ec8: 0x27a200c0  addiu       $v0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ec4) {
            ctx->pc = 0x153F80u;
            goto label_153f80;
        }
    }
    ctx->pc = 0x153ECCu;
    // 0x153ecc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x153eccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x153ed0: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x153ed0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x153ed4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153ed4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153ed8: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x153ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153edc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153edcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153ee0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x153ee0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153ee4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x153ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153ee8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x153ee8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153eec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153eecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153ef0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153ef4: 0x4615b000  add.s       $f0, $f22, $f21
    ctx->pc = 0x153ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x153ef8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x153ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x153efc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x153efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153f00: 0x0  nop
    ctx->pc = 0x153f00u;
    // NOP
    // 0x153f04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153F04u;
    {
        const bool branch_taken_0x153f04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153f04) {
            ctx->pc = 0x153F14u;
            goto label_153f14;
        }
    }
    ctx->pc = 0x153F0Cu;
    // 0x153f0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x153F0Cu;
    {
        const bool branch_taken_0x153f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F0Cu;
        // 0x153f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f0c) {
            ctx->pc = 0x153F18u;
            goto label_153f18;
        }
    }
    ctx->pc = 0x153F14u;
label_153f14:
    // 0x153f14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153f18:
    // 0x153f18: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x153F18u;
    {
        const bool branch_taken_0x153f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f18) {
            ctx->pc = 0x153F80u;
            goto label_153f80;
        }
    }
    ctx->pc = 0x153F20u;
    // 0x153f20: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x153f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x153f24: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x153f24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x153f28: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x153f28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x153f2c: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153f2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153f30: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x153f30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153f34: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153f34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153f38: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x153f38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x153f3c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153f3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153f40: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x153f40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153f44: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x153f44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x153f48: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x153f48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153f4c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x153f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153f50: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x153f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153f54: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x153f54u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x153f58: 0x4a0003bf  vwaitq
    ctx->pc = 0x153f58u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x153f5c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x153f5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153f60: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x153f60u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x153f64: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x153f64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153f68: 0x4a0003bf  vwaitq
    ctx->pc = 0x153f68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x153f6c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x153f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153f70: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x153f70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153f74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153f78: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x153F78u;
    {
        const bool branch_taken_0x153f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F78u;
        // 0x153f7c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f78) {
            ctx->pc = 0x1540B8u;
            goto label_1540b8;
        }
    }
    ctx->pc = 0x153F80u;
label_153f80:
    // 0x153f80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x153f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153f84: 0x0  nop
    ctx->pc = 0x153f84u;
    // NOP
    // 0x153f88: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x153f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153f8c: 0x0  nop
    ctx->pc = 0x153f8cu;
    // NOP
    // 0x153f90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x153F90u;
    {
        const bool branch_taken_0x153f90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F90u;
        // 0x153f94: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f90) {
            ctx->pc = 0x153FA8u;
            goto label_153fa8;
        }
    }
    ctx->pc = 0x153F98u;
    // 0x153f98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x153f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x153f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153fa0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x153FA0u;
    {
        const bool branch_taken_0x153fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153fa0) {
            ctx->pc = 0x1540B4u;
            goto label_1540b4;
        }
    }
    ctx->pc = 0x153FA8u;
label_153fa8:
    // 0x153fa8: 0xda670000  lqc2        $vf7, 0x0($s3)
    ctx->pc = 0x153fa8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x153fac: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x153facu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x153fb0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x153fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x153fb4: 0x0  nop
    ctx->pc = 0x153fb4u;
    // NOP
    // 0x153fb8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x153fb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x153fbc: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x153fbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153fc0: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x153fc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153fc4: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x153fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153fc8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x153fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x153fcc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x153fccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x153fd0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x153fd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153fd4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153fd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153fd8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x153fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153fdc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x153fdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153fe0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x153fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153fe4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x153fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153fe8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x153fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153fec: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x153fecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x153ff0: 0x4a0003bf  vwaitq
    ctx->pc = 0x153ff0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x153ff4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x153ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153ff8: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x153ff8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x153ffc: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x153ffcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154000: 0x4a0003bf  vwaitq
    ctx->pc = 0x154000u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154004: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x154004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154008: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x154008u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15400c: 0x4615b000  add.s       $f0, $f22, $f21
    ctx->pc = 0x15400cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x154010: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x154010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154014: 0x0  nop
    ctx->pc = 0x154014u;
    // NOP
    // 0x154018: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x154018u;
    {
        const bool branch_taken_0x154018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154018) {
            ctx->pc = 0x154040u;
            goto label_154040;
        }
    }
    ctx->pc = 0x154020u;
    // 0x154020: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x154020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x154024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154028: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x154028u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15402c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x15402cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x154030: 0x0  nop
    ctx->pc = 0x154030u;
    // NOP
    // 0x154034: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x154034u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x154038: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x154038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15403c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x15403cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_154040:
    // 0x154040: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x154040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x154044: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x154044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x154048: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x154048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15404c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154050: 0xc7a60088  lwc1        $f6, 0x88($sp)
    ctx->pc = 0x154050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x154054: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x154054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154058: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x154058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15405c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x15405cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x154060: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x154060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154064: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x154064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154068: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x154068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15406c: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x15406cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x154070: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x154070u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x154074: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x154074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x154078: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x154078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x15407c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x15407cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x154080: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x154080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x154084: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x154084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x154088: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x154088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x15408c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x15408cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x154090: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x154090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x154094: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x154094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x154098: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x154098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15409c: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x15409cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1540a0: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1540a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1540a4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1540a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1540a8: 0xc0552e8  jal         func_154BA0
    ctx->pc = 0x1540A8u;
    SET_GPR_U32(ctx, 31, 0x1540B0u);
    ctx->pc = 0x1540ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540A8u;
    // 0x1540ac: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154BA0u, 0x1540A8u, 0x1540B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540B0u;
label_1540b0:
    // 0x1540b0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1540b0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1540b4:
    // 0x1540b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1540b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1540b8:
    // 0x1540b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1540b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1540bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1540bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1540c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1540c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1540c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1540c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1540c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1540c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1540cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1540ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1540d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1540d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1540d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1540D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1540D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540D4u;
        // 0x1540d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1540D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1540DCu;
}
