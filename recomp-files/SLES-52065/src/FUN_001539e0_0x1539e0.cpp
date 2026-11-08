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

// Function: FUN_001539e0
// Address: 0x1539e0 - 0x153b3c
void FUN_001539e0_0x1539e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001539e0_0x1539e0");
#endif

    ctx->pc = 0x1539e0u;

    // 0x1539e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1539e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1539e4: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x1539e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1539e8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1539e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1539ec: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1539ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1539f0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1539f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1539f4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1539f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1539f8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1539f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1539fc: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1539fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153a00: 0x4bc521aa  vmul.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x153a00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153a04: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153a04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153a08: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153a0c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153a0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x153a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x153a18: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x153a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x153a1c: 0x0  nop
    ctx->pc = 0x153a1cu;
    // NOP
    // 0x153a20: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x153a20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x153a24: 0x4bc529aa  vmul.xyz    $vf6, $vf5, $vf5
    ctx->pc = 0x153a24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153a28: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153a28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153a2c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153a30: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153a30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153a34: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x153a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x153a38: 0x4bc421aa  vmul.xyz    $vf6, $vf4, $vf4
    ctx->pc = 0x153a38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153a3c: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153a3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153a40: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153a40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153a44: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153a44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153a48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x153a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153a4c: 0x460d6040  add.s       $f1, $f12, $f13
    ctx->pc = 0x153a4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x153a50: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x153a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x153a54: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x153a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x153a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a5c: 0x0  nop
    ctx->pc = 0x153a5cu;
    // NOP
    // 0x153a60: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x153a60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x153a64: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x153a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x153a68: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x153a68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x153a6c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x153a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153a70: 0x4601019d  msub.s      $f6, $f0, $f1
    ctx->pc = 0x153a70u;
    ctx->f[6] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x153a74: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x153a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153a78: 0x0  nop
    ctx->pc = 0x153a78u;
    // NOP
    // 0x153a7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x153A7Cu;
    {
        const bool branch_taken_0x153a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A7Cu;
        // 0x153a80: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a7c) {
            ctx->pc = 0x153A90u;
            goto label_153a90;
        }
    }
    ctx->pc = 0x153A84u;
    // 0x153a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a88: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x153A88u;
    {
        const bool branch_taken_0x153a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A88u;
        // 0x153a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a88) {
            ctx->pc = 0x153B34u;
            goto label_153b34;
        }
    }
    ctx->pc = 0x153A90u;
label_153a90:
    // 0x153a90: 0x0  nop
    ctx->pc = 0x153a90u;
    // NOP
    // 0x153a94: 0x0  nop
    ctx->pc = 0x153a94u;
    // NOP
    // 0x153a98: 0x0  nop
    ctx->pc = 0x153a98u;
    // NOP
    // 0x153a9c: 0x46060184  c1          0x60184
    ctx->pc = 0x153a9cu;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x153aa0: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x153aa0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x153aa4: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x153aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x153aa8: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x153aa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x153aac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x153aacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153ab0: 0x0  nop
    ctx->pc = 0x153ab0u;
    // NOP
    // 0x153ab4: 0x0  nop
    ctx->pc = 0x153ab4u;
    // NOP
    // 0x153ab8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153ab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153abc: 0x0  nop
    ctx->pc = 0x153abcu;
    // NOP
    // 0x153ac0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x153AC0u;
    {
        const bool branch_taken_0x153ac0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AC0u;
        // 0x153ac4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ac0) {
            ctx->pc = 0x153AE8u;
            goto label_153ae8;
        }
    }
    ctx->pc = 0x153AC8u;
    // 0x153ac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153acc: 0x0  nop
    ctx->pc = 0x153accu;
    // NOP
    // 0x153ad0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153ad4: 0x0  nop
    ctx->pc = 0x153ad4u;
    // NOP
    // 0x153ad8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153AD8u;
    {
        const bool branch_taken_0x153ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153ad8) {
            ctx->pc = 0x153AE8u;
            goto label_153ae8;
        }
    }
    ctx->pc = 0x153AE0u;
    // 0x153ae0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x153AE0u;
    {
        const bool branch_taken_0x153ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ae0) {
            ctx->pc = 0x153B30u;
            goto label_153b30;
        }
    }
    ctx->pc = 0x153AE8u;
label_153ae8:
    // 0x153ae8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x153ae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153aec: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x153aecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153af0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153af0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153af4: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x153af4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153af8: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x153af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153afc: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x153afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153b00: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x153b00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153b04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153b08: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x153b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x153b0c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x153b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x153b10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153b14: 0x0  nop
    ctx->pc = 0x153b14u;
    // NOP
    // 0x153b18: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x153B18u;
    {
        const bool branch_taken_0x153b18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x153B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B18u;
        // 0x153b1c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b18) {
            ctx->pc = 0x153B2Cu;
            goto label_153b2c;
        }
    }
    ctx->pc = 0x153B20u;
    // 0x153b20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x153B24u;
    {
        const bool branch_taken_0x153b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b24) {
            ctx->pc = 0x153B30u;
            goto label_153b30;
        }
    }
    ctx->pc = 0x153B2Cu;
label_153b2c:
    // 0x153b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153b30:
    // 0x153b30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x153b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_153b34:
    // 0x153b34: 0x3e00008  jr          $ra
    ctx->pc = 0x153B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153B3Cu;
}
