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

// Function: FUN_001010f0
// Address: 0x1010f0 - 0x1013d4
void FUN_001010f0_0x1010f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001010f0_0x1010f0");
#endif

    switch (ctx->pc) {
        case 0x1010f0u: goto label_1010f0;
        case 0x1010f4u: goto label_1010f4;
        case 0x1010f8u: goto label_1010f8;
        case 0x1010fcu: goto label_1010fc;
        case 0x101100u: goto label_101100;
        case 0x101104u: goto label_101104;
        case 0x101108u: goto label_101108;
        case 0x10110cu: goto label_10110c;
        case 0x101110u: goto label_101110;
        case 0x101114u: goto label_101114;
        case 0x101118u: goto label_101118;
        case 0x10111cu: goto label_10111c;
        case 0x101120u: goto label_101120;
        case 0x101124u: goto label_101124;
        case 0x101128u: goto label_101128;
        case 0x10112cu: goto label_10112c;
        case 0x101130u: goto label_101130;
        case 0x101134u: goto label_101134;
        case 0x101138u: goto label_101138;
        case 0x10113cu: goto label_10113c;
        case 0x101140u: goto label_101140;
        case 0x101144u: goto label_101144;
        case 0x101148u: goto label_101148;
        case 0x10114cu: goto label_10114c;
        case 0x101150u: goto label_101150;
        case 0x101154u: goto label_101154;
        case 0x101158u: goto label_101158;
        case 0x10115cu: goto label_10115c;
        case 0x101160u: goto label_101160;
        case 0x101164u: goto label_101164;
        case 0x101168u: goto label_101168;
        case 0x10116cu: goto label_10116c;
        case 0x101170u: goto label_101170;
        case 0x101174u: goto label_101174;
        case 0x101178u: goto label_101178;
        case 0x10117cu: goto label_10117c;
        case 0x101180u: goto label_101180;
        case 0x101184u: goto label_101184;
        case 0x101188u: goto label_101188;
        case 0x10118cu: goto label_10118c;
        case 0x101190u: goto label_101190;
        case 0x101194u: goto label_101194;
        case 0x101198u: goto label_101198;
        case 0x10119cu: goto label_10119c;
        case 0x1011a0u: goto label_1011a0;
        case 0x1011a4u: goto label_1011a4;
        case 0x1011a8u: goto label_1011a8;
        case 0x1011acu: goto label_1011ac;
        case 0x1011b0u: goto label_1011b0;
        case 0x1011b4u: goto label_1011b4;
        case 0x1011b8u: goto label_1011b8;
        case 0x1011bcu: goto label_1011bc;
        case 0x1011c0u: goto label_1011c0;
        case 0x1011c4u: goto label_1011c4;
        case 0x1011c8u: goto label_1011c8;
        case 0x1011ccu: goto label_1011cc;
        case 0x1011d0u: goto label_1011d0;
        case 0x1011d4u: goto label_1011d4;
        case 0x1011d8u: goto label_1011d8;
        case 0x1011dcu: goto label_1011dc;
        case 0x1011e0u: goto label_1011e0;
        case 0x1011e4u: goto label_1011e4;
        case 0x1011e8u: goto label_1011e8;
        case 0x1011ecu: goto label_1011ec;
        case 0x1011f0u: goto label_1011f0;
        case 0x1011f4u: goto label_1011f4;
        case 0x1011f8u: goto label_1011f8;
        case 0x1011fcu: goto label_1011fc;
        case 0x101200u: goto label_101200;
        case 0x101204u: goto label_101204;
        case 0x101208u: goto label_101208;
        case 0x10120cu: goto label_10120c;
        case 0x101210u: goto label_101210;
        case 0x101214u: goto label_101214;
        case 0x101218u: goto label_101218;
        case 0x10121cu: goto label_10121c;
        case 0x101220u: goto label_101220;
        case 0x101224u: goto label_101224;
        case 0x101228u: goto label_101228;
        case 0x10122cu: goto label_10122c;
        case 0x101230u: goto label_101230;
        case 0x101234u: goto label_101234;
        case 0x101238u: goto label_101238;
        case 0x10123cu: goto label_10123c;
        case 0x101240u: goto label_101240;
        case 0x101244u: goto label_101244;
        case 0x101248u: goto label_101248;
        case 0x10124cu: goto label_10124c;
        case 0x101250u: goto label_101250;
        case 0x101254u: goto label_101254;
        case 0x101258u: goto label_101258;
        case 0x10125cu: goto label_10125c;
        case 0x101260u: goto label_101260;
        case 0x101264u: goto label_101264;
        case 0x101268u: goto label_101268;
        case 0x10126cu: goto label_10126c;
        case 0x101270u: goto label_101270;
        case 0x101274u: goto label_101274;
        case 0x101278u: goto label_101278;
        case 0x10127cu: goto label_10127c;
        case 0x101280u: goto label_101280;
        case 0x101284u: goto label_101284;
        case 0x101288u: goto label_101288;
        case 0x10128cu: goto label_10128c;
        case 0x101290u: goto label_101290;
        case 0x101294u: goto label_101294;
        case 0x101298u: goto label_101298;
        case 0x10129cu: goto label_10129c;
        case 0x1012a0u: goto label_1012a0;
        case 0x1012a4u: goto label_1012a4;
        case 0x1012a8u: goto label_1012a8;
        case 0x1012acu: goto label_1012ac;
        case 0x1012b0u: goto label_1012b0;
        case 0x1012b4u: goto label_1012b4;
        case 0x1012b8u: goto label_1012b8;
        case 0x1012bcu: goto label_1012bc;
        case 0x1012c0u: goto label_1012c0;
        case 0x1012c4u: goto label_1012c4;
        case 0x1012c8u: goto label_1012c8;
        case 0x1012ccu: goto label_1012cc;
        case 0x1012d0u: goto label_1012d0;
        case 0x1012d4u: goto label_1012d4;
        case 0x1012d8u: goto label_1012d8;
        case 0x1012dcu: goto label_1012dc;
        case 0x1012e0u: goto label_1012e0;
        case 0x1012e4u: goto label_1012e4;
        case 0x1012e8u: goto label_1012e8;
        case 0x1012ecu: goto label_1012ec;
        case 0x1012f0u: goto label_1012f0;
        case 0x1012f4u: goto label_1012f4;
        case 0x1012f8u: goto label_1012f8;
        case 0x1012fcu: goto label_1012fc;
        case 0x101300u: goto label_101300;
        case 0x101304u: goto label_101304;
        case 0x101308u: goto label_101308;
        case 0x10130cu: goto label_10130c;
        case 0x101310u: goto label_101310;
        case 0x101314u: goto label_101314;
        case 0x101318u: goto label_101318;
        case 0x10131cu: goto label_10131c;
        case 0x101320u: goto label_101320;
        case 0x101324u: goto label_101324;
        case 0x101328u: goto label_101328;
        case 0x10132cu: goto label_10132c;
        case 0x101330u: goto label_101330;
        case 0x101334u: goto label_101334;
        case 0x101338u: goto label_101338;
        case 0x10133cu: goto label_10133c;
        case 0x101340u: goto label_101340;
        case 0x101344u: goto label_101344;
        case 0x101348u: goto label_101348;
        case 0x10134cu: goto label_10134c;
        case 0x101350u: goto label_101350;
        case 0x101354u: goto label_101354;
        case 0x101358u: goto label_101358;
        case 0x10135cu: goto label_10135c;
        case 0x101360u: goto label_101360;
        case 0x101364u: goto label_101364;
        case 0x101368u: goto label_101368;
        case 0x10136cu: goto label_10136c;
        case 0x101370u: goto label_101370;
        case 0x101374u: goto label_101374;
        case 0x101378u: goto label_101378;
        case 0x10137cu: goto label_10137c;
        case 0x101380u: goto label_101380;
        case 0x101384u: goto label_101384;
        case 0x101388u: goto label_101388;
        case 0x10138cu: goto label_10138c;
        case 0x101390u: goto label_101390;
        case 0x101394u: goto label_101394;
        case 0x101398u: goto label_101398;
        case 0x10139cu: goto label_10139c;
        case 0x1013a0u: goto label_1013a0;
        case 0x1013a4u: goto label_1013a4;
        case 0x1013a8u: goto label_1013a8;
        case 0x1013acu: goto label_1013ac;
        case 0x1013b0u: goto label_1013b0;
        case 0x1013b4u: goto label_1013b4;
        case 0x1013b8u: goto label_1013b8;
        case 0x1013bcu: goto label_1013bc;
        case 0x1013c0u: goto label_1013c0;
        case 0x1013c4u: goto label_1013c4;
        case 0x1013c8u: goto label_1013c8;
        case 0x1013ccu: goto label_1013cc;
        case 0x1013d0u: goto label_1013d0;
        default: break;
    }

    ctx->pc = 0x1010f0u;

label_1010f0:
    // 0x1010f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1010f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1010f4:
    // 0x1010f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1010f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1010f8:
    // 0x1010f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1010f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1010fc:
    // 0x1010fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1010fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101100:
    // 0x101100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101104:
    // 0x101104: 0x10000091  b           . + 4 + (0x91 << 2)
label_101108:
    if (ctx->pc == 0x101108u) {
        ctx->pc = 0x101108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101104u;
        // 0x101108: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10110Cu;
        goto label_10110c;
    }
    ctx->pc = 0x101104u;
    {
        const bool branch_taken_0x101104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101104u;
        // 0x101108: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101104) {
            ctx->pc = 0x10134Cu;
            goto label_10134c;
        }
    }
    ctx->pc = 0x10110Cu;
label_10110c:
    // 0x10110c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x10110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_101110:
    // 0x101110: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x101110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_101114:
    // 0x101114: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x101114u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_101118:
    // 0x101118: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10111c:
    // 0x10111c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_101120:
    // 0x101120: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x101120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_101124:
    // 0x101124: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x101124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_101128:
    // 0x101128: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x101128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_10112c:
    // 0x10112c: 0x84830228  lh          $v1, 0x228($a0)
    ctx->pc = 0x10112cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
label_101130:
    // 0x101130: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
label_101134:
    if (ctx->pc == 0x101134u) {
        ctx->pc = 0x101134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101130u;
        // 0x101134: 0x24870040  addiu       $a3, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101138u;
        goto label_101138;
    }
    ctx->pc = 0x101130u;
    {
        const bool branch_taken_0x101130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x101134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101130u;
        // 0x101134: 0x24870040  addiu       $a3, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101130) {
            ctx->pc = 0x1012E8u;
            goto label_1012e8;
        }
    }
    ctx->pc = 0x101138u;
label_101138:
    // 0x101138: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x101138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_10113c:
    // 0x10113c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10113cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_101140:
    // 0x101140: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x101140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_101144:
    // 0x101144: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x101144u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_101148:
    // 0x101148: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x101148u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10114c:
    // 0x10114c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10114cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_101150:
    // 0x101150: 0xf8c40030  sqc2        $vf4, 0x30($a2)
    ctx->pc = 0x101150u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_101154:
    // 0x101154: 0xf8c50020  sqc2        $vf5, 0x20($a2)
    ctx->pc = 0x101154u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_101158:
    // 0x101158: 0xf8c60010  sqc2        $vf6, 0x10($a2)
    ctx->pc = 0x101158u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_10115c:
    // 0x10115c: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x10115cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_101160:
    // 0x101160: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x101160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_101164:
    // 0x101164: 0xc4e00060  lwc1        $f0, 0x60($a3)
    ctx->pc = 0x101164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_101168:
    // 0x101168: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x101168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10116c:
    // 0x10116c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_101170:
    // 0x101170: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x101170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_101174:
    // 0x101174: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x101174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_101178:
    // 0x101178: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x101178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_10117c:
    // 0x10117c: 0xc07d2ee  jal         func_1F4BB8
label_101180:
    if (ctx->pc == 0x101180u) {
        ctx->pc = 0x101180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10117Cu;
        // 0x101180: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x101184u;
        goto label_101184;
    }
    ctx->pc = 0x10117Cu;
    SET_GPR_U32(ctx, 31, 0x101184u);
    ctx->pc = 0x101180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10117Cu;
    // 0x101180: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x10117Cu, 0x101184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101184u;
label_101184:
    // 0x101184: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x101184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_101188:
    // 0x101188: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x101188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_10118c:
    // 0x10118c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x10118cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_101190:
    // 0x101190: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x101190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_101194:
    // 0x101194: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_101198:
    // 0x101198: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10119c:
    // 0x10119c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x10119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1011a0:
    // 0x1011a0: 0x906200ab  lbu         $v0, 0xAB($v1)
    ctx->pc = 0x1011a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 171)));
label_1011a4:
    // 0x1011a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1011a8:
    if (ctx->pc == 0x1011A8u) {
        ctx->pc = 0x1011ACu;
        goto label_1011ac;
    }
    ctx->pc = 0x1011A4u;
    {
        const bool branch_taken_0x1011a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1011a4) {
            ctx->pc = 0x1011C8u;
            goto label_1011c8;
        }
    }
    ctx->pc = 0x1011ACu;
label_1011ac:
    // 0x1011ac: 0x246301f0  addiu       $v1, $v1, 0x1F0
    ctx->pc = 0x1011acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
label_1011b0:
    // 0x1011b0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1011b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1011b4:
    // 0x1011b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1011b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1011b8:
    // 0x1011b8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1011b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1011bc:
    // 0x1011bc: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x1011bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1011c0:
    // 0x1011c0: 0x4bc521a8  vadd.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1011c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1011c4:
    // 0x1011c4: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1011c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_1011c8:
    // 0x1011c8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1011c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1011cc:
    // 0x1011cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1011ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1011d0:
    // 0x1011d0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1011d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1011d4:
    // 0x1011d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1011d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1011d8:
    // 0x1011d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1011d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1011dc:
    // 0x1011dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1011dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1011e0:
    // 0x1011e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1011e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1011e4:
    // 0x1011e4: 0x8c44023c  lw          $a0, 0x23C($v0)
    ctx->pc = 0x1011e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_1011e8:
    // 0x1011e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1011e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1011ec:
    // 0x1011ec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1011ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1011f0:
    // 0x1011f0: 0x320f809  jalr        $t9
label_1011f4:
    if (ctx->pc == 0x1011F4u) {
        ctx->pc = 0x1011F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011F0u;
        // 0x1011f4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1011F8u;
        goto label_1011f8;
    }
    ctx->pc = 0x1011F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1011F8u);
        ctx->pc = 0x1011F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011F0u;
        // 0x1011f4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1011F0u, 0x1011F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1011F8u;
label_1011f8:
    // 0x1011f8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1011f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1011fc:
    // 0x1011fc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1011fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_101200:
    // 0x101200: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x101200u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_101204:
    // 0x101204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x101204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_101208:
    // 0x101208: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10120c:
    // 0x10120c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x10120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_101210:
    // 0x101210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101214:
    // 0x101214: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x101214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_101218:
    // 0x101218: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x101218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10121c:
    // 0x10121c: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x10121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_101220:
    // 0x101220: 0x8c44023c  lw          $a0, 0x23C($v0)
    ctx->pc = 0x101220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_101224:
    // 0x101224: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x101224u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_101228:
    // 0x101228: 0x0  nop
    ctx->pc = 0x101228u;
    // NOP
label_10122c:
    // 0x10122c: 0x0  nop
    ctx->pc = 0x10122cu;
    // NOP
label_101230:
    // 0x101230: 0xc04c730  jal         func_131CC0
label_101234:
    if (ctx->pc == 0x101234u) {
        ctx->pc = 0x101238u;
        goto label_101238;
    }
    ctx->pc = 0x101230u;
    SET_GPR_U32(ctx, 31, 0x101238u);
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x101230u, 0x101238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101238u;
label_101238:
    // 0x101238: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x101238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10123c:
    // 0x10123c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x10123cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_101240:
    // 0x101240: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x101240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_101244:
    // 0x101244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x101244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_101248:
    // 0x101248: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x101248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_10124c:
    // 0x10124c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10124cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101250:
    // 0x101250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101254:
    // 0x101254: 0x8c44023c  lw          $a0, 0x23C($v0)
    ctx->pc = 0x101254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_101258:
    // 0x101258: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10125c:
    // 0x10125c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10125cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_101260:
    // 0x101260: 0x320f809  jalr        $t9
label_101264:
    if (ctx->pc == 0x101264u) {
        ctx->pc = 0x101264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101260u;
        // 0x101264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101268u;
        goto label_101268;
    }
    ctx->pc = 0x101260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101268u);
        ctx->pc = 0x101264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101260u;
        // 0x101264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101260u, 0x101268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101268u;
label_101268:
    // 0x101268: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x101268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10126c:
    // 0x10126c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x10126cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_101270:
    // 0x101270: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x101270u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_101274:
    // 0x101274: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_101278:
    // 0x101278: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x101278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_10127c:
    // 0x10127c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x10127cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_101280:
    // 0x101280: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x101280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_101284:
    // 0x101284: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x101284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_101288:
    // 0x101288: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x101288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_10128c:
    // 0x10128c: 0x84420228  lh          $v0, 0x228($v0)
    ctx->pc = 0x10128cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 552)));
label_101290:
    // 0x101290: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_101294:
    if (ctx->pc == 0x101294u) {
        ctx->pc = 0x101298u;
        goto label_101298;
    }
    ctx->pc = 0x101290u;
    {
        const bool branch_taken_0x101290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x101290) {
            ctx->pc = 0x1012B8u;
            goto label_1012b8;
        }
    }
    ctx->pc = 0x101298u;
label_101298:
    // 0x101298: 0x848201ea  lh          $v0, 0x1EA($a0)
    ctx->pc = 0x101298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 490)));
label_10129c:
    // 0x10129c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1012a0:
    if (ctx->pc == 0x1012A0u) {
        ctx->pc = 0x1012A4u;
        goto label_1012a4;
    }
    ctx->pc = 0x10129Cu;
    {
        const bool branch_taken_0x10129c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10129c) {
            ctx->pc = 0x1012B8u;
            goto label_1012b8;
        }
    }
    ctx->pc = 0x1012A4u;
label_1012a4:
    // 0x1012a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1012a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1012a8:
    // 0x1012a8: 0xc0401e0  jal         func_100780
label_1012ac:
    if (ctx->pc == 0x1012ACu) {
        ctx->pc = 0x1012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012A8u;
        // 0x1012ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012B0u;
        goto label_1012b0;
    }
    ctx->pc = 0x1012A8u;
    SET_GPR_U32(ctx, 31, 0x1012B0u);
    ctx->pc = 0x1012ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012A8u;
    // 0x1012ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100780u, 0x1012A8u, 0x1012B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012B0u;
label_1012b0:
    // 0x1012b0: 0x10000024  b           . + 4 + (0x24 << 2)
label_1012b4:
    if (ctx->pc == 0x1012B4u) {
        ctx->pc = 0x1012B8u;
        goto label_1012b8;
    }
    ctx->pc = 0x1012B0u;
    {
        const bool branch_taken_0x1012b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1012b0) {
            ctx->pc = 0x101344u;
            goto label_101344;
        }
    }
    ctx->pc = 0x1012B8u;
label_1012b8:
    // 0x1012b8: 0x8f848214  lw          $a0, -0x7DEC($gp)
    ctx->pc = 0x1012b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1012bc:
    // 0x1012bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1012bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1012c0:
    // 0x1012c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1012c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1012c4:
    // 0x1012c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1012c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1012c8:
    // 0x1012c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1012c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1012cc:
    // 0x1012cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1012ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1012d0:
    // 0x1012d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1012d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1012d4:
    // 0x1012d4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1012d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1012d8:
    // 0x1012d8: 0xc04ce04  jal         func_133810
label_1012dc:
    if (ctx->pc == 0x1012DCu) {
        ctx->pc = 0x1012DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012D8u;
        // 0x1012dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012E0u;
        goto label_1012e0;
    }
    ctx->pc = 0x1012D8u;
    SET_GPR_U32(ctx, 31, 0x1012E0u);
    ctx->pc = 0x1012DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012D8u;
    // 0x1012dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133810u, 0x1012D8u, 0x1012E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012E0u;
label_1012e0:
    // 0x1012e0: 0x10000018  b           . + 4 + (0x18 << 2)
label_1012e4:
    if (ctx->pc == 0x1012E4u) {
        ctx->pc = 0x1012E8u;
        goto label_1012e8;
    }
    ctx->pc = 0x1012E0u;
    {
        const bool branch_taken_0x1012e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1012e0) {
            ctx->pc = 0x101344u;
            goto label_101344;
        }
    }
    ctx->pc = 0x1012E8u;
label_1012e8:
    // 0x1012e8: 0x8c84023c  lw          $a0, 0x23C($a0)
    ctx->pc = 0x1012e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 572)));
label_1012ec:
    // 0x1012ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1012ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1012f0:
    // 0x1012f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1012f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1012f4:
    // 0x1012f4: 0x320f809  jalr        $t9
label_1012f8:
    if (ctx->pc == 0x1012F8u) {
        ctx->pc = 0x1012F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012F4u;
        // 0x1012f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012FCu;
        goto label_1012fc;
    }
    ctx->pc = 0x1012F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1012FCu);
        ctx->pc = 0x1012F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012F4u;
        // 0x1012f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012F4u, 0x1012FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1012FCu;
label_1012fc:
    // 0x1012fc: 0x8f848214  lw          $a0, -0x7DEC($gp)
    ctx->pc = 0x1012fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_101300:
    // 0x101300: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x101300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_101304:
    // 0x101304: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x101304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_101308:
    // 0x101308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10130c:
    // 0x10130c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x10130cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_101310:
    // 0x101310: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x101310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_101314:
    // 0x101314: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x101314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101318:
    // 0x101318: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x101318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_10131c:
    // 0x10131c: 0xc04ce04  jal         func_133810
label_101320:
    if (ctx->pc == 0x101320u) {
        ctx->pc = 0x101320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10131Cu;
        // 0x101320: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101324u;
        goto label_101324;
    }
    ctx->pc = 0x10131Cu;
    SET_GPR_U32(ctx, 31, 0x101324u);
    ctx->pc = 0x101320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10131Cu;
    // 0x101320: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133810u, 0x10131Cu, 0x101324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101324u;
label_101324:
    // 0x101324: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x101324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_101328:
    // 0x101328: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x101328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_10132c:
    // 0x10132c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101330:
    // 0x101330: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x101330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_101334:
    // 0x101334: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101338:
    // 0x101338: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10133c:
    // 0x10133c: 0x320f809  jalr        $t9
label_101340:
    if (ctx->pc == 0x101340u) {
        ctx->pc = 0x101340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10133Cu;
        // 0x101340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101344u;
        goto label_101344;
    }
    ctx->pc = 0x10133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101344u);
        ctx->pc = 0x101340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10133Cu;
        // 0x101340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10133Cu, 0x101344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101344u;
label_101344:
    // 0x101344: 0x0  nop
    ctx->pc = 0x101344u;
    // NOP
label_101348:
    // 0x101348: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10134c:
    // 0x10134c: 0x0  nop
    ctx->pc = 0x10134cu;
    // NOP
label_101350:
    // 0x101350: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x101350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_101354:
    // 0x101354: 0x1460ff6d  bnez        $v1, . + 4 + (-0x93 << 2)
label_101358:
    if (ctx->pc == 0x101358u) {
        ctx->pc = 0x10135Cu;
        goto label_10135c;
    }
    ctx->pc = 0x101354u;
    {
        const bool branch_taken_0x101354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x101354) {
            ctx->pc = 0x10110Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10110c;
        }
    }
    ctx->pc = 0x10135Cu;
label_10135c:
    // 0x10135c: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x10135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_101360:
    // 0x101360: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x101360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_101364:
    // 0x101364: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_101368:
    if (ctx->pc == 0x101368u) {
        ctx->pc = 0x10136Cu;
        goto label_10136c;
    }
    ctx->pc = 0x101364u;
    {
        const bool branch_taken_0x101364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x101364) {
            ctx->pc = 0x1013C0u;
            goto label_1013c0;
        }
    }
    ctx->pc = 0x10136Cu;
label_10136c:
    // 0x10136c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_101370:
    // 0x101370: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x101370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_101374:
    // 0x101374: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_101378:
    if (ctx->pc == 0x101378u) {
        ctx->pc = 0x101378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101374u;
        // 0x101378: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10137Cu;
        goto label_10137c;
    }
    ctx->pc = 0x101374u;
    {
        const bool branch_taken_0x101374 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x101378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101374u;
        // 0x101378: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101374) {
            ctx->pc = 0x101384u;
            goto label_101384;
        }
    }
    ctx->pc = 0x10137Cu;
label_10137c:
    // 0x10137c: 0x10000007  b           . + 4 + (0x7 << 2)
label_101380:
    if (ctx->pc == 0x101380u) {
        ctx->pc = 0x101380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10137Cu;
        // 0x101380: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101384u;
        goto label_101384;
    }
    ctx->pc = 0x10137Cu;
    {
        const bool branch_taken_0x10137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10137Cu;
        // 0x101380: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10137c) {
            ctx->pc = 0x10139Cu;
            goto label_10139c;
        }
    }
    ctx->pc = 0x101384u;
label_101384:
    // 0x101384: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x101384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101388:
    // 0x101388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x101388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10138c:
    // 0x10138c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101390:
    // 0x101390: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101394:
    // 0x101394: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x101394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_101398:
    // 0x101398: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x101398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_10139c:
    // 0x10139c: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x10139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1013a0:
    // 0x1013a0: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1013a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1013a4:
    // 0x1013a4: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1013a4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1013a8:
    // 0x1013a8: 0xc0512c8  jal         func_144B20
label_1013ac:
    if (ctx->pc == 0x1013ACu) {
        ctx->pc = 0x1013ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013A8u;
        // 0x1013ac: 0x7c460010  sq          $a2, 0x10($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013B0u;
        goto label_1013b0;
    }
    ctx->pc = 0x1013A8u;
    SET_GPR_U32(ctx, 31, 0x1013B0u);
    ctx->pc = 0x1013ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013A8u;
    // 0x1013ac: 0x7c460010  sq          $a2, 0x10($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x1013A8u, 0x1013B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013B0u;
label_1013b0:
    // 0x1013b0: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x1013b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1013b4:
    // 0x1013b4: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x1013b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1013b8:
    // 0x1013b8: 0xc0513d0  jal         func_144F40
label_1013bc:
    if (ctx->pc == 0x1013BCu) {
        ctx->pc = 0x1013BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013B8u;
        // 0x1013bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013C0u;
        goto label_1013c0;
    }
    ctx->pc = 0x1013B8u;
    SET_GPR_U32(ctx, 31, 0x1013C0u);
    ctx->pc = 0x1013BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013B8u;
    // 0x1013bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144F40u, 0x1013B8u, 0x1013C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013C0u;
label_1013c0:
    // 0x1013c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1013c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1013c4:
    // 0x1013c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1013c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1013c8:
    // 0x1013c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1013c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1013cc:
    // 0x1013cc: 0x3e00008  jr          $ra
label_1013d0:
    if (ctx->pc == 0x1013D0u) {
        ctx->pc = 0x1013D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013CCu;
        // 0x1013d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013D4u;
        goto label_fallthrough_0x1013cc;
    }
    ctx->pc = 0x1013CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1013D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013CCu;
        // 0x1013d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1013CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1013cc:
    ctx->pc = 0x1013D4u;
}
