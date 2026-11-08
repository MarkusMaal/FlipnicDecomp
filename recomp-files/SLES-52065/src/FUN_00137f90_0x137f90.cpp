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

// Function: FUN_00137f90
// Address: 0x137f90 - 0x138298
void FUN_00137f90_0x137f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137f90_0x137f90");
#endif

    switch (ctx->pc) {
        case 0x137f90u: goto label_137f90;
        case 0x137f94u: goto label_137f94;
        case 0x137f98u: goto label_137f98;
        case 0x137f9cu: goto label_137f9c;
        case 0x137fa0u: goto label_137fa0;
        case 0x137fa4u: goto label_137fa4;
        case 0x137fa8u: goto label_137fa8;
        case 0x137facu: goto label_137fac;
        case 0x137fb0u: goto label_137fb0;
        case 0x137fb4u: goto label_137fb4;
        case 0x137fb8u: goto label_137fb8;
        case 0x137fbcu: goto label_137fbc;
        case 0x137fc0u: goto label_137fc0;
        case 0x137fc4u: goto label_137fc4;
        case 0x137fc8u: goto label_137fc8;
        case 0x137fccu: goto label_137fcc;
        case 0x137fd0u: goto label_137fd0;
        case 0x137fd4u: goto label_137fd4;
        case 0x137fd8u: goto label_137fd8;
        case 0x137fdcu: goto label_137fdc;
        case 0x137fe0u: goto label_137fe0;
        case 0x137fe4u: goto label_137fe4;
        case 0x137fe8u: goto label_137fe8;
        case 0x137fecu: goto label_137fec;
        case 0x137ff0u: goto label_137ff0;
        case 0x137ff4u: goto label_137ff4;
        case 0x137ff8u: goto label_137ff8;
        case 0x137ffcu: goto label_137ffc;
        case 0x138000u: goto label_138000;
        case 0x138004u: goto label_138004;
        case 0x138008u: goto label_138008;
        case 0x13800cu: goto label_13800c;
        case 0x138010u: goto label_138010;
        case 0x138014u: goto label_138014;
        case 0x138018u: goto label_138018;
        case 0x13801cu: goto label_13801c;
        case 0x138020u: goto label_138020;
        case 0x138024u: goto label_138024;
        case 0x138028u: goto label_138028;
        case 0x13802cu: goto label_13802c;
        case 0x138030u: goto label_138030;
        case 0x138034u: goto label_138034;
        case 0x138038u: goto label_138038;
        case 0x13803cu: goto label_13803c;
        case 0x138040u: goto label_138040;
        case 0x138044u: goto label_138044;
        case 0x138048u: goto label_138048;
        case 0x13804cu: goto label_13804c;
        case 0x138050u: goto label_138050;
        case 0x138054u: goto label_138054;
        case 0x138058u: goto label_138058;
        case 0x13805cu: goto label_13805c;
        case 0x138060u: goto label_138060;
        case 0x138064u: goto label_138064;
        case 0x138068u: goto label_138068;
        case 0x13806cu: goto label_13806c;
        case 0x138070u: goto label_138070;
        case 0x138074u: goto label_138074;
        case 0x138078u: goto label_138078;
        case 0x13807cu: goto label_13807c;
        case 0x138080u: goto label_138080;
        case 0x138084u: goto label_138084;
        case 0x138088u: goto label_138088;
        case 0x13808cu: goto label_13808c;
        case 0x138090u: goto label_138090;
        case 0x138094u: goto label_138094;
        case 0x138098u: goto label_138098;
        case 0x13809cu: goto label_13809c;
        case 0x1380a0u: goto label_1380a0;
        case 0x1380a4u: goto label_1380a4;
        case 0x1380a8u: goto label_1380a8;
        case 0x1380acu: goto label_1380ac;
        case 0x1380b0u: goto label_1380b0;
        case 0x1380b4u: goto label_1380b4;
        case 0x1380b8u: goto label_1380b8;
        case 0x1380bcu: goto label_1380bc;
        case 0x1380c0u: goto label_1380c0;
        case 0x1380c4u: goto label_1380c4;
        case 0x1380c8u: goto label_1380c8;
        case 0x1380ccu: goto label_1380cc;
        case 0x1380d0u: goto label_1380d0;
        case 0x1380d4u: goto label_1380d4;
        case 0x1380d8u: goto label_1380d8;
        case 0x1380dcu: goto label_1380dc;
        case 0x1380e0u: goto label_1380e0;
        case 0x1380e4u: goto label_1380e4;
        case 0x1380e8u: goto label_1380e8;
        case 0x1380ecu: goto label_1380ec;
        case 0x1380f0u: goto label_1380f0;
        case 0x1380f4u: goto label_1380f4;
        case 0x1380f8u: goto label_1380f8;
        case 0x1380fcu: goto label_1380fc;
        case 0x138100u: goto label_138100;
        case 0x138104u: goto label_138104;
        case 0x138108u: goto label_138108;
        case 0x13810cu: goto label_13810c;
        case 0x138110u: goto label_138110;
        case 0x138114u: goto label_138114;
        case 0x138118u: goto label_138118;
        case 0x13811cu: goto label_13811c;
        case 0x138120u: goto label_138120;
        case 0x138124u: goto label_138124;
        case 0x138128u: goto label_138128;
        case 0x13812cu: goto label_13812c;
        case 0x138130u: goto label_138130;
        case 0x138134u: goto label_138134;
        case 0x138138u: goto label_138138;
        case 0x13813cu: goto label_13813c;
        case 0x138140u: goto label_138140;
        case 0x138144u: goto label_138144;
        case 0x138148u: goto label_138148;
        case 0x13814cu: goto label_13814c;
        case 0x138150u: goto label_138150;
        case 0x138154u: goto label_138154;
        case 0x138158u: goto label_138158;
        case 0x13815cu: goto label_13815c;
        case 0x138160u: goto label_138160;
        case 0x138164u: goto label_138164;
        case 0x138168u: goto label_138168;
        case 0x13816cu: goto label_13816c;
        case 0x138170u: goto label_138170;
        case 0x138174u: goto label_138174;
        case 0x138178u: goto label_138178;
        case 0x13817cu: goto label_13817c;
        case 0x138180u: goto label_138180;
        case 0x138184u: goto label_138184;
        case 0x138188u: goto label_138188;
        case 0x13818cu: goto label_13818c;
        case 0x138190u: goto label_138190;
        case 0x138194u: goto label_138194;
        case 0x138198u: goto label_138198;
        case 0x13819cu: goto label_13819c;
        case 0x1381a0u: goto label_1381a0;
        case 0x1381a4u: goto label_1381a4;
        case 0x1381a8u: goto label_1381a8;
        case 0x1381acu: goto label_1381ac;
        case 0x1381b0u: goto label_1381b0;
        case 0x1381b4u: goto label_1381b4;
        case 0x1381b8u: goto label_1381b8;
        case 0x1381bcu: goto label_1381bc;
        case 0x1381c0u: goto label_1381c0;
        case 0x1381c4u: goto label_1381c4;
        case 0x1381c8u: goto label_1381c8;
        case 0x1381ccu: goto label_1381cc;
        case 0x1381d0u: goto label_1381d0;
        case 0x1381d4u: goto label_1381d4;
        case 0x1381d8u: goto label_1381d8;
        case 0x1381dcu: goto label_1381dc;
        case 0x1381e0u: goto label_1381e0;
        case 0x1381e4u: goto label_1381e4;
        case 0x1381e8u: goto label_1381e8;
        case 0x1381ecu: goto label_1381ec;
        case 0x1381f0u: goto label_1381f0;
        case 0x1381f4u: goto label_1381f4;
        case 0x1381f8u: goto label_1381f8;
        case 0x1381fcu: goto label_1381fc;
        case 0x138200u: goto label_138200;
        case 0x138204u: goto label_138204;
        case 0x138208u: goto label_138208;
        case 0x13820cu: goto label_13820c;
        case 0x138210u: goto label_138210;
        case 0x138214u: goto label_138214;
        case 0x138218u: goto label_138218;
        case 0x13821cu: goto label_13821c;
        case 0x138220u: goto label_138220;
        case 0x138224u: goto label_138224;
        case 0x138228u: goto label_138228;
        case 0x13822cu: goto label_13822c;
        case 0x138230u: goto label_138230;
        case 0x138234u: goto label_138234;
        case 0x138238u: goto label_138238;
        case 0x13823cu: goto label_13823c;
        case 0x138240u: goto label_138240;
        case 0x138244u: goto label_138244;
        case 0x138248u: goto label_138248;
        case 0x13824cu: goto label_13824c;
        case 0x138250u: goto label_138250;
        case 0x138254u: goto label_138254;
        case 0x138258u: goto label_138258;
        case 0x13825cu: goto label_13825c;
        case 0x138260u: goto label_138260;
        case 0x138264u: goto label_138264;
        case 0x138268u: goto label_138268;
        case 0x13826cu: goto label_13826c;
        case 0x138270u: goto label_138270;
        case 0x138274u: goto label_138274;
        case 0x138278u: goto label_138278;
        case 0x13827cu: goto label_13827c;
        case 0x138280u: goto label_138280;
        case 0x138284u: goto label_138284;
        case 0x138288u: goto label_138288;
        case 0x13828cu: goto label_13828c;
        case 0x138290u: goto label_138290;
        case 0x138294u: goto label_138294;
        default: break;
    }

    ctx->pc = 0x137f90u;

label_137f90:
    // 0x137f90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x137f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_137f94:
    // 0x137f94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x137f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_137f98:
    // 0x137f98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x137f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_137f9c:
    // 0x137f9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x137f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_137fa0:
    // 0x137fa0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x137fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_137fa4:
    // 0x137fa4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x137fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_137fa8:
    // 0x137fa8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x137fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137fac:
    // 0x137fac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_137fb0:
    // 0x137fb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_137fb4:
    // 0x137fb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_137fb8:
    // 0x137fb8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x137fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_137fbc:
    // 0x137fbc: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x137fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_137fc0:
    // 0x137fc0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_137fc4:
    if (ctx->pc == 0x137FC4u) {
        ctx->pc = 0x137FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FC0u;
        // 0x137fc4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137FC8u;
        goto label_137fc8;
    }
    ctx->pc = 0x137FC0u;
    {
        const bool branch_taken_0x137fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x137FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FC0u;
        // 0x137fc4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fc0) {
            ctx->pc = 0x13800Cu;
            goto label_13800c;
        }
    }
    ctx->pc = 0x137FC8u;
label_137fc8:
    // 0x137fc8: 0xc07d3ac  jal         func_1F4EB0
label_137fcc:
    if (ctx->pc == 0x137FCCu) {
        ctx->pc = 0x137FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FC8u;
        // 0x137fcc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137FD0u;
        goto label_137fd0;
    }
    ctx->pc = 0x137FC8u;
    SET_GPR_U32(ctx, 31, 0x137FD0u);
    ctx->pc = 0x137FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137FC8u;
    // 0x137fcc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x137FC8u, 0x137FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FD0u;
label_137fd0:
    // 0x137fd0: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x137fd0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_137fd4:
    // 0x137fd4: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x137fd4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_137fd8:
    // 0x137fd8: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x137fd8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_137fdc:
    // 0x137fdc: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x137fdcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_137fe0:
    // 0x137fe0: 0xc061c54  jal         func_187150
label_137fe4:
    if (ctx->pc == 0x137FE4u) {
        ctx->pc = 0x137FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FE0u;
        // 0x137fe4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137FE8u;
        goto label_137fe8;
    }
    ctx->pc = 0x137FE0u;
    SET_GPR_U32(ctx, 31, 0x137FE8u);
    ctx->pc = 0x137FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137FE0u;
    // 0x137fe4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187150u, 0x137FE0u, 0x137FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FE8u;
label_137fe8:
    // 0x137fe8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x137fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_137fec:
    // 0x137fec: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x137fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_137ff0:
    // 0x137ff0: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_137ff4:
    // 0x137ff4: 0xc061bd0  jal         func_186F40
label_137ff8:
    if (ctx->pc == 0x137FF8u) {
        ctx->pc = 0x137FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FF4u;
        // 0x137ff8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137FFCu;
        goto label_137ffc;
    }
    ctx->pc = 0x137FF4u;
    SET_GPR_U32(ctx, 31, 0x137FFCu);
    ctx->pc = 0x137FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137FF4u;
    // 0x137ff8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F40u, 0x137FF4u, 0x137FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FFCu;
label_137ffc:
    // 0x137ffc: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x137ffcu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_138000:
    // 0x138000: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x138000u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_138004:
    // 0x138004: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x138004u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_138008:
    // 0x138008: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x138008u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_13800c:
    // 0x13800c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_138010:
    // 0x138010: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x138010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_138014:
    // 0x138014: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_138018:
    if (ctx->pc == 0x138018u) {
        ctx->pc = 0x13801Cu;
        goto label_13801c;
    }
    ctx->pc = 0x138014u;
    {
        const bool branch_taken_0x138014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138014) {
            ctx->pc = 0x13820Cu;
            goto label_13820c;
        }
    }
    ctx->pc = 0x13801Cu;
label_13801c:
    // 0x13801c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x13801cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_138020:
    // 0x138020: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x138020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_138024:
    // 0x138024: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x138024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_138028:
    // 0x138028: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x138028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13802c:
    // 0x13802c: 0x8c840088  lw          $a0, 0x88($a0)
    ctx->pc = 0x13802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_138030:
    // 0x138030: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x138030u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_138034:
    // 0x138034: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x138034u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_138038:
    // 0x138038: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x138038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_13803c:
    // 0x13803c: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x13803cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_138040:
    // 0x138040: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x138040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_138044:
    // 0x138044: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x138044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_138048:
    // 0x138048: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x138048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13804c:
    // 0x13804c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13804cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_138050:
    // 0x138050: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x138050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_138054:
    // 0x138054: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x138054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_138058:
    // 0x138058: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x138058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_13805c:
    // 0x13805c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_138060:
    if (ctx->pc == 0x138060u) {
        ctx->pc = 0x138064u;
        goto label_138064;
    }
    ctx->pc = 0x13805Cu;
    {
        const bool branch_taken_0x13805c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13805c) {
            ctx->pc = 0x1380D8u;
            goto label_1380d8;
        }
    }
    ctx->pc = 0x138064u;
label_138064:
    // 0x138064: 0x8c860068  lw          $a2, 0x68($a0)
    ctx->pc = 0x138064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_138068:
    // 0x138068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_13806c:
    // 0x13806c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13806cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138070:
    // 0x138070: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x138070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_138074:
    // 0x138074: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x138074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_138078:
    // 0x138078: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x138078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_13807c:
    // 0x13807c: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x13807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_138080:
    // 0x138080: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x138080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138084:
    // 0x138084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x138084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138088:
    // 0x138088: 0x3442801e  ori         $v0, $v0, 0x801E
    ctx->pc = 0x138088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32798);
label_13808c:
    // 0x13808c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13808cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_138090:
    // 0x138090: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x138090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_138094:
    // 0x138094: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x138094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_138098:
    // 0x138098: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x138098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13809c:
    // 0x13809c: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x13809cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
label_1380a0:
    // 0x1380a0: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1380a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_1380a4:
    // 0x1380a4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1380a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1380a8:
    // 0x1380a8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1380a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_1380ac:
    // 0x1380ac: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1380acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1380b0:
    // 0x1380b0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1380b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1380b4:
    // 0x1380b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1380b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1380b8:
    // 0x1380b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1380b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1380bc:
    // 0x1380bc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1380bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1380c0:
    // 0x1380c0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1380c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1380c4:
    // 0x1380c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1380c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1380c8:
    // 0x1380c8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1380c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1380cc:
    // 0x1380cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1380ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1380d0:
    // 0x1380d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1380d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1380d4:
    // 0x1380d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1380d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1380d8:
    // 0x1380d8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1380d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1380dc:
    // 0x1380dc: 0x8c55005c  lw          $s5, 0x5C($v0)
    ctx->pc = 0x1380dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1380e0:
    // 0x1380e0: 0x10000046  b           . + 4 + (0x46 << 2)
label_1380e4:
    if (ctx->pc == 0x1380E4u) {
        ctx->pc = 0x1380E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380E0u;
        // 0x1380e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1380E8u;
        goto label_1380e8;
    }
    ctx->pc = 0x1380E0u;
    {
        const bool branch_taken_0x1380e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380E0u;
        // 0x1380e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380e0) {
            ctx->pc = 0x1381FCu;
            goto label_1381fc;
        }
    }
    ctx->pc = 0x1380E8u;
label_1380e8:
    // 0x1380e8: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1380e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1380ec:
    // 0x1380ec: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1380ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1380f0:
    // 0x1380f0: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1380f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1380f4:
    // 0x1380f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1380f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1380f8:
    // 0x1380f8: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x1380f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1380fc:
    // 0x1380fc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1380fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_138100:
    // 0x138100: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x138100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_138104:
    // 0x138104: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x138104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_138108:
    // 0x138108: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x138108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_13810c:
    // 0x13810c: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x13810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
label_138110:
    // 0x138110: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x138110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_138114:
    // 0x138114: 0x34428019  ori         $v0, $v0, 0x8019
    ctx->pc = 0x138114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32793);
label_138118:
    // 0x138118: 0xa1050003  sb          $a1, 0x3($t0)
    ctx->pc = 0x138118u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 5));
label_13811c:
    // 0x13811c: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x13811cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_138120:
    // 0x138120: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x138120u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_138124:
    // 0x138124: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x138124u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
label_138128:
    // 0x138128: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x138128u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_13812c:
    // 0x13812c: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x13812cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_138130:
    // 0x138130: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x138130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_138134:
    // 0x138134: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_138138:
    // 0x138138: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x138138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_13813c:
    // 0x13813c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_138140:
    // 0x138140: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_138144:
    // 0x138144: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x138144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_138148:
    // 0x138148: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_13814c:
    if (ctx->pc == 0x13814Cu) {
        ctx->pc = 0x13814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138148u;
        // 0x13814c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138150u;
        goto label_138150;
    }
    ctx->pc = 0x138148u;
    {
        const bool branch_taken_0x138148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138148u;
        // 0x13814c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138148) {
            ctx->pc = 0x138184u;
            goto label_138184;
        }
    }
    ctx->pc = 0x138150u;
label_138150:
    // 0x138150: 0xc0485c0  jal         func_121700
label_138154:
    if (ctx->pc == 0x138154u) {
        ctx->pc = 0x138158u;
        goto label_138158;
    }
    ctx->pc = 0x138150u;
    SET_GPR_U32(ctx, 31, 0x138158u);
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x138150u, 0x138158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138158u;
label_138158:
    // 0x138158: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x138158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_13815c:
    // 0x13815c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x13815cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_138160:
    // 0x138160: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_138164:
    // 0x138164: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x138164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_138168:
    // 0x138168: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x138168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13816c:
    // 0x13816c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_138170:
    // 0x138170: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x138170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_138174:
    // 0x138174: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x138174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_138178:
    // 0x138178: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x138178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13817c:
    // 0x13817c: 0x320f809  jalr        $t9
label_138180:
    if (ctx->pc == 0x138180u) {
        ctx->pc = 0x138180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13817Cu;
        // 0x138180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138184u;
        goto label_138184;
    }
    ctx->pc = 0x13817Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x138184u);
        ctx->pc = 0x138180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13817Cu;
        // 0x138180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13817Cu, 0x138184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138184u;
label_138184:
    // 0x138184: 0x0  nop
    ctx->pc = 0x138184u;
    // NOP
label_138188:
    // 0x138188: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x138188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_13818c:
    // 0x13818c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13818cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_138190:
    // 0x138190: 0x8f928594  lw          $s2, -0x7A6C($gp)
    ctx->pc = 0x138190u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
label_138194:
    // 0x138194: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_138198:
    // 0x138198: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x138198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13819c:
    // 0x13819c: 0x8cc20064  lw          $v0, 0x64($a2)
    ctx->pc = 0x13819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
label_1381a0:
    // 0x1381a0: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x1381a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_1381a4:
    // 0x1381a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1381a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1381a8:
    // 0x1381a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1381ac:
    if (ctx->pc == 0x1381ACu) {
        ctx->pc = 0x1381ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381A8u;
        // 0x1381ac: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1381B0u;
        goto label_1381b0;
    }
    ctx->pc = 0x1381A8u;
    {
        const bool branch_taken_0x1381a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1381ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381A8u;
        // 0x1381ac: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381a8) {
            ctx->pc = 0x1381BCu;
            goto label_1381bc;
        }
    }
    ctx->pc = 0x1381B0u;
label_1381b0:
    // 0x1381b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1381b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1381b4:
    // 0x1381b4: 0xc04e948  jal         func_13A520
label_1381b8:
    if (ctx->pc == 0x1381B8u) {
        ctx->pc = 0x1381B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381B4u;
        // 0x1381b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1381BCu;
        goto label_1381bc;
    }
    ctx->pc = 0x1381B4u;
    SET_GPR_U32(ctx, 31, 0x1381BCu);
    ctx->pc = 0x1381B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1381B4u;
    // 0x1381b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A520u, 0x1381B4u, 0x1381BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1381BCu;
label_1381bc:
    // 0x1381bc: 0x0  nop
    ctx->pc = 0x1381bcu;
    // NOP
label_1381c0:
    // 0x1381c0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1381c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1381c4:
    // 0x1381c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1381c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1381c8:
    // 0x1381c8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1381c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1381cc:
    // 0x1381cc: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x1381ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_1381d0:
    // 0x1381d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1381d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1381d4:
    // 0x1381d4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1381d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1381d8:
    // 0x1381d8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1381d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1381dc:
    // 0x1381dc: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1381dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_1381e0:
    // 0x1381e0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1381e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1381e4:
    // 0x1381e4: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1381e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_1381e8:
    // 0x1381e8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1381e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1381ec:
    // 0x1381ec: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1381ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1381f0:
    // 0x1381f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1381f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1381f4:
    // 0x1381f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1381f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1381f8:
    // 0x1381f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1381f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1381fc:
    // 0x1381fc: 0x0  nop
    ctx->pc = 0x1381fcu;
    // NOP
label_138200:
    // 0x138200: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x138200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_138204:
    // 0x138204: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_138208:
    if (ctx->pc == 0x138208u) {
        ctx->pc = 0x13820Cu;
        goto label_13820c;
    }
    ctx->pc = 0x138204u;
    {
        const bool branch_taken_0x138204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138204) {
            ctx->pc = 0x1380E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1380e8;
        }
    }
    ctx->pc = 0x13820Cu;
label_13820c:
    // 0x13820c: 0x0  nop
    ctx->pc = 0x13820cu;
    // NOP
label_138210:
    // 0x138210: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x138210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_138214:
    // 0x138214: 0xc05f374  jal         func_17CDD0
label_138218:
    if (ctx->pc == 0x138218u) {
        ctx->pc = 0x138218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138214u;
        // 0x138218: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13821Cu;
        goto label_13821c;
    }
    ctx->pc = 0x138214u;
    SET_GPR_U32(ctx, 31, 0x13821Cu);
    ctx->pc = 0x138218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138214u;
    // 0x138218: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CDD0u, 0x138214u, 0x13821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13821Cu;
label_13821c:
    // 0x13821c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_138220:
    // 0x138220: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x138220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_138224:
    // 0x138224: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_138228:
    if (ctx->pc == 0x138228u) {
        ctx->pc = 0x13822Cu;
        goto label_13822c;
    }
    ctx->pc = 0x138224u;
    {
        const bool branch_taken_0x138224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138224) {
            ctx->pc = 0x138274u;
            goto label_138274;
        }
    }
    ctx->pc = 0x13822Cu;
label_13822c:
    // 0x13822c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x13822cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_138230:
    // 0x138230: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x138230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_138234:
    // 0x138234: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x138234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_138238:
    // 0x138238: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x138238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_13823c:
    // 0x13823c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_138240:
    // 0x138240: 0x24a56640  addiu       $a1, $a1, 0x6640
    ctx->pc = 0x138240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26176));
label_138244:
    // 0x138244: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x138244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_138248:
    // 0x138248: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x138248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_13824c:
    // 0x13824c: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x13824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138250:
    // 0x138250: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x138250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138254:
    // 0x138254: 0xafb400cc  sw          $s4, 0xCC($sp)
    ctx->pc = 0x138254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 20));
label_138258:
    // 0x138258: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x138258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13825c:
    // 0x13825c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x13825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_138260:
    // 0x138260: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x138260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_138264:
    // 0x138264: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x138264u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_138268:
    // 0x138268: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x138268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_13826c:
    // 0x13826c: 0xc04eb5c  jal         func_13AD70
label_138270:
    if (ctx->pc == 0x138270u) {
        ctx->pc = 0x138270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13826Cu;
        // 0x138270: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138274u;
        goto label_138274;
    }
    ctx->pc = 0x13826Cu;
    SET_GPR_U32(ctx, 31, 0x138274u);
    ctx->pc = 0x138270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13826Cu;
    // 0x138270: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD70u, 0x13826Cu, 0x138274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138274u;
label_138274:
    // 0x138274: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x138274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_138278:
    // 0x138278: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x138278u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13827c:
    // 0x13827c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13827cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_138280:
    // 0x138280: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x138280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_138284:
    // 0x138284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x138284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_138288:
    // 0x138288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13828c:
    // 0x13828c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13828cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_138290:
    // 0x138290: 0x3e00008  jr          $ra
label_138294:
    if (ctx->pc == 0x138294u) {
        ctx->pc = 0x138294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138290u;
        // 0x138294: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138298u;
        goto label_fallthrough_0x138290;
    }
    ctx->pc = 0x138290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138290u;
        // 0x138294: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x138290:
    ctx->pc = 0x138298u;
}
