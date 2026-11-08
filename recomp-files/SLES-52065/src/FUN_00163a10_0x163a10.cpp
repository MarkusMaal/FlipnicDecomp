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

// Function: FUN_00163a10
// Address: 0x163a10 - 0x16403c
void FUN_00163a10_0x163a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00163a10_0x163a10");
#endif

    switch (ctx->pc) {
        case 0x163a58u: goto label_163a58;
        case 0x163ca4u: goto label_163ca4;
        case 0x163ed0u: goto label_163ed0;
        case 0x163f08u: goto label_163f08;
        case 0x163f3cu: goto label_163f3c;
        case 0x164018u: goto label_164018;
        default: break;
    }

    ctx->pc = 0x163a10u;

    // 0x163a10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x163a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x163a14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x163a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x163a18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x163a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x163a1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x163a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x163a20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x163a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x163a28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x163a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163a30: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x163a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163a34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163a38: 0xc4a10348  lwc1        $f1, 0x348($a1)
    ctx->pc = 0x163a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163a3c: 0x8c9001f0  lw          $s0, 0x1F0($a0)
    ctx->pc = 0x163a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x163a40: 0xc4800228  lwc1        $f0, 0x228($a0)
    ctx->pc = 0x163a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163a44: 0x849101f4  lh          $s1, 0x1F4($a0)
    ctx->pc = 0x163a44u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x163a48: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x163a48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163a50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x163a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x163a54: 0x26650300  addiu       $a1, $s3, 0x300
    ctx->pc = 0x163a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_163a58:
    // 0x163a58: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163a5c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x163a5cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163a60: 0x0  nop
    ctx->pc = 0x163a60u;
    // NOP
    // 0x163a64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x163a64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x163a68: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x163a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163a6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163a70: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x163a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x163a74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163a78: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x163a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163a7c: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x163a7cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163a80: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x163a80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163a84: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x163a84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163a88: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x163a88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x163a8c: 0x0  nop
    ctx->pc = 0x163a8cu;
    // NOP
    // 0x163a90: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x163a90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x163a94: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x163a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x163a98: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x163a98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x163a9c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x163a9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163aa0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x163aa0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163aa4: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x163aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163aa8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163aac: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163ab0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x163ab0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163ab4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x163ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x163ab8: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x163ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163abc: 0xc66202f0  lwc1        $f2, 0x2F0($s3)
    ctx->pc = 0x163abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163ac0: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x163ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x163ac4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163ac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163acc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x163accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ad0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x163ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x163ad4: 0x46012303  div.s       $f12, $f4, $f1
    ctx->pc = 0x163ad4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x163ad8: 0x0  nop
    ctx->pc = 0x163ad8u;
    // NOP
    // 0x163adc: 0x0  nop
    ctx->pc = 0x163adcu;
    // NOP
    // 0x163ae0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x163ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163ae4: 0x0  nop
    ctx->pc = 0x163ae4u;
    // NOP
    // 0x163ae8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x163AE8u;
    {
        const bool branch_taken_0x163ae8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163ae8) {
            ctx->pc = 0x163AF8u;
            goto label_163af8;
        }
    }
    ctx->pc = 0x163AF0u;
    // 0x163af0: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x163AF0u;
    {
        const bool branch_taken_0x163af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AF0u;
        // 0x163af4: 0x129023  negu        $s2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163af0) {
            ctx->pc = 0x163A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163a58;
        }
    }
    ctx->pc = 0x163AF8u;
label_163af8:
    // 0x163af8: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x163af8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x163afc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x163afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x163b00: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x163B00u;
    {
        const bool branch_taken_0x163b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B00u;
        // 0x163b04: 0x2861000d  slti        $at, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b00) {
            ctx->pc = 0x163B6Cu;
            goto label_163b6c;
        }
    }
    ctx->pc = 0x163B08u;
    // 0x163b08: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x163B08u;
    {
        const bool branch_taken_0x163b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B08u;
        // 0x163b0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b08) {
            ctx->pc = 0x163B6Cu;
            goto label_163b6c;
        }
    }
    ctx->pc = 0x163B10u;
    // 0x163b10: 0x16430016  bne         $s2, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x163B10u;
    {
        const bool branch_taken_0x163b10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x163b10) {
            ctx->pc = 0x163B6Cu;
            goto label_163b6c;
        }
    }
    ctx->pc = 0x163B18u;
    // 0x163b18: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x163b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x163b1c: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x163b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b20: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x163b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163b24: 0x0  nop
    ctx->pc = 0x163b24u;
    // NOP
    // 0x163b28: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x163B28u;
    {
        const bool branch_taken_0x163b28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163b28) {
            ctx->pc = 0x163B6Cu;
            goto label_163b6c;
        }
    }
    ctx->pc = 0x163B30u;
    // 0x163b30: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x163b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b34: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x163b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163b38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x163b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x163b3c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x163b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163b40: 0x0  nop
    ctx->pc = 0x163b40u;
    // NOP
    // 0x163b44: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x163B44u;
    {
        const bool branch_taken_0x163b44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163b44) {
            ctx->pc = 0x163B6Cu;
            goto label_163b6c;
        }
    }
    ctx->pc = 0x163B4Cu;
    // 0x163b4c: 0x8e620350  lw          $v0, 0x350($s3)
    ctx->pc = 0x163b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
    // 0x163b50: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x163B50u;
    {
        const bool branch_taken_0x163b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x163b50) {
            ctx->pc = 0x163B5Cu;
            goto label_163b5c;
        }
    }
    ctx->pc = 0x163B58u;
    // 0x163b58: 0xe6620354  swc1        $f2, 0x354($s3)
    ctx->pc = 0x163b58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 852), bits); }
label_163b5c:
    // 0x163b5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x163b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x163b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163b64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x163b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163b68: 0xae620350  sw          $v0, 0x350($s3)
    ctx->pc = 0x163b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 848), GPR_U32(ctx, 2));
label_163b6c:
    // 0x163b6c: 0x8e630350  lw          $v1, 0x350($s3)
    ctx->pc = 0x163b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
    // 0x163b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163b74: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x163B74u;
    {
        const bool branch_taken_0x163b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B74u;
        // 0x163b78: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b74) {
            ctx->pc = 0x163C5Cu;
            goto label_163c5c;
        }
    }
    ctx->pc = 0x163B7Cu;
    // 0x163b7c: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x163b7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x163b80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163b84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x163b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163b88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x163b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x163b8c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163B8Cu;
    {
        const bool branch_taken_0x163b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B8Cu;
        // 0x163b90: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b8c) {
            ctx->pc = 0x163BACu;
            goto label_163bac;
        }
    }
    ctx->pc = 0x163B94u;
    // 0x163b94: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x163b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x163b98: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x163b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163b9c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x163b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163ba0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x163ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x163ba4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x163BA4u;
    {
        const bool branch_taken_0x163ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BA4u;
        // 0x163ba8: 0xe66002f0  swc1        $f0, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ba4) {
            ctx->pc = 0x163C1Cu;
            goto label_163c1c;
        }
    }
    ctx->pc = 0x163BACu;
label_163bac:
    // 0x163bac: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x163BACu;
    {
        const bool branch_taken_0x163bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163bac) {
            ctx->pc = 0x163BE0u;
            goto label_163be0;
        }
    }
    ctx->pc = 0x163BB4u;
    // 0x163bb4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x163bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x163bb8: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x163bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163bbc: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x163bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163bc0: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x163bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163bc4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163bc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163bc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x163bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163bcc: 0x0  nop
    ctx->pc = 0x163bccu;
    // NOP
    // 0x163bd0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x163BD0u;
    {
        const bool branch_taken_0x163bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163bd0) {
            ctx->pc = 0x163C1Cu;
            goto label_163c1c;
        }
    }
    ctx->pc = 0x163BD8u;
    // 0x163bd8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x163BD8u;
    {
        const bool branch_taken_0x163bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BD8u;
        // 0x163bdc: 0xe66102f0  swc1        $f1, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bd8) {
            ctx->pc = 0x163C1Cu;
            goto label_163c1c;
        }
    }
    ctx->pc = 0x163BE0u;
label_163be0:
    // 0x163be0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x163be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x163be4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163BE4u;
    {
        const bool branch_taken_0x163be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BE4u;
        // 0x163be8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163be4) {
            ctx->pc = 0x163BF8u;
            goto label_163bf8;
        }
    }
    ctx->pc = 0x163BECu;
    // 0x163bec: 0xc6600354  lwc1        $f0, 0x354($s3)
    ctx->pc = 0x163becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163bf0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163BF0u;
    {
        const bool branch_taken_0x163bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BF0u;
        // 0x163bf4: 0xe66002f0  swc1        $f0, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bf0) {
            ctx->pc = 0x163C1Cu;
            goto label_163c1c;
        }
    }
    ctx->pc = 0x163BF8u;
label_163bf8:
    // 0x163bf8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x163BF8u;
    {
        const bool branch_taken_0x163bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163bf8) {
            ctx->pc = 0x163C1Cu;
            goto label_163c1c;
        }
    }
    ctx->pc = 0x163C00u;
    // 0x163c00: 0xc66102f0  lwc1        $f1, 0x2F0($s3)
    ctx->pc = 0x163c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163c04: 0xc6600354  lwc1        $f0, 0x354($s3)
    ctx->pc = 0x163c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163c0c: 0x0  nop
    ctx->pc = 0x163c0cu;
    // NOP
    // 0x163c10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x163C10u;
    {
        const bool branch_taken_0x163c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163c10) {
            ctx->pc = 0x163C1Cu;
            goto label_163c1c;
        }
    }
    ctx->pc = 0x163C18u;
    // 0x163c18: 0xe66002f0  swc1        $f0, 0x2F0($s3)
    ctx->pc = 0x163c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
label_163c1c:
    // 0x163c1c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x163c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x163c20: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x163c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163c24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163c28: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x163c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163c2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163c30: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x163c30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163c34: 0x0  nop
    ctx->pc = 0x163c34u;
    // NOP
    // 0x163c38: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x163C38u;
    {
        const bool branch_taken_0x163c38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163c38) {
            ctx->pc = 0x163C58u;
            goto label_163c58;
        }
    }
    ctx->pc = 0x163C40u;
    // 0x163c40: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x163c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x163c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163c48: 0x0  nop
    ctx->pc = 0x163c48u;
    // NOP
    // 0x163c4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x163C4Cu;
    {
        const bool branch_taken_0x163c4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163c4c) {
            ctx->pc = 0x163C58u;
            goto label_163c58;
        }
    }
    ctx->pc = 0x163C54u;
    // 0x163c54: 0xe66102f0  swc1        $f1, 0x2F0($s3)
    ctx->pc = 0x163c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
label_163c58:
    // 0x163c58: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x163c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_163c5c:
    // 0x163c5c: 0x26630290  addiu       $v1, $s3, 0x290
    ctx->pc = 0x163c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x163c60: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x163c60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163c64: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x163c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163c68: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163c6c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163c6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163c70: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163c70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163c74: 0x4a0003bf  vwaitq
    ctx->pc = 0x163c74u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163c78: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x163c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163c7c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x163c7cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x163c80: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x163c80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163c84: 0x4a0003bf  vwaitq
    ctx->pc = 0x163c84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163c88: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x163c88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163c8c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x163c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x163c90: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x163c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x163c94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x163c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c9c: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x163C9Cu;
    SET_GPR_U32(ctx, 31, 0x163CA4u);
    ctx->pc = 0x163CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C9Cu;
    // 0x163ca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x163C9Cu, 0x163CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CA4u;
label_163ca4:
    // 0x163ca4: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x163ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163ca8: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x163ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x163cac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163cb4: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x163CB4u;
    {
        const bool branch_taken_0x163cb4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x163CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CB4u;
        // 0x163cb8: 0xc4440000  lwc1        $f4, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cb4) {
            ctx->pc = 0x163CD8u;
            goto label_163cd8;
        }
    }
    ctx->pc = 0x163CBCu;
    // 0x163cbc: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x163cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163cc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163cc8: 0x0  nop
    ctx->pc = 0x163cc8u;
    // NOP
    // 0x163ccc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x163cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x163cd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163CD0u;
    {
        const bool branch_taken_0x163cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CD0u;
        // 0x163cd4: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cd0) {
            ctx->pc = 0x163CE0u;
            goto label_163ce0;
        }
    }
    ctx->pc = 0x163CD8u;
label_163cd8:
    // 0x163cd8: 0xc6600344  lwc1        $f0, 0x344($s3)
    ctx->pc = 0x163cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163cdc: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x163cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_163ce0:
    // 0x163ce0: 0xc66202f0  lwc1        $f2, 0x2F0($s3)
    ctx->pc = 0x163ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163ce4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x163ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163ce8: 0x0  nop
    ctx->pc = 0x163ce8u;
    // NOP
    // 0x163cec: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
    ctx->pc = 0x163CECu;
    {
        const bool branch_taken_0x163cec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163cec) {
            ctx->pc = 0x163F58u;
            goto label_163f58;
        }
    }
    ctx->pc = 0x163CF4u;
    // 0x163cf4: 0x1a400036  blez        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x163CF4u;
    {
        const bool branch_taken_0x163cf4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x163cf4) {
            ctx->pc = 0x163DD0u;
            goto label_163dd0;
        }
    }
    ctx->pc = 0x163CFCu;
    // 0x163cfc: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x163cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163d00: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x163d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x163d04: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x163d04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163d08: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x163D08u;
    {
        const bool branch_taken_0x163d08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D08u;
        // 0x163d0c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d08) {
            ctx->pc = 0x163DBCu;
            goto label_163dbc;
        }
    }
    ctx->pc = 0x163D10u;
    // 0x163d10: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x163d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x163d14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x163d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x163d18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163d1c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x163d1cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163d20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x163d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x163d24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x163d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163d28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x163d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x163d2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163d30: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x163d30u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163d34: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x163d34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163d38: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x163d38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163d3c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x163d3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x163d40: 0x0  nop
    ctx->pc = 0x163d40u;
    // NOP
    // 0x163d44: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x163d44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x163d48: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x163d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x163d4c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x163d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x163d50: 0x26650290  addiu       $a1, $s3, 0x290
    ctx->pc = 0x163d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x163d54: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x163d54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163d58: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x163d58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163d5c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x163d5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d60: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d64: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d68: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x163d68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163d6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x163d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163d70: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x163d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x163d74: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163d80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x163d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163d84: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x163d84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x163d88: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x163d88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163d8c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x163d8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d90: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d94: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163d98: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163d98u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163d9c: 0x4a0003bf  vwaitq
    ctx->pc = 0x163d9cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163da0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x163da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163da4: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x163da4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x163da8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x163da8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163dac: 0x4a0003bf  vwaitq
    ctx->pc = 0x163dacu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163db0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x163db0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163db4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x163DB4u;
    {
        const bool branch_taken_0x163db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DB4u;
        // 0x163db8: 0xf8a60000  sqc2        $vf6, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163db4) {
            ctx->pc = 0x163E90u;
            goto label_163e90;
        }
    }
    ctx->pc = 0x163DBCu;
label_163dbc:
    // 0x163dbc: 0x0  nop
    ctx->pc = 0x163dbcu;
    // NOP
    // 0x163dc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163dc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x163dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163dc8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x163DC8u;
    {
        const bool branch_taken_0x163dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163dc8) {
            ctx->pc = 0x163E90u;
            goto label_163e90;
        }
    }
    ctx->pc = 0x163DD0u;
label_163dd0:
    // 0x163dd0: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163dd4: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x163DD4u;
    {
        const bool branch_taken_0x163dd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x163DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DD4u;
        // 0x163dd8: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dd4) {
            ctx->pc = 0x163E84u;
            goto label_163e84;
        }
    }
    ctx->pc = 0x163DDCu;
    // 0x163ddc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x163ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x163de0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163de4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x163de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x163de8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x163de8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163dec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x163decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163df0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x163df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x163df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163df8: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x163df8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163dfc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x163dfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163e00: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x163e00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163e04: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x163e04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x163e08: 0x0  nop
    ctx->pc = 0x163e08u;
    // NOP
    // 0x163e0c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x163e0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x163e10: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x163e10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x163e14: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x163e14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x163e18: 0x26650290  addiu       $a1, $s3, 0x290
    ctx->pc = 0x163e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x163e1c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x163e1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163e20: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x163e20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163e24: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x163e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e28: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e2c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e30: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x163e30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163e34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x163e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163e38: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x163e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x163e3c: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163e40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163e44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163e48: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x163e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e4c: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x163e4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x163e50: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x163e50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163e54: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x163e54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e58: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163e58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e5c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163e5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e60: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163e60u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163e64: 0x4a0003bf  vwaitq
    ctx->pc = 0x163e64u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163e68: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x163e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e6c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x163e6cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x163e70: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x163e70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163e74: 0x4a0003bf  vwaitq
    ctx->pc = 0x163e74u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163e78: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x163e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163e7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x163E7Cu;
    {
        const bool branch_taken_0x163e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E7Cu;
        // 0x163e80: 0xf8a60000  sqc2        $vf6, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e7c) {
            ctx->pc = 0x163E90u;
            goto label_163e90;
        }
    }
    ctx->pc = 0x163E84u;
label_163e84:
    // 0x163e84: 0x0  nop
    ctx->pc = 0x163e84u;
    // NOP
    // 0x163e88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163e8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x163e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_163e90:
    // 0x163e90: 0x86820218  lh          $v0, 0x218($s4)
    ctx->pc = 0x163e90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x163e94: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x163e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x163e98: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x163e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e9c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x163e9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x163ea0: 0x0  nop
    ctx->pc = 0x163ea0u;
    // NOP
    // 0x163ea4: 0x0  nop
    ctx->pc = 0x163ea4u;
    // NOP
    // 0x163ea8: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x163EA8u;
    {
        const bool branch_taken_0x163ea8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x163EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EA8u;
        // 0x163eac: 0xe66002e8  swc1        $f0, 0x2E8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ea8) {
            ctx->pc = 0x163F20u;
            goto label_163f20;
        }
    }
    ctx->pc = 0x163EB0u;
    // 0x163eb0: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163eb4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x163eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x163eb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163ec4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163ec8: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x163EC8u;
    SET_GPR_U32(ctx, 31, 0x163ED0u);
    ctx->pc = 0x163ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163EC8u;
    // 0x163ecc: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x163EC8u, 0x163ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163ED0u;
label_163ed0:
    // 0x163ed0: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x163ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163ed4: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x163ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x163ed8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x163ed8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163edc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x163EDCu;
    {
        const bool branch_taken_0x163edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EDCu;
        // 0x163ee0: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163edc) {
            ctx->pc = 0x163EF0u;
            goto label_163ef0;
        }
    }
    ctx->pc = 0x163EE4u;
    // 0x163ee4: 0xae620340  sw          $v0, 0x340($s3)
    ctx->pc = 0x163ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 2));
    // 0x163ee8: 0x1000ff6e  b           . + 4 + (-0x92 << 2)
    ctx->pc = 0x163EE8u;
    {
        const bool branch_taken_0x163ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE8u;
        // 0x163eec: 0xae600344  sw          $zero, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ee8) {
            ctx->pc = 0x163CA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163ca4;
        }
    }
    ctx->pc = 0x163EF0u;
label_163ef0:
    // 0x163ef0: 0x8683021a  lh          $v1, 0x21A($s4)
    ctx->pc = 0x163ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 538)));
    // 0x163ef4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x163ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x163ef8: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x163EF8u;
    {
        const bool branch_taken_0x163ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EF8u;
        // 0x163efc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ef8) {
            ctx->pc = 0x164010u;
            goto label_164010;
        }
    }
    ctx->pc = 0x163F00u;
    // 0x163f00: 0xc055c40  jal         func_157100
    ctx->pc = 0x163F00u;
    SET_GPR_U32(ctx, 31, 0x163F08u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x163F00u, 0x163F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F08u;
label_163f08:
    // 0x163f08: 0x2623fffe  addiu       $v1, $s1, -0x2
    ctx->pc = 0x163f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x163f0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163f10: 0xae630340  sw          $v1, 0x340($s3)
    ctx->pc = 0x163f10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 3));
    // 0x163f14: 0x129023  negu        $s2, $s2
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x163f18: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x163F18u;
    {
        const bool branch_taken_0x163f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F18u;
        // 0x163f1c: 0xae620344  sw          $v0, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f18) {
            ctx->pc = 0x164010u;
            goto label_164010;
        }
    }
    ctx->pc = 0x163F20u;
label_163f20:
    // 0x163f20: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163f24: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x163f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x163f28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163f34: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x163F34u;
    SET_GPR_U32(ctx, 31, 0x163F3Cu);
    ctx->pc = 0x163F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163F34u;
    // 0x163f38: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x163F34u, 0x163F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F3Cu;
label_163f3c:
    // 0x163f3c: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163f40: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x163F40u;
    {
        const bool branch_taken_0x163f40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F40u;
        // 0x163f44: 0x521821  addu        $v1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f40) {
            ctx->pc = 0x164010u;
            goto label_164010;
        }
    }
    ctx->pc = 0x163F48u;
    // 0x163f48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163f4c: 0xae630340  sw          $v1, 0x340($s3)
    ctx->pc = 0x163f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 3));
    // 0x163f50: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x163F50u;
    {
        const bool branch_taken_0x163f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F50u;
        // 0x163f54: 0xae620344  sw          $v0, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f50) {
            ctx->pc = 0x163CA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163ca4;
        }
    }
    ctx->pc = 0x163F58u;
label_163f58:
    // 0x163f58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x163f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x163f5c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x163f5cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163f60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x163f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f64: 0xc6600344  lwc1        $f0, 0x344($s3)
    ctx->pc = 0x163f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f68: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x163f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x163f6c: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x163f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x163f70: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x163f70u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x163f74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163f78: 0xe6600344  swc1        $f0, 0x344($s3)
    ctx->pc = 0x163f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 836), bits); }
    // 0x163f7c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x163f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f80: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x163f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163f84: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x163f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f88: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x163f88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x163f8c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x163f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x163f90: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x163f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x163f94: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x163f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163f9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163fa0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x163fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x163fa4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x163fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fa8: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x163fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163fac: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x163facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163fb0: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x163fb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x163fb4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x163fb8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x163fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x163fbc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x163fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163fc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163fc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163fc8: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x163fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x163fcc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x163fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fd0: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x163fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163fd4: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x163fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163fd8: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x163fd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x163fdc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x163fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x163fe0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x163fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x163fe4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x163fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fe8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163fe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163fec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163ff0: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x163ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x163ff4: 0xae600280  sw          $zero, 0x280($s3)
    ctx->pc = 0x163ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 0));
    // 0x163ff8: 0xae630334  sw          $v1, 0x334($s3)
    ctx->pc = 0x163ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 820), GPR_U32(ctx, 3));
    // 0x163ffc: 0xae6002f0  sw          $zero, 0x2F0($s3)
    ctx->pc = 0x163ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 752), GPR_U32(ctx, 0));
    // 0x164000: 0xae600308  sw          $zero, 0x308($s3)
    ctx->pc = 0x164000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 776), GPR_U32(ctx, 0));
    // 0x164004: 0xae600304  sw          $zero, 0x304($s3)
    ctx->pc = 0x164004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 772), GPR_U32(ctx, 0));
    // 0x164008: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164008u;
    {
        const bool branch_taken_0x164008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164008u;
        // 0x16400c: 0xae600300  sw          $zero, 0x300($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164008) {
            ctx->pc = 0x16401Cu;
            goto label_16401c;
        }
    }
    ctx->pc = 0x164010u;
label_164010:
    // 0x164010: 0xc055dd8  jal         func_157760
    ctx->pc = 0x164010u;
    SET_GPR_U32(ctx, 31, 0x164018u);
    ctx->pc = 0x164014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164010u;
    // 0x164014: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x164010u, 0x164018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164018u;
label_164018:
    // 0x164018: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x164018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_16401c:
    // 0x16401c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16401cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x164020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x164024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16402c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16402cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164034: 0x3e00008  jr          $ra
    ctx->pc = 0x164034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164034u;
        // 0x164038: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16403Cu;
}
