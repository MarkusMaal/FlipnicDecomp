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

// Function: FUN_00157440
// Address: 0x157440 - 0x157530
void FUN_00157440_0x157440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157440_0x157440");
#endif

    switch (ctx->pc) {
        case 0x157474u: goto label_157474;
        default: break;
    }

    ctx->pc = 0x157440u;

    // 0x157440: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157440u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157444: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x157444u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157448: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157448u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15744c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x157450: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x157450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x157454: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157454u;
    {
        const bool branch_taken_0x157454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x157454) {
            ctx->pc = 0x157468u;
            goto label_157468;
        }
    }
    ctx->pc = 0x15745Cu;
    // 0x15745c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15745cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157460: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x157460u;
    {
        const bool branch_taken_0x157460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157460) {
            ctx->pc = 0x157528u;
            goto label_157528;
        }
    }
    ctx->pc = 0x157468u;
label_157468:
    // 0x157468: 0xc4840288  lwc1        $f4, 0x288($a0)
    ctx->pc = 0x157468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15746c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15746Cu;
    {
        const bool branch_taken_0x15746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15746Cu;
        // 0x157470: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15746c) {
            ctx->pc = 0x1574F4u;
            goto label_1574f4;
        }
    }
    ctx->pc = 0x157474u;
label_157474:
    // 0x157474: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x157474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15747c: 0xc4430280  lwc1        $f3, 0x280($v0)
    ctx->pc = 0x15747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157480: 0xc7858020  lwc1        $f5, -0x7FE0($gp)
    ctx->pc = 0x157480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x157484: 0xc4420284  lwc1        $f2, 0x284($v0)
    ctx->pc = 0x157484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157488: 0xc4410270  lwc1        $f1, 0x270($v0)
    ctx->pc = 0x157488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15748c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x15748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157490: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x157490u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x157494: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x157494u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x157498: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x157498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15749c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15749cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1574a0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1574a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1574a4: 0xc4430280  lwc1        $f3, 0x280($v0)
    ctx->pc = 0x1574a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1574a8: 0xc7858020  lwc1        $f5, -0x7FE0($gp)
    ctx->pc = 0x1574a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1574ac: 0xc4420284  lwc1        $f2, 0x284($v0)
    ctx->pc = 0x1574acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1574b0: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x1574b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1574b4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1574b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1574b8: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1574b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1574bc: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x1574bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1574c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1574c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1574c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1574c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1574c8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1574c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1574cc: 0xc4430280  lwc1        $f3, 0x280($v0)
    ctx->pc = 0x1574ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1574d0: 0xc7858020  lwc1        $f5, -0x7FE0($gp)
    ctx->pc = 0x1574d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1574d4: 0xc4420284  lwc1        $f2, 0x284($v0)
    ctx->pc = 0x1574d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1574d8: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1574d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1574dc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1574dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1574e0: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1574e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1574e4: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x1574e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1574e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1574e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1574ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1574ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1574f0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1574f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1574f4:
    // 0x1574f4: 0x0  nop
    ctx->pc = 0x1574f4u;
    // NOP
    // 0x1574f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1574f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1574fc: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1574FCu;
    {
        const bool branch_taken_0x1574fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574FCu;
        // 0x157500: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574fc) {
            ctx->pc = 0x157474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157474;
        }
    }
    ctx->pc = 0x157504u;
    // 0x157504: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157504u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157508: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x157508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15750c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15750cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157510: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x157510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157514: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x157514u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x157518: 0x4a0003bf  vwaitq
    ctx->pc = 0x157518u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15751c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x15751cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157520: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x157520u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157528:
    // 0x157528: 0x3e00008  jr          $ra
    ctx->pc = 0x157528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157530u;
}
