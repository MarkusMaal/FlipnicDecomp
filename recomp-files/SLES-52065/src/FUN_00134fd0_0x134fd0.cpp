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

// Function: FUN_00134fd0
// Address: 0x134fd0 - 0x135548
void FUN_00134fd0_0x134fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134fd0_0x134fd0");
#endif

    switch (ctx->pc) {
        case 0x134fd0u: goto label_134fd0;
        case 0x134fd4u: goto label_134fd4;
        case 0x134fd8u: goto label_134fd8;
        case 0x134fdcu: goto label_134fdc;
        case 0x134fe0u: goto label_134fe0;
        case 0x134fe4u: goto label_134fe4;
        case 0x134fe8u: goto label_134fe8;
        case 0x134fecu: goto label_134fec;
        case 0x134ff0u: goto label_134ff0;
        case 0x134ff4u: goto label_134ff4;
        case 0x134ff8u: goto label_134ff8;
        case 0x134ffcu: goto label_134ffc;
        case 0x135000u: goto label_135000;
        case 0x135004u: goto label_135004;
        case 0x135008u: goto label_135008;
        case 0x13500cu: goto label_13500c;
        case 0x135010u: goto label_135010;
        case 0x135014u: goto label_135014;
        case 0x135018u: goto label_135018;
        case 0x13501cu: goto label_13501c;
        case 0x135020u: goto label_135020;
        case 0x135024u: goto label_135024;
        case 0x135028u: goto label_135028;
        case 0x13502cu: goto label_13502c;
        case 0x135030u: goto label_135030;
        case 0x135034u: goto label_135034;
        case 0x135038u: goto label_135038;
        case 0x13503cu: goto label_13503c;
        case 0x135040u: goto label_135040;
        case 0x135044u: goto label_135044;
        case 0x135048u: goto label_135048;
        case 0x13504cu: goto label_13504c;
        case 0x135050u: goto label_135050;
        case 0x135054u: goto label_135054;
        case 0x135058u: goto label_135058;
        case 0x13505cu: goto label_13505c;
        case 0x135060u: goto label_135060;
        case 0x135064u: goto label_135064;
        case 0x135068u: goto label_135068;
        case 0x13506cu: goto label_13506c;
        case 0x135070u: goto label_135070;
        case 0x135074u: goto label_135074;
        case 0x135078u: goto label_135078;
        case 0x13507cu: goto label_13507c;
        case 0x135080u: goto label_135080;
        case 0x135084u: goto label_135084;
        case 0x135088u: goto label_135088;
        case 0x13508cu: goto label_13508c;
        case 0x135090u: goto label_135090;
        case 0x135094u: goto label_135094;
        case 0x135098u: goto label_135098;
        case 0x13509cu: goto label_13509c;
        case 0x1350a0u: goto label_1350a0;
        case 0x1350a4u: goto label_1350a4;
        case 0x1350a8u: goto label_1350a8;
        case 0x1350acu: goto label_1350ac;
        case 0x1350b0u: goto label_1350b0;
        case 0x1350b4u: goto label_1350b4;
        case 0x1350b8u: goto label_1350b8;
        case 0x1350bcu: goto label_1350bc;
        case 0x1350c0u: goto label_1350c0;
        case 0x1350c4u: goto label_1350c4;
        case 0x1350c8u: goto label_1350c8;
        case 0x1350ccu: goto label_1350cc;
        case 0x1350d0u: goto label_1350d0;
        case 0x1350d4u: goto label_1350d4;
        case 0x1350d8u: goto label_1350d8;
        case 0x1350dcu: goto label_1350dc;
        case 0x1350e0u: goto label_1350e0;
        case 0x1350e4u: goto label_1350e4;
        case 0x1350e8u: goto label_1350e8;
        case 0x1350ecu: goto label_1350ec;
        case 0x1350f0u: goto label_1350f0;
        case 0x1350f4u: goto label_1350f4;
        case 0x1350f8u: goto label_1350f8;
        case 0x1350fcu: goto label_1350fc;
        case 0x135100u: goto label_135100;
        case 0x135104u: goto label_135104;
        case 0x135108u: goto label_135108;
        case 0x13510cu: goto label_13510c;
        case 0x135110u: goto label_135110;
        case 0x135114u: goto label_135114;
        case 0x135118u: goto label_135118;
        case 0x13511cu: goto label_13511c;
        case 0x135120u: goto label_135120;
        case 0x135124u: goto label_135124;
        case 0x135128u: goto label_135128;
        case 0x13512cu: goto label_13512c;
        case 0x135130u: goto label_135130;
        case 0x135134u: goto label_135134;
        case 0x135138u: goto label_135138;
        case 0x13513cu: goto label_13513c;
        case 0x135140u: goto label_135140;
        case 0x135144u: goto label_135144;
        case 0x135148u: goto label_135148;
        case 0x13514cu: goto label_13514c;
        case 0x135150u: goto label_135150;
        case 0x135154u: goto label_135154;
        case 0x135158u: goto label_135158;
        case 0x13515cu: goto label_13515c;
        case 0x135160u: goto label_135160;
        case 0x135164u: goto label_135164;
        case 0x135168u: goto label_135168;
        case 0x13516cu: goto label_13516c;
        case 0x135170u: goto label_135170;
        case 0x135174u: goto label_135174;
        case 0x135178u: goto label_135178;
        case 0x13517cu: goto label_13517c;
        case 0x135180u: goto label_135180;
        case 0x135184u: goto label_135184;
        case 0x135188u: goto label_135188;
        case 0x13518cu: goto label_13518c;
        case 0x135190u: goto label_135190;
        case 0x135194u: goto label_135194;
        case 0x135198u: goto label_135198;
        case 0x13519cu: goto label_13519c;
        case 0x1351a0u: goto label_1351a0;
        case 0x1351a4u: goto label_1351a4;
        case 0x1351a8u: goto label_1351a8;
        case 0x1351acu: goto label_1351ac;
        case 0x1351b0u: goto label_1351b0;
        case 0x1351b4u: goto label_1351b4;
        case 0x1351b8u: goto label_1351b8;
        case 0x1351bcu: goto label_1351bc;
        case 0x1351c0u: goto label_1351c0;
        case 0x1351c4u: goto label_1351c4;
        case 0x1351c8u: goto label_1351c8;
        case 0x1351ccu: goto label_1351cc;
        case 0x1351d0u: goto label_1351d0;
        case 0x1351d4u: goto label_1351d4;
        case 0x1351d8u: goto label_1351d8;
        case 0x1351dcu: goto label_1351dc;
        case 0x1351e0u: goto label_1351e0;
        case 0x1351e4u: goto label_1351e4;
        case 0x1351e8u: goto label_1351e8;
        case 0x1351ecu: goto label_1351ec;
        case 0x1351f0u: goto label_1351f0;
        case 0x1351f4u: goto label_1351f4;
        case 0x1351f8u: goto label_1351f8;
        case 0x1351fcu: goto label_1351fc;
        case 0x135200u: goto label_135200;
        case 0x135204u: goto label_135204;
        case 0x135208u: goto label_135208;
        case 0x13520cu: goto label_13520c;
        case 0x135210u: goto label_135210;
        case 0x135214u: goto label_135214;
        case 0x135218u: goto label_135218;
        case 0x13521cu: goto label_13521c;
        case 0x135220u: goto label_135220;
        case 0x135224u: goto label_135224;
        case 0x135228u: goto label_135228;
        case 0x13522cu: goto label_13522c;
        case 0x135230u: goto label_135230;
        case 0x135234u: goto label_135234;
        case 0x135238u: goto label_135238;
        case 0x13523cu: goto label_13523c;
        case 0x135240u: goto label_135240;
        case 0x135244u: goto label_135244;
        case 0x135248u: goto label_135248;
        case 0x13524cu: goto label_13524c;
        case 0x135250u: goto label_135250;
        case 0x135254u: goto label_135254;
        case 0x135258u: goto label_135258;
        case 0x13525cu: goto label_13525c;
        case 0x135260u: goto label_135260;
        case 0x135264u: goto label_135264;
        case 0x135268u: goto label_135268;
        case 0x13526cu: goto label_13526c;
        case 0x135270u: goto label_135270;
        case 0x135274u: goto label_135274;
        case 0x135278u: goto label_135278;
        case 0x13527cu: goto label_13527c;
        case 0x135280u: goto label_135280;
        case 0x135284u: goto label_135284;
        case 0x135288u: goto label_135288;
        case 0x13528cu: goto label_13528c;
        case 0x135290u: goto label_135290;
        case 0x135294u: goto label_135294;
        case 0x135298u: goto label_135298;
        case 0x13529cu: goto label_13529c;
        case 0x1352a0u: goto label_1352a0;
        case 0x1352a4u: goto label_1352a4;
        case 0x1352a8u: goto label_1352a8;
        case 0x1352acu: goto label_1352ac;
        case 0x1352b0u: goto label_1352b0;
        case 0x1352b4u: goto label_1352b4;
        case 0x1352b8u: goto label_1352b8;
        case 0x1352bcu: goto label_1352bc;
        case 0x1352c0u: goto label_1352c0;
        case 0x1352c4u: goto label_1352c4;
        case 0x1352c8u: goto label_1352c8;
        case 0x1352ccu: goto label_1352cc;
        case 0x1352d0u: goto label_1352d0;
        case 0x1352d4u: goto label_1352d4;
        case 0x1352d8u: goto label_1352d8;
        case 0x1352dcu: goto label_1352dc;
        case 0x1352e0u: goto label_1352e0;
        case 0x1352e4u: goto label_1352e4;
        case 0x1352e8u: goto label_1352e8;
        case 0x1352ecu: goto label_1352ec;
        case 0x1352f0u: goto label_1352f0;
        case 0x1352f4u: goto label_1352f4;
        case 0x1352f8u: goto label_1352f8;
        case 0x1352fcu: goto label_1352fc;
        case 0x135300u: goto label_135300;
        case 0x135304u: goto label_135304;
        case 0x135308u: goto label_135308;
        case 0x13530cu: goto label_13530c;
        case 0x135310u: goto label_135310;
        case 0x135314u: goto label_135314;
        case 0x135318u: goto label_135318;
        case 0x13531cu: goto label_13531c;
        case 0x135320u: goto label_135320;
        case 0x135324u: goto label_135324;
        case 0x135328u: goto label_135328;
        case 0x13532cu: goto label_13532c;
        case 0x135330u: goto label_135330;
        case 0x135334u: goto label_135334;
        case 0x135338u: goto label_135338;
        case 0x13533cu: goto label_13533c;
        case 0x135340u: goto label_135340;
        case 0x135344u: goto label_135344;
        case 0x135348u: goto label_135348;
        case 0x13534cu: goto label_13534c;
        case 0x135350u: goto label_135350;
        case 0x135354u: goto label_135354;
        case 0x135358u: goto label_135358;
        case 0x13535cu: goto label_13535c;
        case 0x135360u: goto label_135360;
        case 0x135364u: goto label_135364;
        case 0x135368u: goto label_135368;
        case 0x13536cu: goto label_13536c;
        case 0x135370u: goto label_135370;
        case 0x135374u: goto label_135374;
        case 0x135378u: goto label_135378;
        case 0x13537cu: goto label_13537c;
        case 0x135380u: goto label_135380;
        case 0x135384u: goto label_135384;
        case 0x135388u: goto label_135388;
        case 0x13538cu: goto label_13538c;
        case 0x135390u: goto label_135390;
        case 0x135394u: goto label_135394;
        case 0x135398u: goto label_135398;
        case 0x13539cu: goto label_13539c;
        case 0x1353a0u: goto label_1353a0;
        case 0x1353a4u: goto label_1353a4;
        case 0x1353a8u: goto label_1353a8;
        case 0x1353acu: goto label_1353ac;
        case 0x1353b0u: goto label_1353b0;
        case 0x1353b4u: goto label_1353b4;
        case 0x1353b8u: goto label_1353b8;
        case 0x1353bcu: goto label_1353bc;
        case 0x1353c0u: goto label_1353c0;
        case 0x1353c4u: goto label_1353c4;
        case 0x1353c8u: goto label_1353c8;
        case 0x1353ccu: goto label_1353cc;
        case 0x1353d0u: goto label_1353d0;
        case 0x1353d4u: goto label_1353d4;
        case 0x1353d8u: goto label_1353d8;
        case 0x1353dcu: goto label_1353dc;
        case 0x1353e0u: goto label_1353e0;
        case 0x1353e4u: goto label_1353e4;
        case 0x1353e8u: goto label_1353e8;
        case 0x1353ecu: goto label_1353ec;
        case 0x1353f0u: goto label_1353f0;
        case 0x1353f4u: goto label_1353f4;
        case 0x1353f8u: goto label_1353f8;
        case 0x1353fcu: goto label_1353fc;
        case 0x135400u: goto label_135400;
        case 0x135404u: goto label_135404;
        case 0x135408u: goto label_135408;
        case 0x13540cu: goto label_13540c;
        case 0x135410u: goto label_135410;
        case 0x135414u: goto label_135414;
        case 0x135418u: goto label_135418;
        case 0x13541cu: goto label_13541c;
        case 0x135420u: goto label_135420;
        case 0x135424u: goto label_135424;
        case 0x135428u: goto label_135428;
        case 0x13542cu: goto label_13542c;
        case 0x135430u: goto label_135430;
        case 0x135434u: goto label_135434;
        case 0x135438u: goto label_135438;
        case 0x13543cu: goto label_13543c;
        case 0x135440u: goto label_135440;
        case 0x135444u: goto label_135444;
        case 0x135448u: goto label_135448;
        case 0x13544cu: goto label_13544c;
        case 0x135450u: goto label_135450;
        case 0x135454u: goto label_135454;
        case 0x135458u: goto label_135458;
        case 0x13545cu: goto label_13545c;
        case 0x135460u: goto label_135460;
        case 0x135464u: goto label_135464;
        case 0x135468u: goto label_135468;
        case 0x13546cu: goto label_13546c;
        case 0x135470u: goto label_135470;
        case 0x135474u: goto label_135474;
        case 0x135478u: goto label_135478;
        case 0x13547cu: goto label_13547c;
        case 0x135480u: goto label_135480;
        case 0x135484u: goto label_135484;
        case 0x135488u: goto label_135488;
        case 0x13548cu: goto label_13548c;
        case 0x135490u: goto label_135490;
        case 0x135494u: goto label_135494;
        case 0x135498u: goto label_135498;
        case 0x13549cu: goto label_13549c;
        case 0x1354a0u: goto label_1354a0;
        case 0x1354a4u: goto label_1354a4;
        case 0x1354a8u: goto label_1354a8;
        case 0x1354acu: goto label_1354ac;
        case 0x1354b0u: goto label_1354b0;
        case 0x1354b4u: goto label_1354b4;
        case 0x1354b8u: goto label_1354b8;
        case 0x1354bcu: goto label_1354bc;
        case 0x1354c0u: goto label_1354c0;
        case 0x1354c4u: goto label_1354c4;
        case 0x1354c8u: goto label_1354c8;
        case 0x1354ccu: goto label_1354cc;
        case 0x1354d0u: goto label_1354d0;
        case 0x1354d4u: goto label_1354d4;
        case 0x1354d8u: goto label_1354d8;
        case 0x1354dcu: goto label_1354dc;
        case 0x1354e0u: goto label_1354e0;
        case 0x1354e4u: goto label_1354e4;
        case 0x1354e8u: goto label_1354e8;
        case 0x1354ecu: goto label_1354ec;
        case 0x1354f0u: goto label_1354f0;
        case 0x1354f4u: goto label_1354f4;
        case 0x1354f8u: goto label_1354f8;
        case 0x1354fcu: goto label_1354fc;
        case 0x135500u: goto label_135500;
        case 0x135504u: goto label_135504;
        case 0x135508u: goto label_135508;
        case 0x13550cu: goto label_13550c;
        case 0x135510u: goto label_135510;
        case 0x135514u: goto label_135514;
        case 0x135518u: goto label_135518;
        case 0x13551cu: goto label_13551c;
        case 0x135520u: goto label_135520;
        case 0x135524u: goto label_135524;
        case 0x135528u: goto label_135528;
        case 0x13552cu: goto label_13552c;
        case 0x135530u: goto label_135530;
        case 0x135534u: goto label_135534;
        case 0x135538u: goto label_135538;
        case 0x13553cu: goto label_13553c;
        case 0x135540u: goto label_135540;
        case 0x135544u: goto label_135544;
        default: break;
    }

    ctx->pc = 0x134fd0u;

label_134fd0:
    // 0x134fd0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x134fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_134fd4:
    // 0x134fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134fd8:
    // 0x134fd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x134fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_134fdc:
    // 0x134fdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_134fe0:
    // 0x134fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_134fe4:
    // 0x134fe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_134fe8:
    // 0x134fe8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_134fec:
    // 0x134fec: 0x90850055  lbu         $a1, 0x55($a0)
    ctx->pc = 0x134fecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
label_134ff0:
    // 0x134ff0: 0x14a3014f  bne         $a1, $v1, . + 4 + (0x14F << 2)
label_134ff4:
    if (ctx->pc == 0x134FF4u) {
        ctx->pc = 0x134FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FF0u;
        // 0x134ff4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134FF8u;
        goto label_134ff8;
    }
    ctx->pc = 0x134FF0u;
    {
        const bool branch_taken_0x134ff0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x134FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FF0u;
        // 0x134ff4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ff0) {
            ctx->pc = 0x135530u;
            goto label_135530;
        }
    }
    ctx->pc = 0x134FF8u;
label_134ff8:
    // 0x134ff8: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x134ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_134ffc:
    // 0x134ffc: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x134ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135000:
    // 0x135000: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x135000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135004:
    // 0x135004: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_135008:
    // 0x135008: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x135008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
label_13500c:
    // 0x13500c: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x13500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_135010:
    // 0x135010: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x135010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135014:
    // 0x135014: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x135014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_135018:
    // 0x135018: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x135018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
label_13501c:
    // 0x13501c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_135020:
    if (ctx->pc == 0x135020u) {
        ctx->pc = 0x135024u;
        goto label_135024;
    }
    ctx->pc = 0x13501Cu;
    {
        const bool branch_taken_0x13501c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13501c) {
            ctx->pc = 0x13502Cu;
            goto label_13502c;
        }
    }
    ctx->pc = 0x135024u;
label_135024:
    // 0x135024: 0xc04d368  jal         func_134DA0
label_135028:
    if (ctx->pc == 0x135028u) {
        ctx->pc = 0x13502Cu;
        goto label_13502c;
    }
    ctx->pc = 0x135024u;
    SET_GPR_U32(ctx, 31, 0x13502Cu);
    ctx->pc = 0x134DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134DA0u, 0x135024u, 0x13502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13502Cu;
label_13502c:
    // 0x13502c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x13502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_135030:
    // 0x135030: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_135034:
    if (ctx->pc == 0x135034u) {
        ctx->pc = 0x135038u;
        goto label_135038;
    }
    ctx->pc = 0x135030u;
    {
        const bool branch_taken_0x135030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135030) {
            ctx->pc = 0x135064u;
            goto label_135064;
        }
    }
    ctx->pc = 0x135038u;
label_135038:
    // 0x135038: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x135038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_13503c:
    // 0x13503c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13503cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_135040:
    // 0x135040: 0xc080874  jal         func_2021D0
label_135044:
    if (ctx->pc == 0x135044u) {
        ctx->pc = 0x135044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135040u;
        // 0x135044: 0x24a5eee8  addiu       $a1, $a1, -0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135048u;
        goto label_135048;
    }
    ctx->pc = 0x135040u;
    SET_GPR_U32(ctx, 31, 0x135048u);
    ctx->pc = 0x135044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135040u;
    // 0x135044: 0x24a5eee8  addiu       $a1, $a1, -0x1118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x135040u, 0x135048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135048u;
label_135048:
    // 0x135048: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_13504c:
    if (ctx->pc == 0x13504Cu) {
        ctx->pc = 0x135050u;
        goto label_135050;
    }
    ctx->pc = 0x135048u;
    {
        const bool branch_taken_0x135048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135048) {
            ctx->pc = 0x135064u;
            goto label_135064;
        }
    }
    ctx->pc = 0x135050u;
label_135050:
    // 0x135050: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x135050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_135054:
    // 0x135054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135058:
    // 0x135058: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x135058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13505c:
    // 0x13505c: 0x320f809  jalr        $t9
label_135060:
    if (ctx->pc == 0x135060u) {
        ctx->pc = 0x135060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13505Cu;
        // 0x135060: 0x92450054  lbu         $a1, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135064u;
        goto label_135064;
    }
    ctx->pc = 0x13505Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135064u);
        ctx->pc = 0x135060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13505Cu;
        // 0x135060: 0x92450054  lbu         $a1, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13505Cu, 0x135064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135064u;
label_135064:
    // 0x135064: 0x92420093  lbu         $v0, 0x93($s2)
    ctx->pc = 0x135064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 147)));
label_135068:
    // 0x135068: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_13506c:
    if (ctx->pc == 0x13506Cu) {
        ctx->pc = 0x13506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135068u;
        // 0x13506c: 0x26420010  addiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135070u;
        goto label_135070;
    }
    ctx->pc = 0x135068u;
    {
        const bool branch_taken_0x135068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135068u;
        // 0x13506c: 0x26420010  addiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135068) {
            ctx->pc = 0x1350F4u;
            goto label_1350f4;
        }
    }
    ctx->pc = 0x135070u;
label_135070:
    // 0x135070: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_135074:
    // 0x135074: 0xc07d392  jal         func_1F4E48
label_135078:
    if (ctx->pc == 0x135078u) {
        ctx->pc = 0x135078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135074u;
        // 0x135078: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13507Cu;
        goto label_13507c;
    }
    ctx->pc = 0x135074u;
    SET_GPR_U32(ctx, 31, 0x13507Cu);
    ctx->pc = 0x135078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135074u;
    // 0x135078: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x135074u, 0x13507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13507Cu;
label_13507c:
    // 0x13507c: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x13507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135080:
    // 0x135080: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x135080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_135084:
    // 0x135084: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x135084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135088:
    // 0x135088: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x135088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13508c:
    // 0x13508c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x13508cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_135090:
    // 0x135090: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x135090u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_135094:
    // 0x135094: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x135094u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_135098:
    // 0x135098: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x135098u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_13509c:
    // 0x13509c: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x13509cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_1350a0:
    // 0x1350a0: 0x4be8e1bc  vmulax.xyzw $ACC, $vf28, $vf8x
    ctx->pc = 0x1350a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350a4:
    // 0x1350a4: 0x4be8e8bd  vmadday.xyzw $ACC, $vf29, $vf8y
    ctx->pc = 0x1350a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350a8:
    // 0x1350a8: 0x4be8f0be  vmaddaz.xyzw $ACC, $vf30, $vf8z
    ctx->pc = 0x1350a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350ac:
    // 0x1350ac: 0x4be8fb0b  vmaddw.xyzw $vf12, $vf31, $vf8w
    ctx->pc = 0x1350acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_1350b0:
    // 0x1350b0: 0x4be9e1bc  vmulax.xyzw $ACC, $vf28, $vf9x
    ctx->pc = 0x1350b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350b4:
    // 0x1350b4: 0x4be9e8bd  vmadday.xyzw $ACC, $vf29, $vf9y
    ctx->pc = 0x1350b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350b8:
    // 0x1350b8: 0x4be9f0be  vmaddaz.xyzw $ACC, $vf30, $vf9z
    ctx->pc = 0x1350b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350bc:
    // 0x1350bc: 0x4be9fb4b  vmaddw.xyzw $vf13, $vf31, $vf9w
    ctx->pc = 0x1350bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_1350c0:
    // 0x1350c0: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x1350c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350c4:
    // 0x1350c4: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x1350c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350c8:
    // 0x1350c8: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x1350c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350cc:
    // 0x1350cc: 0x4beafb8b  vmaddw.xyzw $vf14, $vf31, $vf10w
    ctx->pc = 0x1350ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_1350d0:
    // 0x1350d0: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x1350d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350d4:
    // 0x1350d4: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x1350d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350d8:
    // 0x1350d8: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x1350d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1350dc:
    // 0x1350dc: 0x4bebfbcb  vmaddw.xyzw $vf15, $vf31, $vf11w
    ctx->pc = 0x1350dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_1350e0:
    // 0x1350e0: 0x4bfc633c  vmove.xyzw  $vf28, $vf12
    ctx->pc = 0x1350e0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[12], _mm_castsi128_ps(mask)); }
label_1350e4:
    // 0x1350e4: 0x4bfd6b3c  vmove.xyzw  $vf29, $vf13
    ctx->pc = 0x1350e4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[13], _mm_castsi128_ps(mask)); }
label_1350e8:
    // 0x1350e8: 0x4bfe733c  vmove.xyzw  $vf30, $vf14
    ctx->pc = 0x1350e8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[14], _mm_castsi128_ps(mask)); }
label_1350ec:
    // 0x1350ec: 0x10000019  b           . + 4 + (0x19 << 2)
label_1350f0:
    if (ctx->pc == 0x1350F0u) {
        ctx->pc = 0x1350F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350ECu;
        // 0x1350f0: 0x4bff7b3c  vmove.xyzw  $vf31, $vf15 (Delay Slot)
        { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[15], _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350F4u;
        goto label_1350f4;
    }
    ctx->pc = 0x1350ECu;
    {
        const bool branch_taken_0x1350ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1350F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350ECu;
        // 0x1350f0: 0x4bff7b3c  vmove.xyzw  $vf31, $vf15 (Delay Slot)
        { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[15], _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350ec) {
            ctx->pc = 0x135154u;
            goto label_135154;
        }
    }
    ctx->pc = 0x1350F4u;
label_1350f4:
    // 0x1350f4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1350f4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1350f8:
    // 0x1350f8: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x1350f8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1350fc:
    // 0x1350fc: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x1350fcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_135100:
    // 0x135100: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x135100u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_135104:
    // 0x135104: 0x4be8e1bc  vmulax.xyzw $ACC, $vf28, $vf8x
    ctx->pc = 0x135104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135108:
    // 0x135108: 0x4be8e8bd  vmadday.xyzw $ACC, $vf29, $vf8y
    ctx->pc = 0x135108u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13510c:
    // 0x13510c: 0x4be8f0be  vmaddaz.xyzw $ACC, $vf30, $vf8z
    ctx->pc = 0x13510cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135110:
    // 0x135110: 0x4be8fb0b  vmaddw.xyzw $vf12, $vf31, $vf8w
    ctx->pc = 0x135110u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_135114:
    // 0x135114: 0x4be9e1bc  vmulax.xyzw $ACC, $vf28, $vf9x
    ctx->pc = 0x135114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135118:
    // 0x135118: 0x4be9e8bd  vmadday.xyzw $ACC, $vf29, $vf9y
    ctx->pc = 0x135118u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13511c:
    // 0x13511c: 0x4be9f0be  vmaddaz.xyzw $ACC, $vf30, $vf9z
    ctx->pc = 0x13511cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135120:
    // 0x135120: 0x4be9fb4b  vmaddw.xyzw $vf13, $vf31, $vf9w
    ctx->pc = 0x135120u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_135124:
    // 0x135124: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x135124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135128:
    // 0x135128: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x135128u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13512c:
    // 0x13512c: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x13512cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135130:
    // 0x135130: 0x4beafb8b  vmaddw.xyzw $vf14, $vf31, $vf10w
    ctx->pc = 0x135130u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_135134:
    // 0x135134: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x135134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135138:
    // 0x135138: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x135138u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13513c:
    // 0x13513c: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x13513cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_135140:
    // 0x135140: 0x4bebfbcb  vmaddw.xyzw $vf15, $vf31, $vf11w
    ctx->pc = 0x135140u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_135144:
    // 0x135144: 0x4bfc633c  vmove.xyzw  $vf28, $vf12
    ctx->pc = 0x135144u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[12], _mm_castsi128_ps(mask)); }
label_135148:
    // 0x135148: 0x4bfd6b3c  vmove.xyzw  $vf29, $vf13
    ctx->pc = 0x135148u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[13], _mm_castsi128_ps(mask)); }
label_13514c:
    // 0x13514c: 0x4bfe733c  vmove.xyzw  $vf30, $vf14
    ctx->pc = 0x13514cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[14], _mm_castsi128_ps(mask)); }
label_135150:
    // 0x135150: 0x4bff7b3c  vmove.xyzw  $vf31, $vf15
    ctx->pc = 0x135150u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[15], _mm_castsi128_ps(mask)); }
label_135154:
    // 0x135154: 0x92420092  lbu         $v0, 0x92($s2)
    ctx->pc = 0x135154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 146)));
label_135158:
    // 0x135158: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_13515c:
    if (ctx->pc == 0x13515Cu) {
        ctx->pc = 0x135160u;
        goto label_135160;
    }
    ctx->pc = 0x135158u;
    {
        const bool branch_taken_0x135158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135158) {
            ctx->pc = 0x1351F8u;
            goto label_1351f8;
        }
    }
    ctx->pc = 0x135160u;
label_135160:
    // 0x135160: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x135160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
label_135164:
    // 0x135164: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_135168:
    if (ctx->pc == 0x135168u) {
        ctx->pc = 0x135168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135164u;
        // 0x135168: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13516Cu;
        goto label_13516c;
    }
    ctx->pc = 0x135164u;
    {
        const bool branch_taken_0x135164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135164u;
        // 0x135168: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135164) {
            ctx->pc = 0x1351F8u;
            goto label_1351f8;
        }
    }
    ctx->pc = 0x13516Cu;
label_13516c:
    // 0x13516c: 0xc061c6c  jal         func_1871B0
label_135170:
    if (ctx->pc == 0x135170u) {
        ctx->pc = 0x135174u;
        goto label_135174;
    }
    ctx->pc = 0x13516Cu;
    SET_GPR_U32(ctx, 31, 0x135174u);
    ctx->pc = 0x1871B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871B0u, 0x13516Cu, 0x135174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135174u;
label_135174:
    // 0x135174: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x135174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_135178:
    // 0x135178: 0xc07d38e  jal         func_1F4E38
label_13517c:
    if (ctx->pc == 0x13517Cu) {
        ctx->pc = 0x13517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135178u;
        // 0x13517c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135180u;
        goto label_135180;
    }
    ctx->pc = 0x135178u;
    SET_GPR_U32(ctx, 31, 0x135180u);
    ctx->pc = 0x13517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135178u;
    // 0x13517c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x135178u, 0x135180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135180u;
label_135180:
    // 0x135180: 0x8e450098  lw          $a1, 0x98($s2)
    ctx->pc = 0x135180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_135184:
    // 0x135184: 0xc07d38e  jal         func_1F4E38
label_135188:
    if (ctx->pc == 0x135188u) {
        ctx->pc = 0x135188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135184u;
        // 0x135188: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13518Cu;
        goto label_13518c;
    }
    ctx->pc = 0x135184u;
    SET_GPR_U32(ctx, 31, 0x13518Cu);
    ctx->pc = 0x135188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135184u;
    // 0x135188: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x135184u, 0x13518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13518Cu;
label_13518c:
    // 0x13518c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x13518cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_135190:
    // 0x135190: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x135190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_135194:
    // 0x135194: 0xc080874  jal         func_2021D0
label_135198:
    if (ctx->pc == 0x135198u) {
        ctx->pc = 0x135198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135194u;
        // 0x135198: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13519Cu;
        goto label_13519c;
    }
    ctx->pc = 0x135194u;
    SET_GPR_U32(ctx, 31, 0x13519Cu);
    ctx->pc = 0x135198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135194u;
    // 0x135198: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x135194u, 0x13519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13519Cu;
label_13519c:
    // 0x13519c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x13519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_1351a0:
    // 0x1351a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1351a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1351a4:
    // 0x1351a4: 0x24a5eea8  addiu       $a1, $a1, -0x1158
    ctx->pc = 0x1351a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
label_1351a8:
    // 0x1351a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1351a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1351ac:
    // 0x1351ac: 0xc0805e6  jal         func_201798
label_1351b0:
    if (ctx->pc == 0x1351B0u) {
        ctx->pc = 0x1351B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351ACu;
        // 0x1351b0: 0x27a60138  addiu       $a2, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351B4u;
        goto label_1351b4;
    }
    ctx->pc = 0x1351ACu;
    SET_GPR_U32(ctx, 31, 0x1351B4u);
    ctx->pc = 0x1351B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351ACu;
    // 0x1351b0: 0x27a60138  addiu       $a2, $sp, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x1351ACu, 0x1351B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351B4u;
label_1351b4:
    // 0x1351b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1351b8:
    if (ctx->pc == 0x1351B8u) {
        ctx->pc = 0x1351BCu;
        goto label_1351bc;
    }
    ctx->pc = 0x1351B4u;
    {
        const bool branch_taken_0x1351b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1351b4) {
            ctx->pc = 0x1351C8u;
            goto label_1351c8;
        }
    }
    ctx->pc = 0x1351BCu;
label_1351bc:
    // 0x1351bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1351bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1351c0:
    // 0x1351c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1351c4:
    if (ctx->pc == 0x1351C4u) {
        ctx->pc = 0x1351C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351C0u;
        // 0x1351c4: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351C8u;
        goto label_1351c8;
    }
    ctx->pc = 0x1351C0u;
    {
        const bool branch_taken_0x1351c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351C0u;
        // 0x1351c4: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351c0) {
            ctx->pc = 0x1351E4u;
            goto label_1351e4;
        }
    }
    ctx->pc = 0x1351C8u;
label_1351c8:
    // 0x1351c8: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x1351c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1351cc:
    // 0x1351cc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1351ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1351d0:
    // 0x1351d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1351d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1351d4:
    // 0x1351d4: 0x0  nop
    ctx->pc = 0x1351d4u;
    // NOP
label_1351d8:
    // 0x1351d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1351d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1351dc:
    // 0x1351dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1351dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1351e0:
    // 0x1351e0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1351e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1351e4:
    // 0x1351e4: 0xc0512c8  jal         func_144B20
label_1351e8:
    if (ctx->pc == 0x1351E8u) {
        ctx->pc = 0x1351ECu;
        goto label_1351ec;
    }
    ctx->pc = 0x1351E4u;
    SET_GPR_U32(ctx, 31, 0x1351ECu);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x1351E4u, 0x1351ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351ECu;
label_1351ec:
    // 0x1351ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1351ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1351f0:
    // 0x1351f0: 0xc0513d0  jal         func_144F40
label_1351f4:
    if (ctx->pc == 0x1351F4u) {
        ctx->pc = 0x1351F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351F0u;
        // 0x1351f4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351F8u;
        goto label_1351f8;
    }
    ctx->pc = 0x1351F0u;
    SET_GPR_U32(ctx, 31, 0x1351F8u);
    ctx->pc = 0x1351F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351F0u;
    // 0x1351f4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144F40u, 0x1351F0u, 0x1351F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351F8u;
label_1351f8:
    // 0x1351f8: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1351f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1351fc:
    // 0x1351fc: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_135200:
    if (ctx->pc == 0x135200u) {
        ctx->pc = 0x135200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351FCu;
        // 0x135200: 0x26440058  addiu       $a0, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135204u;
        goto label_135204;
    }
    ctx->pc = 0x1351FCu;
    {
        const bool branch_taken_0x1351fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351FCu;
        // 0x135200: 0x26440058  addiu       $a0, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351fc) {
            ctx->pc = 0x135474u;
            goto label_135474;
        }
    }
    ctx->pc = 0x135204u;
label_135204:
    // 0x135204: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x135204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
label_135208:
    // 0x135208: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_13520c:
    if (ctx->pc == 0x13520Cu) {
        ctx->pc = 0x135210u;
        goto label_135210;
    }
    ctx->pc = 0x135208u;
    {
        const bool branch_taken_0x135208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135208) {
            ctx->pc = 0x135470u;
            goto label_135470;
        }
    }
    ctx->pc = 0x135210u;
label_135210:
    // 0x135210: 0x8f82853c  lw          $v0, -0x7AC4($gp)
    ctx->pc = 0x135210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
label_135214:
    // 0x135214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135218:
    // 0x135218: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x135218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_13521c:
    // 0x13521c: 0x8f82853c  lw          $v0, -0x7AC4($gp)
    ctx->pc = 0x13521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
label_135220:
    // 0x135220: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x135220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_135224:
    // 0x135224: 0xc04d76c  jal         func_135DB0
label_135228:
    if (ctx->pc == 0x135228u) {
        ctx->pc = 0x135228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135224u;
        // 0x135228: 0xaf82853c  sw          $v0, -0x7AC4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13522Cu;
        goto label_13522c;
    }
    ctx->pc = 0x135224u;
    SET_GPR_U32(ctx, 31, 0x13522Cu);
    ctx->pc = 0x135228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135224u;
    // 0x135228: 0xaf82853c  sw          $v0, -0x7AC4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DB0u, 0x135224u, 0x13522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13522Cu;
label_13522c:
    // 0x13522c: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
label_135230:
    if (ctx->pc == 0x135230u) {
        ctx->pc = 0x135234u;
        goto label_135234;
    }
    ctx->pc = 0x13522Cu;
    {
        const bool branch_taken_0x13522c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13522c) {
            ctx->pc = 0x135530u;
            goto label_135530;
        }
    }
    ctx->pc = 0x135234u;
label_135234:
    // 0x135234: 0x8e4a0088  lw          $t2, 0x88($s2)
    ctx->pc = 0x135234u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_135238:
    // 0x135238: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x135238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_13523c:
    // 0x13523c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x13523cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_135240:
    // 0x135240: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x135240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_135244:
    // 0x135244: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x135244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_135248:
    // 0x135248: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x135248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13524c:
    // 0x13524c: 0x3c026c0c  lui         $v0, 0x6C0C
    ctx->pc = 0x13524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27660 << 16));
label_135250:
    // 0x135250: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x135250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
label_135254:
    // 0x135254: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x135254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_135258:
    // 0x135258: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x135258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_13525c:
    // 0x13525c: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x13525cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_135260:
    // 0x135260: 0xa1490003  sb          $t1, 0x3($t2)
    ctx->pc = 0x135260u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 9));
label_135264:
    // 0x135264: 0x3445801b  ori         $a1, $v0, 0x801B
    ctx->pc = 0x135264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32795);
label_135268:
    // 0x135268: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x135268u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
label_13526c:
    // 0x13526c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_135270:
    // 0x135270: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x135270u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
label_135274:
    // 0x135274: 0xa5480000  sh          $t0, 0x0($t2)
    ctx->pc = 0x135274u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 8));
label_135278:
    // 0x135278: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x135278u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
label_13527c:
    // 0x13527c: 0xad46000c  sw          $a2, 0xC($t2)
    ctx->pc = 0x13527cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 6));
label_135280:
    // 0x135280: 0x8e460088  lw          $a2, 0x88($s2)
    ctx->pc = 0x135280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_135284:
    // 0x135284: 0xa0c900d3  sb          $t1, 0xD3($a2)
    ctx->pc = 0x135284u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 211), (uint8_t)GPR_U32(ctx, 9));
label_135288:
    // 0x135288: 0xa0c000d2  sb          $zero, 0xD2($a2)
    ctx->pc = 0x135288u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 210), (uint8_t)GPR_U32(ctx, 0));
label_13528c:
    // 0x13528c: 0xacc000d4  sw          $zero, 0xD4($a2)
    ctx->pc = 0x13528cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 212), GPR_U32(ctx, 0));
label_135290:
    // 0x135290: 0xa4d000d0  sh          $s0, 0xD0($a2)
    ctx->pc = 0x135290u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 208), (uint16_t)GPR_U32(ctx, 16));
label_135294:
    // 0x135294: 0xacc700d8  sw          $a3, 0xD8($a2)
    ctx->pc = 0x135294u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 7));
label_135298:
    // 0x135298: 0xacc500dc  sw          $a1, 0xDC($a2)
    ctx->pc = 0x135298u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 5));
label_13529c:
    // 0x13529c: 0x8e460088  lw          $a2, 0x88($s2)
    ctx->pc = 0x13529cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1352a0:
    // 0x1352a0: 0x8f8584dc  lw          $a1, -0x7B24($gp)
    ctx->pc = 0x1352a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935772)));
label_1352a4:
    // 0x1352a4: 0x24ca00f0  addiu       $t2, $a2, 0xF0
    ctx->pc = 0x1352a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
label_1352a8:
    // 0x1352a8: 0xa0c900f3  sb          $t1, 0xF3($a2)
    ctx->pc = 0x1352a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 243), (uint8_t)GPR_U32(ctx, 9));
label_1352ac:
    // 0x1352ac: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1352acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1352b0:
    // 0x1352b0: 0xa0c000f2  sb          $zero, 0xF2($a2)
    ctx->pc = 0x1352b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 242), (uint8_t)GPR_U32(ctx, 0));
label_1352b4:
    // 0x1352b4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x1352b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_1352b8:
    // 0x1352b8: 0xacc000f4  sw          $zero, 0xF4($a2)
    ctx->pc = 0x1352b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 244), GPR_U32(ctx, 0));
label_1352bc:
    // 0x1352bc: 0xa4c000f0  sh          $zero, 0xF0($a2)
    ctx->pc = 0x1352bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 240), (uint16_t)GPR_U32(ctx, 0));
label_1352c0:
    // 0x1352c0: 0xacc000f8  sw          $zero, 0xF8($a2)
    ctx->pc = 0x1352c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 0));
label_1352c4:
    // 0x1352c4: 0xacc400fc  sw          $a0, 0xFC($a2)
    ctx->pc = 0x1352c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 4));
label_1352c8:
    // 0x1352c8: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x1352c8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
label_1352cc:
    // 0x1352cc: 0xa1430003  sb          $v1, 0x3($t2)
    ctx->pc = 0x1352ccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 3));
label_1352d0:
    // 0x1352d0: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x1352d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
label_1352d4:
    // 0x1352d4: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x1352d4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
label_1352d8:
    // 0x1352d8: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x1352d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
label_1352dc:
    // 0x1352dc: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x1352dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
label_1352e0:
    // 0x1352e0: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1352e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1352e4:
    // 0x1352e4: 0x8c830170  lw          $v1, 0x170($a0)
    ctx->pc = 0x1352e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
label_1352e8:
    // 0x1352e8: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_1352ec:
    if (ctx->pc == 0x1352ECu) {
        ctx->pc = 0x1352F0u;
        goto label_1352f0;
    }
    ctx->pc = 0x1352E8u;
    {
        const bool branch_taken_0x1352e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1352e8) {
            ctx->pc = 0x13536Cu;
            goto label_13536c;
        }
    }
    ctx->pc = 0x1352F0u;
label_1352f0:
    // 0x1352f0: 0xc061c6c  jal         func_1871B0
label_1352f4:
    if (ctx->pc == 0x1352F4u) {
        ctx->pc = 0x1352F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352F0u;
        // 0x1352f4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1352F8u;
        goto label_1352f8;
    }
    ctx->pc = 0x1352F0u;
    SET_GPR_U32(ctx, 31, 0x1352F8u);
    ctx->pc = 0x1352F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352F0u;
    // 0x1352f4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871B0u, 0x1352F0u, 0x1352F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352F8u;
label_1352f8:
    // 0x1352f8: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1352f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1352fc:
    // 0x1352fc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1352fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_135300:
    // 0x135300: 0xc07d392  jal         func_1F4E48
label_135304:
    if (ctx->pc == 0x135304u) {
        ctx->pc = 0x135304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135300u;
        // 0x135304: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135308u;
        goto label_135308;
    }
    ctx->pc = 0x135300u;
    SET_GPR_U32(ctx, 31, 0x135308u);
    ctx->pc = 0x135304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135300u;
    // 0x135304: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x135300u, 0x135308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135308u;
label_135308:
    // 0x135308: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x135308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_13530c:
    // 0x13530c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_135310:
    // 0x135310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_135314:
    if (ctx->pc == 0x135314u) {
        ctx->pc = 0x135318u;
        goto label_135318;
    }
    ctx->pc = 0x135310u;
    {
        const bool branch_taken_0x135310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135310) {
            ctx->pc = 0x135328u;
            goto label_135328;
        }
    }
    ctx->pc = 0x135318u;
label_135318:
    // 0x135318: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x135318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_13531c:
    // 0x13531c: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x13531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_135320:
    // 0x135320: 0xc061c74  jal         func_1871D0
label_135324:
    if (ctx->pc == 0x135324u) {
        ctx->pc = 0x135324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135320u;
        // 0x135324: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135328u;
        goto label_135328;
    }
    ctx->pc = 0x135320u;
    SET_GPR_U32(ctx, 31, 0x135328u);
    ctx->pc = 0x135324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135320u;
    // 0x135324: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871D0u, 0x135320u, 0x135328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135328u;
label_135328:
    // 0x135328: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x135328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13532c:
    // 0x13532c: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x13532cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
label_135330:
    // 0x135330: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x135330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_135334:
    // 0x135334: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x135334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_135338:
    // 0x135338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13533c:
    // 0x13533c: 0x0  nop
    ctx->pc = 0x13533cu;
    // NOP
label_135340:
    // 0x135340: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_135344:
    // 0x135344: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x135344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_135348:
    // 0x135348: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x135348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_13534c:
    // 0x13534c: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x13534cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
label_135350:
    // 0x135350: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x135350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_135354:
    // 0x135354: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135358:
    // 0x135358: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x135358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_13535c:
    // 0x13535c: 0x320f809  jalr        $t9
label_135360:
    if (ctx->pc == 0x135360u) {
        ctx->pc = 0x135360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13535Cu;
        // 0x135360: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135364u;
        goto label_135364;
    }
    ctx->pc = 0x13535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135364u);
        ctx->pc = 0x135360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13535Cu;
        // 0x135360: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13535Cu, 0x135364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135364u;
label_135364:
    // 0x135364: 0x10000042  b           . + 4 + (0x42 << 2)
label_135368:
    if (ctx->pc == 0x135368u) {
        ctx->pc = 0x13536Cu;
        goto label_13536c;
    }
    ctx->pc = 0x135364u;
    {
        const bool branch_taken_0x135364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135364) {
            ctx->pc = 0x135470u;
            goto label_135470;
        }
    }
    ctx->pc = 0x13536Cu;
label_13536c:
    // 0x13536c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x13536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
label_135370:
    // 0x135370: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_135374:
    if (ctx->pc == 0x135374u) {
        ctx->pc = 0x135378u;
        goto label_135378;
    }
    ctx->pc = 0x135370u;
    {
        const bool branch_taken_0x135370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x135370) {
            ctx->pc = 0x135380u;
            goto label_135380;
        }
    }
    ctx->pc = 0x135378u;
label_135378:
    // 0x135378: 0x10000006  b           . + 4 + (0x6 << 2)
label_13537c:
    if (ctx->pc == 0x13537Cu) {
        ctx->pc = 0x135380u;
        goto label_135380;
    }
    ctx->pc = 0x135378u;
    {
        const bool branch_taken_0x135378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135378) {
            ctx->pc = 0x135394u;
            goto label_135394;
        }
    }
    ctx->pc = 0x135380u;
label_135380:
    // 0x135380: 0xc061bf0  jal         func_186FC0
label_135384:
    if (ctx->pc == 0x135384u) {
        ctx->pc = 0x135388u;
        goto label_135388;
    }
    ctx->pc = 0x135380u;
    SET_GPR_U32(ctx, 31, 0x135388u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x135380u, 0x135388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135388u;
label_135388:
    // 0x135388: 0xc061b50  jal         func_186D40
label_13538c:
    if (ctx->pc == 0x13538Cu) {
        ctx->pc = 0x13538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135388u;
        // 0x13538c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135390u;
        goto label_135390;
    }
    ctx->pc = 0x135388u;
    SET_GPR_U32(ctx, 31, 0x135390u);
    ctx->pc = 0x13538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135388u;
    // 0x13538c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x135388u, 0x135390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135390u;
label_135390:
    // 0x135390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135394:
    // 0x135394: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_135398:
    if (ctx->pc == 0x135398u) {
        ctx->pc = 0x13539Cu;
        goto label_13539c;
    }
    ctx->pc = 0x135394u;
    {
        const bool branch_taken_0x135394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x135394) {
            ctx->pc = 0x135464u;
            goto label_135464;
        }
    }
    ctx->pc = 0x13539Cu;
label_13539c:
    // 0x13539c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x13539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1353a0:
    // 0x1353a0: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x1353a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_1353a4:
    // 0x1353a4: 0xc061bd0  jal         func_186F40
label_1353a8:
    if (ctx->pc == 0x1353A8u) {
        ctx->pc = 0x1353A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1353A4u;
        // 0x1353a8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1353ACu;
        goto label_1353ac;
    }
    ctx->pc = 0x1353A4u;
    SET_GPR_U32(ctx, 31, 0x1353ACu);
    ctx->pc = 0x1353A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353A4u;
    // 0x1353a8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F40u, 0x1353A4u, 0x1353ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1353ACu;
label_1353ac:
    // 0x1353ac: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x1353acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1353b0:
    // 0x1353b0: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1353b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
label_1353b4:
    // 0x1353b4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1353b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1353b8:
    // 0x1353b8: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x1353b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1353bc:
    // 0x1353bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1353bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1353c0:
    // 0x1353c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1353c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1353c4:
    // 0x1353c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1353c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1353c8:
    // 0x1353c8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1353cc:
    if (ctx->pc == 0x1353CCu) {
        ctx->pc = 0x1353CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1353C8u;
        // 0x1353cc: 0xe46000e8  swc1        $f0, 0xE8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1353D0u;
        goto label_1353d0;
    }
    ctx->pc = 0x1353C8u;
    {
        const bool branch_taken_0x1353c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1353CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1353C8u;
        // 0x1353cc: 0xe46000e8  swc1        $f0, 0xE8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353c8) {
            ctx->pc = 0x1353DCu;
            goto label_1353dc;
        }
    }
    ctx->pc = 0x1353D0u;
label_1353d0:
    // 0x1353d0: 0xc061b50  jal         func_186D40
label_1353d4:
    if (ctx->pc == 0x1353D4u) {
        ctx->pc = 0x1353D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1353D0u;
        // 0x1353d4: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1353D8u;
        goto label_1353d8;
    }
    ctx->pc = 0x1353D0u;
    SET_GPR_U32(ctx, 31, 0x1353D8u);
    ctx->pc = 0x1353D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353D0u;
    // 0x1353d4: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x1353D0u, 0x1353D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1353D8u;
label_1353d8:
    // 0x1353d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1353d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1353dc:
    // 0x1353dc: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1353dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1353e0:
    // 0x1353e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1353e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1353e4:
    // 0x1353e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1353e8:
    if (ctx->pc == 0x1353E8u) {
        ctx->pc = 0x1353ECu;
        goto label_1353ec;
    }
    ctx->pc = 0x1353E4u;
    {
        const bool branch_taken_0x1353e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353e4) {
            ctx->pc = 0x1353FCu;
            goto label_1353fc;
        }
    }
    ctx->pc = 0x1353ECu;
label_1353ec:
    // 0x1353ec: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1353ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1353f0:
    // 0x1353f0: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x1353f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1353f4:
    // 0x1353f4: 0xc061c74  jal         func_1871D0
label_1353f8:
    if (ctx->pc == 0x1353F8u) {
        ctx->pc = 0x1353F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1353F4u;
        // 0x1353f8: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1353FCu;
        goto label_1353fc;
    }
    ctx->pc = 0x1353F4u;
    SET_GPR_U32(ctx, 31, 0x1353FCu);
    ctx->pc = 0x1353F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353F4u;
    // 0x1353f8: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871D0u, 0x1353F4u, 0x1353FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1353FCu;
label_1353fc:
    // 0x1353fc: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1353fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_135400:
    // 0x135400: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x135400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_135404:
    // 0x135404: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_135408:
    if (ctx->pc == 0x135408u) {
        ctx->pc = 0x13540Cu;
        goto label_13540c;
    }
    ctx->pc = 0x135404u;
    {
        const bool branch_taken_0x135404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135404) {
            ctx->pc = 0x13541Cu;
            goto label_13541c;
        }
    }
    ctx->pc = 0x13540Cu;
label_13540c:
    // 0x13540c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x13540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_135410:
    // 0x135410: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x135410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_135414:
    // 0x135414: 0xc061c2c  jal         func_1870B0
label_135418:
    if (ctx->pc == 0x135418u) {
        ctx->pc = 0x135418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135414u;
        // 0x135418: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13541Cu;
        goto label_13541c;
    }
    ctx->pc = 0x135414u;
    SET_GPR_U32(ctx, 31, 0x13541Cu);
    ctx->pc = 0x135418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135414u;
    // 0x135418: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1870B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1870B0u, 0x135414u, 0x13541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13541Cu;
label_13541c:
    // 0x13541c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x13541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_135420:
    // 0x135420: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x135420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_135424:
    // 0x135424: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_135428:
    if (ctx->pc == 0x135428u) {
        ctx->pc = 0x13542Cu;
        goto label_13542c;
    }
    ctx->pc = 0x135424u;
    {
        const bool branch_taken_0x135424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135424) {
            ctx->pc = 0x13543Cu;
            goto label_13543c;
        }
    }
    ctx->pc = 0x13542Cu;
label_13542c:
    // 0x13542c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x13542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_135430:
    // 0x135430: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x135430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_135434:
    // 0x135434: 0xc061ca4  jal         func_187290
label_135438:
    if (ctx->pc == 0x135438u) {
        ctx->pc = 0x135438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135434u;
        // 0x135438: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13543Cu;
        goto label_13543c;
    }
    ctx->pc = 0x135434u;
    SET_GPR_U32(ctx, 31, 0x13543Cu);
    ctx->pc = 0x135438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135434u;
    // 0x135438: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187290u, 0x135434u, 0x13543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13543Cu;
label_13543c:
    // 0x13543c: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x13543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_135440:
    // 0x135440: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x135440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_135444:
    // 0x135444: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x135444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
label_135448:
    // 0x135448: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x135448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_13544c:
    // 0x13544c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13544cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135450:
    // 0x135450: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x135450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_135454:
    // 0x135454: 0x320f809  jalr        $t9
label_135458:
    if (ctx->pc == 0x135458u) {
        ctx->pc = 0x135458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135454u;
        // 0x135458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13545Cu;
        goto label_13545c;
    }
    ctx->pc = 0x135454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13545Cu);
        ctx->pc = 0x135458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135454u;
        // 0x135458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135454u, 0x13545Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13545Cu;
label_13545c:
    // 0x13545c: 0x10000004  b           . + 4 + (0x4 << 2)
label_135460:
    if (ctx->pc == 0x135460u) {
        ctx->pc = 0x135464u;
        goto label_135464;
    }
    ctx->pc = 0x13545Cu;
    {
        const bool branch_taken_0x13545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13545c) {
            ctx->pc = 0x135470u;
            goto label_135470;
        }
    }
    ctx->pc = 0x135464u;
label_135464:
    // 0x135464: 0x8f82853c  lw          $v0, -0x7AC4($gp)
    ctx->pc = 0x135464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
label_135468:
    // 0x135468: 0x2442fef0  addiu       $v0, $v0, -0x110
    ctx->pc = 0x135468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967024));
label_13546c:
    // 0x13546c: 0xaf82853c  sw          $v0, -0x7AC4($gp)
    ctx->pc = 0x13546cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 2));
label_135470:
    // 0x135470: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x135470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
label_135474:
    // 0x135474: 0xc04c554  jal         func_131550
label_135478:
    if (ctx->pc == 0x135478u) {
        ctx->pc = 0x13547Cu;
        goto label_13547c;
    }
    ctx->pc = 0x135474u;
    SET_GPR_U32(ctx, 31, 0x13547Cu);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135474u, 0x13547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13547Cu;
label_13547c:
    // 0x13547c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13547cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135480:
    // 0x135480: 0xc04c550  jal         func_131540
label_135484:
    if (ctx->pc == 0x135484u) {
        ctx->pc = 0x135484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135480u;
        // 0x135484: 0x27a40158  addiu       $a0, $sp, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135488u;
        goto label_135488;
    }
    ctx->pc = 0x135480u;
    SET_GPR_U32(ctx, 31, 0x135488u);
    ctx->pc = 0x135484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135480u;
    // 0x135484: 0x27a40158  addiu       $a0, $sp, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x135480u, 0x135488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135488u;
label_135488:
    // 0x135488: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x135488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_13548c:
    // 0x13548c: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x13548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
label_135490:
    // 0x135490: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x135490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_135494:
    // 0x135494: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x135494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_135498:
    // 0x135498: 0xc04c554  jal         func_131550
label_13549c:
    if (ctx->pc == 0x13549Cu) {
        ctx->pc = 0x13549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135498u;
        // 0x13549c: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1354A0u;
        goto label_1354a0;
    }
    ctx->pc = 0x135498u;
    SET_GPR_U32(ctx, 31, 0x1354A0u);
    ctx->pc = 0x13549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135498u;
    // 0x13549c: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135498u, 0x1354A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354A0u;
label_1354a0:
    // 0x1354a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1354a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1354a4:
    // 0x1354a4: 0xc04c54c  jal         func_131530
label_1354a8:
    if (ctx->pc == 0x1354A8u) {
        ctx->pc = 0x1354A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354A4u;
        // 0x1354a8: 0x27a4015c  addiu       $a0, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1354ACu;
        goto label_1354ac;
    }
    ctx->pc = 0x1354A4u;
    SET_GPR_U32(ctx, 31, 0x1354ACu);
    ctx->pc = 0x1354A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354A4u;
    // 0x1354a8: 0x27a4015c  addiu       $a0, $sp, 0x15C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x1354A4u, 0x1354ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354ACu;
label_1354ac:
    // 0x1354ac: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x1354acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_1354b0:
    // 0x1354b0: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x1354b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_1354b4:
    // 0x1354b4: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x1354b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1354b8:
    // 0x1354b8: 0xafa5014c  sw          $a1, 0x14C($sp)
    ctx->pc = 0x1354b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 5));
label_1354bc:
    // 0x1354bc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1354bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1354c0:
    // 0x1354c0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1354c4:
    if (ctx->pc == 0x1354C4u) {
        ctx->pc = 0x1354C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354C0u;
        // 0x1354c4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1354C8u;
        goto label_1354c8;
    }
    ctx->pc = 0x1354C0u;
    {
        const bool branch_taken_0x1354c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1354C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354C0u;
        // 0x1354c4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354c0) {
            ctx->pc = 0x13551Cu;
            goto label_13551c;
        }
    }
    ctx->pc = 0x1354C8u;
label_1354c8:
    // 0x1354c8: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x1354c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1354cc:
    // 0x1354cc: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x1354ccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1354d0:
    // 0x1354d0: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x1354d0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1354d4:
    // 0x1354d4: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x1354d4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1354d8:
    // 0x1354d8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1354d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1354dc:
    // 0x1354dc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1354dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1354e0:
    // 0x1354e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1354e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1354e4:
    // 0x1354e4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1354e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1354e8:
    // 0x1354e8: 0x320f809  jalr        $t9
label_1354ec:
    if (ctx->pc == 0x1354ECu) {
        ctx->pc = 0x1354ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354E8u;
        // 0x1354ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1354F0u;
        goto label_1354f0;
    }
    ctx->pc = 0x1354E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1354F0u);
        ctx->pc = 0x1354ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354E8u;
        // 0x1354ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1354E8u, 0x1354F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1354F0u;
label_1354f0:
    // 0x1354f0: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x1354f0u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1354f4:
    // 0x1354f4: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x1354f4u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1354f8:
    // 0x1354f8: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x1354f8u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1354fc:
    // 0x1354fc: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x1354fcu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_135500:
    // 0x135500: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x135500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_135504:
    // 0x135504: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x135504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_135508:
    // 0x135508: 0xafa40154  sw          $a0, 0x154($sp)
    ctx->pc = 0x135508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 4));
label_13550c:
    // 0x13550c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x13550cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135510:
    // 0x135510: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x135510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_135514:
    // 0x135514: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x135514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_135518:
    // 0x135518: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x135518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_13551c:
    // 0x13551c: 0x0  nop
    ctx->pc = 0x13551cu;
    // NOP
label_135520:
    // 0x135520: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x135520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_135524:
    // 0x135524: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x135524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_135528:
    // 0x135528: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
label_13552c:
    if (ctx->pc == 0x13552Cu) {
        ctx->pc = 0x135530u;
        goto label_135530;
    }
    ctx->pc = 0x135528u;
    {
        const bool branch_taken_0x135528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x135528) {
            ctx->pc = 0x1354C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1354c8;
        }
    }
    ctx->pc = 0x135530u;
label_135530:
    // 0x135530: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_135534:
    // 0x135534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_135538:
    // 0x135538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13553c:
    // 0x13553c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13553cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_135540:
    // 0x135540: 0x3e00008  jr          $ra
label_135544:
    if (ctx->pc == 0x135544u) {
        ctx->pc = 0x135544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135540u;
        // 0x135544: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135548u;
        goto label_fallthrough_0x135540;
    }
    ctx->pc = 0x135540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135540u;
        // 0x135544: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135540:
    ctx->pc = 0x135548u;
}
