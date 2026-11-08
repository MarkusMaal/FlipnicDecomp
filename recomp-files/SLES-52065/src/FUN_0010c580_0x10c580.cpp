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

// Function: FUN_0010c580
// Address: 0x10c580 - 0x10c630
void FUN_0010c580_0x10c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010c580_0x10c580");
#endif

    switch (ctx->pc) {
        case 0x10c580u: goto label_10c580;
        case 0x10c584u: goto label_10c584;
        case 0x10c588u: goto label_10c588;
        case 0x10c58cu: goto label_10c58c;
        case 0x10c590u: goto label_10c590;
        case 0x10c594u: goto label_10c594;
        case 0x10c598u: goto label_10c598;
        case 0x10c59cu: goto label_10c59c;
        case 0x10c5a0u: goto label_10c5a0;
        case 0x10c5a4u: goto label_10c5a4;
        case 0x10c5a8u: goto label_10c5a8;
        case 0x10c5acu: goto label_10c5ac;
        case 0x10c5b0u: goto label_10c5b0;
        case 0x10c5b4u: goto label_10c5b4;
        case 0x10c5b8u: goto label_10c5b8;
        case 0x10c5bcu: goto label_10c5bc;
        case 0x10c5c0u: goto label_10c5c0;
        case 0x10c5c4u: goto label_10c5c4;
        case 0x10c5c8u: goto label_10c5c8;
        case 0x10c5ccu: goto label_10c5cc;
        case 0x10c5d0u: goto label_10c5d0;
        case 0x10c5d4u: goto label_10c5d4;
        case 0x10c5d8u: goto label_10c5d8;
        case 0x10c5dcu: goto label_10c5dc;
        case 0x10c5e0u: goto label_10c5e0;
        case 0x10c5e4u: goto label_10c5e4;
        case 0x10c5e8u: goto label_10c5e8;
        case 0x10c5ecu: goto label_10c5ec;
        case 0x10c5f0u: goto label_10c5f0;
        case 0x10c5f4u: goto label_10c5f4;
        case 0x10c5f8u: goto label_10c5f8;
        case 0x10c5fcu: goto label_10c5fc;
        case 0x10c600u: goto label_10c600;
        case 0x10c604u: goto label_10c604;
        case 0x10c608u: goto label_10c608;
        case 0x10c60cu: goto label_10c60c;
        case 0x10c610u: goto label_10c610;
        case 0x10c614u: goto label_10c614;
        case 0x10c618u: goto label_10c618;
        case 0x10c61cu: goto label_10c61c;
        case 0x10c620u: goto label_10c620;
        case 0x10c624u: goto label_10c624;
        case 0x10c628u: goto label_10c628;
        case 0x10c62cu: goto label_10c62c;
        default: break;
    }

    ctx->pc = 0x10c580u;

label_10c580:
    // 0x10c580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10c584:
    // 0x10c584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10c588:
    // 0x10c588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10c58c:
    // 0x10c58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10c590:
    // 0x10c590: 0x26020230  addiu       $v0, $s0, 0x230
    ctx->pc = 0x10c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_10c594:
    // 0x10c594: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x10c594u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_10c598:
    // 0x10c598: 0x7c860230  sq          $a2, 0x230($a0)
    ctx->pc = 0x10c598u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 560), GPR_VEC(ctx, 6));
label_10c59c:
    // 0x10c59c: 0x26030220  addiu       $v1, $s0, 0x220
    ctx->pc = 0x10c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_10c5a0:
    // 0x10c5a0: 0x78860060  lq          $a2, 0x60($a0)
    ctx->pc = 0x10c5a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 96)));
label_10c5a4:
    // 0x10c5a4: 0x7c860220  sq          $a2, 0x220($a0)
    ctx->pc = 0x10c5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 544), GPR_VEC(ctx, 6));
label_10c5a8:
    // 0x10c5a8: 0xc4800234  lwc1        $f0, 0x234($a0)
    ctx->pc = 0x10c5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10c5ac:
    // 0x10c5ac: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x10c5acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_10c5b0:
    // 0x10c5b0: 0xe4800234  swc1        $f0, 0x234($a0)
    ctx->pc = 0x10c5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
label_10c5b4:
    // 0x10c5b4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10c5b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_10c5b8:
    // 0x10c5b8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x10c5b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10c5bc:
    // 0x10c5bc: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x10c5bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10c5c0:
    // 0x10c5c0: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x10c5c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10c5c4:
    // 0x10c5c4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x10c5c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10c5c8:
    // 0x10c5c8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x10c5c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10c5cc:
    // 0x10c5cc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10c5ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_10c5d0:
    // 0x10c5d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x10c5d0u;
    // VWAITQ (Q already resolved in this runtime)
label_10c5d4:
    // 0x10c5d4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x10c5d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10c5d8:
    // 0x10c5d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10c5d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_10c5dc:
    // 0x10c5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10c5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10c5e0:
    // 0x10c5e0: 0xac820240  sw          $v0, 0x240($a0)
    ctx->pc = 0x10c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 576), GPR_U32(ctx, 2));
label_10c5e4:
    // 0x10c5e4: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x10c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10c5e8:
    // 0x10c5e8: 0xc4800240  lwc1        $f0, 0x240($a0)
    ctx->pc = 0x10c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10c5ec:
    // 0x10c5ec: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x10c5ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_10c5f0:
    // 0x10c5f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10c5f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10c5f4:
    // 0x10c5f4: 0xe4800248  swc1        $f0, 0x248($a0)
    ctx->pc = 0x10c5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 584), bits); }
label_10c5f8:
    // 0x10c5f8: 0xac800244  sw          $zero, 0x244($a0)
    ctx->pc = 0x10c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 0));
label_10c5fc:
    // 0x10c5fc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x10c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_10c600:
    // 0x10c600: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c604:
    // 0x10c604: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10c604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10c608:
    // 0x10c608: 0x320f809  jalr        $t9
label_10c60c:
    if (ctx->pc == 0x10C60Cu) {
        ctx->pc = 0x10C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C608u;
        // 0x10c60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C610u;
        goto label_10c610;
    }
    ctx->pc = 0x10C608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C610u);
        ctx->pc = 0x10C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C608u;
        // 0x10c60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C608u, 0x10C610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C610u;
label_10c610:
    // 0x10c610: 0xa200007a  sb          $zero, 0x7A($s0)
    ctx->pc = 0x10c610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 0));
label_10c614:
    // 0x10c614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10c614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c618:
    // 0x10c618: 0xa2030078  sb          $v1, 0x78($s0)
    ctx->pc = 0x10c618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 3));
label_10c61c:
    // 0x10c61c: 0xa603024e  sh          $v1, 0x24E($s0)
    ctx->pc = 0x10c61cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 590), (uint16_t)GPR_U32(ctx, 3));
label_10c620:
    // 0x10c620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10c624:
    // 0x10c624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10c628:
    // 0x10c628: 0x3e00008  jr          $ra
label_10c62c:
    if (ctx->pc == 0x10C62Cu) {
        ctx->pc = 0x10C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C628u;
        // 0x10c62c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C630u;
        goto label_fallthrough_0x10c628;
    }
    ctx->pc = 0x10C628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C628u;
        // 0x10c62c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10c628:
    ctx->pc = 0x10C630u;
}
