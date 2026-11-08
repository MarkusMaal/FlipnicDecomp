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

// Function: FUN_00155bb0
// Address: 0x155bb0 - 0x1562ec
void FUN_00155bb0_0x155bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155bb0_0x155bb0");
#endif

    switch (ctx->pc) {
        case 0x155c80u: goto label_155c80;
        case 0x156170u: goto label_156170;
        default: break;
    }

    ctx->pc = 0x155bb0u;

    // 0x155bb0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x155bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x155bb4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x155bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x155bb8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x155bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x155bbc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x155bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x155bc0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x155bc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bc4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x155bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x155bc8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x155bc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bcc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x155bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x155bd0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x155bd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x155bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x155bd8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x155bd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x155bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x155be0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x155be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155be4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x155be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x155be8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x155be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x155becu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x155bf0: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x155bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bf4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x155bf4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x155bf8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x155bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x155bfc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x155bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x155c00: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x155c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x155c04: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x155c04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155c08: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x155c08u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155c0c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155c0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155c10: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x155c10u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155c14: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x155c14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155c18: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155c18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155c1c: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x155c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155c20: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x155c20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155c24: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155c24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155c28: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x155c28u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155c2c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x155c2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x155c30: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x155c30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155c34: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x155c34u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155c38: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155c38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155c3c: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155c3cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155c40: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155c40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155c44: 0x4bc731ea  vmul.xyz    $vf7, $vf6, $vf7
    ctx->pc = 0x155c44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x155c48: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x155c48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x155c4c: 0x4b0739c2  vaddz.x     $vf7, $vf7, $vf7z
    ctx->pc = 0x155c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x155c50: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x155c50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x155c54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x155c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x155c58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x155c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155c5c: 0x0  nop
    ctx->pc = 0x155c5cu;
    // NOP
    // 0x155c60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x155c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155c64: 0x0  nop
    ctx->pc = 0x155c64u;
    // NOP
    // 0x155c68: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x155C68u;
    {
        const bool branch_taken_0x155c68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x155C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C68u;
        // 0x155c6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c68) {
            ctx->pc = 0x155C78u;
            goto label_155c78;
        }
    }
    ctx->pc = 0x155C70u;
    // 0x155c70: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x155C70u;
    {
        const bool branch_taken_0x155c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C70u;
        // 0x155c74: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c70) {
            ctx->pc = 0x1562C4u;
            goto label_1562c4;
        }
    }
    ctx->pc = 0x155C78u;
label_155c78:
    // 0x155c78: 0xc055334  jal         func_154CD0
    ctx->pc = 0x155C78u;
    SET_GPR_U32(ctx, 31, 0x155C80u);
    ctx->pc = 0x155C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C78u;
    // 0x155c7c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x155C78u, 0x155C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C80u;
label_155c80:
    // 0x155c80: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x155c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155c84: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x155c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x155c88: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x155c88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x155c8c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x155c8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155c90: 0x0  nop
    ctx->pc = 0x155c90u;
    // NOP
    // 0x155c94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x155C94u;
    {
        const bool branch_taken_0x155c94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x155C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C94u;
        // 0x155c98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c94) {
            ctx->pc = 0x155CA4u;
            goto label_155ca4;
        }
    }
    ctx->pc = 0x155C9Cu;
    // 0x155c9c: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x155C9Cu;
    {
        const bool branch_taken_0x155c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c9c) {
            ctx->pc = 0x1562C0u;
            goto label_1562c0;
        }
    }
    ctx->pc = 0x155CA4u;
label_155ca4:
    // 0x155ca4: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x155ca4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155ca8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x155ca8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155cac: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x155cacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x155cb0: 0x0  nop
    ctx->pc = 0x155cb0u;
    // NOP
    // 0x155cb4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x155cb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x155cb8: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x155cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155cbc: 0x4be6396c  vsub.xyzw   $vf5, $vf7, $vf6
    ctx->pc = 0x155cbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155cc0: 0xfac50000  sqc2        $vf5, 0x0($s6)
    ctx->pc = 0x155cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x155cc4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x155cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155cc8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x155cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155ccc: 0x0  nop
    ctx->pc = 0x155cccu;
    // NOP
    // 0x155cd0: 0x45000076  bc1f        . + 4 + (0x76 << 2)
    ctx->pc = 0x155CD0u;
    {
        const bool branch_taken_0x155cd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CD0u;
        // 0x155cd4: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cd0) {
            ctx->pc = 0x155EACu;
            goto label_155eac;
        }
    }
    ctx->pc = 0x155CD8u;
    // 0x155cd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x155cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x155cdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x155cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x155ce0: 0x0  nop
    ctx->pc = 0x155ce0u;
    // NOP
    // 0x155ce4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x155ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155ce8: 0x0  nop
    ctx->pc = 0x155ce8u;
    // NOP
    // 0x155cec: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
    ctx->pc = 0x155CECu;
    {
        const bool branch_taken_0x155cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155cec) {
            ctx->pc = 0x155EA8u;
            goto label_155ea8;
        }
    }
    ctx->pc = 0x155CF4u;
    // 0x155cf4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x155cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155cf8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x155cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155cfc: 0x0  nop
    ctx->pc = 0x155cfcu;
    // NOP
    // 0x155d00: 0x45000069  bc1f        . + 4 + (0x69 << 2)
    ctx->pc = 0x155D00u;
    {
        const bool branch_taken_0x155d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155d00) {
            ctx->pc = 0x155EA8u;
            goto label_155ea8;
        }
    }
    ctx->pc = 0x155D08u;
    // 0x155d08: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x155d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155d0c: 0x0  nop
    ctx->pc = 0x155d0cu;
    // NOP
    // 0x155d10: 0x45000065  bc1f        . + 4 + (0x65 << 2)
    ctx->pc = 0x155D10u;
    {
        const bool branch_taken_0x155d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155d10) {
            ctx->pc = 0x155EA8u;
            goto label_155ea8;
        }
    }
    ctx->pc = 0x155D18u;
    // 0x155d18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x155d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x155d1c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x155d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155d20: 0x0  nop
    ctx->pc = 0x155d20u;
    // NOP
    // 0x155d24: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x155D24u;
    {
        const bool branch_taken_0x155d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155d24) {
            ctx->pc = 0x155EA8u;
            goto label_155ea8;
        }
    }
    ctx->pc = 0x155D2Cu;
    // 0x155d2c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x155d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155d30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x155d30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x155d34: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x155d34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155d38: 0x0  nop
    ctx->pc = 0x155d38u;
    // NOP
    // 0x155d3c: 0x45010058  bc1t        . + 4 + (0x58 << 2)
    ctx->pc = 0x155D3Cu;
    {
        const bool branch_taken_0x155d3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x155D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D3Cu;
        // 0x155d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d3c) {
            ctx->pc = 0x155EA0u;
            goto label_155ea0;
        }
    }
    ctx->pc = 0x155D44u;
    // 0x155d44: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x155d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x155d48: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x155d48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155d4c: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x155d4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155d50: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155d54: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x155d54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155d58: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x155d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x155d5c: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x155d5cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155d60: 0xda670000  lqc2        $vf7, 0x0($s3)
    ctx->pc = 0x155d60u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155d64: 0x4be839ec  vsub.xyzw   $vf7, $vf7, $vf8
    ctx->pc = 0x155d64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x155d68: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x155d68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155d6c: 0x4be8212c  vsub.xyzw   $vf4, $vf4, $vf8
    ctx->pc = 0x155d6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x155d70: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x155d70u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155d74: 0x4be84a6c  vsub.xyzw   $vf9, $vf9, $vf8
    ctx->pc = 0x155d74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x155d78: 0x4bc43afe  vopmula.xyz $ACC, $vf7, $vf4
    ctx->pc = 0x155d78u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155d7c: 0x4bc7216e  vopmsub.xyz $vf5, $vf4, $vf7
    ctx->pc = 0x155d7cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155d80: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x155d80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155d84: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155d84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155d88: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155d88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155d8c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155d8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155d90: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155d94: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155d98: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x155d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155d9c: 0x4b6a03bc  vdiv        $Q, $vf0w, $vf10z
    ctx->pc = 0x155d9cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x155da0: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155da0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155da4: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155da4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155da8: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155da8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155dac: 0x4bc931aa  vmul.xyz    $vf6, $vf6, $vf9
    ctx->pc = 0x155dacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155db0: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155db4: 0x4a0003bf  vwaitq
    ctx->pc = 0x155db4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155db8: 0x4b063282  vaddz.x     $vf10, $vf6, $vf6z
    ctx->pc = 0x155db8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155dbc: 0x4bc54afe  vopmula.xyz $ACC, $vf9, $vf5
    ctx->pc = 0x155dbcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155dc0: 0x4bc929ae  vopmsub.xyz $vf6, $vf5, $vf9
    ctx->pc = 0x155dc0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155dc4: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155dc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155dc8: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155dc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155dcc: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x155dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155dd0: 0x4a863280  vaddx.y     $vf10, $vf6, $vf6x
    ctx->pc = 0x155dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155dd4: 0x4bc922fe  vopmula.xyz $ACC, $vf4, $vf9
    ctx->pc = 0x155dd4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155dd8: 0x4bc449ae  vopmsub.xyz $vf6, $vf9, $vf4
    ctx->pc = 0x155dd8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155ddc: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155ddcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155de0: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155de4: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155de8: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x155de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155dec: 0x4bc0529c  vmulq.xyz   $vf10, $vf10, $Q
    ctx->pc = 0x155decu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155df0: 0x4bc5296a  vmul.xyz    $vf5, $vf5, $vf5
    ctx->pc = 0x155df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155df4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x155df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155df8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x155df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155dfc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x155dfcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x155e00: 0xf86a0000  sqc2        $vf10, 0x0($v1)
    ctx->pc = 0x155e00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x155e04: 0x4a0003bf  vwaitq
    ctx->pc = 0x155e04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155e08: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x155e08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155e0c: 0x4b0a295a  vmulz.x     $vf5, $vf5, $vf10z
    ctx->pc = 0x155e0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155e10: 0x4b0529fd  vabs.x      $vf5, $vf5
    ctx->pc = 0x155e10u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[5], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155e14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x155e14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x155e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x155e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155e1c: 0x0  nop
    ctx->pc = 0x155e1cu;
    // NOP
    // 0x155e20: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x155e20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e24: 0x0  nop
    ctx->pc = 0x155e24u;
    // NOP
    // 0x155e28: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x155E28u;
    {
        const bool branch_taken_0x155e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E28u;
        // 0x155e2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e28) {
            ctx->pc = 0x155E98u;
            goto label_155e98;
        }
    }
    ctx->pc = 0x155E30u;
    // 0x155e30: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x155e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155e34: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x155e34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e38: 0x0  nop
    ctx->pc = 0x155e38u;
    // NOP
    // 0x155e3c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x155E3Cu;
    {
        const bool branch_taken_0x155e3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155e3c) {
            ctx->pc = 0x155E94u;
            goto label_155e94;
        }
    }
    ctx->pc = 0x155E44u;
    // 0x155e44: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x155e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e48: 0x0  nop
    ctx->pc = 0x155e48u;
    // NOP
    // 0x155e4c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x155E4Cu;
    {
        const bool branch_taken_0x155e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155e4c) {
            ctx->pc = 0x155E94u;
            goto label_155e94;
        }
    }
    ctx->pc = 0x155E54u;
    // 0x155e54: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x155e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155e58: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x155e58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e5c: 0x0  nop
    ctx->pc = 0x155e5cu;
    // NOP
    // 0x155e60: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x155E60u;
    {
        const bool branch_taken_0x155e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155e60) {
            ctx->pc = 0x155E94u;
            goto label_155e94;
        }
    }
    ctx->pc = 0x155E68u;
    // 0x155e68: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x155e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e6c: 0x0  nop
    ctx->pc = 0x155e6cu;
    // NOP
    // 0x155e70: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x155E70u;
    {
        const bool branch_taken_0x155e70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155e70) {
            ctx->pc = 0x155E94u;
            goto label_155e94;
        }
    }
    ctx->pc = 0x155E78u;
    // 0x155e78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x155e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x155e7c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x155e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155e80: 0x0  nop
    ctx->pc = 0x155e80u;
    // NOP
    // 0x155e84: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x155E84u;
    {
        const bool branch_taken_0x155e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E84u;
        // 0x155e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e84) {
            ctx->pc = 0x155E94u;
            goto label_155e94;
        }
    }
    ctx->pc = 0x155E8Cu;
    // 0x155e8c: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x155E8Cu;
    {
        const bool branch_taken_0x155e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e8c) {
            ctx->pc = 0x1562C0u;
            goto label_1562c0;
        }
    }
    ctx->pc = 0x155E94u;
label_155e94:
    // 0x155e94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x155e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_155e98:
    // 0x155e98: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x155E98u;
    {
        const bool branch_taken_0x155e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e98) {
            ctx->pc = 0x1562C0u;
            goto label_1562c0;
        }
    }
    ctx->pc = 0x155EA0u;
label_155ea0:
    // 0x155ea0: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x155EA0u;
    {
        const bool branch_taken_0x155ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ea0) {
            ctx->pc = 0x1562C0u;
            goto label_1562c0;
        }
    }
    ctx->pc = 0x155EA8u;
label_155ea8:
    // 0x155ea8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x155ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_155eac:
    // 0x155eac: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x155eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x155eb0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x155eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x155eb4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x155eb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155eb8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x155eb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155ebc: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155ebcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155ec0: 0x4bc429ee  vopmsub.xyz $vf7, $vf5, $vf4
    ctx->pc = 0x155ec0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x155ec4: 0x4a2739ec  vsub.w      $vf7, $vf7, $vf7
    ctx->pc = 0x155ec4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x155ec8: 0x4bc7396a  vmul.xyz    $vf5, $vf7, $vf7
    ctx->pc = 0x155ec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155ecc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x155eccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155ed0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x155ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155ed4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x155ed4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x155ed8: 0x4a0003bf  vwaitq
    ctx->pc = 0x155ed8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155edc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x155edcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155ee0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x155ee0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x155ee4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x155ee4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155ee8: 0x4a0003bf  vwaitq
    ctx->pc = 0x155ee8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155eec: 0x4bc0399c  vmulq.xyz   $vf6, $vf7, $Q
    ctx->pc = 0x155eecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155ef0: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x155ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155ef4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x155ef4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155ef8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x155ef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x155efc: 0x0  nop
    ctx->pc = 0x155efcu;
    // NOP
    // 0x155f00: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x155f00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x155f04: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x155f04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f08: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x155f08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155f0c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x155f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x155f10: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x155f10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155f14: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x155f14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155f18: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x155f18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f1c: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x155f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x155f20: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x155f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x155f24: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x155f24u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x155f28: 0xda670000  lqc2        $vf7, 0x0($s3)
    ctx->pc = 0x155f28u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155f2c: 0x4be839ec  vsub.xyzw   $vf7, $vf7, $vf8
    ctx->pc = 0x155f2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x155f30: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x155f30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155f34: 0x4be8212c  vsub.xyzw   $vf4, $vf4, $vf8
    ctx->pc = 0x155f34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x155f38: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x155f38u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155f3c: 0x4be84a6c  vsub.xyzw   $vf9, $vf9, $vf8
    ctx->pc = 0x155f3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x155f40: 0x4bc43afe  vopmula.xyz $ACC, $vf7, $vf4
    ctx->pc = 0x155f40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155f44: 0x4bc7216e  vopmsub.xyz $vf5, $vf4, $vf7
    ctx->pc = 0x155f44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155f48: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x155f48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155f4c: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155f4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155f50: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155f50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f54: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155f54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f58: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f5c: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155f5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f60: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x155f60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155f64: 0x4b6a03bc  vdiv        $Q, $vf0w, $vf10z
    ctx->pc = 0x155f64u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x155f68: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x155f68u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155f6c: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x155f6cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f70: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155f70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f74: 0x4bc931aa  vmul.xyz    $vf6, $vf6, $vf9
    ctx->pc = 0x155f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f78: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155f78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x155f7cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155f80: 0x4b063282  vaddz.x     $vf10, $vf6, $vf6z
    ctx->pc = 0x155f80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155f84: 0x4bc54afe  vopmula.xyz $ACC, $vf9, $vf5
    ctx->pc = 0x155f84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155f88: 0x4bc929ae  vopmsub.xyz $vf6, $vf5, $vf9
    ctx->pc = 0x155f88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f8c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155f8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f90: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155f90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f94: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x155f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155f98: 0x4a863280  vaddx.y     $vf10, $vf6, $vf6x
    ctx->pc = 0x155f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155f9c: 0x4bc922fe  vopmula.xyz $ACC, $vf4, $vf9
    ctx->pc = 0x155f9cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x155fa0: 0x4bc449ae  vopmsub.xyz $vf6, $vf9, $vf4
    ctx->pc = 0x155fa0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155fa4: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x155fa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155fa8: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x155fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155fac: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x155facu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x155fb0: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x155fb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155fb4: 0x4bc0529c  vmulq.xyz   $vf10, $vf10, $Q
    ctx->pc = 0x155fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x155fb8: 0x4bc5296a  vmul.xyz    $vf5, $vf5, $vf5
    ctx->pc = 0x155fb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155fbc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x155fbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155fc0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x155fc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155fc4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x155fc4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x155fc8: 0xf86a0000  sqc2        $vf10, 0x0($v1)
    ctx->pc = 0x155fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x155fcc: 0x4a0003bf  vwaitq
    ctx->pc = 0x155fccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x155fd0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x155fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155fd4: 0x4b0a295a  vmulz.x     $vf5, $vf5, $vf10z
    ctx->pc = 0x155fd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155fd8: 0x4b0529fd  vabs.x      $vf5, $vf5
    ctx->pc = 0x155fd8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[5], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x155fdc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x155fdcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x155fe0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x155fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x155fe4: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x155fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155fe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x155fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155fec: 0x0  nop
    ctx->pc = 0x155fecu;
    // NOP
    // 0x155ff0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x155ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155ff4: 0x0  nop
    ctx->pc = 0x155ff4u;
    // NOP
    // 0x155ff8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x155FF8u;
    {
        const bool branch_taken_0x155ff8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x155FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FF8u;
        // 0x155ffc: 0x27a200f0  addiu       $v0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ff8) {
            ctx->pc = 0x156014u;
            goto label_156014;
        }
    }
    ctx->pc = 0x156000u;
    // 0x156000: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x156000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x156004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156008: 0x0  nop
    ctx->pc = 0x156008u;
    // NOP
    // 0x15600c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x15600cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x156010: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x156010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_156014:
    // 0x156014: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x156014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156018: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156018u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15601c: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x15601cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156020: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x156020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156024: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x156024u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x156028: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x156028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x15602c: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x15602cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x156030: 0xda670000  lqc2        $vf7, 0x0($s3)
    ctx->pc = 0x156030u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x156034: 0x4be839ec  vsub.xyzw   $vf7, $vf7, $vf8
    ctx->pc = 0x156034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x156038: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x156038u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15603c: 0x4be8212c  vsub.xyzw   $vf4, $vf4, $vf8
    ctx->pc = 0x15603cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156040: 0xd8690000  lqc2        $vf9, 0x0($v1)
    ctx->pc = 0x156040u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156044: 0x4be84a6c  vsub.xyzw   $vf9, $vf9, $vf8
    ctx->pc = 0x156044u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x156048: 0x4bc43afe  vopmula.xyz $ACC, $vf7, $vf4
    ctx->pc = 0x156048u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x15604c: 0x4bc7216e  vopmsub.xyz $vf5, $vf4, $vf7
    ctx->pc = 0x15604cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156050: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x156050u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156054: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x156054u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x156058: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x156058u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15605c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x15605cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156060: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x156060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156064: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x156064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156068: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x156068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x15606c: 0x4b6a03bc  vdiv        $Q, $vf0w, $vf10z
    ctx->pc = 0x15606cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x156070: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x156070u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x156074: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x156074u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156078: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x156078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15607c: 0x4bc931aa  vmul.xyz    $vf6, $vf6, $vf9
    ctx->pc = 0x15607cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156080: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x156080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156084: 0x4a0003bf  vwaitq
    ctx->pc = 0x156084u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x156088: 0x4b063282  vaddz.x     $vf10, $vf6, $vf6z
    ctx->pc = 0x156088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x15608c: 0x4bc54afe  vopmula.xyz $ACC, $vf9, $vf5
    ctx->pc = 0x15608cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x156090: 0x4bc929ae  vopmsub.xyz $vf6, $vf5, $vf9
    ctx->pc = 0x156090u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156094: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x156094u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156098: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x156098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15609c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x15609cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1560a0: 0x4a863280  vaddx.y     $vf10, $vf6, $vf6x
    ctx->pc = 0x1560a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1560a4: 0x4bc922fe  vopmula.xyz $ACC, $vf4, $vf9
    ctx->pc = 0x1560a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1560a8: 0x4bc449ae  vopmsub.xyz $vf6, $vf9, $vf4
    ctx->pc = 0x1560a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1560ac: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x1560acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1560b0: 0x4bc731aa  vmul.xyz    $vf6, $vf6, $vf7
    ctx->pc = 0x1560b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1560b4: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1560b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1560b8: 0x4a463280  vaddx.z     $vf10, $vf6, $vf6x
    ctx->pc = 0x1560b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1560bc: 0x4bc0529c  vmulq.xyz   $vf10, $vf10, $Q
    ctx->pc = 0x1560bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1560c0: 0x4bc5296a  vmul.xyz    $vf5, $vf5, $vf5
    ctx->pc = 0x1560c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1560c4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1560c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1560c8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1560c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1560cc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1560ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1560d0: 0xf84a0000  sqc2        $vf10, 0x0($v0)
    ctx->pc = 0x1560d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1560d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1560d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1560d8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1560d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1560dc: 0x4b0a295a  vmulz.x     $vf5, $vf5, $vf10z
    ctx->pc = 0x1560dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1560e0: 0x4b0529fd  vabs.x      $vf5, $vf5
    ctx->pc = 0x1560e0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[5], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1560e4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1560e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1560e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1560e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1560ec: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x1560ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1560f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1560f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1560f4: 0x0  nop
    ctx->pc = 0x1560f4u;
    // NOP
    // 0x1560f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1560f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1560fc: 0x0  nop
    ctx->pc = 0x1560fcu;
    // NOP
    // 0x156100: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x156100u;
    {
        const bool branch_taken_0x156100 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x156104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156100u;
        // 0x156104: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156100) {
            ctx->pc = 0x156114u;
            goto label_156114;
        }
    }
    ctx->pc = 0x156108u;
    // 0x156108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15610c: 0x0  nop
    ctx->pc = 0x15610cu;
    // NOP
    // 0x156110: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x156110u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_156114:
    // 0x156114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x156114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156118: 0x0  nop
    ctx->pc = 0x156118u;
    // NOP
    // 0x15611c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15611cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156120: 0x0  nop
    ctx->pc = 0x156120u;
    // NOP
    // 0x156124: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x156124u;
    {
        const bool branch_taken_0x156124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156124) {
            ctx->pc = 0x1561F0u;
            goto label_1561f0;
        }
    }
    ctx->pc = 0x15612Cu;
    // 0x15612c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x15612cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156130: 0x0  nop
    ctx->pc = 0x156130u;
    // NOP
    // 0x156134: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x156134u;
    {
        const bool branch_taken_0x156134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156134) {
            ctx->pc = 0x1561F0u;
            goto label_1561f0;
        }
    }
    ctx->pc = 0x15613Cu;
    // 0x15613c: 0x46022801  sub.s       $f0, $f5, $f2
    ctx->pc = 0x15613cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x156140: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x156140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x156144: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x156144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156148: 0x46002d03  div.s       $f20, $f5, $f0
    ctx->pc = 0x156148u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
    // 0x15614c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15614cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156150: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x156150u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x156154: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x156154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156158: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x156158u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15615c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15615cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156160: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x156164: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x156164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x156168: 0xc055334  jal         func_154CD0
    ctx->pc = 0x156168u;
    SET_GPR_U32(ctx, 31, 0x156170u);
    ctx->pc = 0x15616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156168u;
    // 0x15616c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x156168u, 0x156170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156170u;
label_156170:
    // 0x156170: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x156170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156174: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x156174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x156178: 0x0  nop
    ctx->pc = 0x156178u;
    // NOP
    // 0x15617c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x15617cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156180: 0x0  nop
    ctx->pc = 0x156180u;
    // NOP
    // 0x156184: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x156184u;
    {
        const bool branch_taken_0x156184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156184u;
        // 0x156188: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156184) {
            ctx->pc = 0x1562C0u;
            goto label_1562c0;
        }
    }
    ctx->pc = 0x15618Cu;
    // 0x15618c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156190: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156194: 0x0  nop
    ctx->pc = 0x156194u;
    // NOP
    // 0x156198: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x156198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15619c: 0x0  nop
    ctx->pc = 0x15619cu;
    // NOP
    // 0x1561a0: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x1561A0u;
    {
        const bool branch_taken_0x1561a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1561a0) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x1561A8u;
    // 0x1561a8: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1561a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1561ac: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1561acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1561b0: 0x0  nop
    ctx->pc = 0x1561b0u;
    // NOP
    // 0x1561b4: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x1561B4u;
    {
        const bool branch_taken_0x1561b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1561b4) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x1561BCu;
    // 0x1561bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1561bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1561c0: 0x0  nop
    ctx->pc = 0x1561c0u;
    // NOP
    // 0x1561c4: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1561C4u;
    {
        const bool branch_taken_0x1561c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1561c4) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x1561CCu;
    // 0x1561cc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1561ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1561d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1561d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1561d4: 0x0  nop
    ctx->pc = 0x1561d4u;
    // NOP
    // 0x1561d8: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x1561D8u;
    {
        const bool branch_taken_0x1561d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1561d8) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x1561E0u;
    // 0x1561e0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x1561e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x1561e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1561e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1561e8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1561E8u;
    {
        const bool branch_taken_0x1561e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561E8u;
        // 0x1561ec: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561e8) {
            ctx->pc = 0x1562C0u;
            goto label_1562c0;
        }
    }
    ctx->pc = 0x1561F0u;
label_1561f0:
    // 0x1561f0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1561f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1561f4: 0x0  nop
    ctx->pc = 0x1561f4u;
    // NOP
    // 0x1561f8: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x1561f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1561fc: 0x0  nop
    ctx->pc = 0x1561fcu;
    // NOP
    // 0x156200: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x156200u;
    {
        const bool branch_taken_0x156200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156200) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x156208u;
    // 0x156208: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x156208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15620c: 0x0  nop
    ctx->pc = 0x15620cu;
    // NOP
    // 0x156210: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x156210u;
    {
        const bool branch_taken_0x156210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156210u;
        // 0x156214: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156210) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x156218u;
    // 0x156218: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x156218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15621c: 0x0  nop
    ctx->pc = 0x15621cu;
    // NOP
    // 0x156220: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x156220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156224: 0x0  nop
    ctx->pc = 0x156224u;
    // NOP
    // 0x156228: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x156228u;
    {
        const bool branch_taken_0x156228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156228) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x156230u;
    // 0x156230: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x156230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156234: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x156234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156238: 0x0  nop
    ctx->pc = 0x156238u;
    // NOP
    // 0x15623c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x15623Cu;
    {
        const bool branch_taken_0x15623c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15623Cu;
        // 0x156240: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15623c) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x156244u;
    // 0x156244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156248: 0x0  nop
    ctx->pc = 0x156248u;
    // NOP
    // 0x15624c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x15624cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156250: 0x0  nop
    ctx->pc = 0x156250u;
    // NOP
    // 0x156254: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x156254u;
    {
        const bool branch_taken_0x156254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156254) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x15625Cu;
    // 0x15625c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x15625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156260: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x156260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156264: 0x0  nop
    ctx->pc = 0x156264u;
    // NOP
    // 0x156268: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x156268u;
    {
        const bool branch_taken_0x156268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156268) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x156270u;
    // 0x156270: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x156270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156274: 0x0  nop
    ctx->pc = 0x156274u;
    // NOP
    // 0x156278: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x156278u;
    {
        const bool branch_taken_0x156278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156278) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x156280u;
    // 0x156280: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x156280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x156284: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x156284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156288: 0x0  nop
    ctx->pc = 0x156288u;
    // NOP
    // 0x15628c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x15628Cu;
    {
        const bool branch_taken_0x15628c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15628c) {
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x156294u;
    // 0x156294: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x156294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x156298: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x156298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15629c: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x15629cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1562a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1562a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1562a4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1562a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1562a8: 0x0  nop
    ctx->pc = 0x1562a8u;
    // NOP
    // 0x1562ac: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1562acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1562b0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1562b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1562b4: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1562b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1562b8: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1562b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_1562bc:
    // 0x1562bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1562bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1562c0:
    // 0x1562c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1562c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1562c4:
    // 0x1562c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1562c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1562c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1562c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1562cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1562ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1562d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1562d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1562d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1562d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1562d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1562d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1562dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1562dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1562e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1562e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1562e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1562E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1562E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562E4u;
        // 0x1562e8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1562E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1562ECu;
}
