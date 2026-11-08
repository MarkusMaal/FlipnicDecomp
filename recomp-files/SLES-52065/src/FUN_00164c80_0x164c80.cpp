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

// Function: FUN_00164c80
// Address: 0x164c80 - 0x165328
void FUN_00164c80_0x164c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164c80_0x164c80");
#endif

    switch (ctx->pc) {
        case 0x164cccu: goto label_164ccc;
        case 0x164f00u: goto label_164f00;
        case 0x164f28u: goto label_164f28;
        case 0x164f84u: goto label_164f84;
        case 0x1651dcu: goto label_1651dc;
        case 0x165220u: goto label_165220;
        case 0x165300u: goto label_165300;
        default: break;
    }

    ctx->pc = 0x164c80u;

    // 0x164c80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x164c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x164c84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x164c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x164c88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x164c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x164c8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x164c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x164c90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x164c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x164c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x164c98: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x164c98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x164c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x164ca0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x164ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164ca4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x164ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x164ca8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x164ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x164cac: 0xc4a10348  lwc1        $f1, 0x348($a1)
    ctx->pc = 0x164cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164cb0: 0x8c9001f0  lw          $s0, 0x1F0($a0)
    ctx->pc = 0x164cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x164cb4: 0xc4800228  lwc1        $f0, 0x228($a0)
    ctx->pc = 0x164cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164cb8: 0x849101f4  lh          $s1, 0x1F4($a0)
    ctx->pc = 0x164cb8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x164cbc: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x164cbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x164cc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x164cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164cc4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x164cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x164cc8: 0x26650300  addiu       $a1, $s3, 0x300
    ctx->pc = 0x164cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_164ccc:
    // 0x164ccc: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x164cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x164cd0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x164cd0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164cd4: 0x0  nop
    ctx->pc = 0x164cd4u;
    // NOP
    // 0x164cd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x164cd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x164cdc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x164cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164ce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164ce4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x164ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x164ce8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x164ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164cec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x164cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x164cf0: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x164cf0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164cf4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x164cf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164cf8: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x164cf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164cfc: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x164cfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x164d00: 0x0  nop
    ctx->pc = 0x164d00u;
    // NOP
    // 0x164d04: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x164d04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x164d08: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x164d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164d0c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x164d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164d10: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x164d10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x164d14: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x164d14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164d18: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x164d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164d1c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x164d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164d20: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x164d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164d24: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164d24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164d28: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x164d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x164d2c: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x164d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x164d30: 0xc66202f0  lwc1        $f2, 0x2F0($s3)
    ctx->pc = 0x164d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164d34: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x164d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x164d38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164d40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x164d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164d44: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x164d44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x164d48: 0x46012503  div.s       $f20, $f4, $f1
    ctx->pc = 0x164d48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x164d4c: 0x0  nop
    ctx->pc = 0x164d4cu;
    // NOP
    // 0x164d50: 0x0  nop
    ctx->pc = 0x164d50u;
    // NOP
    // 0x164d54: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x164d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164d58: 0x0  nop
    ctx->pc = 0x164d58u;
    // NOP
    // 0x164d5c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x164D5Cu;
    {
        const bool branch_taken_0x164d5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164d5c) {
            ctx->pc = 0x164D6Cu;
            goto label_164d6c;
        }
    }
    ctx->pc = 0x164D64u;
    // 0x164d64: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x164D64u;
    {
        const bool branch_taken_0x164d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D64u;
        // 0x164d68: 0x129023  negu        $s2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d64) {
            ctx->pc = 0x164CCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164ccc;
        }
    }
    ctx->pc = 0x164D6Cu;
label_164d6c:
    // 0x164d6c: 0x0  nop
    ctx->pc = 0x164d6cu;
    // NOP
    // 0x164d70: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x164d70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x164d74: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x164d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x164d78: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x164D78u;
    {
        const bool branch_taken_0x164d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D78u;
        // 0x164d7c: 0x2861000d  slti        $at, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d78) {
            ctx->pc = 0x164DE8u;
            goto label_164de8;
        }
    }
    ctx->pc = 0x164D80u;
    // 0x164d80: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x164D80u;
    {
        const bool branch_taken_0x164d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D80u;
        // 0x164d84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d80) {
            ctx->pc = 0x164DE8u;
            goto label_164de8;
        }
    }
    ctx->pc = 0x164D88u;
    // 0x164d88: 0x16430017  bne         $s2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x164D88u;
    {
        const bool branch_taken_0x164d88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x164d88) {
            ctx->pc = 0x164DE8u;
            goto label_164de8;
        }
    }
    ctx->pc = 0x164D90u;
    // 0x164d90: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x164d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x164d94: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x164d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164d98: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x164d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164d9c: 0x0  nop
    ctx->pc = 0x164d9cu;
    // NOP
    // 0x164da0: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x164DA0u;
    {
        const bool branch_taken_0x164da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164da0) {
            ctx->pc = 0x164DE8u;
            goto label_164de8;
        }
    }
    ctx->pc = 0x164DA8u;
    // 0x164da8: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x164da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164dac: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x164dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164db0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164db4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x164db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164db8: 0x0  nop
    ctx->pc = 0x164db8u;
    // NOP
    // 0x164dbc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x164DBCu;
    {
        const bool branch_taken_0x164dbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164dbc) {
            ctx->pc = 0x164DE8u;
            goto label_164de8;
        }
    }
    ctx->pc = 0x164DC4u;
    // 0x164dc4: 0x8e620350  lw          $v0, 0x350($s3)
    ctx->pc = 0x164dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
    // 0x164dc8: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x164DC8u;
    {
        const bool branch_taken_0x164dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x164dc8) {
            ctx->pc = 0x164DD4u;
            goto label_164dd4;
        }
    }
    ctx->pc = 0x164DD0u;
    // 0x164dd0: 0xe6620354  swc1        $f2, 0x354($s3)
    ctx->pc = 0x164dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 852), bits); }
label_164dd4:
    // 0x164dd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x164dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x164dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164ddc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x164ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x164de0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164DE0u;
    {
        const bool branch_taken_0x164de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DE0u;
        // 0x164de4: 0xae620350  sw          $v0, 0x350($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164de0) {
            ctx->pc = 0x164E04u;
            goto label_164e04;
        }
    }
    ctx->pc = 0x164DE8u;
label_164de8:
    // 0x164de8: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x164de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x164dec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164df0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164DF0u;
    {
        const bool branch_taken_0x164df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DF0u;
        // 0x164df4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164df0) {
            ctx->pc = 0x164E04u;
            goto label_164e04;
        }
    }
    ctx->pc = 0x164DF8u;
    // 0x164df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164dfc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x164dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x164e00: 0xae620350  sw          $v0, 0x350($s3)
    ctx->pc = 0x164e00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 848), GPR_U32(ctx, 2));
label_164e04:
    // 0x164e04: 0x8e630350  lw          $v1, 0x350($s3)
    ctx->pc = 0x164e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
    // 0x164e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e0c: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x164E0Cu;
    {
        const bool branch_taken_0x164e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E0Cu;
        // 0x164e10: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e0c) {
            ctx->pc = 0x164F38u;
            goto label_164f38;
        }
    }
    ctx->pc = 0x164E14u;
    // 0x164e14: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x164e14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x164e18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x164e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164e1c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164E1Cu;
    {
        const bool branch_taken_0x164e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E1Cu;
        // 0x164e20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e1c) {
            ctx->pc = 0x164E3Cu;
            goto label_164e3c;
        }
    }
    ctx->pc = 0x164E24u;
    // 0x164e24: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x164e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x164e28: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x164e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164e2c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x164e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164e30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164e34: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x164E34u;
    {
        const bool branch_taken_0x164e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E34u;
        // 0x164e38: 0xe66002f0  swc1        $f0, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e34) {
            ctx->pc = 0x164EACu;
            goto label_164eac;
        }
    }
    ctx->pc = 0x164E3Cu;
label_164e3c:
    // 0x164e3c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164E3Cu;
    {
        const bool branch_taken_0x164e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164e3c) {
            ctx->pc = 0x164E70u;
            goto label_164e70;
        }
    }
    ctx->pc = 0x164E44u;
    // 0x164e44: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x164e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x164e48: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x164e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164e4c: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x164e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164e50: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x164e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164e54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x164e54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x164e58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x164e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164e5c: 0x0  nop
    ctx->pc = 0x164e5cu;
    // NOP
    // 0x164e60: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x164E60u;
    {
        const bool branch_taken_0x164e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164e60) {
            ctx->pc = 0x164EACu;
            goto label_164eac;
        }
    }
    ctx->pc = 0x164E68u;
    // 0x164e68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x164E68u;
    {
        const bool branch_taken_0x164e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E68u;
        // 0x164e6c: 0xe66102f0  swc1        $f1, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e68) {
            ctx->pc = 0x164EACu;
            goto label_164eac;
        }
    }
    ctx->pc = 0x164E70u;
label_164e70:
    // 0x164e70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x164e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164e74: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164E74u;
    {
        const bool branch_taken_0x164e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E74u;
        // 0x164e78: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e74) {
            ctx->pc = 0x164E88u;
            goto label_164e88;
        }
    }
    ctx->pc = 0x164E7Cu;
    // 0x164e7c: 0xc6600354  lwc1        $f0, 0x354($s3)
    ctx->pc = 0x164e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164e80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164E80u;
    {
        const bool branch_taken_0x164e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E80u;
        // 0x164e84: 0xe66002f0  swc1        $f0, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e80) {
            ctx->pc = 0x164EACu;
            goto label_164eac;
        }
    }
    ctx->pc = 0x164E88u;
label_164e88:
    // 0x164e88: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164E88u;
    {
        const bool branch_taken_0x164e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164e88) {
            ctx->pc = 0x164EACu;
            goto label_164eac;
        }
    }
    ctx->pc = 0x164E90u;
    // 0x164e90: 0xc66102f0  lwc1        $f1, 0x2F0($s3)
    ctx->pc = 0x164e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164e94: 0xc6600354  lwc1        $f0, 0x354($s3)
    ctx->pc = 0x164e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164e98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164e9c: 0x0  nop
    ctx->pc = 0x164e9cu;
    // NOP
    // 0x164ea0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x164EA0u;
    {
        const bool branch_taken_0x164ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164ea0) {
            ctx->pc = 0x164EACu;
            goto label_164eac;
        }
    }
    ctx->pc = 0x164EA8u;
    // 0x164ea8: 0xe66002f0  swc1        $f0, 0x2F0($s3)
    ctx->pc = 0x164ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
label_164eac:
    // 0x164eac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x164eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x164eb0: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x164eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x164eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164eb8: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x164eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164ebc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x164ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x164ec0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x164ec0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164ec4: 0x0  nop
    ctx->pc = 0x164ec4u;
    // NOP
    // 0x164ec8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x164EC8u;
    {
        const bool branch_taken_0x164ec8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164ec8) {
            ctx->pc = 0x164EE8u;
            goto label_164ee8;
        }
    }
    ctx->pc = 0x164ED0u;
    // 0x164ed0: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x164ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164ed4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x164ed4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164ed8: 0x0  nop
    ctx->pc = 0x164ed8u;
    // NOP
    // 0x164edc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x164EDCu;
    {
        const bool branch_taken_0x164edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164edc) {
            ctx->pc = 0x164EE8u;
            goto label_164ee8;
        }
    }
    ctx->pc = 0x164EE4u;
    // 0x164ee4: 0xe66102f0  swc1        $f1, 0x2F0($s3)
    ctx->pc = 0x164ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
label_164ee8:
    // 0x164ee8: 0xc66c0348  lwc1        $f12, 0x348($s3)
    ctx->pc = 0x164ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x164eec: 0x8e840248  lw          $a0, 0x248($s4)
    ctx->pc = 0x164eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 584)));
    // 0x164ef0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x164ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x164ef4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x164ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x164ef8: 0xc054888  jal         func_152220
    ctx->pc = 0x164EF8u;
    SET_GPR_U32(ctx, 31, 0x164F00u);
    ctx->pc = 0x164EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164EF8u;
    // 0x164efc: 0x8685024c  lh          $a1, 0x24C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152220u, 0x164EF8u, 0x164F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F00u;
label_164f00:
    // 0x164f00: 0x8685024c  lh          $a1, 0x24C($s4)
    ctx->pc = 0x164f00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 588)));
    // 0x164f04: 0x8e840244  lw          $a0, 0x244($s4)
    ctx->pc = 0x164f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 580)));
    // 0x164f08: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x164f08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164f0c: 0x0  nop
    ctx->pc = 0x164f0cu;
    // NOP
    // 0x164f10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x164f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x164f14: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x164f14u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x164f18: 0x0  nop
    ctx->pc = 0x164f18u;
    // NOP
    // 0x164f1c: 0x0  nop
    ctx->pc = 0x164f1cu;
    // NOP
    // 0x164f20: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x164F20u;
    SET_GPR_U32(ctx, 31, 0x164F28u);
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x164F20u, 0x164F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F28u;
label_164f28:
    // 0x164f28: 0xc681022c  lwc1        $f1, 0x22C($s4)
    ctx->pc = 0x164f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164f2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164f30: 0xe66002f0  swc1        $f0, 0x2F0($s3)
    ctx->pc = 0x164f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
    // 0x164f34: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x164f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_164f38:
    // 0x164f38: 0x26630290  addiu       $v1, $s3, 0x290
    ctx->pc = 0x164f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x164f3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164f3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164f40: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x164f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164f44: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x164f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164f48: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x164f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164f4c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x164f4cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x164f50: 0x4a0003bf  vwaitq
    ctx->pc = 0x164f50u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x164f54: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x164f54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164f58: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x164f58u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x164f5c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x164f5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164f60: 0x4a0003bf  vwaitq
    ctx->pc = 0x164f60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x164f64: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x164f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164f68: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x164f68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x164f6c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x164f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x164f70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x164f70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x164f74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x164f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f7c: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x164F7Cu;
    SET_GPR_U32(ctx, 31, 0x164F84u);
    ctx->pc = 0x164F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F7Cu;
    // 0x164f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x164F7Cu, 0x164F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F84u;
label_164f84:
    // 0x164f84: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x164f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x164f88: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x164f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x164f8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164f90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164f94: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x164F94u;
    {
        const bool branch_taken_0x164f94 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x164F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F94u;
        // 0x164f98: 0xc4440000  lwc1        $f4, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f94) {
            ctx->pc = 0x164FB8u;
            goto label_164fb8;
        }
    }
    ctx->pc = 0x164F9Cu;
    // 0x164f9c: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x164f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x164fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x164fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164fa8: 0x0  nop
    ctx->pc = 0x164fa8u;
    // NOP
    // 0x164fac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x164facu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x164fb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164FB0u;
    {
        const bool branch_taken_0x164fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FB0u;
        // 0x164fb4: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fb0) {
            ctx->pc = 0x164FC0u;
            goto label_164fc0;
        }
    }
    ctx->pc = 0x164FB8u;
label_164fb8:
    // 0x164fb8: 0xc6600344  lwc1        $f0, 0x344($s3)
    ctx->pc = 0x164fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164fbc: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x164fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_164fc0:
    // 0x164fc0: 0xc66202f0  lwc1        $f2, 0x2F0($s3)
    ctx->pc = 0x164fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164fc4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x164fc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164fc8: 0x0  nop
    ctx->pc = 0x164fc8u;
    // NOP
    // 0x164fcc: 0x4501009b  bc1t        . + 4 + (0x9B << 2)
    ctx->pc = 0x164FCCu;
    {
        const bool branch_taken_0x164fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164fcc) {
            ctx->pc = 0x16523Cu;
            goto label_16523c;
        }
    }
    ctx->pc = 0x164FD4u;
    // 0x164fd4: 0x1a400036  blez        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x164FD4u;
    {
        const bool branch_taken_0x164fd4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x164fd4) {
            ctx->pc = 0x1650B0u;
            goto label_1650b0;
        }
    }
    ctx->pc = 0x164FDCu;
    // 0x164fdc: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x164fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x164fe0: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x164fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x164fe4: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x164fe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164fe8: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x164FE8u;
    {
        const bool branch_taken_0x164fe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FE8u;
        // 0x164fec: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fe8) {
            ctx->pc = 0x16509Cu;
            goto label_16509c;
        }
    }
    ctx->pc = 0x164FF0u;
    // 0x164ff0: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x164ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x164ff4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x164ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x164ff8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x164ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164ffc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x164ffcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165000: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x165000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x165004: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x165004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x165008: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x165008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16500c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16500cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x165010: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x165010u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165014: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x165014u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165018: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x165018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16501c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16501cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x165020: 0x0  nop
    ctx->pc = 0x165020u;
    // NOP
    // 0x165024: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x165024u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x165028: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x165028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16502c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16502cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x165030: 0x26650290  addiu       $a1, $s3, 0x290
    ctx->pc = 0x165030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x165034: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x165034u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165038: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x165038u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16503c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x16503cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165040: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x165040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165044: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x165044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165048: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x165048u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16504c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16504cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x165050: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x165050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x165054: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x165054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x165058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16505c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165060: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x165060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165064: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x165064u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x165068: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x165068u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16506c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16506cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165070: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x165070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165074: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x165074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165078: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x165078u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16507c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16507cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x165080: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x165080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165084: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x165084u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x165088: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x165088u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16508c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16508cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x165090: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x165090u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165094: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x165094u;
    {
        const bool branch_taken_0x165094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165094u;
        // 0x165098: 0xf8a60000  sqc2        $vf6, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165094) {
            ctx->pc = 0x165170u;
            goto label_165170;
        }
    }
    ctx->pc = 0x16509Cu;
label_16509c:
    // 0x16509c: 0x0  nop
    ctx->pc = 0x16509cu;
    // NOP
    // 0x1650a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1650a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1650a4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1650a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1650a8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1650A8u;
    {
        const bool branch_taken_0x1650a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650a8) {
            ctx->pc = 0x165170u;
            goto label_165170;
        }
    }
    ctx->pc = 0x1650B0u;
label_1650b0:
    // 0x1650b0: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x1650b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x1650b4: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1650B4u;
    {
        const bool branch_taken_0x1650b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1650B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650B4u;
        // 0x1650b8: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650b4) {
            ctx->pc = 0x165164u;
            goto label_165164;
        }
    }
    ctx->pc = 0x1650BCu;
    // 0x1650bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1650bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1650c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1650c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1650c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1650c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1650c8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1650c8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1650cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1650ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1650d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1650d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1650d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1650d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1650d8: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1650d8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1650dc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1650dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1650e0: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x1650e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1650e4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1650e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1650e8: 0x0  nop
    ctx->pc = 0x1650e8u;
    // NOP
    // 0x1650ec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1650ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1650f0: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x1650f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1650f4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1650f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1650f8: 0x26650290  addiu       $a1, $s3, 0x290
    ctx->pc = 0x1650f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x1650fc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1650fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165100: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x165100u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x165104: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x165104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165108: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x165108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16510c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16510cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165110: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x165110u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x165114: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x165114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x165118: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x165118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x16511c: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x16511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x165120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165128: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x165128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16512c: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x16512cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x165130: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x165130u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x165134: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x165134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165138: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x165138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16513c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16513cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165140: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x165140u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x165144: 0x4a0003bf  vwaitq
    ctx->pc = 0x165144u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x165148: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x165148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16514c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16514cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x165150: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x165150u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165154: 0x4a0003bf  vwaitq
    ctx->pc = 0x165154u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x165158: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x165158u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16515c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16515Cu;
    {
        const bool branch_taken_0x16515c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16515Cu;
        // 0x165160: 0xf8a60000  sqc2        $vf6, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16515c) {
            ctx->pc = 0x165170u;
            goto label_165170;
        }
    }
    ctx->pc = 0x165164u;
label_165164:
    // 0x165164: 0x0  nop
    ctx->pc = 0x165164u;
    // NOP
    // 0x165168: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x165168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16516c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x16516cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_165170:
    // 0x165170: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x165170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x165174: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x165174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x165178: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x165178u;
    {
        const bool branch_taken_0x165178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165178u;
        // 0x16517c: 0x2861000d  slti        $at, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165178) {
            ctx->pc = 0x16519Cu;
            goto label_16519c;
        }
    }
    ctx->pc = 0x165180u;
    // 0x165180: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x165180u;
    {
        const bool branch_taken_0x165180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x165180) {
            ctx->pc = 0x16519Cu;
            goto label_16519c;
        }
    }
    ctx->pc = 0x165188u;
    // 0x165188: 0x8e630350  lw          $v1, 0x350($s3)
    ctx->pc = 0x165188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
    // 0x16518c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165190: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x165190u;
    {
        const bool branch_taken_0x165190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x165194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165190u;
        // 0x165194: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165190) {
            ctx->pc = 0x16519Cu;
            goto label_16519c;
        }
    }
    ctx->pc = 0x165198u;
    // 0x165198: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x165198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16519c:
    // 0x16519c: 0x0  nop
    ctx->pc = 0x16519cu;
    // NOP
    // 0x1651a0: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x1651a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1651a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1651a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1651a8: 0x0  nop
    ctx->pc = 0x1651a8u;
    // NOP
    // 0x1651ac: 0x0  nop
    ctx->pc = 0x1651acu;
    // NOP
    // 0x1651b0: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1651B0u;
    {
        const bool branch_taken_0x1651b0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1651B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651B0u;
        // 0x1651b4: 0xe66002e8  swc1        $f0, 0x2E8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651b0) {
            ctx->pc = 0x1651FCu;
            goto label_1651fc;
        }
    }
    ctx->pc = 0x1651B8u;
    // 0x1651b8: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x1651b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x1651bc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1651bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1651c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1651c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1651c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1651c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1651c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1651ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1651d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1651d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1651d4: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x1651D4u;
    SET_GPR_U32(ctx, 31, 0x1651DCu);
    ctx->pc = 0x1651D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1651D4u;
    // 0x1651d8: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x1651D4u, 0x1651DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1651DCu;
label_1651dc:
    // 0x1651dc: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x1651dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x1651e0: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x1651e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x1651e4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1651e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1651e8: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x1651E8u;
    {
        const bool branch_taken_0x1651e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651E8u;
        // 0x1651ec: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651e8) {
            ctx->pc = 0x1652F8u;
            goto label_1652f8;
        }
    }
    ctx->pc = 0x1651F0u;
    // 0x1651f0: 0xae620340  sw          $v0, 0x340($s3)
    ctx->pc = 0x1651f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 2));
    // 0x1651f4: 0x1000ff63  b           . + 4 + (-0x9D << 2)
    ctx->pc = 0x1651F4u;
    {
        const bool branch_taken_0x1651f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651F4u;
        // 0x1651f8: 0xae600344  sw          $zero, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651f4) {
            ctx->pc = 0x164F84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164f84;
        }
    }
    ctx->pc = 0x1651FCu;
label_1651fc:
    // 0x1651fc: 0x0  nop
    ctx->pc = 0x1651fcu;
    // NOP
    // 0x165200: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x165200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x165204: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x165204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x165208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x165208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16520c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16520cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x165210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165214: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165218: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x165218u;
    SET_GPR_U32(ctx, 31, 0x165220u);
    ctx->pc = 0x16521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165218u;
    // 0x16521c: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x165218u, 0x165220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165220u;
label_165220:
    // 0x165220: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x165220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x165224: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x165224u;
    {
        const bool branch_taken_0x165224 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x165228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165224u;
        // 0x165228: 0x521821  addu        $v1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165224) {
            ctx->pc = 0x1652F8u;
            goto label_1652f8;
        }
    }
    ctx->pc = 0x16522Cu;
    // 0x16522c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x165230: 0xae630340  sw          $v1, 0x340($s3)
    ctx->pc = 0x165230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 3));
    // 0x165234: 0x1000ff53  b           . + 4 + (-0xAD << 2)
    ctx->pc = 0x165234u;
    {
        const bool branch_taken_0x165234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165234u;
        // 0x165238: 0xae620344  sw          $v0, 0x344($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165234) {
            ctx->pc = 0x164F84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164f84;
        }
    }
    ctx->pc = 0x16523Cu;
label_16523c:
    // 0x16523c: 0x0  nop
    ctx->pc = 0x16523cu;
    // NOP
    // 0x165240: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x165240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x165244: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x165244u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165248: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x165248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16524c: 0xc6600344  lwc1        $f0, 0x344($s3)
    ctx->pc = 0x16524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165250: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x165250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x165254: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x165254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x165258: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x165258u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x16525c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16525cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x165260: 0xe6600344  swc1        $f0, 0x344($s3)
    ctx->pc = 0x165260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 836), bits); }
    // 0x165264: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x165264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165268: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x165268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x16526c: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x16526cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165270: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x165270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x165274: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x165274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x165278: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x165278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x16527c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x16527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165280: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x165280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x165284: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x165284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x165288: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x165288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x16528c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x16528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165290: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x165290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x165294: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x165294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165298: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x165298u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x16529c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16529cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1652a0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1652a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1652a4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1652a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1652a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1652a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1652ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1652acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1652b0: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1652b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1652b4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1652b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1652b8: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x1652b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x1652bc: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x1652bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1652c0: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x1652c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1652c4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1652c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1652c8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1652c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1652cc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1652ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1652d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1652d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1652d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1652d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1652d8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1652d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1652dc: 0xae600280  sw          $zero, 0x280($s3)
    ctx->pc = 0x1652dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 0));
    // 0x1652e0: 0xae630334  sw          $v1, 0x334($s3)
    ctx->pc = 0x1652e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 820), GPR_U32(ctx, 3));
    // 0x1652e4: 0xae6002f0  sw          $zero, 0x2F0($s3)
    ctx->pc = 0x1652e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 752), GPR_U32(ctx, 0));
    // 0x1652e8: 0xae600308  sw          $zero, 0x308($s3)
    ctx->pc = 0x1652e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 776), GPR_U32(ctx, 0));
    // 0x1652ec: 0xae600304  sw          $zero, 0x304($s3)
    ctx->pc = 0x1652ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 772), GPR_U32(ctx, 0));
    // 0x1652f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1652F0u;
    {
        const bool branch_taken_0x1652f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652F0u;
        // 0x1652f4: 0xae600300  sw          $zero, 0x300($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652f0) {
            ctx->pc = 0x165304u;
            goto label_165304;
        }
    }
    ctx->pc = 0x1652F8u;
label_1652f8:
    // 0x1652f8: 0xc055dd8  jal         func_157760
    ctx->pc = 0x1652F8u;
    SET_GPR_U32(ctx, 31, 0x165300u);
    ctx->pc = 0x1652FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652F8u;
    // 0x1652fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x1652F8u, 0x165300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165300u;
label_165300:
    // 0x165300: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x165300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_165304:
    // 0x165304: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x165304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165308: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x165308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16530c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16530cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165310: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x165310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165314: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x165314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165318: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x165318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16531c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16531cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165320: 0x3e00008  jr          $ra
    ctx->pc = 0x165320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165320u;
        // 0x165324: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165328u;
}
