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

// Function: entry_0016ec50
// Address: 0x16ec50 - 0x16edd8
void entry_0016ec50_0x16ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ec50_0x16ec50");
#endif

    switch (ctx->pc) {
        case 0x16ec58u: goto label_16ec58;
        case 0x16ecc0u: goto label_16ecc0;
        case 0x16ecfcu: goto label_16ecfc;
        case 0x16ed44u: goto label_16ed44;
        default: break;
    }

    ctx->pc = 0x16ec50u;

    // 0x16ec50: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x16EC50u;
    SET_GPR_U32(ctx, 31, 0x16EC58u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16EC50u, 0x16EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC58u;
label_16ec58:
    // 0x16ec58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ec58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ec5c: 0x3c054e80  lui         $a1, 0x4E80
    ctx->pc = 0x16ec5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20096 << 16));
    // 0x16ec60: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x16ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x16ec64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16ec64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16ec68: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x16ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x16ec6c: 0x3446cccd  ori         $a2, $v0, 0xCCCD
    ctx->pc = 0x16ec6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16ec70: 0x3c023d1e  lui         $v0, 0x3D1E
    ctx->pc = 0x16ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15646 << 16));
    // 0x16ec74: 0x3444611c  ori         $a0, $v0, 0x611C
    ctx->pc = 0x16ec74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
    // 0x16ec78: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x16ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x16ec7c: 0x34427cee  ori         $v0, $v0, 0x7CEE
    ctx->pc = 0x16ec7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31982);
    // 0x16ec80: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x16ec80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16ec84: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x16ec84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ec88: 0x0  nop
    ctx->pc = 0x16ec88u;
    // NOP
    // 0x16ec8c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16ec8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x16ec90: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16ec90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16ec94: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16ec94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16ec98: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x16ec98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x16ec9c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x16ec9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x16eca0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x16eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x16eca4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x16eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16eca8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x16eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x16ecac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x16ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x16ecb0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x16ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x16ecb4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x16ecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x16ecb8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x16ECB8u;
    SET_GPR_U32(ctx, 31, 0x16ECC0u);
    ctx->pc = 0x16ECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ECB8u;
    // 0x16ecbc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16ECB8u, 0x16ECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ECC0u;
label_16ecc0:
    // 0x16ecc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ecc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ecc4: 0x0  nop
    ctx->pc = 0x16ecc4u;
    // NOP
    // 0x16ecc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16ecc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16eccc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16ecd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ecd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ecd4: 0x0  nop
    ctx->pc = 0x16ecd4u;
    // NOP
    // 0x16ecd8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16ecd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16ecdc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x16ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x16ece0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ece0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ece4: 0x0  nop
    ctx->pc = 0x16ece4u;
    // NOP
    // 0x16ece8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16ece8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16ecec: 0x0  nop
    ctx->pc = 0x16ececu;
    // NOP
    // 0x16ecf0: 0x0  nop
    ctx->pc = 0x16ecf0u;
    // NOP
    // 0x16ecf4: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x16ECF4u;
    SET_GPR_U32(ctx, 31, 0x16ECFCu);
    ctx->pc = 0x16ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ECF4u;
    // 0x16ecf8: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16ECF4u, 0x16ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ECFCu;
label_16ecfc:
    // 0x16ecfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ecfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ed00: 0x3c034e80  lui         $v1, 0x4E80
    ctx->pc = 0x16ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20096 << 16));
    // 0x16ed04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16ed04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ed08: 0x0  nop
    ctx->pc = 0x16ed08u;
    // NOP
    // 0x16ed0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ed0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ed10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16ed14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16ed14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16ed18: 0x0  nop
    ctx->pc = 0x16ed18u;
    // NOP
    // 0x16ed1c: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x16ed1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x16ed20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16ed24: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x16ed24u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x16ed28: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x16ed28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x16ed2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ed2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ed30: 0x0  nop
    ctx->pc = 0x16ed30u;
    // NOP
    // 0x16ed34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16ed34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16ed38: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16ed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16ed3c: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x16ED3Cu;
    SET_GPR_U32(ctx, 31, 0x16ED44u);
    ctx->pc = 0x16ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED3Cu;
    // 0x16ed40: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16ED3Cu, 0x16ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED44u;
label_16ed44:
    // 0x16ed44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ed44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ed48: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x16ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x16ed4c: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x16ed4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x16ed50: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x16ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x16ed54: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x16ed54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16ed58: 0x3c033f7f  lui         $v1, 0x3F7F
    ctx->pc = 0x16ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16255 << 16));
    // 0x16ed5c: 0x34637cee  ori         $v1, $v1, 0x7CEE
    ctx->pc = 0x16ed5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31982);
    // 0x16ed60: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x16ed60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x16ed64: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x16ed64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ed68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16ed68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ed6c: 0x0  nop
    ctx->pc = 0x16ed6cu;
    // NOP
    // 0x16ed70: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16ed70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16ed74: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16ed74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16ed78: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x16ed78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x16ed7c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16ed7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16ed80: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x16ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x16ed84: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16ed84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16ed88: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16ed88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ed8c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16ed8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ed90: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16ed90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ed94: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16ed94u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16ed98: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ed98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ed9c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16ed9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eda0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16eda0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16eda4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16eda4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16eda8: 0x4a0003bf  vwaitq
    ctx->pc = 0x16eda8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16edac: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16edacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16edb0: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x16edb0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16edb4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x16edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x16edb8: 0xe6150044  swc1        $f21, 0x44($s0)
    ctx->pc = 0x16edb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16edbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16edbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16edc0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16edc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16edc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16edc8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16edcc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16edccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16edd0: 0x3e00008  jr          $ra
    ctx->pc = 0x16EDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDD0u;
        // 0x16edd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EDD8u;
}
