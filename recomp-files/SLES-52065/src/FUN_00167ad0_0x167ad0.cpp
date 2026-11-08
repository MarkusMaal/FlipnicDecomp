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

// Function: FUN_00167ad0
// Address: 0x167ad0 - 0x167d74
void FUN_00167ad0_0x167ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167ad0_0x167ad0");
#endif

    switch (ctx->pc) {
        case 0x167bb0u: goto label_167bb0;
        case 0x167bbcu: goto label_167bbc;
        case 0x167be0u: goto label_167be0;
        case 0x167c90u: goto label_167c90;
        case 0x167ca8u: goto label_167ca8;
        case 0x167cd8u: goto label_167cd8;
        case 0x167cf8u: goto label_167cf8;
        case 0x167d4cu: goto label_167d4c;
        case 0x167d58u: goto label_167d58;
        default: break;
    }

    ctx->pc = 0x167ad0u;

    // 0x167ad0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x167ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x167ad4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x167ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x167ad8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x167ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x167adc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x167adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x167ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ae4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x167ae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x167ae8: 0x84820220  lh          $v0, 0x220($a0)
    ctx->pc = 0x167ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x167aec: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x167AECu;
    {
        const bool branch_taken_0x167aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AECu;
        // 0x167af0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167aec) {
            ctx->pc = 0x167BC4u;
            goto label_167bc4;
        }
    }
    ctx->pc = 0x167AF4u;
    // 0x167af4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x167af4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167af8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x167af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167afc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x167afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167b00: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x167b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167b04: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x167b04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x167b08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x167b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x167b0c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x167b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x167b10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167b14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x167b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x167b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167b1c: 0x0  nop
    ctx->pc = 0x167b1cu;
    // NOP
    // 0x167b20: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x167b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x167b24: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x167b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167b28: 0x0  nop
    ctx->pc = 0x167b28u;
    // NOP
    // 0x167b2c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x167B2Cu;
    {
        const bool branch_taken_0x167b2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B2Cu;
        // 0x167b30: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b2c) {
            ctx->pc = 0x167BC4u;
            goto label_167bc4;
        }
    }
    ctx->pc = 0x167B34u;
    // 0x167b34: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x167b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167b38: 0x0  nop
    ctx->pc = 0x167b38u;
    // NOP
    // 0x167b3c: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x167B3Cu;
    {
        const bool branch_taken_0x167b3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B3Cu;
        // 0x167b40: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b3c) {
            ctx->pc = 0x167BC4u;
            goto label_167bc4;
        }
    }
    ctx->pc = 0x167B44u;
    // 0x167b44: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x167b44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x167b48: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x167b48u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x167b4c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x167b4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167b50: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x167b50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167b54: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x167b54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x167b58: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x167b58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x167b5c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x167b5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167b60: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x167b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167b64: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x167b64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167b68: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x167b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167b6c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x167b6cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x167b70: 0x4a0003bf  vwaitq
    ctx->pc = 0x167b70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x167b74: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x167b74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167b78: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x167b78u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x167b7c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x167b7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x167b80: 0x4a0003bf  vwaitq
    ctx->pc = 0x167b80u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x167b84: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x167b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x167b88: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x167b88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x167b8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x167b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x167b90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b98: 0x26070290  addiu       $a3, $s0, 0x290
    ctx->pc = 0x167b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x167b9c: 0x460d6003  div.s       $f0, $f12, $f13
    ctx->pc = 0x167b9cu;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
    // 0x167ba0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x167ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167ba4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x167ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167ba8: 0xc055b84  jal         func_156E10
    ctx->pc = 0x167BA8u;
    SET_GPR_U32(ctx, 31, 0x167BB0u);
    ctx->pc = 0x167BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BA8u;
    // 0x167bac: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156E10u, 0x167BA8u, 0x167BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BB0u;
label_167bb0:
    // 0x167bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167bb4: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x167BB4u;
    SET_GPR_U32(ctx, 31, 0x167BBCu);
    ctx->pc = 0x167BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BB4u;
    // 0x167bb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x167BB4u, 0x167BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BBCu;
label_167bbc:
    // 0x167bbc: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x167BBCu;
    {
        const bool branch_taken_0x167bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BBCu;
        // 0x167bc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bbc) {
            ctx->pc = 0x167D5Cu;
            goto label_167d5c;
        }
    }
    ctx->pc = 0x167BC4u;
label_167bc4:
    // 0x167bc4: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x167bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x167bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167bcc: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x167bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x167bd0: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x167bd4: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x167bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x167bd8: 0xc055038  jal         func_1540E0
    ctx->pc = 0x167BD8u;
    SET_GPR_U32(ctx, 31, 0x167BE0u);
    ctx->pc = 0x167BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BD8u;
    // 0x167bdc: 0x26070290  addiu       $a3, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540E0u, 0x167BD8u, 0x167BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BE0u;
label_167be0:
    // 0x167be0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167be4: 0x0  nop
    ctx->pc = 0x167be4u;
    // NOP
    // 0x167be8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x167be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167bec: 0x0  nop
    ctx->pc = 0x167becu;
    // NOP
    // 0x167bf0: 0x4501005a  bc1t        . + 4 + (0x5A << 2)
    ctx->pc = 0x167BF0u;
    {
        const bool branch_taken_0x167bf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BF0u;
        // 0x167bf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bf0) {
            ctx->pc = 0x167D5Cu;
            goto label_167d5c;
        }
    }
    ctx->pc = 0x167BF8u;
    // 0x167bf8: 0xc7818024  lwc1        $f1, -0x7FDC($gp)
    ctx->pc = 0x167bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167bfc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x167bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x167c00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x167c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x167c04: 0x0  nop
    ctx->pc = 0x167c04u;
    // NOP
    // 0x167c08: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x167c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x167c0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x167c0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x167c10: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x167c10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167c14: 0x0  nop
    ctx->pc = 0x167c14u;
    // NOP
    // 0x167c18: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x167C18u;
    {
        const bool branch_taken_0x167c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167c18) {
            ctx->pc = 0x167C24u;
            goto label_167c24;
        }
    }
    ctx->pc = 0x167C20u;
    // 0x167c20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_167c24:
    // 0x167c24: 0xa6220220  sh          $v0, 0x220($s1)
    ctx->pc = 0x167c24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
    // 0x167c28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x167c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167c2c: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x167c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167c30: 0x46000d05  abs.s       $f20, $f1
    ctx->pc = 0x167c30u;
    ctx->f[20] = FPU_ABS_S(ctx->f[1]);
    // 0x167c34: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x167c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x167c38: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x167c38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167c3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x167c3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167c40: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x167c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x167c44: 0x0  nop
    ctx->pc = 0x167c44u;
    // NOP
    // 0x167c48: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x167c48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x167c4c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x167c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x167c50: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x167c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167c54: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x167c54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x167c58: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x167c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x167c5c: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x167c60: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x167C60u;
    {
        const bool branch_taken_0x167c60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x167c60) {
            ctx->pc = 0x167CA8u;
            goto label_167ca8;
        }
    }
    ctx->pc = 0x167C68u;
    // 0x167c68: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x167c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x167c6c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x167c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x167c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167c74: 0x0  nop
    ctx->pc = 0x167c74u;
    // NOP
    // 0x167c78: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x167c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167c7c: 0x0  nop
    ctx->pc = 0x167c7cu;
    // NOP
    // 0x167c80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x167C80u;
    {
        const bool branch_taken_0x167c80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C80u;
        // 0x167c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c80) {
            ctx->pc = 0x167C90u;
            goto label_167c90;
        }
    }
    ctx->pc = 0x167C88u;
    // 0x167c88: 0xc042118  jal         func_108460
    ctx->pc = 0x167C88u;
    SET_GPR_U32(ctx, 31, 0x167C90u);
    ctx->pc = 0x167C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C88u;
    // 0x167c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x167C88u, 0x167C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C90u;
label_167c90:
    // 0x167c90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x167c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167c94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167c98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167c9c: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x167ca0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167CA0u;
    SET_GPR_U32(ctx, 31, 0x167CA8u);
    ctx->pc = 0x167CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CA0u;
    // 0x167ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167CA0u, 0x167CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CA8u;
label_167ca8:
    // 0x167ca8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cb0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x167cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x167cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x167cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cb8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x167cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x167cbc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x167cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167cc0: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x167cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167cc4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x167cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x167cc8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x167cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167ccc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x167cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x167cd0: 0xc0425d4  jal         func_109750
    ctx->pc = 0x167CD0u;
    SET_GPR_U32(ctx, 31, 0x167CD8u);
    ctx->pc = 0x167CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CD0u;
    // 0x167cd4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x167CD0u, 0x167CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CD8u;
label_167cd8:
    // 0x167cd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x167cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167cdc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x167cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x167ce0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x167ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x167ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167cec: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x167cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x167cf0: 0xc056194  jal         func_158650
    ctx->pc = 0x167CF0u;
    SET_GPR_U32(ctx, 31, 0x167CF8u);
    ctx->pc = 0x167CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CF0u;
    // 0x167cf4: 0x46140340  add.s       $f13, $f0, $f20 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x167CF0u, 0x167CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CF8u;
label_167cf8:
    // 0x167cf8: 0xc6010294  lwc1        $f1, 0x294($s0)
    ctx->pc = 0x167cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167cfc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x167d00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x167d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x167d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167d08: 0x0  nop
    ctx->pc = 0x167d08u;
    // NOP
    // 0x167d0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167d10: 0x0  nop
    ctx->pc = 0x167d10u;
    // NOP
    // 0x167d14: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x167D14u;
    {
        const bool branch_taken_0x167d14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D14u;
        // 0x167d18: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d14) {
            ctx->pc = 0x167D3Cu;
            goto label_167d3c;
        }
    }
    ctx->pc = 0x167D1Cu;
    // 0x167d1c: 0xc60101c0  lwc1        $f1, 0x1C0($s0)
    ctx->pc = 0x167d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167d20: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x167d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x167d24: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x167d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x167d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167d2c: 0x0  nop
    ctx->pc = 0x167d2cu;
    // NOP
    // 0x167d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x167d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x167d34: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x167d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x167d38: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x167d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_167d3c:
    // 0x167d3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x167d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x167d40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167d44: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x167D44u;
    SET_GPR_U32(ctx, 31, 0x167D4Cu);
    ctx->pc = 0x167D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D44u;
    // 0x167d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x167D44u, 0x167D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D4Cu;
label_167d4c:
    // 0x167d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d50: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x167D50u;
    SET_GPR_U32(ctx, 31, 0x167D58u);
    ctx->pc = 0x167D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D50u;
    // 0x167d54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x167D50u, 0x167D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D58u;
label_167d58:
    // 0x167d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167d5c:
    // 0x167d5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x167d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167d60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x167d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167d64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x167d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167d68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x167d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x167D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D6Cu;
        // 0x167d70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167D74u;
}
