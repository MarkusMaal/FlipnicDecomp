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

// Function: FUN_0017b020
// Address: 0x17b020 - 0x17b1f0
void FUN_0017b020_0x17b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b020_0x17b020");
#endif

    switch (ctx->pc) {
        case 0x17b09cu: goto label_17b09c;
        case 0x17b0e4u: goto label_17b0e4;
        case 0x17b130u: goto label_17b130;
        case 0x17b198u: goto label_17b198;
        default: break;
    }

    ctx->pc = 0x17b020u;

    // 0x17b020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b024: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x17b024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b034: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x17b034u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17b038: 0x7c8603f0  sq          $a2, 0x3F0($a0)
    ctx->pc = 0x17b038u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1008), GPR_VEC(ctx, 6));
    // 0x17b03c: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x17b03cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b040: 0x7c8603e0  sq          $a2, 0x3E0($a0)
    ctx->pc = 0x17b040u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 992), GPR_VEC(ctx, 6));
    // 0x17b044: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x17b044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x17b048: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17b048u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b04c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x17b04cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b050: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17b050u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b054: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x17b054u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17b058: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17b058u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b05c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17b05cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b060: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17b060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b064: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17b064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b068: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17b068u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x17b06c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b06cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17b070: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17b070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b074: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17b074u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x17b078: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17b078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b07c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b07cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17b080: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17b080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b084: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x17b084u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17b088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b08c: 0xac8203d0  sw          $v0, 0x3D0($a0)
    ctx->pc = 0x17b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 976), GPR_U32(ctx, 2));
    // 0x17b090: 0x788603e0  lq          $a2, 0x3E0($a0)
    ctx->pc = 0x17b090u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 992)));
    // 0x17b094: 0xc055c40  jal         func_157100
    ctx->pc = 0x17B094u;
    SET_GPR_U32(ctx, 31, 0x17B09Cu);
    ctx->pc = 0x17B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B094u;
    // 0x17b098: 0x7c860000  sq          $a2, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x17B094u, 0x17B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B09Cu;
label_17b09c:
    // 0x17b09c: 0x3c033fd3  lui         $v1, 0x3FD3
    ctx->pc = 0x17b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16339 << 16));
    // 0x17b0a0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x17b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x17b0a4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x17b0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x17b0a8: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x17b0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x17b0ac: 0xae0302a0  sw          $v1, 0x2A0($s0)
    ctx->pc = 0x17b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 3));
    // 0x17b0b0: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x17b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x17b0b4: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x17b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x17b0b8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17b0bc: 0xae0402a4  sw          $a0, 0x2A4($s0)
    ctx->pc = 0x17b0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 4));
    // 0x17b0c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17b0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x17b0c4: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x17b0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x17b0c8: 0xae000418  sw          $zero, 0x418($s0)
    ctx->pc = 0x17b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
    // 0x17b0cc: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x17b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x17b0d0: 0xae030274  sw          $v1, 0x274($s0)
    ctx->pc = 0x17b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 3));
    // 0x17b0d4: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x17b0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x17b0d8: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x17b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x17b0dc: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x17B0DCu;
    SET_GPR_U32(ctx, 31, 0x17B0E4u);
    ctx->pc = 0x17B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0DCu;
    // 0x17b0e0: 0xae020284  sw          $v0, 0x284($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x17B0DCu, 0x17B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0E4u;
label_17b0e4:
    // 0x17b0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b0e8: 0x3c034e80  lui         $v1, 0x4E80
    ctx->pc = 0x17b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20096 << 16));
    // 0x17b0ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17b0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17b0f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17b0f4: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x17b0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17b0f8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x17b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x17b0fc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x17b0fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17b100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b104: 0x0  nop
    ctx->pc = 0x17b104u;
    // NOP
    // 0x17b108: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17b108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17b10c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17b10cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17b110: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x17b110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x17b114: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x17b114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x17b118: 0xc6010294  lwc1        $f1, 0x294($s0)
    ctx->pc = 0x17b118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b11c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b120: 0x0  nop
    ctx->pc = 0x17b120u;
    // NOP
    // 0x17b124: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17b128: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x17B128u;
    SET_GPR_U32(ctx, 31, 0x17B130u);
    ctx->pc = 0x17B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B128u;
    // 0x17b12c: 0xe6000294  swc1        $f0, 0x294($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x17B128u, 0x17B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B130u;
label_17b130:
    // 0x17b130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b134: 0x26040290  addiu       $a0, $s0, 0x290
    ctx->pc = 0x17b134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x17b138: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17b138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17b13c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17b140: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x17b140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17b144: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x17b144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x17b148: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17b148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17b14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b150: 0x0  nop
    ctx->pc = 0x17b150u;
    // NOP
    // 0x17b154: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17b154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17b158: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17b158u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17b15c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x17b15cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x17b160: 0xe6000298  swc1        $f0, 0x298($s0)
    ctx->pc = 0x17b160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
    // 0x17b164: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x17b164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b168: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x17b168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b16c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x17b16cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b170: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x17b170u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b174: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17b174u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x17b178: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b178u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17b17c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x17b17cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17b180: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x17b180u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x17b184: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x17b184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b188: 0x4a0003bf  vwaitq
    ctx->pc = 0x17b188u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17b18c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x17b18cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b190: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x17B190u;
    SET_GPR_U32(ctx, 31, 0x17B198u);
    ctx->pc = 0x17B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B190u;
    // 0x17b194: 0xf8860000  sqc2        $vf6, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x17B190u, 0x17B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B198u;
label_17b198:
    // 0x17b198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b19c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x17b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x17b1a0: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x17b1a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x17b1a4: 0x3c044e80  lui         $a0, 0x4E80
    ctx->pc = 0x17b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20096 << 16));
    // 0x17b1a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17b1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17b1ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17b1b0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x17b1b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17b1b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17b1b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b1b8: 0x0  nop
    ctx->pc = 0x17b1b8u;
    // NOP
    // 0x17b1bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17b1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17b1c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17b1c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17b1c4: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x17b1c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x17b1c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b1cc: 0x0  nop
    ctx->pc = 0x17b1ccu;
    // NOP
    // 0x17b1d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17b1d4: 0xe60002a0  swc1        $f0, 0x2A0($s0)
    ctx->pc = 0x17b1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x17b1d8: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x17b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x17b1dc: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x17b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x17b1e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b1e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1E8u;
        // 0x17b1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B1F0u;
}
