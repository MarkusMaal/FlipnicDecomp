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

// Function: FUN_00131690
// Address: 0x131690 - 0x131814
void FUN_00131690_0x131690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131690_0x131690");
#endif

    switch (ctx->pc) {
        case 0x131690u: goto label_131690;
        case 0x131694u: goto label_131694;
        case 0x131698u: goto label_131698;
        case 0x13169cu: goto label_13169c;
        case 0x1316a0u: goto label_1316a0;
        case 0x1316a4u: goto label_1316a4;
        case 0x1316a8u: goto label_1316a8;
        case 0x1316acu: goto label_1316ac;
        case 0x1316b0u: goto label_1316b0;
        case 0x1316b4u: goto label_1316b4;
        case 0x1316b8u: goto label_1316b8;
        case 0x1316bcu: goto label_1316bc;
        case 0x1316c0u: goto label_1316c0;
        case 0x1316c4u: goto label_1316c4;
        case 0x1316c8u: goto label_1316c8;
        case 0x1316ccu: goto label_1316cc;
        case 0x1316d0u: goto label_1316d0;
        case 0x1316d4u: goto label_1316d4;
        case 0x1316d8u: goto label_1316d8;
        case 0x1316dcu: goto label_1316dc;
        case 0x1316e0u: goto label_1316e0;
        case 0x1316e4u: goto label_1316e4;
        case 0x1316e8u: goto label_1316e8;
        case 0x1316ecu: goto label_1316ec;
        case 0x1316f0u: goto label_1316f0;
        case 0x1316f4u: goto label_1316f4;
        case 0x1316f8u: goto label_1316f8;
        case 0x1316fcu: goto label_1316fc;
        case 0x131700u: goto label_131700;
        case 0x131704u: goto label_131704;
        case 0x131708u: goto label_131708;
        case 0x13170cu: goto label_13170c;
        case 0x131710u: goto label_131710;
        case 0x131714u: goto label_131714;
        case 0x131718u: goto label_131718;
        case 0x13171cu: goto label_13171c;
        case 0x131720u: goto label_131720;
        case 0x131724u: goto label_131724;
        case 0x131728u: goto label_131728;
        case 0x13172cu: goto label_13172c;
        case 0x131730u: goto label_131730;
        case 0x131734u: goto label_131734;
        case 0x131738u: goto label_131738;
        case 0x13173cu: goto label_13173c;
        case 0x131740u: goto label_131740;
        case 0x131744u: goto label_131744;
        case 0x131748u: goto label_131748;
        case 0x13174cu: goto label_13174c;
        case 0x131750u: goto label_131750;
        case 0x131754u: goto label_131754;
        case 0x131758u: goto label_131758;
        case 0x13175cu: goto label_13175c;
        case 0x131760u: goto label_131760;
        case 0x131764u: goto label_131764;
        case 0x131768u: goto label_131768;
        case 0x13176cu: goto label_13176c;
        case 0x131770u: goto label_131770;
        case 0x131774u: goto label_131774;
        case 0x131778u: goto label_131778;
        case 0x13177cu: goto label_13177c;
        case 0x131780u: goto label_131780;
        case 0x131784u: goto label_131784;
        case 0x131788u: goto label_131788;
        case 0x13178cu: goto label_13178c;
        case 0x131790u: goto label_131790;
        case 0x131794u: goto label_131794;
        case 0x131798u: goto label_131798;
        case 0x13179cu: goto label_13179c;
        case 0x1317a0u: goto label_1317a0;
        case 0x1317a4u: goto label_1317a4;
        case 0x1317a8u: goto label_1317a8;
        case 0x1317acu: goto label_1317ac;
        case 0x1317b0u: goto label_1317b0;
        case 0x1317b4u: goto label_1317b4;
        case 0x1317b8u: goto label_1317b8;
        case 0x1317bcu: goto label_1317bc;
        case 0x1317c0u: goto label_1317c0;
        case 0x1317c4u: goto label_1317c4;
        case 0x1317c8u: goto label_1317c8;
        case 0x1317ccu: goto label_1317cc;
        case 0x1317d0u: goto label_1317d0;
        case 0x1317d4u: goto label_1317d4;
        case 0x1317d8u: goto label_1317d8;
        case 0x1317dcu: goto label_1317dc;
        case 0x1317e0u: goto label_1317e0;
        case 0x1317e4u: goto label_1317e4;
        case 0x1317e8u: goto label_1317e8;
        case 0x1317ecu: goto label_1317ec;
        case 0x1317f0u: goto label_1317f0;
        case 0x1317f4u: goto label_1317f4;
        case 0x1317f8u: goto label_1317f8;
        case 0x1317fcu: goto label_1317fc;
        case 0x131800u: goto label_131800;
        case 0x131804u: goto label_131804;
        case 0x131808u: goto label_131808;
        case 0x13180cu: goto label_13180c;
        case 0x131810u: goto label_131810;
        default: break;
    }

    ctx->pc = 0x131690u;

label_131690:
    // 0x131690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_131694:
    // 0x131694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_131698:
    // 0x131698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13169c:
    // 0x13169c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1316a0:
    // 0x1316a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1316a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1316a4:
    // 0x1316a4: 0x90830055  lbu         $v1, 0x55($a0)
    ctx->pc = 0x1316a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
label_1316a8:
    // 0x1316a8: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_1316ac:
    if (ctx->pc == 0x1316ACu) {
        ctx->pc = 0x1316ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316A8u;
        // 0x1316ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1316B0u;
        goto label_1316b0;
    }
    ctx->pc = 0x1316A8u;
    {
        const bool branch_taken_0x1316a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316A8u;
        // 0x1316ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316a8) {
            ctx->pc = 0x131800u;
            goto label_131800;
        }
    }
    ctx->pc = 0x1316B0u;
label_1316b0:
    // 0x1316b0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1316b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1316b4:
    // 0x1316b4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1316b4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1316b8:
    // 0x1316b8: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x1316b8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1316bc:
    // 0x1316bc: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x1316bcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1316c0:
    // 0x1316c0: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x1316c0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_1316c4:
    // 0x1316c4: 0x4be8e1bc  vmulax.xyzw $ACC, $vf28, $vf8x
    ctx->pc = 0x1316c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316c8:
    // 0x1316c8: 0x4be8e8bd  vmadday.xyzw $ACC, $vf29, $vf8y
    ctx->pc = 0x1316c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316cc:
    // 0x1316cc: 0x4be8f0be  vmaddaz.xyzw $ACC, $vf30, $vf8z
    ctx->pc = 0x1316ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316d0:
    // 0x1316d0: 0x4be8fb0b  vmaddw.xyzw $vf12, $vf31, $vf8w
    ctx->pc = 0x1316d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_1316d4:
    // 0x1316d4: 0x4be9e1bc  vmulax.xyzw $ACC, $vf28, $vf9x
    ctx->pc = 0x1316d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316d8:
    // 0x1316d8: 0x4be9e8bd  vmadday.xyzw $ACC, $vf29, $vf9y
    ctx->pc = 0x1316d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316dc:
    // 0x1316dc: 0x4be9f0be  vmaddaz.xyzw $ACC, $vf30, $vf9z
    ctx->pc = 0x1316dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316e0:
    // 0x1316e0: 0x4be9fb4b  vmaddw.xyzw $vf13, $vf31, $vf9w
    ctx->pc = 0x1316e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_1316e4:
    // 0x1316e4: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x1316e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316e8:
    // 0x1316e8: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x1316e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316ec:
    // 0x1316ec: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x1316ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316f0:
    // 0x1316f0: 0x4beafb8b  vmaddw.xyzw $vf14, $vf31, $vf10w
    ctx->pc = 0x1316f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_1316f4:
    // 0x1316f4: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x1316f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316f8:
    // 0x1316f8: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x1316f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1316fc:
    // 0x1316fc: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x1316fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_131700:
    // 0x131700: 0x4bebfbcb  vmaddw.xyzw $vf15, $vf31, $vf11w
    ctx->pc = 0x131700u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_131704:
    // 0x131704: 0x4bfc633c  vmove.xyzw  $vf28, $vf12
    ctx->pc = 0x131704u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[12], _mm_castsi128_ps(mask)); }
label_131708:
    // 0x131708: 0x4bfd6b3c  vmove.xyzw  $vf29, $vf13
    ctx->pc = 0x131708u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[13], _mm_castsi128_ps(mask)); }
label_13170c:
    // 0x13170c: 0x4bfe733c  vmove.xyzw  $vf30, $vf14
    ctx->pc = 0x13170cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[14], _mm_castsi128_ps(mask)); }
label_131710:
    // 0x131710: 0x4bff7b3c  vmove.xyzw  $vf31, $vf15
    ctx->pc = 0x131710u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[15], _mm_castsi128_ps(mask)); }
label_131714:
    // 0x131714: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x131714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_131718:
    // 0x131718: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_13171c:
    if (ctx->pc == 0x13171Cu) {
        ctx->pc = 0x13171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131718u;
        // 0x13171c: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131720u;
        goto label_131720;
    }
    ctx->pc = 0x131718u;
    {
        const bool branch_taken_0x131718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131718u;
        // 0x13171c: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131718) {
            ctx->pc = 0x131744u;
            goto label_131744;
        }
    }
    ctx->pc = 0x131720u;
label_131720:
    // 0x131720: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x131720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_131724:
    // 0x131724: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x131724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131728:
    // 0x131728: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x131728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13172c:
    // 0x13172c: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x13172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_131730:
    // 0x131730: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x131730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_131734:
    // 0x131734: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x131734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131738:
    // 0x131738: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x131738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13173c:
    // 0x13173c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13173cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_131740:
    // 0x131740: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x131740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_131744:
    // 0x131744: 0xc04c554  jal         func_131550
label_131748:
    if (ctx->pc == 0x131748u) {
        ctx->pc = 0x13174Cu;
        goto label_13174c;
    }
    ctx->pc = 0x131744u;
    SET_GPR_U32(ctx, 31, 0x13174Cu);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131744u, 0x13174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13174Cu;
label_13174c:
    // 0x13174c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131750:
    // 0x131750: 0xc04c550  jal         func_131540
label_131754:
    if (ctx->pc == 0x131754u) {
        ctx->pc = 0x131754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131750u;
        // 0x131754: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131758u;
        goto label_131758;
    }
    ctx->pc = 0x131750u;
    SET_GPR_U32(ctx, 31, 0x131758u);
    ctx->pc = 0x131754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131750u;
    // 0x131754: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x131750u, 0x131758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131758u;
label_131758:
    // 0x131758: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x131758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13175c:
    // 0x13175c: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x13175cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_131760:
    // 0x131760: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x131760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_131764:
    // 0x131764: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131768:
    // 0x131768: 0xc04c554  jal         func_131550
label_13176c:
    if (ctx->pc == 0x13176Cu) {
        ctx->pc = 0x13176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131768u;
        // 0x13176c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131770u;
        goto label_131770;
    }
    ctx->pc = 0x131768u;
    SET_GPR_U32(ctx, 31, 0x131770u);
    ctx->pc = 0x13176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131768u;
    // 0x13176c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131768u, 0x131770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131770u;
label_131770:
    // 0x131770: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x131770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_131774:
    // 0x131774: 0xc04c54c  jal         func_131530
label_131778:
    if (ctx->pc == 0x131778u) {
        ctx->pc = 0x131778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131774u;
        // 0x131778: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13177Cu;
        goto label_13177c;
    }
    ctx->pc = 0x131774u;
    SET_GPR_U32(ctx, 31, 0x13177Cu);
    ctx->pc = 0x131778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131774u;
    // 0x131778: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x131774u, 0x13177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13177Cu;
label_13177c:
    // 0x13177c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x13177cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_131780:
    // 0x131780: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x131780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_131784:
    // 0x131784: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x131784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_131788:
    // 0x131788: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x131788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
label_13178c:
    // 0x13178c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131790:
    // 0x131790: 0x10000016  b           . + 4 + (0x16 << 2)
label_131794:
    if (ctx->pc == 0x131794u) {
        ctx->pc = 0x131794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131790u;
        // 0x131794: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131798u;
        goto label_131798;
    }
    ctx->pc = 0x131790u;
    {
        const bool branch_taken_0x131790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131790u;
        // 0x131794: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131790) {
            ctx->pc = 0x1317ECu;
            goto label_1317ec;
        }
    }
    ctx->pc = 0x131798u;
label_131798:
    // 0x131798: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x131798u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_13179c:
    // 0x13179c: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x13179cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1317a0:
    // 0x1317a0: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x1317a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1317a4:
    // 0x1317a4: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x1317a4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1317a8:
    // 0x1317a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1317a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1317ac:
    // 0x1317ac: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1317acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1317b0:
    // 0x1317b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1317b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1317b4:
    // 0x1317b4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1317b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1317b8:
    // 0x1317b8: 0x320f809  jalr        $t9
label_1317bc:
    if (ctx->pc == 0x1317BCu) {
        ctx->pc = 0x1317BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317B8u;
        // 0x1317bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317C0u;
        goto label_1317c0;
    }
    ctx->pc = 0x1317B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1317C0u);
        ctx->pc = 0x1317BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317B8u;
        // 0x1317bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1317B8u, 0x1317C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1317C0u;
label_1317c0:
    // 0x1317c0: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x1317c0u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1317c4:
    // 0x1317c4: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x1317c4u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1317c8:
    // 0x1317c8: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x1317c8u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1317cc:
    // 0x1317cc: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x1317ccu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1317d0:
    // 0x1317d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1317d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1317d4:
    // 0x1317d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1317d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1317d8:
    // 0x1317d8: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x1317d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_1317dc:
    // 0x1317dc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1317dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1317e0:
    // 0x1317e0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1317e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1317e4:
    // 0x1317e4: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1317e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1317e8:
    // 0x1317e8: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1317e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1317ec:
    // 0x1317ec: 0x0  nop
    ctx->pc = 0x1317ecu;
    // NOP
label_1317f0:
    // 0x1317f0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1317f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1317f4:
    // 0x1317f4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1317f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1317f8:
    // 0x1317f8: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
label_1317fc:
    if (ctx->pc == 0x1317FCu) {
        ctx->pc = 0x131800u;
        goto label_131800;
    }
    ctx->pc = 0x1317F8u;
    {
        const bool branch_taken_0x1317f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1317f8) {
            ctx->pc = 0x131798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131798;
        }
    }
    ctx->pc = 0x131800u;
label_131800:
    // 0x131800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_131804:
    // 0x131804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_131808:
    // 0x131808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13180c:
    // 0x13180c: 0x3e00008  jr          $ra
label_131810:
    if (ctx->pc == 0x131810u) {
        ctx->pc = 0x131810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13180Cu;
        // 0x131810: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131814u;
        goto label_fallthrough_0x13180c;
    }
    ctx->pc = 0x13180Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13180Cu;
        // 0x131810: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13180Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13180c:
    ctx->pc = 0x131814u;
}
