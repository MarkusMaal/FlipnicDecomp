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

// Function: entry_00166a88
// Address: 0x166a88 - 0x166c10
void entry_00166a88_0x166a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166a88_0x166a88");
#endif

    switch (ctx->pc) {
        case 0x166aa4u: goto label_166aa4;
        default: break;
    }

    ctx->pc = 0x166a88u;

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
            return;
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
            return;
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
            return;
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
            return;
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
    ctx->pc = 0x166c10u;
}
