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

// Function: entry_00177b30
// Address: 0x177b30 - 0x177bd0
void entry_00177b30_0x177b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177b30_0x177b30");
#endif

    ctx->pc = 0x177b30u;

    // 0x177b30: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x177b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177b34: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x177b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x177b38: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x177b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x177b3c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x177b3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177b40: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x177b40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177b44: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x177b44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x177b48: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x177b48u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x177b4c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x177b4cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x177b50: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x177b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x177b54: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x177b54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x177b58: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x177b58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x177b5c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x177b5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x177b60: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x177b60u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x177b64: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x177b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177b68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x177b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x177b6c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x177b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x177b70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x177b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177b74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x177b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177b78: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x177b78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177b7c: 0x0  nop
    ctx->pc = 0x177b7cu;
    // NOP
    // 0x177b80: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x177B80u;
    {
        const bool branch_taken_0x177b80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B80u;
        // 0x177b84: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b80) {
            ctx->pc = 0x177BD0u;
            return;
        }
    }
    ctx->pc = 0x177B88u;
    // 0x177b88: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x177b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177b8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177b90: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x177b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177b94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177b94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177b98: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177b9c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x177ba0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x177ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177ba4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x177ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177ba8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177ba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177bac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177bb0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x177bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x177bb4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x177bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177bb8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x177bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177bbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177bc0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177bc4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x177bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x177bc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x177BC8u;
    {
        const bool branch_taken_0x177bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BC8u;
        // 0x177bcc: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bc8) {
            ctx->pc = 0x177BD8u;
            return;
        }
    }
    ctx->pc = 0x177BD0u;
}
