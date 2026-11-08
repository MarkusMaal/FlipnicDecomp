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

// Function: FUN_001615b0
// Address: 0x1615b0 - 0x161a44
void FUN_001615b0_0x1615b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001615b0_0x1615b0");
#endif

    switch (ctx->pc) {
        case 0x1615b0u: goto label_1615b0;
        case 0x1615b4u: goto label_1615b4;
        case 0x1615b8u: goto label_1615b8;
        case 0x1615bcu: goto label_1615bc;
        case 0x1615c0u: goto label_1615c0;
        case 0x1615c4u: goto label_1615c4;
        case 0x1615c8u: goto label_1615c8;
        case 0x1615ccu: goto label_1615cc;
        case 0x1615d0u: goto label_1615d0;
        case 0x1615d4u: goto label_1615d4;
        case 0x1615d8u: goto label_1615d8;
        case 0x1615dcu: goto label_1615dc;
        case 0x1615e0u: goto label_1615e0;
        case 0x1615e4u: goto label_1615e4;
        case 0x1615e8u: goto label_1615e8;
        case 0x1615ecu: goto label_1615ec;
        case 0x1615f0u: goto label_1615f0;
        case 0x1615f4u: goto label_1615f4;
        case 0x1615f8u: goto label_1615f8;
        case 0x1615fcu: goto label_1615fc;
        case 0x161600u: goto label_161600;
        case 0x161604u: goto label_161604;
        case 0x161608u: goto label_161608;
        case 0x16160cu: goto label_16160c;
        case 0x161610u: goto label_161610;
        case 0x161614u: goto label_161614;
        case 0x161618u: goto label_161618;
        case 0x16161cu: goto label_16161c;
        case 0x161620u: goto label_161620;
        case 0x161624u: goto label_161624;
        case 0x161628u: goto label_161628;
        case 0x16162cu: goto label_16162c;
        case 0x161630u: goto label_161630;
        case 0x161634u: goto label_161634;
        case 0x161638u: goto label_161638;
        case 0x16163cu: goto label_16163c;
        case 0x161640u: goto label_161640;
        case 0x161644u: goto label_161644;
        case 0x161648u: goto label_161648;
        case 0x16164cu: goto label_16164c;
        case 0x161650u: goto label_161650;
        case 0x161654u: goto label_161654;
        case 0x161658u: goto label_161658;
        case 0x16165cu: goto label_16165c;
        case 0x161660u: goto label_161660;
        case 0x161664u: goto label_161664;
        case 0x161668u: goto label_161668;
        case 0x16166cu: goto label_16166c;
        case 0x161670u: goto label_161670;
        case 0x161674u: goto label_161674;
        case 0x161678u: goto label_161678;
        case 0x16167cu: goto label_16167c;
        case 0x161680u: goto label_161680;
        case 0x161684u: goto label_161684;
        case 0x161688u: goto label_161688;
        case 0x16168cu: goto label_16168c;
        case 0x161690u: goto label_161690;
        case 0x161694u: goto label_161694;
        case 0x161698u: goto label_161698;
        case 0x16169cu: goto label_16169c;
        case 0x1616a0u: goto label_1616a0;
        case 0x1616a4u: goto label_1616a4;
        case 0x1616a8u: goto label_1616a8;
        case 0x1616acu: goto label_1616ac;
        case 0x1616b0u: goto label_1616b0;
        case 0x1616b4u: goto label_1616b4;
        case 0x1616b8u: goto label_1616b8;
        case 0x1616bcu: goto label_1616bc;
        case 0x1616c0u: goto label_1616c0;
        case 0x1616c4u: goto label_1616c4;
        case 0x1616c8u: goto label_1616c8;
        case 0x1616ccu: goto label_1616cc;
        case 0x1616d0u: goto label_1616d0;
        case 0x1616d4u: goto label_1616d4;
        case 0x1616d8u: goto label_1616d8;
        case 0x1616dcu: goto label_1616dc;
        case 0x1616e0u: goto label_1616e0;
        case 0x1616e4u: goto label_1616e4;
        case 0x1616e8u: goto label_1616e8;
        case 0x1616ecu: goto label_1616ec;
        case 0x1616f0u: goto label_1616f0;
        case 0x1616f4u: goto label_1616f4;
        case 0x1616f8u: goto label_1616f8;
        case 0x1616fcu: goto label_1616fc;
        case 0x161700u: goto label_161700;
        case 0x161704u: goto label_161704;
        case 0x161708u: goto label_161708;
        case 0x16170cu: goto label_16170c;
        case 0x161710u: goto label_161710;
        case 0x161714u: goto label_161714;
        case 0x161718u: goto label_161718;
        case 0x16171cu: goto label_16171c;
        case 0x161720u: goto label_161720;
        case 0x161724u: goto label_161724;
        case 0x161728u: goto label_161728;
        case 0x16172cu: goto label_16172c;
        case 0x161730u: goto label_161730;
        case 0x161734u: goto label_161734;
        case 0x161738u: goto label_161738;
        case 0x16173cu: goto label_16173c;
        case 0x161740u: goto label_161740;
        case 0x161744u: goto label_161744;
        case 0x161748u: goto label_161748;
        case 0x16174cu: goto label_16174c;
        case 0x161750u: goto label_161750;
        case 0x161754u: goto label_161754;
        case 0x161758u: goto label_161758;
        case 0x16175cu: goto label_16175c;
        case 0x161760u: goto label_161760;
        case 0x161764u: goto label_161764;
        case 0x161768u: goto label_161768;
        case 0x16176cu: goto label_16176c;
        case 0x161770u: goto label_161770;
        case 0x161774u: goto label_161774;
        case 0x161778u: goto label_161778;
        case 0x16177cu: goto label_16177c;
        case 0x161780u: goto label_161780;
        case 0x161784u: goto label_161784;
        case 0x161788u: goto label_161788;
        case 0x16178cu: goto label_16178c;
        case 0x161790u: goto label_161790;
        case 0x161794u: goto label_161794;
        case 0x161798u: goto label_161798;
        case 0x16179cu: goto label_16179c;
        case 0x1617a0u: goto label_1617a0;
        case 0x1617a4u: goto label_1617a4;
        case 0x1617a8u: goto label_1617a8;
        case 0x1617acu: goto label_1617ac;
        case 0x1617b0u: goto label_1617b0;
        case 0x1617b4u: goto label_1617b4;
        case 0x1617b8u: goto label_1617b8;
        case 0x1617bcu: goto label_1617bc;
        case 0x1617c0u: goto label_1617c0;
        case 0x1617c4u: goto label_1617c4;
        case 0x1617c8u: goto label_1617c8;
        case 0x1617ccu: goto label_1617cc;
        case 0x1617d0u: goto label_1617d0;
        case 0x1617d4u: goto label_1617d4;
        case 0x1617d8u: goto label_1617d8;
        case 0x1617dcu: goto label_1617dc;
        case 0x1617e0u: goto label_1617e0;
        case 0x1617e4u: goto label_1617e4;
        case 0x1617e8u: goto label_1617e8;
        case 0x1617ecu: goto label_1617ec;
        case 0x1617f0u: goto label_1617f0;
        case 0x1617f4u: goto label_1617f4;
        case 0x1617f8u: goto label_1617f8;
        case 0x1617fcu: goto label_1617fc;
        case 0x161800u: goto label_161800;
        case 0x161804u: goto label_161804;
        case 0x161808u: goto label_161808;
        case 0x16180cu: goto label_16180c;
        case 0x161810u: goto label_161810;
        case 0x161814u: goto label_161814;
        case 0x161818u: goto label_161818;
        case 0x16181cu: goto label_16181c;
        case 0x161820u: goto label_161820;
        case 0x161824u: goto label_161824;
        case 0x161828u: goto label_161828;
        case 0x16182cu: goto label_16182c;
        case 0x161830u: goto label_161830;
        case 0x161834u: goto label_161834;
        case 0x161838u: goto label_161838;
        case 0x16183cu: goto label_16183c;
        case 0x161840u: goto label_161840;
        case 0x161844u: goto label_161844;
        case 0x161848u: goto label_161848;
        case 0x16184cu: goto label_16184c;
        case 0x161850u: goto label_161850;
        case 0x161854u: goto label_161854;
        case 0x161858u: goto label_161858;
        case 0x16185cu: goto label_16185c;
        case 0x161860u: goto label_161860;
        case 0x161864u: goto label_161864;
        case 0x161868u: goto label_161868;
        case 0x16186cu: goto label_16186c;
        case 0x161870u: goto label_161870;
        case 0x161874u: goto label_161874;
        case 0x161878u: goto label_161878;
        case 0x16187cu: goto label_16187c;
        case 0x161880u: goto label_161880;
        case 0x161884u: goto label_161884;
        case 0x161888u: goto label_161888;
        case 0x16188cu: goto label_16188c;
        case 0x161890u: goto label_161890;
        case 0x161894u: goto label_161894;
        case 0x161898u: goto label_161898;
        case 0x16189cu: goto label_16189c;
        case 0x1618a0u: goto label_1618a0;
        case 0x1618a4u: goto label_1618a4;
        case 0x1618a8u: goto label_1618a8;
        case 0x1618acu: goto label_1618ac;
        case 0x1618b0u: goto label_1618b0;
        case 0x1618b4u: goto label_1618b4;
        case 0x1618b8u: goto label_1618b8;
        case 0x1618bcu: goto label_1618bc;
        case 0x1618c0u: goto label_1618c0;
        case 0x1618c4u: goto label_1618c4;
        case 0x1618c8u: goto label_1618c8;
        case 0x1618ccu: goto label_1618cc;
        case 0x1618d0u: goto label_1618d0;
        case 0x1618d4u: goto label_1618d4;
        case 0x1618d8u: goto label_1618d8;
        case 0x1618dcu: goto label_1618dc;
        case 0x1618e0u: goto label_1618e0;
        case 0x1618e4u: goto label_1618e4;
        case 0x1618e8u: goto label_1618e8;
        case 0x1618ecu: goto label_1618ec;
        case 0x1618f0u: goto label_1618f0;
        case 0x1618f4u: goto label_1618f4;
        case 0x1618f8u: goto label_1618f8;
        case 0x1618fcu: goto label_1618fc;
        case 0x161900u: goto label_161900;
        case 0x161904u: goto label_161904;
        case 0x161908u: goto label_161908;
        case 0x16190cu: goto label_16190c;
        case 0x161910u: goto label_161910;
        case 0x161914u: goto label_161914;
        case 0x161918u: goto label_161918;
        case 0x16191cu: goto label_16191c;
        case 0x161920u: goto label_161920;
        case 0x161924u: goto label_161924;
        case 0x161928u: goto label_161928;
        case 0x16192cu: goto label_16192c;
        case 0x161930u: goto label_161930;
        case 0x161934u: goto label_161934;
        case 0x161938u: goto label_161938;
        case 0x16193cu: goto label_16193c;
        case 0x161940u: goto label_161940;
        case 0x161944u: goto label_161944;
        case 0x161948u: goto label_161948;
        case 0x16194cu: goto label_16194c;
        case 0x161950u: goto label_161950;
        case 0x161954u: goto label_161954;
        case 0x161958u: goto label_161958;
        case 0x16195cu: goto label_16195c;
        case 0x161960u: goto label_161960;
        case 0x161964u: goto label_161964;
        case 0x161968u: goto label_161968;
        case 0x16196cu: goto label_16196c;
        case 0x161970u: goto label_161970;
        case 0x161974u: goto label_161974;
        case 0x161978u: goto label_161978;
        case 0x16197cu: goto label_16197c;
        case 0x161980u: goto label_161980;
        case 0x161984u: goto label_161984;
        case 0x161988u: goto label_161988;
        case 0x16198cu: goto label_16198c;
        case 0x161990u: goto label_161990;
        case 0x161994u: goto label_161994;
        case 0x161998u: goto label_161998;
        case 0x16199cu: goto label_16199c;
        case 0x1619a0u: goto label_1619a0;
        case 0x1619a4u: goto label_1619a4;
        case 0x1619a8u: goto label_1619a8;
        case 0x1619acu: goto label_1619ac;
        case 0x1619b0u: goto label_1619b0;
        case 0x1619b4u: goto label_1619b4;
        case 0x1619b8u: goto label_1619b8;
        case 0x1619bcu: goto label_1619bc;
        case 0x1619c0u: goto label_1619c0;
        case 0x1619c4u: goto label_1619c4;
        case 0x1619c8u: goto label_1619c8;
        case 0x1619ccu: goto label_1619cc;
        case 0x1619d0u: goto label_1619d0;
        case 0x1619d4u: goto label_1619d4;
        case 0x1619d8u: goto label_1619d8;
        case 0x1619dcu: goto label_1619dc;
        case 0x1619e0u: goto label_1619e0;
        case 0x1619e4u: goto label_1619e4;
        case 0x1619e8u: goto label_1619e8;
        case 0x1619ecu: goto label_1619ec;
        case 0x1619f0u: goto label_1619f0;
        case 0x1619f4u: goto label_1619f4;
        case 0x1619f8u: goto label_1619f8;
        case 0x1619fcu: goto label_1619fc;
        case 0x161a00u: goto label_161a00;
        case 0x161a04u: goto label_161a04;
        case 0x161a08u: goto label_161a08;
        case 0x161a0cu: goto label_161a0c;
        case 0x161a10u: goto label_161a10;
        case 0x161a14u: goto label_161a14;
        case 0x161a18u: goto label_161a18;
        case 0x161a1cu: goto label_161a1c;
        case 0x161a20u: goto label_161a20;
        case 0x161a24u: goto label_161a24;
        case 0x161a28u: goto label_161a28;
        case 0x161a2cu: goto label_161a2c;
        case 0x161a30u: goto label_161a30;
        case 0x161a34u: goto label_161a34;
        case 0x161a38u: goto label_161a38;
        case 0x161a3cu: goto label_161a3c;
        case 0x161a40u: goto label_161a40;
        default: break;
    }

    ctx->pc = 0x1615b0u;

label_1615b0:
    // 0x1615b0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1615b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1615b4:
    // 0x1615b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1615b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1615b8:
    // 0x1615b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1615b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1615bc:
    // 0x1615bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1615bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1615c0:
    // 0x1615c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1615c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1615c4:
    // 0x1615c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1615c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1615c8:
    // 0x1615c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1615c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1615cc:
    // 0x1615cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1615ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1615d0:
    // 0x1615d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1615d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1615d4:
    // 0x1615d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1615d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1615d8:
    // 0x1615d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1615d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1615dc:
    // 0x1615dc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1615dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1615e0:
    // 0x1615e0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1615e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1615e4:
    // 0x1615e4: 0x320f809  jalr        $t9
label_1615e8:
    if (ctx->pc == 0x1615E8u) {
        ctx->pc = 0x1615E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615E4u;
        // 0x1615e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1615ECu;
        goto label_1615ec;
    }
    ctx->pc = 0x1615E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1615ECu);
        ctx->pc = 0x1615E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615E4u;
        // 0x1615e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1615E4u, 0x1615ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1615ECu;
label_1615ec:
    // 0x1615ec: 0x260301e0  addiu       $v1, $s0, 0x1E0
    ctx->pc = 0x1615ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
label_1615f0:
    // 0x1615f0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1615f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1615f4:
    // 0x1615f4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x1615f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1615f8:
    // 0x1615f8: 0x12200107  beqz        $s1, . + 4 + (0x107 << 2)
label_1615fc:
    if (ctx->pc == 0x1615FCu) {
        ctx->pc = 0x1615FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615F8u;
        // 0x1615fc: 0xf8640000  sqc2        $vf4, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161600u;
        goto label_161600;
    }
    ctx->pc = 0x1615F8u;
    {
        const bool branch_taken_0x1615f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1615FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615F8u;
        // 0x1615fc: 0xf8640000  sqc2        $vf4, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1615f8) {
            ctx->pc = 0x161A18u;
            goto label_161a18;
        }
    }
    ctx->pc = 0x161600u;
label_161600:
    // 0x161600: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x161600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161604:
    // 0x161604: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x161604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_161608:
    // 0x161608: 0x0  nop
    ctx->pc = 0x161608u;
    // NOP
label_16160c:
    // 0x16160c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x16160cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_161610:
    // 0x161610: 0x0  nop
    ctx->pc = 0x161610u;
    // NOP
label_161614:
    // 0x161614: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_161618:
    if (ctx->pc == 0x161618u) {
        ctx->pc = 0x16161Cu;
        goto label_16161c;
    }
    ctx->pc = 0x161614u;
    {
        const bool branch_taken_0x161614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161614) {
            ctx->pc = 0x161624u;
            goto label_161624;
        }
    }
    ctx->pc = 0x16161Cu;
label_16161c:
    // 0x16161c: 0x100000ff  b           . + 4 + (0xFF << 2)
label_161620:
    if (ctx->pc == 0x161620u) {
        ctx->pc = 0x161620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16161Cu;
        // 0x161620: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161624u;
        goto label_161624;
    }
    ctx->pc = 0x16161Cu;
    {
        const bool branch_taken_0x16161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16161Cu;
        // 0x161620: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16161c) {
            ctx->pc = 0x161A1Cu;
            goto label_161a1c;
        }
    }
    ctx->pc = 0x161624u;
label_161624:
    // 0x161624: 0x860201f4  lh          $v0, 0x1F4($s0)
    ctx->pc = 0x161624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_161628:
    // 0x161628: 0xc040168  jal         func_1005A0
label_16162c:
    if (ctx->pc == 0x16162Cu) {
        ctx->pc = 0x16162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161628u;
        // 0x16162c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161630u;
        goto label_161630;
    }
    ctx->pc = 0x161628u;
    SET_GPR_U32(ctx, 31, 0x161630u);
    ctx->pc = 0x16162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161628u;
    // 0x16162c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x161628u, 0x161630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161630u;
label_161630:
    // 0x161630: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161634:
    // 0x161634: 0x860201f4  lh          $v0, 0x1F4($s0)
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_161638:
    // 0x161638: 0xc040168  jal         func_1005A0
label_16163c:
    if (ctx->pc == 0x16163Cu) {
        ctx->pc = 0x16163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161638u;
        // 0x16163c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161640u;
        goto label_161640;
    }
    ctx->pc = 0x161638u;
    SET_GPR_U32(ctx, 31, 0x161640u);
    ctx->pc = 0x16163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161638u;
    // 0x16163c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x161638u, 0x161640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161640u;
label_161640:
    // 0x161640: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x161640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161644:
    // 0x161644: 0x860201f4  lh          $v0, 0x1F4($s0)
    ctx->pc = 0x161644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_161648:
    // 0x161648: 0xc040168  jal         func_1005A0
label_16164c:
    if (ctx->pc == 0x16164Cu) {
        ctx->pc = 0x16164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161648u;
        // 0x16164c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161650u;
        goto label_161650;
    }
    ctx->pc = 0x161648u;
    SET_GPR_U32(ctx, 31, 0x161650u);
    ctx->pc = 0x16164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161648u;
    // 0x16164c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x161648u, 0x161650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161650u;
label_161650:
    // 0x161650: 0xc6000214  lwc1        $f0, 0x214($s0)
    ctx->pc = 0x161650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161654:
    // 0x161654: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x161654u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161658:
    // 0x161658: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x161658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16165c:
    // 0x16165c: 0x861301f4  lh          $s3, 0x1F4($s0)
    ctx->pc = 0x16165cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_161660:
    // 0x161660: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_161664:
    // 0x161664: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x161664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_161668:
    // 0x161668: 0x8e1401f0  lw          $s4, 0x1F0($s0)
    ctx->pc = 0x161668u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_16166c:
    // 0x16166c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_161670:
    // 0x161670: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x161670u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_161674:
    // 0x161674: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x161674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_161678:
    // 0x161678: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x161678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16167c:
    // 0x16167c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x16167cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_161680:
    // 0x161680: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x161680u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_161684:
    // 0x161684: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x161684u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_161688:
    // 0x161688: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x161688u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_16168c:
    // 0x16168c: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x16168cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_161690:
    // 0x161690: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x161690u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_161694:
    // 0x161694: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x161694u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_161698:
    // 0x161698: 0xc07d428  jal         func_1F50A0
label_16169c:
    if (ctx->pc == 0x16169Cu) {
        ctx->pc = 0x16169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161698u;
        // 0x16169c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1616A0u;
        goto label_1616a0;
    }
    ctx->pc = 0x161698u;
    SET_GPR_U32(ctx, 31, 0x1616A0u);
    ctx->pc = 0x16169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161698u;
    // 0x16169c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x161698u, 0x1616A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616A0u;
label_1616a0:
    // 0x1616a0: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x1616a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_1616a4:
    // 0x1616a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1616a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1616a8:
    // 0x1616a8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1616ac:
    if (ctx->pc == 0x1616ACu) {
        ctx->pc = 0x1616ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616A8u;
        // 0x1616ac: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1616B0u;
        goto label_1616b0;
    }
    ctx->pc = 0x1616A8u;
    {
        const bool branch_taken_0x1616a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616A8u;
        // 0x1616ac: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616a8) {
            ctx->pc = 0x1616E4u;
            goto label_1616e4;
        }
    }
    ctx->pc = 0x1616B0u;
label_1616b0:
    // 0x1616b0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1616b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1616b4:
    // 0x1616b4: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1616b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_1616b8:
    // 0x1616b8: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1616b8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1616bc:
    // 0x1616bc: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1616bcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_1616c0:
    // 0x1616c0: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x1616c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1616c4:
    // 0x1616c4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1616c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1616c8:
    // 0x1616c8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1616c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1616cc:
    // 0x1616cc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1616ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1616d0:
    // 0x1616d0: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x1616d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_1616d4:
    // 0x1616d4: 0xfaa90000  sqc2        $vf9, 0x0($s5)
    ctx->pc = 0x1616d4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_1616d8:
    // 0x1616d8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1616d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1616dc:
    // 0x1616dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1616dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1616e0:
    // 0x1616e0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1616e4:
    // 0x1616e4: 0x0  nop
    ctx->pc = 0x1616e4u;
    // NOP
label_1616e8:
    // 0x1616e8: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x1616e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1616ec:
    // 0x1616ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1616f0:
    if (ctx->pc == 0x1616F0u) {
        ctx->pc = 0x1616F4u;
        goto label_1616f4;
    }
    ctx->pc = 0x1616ECu;
    {
        const bool branch_taken_0x1616ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1616ec) {
            ctx->pc = 0x1616B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1616b0;
        }
    }
    ctx->pc = 0x1616F4u;
label_1616f4:
    // 0x1616f4: 0x860701f4  lh          $a3, 0x1F4($s0)
    ctx->pc = 0x1616f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_1616f8:
    // 0x1616f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1616f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1616fc:
    // 0x1616fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1616fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_161700:
    // 0x161700: 0xc05853c  jal         func_1614F0
label_161704:
    if (ctx->pc == 0x161704u) {
        ctx->pc = 0x161704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161700u;
        // 0x161704: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161708u;
        goto label_161708;
    }
    ctx->pc = 0x161700u;
    SET_GPR_U32(ctx, 31, 0x161708u);
    ctx->pc = 0x161704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161700u;
    // 0x161704: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614F0u, 0x161700u, 0x161708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161708u;
label_161708:
    // 0x161708: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x161708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16170c:
    // 0x16170c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16170cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_161710:
    // 0x161710: 0x1000000a  b           . + 4 + (0xA << 2)
label_161714:
    if (ctx->pc == 0x161714u) {
        ctx->pc = 0x161714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161710u;
        // 0x161714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161718u;
        goto label_161718;
    }
    ctx->pc = 0x161710u;
    {
        const bool branch_taken_0x161710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161710u;
        // 0x161714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161710) {
            ctx->pc = 0x16173Cu;
            goto label_16173c;
        }
    }
    ctx->pc = 0x161718u;
label_161718:
    // 0x161718: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x161718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16171c:
    // 0x16171c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x16171cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_161720:
    // 0x161720: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x161720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_161724:
    // 0x161724: 0xc4620090  lwc1        $f2, 0x90($v1)
    ctx->pc = 0x161724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_161728:
    // 0x161728: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x161728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_16172c:
    // 0x16172c: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x16172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161730:
    // 0x161730: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x161730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_161734:
    // 0x161734: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x161734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_161738:
    // 0x161738: 0xe44001e0  swc1        $f0, 0x1E0($v0)
    ctx->pc = 0x161738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 480), bits); }
label_16173c:
    // 0x16173c: 0x0  nop
    ctx->pc = 0x16173cu;
    // NOP
label_161740:
    // 0x161740: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x161740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_161744:
    // 0x161744: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_161748:
    if (ctx->pc == 0x161748u) {
        ctx->pc = 0x161748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161744u;
        // 0x161748: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16174Cu;
        goto label_16174c;
    }
    ctx->pc = 0x161744u;
    {
        const bool branch_taken_0x161744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161744u;
        // 0x161748: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161744) {
            ctx->pc = 0x16171Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16171c;
        }
    }
    ctx->pc = 0x16174Cu;
label_16174c:
    // 0x16174c: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x16174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
label_161750:
    // 0x161750: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x161750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
label_161754:
    // 0x161754: 0xc6000214  lwc1        $f0, 0x214($s0)
    ctx->pc = 0x161754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161758:
    // 0x161758: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x161758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16175c:
    // 0x16175c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16175cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_161760:
    // 0x161760: 0x861301f4  lh          $s3, 0x1F4($s0)
    ctx->pc = 0x161760u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_161764:
    // 0x161764: 0x8e1401f0  lw          $s4, 0x1F0($s0)
    ctx->pc = 0x161764u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_161768:
    // 0x161768: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x161768u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16176c:
    // 0x16176c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_161770:
    // 0x161770: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x161770u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_161774:
    // 0x161774: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x161774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_161778:
    // 0x161778: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x161778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16177c:
    // 0x16177c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x16177cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_161780:
    // 0x161780: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x161780u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_161784:
    // 0x161784: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x161784u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_161788:
    // 0x161788: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x161788u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_16178c:
    // 0x16178c: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x16178cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_161790:
    // 0x161790: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x161790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_161794:
    // 0x161794: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x161794u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_161798:
    // 0x161798: 0xc07d428  jal         func_1F50A0
label_16179c:
    if (ctx->pc == 0x16179Cu) {
        ctx->pc = 0x16179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161798u;
        // 0x16179c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1617A0u;
        goto label_1617a0;
    }
    ctx->pc = 0x161798u;
    SET_GPR_U32(ctx, 31, 0x1617A0u);
    ctx->pc = 0x16179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161798u;
    // 0x16179c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x161798u, 0x1617A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617A0u;
label_1617a0:
    // 0x1617a0: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x1617a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_1617a4:
    // 0x1617a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1617a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1617a8:
    // 0x1617a8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1617ac:
    if (ctx->pc == 0x1617ACu) {
        ctx->pc = 0x1617ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617A8u;
        // 0x1617ac: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1617B0u;
        goto label_1617b0;
    }
    ctx->pc = 0x1617A8u;
    {
        const bool branch_taken_0x1617a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1617ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617A8u;
        // 0x1617ac: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617a8) {
            ctx->pc = 0x1617E4u;
            goto label_1617e4;
        }
    }
    ctx->pc = 0x1617B0u;
label_1617b0:
    // 0x1617b0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1617b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1617b4:
    // 0x1617b4: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1617b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_1617b8:
    // 0x1617b8: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1617b8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1617bc:
    // 0x1617bc: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1617bcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_1617c0:
    // 0x1617c0: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x1617c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1617c4:
    // 0x1617c4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1617c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1617c8:
    // 0x1617c8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1617c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1617cc:
    // 0x1617cc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1617ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1617d0:
    // 0x1617d0: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x1617d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_1617d4:
    // 0x1617d4: 0xfaa90000  sqc2        $vf9, 0x0($s5)
    ctx->pc = 0x1617d4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_1617d8:
    // 0x1617d8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1617d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1617dc:
    // 0x1617dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1617dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1617e0:
    // 0x1617e0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1617e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1617e4:
    // 0x1617e4: 0x0  nop
    ctx->pc = 0x1617e4u;
    // NOP
label_1617e8:
    // 0x1617e8: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x1617e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1617ec:
    // 0x1617ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1617f0:
    if (ctx->pc == 0x1617F0u) {
        ctx->pc = 0x1617F4u;
        goto label_1617f4;
    }
    ctx->pc = 0x1617ECu;
    {
        const bool branch_taken_0x1617ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1617ec) {
            ctx->pc = 0x1617B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1617b0;
        }
    }
    ctx->pc = 0x1617F4u;
label_1617f4:
    // 0x1617f4: 0xc60c0214  lwc1        $f12, 0x214($s0)
    ctx->pc = 0x1617f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1617f8:
    // 0x1617f8: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1617f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1617fc:
    // 0x1617fc: 0x861301f4  lh          $s3, 0x1F4($s0)
    ctx->pc = 0x1617fcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_161800:
    // 0x161800: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x161800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_161804:
    // 0x161804: 0x8e1401f0  lw          $s4, 0x1F0($s0)
    ctx->pc = 0x161804u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_161808:
    // 0x161808: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x161808u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16180c:
    // 0x16180c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x16180cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_161810:
    // 0x161810: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x161810u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_161814:
    // 0x161814: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x161814u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_161818:
    // 0x161818: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x161818u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_16181c:
    // 0x16181c: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x16181cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_161820:
    // 0x161820: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x161820u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_161824:
    // 0x161824: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x161824u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_161828:
    // 0x161828: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x161828u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_16182c:
    // 0x16182c: 0xc07d428  jal         func_1F50A0
label_161830:
    if (ctx->pc == 0x161830u) {
        ctx->pc = 0x161830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16182Cu;
        // 0x161830: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161834u;
        goto label_161834;
    }
    ctx->pc = 0x16182Cu;
    SET_GPR_U32(ctx, 31, 0x161834u);
    ctx->pc = 0x161830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16182Cu;
    // 0x161830: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x16182Cu, 0x161834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161834u;
label_161834:
    // 0x161834: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x161834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
label_161838:
    // 0x161838: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x161838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16183c:
    // 0x16183c: 0x1000000e  b           . + 4 + (0xE << 2)
label_161840:
    if (ctx->pc == 0x161840u) {
        ctx->pc = 0x161840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16183Cu;
        // 0x161840: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161844u;
        goto label_161844;
    }
    ctx->pc = 0x16183Cu;
    {
        const bool branch_taken_0x16183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16183Cu;
        // 0x161840: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16183c) {
            ctx->pc = 0x161878u;
            goto label_161878;
        }
    }
    ctx->pc = 0x161844u;
label_161844:
    // 0x161844: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x161844u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_161848:
    // 0x161848: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x161848u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_16184c:
    // 0x16184c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x16184cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_161850:
    // 0x161850: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x161850u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_161854:
    // 0x161854: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x161854u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_161858:
    // 0x161858: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x161858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_16185c:
    // 0x16185c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16185cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_161860:
    // 0x161860: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x161860u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_161864:
    // 0x161864: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x161864u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_161868:
    // 0x161868: 0xfaa90000  sqc2        $vf9, 0x0($s5)
    ctx->pc = 0x161868u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_16186c:
    // 0x16186c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x16186cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_161870:
    // 0x161870: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_161874:
    // 0x161874: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x161874u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_161878:
    // 0x161878: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x161878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_16187c:
    // 0x16187c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_161880:
    if (ctx->pc == 0x161880u) {
        ctx->pc = 0x161884u;
        goto label_161884;
    }
    ctx->pc = 0x16187Cu;
    {
        const bool branch_taken_0x16187c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16187c) {
            ctx->pc = 0x161844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161844;
        }
    }
    ctx->pc = 0x161884u;
label_161884:
    // 0x161884: 0x860401f4  lh          $a0, 0x1F4($s0)
    ctx->pc = 0x161884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_161888:
    // 0x161888: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x161888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16188c:
    // 0x16188c: 0x10000013  b           . + 4 + (0x13 << 2)
label_161890:
    if (ctx->pc == 0x161890u) {
        ctx->pc = 0x161890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16188Cu;
        // 0x161890: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161894u;
        goto label_161894;
    }
    ctx->pc = 0x16188Cu;
    {
        const bool branch_taken_0x16188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16188Cu;
        // 0x161890: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16188c) {
            ctx->pc = 0x1618DCu;
            goto label_1618dc;
        }
    }
    ctx->pc = 0x161894u;
label_161894:
    // 0x161894: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x161894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_161898:
    // 0x161898: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x161898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_16189c:
    // 0x16189c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16189cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1618a0:
    // 0x1618a0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1618a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1618a4:
    // 0x1618a4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1618a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1618a8:
    // 0x1618a8: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x1618a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1618ac:
    // 0x1618ac: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1618acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1618b0:
    // 0x1618b0: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x1618b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1618b4:
    // 0x1618b4: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x1618b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
label_1618b8:
    // 0x1618b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1618b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1618bc:
    // 0x1618bc: 0x0  nop
    ctx->pc = 0x1618bcu;
    // NOP
label_1618c0:
    // 0x1618c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1618c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1618c4:
    // 0x1618c4: 0x0  nop
    ctx->pc = 0x1618c4u;
    // NOP
label_1618c8:
    // 0x1618c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1618cc:
    if (ctx->pc == 0x1618CCu) {
        ctx->pc = 0x1618D0u;
        goto label_1618d0;
    }
    ctx->pc = 0x1618C8u;
    {
        const bool branch_taken_0x1618c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1618c8) {
            ctx->pc = 0x1618D4u;
            goto label_1618d4;
        }
    }
    ctx->pc = 0x1618D0u;
label_1618d0:
    // 0x1618d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1618d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1618d4:
    // 0x1618d4: 0x0  nop
    ctx->pc = 0x1618d4u;
    // NOP
label_1618d8:
    // 0x1618d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1618d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1618dc:
    // 0x1618dc: 0x0  nop
    ctx->pc = 0x1618dcu;
    // NOP
label_1618e0:
    // 0x1618e0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1618e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1618e4:
    // 0x1618e4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1618e8:
    if (ctx->pc == 0x1618E8u) {
        ctx->pc = 0x1618E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618E4u;
        // 0x1618e8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1618ECu;
        goto label_1618ec;
    }
    ctx->pc = 0x1618E4u;
    {
        const bool branch_taken_0x1618e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1618E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618E4u;
        // 0x1618e8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618e4) {
            ctx->pc = 0x161898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161898;
        }
    }
    ctx->pc = 0x1618ECu;
label_1618ec:
    // 0x1618ec: 0x860401f4  lh          $a0, 0x1F4($s0)
    ctx->pc = 0x1618ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_1618f0:
    // 0x1618f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1618f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1618f4:
    // 0x1618f4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1618f8:
    if (ctx->pc == 0x1618F8u) {
        ctx->pc = 0x1618F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618F4u;
        // 0x1618f8: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1618FCu;
        goto label_1618fc;
    }
    ctx->pc = 0x1618F4u;
    {
        const bool branch_taken_0x1618f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1618F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618F4u;
        // 0x1618f8: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618f4) {
            ctx->pc = 0x161944u;
            goto label_161944;
        }
    }
    ctx->pc = 0x1618FCu;
label_1618fc:
    // 0x1618fc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1618fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_161900:
    // 0x161900: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x161900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_161904:
    // 0x161904: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x161904u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_161908:
    // 0x161908: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x161908u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16190c:
    // 0x16190c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16190cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_161910:
    // 0x161910: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x161910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_161914:
    // 0x161914: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x161914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_161918:
    // 0x161918: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x161918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16191c:
    // 0x16191c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x16191cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
label_161920:
    // 0x161920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161924:
    // 0x161924: 0x0  nop
    ctx->pc = 0x161924u;
    // NOP
label_161928:
    // 0x161928: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x161928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16192c:
    // 0x16192c: 0x0  nop
    ctx->pc = 0x16192cu;
    // NOP
label_161930:
    // 0x161930: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_161934:
    if (ctx->pc == 0x161934u) {
        ctx->pc = 0x161938u;
        goto label_161938;
    }
    ctx->pc = 0x161930u;
    {
        const bool branch_taken_0x161930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161930) {
            ctx->pc = 0x16193Cu;
            goto label_16193c;
        }
    }
    ctx->pc = 0x161938u;
label_161938:
    // 0x161938: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x161938u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16193c:
    // 0x16193c: 0x0  nop
    ctx->pc = 0x16193cu;
    // NOP
label_161940:
    // 0x161940: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_161944:
    // 0x161944: 0x0  nop
    ctx->pc = 0x161944u;
    // NOP
label_161948:
    // 0x161948: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x161948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_16194c:
    // 0x16194c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_161950:
    if (ctx->pc == 0x161950u) {
        ctx->pc = 0x161950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16194Cu;
        // 0x161950: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161954u;
        goto label_161954;
    }
    ctx->pc = 0x16194Cu;
    {
        const bool branch_taken_0x16194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16194Cu;
        // 0x161950: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16194c) {
            ctx->pc = 0x161900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161900;
        }
    }
    ctx->pc = 0x161954u;
label_161954:
    // 0x161954: 0x860401f4  lh          $a0, 0x1F4($s0)
    ctx->pc = 0x161954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
label_161958:
    // 0x161958: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x161958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16195c:
    // 0x16195c: 0x10000013  b           . + 4 + (0x13 << 2)
label_161960:
    if (ctx->pc == 0x161960u) {
        ctx->pc = 0x161960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16195Cu;
        // 0x161960: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161964u;
        goto label_161964;
    }
    ctx->pc = 0x16195Cu;
    {
        const bool branch_taken_0x16195c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16195Cu;
        // 0x161960: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16195c) {
            ctx->pc = 0x1619ACu;
            goto label_1619ac;
        }
    }
    ctx->pc = 0x161964u;
label_161964:
    // 0x161964: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x161964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_161968:
    // 0x161968: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x161968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_16196c:
    // 0x16196c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16196cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_161970:
    // 0x161970: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x161970u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_161974:
    // 0x161974: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x161974u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_161978:
    // 0x161978: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x161978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16197c:
    // 0x16197c: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x16197cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_161980:
    // 0x161980: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x161980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_161984:
    // 0x161984: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x161984u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
label_161988:
    // 0x161988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16198c:
    // 0x16198c: 0x0  nop
    ctx->pc = 0x16198cu;
    // NOP
label_161990:
    // 0x161990: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x161990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_161994:
    // 0x161994: 0x0  nop
    ctx->pc = 0x161994u;
    // NOP
label_161998:
    // 0x161998: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16199c:
    if (ctx->pc == 0x16199Cu) {
        ctx->pc = 0x1619A0u;
        goto label_1619a0;
    }
    ctx->pc = 0x161998u;
    {
        const bool branch_taken_0x161998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161998) {
            ctx->pc = 0x1619A4u;
            goto label_1619a4;
        }
    }
    ctx->pc = 0x1619A0u;
label_1619a0:
    // 0x1619a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1619a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1619a4:
    // 0x1619a4: 0x0  nop
    ctx->pc = 0x1619a4u;
    // NOP
label_1619a8:
    // 0x1619a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1619a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1619ac:
    // 0x1619ac: 0x0  nop
    ctx->pc = 0x1619acu;
    // NOP
label_1619b0:
    // 0x1619b0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1619b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1619b4:
    // 0x1619b4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1619b8:
    if (ctx->pc == 0x1619B8u) {
        ctx->pc = 0x1619B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619B4u;
        // 0x1619b8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1619BCu;
        goto label_1619bc;
    }
    ctx->pc = 0x1619B4u;
    {
        const bool branch_taken_0x1619b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1619B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619B4u;
        // 0x1619b8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619b4) {
            ctx->pc = 0x161968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161968;
        }
    }
    ctx->pc = 0x1619BCu;
label_1619bc:
    // 0x1619bc: 0xc04018c  jal         func_100630
label_1619c0:
    if (ctx->pc == 0x1619C0u) {
        ctx->pc = 0x1619C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619BCu;
        // 0x1619c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1619C4u;
        goto label_1619c4;
    }
    ctx->pc = 0x1619BCu;
    SET_GPR_U32(ctx, 31, 0x1619C4u);
    ctx->pc = 0x1619C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1619BCu;
    // 0x1619c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1619BCu, 0x1619C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1619C4u;
label_1619c4:
    // 0x1619c4: 0xc04018c  jal         func_100630
label_1619c8:
    if (ctx->pc == 0x1619C8u) {
        ctx->pc = 0x1619C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619C4u;
        // 0x1619c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1619CCu;
        goto label_1619cc;
    }
    ctx->pc = 0x1619C4u;
    SET_GPR_U32(ctx, 31, 0x1619CCu);
    ctx->pc = 0x1619C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1619C4u;
    // 0x1619c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1619C4u, 0x1619CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1619CCu;
label_1619cc:
    // 0x1619cc: 0xc04018c  jal         func_100630
label_1619d0:
    if (ctx->pc == 0x1619D0u) {
        ctx->pc = 0x1619D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619CCu;
        // 0x1619d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1619D4u;
        goto label_1619d4;
    }
    ctx->pc = 0x1619CCu;
    SET_GPR_U32(ctx, 31, 0x1619D4u);
    ctx->pc = 0x1619D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1619CCu;
    // 0x1619d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1619CCu, 0x1619D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1619D4u;
label_1619d4:
    // 0x1619d4: 0x0  nop
    ctx->pc = 0x1619d4u;
    // NOP
label_1619d8:
    // 0x1619d8: 0x0  nop
    ctx->pc = 0x1619d8u;
    // NOP
label_1619dc:
    // 0x1619dc: 0x0  nop
    ctx->pc = 0x1619dcu;
    // NOP
label_1619e0:
    // 0x1619e0: 0x46140004  c1          0x140004
    ctx->pc = 0x1619e0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1619e4:
    // 0x1619e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1619e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1619e8:
    // 0x1619e8: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x1619e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_1619ec:
    // 0x1619ec: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x1619ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1619f0:
    // 0x1619f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1619f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1619f4:
    // 0x1619f4: 0x0  nop
    ctx->pc = 0x1619f4u;
    // NOP
label_1619f8:
    // 0x1619f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1619f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1619fc:
    // 0x1619fc: 0x0  nop
    ctx->pc = 0x1619fcu;
    // NOP
label_161a00:
    // 0x161a00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_161a04:
    if (ctx->pc == 0x161A04u) {
        ctx->pc = 0x161A08u;
        goto label_161a08;
    }
    ctx->pc = 0x161A00u;
    {
        const bool branch_taken_0x161a00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a00) {
            ctx->pc = 0x161A18u;
            goto label_161a18;
        }
    }
    ctx->pc = 0x161A08u;
label_161a08:
    // 0x161a08: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x161a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161a0c:
    // 0x161a0c: 0x0  nop
    ctx->pc = 0x161a0cu;
    // NOP
label_161a10:
    // 0x161a10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x161a10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_161a14:
    // 0x161a14: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x161a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_161a18:
    // 0x161a18: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x161a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_161a1c:
    // 0x161a1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x161a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_161a20:
    // 0x161a20: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x161a20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_161a24:
    // 0x161a24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x161a24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_161a28:
    // 0x161a28: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x161a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_161a2c:
    // 0x161a2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x161a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_161a30:
    // 0x161a30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x161a30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_161a34:
    // 0x161a34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x161a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_161a38:
    // 0x161a38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_161a3c:
    // 0x161a3c: 0x3e00008  jr          $ra
label_161a40:
    if (ctx->pc == 0x161A40u) {
        ctx->pc = 0x161A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A3Cu;
        // 0x161a40: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161A44u;
        goto label_fallthrough_0x161a3c;
    }
    ctx->pc = 0x161A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A3Cu;
        // 0x161a40: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x161a3c:
    ctx->pc = 0x161A44u;
}
