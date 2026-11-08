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

// Function: FUN_00157530
// Address: 0x157530 - 0x15765c
void FUN_00157530_0x157530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157530_0x157530");
#endif

    switch (ctx->pc) {
        case 0x157570u: goto label_157570;
        default: break;
    }

    ctx->pc = 0x157530u;

    // 0x157530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157534: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x157534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x157538: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157538u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15753c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x15753cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157540: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157540u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157544: 0x848501e8  lh          $a1, 0x1E8($a0)
    ctx->pc = 0x157544u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x157548: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x157548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15754c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15754Cu;
    {
        const bool branch_taken_0x15754c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15754c) {
            ctx->pc = 0x157560u;
            goto label_157560;
        }
    }
    ctx->pc = 0x157554u;
    // 0x157554: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x157554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157558: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x157558u;
    {
        const bool branch_taken_0x157558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157558u;
        // 0x15755c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157558) {
            ctx->pc = 0x157620u;
            goto label_157620;
        }
    }
    ctx->pc = 0x157560u;
label_157560:
    // 0x157560: 0xc4860288  lwc1        $f6, 0x288($a0)
    ctx->pc = 0x157560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x157564: 0xc7878020  lwc1        $f7, -0x7FE0($gp)
    ctx->pc = 0x157564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x157568: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x157568u;
    {
        const bool branch_taken_0x157568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157568u;
        // 0x15756c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157568) {
            ctx->pc = 0x1575E4u;
            goto label_1575e4;
        }
    }
    ctx->pc = 0x157570u;
label_157570:
    // 0x157570: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x157570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x157578: 0xc4450280  lwc1        $f5, 0x280($v0)
    ctx->pc = 0x157578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15757c: 0xc4440284  lwc1        $f4, 0x284($v0)
    ctx->pc = 0x15757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157580: 0xc4430270  lwc1        $f3, 0x270($v0)
    ctx->pc = 0x157580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157584: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x157584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157588: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x157588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15758c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157590: 0x4606281a  mula.s      $f5, $f6
    ctx->pc = 0x157590u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[6]));
    // 0x157594: 0x4607211c  madd.s      $f4, $f4, $f7
    ctx->pc = 0x157594u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[7]));
    // 0x157598: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x157598u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x15759c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x15759cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1575a0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1575a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1575a4: 0xc4440280  lwc1        $f4, 0x280($v0)
    ctx->pc = 0x1575a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1575a8: 0xc4430284  lwc1        $f3, 0x284($v0)
    ctx->pc = 0x1575a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1575ac: 0xc4420274  lwc1        $f2, 0x274($v0)
    ctx->pc = 0x1575acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1575b0: 0x4606201a  mula.s      $f4, $f6
    ctx->pc = 0x1575b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x1575b4: 0x460718dc  madd.s      $f3, $f3, $f7
    ctx->pc = 0x1575b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x1575b8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1575b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1575bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1575bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1575c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1575c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1575c4: 0xc4430280  lwc1        $f3, 0x280($v0)
    ctx->pc = 0x1575c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1575c8: 0xc4420284  lwc1        $f2, 0x284($v0)
    ctx->pc = 0x1575c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1575cc: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1575ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1575d0: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x1575d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x1575d4: 0x4607109c  madd.s      $f2, $f2, $f7
    ctx->pc = 0x1575d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x1575d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1575d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1575dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1575dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1575e0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1575e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1575e4:
    // 0x1575e4: 0x0  nop
    ctx->pc = 0x1575e4u;
    // NOP
    // 0x1575e8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1575e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1575ec: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1575ECu;
    {
        const bool branch_taken_0x1575ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1575F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575ECu;
        // 0x1575f0: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575ec) {
            ctx->pc = 0x157570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157570;
        }
    }
    ctx->pc = 0x1575F4u;
    // 0x1575f4: 0x27a20000  addiu       $v0, $sp, 0x0
    ctx->pc = 0x1575f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1575f8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1575f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1575fc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1575fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157600: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x157600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157604: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x157604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157608: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x157608u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15760c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15760cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x157610: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x157610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x157614: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x157614u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157618: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15761c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15761cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_157620:
    // 0x157620: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x157620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x157624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157628: 0x24860290  addiu       $a2, $a0, 0x290
    ctx->pc = 0x157628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x15762c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15762cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157630: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157630u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157634: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x157634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x157638: 0x0  nop
    ctx->pc = 0x157638u;
    // NOP
    // 0x15763c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15763cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x157640: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x157640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157644: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x157644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157648: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x157648u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15764c: 0xe48102a0  swc1        $f1, 0x2A0($a0)
    ctx->pc = 0x15764cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 672), bits); }
    // 0x157650: 0xac800280  sw          $zero, 0x280($a0)
    ctx->pc = 0x157650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 0));
    // 0x157654: 0x3e00008  jr          $ra
    ctx->pc = 0x157654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157654u;
        // 0x157658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15765Cu;
}
