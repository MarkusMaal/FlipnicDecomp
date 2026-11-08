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

// Function: entry_0016e5fc
// Address: 0x16e5fc - 0x16e704
void entry_0016e5fc_0x16e5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e5fc_0x16e5fc");
#endif

    switch (ctx->pc) {
        case 0x16e624u: goto label_16e624;
        default: break;
    }

    ctx->pc = 0x16e5fcu;

    // 0x16e5fc: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x16e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e600: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16e604: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16e608: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16e60c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16e610: 0x84830080  lh          $v1, 0x80($a0)
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x16e614: 0x460003b  bltz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x16E614u;
    {
        const bool branch_taken_0x16e614 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16e614) {
            ctx->pc = 0x16E704u;
            return;
        }
    }
    ctx->pc = 0x16E61Cu;
    // 0x16e61c: 0xc05bb78  jal         func_16EDE0
    ctx->pc = 0x16E61Cu;
    SET_GPR_U32(ctx, 31, 0x16E624u);
    ctx->pc = 0x16E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E61Cu;
    // 0x16e620: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EDE0u, 0x16E61Cu, 0x16E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E624u;
label_16e624:
    // 0x16e624: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x16e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e628: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16e62c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16e630: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x16e630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x16e634: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x16e634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16e638: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x16e638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16e63c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x16e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16e640: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16e640u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e644: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16e644u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e648: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16e648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16e64c: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x16e64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16e650: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16e650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16e654: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16e654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16e658: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16e658u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16e65c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16e65cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16e660: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16e660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16e664: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16e664u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16e668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e66c: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x16e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e670: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16e670u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x16e674: 0x46000105  abs.s       $f4, $f0
    ctx->pc = 0x16e674u;
    ctx->f[4] = FPU_ABS_S(ctx->f[0]);
    // 0x16e678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16e678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16e67c: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x16e67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16e680: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e684: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e688: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x16e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e68c: 0x46040881  sub.s       $f2, $f1, $f4
    ctx->pc = 0x16e68cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x16e690: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x16e690u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x16e694: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x16e694u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x16e698: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16e698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x16e69c: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x16e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e6a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16e6a4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x16e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6a8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x16e6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x16e6ac: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x16e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e6b0: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x16e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x16e6b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16e6b8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x16e6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e6bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16e6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6c0: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x16e6c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x16e6c4: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x16e6c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x16e6c8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x16e6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x16e6cc: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x16e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e6d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16e6d4: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x16e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e6d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x16e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16e6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16e6e0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x16e6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x16e6e4: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x16e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e6e8: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x16e6ec: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x16e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16e6f0: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x16e6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16e6f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x16e6f8: 0x84c50080  lh          $a1, 0x80($a2)
    ctx->pc = 0x16e6f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x16e6fc: 0xc0466c4  jal         func_119B10
    ctx->pc = 0x16E6FCu;
    SET_GPR_U32(ctx, 31, 0x16E704u);
    ctx->pc = 0x16E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6FCu;
    // 0x16e700: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B10u, 0x16E6FCu, 0x16E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E704u;
}
