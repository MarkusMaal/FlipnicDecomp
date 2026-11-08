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

// Function: entry_00162614
// Address: 0x162614 - 0x162744
void entry_00162614_0x162614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162614_0x162614");
#endif

    switch (ctx->pc) {
        case 0x162650u: goto label_162650;
        case 0x16271cu: goto label_16271c;
        case 0x162730u: goto label_162730;
        case 0x16273cu: goto label_16273c;
        default: break;
    }

    ctx->pc = 0x162614u;

label_162614:
    // 0x162614: 0x8e2802e8  lw          $t0, 0x2E8($s1)
    ctx->pc = 0x162614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
label_162618:
    // 0x162618: 0x26270300  addiu       $a3, $s1, 0x300
    ctx->pc = 0x162618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_16261c:
    // 0x16261c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x16261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_162620:
    // 0x162620: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x162620u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_162624:
    // 0x162624: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x162624u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_162628:
    // 0x162628: 0x0  nop
    ctx->pc = 0x162628u;
    // NOP
label_16262c:
    // 0x16262c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16262cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_162630:
    // 0x162630: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x162630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_162634:
    // 0x162634: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x162634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162638:
    // 0x162638: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x162638u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_16263c:
    // 0x16263c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x16263cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_162640:
    // 0x162640: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x162640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_162644:
    // 0x162644: 0x8e28033c  lw          $t0, 0x33C($s1)
    ctx->pc = 0x162644u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_162648:
    // 0x162648: 0xc05879c  jal         func_161E70
label_16264c:
    if (ctx->pc == 0x16264Cu) {
        ctx->pc = 0x16264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162648u;
        // 0x16264c: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162650u;
        goto label_162650;
    }
    ctx->pc = 0x162648u;
    SET_GPR_U32(ctx, 31, 0x162650u);
    ctx->pc = 0x16264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162648u;
    // 0x16264c: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161E70u, 0x162648u, 0x162650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162650u;
label_162650:
    // 0x162650: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x162650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_162654:
    // 0x162654: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x162654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_162658:
    // 0x162658: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x162658u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16265c:
    // 0x16265c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16265cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_162660:
    // 0x162660: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x162660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162664:
    // 0x162664: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x162664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_162668:
    // 0x162668: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x162668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16266c:
    // 0x16266c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16266cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_162670:
    // 0x162670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162674:
    // 0x162674: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x162674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162678:
    // 0x162678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16267c:
    // 0x16267c: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x16267cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_162680:
    // 0x162680: 0x0  nop
    ctx->pc = 0x162680u;
    // NOP
label_162684:
    // 0x162684: 0x0  nop
    ctx->pc = 0x162684u;
    // NOP
label_162688:
    // 0x162688: 0x12620155  beq         $s3, $v0, . + 4 + (0x155 << 2)
label_16268c:
    if (ctx->pc == 0x16268Cu) {
        ctx->pc = 0x162690u;
        goto label_162690;
    }
    ctx->pc = 0x162688u;
    {
        const bool branch_taken_0x162688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x162688) {
            ctx->pc = 0x162BE0u;
            return;
        }
    }
    ctx->pc = 0x162690u;
label_162690:
    // 0x162690: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x162690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_162694:
    // 0x162694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162698:
    // 0x162698: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x162698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16269c:
    // 0x16269c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16269cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1626a0:
    // 0x1626a0: 0x0  nop
    ctx->pc = 0x1626a0u;
    // NOP
label_1626a4:
    // 0x1626a4: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x1626a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_1626a8:
    // 0x1626a8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1626ac:
    if (ctx->pc == 0x1626ACu) {
        ctx->pc = 0x1626ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626A8u;
        // 0x1626ac: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1626B0u;
        goto label_1626b0;
    }
    ctx->pc = 0x1626A8u;
    {
        const bool branch_taken_0x1626a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1626ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626A8u;
        // 0x1626ac: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626a8) {
            ctx->pc = 0x162744u;
            return;
        }
    }
    ctx->pc = 0x1626B0u;
label_1626b0:
    // 0x1626b0: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x1626b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1626b4:
    // 0x1626b4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1626b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1626b8:
    // 0x1626b8: 0x7e260290  sq          $a2, 0x290($s1)
    ctx->pc = 0x1626b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 656), GPR_VEC(ctx, 6));
label_1626bc:
    // 0x1626bc: 0x46020304  c1          0x20304
    ctx->pc = 0x1626bcu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_1626c0:
    // 0x1626c0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1626c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1626c4:
    // 0x1626c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1626c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1626c8:
    // 0x1626c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1626c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1626cc:
    // 0x1626cc: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1626ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1626d0:
    // 0x1626d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1626d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1626d4:
    // 0x1626d4: 0xc7a40210  lwc1        $f4, 0x210($sp)
    ctx->pc = 0x1626d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1626d8:
    // 0x1626d8: 0xc7a20214  lwc1        $f2, 0x214($sp)
    ctx->pc = 0x1626d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1626dc:
    // 0x1626dc: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x1626dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1626e0:
    // 0x1626e0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1626e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1626e4:
    // 0x1626e4: 0xc7a60200  lwc1        $f6, 0x200($sp)
    ctx->pc = 0x1626e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1626e8:
    // 0x1626e8: 0xc7a30204  lwc1        $f3, 0x204($sp)
    ctx->pc = 0x1626e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1626ec:
    // 0x1626ec: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1626ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_1626f0:
    // 0x1626f0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1626f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1626f4:
    // 0x1626f4: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x1626f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_1626f8:
    // 0x1626f8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1626f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1626fc:
    // 0x1626fc: 0xc7a10208  lwc1        $f1, 0x208($sp)
    ctx->pc = 0x1626fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162700:
    // 0x162700: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x162700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_162704:
    // 0x162704: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_162708:
    // 0x162708: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x162708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16270c:
    // 0x16270c: 0xe7a40200  swc1        $f4, 0x200($sp)
    ctx->pc = 0x16270cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_162710:
    // 0x162710: 0xe7a20204  swc1        $f2, 0x204($sp)
    ctx->pc = 0x162710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_162714:
    // 0x162714: 0xc055b3c  jal         func_156CF0
label_162718:
    if (ctx->pc == 0x162718u) {
        ctx->pc = 0x162718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162714u;
        // 0x162718: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16271Cu;
        goto label_16271c;
    }
    ctx->pc = 0x162714u;
    SET_GPR_U32(ctx, 31, 0x16271Cu);
    ctx->pc = 0x162718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162714u;
    // 0x162718: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x162714u, 0x16271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16271Cu;
label_16271c:
    // 0x16271c: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x16271cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_162720:
    // 0x162720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162724:
    // 0x162724: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x162724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_162728:
    // 0x162728: 0x320f809  jalr        $t9
label_16272c:
    if (ctx->pc == 0x16272Cu) {
        ctx->pc = 0x16272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162728u;
        // 0x16272c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162730u;
        goto label_162730;
    }
    ctx->pc = 0x162728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162730u);
        ctx->pc = 0x16272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162728u;
        // 0x16272c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162728u, 0x162730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162730u;
label_162730:
    // 0x162730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162734:
    // 0x162734: 0xc0564b8  jal         func_1592E0
label_162738:
    if (ctx->pc == 0x162738u) {
        ctx->pc = 0x162738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162734u;
        // 0x162738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16273Cu;
        goto label_16273c;
    }
    ctx->pc = 0x162734u;
    SET_GPR_U32(ctx, 31, 0x16273Cu);
    ctx->pc = 0x162738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162734u;
    // 0x162738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x162734u, 0x16273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16273Cu;
label_16273c:
    // 0x16273c: 0x100001af  b           . + 4 + (0x1AF << 2)
label_162740:
    if (ctx->pc == 0x162740u) {
        ctx->pc = 0x162740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16273Cu;
        // 0x162740: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162744u;
        goto label_fallthrough_0x16273c;
    }
    ctx->pc = 0x16273Cu;
    {
        const bool branch_taken_0x16273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16273Cu;
        // 0x162740: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16273c) {
            ctx->pc = 0x162DFCu;
            return;
        }
    }
label_fallthrough_0x16273c:
    ctx->pc = 0x162744u;
}
