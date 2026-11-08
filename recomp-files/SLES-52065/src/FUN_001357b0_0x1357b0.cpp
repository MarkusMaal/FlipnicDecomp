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

// Function: FUN_001357b0
// Address: 0x1357b0 - 0x135ac0
void FUN_001357b0_0x1357b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001357b0_0x1357b0");
#endif

    switch (ctx->pc) {
        case 0x1357b0u: goto label_1357b0;
        case 0x1357b4u: goto label_1357b4;
        case 0x1357b8u: goto label_1357b8;
        case 0x1357bcu: goto label_1357bc;
        case 0x1357c0u: goto label_1357c0;
        case 0x1357c4u: goto label_1357c4;
        case 0x1357c8u: goto label_1357c8;
        case 0x1357ccu: goto label_1357cc;
        case 0x1357d0u: goto label_1357d0;
        case 0x1357d4u: goto label_1357d4;
        case 0x1357d8u: goto label_1357d8;
        case 0x1357dcu: goto label_1357dc;
        case 0x1357e0u: goto label_1357e0;
        case 0x1357e4u: goto label_1357e4;
        case 0x1357e8u: goto label_1357e8;
        case 0x1357ecu: goto label_1357ec;
        case 0x1357f0u: goto label_1357f0;
        case 0x1357f4u: goto label_1357f4;
        case 0x1357f8u: goto label_1357f8;
        case 0x1357fcu: goto label_1357fc;
        case 0x135800u: goto label_135800;
        case 0x135804u: goto label_135804;
        case 0x135808u: goto label_135808;
        case 0x13580cu: goto label_13580c;
        case 0x135810u: goto label_135810;
        case 0x135814u: goto label_135814;
        case 0x135818u: goto label_135818;
        case 0x13581cu: goto label_13581c;
        case 0x135820u: goto label_135820;
        case 0x135824u: goto label_135824;
        case 0x135828u: goto label_135828;
        case 0x13582cu: goto label_13582c;
        case 0x135830u: goto label_135830;
        case 0x135834u: goto label_135834;
        case 0x135838u: goto label_135838;
        case 0x13583cu: goto label_13583c;
        case 0x135840u: goto label_135840;
        case 0x135844u: goto label_135844;
        case 0x135848u: goto label_135848;
        case 0x13584cu: goto label_13584c;
        case 0x135850u: goto label_135850;
        case 0x135854u: goto label_135854;
        case 0x135858u: goto label_135858;
        case 0x13585cu: goto label_13585c;
        case 0x135860u: goto label_135860;
        case 0x135864u: goto label_135864;
        case 0x135868u: goto label_135868;
        case 0x13586cu: goto label_13586c;
        case 0x135870u: goto label_135870;
        case 0x135874u: goto label_135874;
        case 0x135878u: goto label_135878;
        case 0x13587cu: goto label_13587c;
        case 0x135880u: goto label_135880;
        case 0x135884u: goto label_135884;
        case 0x135888u: goto label_135888;
        case 0x13588cu: goto label_13588c;
        case 0x135890u: goto label_135890;
        case 0x135894u: goto label_135894;
        case 0x135898u: goto label_135898;
        case 0x13589cu: goto label_13589c;
        case 0x1358a0u: goto label_1358a0;
        case 0x1358a4u: goto label_1358a4;
        case 0x1358a8u: goto label_1358a8;
        case 0x1358acu: goto label_1358ac;
        case 0x1358b0u: goto label_1358b0;
        case 0x1358b4u: goto label_1358b4;
        case 0x1358b8u: goto label_1358b8;
        case 0x1358bcu: goto label_1358bc;
        case 0x1358c0u: goto label_1358c0;
        case 0x1358c4u: goto label_1358c4;
        case 0x1358c8u: goto label_1358c8;
        case 0x1358ccu: goto label_1358cc;
        case 0x1358d0u: goto label_1358d0;
        case 0x1358d4u: goto label_1358d4;
        case 0x1358d8u: goto label_1358d8;
        case 0x1358dcu: goto label_1358dc;
        case 0x1358e0u: goto label_1358e0;
        case 0x1358e4u: goto label_1358e4;
        case 0x1358e8u: goto label_1358e8;
        case 0x1358ecu: goto label_1358ec;
        case 0x1358f0u: goto label_1358f0;
        case 0x1358f4u: goto label_1358f4;
        case 0x1358f8u: goto label_1358f8;
        case 0x1358fcu: goto label_1358fc;
        case 0x135900u: goto label_135900;
        case 0x135904u: goto label_135904;
        case 0x135908u: goto label_135908;
        case 0x13590cu: goto label_13590c;
        case 0x135910u: goto label_135910;
        case 0x135914u: goto label_135914;
        case 0x135918u: goto label_135918;
        case 0x13591cu: goto label_13591c;
        case 0x135920u: goto label_135920;
        case 0x135924u: goto label_135924;
        case 0x135928u: goto label_135928;
        case 0x13592cu: goto label_13592c;
        case 0x135930u: goto label_135930;
        case 0x135934u: goto label_135934;
        case 0x135938u: goto label_135938;
        case 0x13593cu: goto label_13593c;
        case 0x135940u: goto label_135940;
        case 0x135944u: goto label_135944;
        case 0x135948u: goto label_135948;
        case 0x13594cu: goto label_13594c;
        case 0x135950u: goto label_135950;
        case 0x135954u: goto label_135954;
        case 0x135958u: goto label_135958;
        case 0x13595cu: goto label_13595c;
        case 0x135960u: goto label_135960;
        case 0x135964u: goto label_135964;
        case 0x135968u: goto label_135968;
        case 0x13596cu: goto label_13596c;
        case 0x135970u: goto label_135970;
        case 0x135974u: goto label_135974;
        case 0x135978u: goto label_135978;
        case 0x13597cu: goto label_13597c;
        case 0x135980u: goto label_135980;
        case 0x135984u: goto label_135984;
        case 0x135988u: goto label_135988;
        case 0x13598cu: goto label_13598c;
        case 0x135990u: goto label_135990;
        case 0x135994u: goto label_135994;
        case 0x135998u: goto label_135998;
        case 0x13599cu: goto label_13599c;
        case 0x1359a0u: goto label_1359a0;
        case 0x1359a4u: goto label_1359a4;
        case 0x1359a8u: goto label_1359a8;
        case 0x1359acu: goto label_1359ac;
        case 0x1359b0u: goto label_1359b0;
        case 0x1359b4u: goto label_1359b4;
        case 0x1359b8u: goto label_1359b8;
        case 0x1359bcu: goto label_1359bc;
        case 0x1359c0u: goto label_1359c0;
        case 0x1359c4u: goto label_1359c4;
        case 0x1359c8u: goto label_1359c8;
        case 0x1359ccu: goto label_1359cc;
        case 0x1359d0u: goto label_1359d0;
        case 0x1359d4u: goto label_1359d4;
        case 0x1359d8u: goto label_1359d8;
        case 0x1359dcu: goto label_1359dc;
        case 0x1359e0u: goto label_1359e0;
        case 0x1359e4u: goto label_1359e4;
        case 0x1359e8u: goto label_1359e8;
        case 0x1359ecu: goto label_1359ec;
        case 0x1359f0u: goto label_1359f0;
        case 0x1359f4u: goto label_1359f4;
        case 0x1359f8u: goto label_1359f8;
        case 0x1359fcu: goto label_1359fc;
        case 0x135a00u: goto label_135a00;
        case 0x135a04u: goto label_135a04;
        case 0x135a08u: goto label_135a08;
        case 0x135a0cu: goto label_135a0c;
        case 0x135a10u: goto label_135a10;
        case 0x135a14u: goto label_135a14;
        case 0x135a18u: goto label_135a18;
        case 0x135a1cu: goto label_135a1c;
        case 0x135a20u: goto label_135a20;
        case 0x135a24u: goto label_135a24;
        case 0x135a28u: goto label_135a28;
        case 0x135a2cu: goto label_135a2c;
        case 0x135a30u: goto label_135a30;
        case 0x135a34u: goto label_135a34;
        case 0x135a38u: goto label_135a38;
        case 0x135a3cu: goto label_135a3c;
        case 0x135a40u: goto label_135a40;
        case 0x135a44u: goto label_135a44;
        case 0x135a48u: goto label_135a48;
        case 0x135a4cu: goto label_135a4c;
        case 0x135a50u: goto label_135a50;
        case 0x135a54u: goto label_135a54;
        case 0x135a58u: goto label_135a58;
        case 0x135a5cu: goto label_135a5c;
        case 0x135a60u: goto label_135a60;
        case 0x135a64u: goto label_135a64;
        case 0x135a68u: goto label_135a68;
        case 0x135a6cu: goto label_135a6c;
        case 0x135a70u: goto label_135a70;
        case 0x135a74u: goto label_135a74;
        case 0x135a78u: goto label_135a78;
        case 0x135a7cu: goto label_135a7c;
        case 0x135a80u: goto label_135a80;
        case 0x135a84u: goto label_135a84;
        case 0x135a88u: goto label_135a88;
        case 0x135a8cu: goto label_135a8c;
        case 0x135a90u: goto label_135a90;
        case 0x135a94u: goto label_135a94;
        case 0x135a98u: goto label_135a98;
        case 0x135a9cu: goto label_135a9c;
        case 0x135aa0u: goto label_135aa0;
        case 0x135aa4u: goto label_135aa4;
        case 0x135aa8u: goto label_135aa8;
        case 0x135aacu: goto label_135aac;
        case 0x135ab0u: goto label_135ab0;
        case 0x135ab4u: goto label_135ab4;
        case 0x135ab8u: goto label_135ab8;
        case 0x135abcu: goto label_135abc;
        default: break;
    }

    ctx->pc = 0x1357b0u;

label_1357b0:
    // 0x1357b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1357b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1357b4:
    // 0x1357b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1357b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1357b8:
    // 0x1357b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1357b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1357bc:
    // 0x1357bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1357bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1357c0:
    // 0x1357c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1357c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1357c4:
    // 0x1357c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1357c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1357c8:
    // 0x1357c8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1357c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1357cc:
    // 0x1357cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1357ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1357d0:
    // 0x1357d0: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1357d0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1357d4:
    // 0x1357d4: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x1357d4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1357d8:
    // 0x1357d8: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x1357d8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1357dc:
    // 0x1357dc: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x1357dcu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_1357e0:
    // 0x1357e0: 0x4be8e1bc  vmulax.xyzw $ACC, $vf28, $vf8x
    ctx->pc = 0x1357e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1357e4:
    // 0x1357e4: 0x4be8e8bd  vmadday.xyzw $ACC, $vf29, $vf8y
    ctx->pc = 0x1357e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1357e8:
    // 0x1357e8: 0x4be8f0be  vmaddaz.xyzw $ACC, $vf30, $vf8z
    ctx->pc = 0x1357e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1357ec:
    // 0x1357ec: 0x4be8fb0b  vmaddw.xyzw $vf12, $vf31, $vf8w
    ctx->pc = 0x1357ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_1357f0:
    // 0x1357f0: 0x4be9e1bc  vmulax.xyzw $ACC, $vf28, $vf9x
    ctx->pc = 0x1357f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1357f4:
    // 0x1357f4: 0x4be9e8bd  vmadday.xyzw $ACC, $vf29, $vf9y
    ctx->pc = 0x1357f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1357f8:
    // 0x1357f8: 0x4be9f0be  vmaddaz.xyzw $ACC, $vf30, $vf9z
    ctx->pc = 0x1357f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1357fc:
    // 0x1357fc: 0x4be9fb4b  vmaddw.xyzw $vf13, $vf31, $vf9w
    ctx->pc = 0x1357fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_135800:
    // 0x135800: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x135800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135804:
    // 0x135804: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x135804u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135808:
    // 0x135808: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x135808u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13580c:
    // 0x13580c: 0x4beafb8b  vmaddw.xyzw $vf14, $vf31, $vf10w
    ctx->pc = 0x13580cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_135810:
    // 0x135810: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x135810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135814:
    // 0x135814: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x135814u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135818:
    // 0x135818: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x135818u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13581c:
    // 0x13581c: 0x4bebfbcb  vmaddw.xyzw $vf15, $vf31, $vf11w
    ctx->pc = 0x13581cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_135820:
    // 0x135820: 0x4bfc633c  vmove.xyzw  $vf28, $vf12
    ctx->pc = 0x135820u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[12], _mm_castsi128_ps(mask)); }
label_135824:
    // 0x135824: 0x4bfd6b3c  vmove.xyzw  $vf29, $vf13
    ctx->pc = 0x135824u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[13], _mm_castsi128_ps(mask)); }
label_135828:
    // 0x135828: 0x4bfe733c  vmove.xyzw  $vf30, $vf14
    ctx->pc = 0x135828u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[14], _mm_castsi128_ps(mask)); }
label_13582c:
    // 0x13582c: 0x4bff7b3c  vmove.xyzw  $vf31, $vf15
    ctx->pc = 0x13582cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[15], _mm_castsi128_ps(mask)); }
label_135830:
    // 0x135830: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x135830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_135834:
    // 0x135834: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x135834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135838:
    // 0x135838: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x135838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13583c:
    // 0x13583c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13583cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_135840:
    // 0x135840: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x135840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_135844:
    // 0x135844: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x135844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_135848:
    // 0x135848: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x135848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13584c:
    // 0x13584c: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x13584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135850:
    // 0x135850: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_135854:
    // 0x135854: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x135854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
label_135858:
    // 0x135858: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x135858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_13585c:
    // 0x13585c: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_135860:
    if (ctx->pc == 0x135860u) {
        ctx->pc = 0x135864u;
        goto label_135864;
    }
    ctx->pc = 0x13585Cu;
    {
        const bool branch_taken_0x13585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13585c) {
            ctx->pc = 0x1359E8u;
            goto label_1359e8;
        }
    }
    ctx->pc = 0x135864u;
label_135864:
    // 0x135864: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x135864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
label_135868:
    // 0x135868: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_13586c:
    if (ctx->pc == 0x13586Cu) {
        ctx->pc = 0x13586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135868u;
        // 0x13586c: 0x26440058  addiu       $a0, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135870u;
        goto label_135870;
    }
    ctx->pc = 0x135868u;
    {
        const bool branch_taken_0x135868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135868u;
        // 0x13586c: 0x26440058  addiu       $a0, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135868) {
            ctx->pc = 0x1359ECu;
            goto label_1359ec;
        }
    }
    ctx->pc = 0x135870u;
label_135870:
    // 0x135870: 0x8f89853c  lw          $t1, -0x7AC4($gp)
    ctx->pc = 0x135870u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
label_135874:
    // 0x135874: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x135874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_135878:
    // 0x135878: 0x34460404  ori         $a2, $v0, 0x404
    ctx->pc = 0x135878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_13587c:
    // 0x13587c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x13587cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_135880:
    // 0x135880: 0x3c026c0c  lui         $v0, 0x6C0C
    ctx->pc = 0x135880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27660 << 16));
label_135884:
    // 0x135884: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x135884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_135888:
    // 0x135888: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x135888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_13588c:
    // 0x13588c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13588cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135890:
    // 0x135890: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x135890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_135894:
    // 0x135894: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x135894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_135898:
    // 0x135898: 0x3444801b  ori         $a0, $v0, 0x801B
    ctx->pc = 0x135898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32795);
label_13589c:
    // 0x13589c: 0xae490088  sw          $t1, 0x88($s2)
    ctx->pc = 0x13589cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 9));
label_1358a0:
    // 0x1358a0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1358a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1358a4:
    // 0x1358a4: 0x8f89853c  lw          $t1, -0x7AC4($gp)
    ctx->pc = 0x1358a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
label_1358a8:
    // 0x1358a8: 0x25290110  addiu       $t1, $t1, 0x110
    ctx->pc = 0x1358a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 272));
label_1358ac:
    // 0x1358ac: 0xaf89853c  sw          $t1, -0x7AC4($gp)
    ctx->pc = 0x1358acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 9));
label_1358b0:
    // 0x1358b0: 0x8e490088  lw          $t1, 0x88($s2)
    ctx->pc = 0x1358b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1358b4:
    // 0x1358b4: 0xa1280003  sb          $t0, 0x3($t1)
    ctx->pc = 0x1358b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 8));
label_1358b8:
    // 0x1358b8: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x1358b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
label_1358bc:
    // 0x1358bc: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1358bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
label_1358c0:
    // 0x1358c0: 0xa5270000  sh          $a3, 0x0($t1)
    ctx->pc = 0x1358c0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 7));
label_1358c4:
    // 0x1358c4: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x1358c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
label_1358c8:
    // 0x1358c8: 0xad25000c  sw          $a1, 0xC($t1)
    ctx->pc = 0x1358c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
label_1358cc:
    // 0x1358cc: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x1358ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1358d0:
    // 0x1358d0: 0xa0a800d3  sb          $t0, 0xD3($a1)
    ctx->pc = 0x1358d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 211), (uint8_t)GPR_U32(ctx, 8));
label_1358d4:
    // 0x1358d4: 0xa0a000d2  sb          $zero, 0xD2($a1)
    ctx->pc = 0x1358d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 210), (uint8_t)GPR_U32(ctx, 0));
label_1358d8:
    // 0x1358d8: 0xaca000d4  sw          $zero, 0xD4($a1)
    ctx->pc = 0x1358d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 212), GPR_U32(ctx, 0));
label_1358dc:
    // 0x1358dc: 0xa4b000d0  sh          $s0, 0xD0($a1)
    ctx->pc = 0x1358dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 208), (uint16_t)GPR_U32(ctx, 16));
label_1358e0:
    // 0x1358e0: 0xaca600d8  sw          $a2, 0xD8($a1)
    ctx->pc = 0x1358e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 216), GPR_U32(ctx, 6));
label_1358e4:
    // 0x1358e4: 0xaca400dc  sw          $a0, 0xDC($a1)
    ctx->pc = 0x1358e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 4));
label_1358e8:
    // 0x1358e8: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x1358e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1358ec:
    // 0x1358ec: 0x8f8484dc  lw          $a0, -0x7B24($gp)
    ctx->pc = 0x1358ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935772)));
label_1358f0:
    // 0x1358f0: 0x24a900f0  addiu       $t1, $a1, 0xF0
    ctx->pc = 0x1358f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
label_1358f4:
    // 0x1358f4: 0xa0a800f3  sb          $t0, 0xF3($a1)
    ctx->pc = 0x1358f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 243), (uint8_t)GPR_U32(ctx, 8));
label_1358f8:
    // 0x1358f8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1358f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1358fc:
    // 0x1358fc: 0xa0a000f2  sb          $zero, 0xF2($a1)
    ctx->pc = 0x1358fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 242), (uint8_t)GPR_U32(ctx, 0));
label_135900:
    // 0x135900: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x135900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_135904:
    // 0x135904: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x135904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
label_135908:
    // 0x135908: 0xa4a000f0  sh          $zero, 0xF0($a1)
    ctx->pc = 0x135908u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 240), (uint16_t)GPR_U32(ctx, 0));
label_13590c:
    // 0x13590c: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x13590cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
label_135910:
    // 0x135910: 0xaca300fc  sw          $v1, 0xFC($a1)
    ctx->pc = 0x135910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 3));
label_135914:
    // 0x135914: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x135914u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
label_135918:
    // 0x135918: 0xa1220003  sb          $v0, 0x3($t1)
    ctx->pc = 0x135918u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 2));
label_13591c:
    // 0x13591c: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x13591cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
label_135920:
    // 0x135920: 0xa5200000  sh          $zero, 0x0($t1)
    ctx->pc = 0x135920u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 0));
label_135924:
    // 0x135924: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x135924u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
label_135928:
    // 0x135928: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x135928u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
label_13592c:
    // 0x13592c: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x13592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_135930:
    // 0x135930: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x135930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
label_135934:
    // 0x135934: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_135938:
    if (ctx->pc == 0x135938u) {
        ctx->pc = 0x13593Cu;
        goto label_13593c;
    }
    ctx->pc = 0x135934u;
    {
        const bool branch_taken_0x135934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x135934) {
            ctx->pc = 0x135944u;
            goto label_135944;
        }
    }
    ctx->pc = 0x13593Cu;
label_13593c:
    // 0x13593c: 0x10000006  b           . + 4 + (0x6 << 2)
label_135940:
    if (ctx->pc == 0x135940u) {
        ctx->pc = 0x135944u;
        goto label_135944;
    }
    ctx->pc = 0x13593Cu;
    {
        const bool branch_taken_0x13593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13593c) {
            ctx->pc = 0x135958u;
            goto label_135958;
        }
    }
    ctx->pc = 0x135944u;
label_135944:
    // 0x135944: 0xc061bf0  jal         func_186FC0
label_135948:
    if (ctx->pc == 0x135948u) {
        ctx->pc = 0x13594Cu;
        goto label_13594c;
    }
    ctx->pc = 0x135944u;
    SET_GPR_U32(ctx, 31, 0x13594Cu);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x135944u, 0x13594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13594Cu;
label_13594c:
    // 0x13594c: 0xc061b50  jal         func_186D40
label_135950:
    if (ctx->pc == 0x135950u) {
        ctx->pc = 0x135950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13594Cu;
        // 0x135950: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135954u;
        goto label_135954;
    }
    ctx->pc = 0x13594Cu;
    SET_GPR_U32(ctx, 31, 0x135954u);
    ctx->pc = 0x135950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13594Cu;
    // 0x135950: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x13594Cu, 0x135954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135954u;
label_135954:
    // 0x135954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135958:
    // 0x135958: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_13595c:
    if (ctx->pc == 0x13595Cu) {
        ctx->pc = 0x135960u;
        goto label_135960;
    }
    ctx->pc = 0x135958u;
    {
        const bool branch_taken_0x135958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x135958) {
            ctx->pc = 0x1359E8u;
            goto label_1359e8;
        }
    }
    ctx->pc = 0x135960u;
label_135960:
    // 0x135960: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x135960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_135964:
    // 0x135964: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x135964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_135968:
    // 0x135968: 0xc061c0c  jal         func_187030
label_13596c:
    if (ctx->pc == 0x13596Cu) {
        ctx->pc = 0x13596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135968u;
        // 0x13596c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135970u;
        goto label_135970;
    }
    ctx->pc = 0x135968u;
    SET_GPR_U32(ctx, 31, 0x135970u);
    ctx->pc = 0x13596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135968u;
    // 0x13596c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187030u, 0x135968u, 0x135970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135970u;
label_135970:
    // 0x135970: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x135970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135974:
    // 0x135974: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x135974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
label_135978:
    // 0x135978: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x135978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13597c:
    // 0x13597c: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x13597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_135980:
    // 0x135980: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_135984:
    // 0x135984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x135984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_135988:
    // 0x135988: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13598c:
    // 0x13598c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_135990:
    if (ctx->pc == 0x135990u) {
        ctx->pc = 0x135990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13598Cu;
        // 0x135990: 0xe46000e8  swc1        $f0, 0xE8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135994u;
        goto label_135994;
    }
    ctx->pc = 0x13598Cu;
    {
        const bool branch_taken_0x13598c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x135990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13598Cu;
        // 0x135990: 0xe46000e8  swc1        $f0, 0xE8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13598c) {
            ctx->pc = 0x13599Cu;
            goto label_13599c;
        }
    }
    ctx->pc = 0x135994u;
label_135994:
    // 0x135994: 0xc061b50  jal         func_186D40
label_135998:
    if (ctx->pc == 0x135998u) {
        ctx->pc = 0x135998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135994u;
        // 0x135998: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13599Cu;
        goto label_13599c;
    }
    ctx->pc = 0x135994u;
    SET_GPR_U32(ctx, 31, 0x13599Cu);
    ctx->pc = 0x135998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135994u;
    // 0x135998: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x135994u, 0x13599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13599Cu;
label_13599c:
    // 0x13599c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x13599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1359a0:
    // 0x1359a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1359a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1359a4:
    // 0x1359a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1359a8:
    if (ctx->pc == 0x1359A8u) {
        ctx->pc = 0x1359ACu;
        goto label_1359ac;
    }
    ctx->pc = 0x1359A4u;
    {
        const bool branch_taken_0x1359a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1359a4) {
            ctx->pc = 0x1359BCu;
            goto label_1359bc;
        }
    }
    ctx->pc = 0x1359ACu;
label_1359ac:
    // 0x1359ac: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1359acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1359b0:
    // 0x1359b0: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x1359b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1359b4:
    // 0x1359b4: 0xc061c74  jal         func_1871D0
label_1359b8:
    if (ctx->pc == 0x1359B8u) {
        ctx->pc = 0x1359B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359B4u;
        // 0x1359b8: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1359BCu;
        goto label_1359bc;
    }
    ctx->pc = 0x1359B4u;
    SET_GPR_U32(ctx, 31, 0x1359BCu);
    ctx->pc = 0x1359B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359B4u;
    // 0x1359b8: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871D0u, 0x1359B4u, 0x1359BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359BCu;
label_1359bc:
    // 0x1359bc: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1359c0:
    // 0x1359c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1359c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1359c4:
    // 0x1359c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1359c8:
    if (ctx->pc == 0x1359C8u) {
        ctx->pc = 0x1359CCu;
        goto label_1359cc;
    }
    ctx->pc = 0x1359C4u;
    {
        const bool branch_taken_0x1359c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1359c4) {
            ctx->pc = 0x1359DCu;
            goto label_1359dc;
        }
    }
    ctx->pc = 0x1359CCu;
label_1359cc:
    // 0x1359cc: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1359ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1359d0:
    // 0x1359d0: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x1359d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1359d4:
    // 0x1359d4: 0xc061c2c  jal         func_1870B0
label_1359d8:
    if (ctx->pc == 0x1359D8u) {
        ctx->pc = 0x1359D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359D4u;
        // 0x1359d8: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1359DCu;
        goto label_1359dc;
    }
    ctx->pc = 0x1359D4u;
    SET_GPR_U32(ctx, 31, 0x1359DCu);
    ctx->pc = 0x1359D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359D4u;
    // 0x1359d8: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1870B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1870B0u, 0x1359D4u, 0x1359DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359DCu;
label_1359dc:
    // 0x1359dc: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x1359dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1359e0:
    // 0x1359e0: 0xc04e7f8  jal         func_139FE0
label_1359e4:
    if (ctx->pc == 0x1359E4u) {
        ctx->pc = 0x1359E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359E0u;
        // 0x1359e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1359E8u;
        goto label_1359e8;
    }
    ctx->pc = 0x1359E0u;
    SET_GPR_U32(ctx, 31, 0x1359E8u);
    ctx->pc = 0x1359E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359E0u;
    // 0x1359e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FE0u, 0x1359E0u, 0x1359E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359E8u;
label_1359e8:
    // 0x1359e8: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x1359e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
label_1359ec:
    // 0x1359ec: 0xc04c554  jal         func_131550
label_1359f0:
    if (ctx->pc == 0x1359F0u) {
        ctx->pc = 0x1359F4u;
        goto label_1359f4;
    }
    ctx->pc = 0x1359ECu;
    SET_GPR_U32(ctx, 31, 0x1359F4u);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1359ECu, 0x1359F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359F4u;
label_1359f4:
    // 0x1359f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1359f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1359f8:
    // 0x1359f8: 0xc04c550  jal         func_131540
label_1359fc:
    if (ctx->pc == 0x1359FCu) {
        ctx->pc = 0x1359FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359F8u;
        // 0x1359fc: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135A00u;
        goto label_135a00;
    }
    ctx->pc = 0x1359F8u;
    SET_GPR_U32(ctx, 31, 0x135A00u);
    ctx->pc = 0x1359FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359F8u;
    // 0x1359fc: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x1359F8u, 0x135A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A00u;
label_135a00:
    // 0x135a00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x135a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_135a04:
    // 0x135a04: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x135a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
label_135a08:
    // 0x135a08: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x135a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_135a0c:
    // 0x135a0c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x135a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_135a10:
    // 0x135a10: 0xc04c554  jal         func_131550
label_135a14:
    if (ctx->pc == 0x135A14u) {
        ctx->pc = 0x135A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A10u;
        // 0x135a14: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135A18u;
        goto label_135a18;
    }
    ctx->pc = 0x135A10u;
    SET_GPR_U32(ctx, 31, 0x135A18u);
    ctx->pc = 0x135A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A10u;
    // 0x135a14: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135A10u, 0x135A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A18u;
label_135a18:
    // 0x135a18: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x135a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_135a1c:
    // 0x135a1c: 0xc04c54c  jal         func_131530
label_135a20:
    if (ctx->pc == 0x135A20u) {
        ctx->pc = 0x135A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A1Cu;
        // 0x135a20: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135A24u;
        goto label_135a24;
    }
    ctx->pc = 0x135A1Cu;
    SET_GPR_U32(ctx, 31, 0x135A24u);
    ctx->pc = 0x135A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A1Cu;
    // 0x135a20: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x135A1Cu, 0x135A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A24u;
label_135a24:
    // 0x135a24: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x135a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_135a28:
    // 0x135a28: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x135a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_135a2c:
    // 0x135a2c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x135a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_135a30:
    // 0x135a30: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x135a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_135a34:
    // 0x135a34: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x135a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135a38:
    // 0x135a38: 0x10000016  b           . + 4 + (0x16 << 2)
label_135a3c:
    if (ctx->pc == 0x135A3Cu) {
        ctx->pc = 0x135A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A38u;
        // 0x135a3c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135A40u;
        goto label_135a40;
    }
    ctx->pc = 0x135A38u;
    {
        const bool branch_taken_0x135a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A38u;
        // 0x135a3c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a38) {
            ctx->pc = 0x135A94u;
            goto label_135a94;
        }
    }
    ctx->pc = 0x135A40u;
label_135a40:
    // 0x135a40: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x135a40u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_135a44:
    // 0x135a44: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x135a44u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_135a48:
    // 0x135a48: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x135a48u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_135a4c:
    // 0x135a4c: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x135a4cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_135a50:
    // 0x135a50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x135a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_135a54:
    // 0x135a54: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_135a58:
    // 0x135a58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135a5c:
    // 0x135a5c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x135a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_135a60:
    // 0x135a60: 0x320f809  jalr        $t9
label_135a64:
    if (ctx->pc == 0x135A64u) {
        ctx->pc = 0x135A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A60u;
        // 0x135a64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135A68u;
        goto label_135a68;
    }
    ctx->pc = 0x135A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135A68u);
        ctx->pc = 0x135A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A60u;
        // 0x135a64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135A60u, 0x135A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135A68u;
label_135a68:
    // 0x135a68: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x135a68u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_135a6c:
    // 0x135a6c: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x135a6cu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_135a70:
    // 0x135a70: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x135a70u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_135a74:
    // 0x135a74: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x135a74u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_135a78:
    // 0x135a78: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x135a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_135a7c:
    // 0x135a7c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x135a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_135a80:
    // 0x135a80: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x135a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_135a84:
    // 0x135a84: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x135a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135a88:
    // 0x135a88: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x135a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_135a8c:
    // 0x135a8c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x135a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_135a90:
    // 0x135a90: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x135a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_135a94:
    // 0x135a94: 0x0  nop
    ctx->pc = 0x135a94u;
    // NOP
label_135a98:
    // 0x135a98: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x135a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_135a9c:
    // 0x135a9c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x135a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_135aa0:
    // 0x135aa0: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
label_135aa4:
    if (ctx->pc == 0x135AA4u) {
        ctx->pc = 0x135AA8u;
        goto label_135aa8;
    }
    ctx->pc = 0x135AA0u;
    {
        const bool branch_taken_0x135aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x135aa0) {
            ctx->pc = 0x135A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135a40;
        }
    }
    ctx->pc = 0x135AA8u;
label_135aa8:
    // 0x135aa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_135aac:
    // 0x135aac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_135ab0:
    // 0x135ab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_135ab4:
    // 0x135ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_135ab8:
    // 0x135ab8: 0x3e00008  jr          $ra
label_135abc:
    if (ctx->pc == 0x135ABCu) {
        ctx->pc = 0x135ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AB8u;
        // 0x135abc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135AC0u;
        goto label_fallthrough_0x135ab8;
    }
    ctx->pc = 0x135AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AB8u;
        // 0x135abc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135ab8:
    ctx->pc = 0x135AC0u;
}
