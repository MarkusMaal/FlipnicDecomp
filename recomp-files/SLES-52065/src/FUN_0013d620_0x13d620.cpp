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

// Function: FUN_0013d620
// Address: 0x13d620 - 0x13d854
void FUN_0013d620_0x13d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d620_0x13d620");
#endif

    switch (ctx->pc) {
        case 0x13d620u: goto label_13d620;
        case 0x13d624u: goto label_13d624;
        case 0x13d628u: goto label_13d628;
        case 0x13d62cu: goto label_13d62c;
        case 0x13d630u: goto label_13d630;
        case 0x13d634u: goto label_13d634;
        case 0x13d638u: goto label_13d638;
        case 0x13d63cu: goto label_13d63c;
        case 0x13d640u: goto label_13d640;
        case 0x13d644u: goto label_13d644;
        case 0x13d648u: goto label_13d648;
        case 0x13d64cu: goto label_13d64c;
        case 0x13d650u: goto label_13d650;
        case 0x13d654u: goto label_13d654;
        case 0x13d658u: goto label_13d658;
        case 0x13d65cu: goto label_13d65c;
        case 0x13d660u: goto label_13d660;
        case 0x13d664u: goto label_13d664;
        case 0x13d668u: goto label_13d668;
        case 0x13d66cu: goto label_13d66c;
        case 0x13d670u: goto label_13d670;
        case 0x13d674u: goto label_13d674;
        case 0x13d678u: goto label_13d678;
        case 0x13d67cu: goto label_13d67c;
        case 0x13d680u: goto label_13d680;
        case 0x13d684u: goto label_13d684;
        case 0x13d688u: goto label_13d688;
        case 0x13d68cu: goto label_13d68c;
        case 0x13d690u: goto label_13d690;
        case 0x13d694u: goto label_13d694;
        case 0x13d698u: goto label_13d698;
        case 0x13d69cu: goto label_13d69c;
        case 0x13d6a0u: goto label_13d6a0;
        case 0x13d6a4u: goto label_13d6a4;
        case 0x13d6a8u: goto label_13d6a8;
        case 0x13d6acu: goto label_13d6ac;
        case 0x13d6b0u: goto label_13d6b0;
        case 0x13d6b4u: goto label_13d6b4;
        case 0x13d6b8u: goto label_13d6b8;
        case 0x13d6bcu: goto label_13d6bc;
        case 0x13d6c0u: goto label_13d6c0;
        case 0x13d6c4u: goto label_13d6c4;
        case 0x13d6c8u: goto label_13d6c8;
        case 0x13d6ccu: goto label_13d6cc;
        case 0x13d6d0u: goto label_13d6d0;
        case 0x13d6d4u: goto label_13d6d4;
        case 0x13d6d8u: goto label_13d6d8;
        case 0x13d6dcu: goto label_13d6dc;
        case 0x13d6e0u: goto label_13d6e0;
        case 0x13d6e4u: goto label_13d6e4;
        case 0x13d6e8u: goto label_13d6e8;
        case 0x13d6ecu: goto label_13d6ec;
        case 0x13d6f0u: goto label_13d6f0;
        case 0x13d6f4u: goto label_13d6f4;
        case 0x13d6f8u: goto label_13d6f8;
        case 0x13d6fcu: goto label_13d6fc;
        case 0x13d700u: goto label_13d700;
        case 0x13d704u: goto label_13d704;
        case 0x13d708u: goto label_13d708;
        case 0x13d70cu: goto label_13d70c;
        case 0x13d710u: goto label_13d710;
        case 0x13d714u: goto label_13d714;
        case 0x13d718u: goto label_13d718;
        case 0x13d71cu: goto label_13d71c;
        case 0x13d720u: goto label_13d720;
        case 0x13d724u: goto label_13d724;
        case 0x13d728u: goto label_13d728;
        case 0x13d72cu: goto label_13d72c;
        case 0x13d730u: goto label_13d730;
        case 0x13d734u: goto label_13d734;
        case 0x13d738u: goto label_13d738;
        case 0x13d73cu: goto label_13d73c;
        case 0x13d740u: goto label_13d740;
        case 0x13d744u: goto label_13d744;
        case 0x13d748u: goto label_13d748;
        case 0x13d74cu: goto label_13d74c;
        case 0x13d750u: goto label_13d750;
        case 0x13d754u: goto label_13d754;
        case 0x13d758u: goto label_13d758;
        case 0x13d75cu: goto label_13d75c;
        case 0x13d760u: goto label_13d760;
        case 0x13d764u: goto label_13d764;
        case 0x13d768u: goto label_13d768;
        case 0x13d76cu: goto label_13d76c;
        case 0x13d770u: goto label_13d770;
        case 0x13d774u: goto label_13d774;
        case 0x13d778u: goto label_13d778;
        case 0x13d77cu: goto label_13d77c;
        case 0x13d780u: goto label_13d780;
        case 0x13d784u: goto label_13d784;
        case 0x13d788u: goto label_13d788;
        case 0x13d78cu: goto label_13d78c;
        case 0x13d790u: goto label_13d790;
        case 0x13d794u: goto label_13d794;
        case 0x13d798u: goto label_13d798;
        case 0x13d79cu: goto label_13d79c;
        case 0x13d7a0u: goto label_13d7a0;
        case 0x13d7a4u: goto label_13d7a4;
        case 0x13d7a8u: goto label_13d7a8;
        case 0x13d7acu: goto label_13d7ac;
        case 0x13d7b0u: goto label_13d7b0;
        case 0x13d7b4u: goto label_13d7b4;
        case 0x13d7b8u: goto label_13d7b8;
        case 0x13d7bcu: goto label_13d7bc;
        case 0x13d7c0u: goto label_13d7c0;
        case 0x13d7c4u: goto label_13d7c4;
        case 0x13d7c8u: goto label_13d7c8;
        case 0x13d7ccu: goto label_13d7cc;
        case 0x13d7d0u: goto label_13d7d0;
        case 0x13d7d4u: goto label_13d7d4;
        case 0x13d7d8u: goto label_13d7d8;
        case 0x13d7dcu: goto label_13d7dc;
        case 0x13d7e0u: goto label_13d7e0;
        case 0x13d7e4u: goto label_13d7e4;
        case 0x13d7e8u: goto label_13d7e8;
        case 0x13d7ecu: goto label_13d7ec;
        case 0x13d7f0u: goto label_13d7f0;
        case 0x13d7f4u: goto label_13d7f4;
        case 0x13d7f8u: goto label_13d7f8;
        case 0x13d7fcu: goto label_13d7fc;
        case 0x13d800u: goto label_13d800;
        case 0x13d804u: goto label_13d804;
        case 0x13d808u: goto label_13d808;
        case 0x13d80cu: goto label_13d80c;
        case 0x13d810u: goto label_13d810;
        case 0x13d814u: goto label_13d814;
        case 0x13d818u: goto label_13d818;
        case 0x13d81cu: goto label_13d81c;
        case 0x13d820u: goto label_13d820;
        case 0x13d824u: goto label_13d824;
        case 0x13d828u: goto label_13d828;
        case 0x13d82cu: goto label_13d82c;
        case 0x13d830u: goto label_13d830;
        case 0x13d834u: goto label_13d834;
        case 0x13d838u: goto label_13d838;
        case 0x13d83cu: goto label_13d83c;
        case 0x13d840u: goto label_13d840;
        case 0x13d844u: goto label_13d844;
        case 0x13d848u: goto label_13d848;
        case 0x13d84cu: goto label_13d84c;
        case 0x13d850u: goto label_13d850;
        default: break;
    }

    ctx->pc = 0x13d620u;

label_13d620:
    // 0x13d620: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13d620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_13d624:
    // 0x13d624: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d628:
    // 0x13d628: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13d62c:
    // 0x13d62c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13d630:
    // 0x13d630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d634:
    // 0x13d634: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13d638:
    // 0x13d638: 0x90840055  lbu         $a0, 0x55($a0)
    ctx->pc = 0x13d638u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
label_13d63c:
    // 0x13d63c: 0x14830080  bne         $a0, $v1, . + 4 + (0x80 << 2)
label_13d640:
    if (ctx->pc == 0x13D640u) {
        ctx->pc = 0x13D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D63Cu;
        // 0x13d640: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D644u;
        goto label_13d644;
    }
    ctx->pc = 0x13D63Cu;
    {
        const bool branch_taken_0x13d63c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D63Cu;
        // 0x13d640: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d63c) {
            ctx->pc = 0x13D840u;
            goto label_13d840;
        }
    }
    ctx->pc = 0x13D644u;
label_13d644:
    // 0x13d644: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x13d644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_13d648:
    // 0x13d648: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x13d648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d64c:
    // 0x13d64c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x13d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_13d650:
    // 0x13d650: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x13d650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d654:
    // 0x13d654: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13d654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13d658:
    // 0x13d658: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x13d658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_13d65c:
    // 0x13d65c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x13d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_13d660:
    // 0x13d660: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x13d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d664:
    // 0x13d664: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x13d664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d668:
    // 0x13d668: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13d668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13d66c:
    // 0x13d66c: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x13d66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_13d670:
    // 0x13d670: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x13d670u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_13d674:
    // 0x13d674: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x13d674u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_13d678:
    // 0x13d678: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x13d678u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_13d67c:
    // 0x13d67c: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x13d67cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_13d680:
    // 0x13d680: 0x4be8e1bc  vmulax.xyzw $ACC, $vf28, $vf8x
    ctx->pc = 0x13d680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d684:
    // 0x13d684: 0x4be8e8bd  vmadday.xyzw $ACC, $vf29, $vf8y
    ctx->pc = 0x13d684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d688:
    // 0x13d688: 0x4be8f0be  vmaddaz.xyzw $ACC, $vf30, $vf8z
    ctx->pc = 0x13d688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d68c:
    // 0x13d68c: 0x4be8fb0b  vmaddw.xyzw $vf12, $vf31, $vf8w
    ctx->pc = 0x13d68cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_13d690:
    // 0x13d690: 0x4be9e1bc  vmulax.xyzw $ACC, $vf28, $vf9x
    ctx->pc = 0x13d690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d694:
    // 0x13d694: 0x4be9e8bd  vmadday.xyzw $ACC, $vf29, $vf9y
    ctx->pc = 0x13d694u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d698:
    // 0x13d698: 0x4be9f0be  vmaddaz.xyzw $ACC, $vf30, $vf9z
    ctx->pc = 0x13d698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d69c:
    // 0x13d69c: 0x4be9fb4b  vmaddw.xyzw $vf13, $vf31, $vf9w
    ctx->pc = 0x13d69cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_13d6a0:
    // 0x13d6a0: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x13d6a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d6a4:
    // 0x13d6a4: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x13d6a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d6a8:
    // 0x13d6a8: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x13d6a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d6ac:
    // 0x13d6ac: 0x4beafb8b  vmaddw.xyzw $vf14, $vf31, $vf10w
    ctx->pc = 0x13d6acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_13d6b0:
    // 0x13d6b0: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x13d6b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d6b4:
    // 0x13d6b4: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x13d6b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d6b8:
    // 0x13d6b8: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x13d6b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d6bc:
    // 0x13d6bc: 0x4bebfbcb  vmaddw.xyzw $vf15, $vf31, $vf11w
    ctx->pc = 0x13d6bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_13d6c0:
    // 0x13d6c0: 0x4bfc633c  vmove.xyzw  $vf28, $vf12
    ctx->pc = 0x13d6c0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[12], _mm_castsi128_ps(mask)); }
label_13d6c4:
    // 0x13d6c4: 0x4bfd6b3c  vmove.xyzw  $vf29, $vf13
    ctx->pc = 0x13d6c4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[13], _mm_castsi128_ps(mask)); }
label_13d6c8:
    // 0x13d6c8: 0x4bfe733c  vmove.xyzw  $vf30, $vf14
    ctx->pc = 0x13d6c8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[14], _mm_castsi128_ps(mask)); }
label_13d6cc:
    // 0x13d6cc: 0x4bff7b3c  vmove.xyzw  $vf31, $vf15
    ctx->pc = 0x13d6ccu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[15], _mm_castsi128_ps(mask)); }
label_13d6d0:
    // 0x13d6d0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x13d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_13d6d4:
    // 0x13d6d4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_13d6d8:
    if (ctx->pc == 0x13D6D8u) {
        ctx->pc = 0x13D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6D4u;
        // 0x13d6d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D6DCu;
        goto label_13d6dc;
    }
    ctx->pc = 0x13D6D4u;
    {
        const bool branch_taken_0x13d6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6D4u;
        // 0x13d6d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6d4) {
            ctx->pc = 0x13D778u;
            goto label_13d778;
        }
    }
    ctx->pc = 0x13D6DCu;
label_13d6dc:
    // 0x13d6dc: 0xc061bf0  jal         func_186FC0
label_13d6e0:
    if (ctx->pc == 0x13D6E0u) {
        ctx->pc = 0x13D6E4u;
        goto label_13d6e4;
    }
    ctx->pc = 0x13D6DCu;
    SET_GPR_U32(ctx, 31, 0x13D6E4u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x13D6DCu, 0x13D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D6E4u;
label_13d6e4:
    // 0x13d6e4: 0xc061b50  jal         func_186D40
label_13d6e8:
    if (ctx->pc == 0x13D6E8u) {
        ctx->pc = 0x13D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6E4u;
        // 0x13d6e8: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D6ECu;
        goto label_13d6ec;
    }
    ctx->pc = 0x13D6E4u;
    SET_GPR_U32(ctx, 31, 0x13D6ECu);
    ctx->pc = 0x13D6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D6E4u;
    // 0x13d6e8: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x13D6E4u, 0x13D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D6ECu;
label_13d6ec:
    // 0x13d6ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13d6f0:
    // 0x13d6f0: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_13d6f4:
    if (ctx->pc == 0x13D6F4u) {
        ctx->pc = 0x13D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6F0u;
        // 0x13d6f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D6F8u;
        goto label_13d6f8;
    }
    ctx->pc = 0x13D6F0u;
    {
        const bool branch_taken_0x13d6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6F0u;
        // 0x13d6f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6f0) {
            ctx->pc = 0x13D728u;
            goto label_13d728;
        }
    }
    ctx->pc = 0x13D6F8u;
label_13d6f8:
    // 0x13d6f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d6fc:
    // 0x13d6fc: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_13d700:
    if (ctx->pc == 0x13D700u) {
        ctx->pc = 0x13D704u;
        goto label_13d704;
    }
    ctx->pc = 0x13D6FCu;
    {
        const bool branch_taken_0x13d6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13d6fc) {
            ctx->pc = 0x13D71Cu;
            goto label_13d71c;
        }
    }
    ctx->pc = 0x13D704u;
label_13d704:
    // 0x13d704: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13d708:
    if (ctx->pc == 0x13D708u) {
        ctx->pc = 0x13D70Cu;
        goto label_13d70c;
    }
    ctx->pc = 0x13D704u;
    {
        const bool branch_taken_0x13d704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d704) {
            ctx->pc = 0x13D714u;
            goto label_13d714;
        }
    }
    ctx->pc = 0x13D70Cu;
label_13d70c:
    // 0x13d70c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_13d710:
    if (ctx->pc == 0x13D710u) {
        ctx->pc = 0x13D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D70Cu;
        // 0x13d710: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D714u;
        goto label_13d714;
    }
    ctx->pc = 0x13D70Cu;
    {
        const bool branch_taken_0x13d70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D70Cu;
        // 0x13d710: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d70c) {
            ctx->pc = 0x13D780u;
            goto label_13d780;
        }
    }
    ctx->pc = 0x13D714u;
label_13d714:
    // 0x13d714: 0x1000004a  b           . + 4 + (0x4A << 2)
label_13d718:
    if (ctx->pc == 0x13D718u) {
        ctx->pc = 0x13D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D714u;
        // 0x13d718: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D71Cu;
        goto label_13d71c;
    }
    ctx->pc = 0x13D714u;
    {
        const bool branch_taken_0x13d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D714u;
        // 0x13d718: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d714) {
            ctx->pc = 0x13D840u;
            goto label_13d840;
        }
    }
    ctx->pc = 0x13D71Cu;
label_13d71c:
    // 0x13d71c: 0x10000017  b           . + 4 + (0x17 << 2)
label_13d720:
    if (ctx->pc == 0x13D720u) {
        ctx->pc = 0x13D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D71Cu;
        // 0x13d720: 0xae230184  sw          $v1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D724u;
        goto label_13d724;
    }
    ctx->pc = 0x13D71Cu;
    {
        const bool branch_taken_0x13d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D71Cu;
        // 0x13d720: 0xae230184  sw          $v1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d71c) {
            ctx->pc = 0x13D77Cu;
            goto label_13d77c;
        }
    }
    ctx->pc = 0x13D724u;
label_13d724:
    // 0x13d724: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13d724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13d728:
    // 0x13d728: 0xc061bd0  jal         func_186F40
label_13d72c:
    if (ctx->pc == 0x13D72Cu) {
        ctx->pc = 0x13D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D728u;
        // 0x13d72c: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D730u;
        goto label_13d730;
    }
    ctx->pc = 0x13D728u;
    SET_GPR_U32(ctx, 31, 0x13D730u);
    ctx->pc = 0x13D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D728u;
    // 0x13d72c: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F40u, 0x13D728u, 0x13D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D730u;
label_13d730:
    // 0x13d730: 0xc061b50  jal         func_186D40
label_13d734:
    if (ctx->pc == 0x13D734u) {
        ctx->pc = 0x13D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D730u;
        // 0x13d734: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D738u;
        goto label_13d738;
    }
    ctx->pc = 0x13D730u;
    SET_GPR_U32(ctx, 31, 0x13D738u);
    ctx->pc = 0x13D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D730u;
    // 0x13d734: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x13D730u, 0x13D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D738u;
label_13d738:
    // 0x13d738: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13d73c:
    // 0x13d73c: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
label_13d740:
    if (ctx->pc == 0x13D740u) {
        ctx->pc = 0x13D744u;
        goto label_13d744;
    }
    ctx->pc = 0x13D73Cu;
    {
        const bool branch_taken_0x13d73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13d73c) {
            ctx->pc = 0x13D768u;
            goto label_13d768;
        }
    }
    ctx->pc = 0x13D744u;
label_13d744:
    // 0x13d744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d748:
    // 0x13d748: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_13d74c:
    if (ctx->pc == 0x13D74Cu) {
        ctx->pc = 0x13D750u;
        goto label_13d750;
    }
    ctx->pc = 0x13D748u;
    {
        const bool branch_taken_0x13d748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13d748) {
            ctx->pc = 0x13D760u;
            goto label_13d760;
        }
    }
    ctx->pc = 0x13D750u;
label_13d750:
    // 0x13d750: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_13d754:
    if (ctx->pc == 0x13D754u) {
        ctx->pc = 0x13D758u;
        goto label_13d758;
    }
    ctx->pc = 0x13D750u;
    {
        const bool branch_taken_0x13d750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d750) {
            ctx->pc = 0x13D840u;
            goto label_13d840;
        }
    }
    ctx->pc = 0x13D758u;
label_13d758:
    // 0x13d758: 0x10000008  b           . + 4 + (0x8 << 2)
label_13d75c:
    if (ctx->pc == 0x13D75Cu) {
        ctx->pc = 0x13D760u;
        goto label_13d760;
    }
    ctx->pc = 0x13D758u;
    {
        const bool branch_taken_0x13d758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d758) {
            ctx->pc = 0x13D77Cu;
            goto label_13d77c;
        }
    }
    ctx->pc = 0x13D760u;
label_13d760:
    // 0x13d760: 0x10000006  b           . + 4 + (0x6 << 2)
label_13d764:
    if (ctx->pc == 0x13D764u) {
        ctx->pc = 0x13D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D760u;
        // 0x13d764: 0xae240184  sw          $a0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D768u;
        goto label_13d768;
    }
    ctx->pc = 0x13D760u;
    {
        const bool branch_taken_0x13d760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D760u;
        // 0x13d764: 0xae240184  sw          $a0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d760) {
            ctx->pc = 0x13D77Cu;
            goto label_13d77c;
        }
    }
    ctx->pc = 0x13D768u;
label_13d768:
    // 0x13d768: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13d76c:
    // 0x13d76c: 0x10000003  b           . + 4 + (0x3 << 2)
label_13d770:
    if (ctx->pc == 0x13D770u) {
        ctx->pc = 0x13D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D76Cu;
        // 0x13d770: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D774u;
        goto label_13d774;
    }
    ctx->pc = 0x13D76Cu;
    {
        const bool branch_taken_0x13d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D76Cu;
        // 0x13d770: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d76c) {
            ctx->pc = 0x13D77Cu;
            goto label_13d77c;
        }
    }
    ctx->pc = 0x13D774u;
label_13d774:
    // 0x13d774: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13d778:
    // 0x13d778: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x13d778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
label_13d77c:
    // 0x13d77c: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x13d77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_13d780:
    // 0x13d780: 0xc050714  jal         func_141C50
label_13d784:
    if (ctx->pc == 0x13D784u) {
        ctx->pc = 0x13D788u;
        goto label_13d788;
    }
    ctx->pc = 0x13D780u;
    SET_GPR_U32(ctx, 31, 0x13D788u);
    ctx->pc = 0x141C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141C50u, 0x13D780u, 0x13D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D788u;
label_13d788:
    // 0x13d788: 0xc04c554  jal         func_131550
label_13d78c:
    if (ctx->pc == 0x13D78Cu) {
        ctx->pc = 0x13D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D788u;
        // 0x13d78c: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D790u;
        goto label_13d790;
    }
    ctx->pc = 0x13D788u;
    SET_GPR_U32(ctx, 31, 0x13D790u);
    ctx->pc = 0x13D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D788u;
    // 0x13d78c: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13D788u, 0x13D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D790u;
label_13d790:
    // 0x13d790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d794:
    // 0x13d794: 0xc04c550  jal         func_131540
label_13d798:
    if (ctx->pc == 0x13D798u) {
        ctx->pc = 0x13D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D794u;
        // 0x13d798: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D79Cu;
        goto label_13d79c;
    }
    ctx->pc = 0x13D794u;
    SET_GPR_U32(ctx, 31, 0x13D79Cu);
    ctx->pc = 0x13D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D794u;
    // 0x13d798: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x13D794u, 0x13D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D79Cu;
label_13d79c:
    // 0x13d79c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x13d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_13d7a0:
    // 0x13d7a0: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x13d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_13d7a4:
    // 0x13d7a4: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x13d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_13d7a8:
    // 0x13d7a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x13d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_13d7ac:
    // 0x13d7ac: 0xc04c554  jal         func_131550
label_13d7b0:
    if (ctx->pc == 0x13D7B0u) {
        ctx->pc = 0x13D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7ACu;
        // 0x13d7b0: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D7B4u;
        goto label_13d7b4;
    }
    ctx->pc = 0x13D7ACu;
    SET_GPR_U32(ctx, 31, 0x13D7B4u);
    ctx->pc = 0x13D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D7ACu;
    // 0x13d7b0: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13D7ACu, 0x13D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D7B4u;
label_13d7b4:
    // 0x13d7b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13d7b8:
    // 0x13d7b8: 0xc04c54c  jal         func_131530
label_13d7bc:
    if (ctx->pc == 0x13D7BCu) {
        ctx->pc = 0x13D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7B8u;
        // 0x13d7bc: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D7C0u;
        goto label_13d7c0;
    }
    ctx->pc = 0x13D7B8u;
    SET_GPR_U32(ctx, 31, 0x13D7C0u);
    ctx->pc = 0x13D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D7B8u;
    // 0x13d7bc: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x13D7B8u, 0x13D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D7C0u;
label_13d7c0:
    // 0x13d7c0: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x13d7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_13d7c4:
    // 0x13d7c4: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x13d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_13d7c8:
    // 0x13d7c8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x13d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13d7cc:
    // 0x13d7cc: 0xafa5008c  sw          $a1, 0x8C($sp)
    ctx->pc = 0x13d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
label_13d7d0:
    // 0x13d7d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d7d4:
    // 0x13d7d4: 0x10000016  b           . + 4 + (0x16 << 2)
label_13d7d8:
    if (ctx->pc == 0x13D7D8u) {
        ctx->pc = 0x13D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7D4u;
        // 0x13d7d8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D7DCu;
        goto label_13d7dc;
    }
    ctx->pc = 0x13D7D4u;
    {
        const bool branch_taken_0x13d7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7D4u;
        // 0x13d7d8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7d4) {
            ctx->pc = 0x13D830u;
            goto label_13d830;
        }
    }
    ctx->pc = 0x13D7DCu;
label_13d7dc:
    // 0x13d7dc: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x13d7dcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_13d7e0:
    // 0x13d7e0: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x13d7e0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_13d7e4:
    // 0x13d7e4: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x13d7e4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_13d7e8:
    // 0x13d7e8: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x13d7e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_13d7ec:
    // 0x13d7ec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13d7f0:
    // 0x13d7f0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13d7f4:
    // 0x13d7f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d7f8:
    // 0x13d7f8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x13d7f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_13d7fc:
    // 0x13d7fc: 0x320f809  jalr        $t9
label_13d800:
    if (ctx->pc == 0x13D800u) {
        ctx->pc = 0x13D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7FCu;
        // 0x13d800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D804u;
        goto label_13d804;
    }
    ctx->pc = 0x13D7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D804u);
        ctx->pc = 0x13D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7FCu;
        // 0x13d800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D7FCu, 0x13D804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D804u;
label_13d804:
    // 0x13d804: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x13d804u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_13d808:
    // 0x13d808: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x13d808u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_13d80c:
    // 0x13d80c: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x13d80cu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_13d810:
    // 0x13d810: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x13d810u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_13d814:
    // 0x13d814: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x13d814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13d818:
    // 0x13d818: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x13d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13d81c:
    // 0x13d81c: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x13d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_13d820:
    // 0x13d820: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x13d820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_13d824:
    // 0x13d824: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x13d824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_13d828:
    // 0x13d828: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x13d828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_13d82c:
    // 0x13d82c: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x13d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_13d830:
    // 0x13d830: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x13d830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13d834:
    // 0x13d834: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x13d834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_13d838:
    // 0x13d838: 0x1483ffe8  bne         $a0, $v1, . + 4 + (-0x18 << 2)
label_13d83c:
    if (ctx->pc == 0x13D83Cu) {
        ctx->pc = 0x13D840u;
        goto label_13d840;
    }
    ctx->pc = 0x13D838u;
    {
        const bool branch_taken_0x13d838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13d838) {
            ctx->pc = 0x13D7DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d7dc;
        }
    }
    ctx->pc = 0x13D840u;
label_13d840:
    // 0x13d840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13d844:
    // 0x13d844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d848:
    // 0x13d848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d84c:
    // 0x13d84c: 0x3e00008  jr          $ra
label_13d850:
    if (ctx->pc == 0x13D850u) {
        ctx->pc = 0x13D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D84Cu;
        // 0x13d850: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D854u;
        goto label_fallthrough_0x13d84c;
    }
    ctx->pc = 0x13D84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D84Cu;
        // 0x13d850: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13d84c:
    ctx->pc = 0x13D854u;
}
