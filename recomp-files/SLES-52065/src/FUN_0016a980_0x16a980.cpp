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

// Function: FUN_0016a980
// Address: 0x16a980 - 0x16aabc
void FUN_0016a980_0x16a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016a980_0x16a980");
#endif

    switch (ctx->pc) {
        case 0x16a9a0u: goto label_16a9a0;
        case 0x16a9c4u: goto label_16a9c4;
        case 0x16a9d8u: goto label_16a9d8;
        case 0x16a9f4u: goto label_16a9f4;
        case 0x16aa00u: goto label_16aa00;
        case 0x16aa78u: goto label_16aa78;
        default: break;
    }

    ctx->pc = 0x16a980u;

    // 0x16a980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16a984: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16a988: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16a98c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16a990: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a998: 0xc0563c0  jal         func_158F00
    ctx->pc = 0x16A998u;
    SET_GPR_U32(ctx, 31, 0x16A9A0u);
    ctx->pc = 0x16A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A998u;
    // 0x16a99c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F00u, 0x16A998u, 0x16A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9A0u;
label_16a9a0:
    // 0x16a9a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a9a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x16a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16a9a8: 0xa2020078  sb          $v0, 0x78($s0)
    ctx->pc = 0x16a9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x16a9ac: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x16a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x16a9b0: 0xa200007a  sb          $zero, 0x7A($s0)
    ctx->pc = 0x16a9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a9b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x16a9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9b8: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x16a9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a9bc: 0xc04af2c  jal         func_12BCB0
    ctx->pc = 0x16A9BCu;
    SET_GPR_U32(ctx, 31, 0x16A9C4u);
    ctx->pc = 0x16A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9BCu;
    // 0x16a9c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BCB0u, 0x16A9BCu, 0x16A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9C4u;
label_16a9c4:
    // 0x16a9c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a9c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a9c8: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x16a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x16a9cc: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x16a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x16a9d0: 0xc04af4c  jal         func_12BD30
    ctx->pc = 0x16A9D0u;
    SET_GPR_U32(ctx, 31, 0x16A9D8u);
    ctx->pc = 0x16A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9D0u;
    // 0x16a9d4: 0xae000238  sw          $zero, 0x238($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD30u, 0x16A9D0u, 0x16A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9D8u;
label_16a9d8:
    // 0x16a9d8: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x16a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x16a9dc: 0xae030240  sw          $v1, 0x240($s0)
    ctx->pc = 0x16a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 3));
    // 0x16a9e0: 0x8251006d  lb          $s1, 0x6D($s2)
    ctx->pc = 0x16a9e0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 109)));
    // 0x16a9e4: 0x620002e  bltz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x16A9E4u;
    {
        const bool branch_taken_0x16a9e4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x16a9e4) {
            ctx->pc = 0x16AAA0u;
            goto label_16aaa0;
        }
    }
    ctx->pc = 0x16A9ECu;
    // 0x16a9ec: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x16A9ECu;
    SET_GPR_U32(ctx, 31, 0x16A9F4u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x16A9ECu, 0x16A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9F4u;
label_16a9f4:
    // 0x16a9f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16a9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9f8: 0xc05fec0  jal         func_17FB00
    ctx->pc = 0x16A9F8u;
    SET_GPR_U32(ctx, 31, 0x16AA00u);
    ctx->pc = 0x16A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9F8u;
    // 0x16a9fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x16A9F8u, 0x16AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA00u;
label_16aa00:
    // 0x16aa00: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x16aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16aa04: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x16aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x16aa08: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x16aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16aa0c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16aa0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16aa10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16aa10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16aa14: 0xc6540074  lwc1        $f20, 0x74($s2)
    ctx->pc = 0x16aa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16aa18: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x16aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16aa1c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x16aa1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16aa20: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16aa20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16aa24: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x16aa24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16aa28: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16aa28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16aa2c: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x16aa2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16aa30: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16aa30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16aa34: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16aa34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16aa38: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16aa38u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16aa3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16aa3cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16aa40: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16aa40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16aa44: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16aa44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16aa48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16aa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16aa4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16aa50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16aa50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16aa54: 0x0  nop
    ctx->pc = 0x16aa54u;
    // NOP
    // 0x16aa58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16aa58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16aa5c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x16aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16aa60: 0xe6000240  swc1        $f0, 0x240($s0)
    ctx->pc = 0x16aa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
    // 0x16aa64: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16aa64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16aa68: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x16aa68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16aa6c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16aa6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16aa70: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x16AA70u;
    SET_GPR_U32(ctx, 31, 0x16AA78u);
    ctx->pc = 0x16AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA70u;
    // 0x16aa74: 0xf8460000  sqc2        $vf6, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16AA70u, 0x16AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA78u;
label_16aa78:
    // 0x16aa78: 0xe600023c  swc1        $f0, 0x23C($s0)
    ctx->pc = 0x16aa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 572), bits); }
    // 0x16aa7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16aa7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16aa80: 0x0  nop
    ctx->pc = 0x16aa80u;
    // NOP
    // 0x16aa84: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16aa84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16aa88: 0x0  nop
    ctx->pc = 0x16aa88u;
    // NOP
    // 0x16aa8c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16AA8Cu;
    {
        const bool branch_taken_0x16aa8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA8Cu;
        // 0x16aa90: 0x3c033fb3  lui         $v1, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa8c) {
            ctx->pc = 0x16AA9Cu;
            goto label_16aa9c;
        }
    }
    ctx->pc = 0x16AA94u;
    // 0x16aa94: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x16aa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x16aa98: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x16aa98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16aa9c:
    // 0x16aa9c: 0xe6140244  swc1        $f20, 0x244($s0)
    ctx->pc = 0x16aa9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
label_16aaa0:
    // 0x16aaa0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16aaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16aaa4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16aaa8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16aaa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16aaac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16aaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16aab0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16aab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aab4: 0x3e00008  jr          $ra
    ctx->pc = 0x16AAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAB4u;
        // 0x16aab8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AABCu;
}
