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

// Function: FUN_00167920
// Address: 0x167920 - 0x1679bc
void FUN_00167920_0x167920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167920_0x167920");
#endif

    switch (ctx->pc) {
        case 0x16799cu: goto label_16799c;
        default: break;
    }

    ctx->pc = 0x167920u;

    // 0x167920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167928: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x167928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16792c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16792cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x167930: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x167930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x167934: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x167934u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x167938: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x167938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16793c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x16793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x167940: 0xc4800210  lwc1        $f0, 0x210($a0)
    ctx->pc = 0x167940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167944: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x167944u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x167948: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x167948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x16794c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16794cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167950: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x167950u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x167954: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x167954u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x167958: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x167958u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16795c: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x16795cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167960: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x167960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x167964: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x167964u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x167968: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x167968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16796c: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x16796cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x167970: 0xf8c90000  sqc2        $vf9, 0x0($a2)
    ctx->pc = 0x167970u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x167974: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x167974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x167978: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x167978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16797c: 0x24a70010  addiu       $a3, $a1, 0x10
    ctx->pc = 0x16797cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x167980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167984: 0xc4810200  lwc1        $f1, 0x200($a0)
    ctx->pc = 0x167984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167988: 0xc4ac0200  lwc1        $f12, 0x200($a1)
    ctx->pc = 0x167988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16798c: 0x46010342  mul.s       $f13, $f0, $f1
    ctx->pc = 0x16798cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x167990: 0x24e40050  addiu       $a0, $a3, 0x50
    ctx->pc = 0x167990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x167994: 0xc054c84  jal         func_153210
    ctx->pc = 0x167994u;
    SET_GPR_U32(ctx, 31, 0x16799Cu);
    ctx->pc = 0x167998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167994u;
    // 0x167998: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153210u, 0x167994u, 0x16799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16799Cu;
label_16799c:
    // 0x16799c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16799Cu;
    {
        const bool branch_taken_0x16799c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16799c) {
            ctx->pc = 0x1679ACu;
            goto label_1679ac;
        }
    }
    ctx->pc = 0x1679A4u;
    // 0x1679a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1679A4u;
    {
        const bool branch_taken_0x1679a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1679A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679A4u;
        // 0x1679a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679a4) {
            ctx->pc = 0x1679B0u;
            goto label_1679b0;
        }
    }
    ctx->pc = 0x1679ACu;
label_1679ac:
    // 0x1679ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1679acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1679b0:
    // 0x1679b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1679b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1679b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1679B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679B4u;
        // 0x1679b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1679B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1679BCu;
}
