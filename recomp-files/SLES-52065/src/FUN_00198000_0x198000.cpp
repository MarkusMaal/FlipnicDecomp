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

// Function: FUN_00198000
// Address: 0x198000 - 0x1984b0
void FUN_00198000_0x198000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198000_0x198000");
#endif

    switch (ctx->pc) {
        case 0x198000u: goto label_198000;
        case 0x198004u: goto label_198004;
        case 0x198008u: goto label_198008;
        case 0x19800cu: goto label_19800c;
        case 0x198010u: goto label_198010;
        case 0x198014u: goto label_198014;
        case 0x198018u: goto label_198018;
        case 0x19801cu: goto label_19801c;
        case 0x198020u: goto label_198020;
        case 0x198024u: goto label_198024;
        case 0x198028u: goto label_198028;
        case 0x19802cu: goto label_19802c;
        case 0x198030u: goto label_198030;
        case 0x198034u: goto label_198034;
        case 0x198038u: goto label_198038;
        case 0x19803cu: goto label_19803c;
        case 0x198040u: goto label_198040;
        case 0x198044u: goto label_198044;
        case 0x198048u: goto label_198048;
        case 0x19804cu: goto label_19804c;
        case 0x198050u: goto label_198050;
        case 0x198054u: goto label_198054;
        case 0x198058u: goto label_198058;
        case 0x19805cu: goto label_19805c;
        case 0x198060u: goto label_198060;
        case 0x198064u: goto label_198064;
        case 0x198068u: goto label_198068;
        case 0x19806cu: goto label_19806c;
        case 0x198070u: goto label_198070;
        case 0x198074u: goto label_198074;
        case 0x198078u: goto label_198078;
        case 0x19807cu: goto label_19807c;
        case 0x198080u: goto label_198080;
        case 0x198084u: goto label_198084;
        case 0x198088u: goto label_198088;
        case 0x19808cu: goto label_19808c;
        case 0x198090u: goto label_198090;
        case 0x198094u: goto label_198094;
        case 0x198098u: goto label_198098;
        case 0x19809cu: goto label_19809c;
        case 0x1980a0u: goto label_1980a0;
        case 0x1980a4u: goto label_1980a4;
        case 0x1980a8u: goto label_1980a8;
        case 0x1980acu: goto label_1980ac;
        case 0x1980b0u: goto label_1980b0;
        case 0x1980b4u: goto label_1980b4;
        case 0x1980b8u: goto label_1980b8;
        case 0x1980bcu: goto label_1980bc;
        case 0x1980c0u: goto label_1980c0;
        case 0x1980c4u: goto label_1980c4;
        case 0x1980c8u: goto label_1980c8;
        case 0x1980ccu: goto label_1980cc;
        case 0x1980d0u: goto label_1980d0;
        case 0x1980d4u: goto label_1980d4;
        case 0x1980d8u: goto label_1980d8;
        case 0x1980dcu: goto label_1980dc;
        case 0x1980e0u: goto label_1980e0;
        case 0x1980e4u: goto label_1980e4;
        case 0x1980e8u: goto label_1980e8;
        case 0x1980ecu: goto label_1980ec;
        case 0x1980f0u: goto label_1980f0;
        case 0x1980f4u: goto label_1980f4;
        case 0x1980f8u: goto label_1980f8;
        case 0x1980fcu: goto label_1980fc;
        case 0x198100u: goto label_198100;
        case 0x198104u: goto label_198104;
        case 0x198108u: goto label_198108;
        case 0x19810cu: goto label_19810c;
        case 0x198110u: goto label_198110;
        case 0x198114u: goto label_198114;
        case 0x198118u: goto label_198118;
        case 0x19811cu: goto label_19811c;
        case 0x198120u: goto label_198120;
        case 0x198124u: goto label_198124;
        case 0x198128u: goto label_198128;
        case 0x19812cu: goto label_19812c;
        case 0x198130u: goto label_198130;
        case 0x198134u: goto label_198134;
        case 0x198138u: goto label_198138;
        case 0x19813cu: goto label_19813c;
        case 0x198140u: goto label_198140;
        case 0x198144u: goto label_198144;
        case 0x198148u: goto label_198148;
        case 0x19814cu: goto label_19814c;
        case 0x198150u: goto label_198150;
        case 0x198154u: goto label_198154;
        case 0x198158u: goto label_198158;
        case 0x19815cu: goto label_19815c;
        case 0x198160u: goto label_198160;
        case 0x198164u: goto label_198164;
        case 0x198168u: goto label_198168;
        case 0x19816cu: goto label_19816c;
        case 0x198170u: goto label_198170;
        case 0x198174u: goto label_198174;
        case 0x198178u: goto label_198178;
        case 0x19817cu: goto label_19817c;
        case 0x198180u: goto label_198180;
        case 0x198184u: goto label_198184;
        case 0x198188u: goto label_198188;
        case 0x19818cu: goto label_19818c;
        case 0x198190u: goto label_198190;
        case 0x198194u: goto label_198194;
        case 0x198198u: goto label_198198;
        case 0x19819cu: goto label_19819c;
        case 0x1981a0u: goto label_1981a0;
        case 0x1981a4u: goto label_1981a4;
        case 0x1981a8u: goto label_1981a8;
        case 0x1981acu: goto label_1981ac;
        case 0x1981b0u: goto label_1981b0;
        case 0x1981b4u: goto label_1981b4;
        case 0x1981b8u: goto label_1981b8;
        case 0x1981bcu: goto label_1981bc;
        case 0x1981c0u: goto label_1981c0;
        case 0x1981c4u: goto label_1981c4;
        case 0x1981c8u: goto label_1981c8;
        case 0x1981ccu: goto label_1981cc;
        case 0x1981d0u: goto label_1981d0;
        case 0x1981d4u: goto label_1981d4;
        case 0x1981d8u: goto label_1981d8;
        case 0x1981dcu: goto label_1981dc;
        case 0x1981e0u: goto label_1981e0;
        case 0x1981e4u: goto label_1981e4;
        case 0x1981e8u: goto label_1981e8;
        case 0x1981ecu: goto label_1981ec;
        case 0x1981f0u: goto label_1981f0;
        case 0x1981f4u: goto label_1981f4;
        case 0x1981f8u: goto label_1981f8;
        case 0x1981fcu: goto label_1981fc;
        case 0x198200u: goto label_198200;
        case 0x198204u: goto label_198204;
        case 0x198208u: goto label_198208;
        case 0x19820cu: goto label_19820c;
        case 0x198210u: goto label_198210;
        case 0x198214u: goto label_198214;
        case 0x198218u: goto label_198218;
        case 0x19821cu: goto label_19821c;
        case 0x198220u: goto label_198220;
        case 0x198224u: goto label_198224;
        case 0x198228u: goto label_198228;
        case 0x19822cu: goto label_19822c;
        case 0x198230u: goto label_198230;
        case 0x198234u: goto label_198234;
        case 0x198238u: goto label_198238;
        case 0x19823cu: goto label_19823c;
        case 0x198240u: goto label_198240;
        case 0x198244u: goto label_198244;
        case 0x198248u: goto label_198248;
        case 0x19824cu: goto label_19824c;
        case 0x198250u: goto label_198250;
        case 0x198254u: goto label_198254;
        case 0x198258u: goto label_198258;
        case 0x19825cu: goto label_19825c;
        case 0x198260u: goto label_198260;
        case 0x198264u: goto label_198264;
        case 0x198268u: goto label_198268;
        case 0x19826cu: goto label_19826c;
        case 0x198270u: goto label_198270;
        case 0x198274u: goto label_198274;
        case 0x198278u: goto label_198278;
        case 0x19827cu: goto label_19827c;
        case 0x198280u: goto label_198280;
        case 0x198284u: goto label_198284;
        case 0x198288u: goto label_198288;
        case 0x19828cu: goto label_19828c;
        case 0x198290u: goto label_198290;
        case 0x198294u: goto label_198294;
        case 0x198298u: goto label_198298;
        case 0x19829cu: goto label_19829c;
        case 0x1982a0u: goto label_1982a0;
        case 0x1982a4u: goto label_1982a4;
        case 0x1982a8u: goto label_1982a8;
        case 0x1982acu: goto label_1982ac;
        case 0x1982b0u: goto label_1982b0;
        case 0x1982b4u: goto label_1982b4;
        case 0x1982b8u: goto label_1982b8;
        case 0x1982bcu: goto label_1982bc;
        case 0x1982c0u: goto label_1982c0;
        case 0x1982c4u: goto label_1982c4;
        case 0x1982c8u: goto label_1982c8;
        case 0x1982ccu: goto label_1982cc;
        case 0x1982d0u: goto label_1982d0;
        case 0x1982d4u: goto label_1982d4;
        case 0x1982d8u: goto label_1982d8;
        case 0x1982dcu: goto label_1982dc;
        case 0x1982e0u: goto label_1982e0;
        case 0x1982e4u: goto label_1982e4;
        case 0x1982e8u: goto label_1982e8;
        case 0x1982ecu: goto label_1982ec;
        case 0x1982f0u: goto label_1982f0;
        case 0x1982f4u: goto label_1982f4;
        case 0x1982f8u: goto label_1982f8;
        case 0x1982fcu: goto label_1982fc;
        case 0x198300u: goto label_198300;
        case 0x198304u: goto label_198304;
        case 0x198308u: goto label_198308;
        case 0x19830cu: goto label_19830c;
        case 0x198310u: goto label_198310;
        case 0x198314u: goto label_198314;
        case 0x198318u: goto label_198318;
        case 0x19831cu: goto label_19831c;
        case 0x198320u: goto label_198320;
        case 0x198324u: goto label_198324;
        case 0x198328u: goto label_198328;
        case 0x19832cu: goto label_19832c;
        case 0x198330u: goto label_198330;
        case 0x198334u: goto label_198334;
        case 0x198338u: goto label_198338;
        case 0x19833cu: goto label_19833c;
        case 0x198340u: goto label_198340;
        case 0x198344u: goto label_198344;
        case 0x198348u: goto label_198348;
        case 0x19834cu: goto label_19834c;
        case 0x198350u: goto label_198350;
        case 0x198354u: goto label_198354;
        case 0x198358u: goto label_198358;
        case 0x19835cu: goto label_19835c;
        case 0x198360u: goto label_198360;
        case 0x198364u: goto label_198364;
        case 0x198368u: goto label_198368;
        case 0x19836cu: goto label_19836c;
        case 0x198370u: goto label_198370;
        case 0x198374u: goto label_198374;
        case 0x198378u: goto label_198378;
        case 0x19837cu: goto label_19837c;
        case 0x198380u: goto label_198380;
        case 0x198384u: goto label_198384;
        case 0x198388u: goto label_198388;
        case 0x19838cu: goto label_19838c;
        case 0x198390u: goto label_198390;
        case 0x198394u: goto label_198394;
        case 0x198398u: goto label_198398;
        case 0x19839cu: goto label_19839c;
        case 0x1983a0u: goto label_1983a0;
        case 0x1983a4u: goto label_1983a4;
        case 0x1983a8u: goto label_1983a8;
        case 0x1983acu: goto label_1983ac;
        case 0x1983b0u: goto label_1983b0;
        case 0x1983b4u: goto label_1983b4;
        case 0x1983b8u: goto label_1983b8;
        case 0x1983bcu: goto label_1983bc;
        case 0x1983c0u: goto label_1983c0;
        case 0x1983c4u: goto label_1983c4;
        case 0x1983c8u: goto label_1983c8;
        case 0x1983ccu: goto label_1983cc;
        case 0x1983d0u: goto label_1983d0;
        case 0x1983d4u: goto label_1983d4;
        case 0x1983d8u: goto label_1983d8;
        case 0x1983dcu: goto label_1983dc;
        case 0x1983e0u: goto label_1983e0;
        case 0x1983e4u: goto label_1983e4;
        case 0x1983e8u: goto label_1983e8;
        case 0x1983ecu: goto label_1983ec;
        case 0x1983f0u: goto label_1983f0;
        case 0x1983f4u: goto label_1983f4;
        case 0x1983f8u: goto label_1983f8;
        case 0x1983fcu: goto label_1983fc;
        case 0x198400u: goto label_198400;
        case 0x198404u: goto label_198404;
        case 0x198408u: goto label_198408;
        case 0x19840cu: goto label_19840c;
        case 0x198410u: goto label_198410;
        case 0x198414u: goto label_198414;
        case 0x198418u: goto label_198418;
        case 0x19841cu: goto label_19841c;
        case 0x198420u: goto label_198420;
        case 0x198424u: goto label_198424;
        case 0x198428u: goto label_198428;
        case 0x19842cu: goto label_19842c;
        case 0x198430u: goto label_198430;
        case 0x198434u: goto label_198434;
        case 0x198438u: goto label_198438;
        case 0x19843cu: goto label_19843c;
        case 0x198440u: goto label_198440;
        case 0x198444u: goto label_198444;
        case 0x198448u: goto label_198448;
        case 0x19844cu: goto label_19844c;
        case 0x198450u: goto label_198450;
        case 0x198454u: goto label_198454;
        case 0x198458u: goto label_198458;
        case 0x19845cu: goto label_19845c;
        case 0x198460u: goto label_198460;
        case 0x198464u: goto label_198464;
        case 0x198468u: goto label_198468;
        case 0x19846cu: goto label_19846c;
        case 0x198470u: goto label_198470;
        case 0x198474u: goto label_198474;
        case 0x198478u: goto label_198478;
        case 0x19847cu: goto label_19847c;
        case 0x198480u: goto label_198480;
        case 0x198484u: goto label_198484;
        case 0x198488u: goto label_198488;
        case 0x19848cu: goto label_19848c;
        case 0x198490u: goto label_198490;
        case 0x198494u: goto label_198494;
        case 0x198498u: goto label_198498;
        case 0x19849cu: goto label_19849c;
        case 0x1984a0u: goto label_1984a0;
        case 0x1984a4u: goto label_1984a4;
        case 0x1984a8u: goto label_1984a8;
        case 0x1984acu: goto label_1984ac;
        default: break;
    }

    ctx->pc = 0x198000u;

label_198000:
    // 0x198000: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x198000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_198004:
    // 0x198004: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x198004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_198008:
    // 0x198008: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x198008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_19800c:
    // 0x19800c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x19800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_198010:
    // 0x198010: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x198010u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_198014:
    // 0x198014: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x198014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_198018:
    // 0x198018: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x198018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_19801c:
    // 0x19801c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x19801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_198020:
    // 0x198020: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x198020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198024:
    // 0x198024: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x198024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_198028:
    // 0x198028: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x198028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19802c:
    // 0x19802c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19802cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_198030:
    // 0x198030: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_198034:
    // 0x198034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_198038:
    // 0x198038: 0xc063dd4  jal         func_18F750
label_19803c:
    if (ctx->pc == 0x19803Cu) {
        ctx->pc = 0x19803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198038u;
        // 0x19803c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x198040u;
        goto label_198040;
    }
    ctx->pc = 0x198038u;
    SET_GPR_U32(ctx, 31, 0x198040u);
    ctx->pc = 0x19803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198038u;
    // 0x19803c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x198038u, 0x198040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198040u;
label_198040:
    // 0x198040: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x198040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_198044:
    // 0x198044: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x198044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_198048:
    // 0x198048: 0x10440106  beq         $v0, $a0, . + 4 + (0x106 << 2)
label_19804c:
    if (ctx->pc == 0x19804Cu) {
        ctx->pc = 0x198050u;
        goto label_198050;
    }
    ctx->pc = 0x198048u;
    {
        const bool branch_taken_0x198048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x198048) {
            ctx->pc = 0x198464u;
            goto label_198464;
        }
    }
    ctx->pc = 0x198050u;
label_198050:
    // 0x198050: 0x10430104  beq         $v0, $v1, . + 4 + (0x104 << 2)
label_198054:
    if (ctx->pc == 0x198054u) {
        ctx->pc = 0x198058u;
        goto label_198058;
    }
    ctx->pc = 0x198050u;
    {
        const bool branch_taken_0x198050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198050) {
            ctx->pc = 0x198464u;
            goto label_198464;
        }
    }
    ctx->pc = 0x198058u;
label_198058:
    // 0x198058: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19805c:
    // 0x19805c: 0x104300f8  beq         $v0, $v1, . + 4 + (0xF8 << 2)
label_198060:
    if (ctx->pc == 0x198060u) {
        ctx->pc = 0x198064u;
        goto label_198064;
    }
    ctx->pc = 0x19805Cu;
    {
        const bool branch_taken_0x19805c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19805c) {
            ctx->pc = 0x198440u;
            goto label_198440;
        }
    }
    ctx->pc = 0x198064u;
label_198064:
    // 0x198064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198068:
    // 0x198068: 0x1043003d  beq         $v0, $v1, . + 4 + (0x3D << 2)
label_19806c:
    if (ctx->pc == 0x19806Cu) {
        ctx->pc = 0x198070u;
        goto label_198070;
    }
    ctx->pc = 0x198068u;
    {
        const bool branch_taken_0x198068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198068) {
            ctx->pc = 0x198160u;
            goto label_198160;
        }
    }
    ctx->pc = 0x198070u;
label_198070:
    // 0x198070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_198074:
    if (ctx->pc == 0x198074u) {
        ctx->pc = 0x198078u;
        goto label_198078;
    }
    ctx->pc = 0x198070u;
    {
        const bool branch_taken_0x198070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198070) {
            ctx->pc = 0x198080u;
            goto label_198080;
        }
    }
    ctx->pc = 0x198078u;
label_198078:
    // 0x198078: 0x100000fb  b           . + 4 + (0xFB << 2)
label_19807c:
    if (ctx->pc == 0x19807Cu) {
        ctx->pc = 0x19807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198078u;
        // 0x19807c: 0x8ea30320  lw          $v1, 0x320($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198080u;
        goto label_198080;
    }
    ctx->pc = 0x198078u;
    {
        const bool branch_taken_0x198078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198078u;
        // 0x19807c: 0x8ea30320  lw          $v1, 0x320($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198078) {
            ctx->pc = 0x198468u;
            goto label_198468;
        }
    }
    ctx->pc = 0x198080u;
label_198080:
    // 0x198080: 0xaea00324  sw          $zero, 0x324($s5)
    ctx->pc = 0x198080u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
label_198084:
    // 0x198084: 0xaea00678  sw          $zero, 0x678($s5)
    ctx->pc = 0x198084u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 0));
label_198088:
    // 0x198088: 0xaea00670  sw          $zero, 0x670($s5)
    ctx->pc = 0x198088u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 0));
label_19808c:
    // 0x19808c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_198090:
    // 0x198090: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x198090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_198094:
    // 0x198094: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x198094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_198098:
    // 0x198098: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x198098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19809c:
    // 0x19809c: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_1980a0:
    if (ctx->pc == 0x1980A0u) {
        ctx->pc = 0x1980A4u;
        goto label_1980a4;
    }
    ctx->pc = 0x19809Cu;
    {
        const bool branch_taken_0x19809c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19809c) {
            ctx->pc = 0x198140u;
            goto label_198140;
        }
    }
    ctx->pc = 0x1980A4u;
label_1980a4:
    // 0x1980a4: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x1980a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_1980a8:
    // 0x1980a8: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1980a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1980ac:
    // 0x1980ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1980b0:
    if (ctx->pc == 0x1980B0u) {
        ctx->pc = 0x1980B4u;
        goto label_1980b4;
    }
    ctx->pc = 0x1980ACu;
    {
        const bool branch_taken_0x1980ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1980ac) {
            ctx->pc = 0x1980BCu;
            goto label_1980bc;
        }
    }
    ctx->pc = 0x1980B4u;
label_1980b4:
    // 0x1980b4: 0x10000020  b           . + 4 + (0x20 << 2)
label_1980b8:
    if (ctx->pc == 0x1980B8u) {
        ctx->pc = 0x1980BCu;
        goto label_1980bc;
    }
    ctx->pc = 0x1980B4u;
    {
        const bool branch_taken_0x1980b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1980b4) {
            ctx->pc = 0x198138u;
            goto label_198138;
        }
    }
    ctx->pc = 0x1980BCu;
label_1980bc:
    // 0x1980bc: 0x0  nop
    ctx->pc = 0x1980bcu;
    // NOP
label_1980c0:
    // 0x1980c0: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1980c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1980c4:
    // 0x1980c4: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1980c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1980c8:
    // 0x1980c8: 0xc057040  jal         func_15C100
label_1980cc:
    if (ctx->pc == 0x1980CCu) {
        ctx->pc = 0x1980CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980C8u;
        // 0x1980cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980D0u;
        goto label_1980d0;
    }
    ctx->pc = 0x1980C8u;
    SET_GPR_U32(ctx, 31, 0x1980D0u);
    ctx->pc = 0x1980CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980C8u;
    // 0x1980cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1980C8u, 0x1980D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980D0u;
label_1980d0:
    // 0x1980d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1980d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1980d4:
    // 0x1980d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1980d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1980d8:
    // 0x1980d8: 0xc064bf0  jal         func_192FC0
label_1980dc:
    if (ctx->pc == 0x1980DCu) {
        ctx->pc = 0x1980DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980D8u;
        // 0x1980dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980E0u;
        goto label_1980e0;
    }
    ctx->pc = 0x1980D8u;
    SET_GPR_U32(ctx, 31, 0x1980E0u);
    ctx->pc = 0x1980DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980D8u;
    // 0x1980dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192FC0u, 0x1980D8u, 0x1980E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980E0u;
label_1980e0:
    // 0x1980e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1980e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1980e4:
    // 0x1980e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1980e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1980e8:
    // 0x1980e8: 0xc064c4c  jal         func_193130
label_1980ec:
    if (ctx->pc == 0x1980ECu) {
        ctx->pc = 0x1980ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980E8u;
        // 0x1980ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980F0u;
        goto label_1980f0;
    }
    ctx->pc = 0x1980E8u;
    SET_GPR_U32(ctx, 31, 0x1980F0u);
    ctx->pc = 0x1980ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980E8u;
    // 0x1980ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x1980E8u, 0x1980F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980F0u;
label_1980f0:
    // 0x1980f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1980f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1980f4:
    // 0x1980f4: 0xc064c0c  jal         func_193030
label_1980f8:
    if (ctx->pc == 0x1980F8u) {
        ctx->pc = 0x1980F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980F4u;
        // 0x1980f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980FCu;
        goto label_1980fc;
    }
    ctx->pc = 0x1980F4u;
    SET_GPR_U32(ctx, 31, 0x1980FCu);
    ctx->pc = 0x1980F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980F4u;
    // 0x1980f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x1980F4u, 0x1980FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980FCu;
label_1980fc:
    // 0x1980fc: 0x8ea20678  lw          $v0, 0x678($s5)
    ctx->pc = 0x1980fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
label_198100:
    // 0x198100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_198104:
    // 0x198104: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x198104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_198108:
    // 0x198108: 0xac5006bc  sw          $s0, 0x6BC($v0)
    ctx->pc = 0x198108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1724), GPR_U32(ctx, 16));
label_19810c:
    // 0x19810c: 0x8ea20678  lw          $v0, 0x678($s5)
    ctx->pc = 0x19810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
label_198110:
    // 0x198110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_198114:
    // 0x198114: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_198118:
    // 0x198118: 0xac5106fc  sw          $s1, 0x6FC($v0)
    ctx->pc = 0x198118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1788), GPR_U32(ctx, 17));
label_19811c:
    // 0x19811c: 0x8ea20678  lw          $v0, 0x678($s5)
    ctx->pc = 0x19811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
label_198120:
    // 0x198120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_198124:
    // 0x198124: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x198124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_198128:
    // 0x198128: 0xac40067c  sw          $zero, 0x67C($v0)
    ctx->pc = 0x198128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1660), GPR_U32(ctx, 0));
label_19812c:
    // 0x19812c: 0x8ea20678  lw          $v0, 0x678($s5)
    ctx->pc = 0x19812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
label_198130:
    // 0x198130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_198134:
    // 0x198134: 0xaea20678  sw          $v0, 0x678($s5)
    ctx->pc = 0x198134u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 2));
label_198138:
    // 0x198138: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
label_19813c:
    if (ctx->pc == 0x19813Cu) {
        ctx->pc = 0x19813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198138u;
        // 0x19813c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198140u;
        goto label_198140;
    }
    ctx->pc = 0x198138u;
    {
        const bool branch_taken_0x198138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198138u;
        // 0x19813c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198138) {
            ctx->pc = 0x198094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198094;
        }
    }
    ctx->pc = 0x198140u;
label_198140:
    // 0x198140: 0xc063e14  jal         func_18F850
label_198144:
    if (ctx->pc == 0x198144u) {
        ctx->pc = 0x198144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198140u;
        // 0x198144: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198148u;
        goto label_198148;
    }
    ctx->pc = 0x198140u;
    SET_GPR_U32(ctx, 31, 0x198148u);
    ctx->pc = 0x198144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198140u;
    // 0x198144: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x198140u, 0x198148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198148u;
label_198148:
    // 0x198148: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x198148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19814c:
    // 0x19814c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198150:
    // 0x198150: 0xc064918  jal         func_192460
label_198154:
    if (ctx->pc == 0x198154u) {
        ctx->pc = 0x198154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198150u;
        // 0x198154: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198158u;
        goto label_198158;
    }
    ctx->pc = 0x198150u;
    SET_GPR_U32(ctx, 31, 0x198158u);
    ctx->pc = 0x198154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198150u;
    // 0x198154: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x198150u, 0x198158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198158u;
label_198158:
    // 0x198158: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_19815c:
    if (ctx->pc == 0x19815Cu) {
        ctx->pc = 0x19815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198158u;
        // 0x19815c: 0xaea20674  sw          $v0, 0x674($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198160u;
        goto label_198160;
    }
    ctx->pc = 0x198158u;
    {
        const bool branch_taken_0x198158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198158u;
        // 0x19815c: 0xaea20674  sw          $v0, 0x674($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198158) {
            ctx->pc = 0x198464u;
            goto label_198464;
        }
    }
    ctx->pc = 0x198160u;
label_198160:
    // 0x198160: 0x8ea30324  lw          $v1, 0x324($s5)
    ctx->pc = 0x198160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
label_198164:
    // 0x198164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_198168:
    // 0x198168: 0xaea30324  sw          $v1, 0x324($s5)
    ctx->pc = 0x198168u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 3));
label_19816c:
    // 0x19816c: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x19816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_198170:
    // 0x198170: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x198170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_198174:
    // 0x198174: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x198174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198178:
    // 0x198178: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19817c:
    // 0x19817c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19817cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_198180:
    // 0x198180: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x198180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_198184:
    // 0x198184: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x198184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_198188:
    // 0x198188: 0x0  nop
    ctx->pc = 0x198188u;
    // NOP
label_19818c:
    // 0x19818c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_198190:
    if (ctx->pc == 0x198190u) {
        ctx->pc = 0x198194u;
        goto label_198194;
    }
    ctx->pc = 0x19818Cu;
    {
        const bool branch_taken_0x19818c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19818c) {
            ctx->pc = 0x198198u;
            goto label_198198;
        }
    }
    ctx->pc = 0x198194u;
label_198194:
    // 0x198194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198198:
    // 0x198198: 0x8ea30324  lw          $v1, 0x324($s5)
    ctx->pc = 0x198198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
label_19819c:
    // 0x19819c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x19819cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1981a0:
    // 0x1981a0: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_1981a4:
    if (ctx->pc == 0x1981A4u) {
        ctx->pc = 0x1981A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981A0u;
        // 0x1981a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1981A8u;
        goto label_1981a8;
    }
    ctx->pc = 0x1981A0u;
    {
        const bool branch_taken_0x1981a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981A0u;
        // 0x1981a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981a0) {
            ctx->pc = 0x198258u;
            goto label_198258;
        }
    }
    ctx->pc = 0x1981A8u;
label_1981a8:
    // 0x1981a8: 0xc0802aa  jal         func_200AA8
label_1981ac:
    if (ctx->pc == 0x1981ACu) {
        ctx->pc = 0x1981B0u;
        goto label_1981b0;
    }
    ctx->pc = 0x1981A8u;
    SET_GPR_U32(ctx, 31, 0x1981B0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1981A8u, 0x1981B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1981B0u;
label_1981b0:
    // 0x1981b0: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x1981b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
label_1981b4:
    // 0x1981b4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1981b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1981b8:
    // 0x1981b8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1981b8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1981bc:
    // 0x1981bc: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x1981bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1981c0:
    // 0x1981c0: 0x0  nop
    ctx->pc = 0x1981c0u;
    // NOP
label_1981c4:
    // 0x1981c4: 0x2010  mfhi        $a0
    ctx->pc = 0x1981c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1981c8:
    // 0x1981c8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1981c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1981cc:
    // 0x1981cc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1981ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1981d0:
    // 0x1981d0: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1981d4:
    if (ctx->pc == 0x1981D4u) {
        ctx->pc = 0x1981D8u;
        goto label_1981d8;
    }
    ctx->pc = 0x1981D0u;
    {
        const bool branch_taken_0x1981d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1981d0) {
            ctx->pc = 0x19824Cu;
            goto label_19824c;
        }
    }
    ctx->pc = 0x1981D8u;
label_1981d8:
    // 0x1981d8: 0xc0802aa  jal         func_200AA8
label_1981dc:
    if (ctx->pc == 0x1981DCu) {
        ctx->pc = 0x1981E0u;
        goto label_1981e0;
    }
    ctx->pc = 0x1981D8u;
    SET_GPR_U32(ctx, 31, 0x1981E0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1981D8u, 0x1981E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1981E0u;
label_1981e0:
    // 0x1981e0: 0x8ea70678  lw          $a3, 0x678($s5)
    ctx->pc = 0x1981e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
label_1981e4:
    // 0x1981e4: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1981e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_1981e8:
    // 0x1981e8: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x1981e8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1981ec:
    // 0x1981ec: 0x0  nop
    ctx->pc = 0x1981ecu;
    // NOP
label_1981f0:
    // 0x1981f0: 0x0  nop
    ctx->pc = 0x1981f0u;
    // NOP
label_1981f4:
    // 0x1981f4: 0x3010  mfhi        $a2
    ctx->pc = 0x1981f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1981f8:
    // 0x1981f8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1981fc:
    if (ctx->pc == 0x1981FCu) {
        ctx->pc = 0x1981FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981F8u;
        // 0x1981fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198200u;
        goto label_198200;
    }
    ctx->pc = 0x1981F8u;
    {
        const bool branch_taken_0x1981f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981F8u;
        // 0x1981fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981f8) {
            ctx->pc = 0x19823Cu;
            goto label_19823c;
        }
    }
    ctx->pc = 0x198200u;
label_198200:
    // 0x198200: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x198200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_198204:
    // 0x198204: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x198204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_198208:
    // 0x198208: 0x8c83067c  lw          $v1, 0x67C($a0)
    ctx->pc = 0x198208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1660)));
label_19820c:
    // 0x19820c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_198210:
    if (ctx->pc == 0x198210u) {
        ctx->pc = 0x198214u;
        goto label_198214;
    }
    ctx->pc = 0x19820Cu;
    {
        const bool branch_taken_0x19820c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19820c) {
            ctx->pc = 0x198220u;
            goto label_198220;
        }
    }
    ctx->pc = 0x198214u;
label_198214:
    // 0x198214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198218:
    // 0x198218: 0x1000000c  b           . + 4 + (0xC << 2)
label_19821c:
    if (ctx->pc == 0x19821Cu) {
        ctx->pc = 0x19821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198218u;
        // 0x19821c: 0xac83067c  sw          $v1, 0x67C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198220u;
        goto label_198220;
    }
    ctx->pc = 0x198218u;
    {
        const bool branch_taken_0x198218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198218u;
        // 0x19821c: 0xac83067c  sw          $v1, 0x67C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198218) {
            ctx->pc = 0x19824Cu;
            goto label_19824c;
        }
    }
    ctx->pc = 0x198220u;
label_198220:
    // 0x198220: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x198220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_198224:
    // 0x198224: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x198224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_198228:
    // 0x198228: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_19822c:
    if (ctx->pc == 0x19822Cu) {
        ctx->pc = 0x198230u;
        goto label_198230;
    }
    ctx->pc = 0x198228u;
    {
        const bool branch_taken_0x198228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198228) {
            ctx->pc = 0x198234u;
            goto label_198234;
        }
    }
    ctx->pc = 0x198230u;
label_198230:
    // 0x198230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198234:
    // 0x198234: 0x0  nop
    ctx->pc = 0x198234u;
    // NOP
label_198238:
    // 0x198238: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x198238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19823c:
    // 0x19823c: 0x0  nop
    ctx->pc = 0x19823cu;
    // NOP
label_198240:
    // 0x198240: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x198240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_198244:
    // 0x198244: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_198248:
    if (ctx->pc == 0x198248u) {
        ctx->pc = 0x198248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198244u;
        // 0x198248: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19824Cu;
        goto label_19824c;
    }
    ctx->pc = 0x198244u;
    {
        const bool branch_taken_0x198244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198244u;
        // 0x198248: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198244) {
            ctx->pc = 0x198204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198204;
        }
    }
    ctx->pc = 0x19824Cu;
label_19824c:
    // 0x19824c: 0x0  nop
    ctx->pc = 0x19824cu;
    // NOP
label_198250:
    // 0x198250: 0xaea00324  sw          $zero, 0x324($s5)
    ctx->pc = 0x198250u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
label_198254:
    // 0x198254: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x198254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198258:
    // 0x198258: 0x10000073  b           . + 4 + (0x73 << 2)
label_19825c:
    if (ctx->pc == 0x19825Cu) {
        ctx->pc = 0x19825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198258u;
        // 0x19825c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198260u;
        goto label_198260;
    }
    ctx->pc = 0x198258u;
    {
        const bool branch_taken_0x198258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198258u;
        // 0x19825c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198258) {
            ctx->pc = 0x198428u;
            goto label_198428;
        }
    }
    ctx->pc = 0x198260u;
label_198260:
    // 0x198260: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x198260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_198264:
    // 0x198264: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x198264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_198268:
    // 0x198268: 0x8c7306bc  lw          $s3, 0x6BC($v1)
    ctx->pc = 0x198268u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1724)));
label_19826c:
    // 0x19826c: 0x2472067c  addiu       $s2, $v1, 0x67C
    ctx->pc = 0x19826cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1660));
label_198270:
    // 0x198270: 0x8c65067c  lw          $a1, 0x67C($v1)
    ctx->pc = 0x198270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1660)));
label_198274:
    // 0x198274: 0x138880  sll         $s1, $s3, 2
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_198278:
    // 0x198278: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x198278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_19827c:
    // 0x19827c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_198280:
    // 0x198280: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x198280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
label_198284:
    // 0x198284: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
label_198288:
    if (ctx->pc == 0x198288u) {
        ctx->pc = 0x198288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198284u;
        // 0x198288: 0x8cd00004  lw          $s0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19828Cu;
        goto label_19828c;
    }
    ctx->pc = 0x198284u;
    {
        const bool branch_taken_0x198284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x198288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198284u;
        // 0x198288: 0x8cd00004  lw          $s0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198284) {
            ctx->pc = 0x19830Cu;
            goto label_19830c;
        }
    }
    ctx->pc = 0x19828Cu;
label_19828c:
    // 0x19828c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198290:
    // 0x198290: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_198294:
    if (ctx->pc == 0x198294u) {
        ctx->pc = 0x198298u;
        goto label_198298;
    }
    ctx->pc = 0x198290u;
    {
        const bool branch_taken_0x198290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x198290) {
            ctx->pc = 0x1982A8u;
            goto label_1982a8;
        }
    }
    ctx->pc = 0x198298u;
label_198298:
    // 0x198298: 0x10a00061  beqz        $a1, . + 4 + (0x61 << 2)
label_19829c:
    if (ctx->pc == 0x19829Cu) {
        ctx->pc = 0x1982A0u;
        goto label_1982a0;
    }
    ctx->pc = 0x198298u;
    {
        const bool branch_taken_0x198298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x198298) {
            ctx->pc = 0x198420u;
            goto label_198420;
        }
    }
    ctx->pc = 0x1982A0u;
label_1982a0:
    // 0x1982a0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1982a4:
    if (ctx->pc == 0x1982A4u) {
        ctx->pc = 0x1982A8u;
        goto label_1982a8;
    }
    ctx->pc = 0x1982A0u;
    {
        const bool branch_taken_0x1982a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1982a0) {
            ctx->pc = 0x198420u;
            goto label_198420;
        }
    }
    ctx->pc = 0x1982A8u;
label_1982a8:
    // 0x1982a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1982a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1982ac:
    // 0x1982ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1982acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1982b0:
    // 0x1982b0: 0xc064c4c  jal         func_193130
label_1982b4:
    if (ctx->pc == 0x1982B4u) {
        ctx->pc = 0x1982B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982B0u;
        // 0x1982b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1982B8u;
        goto label_1982b8;
    }
    ctx->pc = 0x1982B0u;
    SET_GPR_U32(ctx, 31, 0x1982B8u);
    ctx->pc = 0x1982B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982B0u;
    // 0x1982b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x1982B0u, 0x1982B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982B8u;
label_1982b8:
    // 0x1982b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1982b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1982bc:
    // 0x1982bc: 0xc064bf8  jal         func_192FE0
label_1982c0:
    if (ctx->pc == 0x1982C0u) {
        ctx->pc = 0x1982C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982BCu;
        // 0x1982c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1982C4u;
        goto label_1982c4;
    }
    ctx->pc = 0x1982BCu;
    SET_GPR_U32(ctx, 31, 0x1982C4u);
    ctx->pc = 0x1982C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982BCu;
    // 0x1982c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192FE0u, 0x1982BCu, 0x1982C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982C4u;
label_1982c4:
    // 0x1982c4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1982c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1982c8:
    // 0x1982c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1982c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1982cc:
    // 0x1982cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1982ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1982d0:
    // 0x1982d0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1982d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1982d4:
    // 0x1982d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1982d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1982d8:
    // 0x1982d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1982d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1982dc:
    // 0x1982dc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1982dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1982e0:
    // 0x1982e0: 0x320f809  jalr        $t9
label_1982e4:
    if (ctx->pc == 0x1982E4u) {
        ctx->pc = 0x1982E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982E0u;
        // 0x1982e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1982E8u;
        goto label_1982e8;
    }
    ctx->pc = 0x1982E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1982E8u);
        ctx->pc = 0x1982E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982E0u;
        // 0x1982e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1982E0u, 0x1982E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1982E8u;
label_1982e8:
    // 0x1982e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1982e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1982ec:
    // 0x1982ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1982ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1982f0:
    // 0x1982f0: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1982f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1982f4:
    // 0x1982f4: 0x320f809  jalr        $t9
label_1982f8:
    if (ctx->pc == 0x1982F8u) {
        ctx->pc = 0x1982F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982F4u;
        // 0x1982f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1982FCu;
        goto label_1982fc;
    }
    ctx->pc = 0x1982F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1982FCu);
        ctx->pc = 0x1982F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982F4u;
        // 0x1982f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1982F4u, 0x1982FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1982FCu;
label_1982fc:
    // 0x1982fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1982fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_198300:
    // 0x198300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_198304:
    // 0x198304: 0x10000046  b           . + 4 + (0x46 << 2)
label_198308:
    if (ctx->pc == 0x198308u) {
        ctx->pc = 0x198308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198304u;
        // 0x198308: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19830Cu;
        goto label_19830c;
    }
    ctx->pc = 0x198304u;
    {
        const bool branch_taken_0x198304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198304u;
        // 0x198308: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198304) {
            ctx->pc = 0x198420u;
            goto label_198420;
        }
    }
    ctx->pc = 0x19830Cu;
label_19830c:
    // 0x19830c: 0x0  nop
    ctx->pc = 0x19830cu;
    // NOP
label_198310:
    // 0x198310: 0x8cc201fc  lw          $v0, 0x1FC($a2)
    ctx->pc = 0x198310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 508)));
label_198314:
    // 0x198314: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_198318:
    if (ctx->pc == 0x198318u) {
        ctx->pc = 0x198318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198314u;
        // 0x198318: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19831Cu;
        goto label_19831c;
    }
    ctx->pc = 0x198314u;
    {
        const bool branch_taken_0x198314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198314u;
        // 0x198318: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198314) {
            ctx->pc = 0x1983A4u;
            goto label_1983a4;
        }
    }
    ctx->pc = 0x19831Cu;
label_19831c:
    // 0x19831c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_198320:
    // 0x198320: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x198320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_198324:
    // 0x198324: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x198324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_198328:
    // 0x198328: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x198328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19832c:
    // 0x19832c: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_198330:
    if (ctx->pc == 0x198330u) {
        ctx->pc = 0x198334u;
        goto label_198334;
    }
    ctx->pc = 0x19832Cu;
    {
        const bool branch_taken_0x19832c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19832c) {
            ctx->pc = 0x1983A4u;
            goto label_1983a4;
        }
    }
    ctx->pc = 0x198334u;
label_198334:
    // 0x198334: 0xc057f04  jal         func_15FC10
label_198338:
    if (ctx->pc == 0x198338u) {
        ctx->pc = 0x19833Cu;
        goto label_19833c;
    }
    ctx->pc = 0x198334u;
    SET_GPR_U32(ctx, 31, 0x19833Cu);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x198334u, 0x19833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19833Cu;
label_19833c:
    // 0x19833c: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
label_198340:
    if (ctx->pc == 0x198340u) {
        ctx->pc = 0x198344u;
        goto label_198344;
    }
    ctx->pc = 0x19833Cu;
    {
        const bool branch_taken_0x19833c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19833c) {
            ctx->pc = 0x1983A0u;
            goto label_1983a0;
        }
    }
    ctx->pc = 0x198344u;
label_198344:
    // 0x198344: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x198344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_198348:
    // 0x198348: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x198348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_19834c:
    // 0x19834c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_198350:
    if (ctx->pc == 0x198350u) {
        ctx->pc = 0x198354u;
        goto label_198354;
    }
    ctx->pc = 0x19834Cu;
    {
        const bool branch_taken_0x19834c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19834c) {
            ctx->pc = 0x19835Cu;
            goto label_19835c;
        }
    }
    ctx->pc = 0x198354u;
label_198354:
    // 0x198354: 0x10000009  b           . + 4 + (0x9 << 2)
label_198358:
    if (ctx->pc == 0x198358u) {
        ctx->pc = 0x198358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198354u;
        // 0x198358: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19835Cu;
        goto label_19835c;
    }
    ctx->pc = 0x198354u;
    {
        const bool branch_taken_0x198354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198354u;
        // 0x198358: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198354) {
            ctx->pc = 0x19837Cu;
            goto label_19837c;
        }
    }
    ctx->pc = 0x19835Cu;
label_19835c:
    // 0x19835c: 0x0  nop
    ctx->pc = 0x19835cu;
    // NOP
label_198360:
    // 0x198360: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x198360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_198364:
    // 0x198364: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x198364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_198368:
    // 0x198368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19836c:
    // 0x19836c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_198370:
    // 0x198370: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x198370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_198374:
    // 0x198374: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x198374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_198378:
    // 0x198378: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x198378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19837c:
    // 0x19837c: 0x0  nop
    ctx->pc = 0x19837cu;
    // NOP
label_198380:
    // 0x198380: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x198380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_198384:
    // 0x198384: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x198384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_198388:
    // 0x198388: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x198388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19838c:
    // 0x19838c: 0xac6201c0  sw          $v0, 0x1C0($v1)
    ctx->pc = 0x19838cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 448), GPR_U32(ctx, 2));
label_198390:
    // 0x198390: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x198390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_198394:
    // 0x198394: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x198394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_198398:
    // 0x198398: 0xc04231c  jal         func_108C70
label_19839c:
    if (ctx->pc == 0x19839Cu) {
        ctx->pc = 0x19839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198398u;
        // 0x19839c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983A0u;
        goto label_1983a0;
    }
    ctx->pc = 0x198398u;
    SET_GPR_U32(ctx, 31, 0x1983A0u);
    ctx->pc = 0x19839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198398u;
    // 0x19839c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C70u, 0x198398u, 0x1983A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983A0u;
label_1983a0:
    // 0x1983a0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1983a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1983a4:
    // 0x1983a4: 0x0  nop
    ctx->pc = 0x1983a4u;
    // NOP
label_1983a8:
    // 0x1983a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1983a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1983ac:
    // 0x1983ac: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x1983acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_1983b0:
    // 0x1983b0: 0x320f809  jalr        $t9
label_1983b4:
    if (ctx->pc == 0x1983B4u) {
        ctx->pc = 0x1983B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983B0u;
        // 0x1983b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983B8u;
        goto label_1983b8;
    }
    ctx->pc = 0x1983B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1983B8u);
        ctx->pc = 0x1983B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983B0u;
        // 0x1983b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1983B0u, 0x1983B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1983B8u;
label_1983b8:
    // 0x1983b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1983b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1983bc:
    // 0x1983bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1983bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1983c0:
    // 0x1983c0: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x1983c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_1983c4:
    // 0x1983c4: 0x320f809  jalr        $t9
label_1983c8:
    if (ctx->pc == 0x1983C8u) {
        ctx->pc = 0x1983C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983C4u;
        // 0x1983c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983CCu;
        goto label_1983cc;
    }
    ctx->pc = 0x1983C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1983CCu);
        ctx->pc = 0x1983C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983C4u;
        // 0x1983c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1983C4u, 0x1983CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1983CCu;
label_1983cc:
    // 0x1983cc: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x1983ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1983d0:
    // 0x1983d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1983d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1983d4:
    // 0x1983d4: 0x0  nop
    ctx->pc = 0x1983d4u;
    // NOP
label_1983d8:
    // 0x1983d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1983d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1983dc:
    // 0x1983dc: 0x0  nop
    ctx->pc = 0x1983dcu;
    // NOP
label_1983e0:
    // 0x1983e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1983e4:
    if (ctx->pc == 0x1983E4u) {
        ctx->pc = 0x1983E8u;
        goto label_1983e8;
    }
    ctx->pc = 0x1983E0u;
    {
        const bool branch_taken_0x1983e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1983e0) {
            ctx->pc = 0x1983FCu;
            goto label_1983fc;
        }
    }
    ctx->pc = 0x1983E8u;
label_1983e8:
    // 0x1983e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1983e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1983ec:
    // 0x1983ec: 0xc064c0c  jal         func_193030
label_1983f0:
    if (ctx->pc == 0x1983F0u) {
        ctx->pc = 0x1983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983ECu;
        // 0x1983f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983F4u;
        goto label_1983f4;
    }
    ctx->pc = 0x1983ECu;
    SET_GPR_U32(ctx, 31, 0x1983F4u);
    ctx->pc = 0x1983F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1983ECu;
    // 0x1983f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x1983ECu, 0x1983F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983F4u;
label_1983f4:
    // 0x1983f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1983f8:
    if (ctx->pc == 0x1983F8u) {
        ctx->pc = 0x1983F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983F4u;
        // 0x1983f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983FCu;
        goto label_1983fc;
    }
    ctx->pc = 0x1983F4u;
    {
        const bool branch_taken_0x1983f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983F4u;
        // 0x1983f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983f4) {
            ctx->pc = 0x198420u;
            goto label_198420;
        }
    }
    ctx->pc = 0x1983FCu;
label_1983fc:
    // 0x1983fc: 0x0  nop
    ctx->pc = 0x1983fcu;
    // NOP
label_198400:
    // 0x198400: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_198404:
    if (ctx->pc == 0x198404u) {
        ctx->pc = 0x198408u;
        goto label_198408;
    }
    ctx->pc = 0x198400u;
    {
        const bool branch_taken_0x198400 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x198400) {
            ctx->pc = 0x198420u;
            goto label_198420;
        }
    }
    ctx->pc = 0x198408u;
label_198408:
    // 0x198408: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x198408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19840c:
    // 0x19840c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19840cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198410:
    // 0x198410: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x198410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_198414:
    // 0x198414: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x198414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_198418:
    // 0x198418: 0xa06401d3  sb          $a0, 0x1D3($v1)
    ctx->pc = 0x198418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 4));
label_19841c:
    // 0x19841c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19841cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_198420:
    // 0x198420: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x198420u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_198424:
    // 0x198424: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x198424u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_198428:
    // 0x198428: 0x8ea30678  lw          $v1, 0x678($s5)
    ctx->pc = 0x198428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
label_19842c:
    // 0x19842c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x19842cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_198430:
    // 0x198430: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
label_198434:
    if (ctx->pc == 0x198434u) {
        ctx->pc = 0x198434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198430u;
        // 0x198434: 0x2b61821  addu        $v1, $s5, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198438u;
        goto label_198438;
    }
    ctx->pc = 0x198430u;
    {
        const bool branch_taken_0x198430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198430u;
        // 0x198434: 0x2b61821  addu        $v1, $s5, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198430) {
            ctx->pc = 0x198264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198264;
        }
    }
    ctx->pc = 0x198438u;
label_198438:
    // 0x198438: 0x1000000a  b           . + 4 + (0xA << 2)
label_19843c:
    if (ctx->pc == 0x19843Cu) {
        ctx->pc = 0x198440u;
        goto label_198440;
    }
    ctx->pc = 0x198438u;
    {
        const bool branch_taken_0x198438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198438) {
            ctx->pc = 0x198464u;
            goto label_198464;
        }
    }
    ctx->pc = 0x198440u;
label_198440:
    // 0x198440: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_198444:
    if (ctx->pc == 0x198444u) {
        ctx->pc = 0x198448u;
        goto label_198448;
    }
    ctx->pc = 0x198440u;
    {
        const bool branch_taken_0x198440 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x198440) {
            ctx->pc = 0x19847Cu;
            goto label_19847c;
        }
    }
    ctx->pc = 0x198448u;
label_198448:
    // 0x198448: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_19844c:
    // 0x19844c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198450:
    // 0x198450: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x198450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_198454:
    // 0x198454: 0x320f809  jalr        $t9
label_198458:
    if (ctx->pc == 0x198458u) {
        ctx->pc = 0x198458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198454u;
        // 0x198458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19845Cu;
        goto label_19845c;
    }
    ctx->pc = 0x198454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19845Cu);
        ctx->pc = 0x198458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198454u;
        // 0x198458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198454u, 0x19845Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19845Cu;
label_19845c:
    // 0x19845c: 0x10000008  b           . + 4 + (0x8 << 2)
label_198460:
    if (ctx->pc == 0x198460u) {
        ctx->pc = 0x198460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19845Cu;
        // 0x198460: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198464u;
        goto label_198464;
    }
    ctx->pc = 0x19845Cu;
    {
        const bool branch_taken_0x19845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19845Cu;
        // 0x198460: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19845c) {
            ctx->pc = 0x198480u;
            goto label_198480;
        }
    }
    ctx->pc = 0x198464u;
label_198464:
    // 0x198464: 0x8ea30320  lw          $v1, 0x320($s5)
    ctx->pc = 0x198464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
label_198468:
    // 0x198468: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_19846c:
    if (ctx->pc == 0x19846Cu) {
        ctx->pc = 0x198470u;
        goto label_198470;
    }
    ctx->pc = 0x198468u;
    {
        const bool branch_taken_0x198468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198468) {
            ctx->pc = 0x19847Cu;
            goto label_19847c;
        }
    }
    ctx->pc = 0x198470u;
label_198470:
    // 0x198470: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x198470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_198474:
    // 0x198474: 0xc063e08  jal         func_18F820
label_198478:
    if (ctx->pc == 0x198478u) {
        ctx->pc = 0x198478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198474u;
        // 0x198478: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19847Cu;
        goto label_19847c;
    }
    ctx->pc = 0x198474u;
    SET_GPR_U32(ctx, 31, 0x19847Cu);
    ctx->pc = 0x198478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198474u;
    // 0x198478: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x198474u, 0x19847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19847Cu;
label_19847c:
    // 0x19847c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19847cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_198480:
    // 0x198480: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x198480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_198484:
    // 0x198484: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x198484u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_198488:
    // 0x198488: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x198488u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19848c:
    // 0x19848c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x19848cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_198490:
    // 0x198490: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x198490u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_198494:
    // 0x198494: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x198494u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_198498:
    // 0x198498: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x198498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19849c:
    // 0x19849c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19849cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1984a0:
    // 0x1984a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1984a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1984a4:
    // 0x1984a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1984a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1984a8:
    // 0x1984a8: 0x3e00008  jr          $ra
label_1984ac:
    if (ctx->pc == 0x1984ACu) {
        ctx->pc = 0x1984ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984A8u;
        // 0x1984ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1984B0u;
        goto label_fallthrough_0x1984a8;
    }
    ctx->pc = 0x1984A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1984ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984A8u;
        // 0x1984ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1984A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1984a8:
    ctx->pc = 0x1984B0u;
}
