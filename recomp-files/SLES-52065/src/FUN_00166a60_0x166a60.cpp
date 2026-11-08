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

// Function: FUN_00166a60
// Address: 0x166a60 - 0x166d4c
void FUN_00166a60_0x166a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00166a60_0x166a60");
#endif

    switch (ctx->pc) {
        case 0x166aa4u: goto label_166aa4;
        case 0x166c54u: goto label_166c54;
        case 0x166ca0u: goto label_166ca0;
        case 0x166cc0u: goto label_166cc0;
        case 0x166cf0u: goto label_166cf0;
        case 0x166d14u: goto label_166d14;
        case 0x166d28u: goto label_166d28;
        case 0x166d34u: goto label_166d34;
        default: break;
    }

    ctx->pc = 0x166a60u;

    // 0x166a60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x166a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x166a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x166a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166a70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x166a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a74: 0x808201d0  lb          $v0, 0x1D0($a0)
    ctx->pc = 0x166a74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x166a78: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166A78u;
    {
        const bool branch_taken_0x166a78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x166A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A78u;
        // 0x166a7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a78) {
            ctx->pc = 0x166A88u;
            goto label_166a88;
        }
    }
    ctx->pc = 0x166A80u;
    // 0x166a80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x166a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166a84: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x166a84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
label_166a88:
    // 0x166a88: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x166a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a90: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x166a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x166a94: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x166a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x166a98: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x166a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x166a9c: 0xc055038  jal         func_1540E0
    ctx->pc = 0x166A9Cu;
    SET_GPR_U32(ctx, 31, 0x166AA4u);
    ctx->pc = 0x166AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A9Cu;
    // 0x166aa0: 0x26070290  addiu       $a3, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540E0u, 0x166A9Cu, 0x166AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166AA4u;
label_166aa4:
    // 0x166aa4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x166aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x166aa8: 0x0  nop
    ctx->pc = 0x166aa8u;
    // NOP
    // 0x166aac: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x166aacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166ab0: 0x0  nop
    ctx->pc = 0x166ab0u;
    // NOP
    // 0x166ab4: 0x450100a0  bc1t        . + 4 + (0xA0 << 2)
    ctx->pc = 0x166AB4u;
    {
        const bool branch_taken_0x166ab4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x166AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AB4u;
        // 0x166ab8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ab4) {
            ctx->pc = 0x166D38u;
            goto label_166d38;
        }
    }
    ctx->pc = 0x166ABCu;
    // 0x166abc: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x166abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x166ac0: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x166ac0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166ac4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x166ac4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166ac8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x166ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x166acc: 0x0  nop
    ctx->pc = 0x166accu;
    // NOP
    // 0x166ad0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x166ad0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x166ad4: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x166ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166ad8: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x166ad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166adc: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x166adcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166ae0: 0x3c023dae  lui         $v0, 0x3DAE
    ctx->pc = 0x166ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15790 << 16));
    // 0x166ae4: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x166ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x166ae8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x166aec: 0x0  nop
    ctx->pc = 0x166aecu;
    // NOP
    // 0x166af0: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x166af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x166af4: 0xc60002a0  lwc1        $f0, 0x2A0($s0)
    ctx->pc = 0x166af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166af8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x166af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166afc: 0x0  nop
    ctx->pc = 0x166afcu;
    // NOP
    // 0x166b00: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x166B00u;
    {
        const bool branch_taken_0x166b00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x166b00) {
            ctx->pc = 0x166C5Cu;
            goto label_166c5c;
        }
    }
    ctx->pc = 0x166B08u;
    // 0x166b08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166b0c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x166b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x166b10: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x166b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x166b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166b18: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x166b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166b1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x166b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166b20: 0x0  nop
    ctx->pc = 0x166b20u;
    // NOP
    // 0x166b24: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x166B24u;
    {
        const bool branch_taken_0x166b24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x166b24) {
            ctx->pc = 0x166C5Cu;
            goto label_166c5c;
        }
    }
    ctx->pc = 0x166B2Cu;
    // 0x166b2c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x166b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166b30: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x166b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x166b34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x166b34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x166b38: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x166b38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x166b3c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x166b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x166b40: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x166b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166b44: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x166b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x166b48: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x166b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x166b4c: 0x7a060270  lq          $a2, 0x270($s0)
    ctx->pc = 0x166b4cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x166b50: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x166b50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x166b54: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x166b54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x166b58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x166b58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166b5c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x166b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166b60: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166b64: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166b64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166b68: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x166b68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x166b6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x166b6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166b70: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x166b70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166b74: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x166b74u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x166b78: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x166b78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166b7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x166b7cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166b80: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x166b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166b84: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x166b84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x166b88: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x166b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x166b8c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x166b8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166b90: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x166b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166b94: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166b98: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166b9c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x166b9cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x166ba0: 0x4a0003bf  vwaitq
    ctx->pc = 0x166ba0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166ba4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x166ba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166ba8: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x166ba8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x166bac: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x166bacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166bb0: 0x4a0003bf  vwaitq
    ctx->pc = 0x166bb0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x166bb4: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x166bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166bb8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x166bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x166bbc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x166bbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166bc0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x166bc0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166bc4: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x166bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166bc8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166bc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166bcc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166bccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166bd0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x166bd0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166bd8: 0x0  nop
    ctx->pc = 0x166bd8u;
    // NOP
    // 0x166bdc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x166bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166be0: 0x0  nop
    ctx->pc = 0x166be0u;
    // NOP
    // 0x166be4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x166BE4u;
    {
        const bool branch_taken_0x166be4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BE4u;
        // 0x166be8: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166be4) {
            ctx->pc = 0x166C10u;
            goto label_166c10;
        }
    }
    ctx->pc = 0x166BECu;
    // 0x166bec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x166bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166bf4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x166bf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166bf8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x166bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x166bfc: 0x0  nop
    ctx->pc = 0x166bfcu;
    // NOP
    // 0x166c00: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x166c00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x166c04: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x166c04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x166c08: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x166c08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x166c0c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x166c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_166c10:
    // 0x166c10: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x166c10u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166c14: 0x7e060290  sq          $a2, 0x290($s0)
    ctx->pc = 0x166c14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 656), GPR_VEC(ctx, 6));
    // 0x166c18: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x166c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x166c1c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x166c1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166c20: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x166c20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166c24: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x166c24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166c28: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x166c28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166c2c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x166c2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x166c30: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x166c30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x166c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c3c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x166c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x166c40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x166c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x166c48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166c4c: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x166C4Cu;
    SET_GPR_U32(ctx, 31, 0x166C54u);
    ctx->pc = 0x166C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C4Cu;
    // 0x166c50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x166C4Cu, 0x166C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C54u;
label_166c54:
    // 0x166c54: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x166C54u;
    {
        const bool branch_taken_0x166c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C54u;
        // 0x166c58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c54) {
            ctx->pc = 0x166D38u;
            goto label_166d38;
        }
    }
    ctx->pc = 0x166C5Cu;
label_166c5c:
    // 0x166c5c: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x166c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x166c60: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x166C60u;
    {
        const bool branch_taken_0x166c60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x166C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C60u;
        // 0x166c64: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c60) {
            ctx->pc = 0x166CC4u;
            goto label_166cc4;
        }
    }
    ctx->pc = 0x166C68u;
    // 0x166c68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166c6c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x166c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x166c70: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x166c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x166c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166c78: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x166c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166c7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x166c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166c80: 0x0  nop
    ctx->pc = 0x166c80u;
    // NOP
    // 0x166c84: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x166C84u;
    {
        const bool branch_taken_0x166c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166c84) {
            ctx->pc = 0x166CA8u;
            goto label_166ca8;
        }
    }
    ctx->pc = 0x166C8Cu;
    // 0x166c8c: 0x822201d0  lb          $v0, 0x1D0($s1)
    ctx->pc = 0x166c8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x166c90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166C90u;
    {
        const bool branch_taken_0x166c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C90u;
        // 0x166c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c90) {
            ctx->pc = 0x166CA8u;
            goto label_166ca8;
        }
    }
    ctx->pc = 0x166C98u;
    // 0x166c98: 0xc042118  jal         func_108460
    ctx->pc = 0x166C98u;
    SET_GPR_U32(ctx, 31, 0x166CA0u);
    ctx->pc = 0x166C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C98u;
    // 0x166c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x166C98u, 0x166CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CA0u;
label_166ca0:
    // 0x166ca0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x166ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x166ca4: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x166ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
label_166ca8:
    // 0x166ca8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166cac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x166cb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166cb4: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x166cb4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x166cb8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x166CB8u;
    SET_GPR_U32(ctx, 31, 0x166CC0u);
    ctx->pc = 0x166CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CB8u;
    // 0x166cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x166CB8u, 0x166CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CC0u;
label_166cc0:
    // 0x166cc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_166cc4:
    // 0x166cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166cc8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x166cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x166ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166cd0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x166cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x166cd4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x166cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x166cd8: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x166cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x166cdc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166ce0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x166ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166ce4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x166ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x166ce8: 0xc0425d4  jal         func_109750
    ctx->pc = 0x166CE8u;
    SET_GPR_U32(ctx, 31, 0x166CF0u);
    ctx->pc = 0x166CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CE8u;
    // 0x166cec: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x166CE8u, 0x166CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CF0u;
label_166cf0:
    // 0x166cf0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166cf4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x166cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x166cf8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x166cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x166cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166d04: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x166d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166d08: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x166d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166d0c: 0xc056194  jal         func_158650
    ctx->pc = 0x166D0Cu;
    SET_GPR_U32(ctx, 31, 0x166D14u);
    ctx->pc = 0x166D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D0Cu;
    // 0x166d10: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x166D0Cu, 0x166D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D14u;
label_166d14:
    // 0x166d14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x166d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x166d18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x166d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x166d1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166d20: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x166D20u;
    SET_GPR_U32(ctx, 31, 0x166D28u);
    ctx->pc = 0x166D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D20u;
    // 0x166d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x166D20u, 0x166D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D28u;
label_166d28:
    // 0x166d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d2c: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x166D2Cu;
    SET_GPR_U32(ctx, 31, 0x166D34u);
    ctx->pc = 0x166D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D2Cu;
    // 0x166d30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x166D2Cu, 0x166D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D34u;
label_166d34:
    // 0x166d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166d38:
    // 0x166d38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x166d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166d44: 0x3e00008  jr          $ra
    ctx->pc = 0x166D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D44u;
        // 0x166d48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166D4Cu;
}
