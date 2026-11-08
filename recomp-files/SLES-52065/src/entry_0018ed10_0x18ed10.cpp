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

// Function: entry_0018ed10
// Address: 0x18ed10 - 0x18eedc
void entry_0018ed10_0x18ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ed10_0x18ed10");
#endif

    switch (ctx->pc) {
        case 0x18ed3cu: goto label_18ed3c;
        default: break;
    }

    ctx->pc = 0x18ed10u;

    // 0x18ed10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed14: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x18ed14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x18ed18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18ed18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed1c: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x18ed1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed20: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x18ed20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed24: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x18ed24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x18ed28: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x18ed28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed2c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x18ed2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18ed30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed34: 0xc055254  jal         func_154950
    ctx->pc = 0x18ED34u;
    SET_GPR_U32(ctx, 31, 0x18ED3Cu);
    ctx->pc = 0x18ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED34u;
    // 0x18ed38: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154950u, 0x18ED34u, 0x18ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED3Cu;
label_18ed3c:
    // 0x18ed3c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ed40: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18ed40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18ed44: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18ed44u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18ed48: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x18ed48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ed4c: 0x0  nop
    ctx->pc = 0x18ed4cu;
    // NOP
    // 0x18ed50: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x18ED50u;
    {
        const bool branch_taken_0x18ed50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED50u;
        // 0x18ed54: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed50) {
            ctx->pc = 0x18EEDCu;
            return;
        }
    }
    ctx->pc = 0x18ED58u;
    // 0x18ed58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ed58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ed5c: 0x0  nop
    ctx->pc = 0x18ed5cu;
    // NOP
    // 0x18ed60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18ed60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ed64: 0x0  nop
    ctx->pc = 0x18ed64u;
    // NOP
    // 0x18ed68: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x18ED68u;
    {
        const bool branch_taken_0x18ed68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ed68) {
            ctx->pc = 0x18EEDCu;
            return;
        }
    }
    ctx->pc = 0x18ED70u;
    // 0x18ed70: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x18ed70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ed74: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x18ed74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ed78: 0x0  nop
    ctx->pc = 0x18ed78u;
    // NOP
    // 0x18ed7c: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x18ED7Cu;
    {
        const bool branch_taken_0x18ed7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED7Cu;
        // 0x18ed80: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed7c) {
            ctx->pc = 0x18EEDCu;
            return;
        }
    }
    ctx->pc = 0x18ED84u;
    // 0x18ed84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ed84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ed88: 0x0  nop
    ctx->pc = 0x18ed88u;
    // NOP
    // 0x18ed8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ed8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ed90: 0x0  nop
    ctx->pc = 0x18ed90u;
    // NOP
    // 0x18ed94: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x18ED94u;
    {
        const bool branch_taken_0x18ed94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ed94) {
            ctx->pc = 0x18EEDCu;
            return;
        }
    }
    ctx->pc = 0x18ED9Cu;
    // 0x18ed9c: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x18ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18eda0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x18eda0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18eda4: 0x0  nop
    ctx->pc = 0x18eda4u;
    // NOP
    // 0x18eda8: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x18EDA8u;
    {
        const bool branch_taken_0x18eda8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18eda8) {
            ctx->pc = 0x18EEDCu;
            return;
        }
    }
    ctx->pc = 0x18EDB0u;
    // 0x18edb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18edb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18edb4: 0x0  nop
    ctx->pc = 0x18edb4u;
    // NOP
    // 0x18edb8: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x18EDB8u;
    {
        const bool branch_taken_0x18edb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDB8u;
        // 0x18edbc: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edb8) {
            ctx->pc = 0x18EEDCu;
            return;
        }
    }
    ctx->pc = 0x18EDC0u;
    // 0x18edc0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x18edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18edc4: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x18edc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18edc8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x18edc8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18edcc: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x18edccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18edd0: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x18edd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x18edd4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18edd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x18edd8: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x18edd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18eddc: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x18eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x18ede0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18ede0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ede4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x18ede4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ede8: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x18ede8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x18edec: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x18edecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18edf0: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x18edf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18edf4: 0xfa660000  sqc2        $vf6, 0x0($s3)
    ctx->pc = 0x18edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x18edf8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x18edf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18edfc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x18edfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18ee00: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x18ee00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18ee04: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x18ee04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18ee08: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18ee08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18ee0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ee0cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18ee10: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x18ee10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18ee14: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x18ee14u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x18ee18: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x18ee18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18ee1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ee1cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18ee20: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x18ee20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18ee24: 0xfa660000  sqc2        $vf6, 0x0($s3)
    ctx->pc = 0x18ee24u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x18ee28: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x18ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x18ee2c: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x18ee2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x18ee30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18ee30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee34: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x18ee34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x18ee38: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x18ee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ee3c: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x18ee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18ee40: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x18ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18ee44: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x18ee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ee48: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x18ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ee4c: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x18ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18ee50: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x18ee50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x18ee54: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x18ee54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x18ee58: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18ee58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18ee5c: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x18ee5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x18ee60: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x18ee60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[4], ctx->f[2]));
    // 0x18ee64: 0x4614085d  msub.s      $f1, $f1, $f20
    ctx->pc = 0x18ee64u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x18ee68: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x18ee68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x18ee6c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x18ee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ee70: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x18ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18ee74: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x18ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18ee78: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x18ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ee7c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x18ee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ee80: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x18ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18ee84: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x18ee84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x18ee88: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x18ee88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x18ee8c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18ee8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18ee90: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x18ee90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x18ee94: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x18ee94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[4], ctx->f[2]));
    // 0x18ee98: 0x4614085d  msub.s      $f1, $f1, $f20
    ctx->pc = 0x18ee98u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x18ee9c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x18ee9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x18eea0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x18eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18eea4: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x18eea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18eea8: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x18eea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18eeac: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x18eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18eeb0: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x18eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18eeb4: 0xc6260008  lwc1        $f6, 0x8($s1)
    ctx->pc = 0x18eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18eeb8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x18eeb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x18eebc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x18eebcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x18eec0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18eec0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18eec4: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x18eec4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x18eec8: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x18eec8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[4], ctx->f[2]));
    // 0x18eecc: 0x4614085d  msub.s      $f1, $f1, $f20
    ctx->pc = 0x18eeccu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x18eed0: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x18eed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x18eed4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18EED4u;
    {
        const bool branch_taken_0x18eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EED4u;
        // 0x18eed8: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eed4) {
            ctx->pc = 0x18EF10u;
            return;
        }
    }
    ctx->pc = 0x18EEDCu;
}
