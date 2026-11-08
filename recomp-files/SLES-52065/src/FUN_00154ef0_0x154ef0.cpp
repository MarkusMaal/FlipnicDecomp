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

// Function: FUN_00154ef0
// Address: 0x154ef0 - 0x15506c
void FUN_00154ef0_0x154ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00154ef0_0x154ef0");
#endif

    switch (ctx->pc) {
        case 0x154f5cu: goto label_154f5c;
        default: break;
    }

    ctx->pc = 0x154ef0u;

    // 0x154ef0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x154ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x154ef4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x154ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x154ef8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x154ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x154efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x154efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x154f00: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x154f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x154f04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154f08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x154f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154f10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x154f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154f18: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x154f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f1c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x154f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f20: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x154f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x154f24: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x154f24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154f28: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x154f28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x154f2c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154f2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154f30: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x154f30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154f34: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x154f34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x154f38: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154f38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154f3c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x154f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154f40: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x154f40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154f44: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154f44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154f48: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x154f48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154f4c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x154f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f50: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x154f50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f54: 0xc055334  jal         func_154CD0
    ctx->pc = 0x154F54u;
    SET_GPR_U32(ctx, 31, 0x154F5Cu);
    ctx->pc = 0x154F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F54u;
    // 0x154f58: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x154F54u, 0x154F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F5Cu;
label_154f5c:
    // 0x154f5c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x154f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154f60: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x154f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154f64: 0x0  nop
    ctx->pc = 0x154f64u;
    // NOP
    // 0x154f68: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x154f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154f6c: 0x0  nop
    ctx->pc = 0x154f6cu;
    // NOP
    // 0x154f70: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x154F70u;
    {
        const bool branch_taken_0x154f70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F70u;
        // 0x154f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f70) {
            ctx->pc = 0x155050u;
            goto label_155050;
        }
    }
    ctx->pc = 0x154F78u;
    // 0x154f78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x154f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x154f7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154f80: 0x0  nop
    ctx->pc = 0x154f80u;
    // NOP
    // 0x154f84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x154f84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154f88: 0x0  nop
    ctx->pc = 0x154f88u;
    // NOP
    // 0x154f8c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x154F8Cu;
    {
        const bool branch_taken_0x154f8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154f8c) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x154F94u;
    // 0x154f94: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x154f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154f98: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x154f98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154f9c: 0x0  nop
    ctx->pc = 0x154f9cu;
    // NOP
    // 0x154fa0: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x154FA0u;
    {
        const bool branch_taken_0x154fa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154fa0) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x154FA8u;
    // 0x154fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x154fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154fac: 0x0  nop
    ctx->pc = 0x154facu;
    // NOP
    // 0x154fb0: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x154FB0u;
    {
        const bool branch_taken_0x154fb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FB0u;
        // 0x154fb4: 0x27a30060  addiu       $v1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fb0) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x154FB8u;
    // 0x154fb8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x154fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x154fbc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x154fbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154fc0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x154fc0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154fc4: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x154fc4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154fc8: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x154fc8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x154fcc: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x154fccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154fd0: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x154fd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154fd4: 0x4bc731ea  vmul.xyz    $vf7, $vf6, $vf7
    ctx->pc = 0x154fd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x154fd8: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x154fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x154fdc: 0x4b0739c2  vaddz.x     $vf7, $vf7, $vf7z
    ctx->pc = 0x154fdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x154fe0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x154fe0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x154fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154fe8: 0x0  nop
    ctx->pc = 0x154fe8u;
    // NOP
    // 0x154fec: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x154fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154ff0: 0x0  nop
    ctx->pc = 0x154ff0u;
    // NOP
    // 0x154ff4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x154FF4u;
    {
        const bool branch_taken_0x154ff4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x154FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FF4u;
        // 0x154ff8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ff4) {
            ctx->pc = 0x155004u;
            goto label_155004;
        }
    }
    ctx->pc = 0x154FFCu;
    // 0x154ffc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x154FFCu;
    {
        const bool branch_taken_0x154ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FFCu;
        // 0x155000: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ffc) {
            ctx->pc = 0x155054u;
            goto label_155054;
        }
    }
    ctx->pc = 0x155004u;
label_155004:
    // 0x155004: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x155004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155008: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x155008u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x15500c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15500cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155010: 0x0  nop
    ctx->pc = 0x155010u;
    // NOP
    // 0x155014: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x155014u;
    {
        const bool branch_taken_0x155014 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x155018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155014u;
        // 0x155018: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155014) {
            ctx->pc = 0x155044u;
            goto label_155044;
        }
    }
    ctx->pc = 0x15501Cu;
    // 0x15501c: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x15501cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155020: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x155020u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155024: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x155024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x155028: 0x0  nop
    ctx->pc = 0x155028u;
    // NOP
    // 0x15502c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15502cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x155030: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x155030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155034: 0x4be6396c  vsub.xyzw   $vf5, $vf7, $vf6
    ctx->pc = 0x155034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155038: 0xfa450000  sqc2        $vf5, 0x0($s2)
    ctx->pc = 0x155038u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15503c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15503Cu;
    {
        const bool branch_taken_0x15503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15503Cu;
        // 0x155040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15503c) {
            ctx->pc = 0x155050u;
            goto label_155050;
        }
    }
    ctx->pc = 0x155044u;
label_155044:
    // 0x155044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x155044u;
    {
        const bool branch_taken_0x155044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155044) {
            ctx->pc = 0x155050u;
            goto label_155050;
        }
    }
    ctx->pc = 0x15504Cu;
label_15504c:
    // 0x15504c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_155050:
    // 0x155050: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x155050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_155054:
    // 0x155054: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15505c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15505cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155064: 0x3e00008  jr          $ra
    ctx->pc = 0x155064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155064u;
        // 0x155068: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15506Cu;
}
