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

// Function: FUN_0010c4d0
// Address: 0x10c4d0 - 0x10c580
void FUN_0010c4d0_0x10c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010c4d0_0x10c4d0");
#endif

    switch (ctx->pc) {
        case 0x10c4d0u: goto label_10c4d0;
        case 0x10c4d4u: goto label_10c4d4;
        case 0x10c4d8u: goto label_10c4d8;
        case 0x10c4dcu: goto label_10c4dc;
        case 0x10c4e0u: goto label_10c4e0;
        case 0x10c4e4u: goto label_10c4e4;
        case 0x10c4e8u: goto label_10c4e8;
        case 0x10c4ecu: goto label_10c4ec;
        case 0x10c4f0u: goto label_10c4f0;
        case 0x10c4f4u: goto label_10c4f4;
        case 0x10c4f8u: goto label_10c4f8;
        case 0x10c4fcu: goto label_10c4fc;
        case 0x10c500u: goto label_10c500;
        case 0x10c504u: goto label_10c504;
        case 0x10c508u: goto label_10c508;
        case 0x10c50cu: goto label_10c50c;
        case 0x10c510u: goto label_10c510;
        case 0x10c514u: goto label_10c514;
        case 0x10c518u: goto label_10c518;
        case 0x10c51cu: goto label_10c51c;
        case 0x10c520u: goto label_10c520;
        case 0x10c524u: goto label_10c524;
        case 0x10c528u: goto label_10c528;
        case 0x10c52cu: goto label_10c52c;
        case 0x10c530u: goto label_10c530;
        case 0x10c534u: goto label_10c534;
        case 0x10c538u: goto label_10c538;
        case 0x10c53cu: goto label_10c53c;
        case 0x10c540u: goto label_10c540;
        case 0x10c544u: goto label_10c544;
        case 0x10c548u: goto label_10c548;
        case 0x10c54cu: goto label_10c54c;
        case 0x10c550u: goto label_10c550;
        case 0x10c554u: goto label_10c554;
        case 0x10c558u: goto label_10c558;
        case 0x10c55cu: goto label_10c55c;
        case 0x10c560u: goto label_10c560;
        case 0x10c564u: goto label_10c564;
        case 0x10c568u: goto label_10c568;
        case 0x10c56cu: goto label_10c56c;
        case 0x10c570u: goto label_10c570;
        case 0x10c574u: goto label_10c574;
        case 0x10c578u: goto label_10c578;
        case 0x10c57cu: goto label_10c57c;
        default: break;
    }

    ctx->pc = 0x10c4d0u;

label_10c4d0:
    // 0x10c4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10c4d4:
    // 0x10c4d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10c4d8:
    // 0x10c4d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10c4dc:
    // 0x10c4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10c4e0:
    // 0x10c4e0: 0x26020230  addiu       $v0, $s0, 0x230
    ctx->pc = 0x10c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_10c4e4:
    // 0x10c4e4: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x10c4e4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_10c4e8:
    // 0x10c4e8: 0x7c860230  sq          $a2, 0x230($a0)
    ctx->pc = 0x10c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 560), GPR_VEC(ctx, 6));
label_10c4ec:
    // 0x10c4ec: 0x26030220  addiu       $v1, $s0, 0x220
    ctx->pc = 0x10c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_10c4f0:
    // 0x10c4f0: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x10c4f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_10c4f4:
    // 0x10c4f4: 0x7c860220  sq          $a2, 0x220($a0)
    ctx->pc = 0x10c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 544), GPR_VEC(ctx, 6));
label_10c4f8:
    // 0x10c4f8: 0xc4800234  lwc1        $f0, 0x234($a0)
    ctx->pc = 0x10c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10c4fc:
    // 0x10c4fc: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x10c4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_10c500:
    // 0x10c500: 0xe4800234  swc1        $f0, 0x234($a0)
    ctx->pc = 0x10c500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
label_10c504:
    // 0x10c504: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10c504u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_10c508:
    // 0x10c508: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x10c508u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10c50c:
    // 0x10c50c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10c50cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10c510:
    // 0x10c510: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x10c510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10c514:
    // 0x10c514: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x10c514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10c518:
    // 0x10c518: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10c518u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10c51c:
    // 0x10c51c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10c51cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_10c520:
    // 0x10c520: 0x4a0003bf  vwaitq
    ctx->pc = 0x10c520u;
    // VWAITQ (Q already resolved in this runtime)
label_10c524:
    // 0x10c524: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10c524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10c528:
    // 0x10c528: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10c528u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_10c52c:
    // 0x10c52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10c52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10c530:
    // 0x10c530: 0xac820240  sw          $v0, 0x240($a0)
    ctx->pc = 0x10c530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 576), GPR_U32(ctx, 2));
label_10c534:
    // 0x10c534: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x10c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10c538:
    // 0x10c538: 0xc4800240  lwc1        $f0, 0x240($a0)
    ctx->pc = 0x10c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10c53c:
    // 0x10c53c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x10c53cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_10c540:
    // 0x10c540: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10c540u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10c544:
    // 0x10c544: 0xe4800248  swc1        $f0, 0x248($a0)
    ctx->pc = 0x10c544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 584), bits); }
label_10c548:
    // 0x10c548: 0xac800244  sw          $zero, 0x244($a0)
    ctx->pc = 0x10c548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 0));
label_10c54c:
    // 0x10c54c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x10c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_10c550:
    // 0x10c550: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c554:
    // 0x10c554: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10c554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10c558:
    // 0x10c558: 0x320f809  jalr        $t9
label_10c55c:
    if (ctx->pc == 0x10C55Cu) {
        ctx->pc = 0x10C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C558u;
        // 0x10c55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C560u;
        goto label_10c560;
    }
    ctx->pc = 0x10C558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C560u);
        ctx->pc = 0x10C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C558u;
        // 0x10c55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C558u, 0x10C560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C560u;
label_10c560:
    // 0x10c560: 0xa200007a  sb          $zero, 0x7A($s0)
    ctx->pc = 0x10c560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 0));
label_10c564:
    // 0x10c564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10c564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c568:
    // 0x10c568: 0xa2030078  sb          $v1, 0x78($s0)
    ctx->pc = 0x10c568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 3));
label_10c56c:
    // 0x10c56c: 0xa603024e  sh          $v1, 0x24E($s0)
    ctx->pc = 0x10c56cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 590), (uint16_t)GPR_U32(ctx, 3));
label_10c570:
    // 0x10c570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10c574:
    // 0x10c574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10c578:
    // 0x10c578: 0x3e00008  jr          $ra
label_10c57c:
    if (ctx->pc == 0x10C57Cu) {
        ctx->pc = 0x10C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C578u;
        // 0x10c57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C580u;
        goto label_fallthrough_0x10c578;
    }
    ctx->pc = 0x10C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C578u;
        // 0x10c57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10c578:
    ctx->pc = 0x10C580u;
}
