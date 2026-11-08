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

// Function: FUN_001aff10
// Address: 0x1aff10 - 0x1b0544
void FUN_001aff10_0x1aff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aff10_0x1aff10");
#endif

    switch (ctx->pc) {
        case 0x1aff10u: goto label_1aff10;
        case 0x1aff14u: goto label_1aff14;
        case 0x1aff18u: goto label_1aff18;
        case 0x1aff1cu: goto label_1aff1c;
        case 0x1aff20u: goto label_1aff20;
        case 0x1aff24u: goto label_1aff24;
        case 0x1aff28u: goto label_1aff28;
        case 0x1aff2cu: goto label_1aff2c;
        case 0x1aff30u: goto label_1aff30;
        case 0x1aff34u: goto label_1aff34;
        case 0x1aff38u: goto label_1aff38;
        case 0x1aff3cu: goto label_1aff3c;
        case 0x1aff40u: goto label_1aff40;
        case 0x1aff44u: goto label_1aff44;
        case 0x1aff48u: goto label_1aff48;
        case 0x1aff4cu: goto label_1aff4c;
        case 0x1aff50u: goto label_1aff50;
        case 0x1aff54u: goto label_1aff54;
        case 0x1aff58u: goto label_1aff58;
        case 0x1aff5cu: goto label_1aff5c;
        case 0x1aff60u: goto label_1aff60;
        case 0x1aff64u: goto label_1aff64;
        case 0x1aff68u: goto label_1aff68;
        case 0x1aff6cu: goto label_1aff6c;
        case 0x1aff70u: goto label_1aff70;
        case 0x1aff74u: goto label_1aff74;
        case 0x1aff78u: goto label_1aff78;
        case 0x1aff7cu: goto label_1aff7c;
        case 0x1aff80u: goto label_1aff80;
        case 0x1aff84u: goto label_1aff84;
        case 0x1aff88u: goto label_1aff88;
        case 0x1aff8cu: goto label_1aff8c;
        case 0x1aff90u: goto label_1aff90;
        case 0x1aff94u: goto label_1aff94;
        case 0x1aff98u: goto label_1aff98;
        case 0x1aff9cu: goto label_1aff9c;
        case 0x1affa0u: goto label_1affa0;
        case 0x1affa4u: goto label_1affa4;
        case 0x1affa8u: goto label_1affa8;
        case 0x1affacu: goto label_1affac;
        case 0x1affb0u: goto label_1affb0;
        case 0x1affb4u: goto label_1affb4;
        case 0x1affb8u: goto label_1affb8;
        case 0x1affbcu: goto label_1affbc;
        case 0x1affc0u: goto label_1affc0;
        case 0x1affc4u: goto label_1affc4;
        case 0x1affc8u: goto label_1affc8;
        case 0x1affccu: goto label_1affcc;
        case 0x1affd0u: goto label_1affd0;
        case 0x1affd4u: goto label_1affd4;
        case 0x1affd8u: goto label_1affd8;
        case 0x1affdcu: goto label_1affdc;
        case 0x1affe0u: goto label_1affe0;
        case 0x1affe4u: goto label_1affe4;
        case 0x1affe8u: goto label_1affe8;
        case 0x1affecu: goto label_1affec;
        case 0x1afff0u: goto label_1afff0;
        case 0x1afff4u: goto label_1afff4;
        case 0x1afff8u: goto label_1afff8;
        case 0x1afffcu: goto label_1afffc;
        case 0x1b0000u: goto label_1b0000;
        case 0x1b0004u: goto label_1b0004;
        case 0x1b0008u: goto label_1b0008;
        case 0x1b000cu: goto label_1b000c;
        case 0x1b0010u: goto label_1b0010;
        case 0x1b0014u: goto label_1b0014;
        case 0x1b0018u: goto label_1b0018;
        case 0x1b001cu: goto label_1b001c;
        case 0x1b0020u: goto label_1b0020;
        case 0x1b0024u: goto label_1b0024;
        case 0x1b0028u: goto label_1b0028;
        case 0x1b002cu: goto label_1b002c;
        case 0x1b0030u: goto label_1b0030;
        case 0x1b0034u: goto label_1b0034;
        case 0x1b0038u: goto label_1b0038;
        case 0x1b003cu: goto label_1b003c;
        case 0x1b0040u: goto label_1b0040;
        case 0x1b0044u: goto label_1b0044;
        case 0x1b0048u: goto label_1b0048;
        case 0x1b004cu: goto label_1b004c;
        case 0x1b0050u: goto label_1b0050;
        case 0x1b0054u: goto label_1b0054;
        case 0x1b0058u: goto label_1b0058;
        case 0x1b005cu: goto label_1b005c;
        case 0x1b0060u: goto label_1b0060;
        case 0x1b0064u: goto label_1b0064;
        case 0x1b0068u: goto label_1b0068;
        case 0x1b006cu: goto label_1b006c;
        case 0x1b0070u: goto label_1b0070;
        case 0x1b0074u: goto label_1b0074;
        case 0x1b0078u: goto label_1b0078;
        case 0x1b007cu: goto label_1b007c;
        case 0x1b0080u: goto label_1b0080;
        case 0x1b0084u: goto label_1b0084;
        case 0x1b0088u: goto label_1b0088;
        case 0x1b008cu: goto label_1b008c;
        case 0x1b0090u: goto label_1b0090;
        case 0x1b0094u: goto label_1b0094;
        case 0x1b0098u: goto label_1b0098;
        case 0x1b009cu: goto label_1b009c;
        case 0x1b00a0u: goto label_1b00a0;
        case 0x1b00a4u: goto label_1b00a4;
        case 0x1b00a8u: goto label_1b00a8;
        case 0x1b00acu: goto label_1b00ac;
        case 0x1b00b0u: goto label_1b00b0;
        case 0x1b00b4u: goto label_1b00b4;
        case 0x1b00b8u: goto label_1b00b8;
        case 0x1b00bcu: goto label_1b00bc;
        case 0x1b00c0u: goto label_1b00c0;
        case 0x1b00c4u: goto label_1b00c4;
        case 0x1b00c8u: goto label_1b00c8;
        case 0x1b00ccu: goto label_1b00cc;
        case 0x1b00d0u: goto label_1b00d0;
        case 0x1b00d4u: goto label_1b00d4;
        case 0x1b00d8u: goto label_1b00d8;
        case 0x1b00dcu: goto label_1b00dc;
        case 0x1b00e0u: goto label_1b00e0;
        case 0x1b00e4u: goto label_1b00e4;
        case 0x1b00e8u: goto label_1b00e8;
        case 0x1b00ecu: goto label_1b00ec;
        case 0x1b00f0u: goto label_1b00f0;
        case 0x1b00f4u: goto label_1b00f4;
        case 0x1b00f8u: goto label_1b00f8;
        case 0x1b00fcu: goto label_1b00fc;
        case 0x1b0100u: goto label_1b0100;
        case 0x1b0104u: goto label_1b0104;
        case 0x1b0108u: goto label_1b0108;
        case 0x1b010cu: goto label_1b010c;
        case 0x1b0110u: goto label_1b0110;
        case 0x1b0114u: goto label_1b0114;
        case 0x1b0118u: goto label_1b0118;
        case 0x1b011cu: goto label_1b011c;
        case 0x1b0120u: goto label_1b0120;
        case 0x1b0124u: goto label_1b0124;
        case 0x1b0128u: goto label_1b0128;
        case 0x1b012cu: goto label_1b012c;
        case 0x1b0130u: goto label_1b0130;
        case 0x1b0134u: goto label_1b0134;
        case 0x1b0138u: goto label_1b0138;
        case 0x1b013cu: goto label_1b013c;
        case 0x1b0140u: goto label_1b0140;
        case 0x1b0144u: goto label_1b0144;
        case 0x1b0148u: goto label_1b0148;
        case 0x1b014cu: goto label_1b014c;
        case 0x1b0150u: goto label_1b0150;
        case 0x1b0154u: goto label_1b0154;
        case 0x1b0158u: goto label_1b0158;
        case 0x1b015cu: goto label_1b015c;
        case 0x1b0160u: goto label_1b0160;
        case 0x1b0164u: goto label_1b0164;
        case 0x1b0168u: goto label_1b0168;
        case 0x1b016cu: goto label_1b016c;
        case 0x1b0170u: goto label_1b0170;
        case 0x1b0174u: goto label_1b0174;
        case 0x1b0178u: goto label_1b0178;
        case 0x1b017cu: goto label_1b017c;
        case 0x1b0180u: goto label_1b0180;
        case 0x1b0184u: goto label_1b0184;
        case 0x1b0188u: goto label_1b0188;
        case 0x1b018cu: goto label_1b018c;
        case 0x1b0190u: goto label_1b0190;
        case 0x1b0194u: goto label_1b0194;
        case 0x1b0198u: goto label_1b0198;
        case 0x1b019cu: goto label_1b019c;
        case 0x1b01a0u: goto label_1b01a0;
        case 0x1b01a4u: goto label_1b01a4;
        case 0x1b01a8u: goto label_1b01a8;
        case 0x1b01acu: goto label_1b01ac;
        case 0x1b01b0u: goto label_1b01b0;
        case 0x1b01b4u: goto label_1b01b4;
        case 0x1b01b8u: goto label_1b01b8;
        case 0x1b01bcu: goto label_1b01bc;
        case 0x1b01c0u: goto label_1b01c0;
        case 0x1b01c4u: goto label_1b01c4;
        case 0x1b01c8u: goto label_1b01c8;
        case 0x1b01ccu: goto label_1b01cc;
        case 0x1b01d0u: goto label_1b01d0;
        case 0x1b01d4u: goto label_1b01d4;
        case 0x1b01d8u: goto label_1b01d8;
        case 0x1b01dcu: goto label_1b01dc;
        case 0x1b01e0u: goto label_1b01e0;
        case 0x1b01e4u: goto label_1b01e4;
        case 0x1b01e8u: goto label_1b01e8;
        case 0x1b01ecu: goto label_1b01ec;
        case 0x1b01f0u: goto label_1b01f0;
        case 0x1b01f4u: goto label_1b01f4;
        case 0x1b01f8u: goto label_1b01f8;
        case 0x1b01fcu: goto label_1b01fc;
        case 0x1b0200u: goto label_1b0200;
        case 0x1b0204u: goto label_1b0204;
        case 0x1b0208u: goto label_1b0208;
        case 0x1b020cu: goto label_1b020c;
        case 0x1b0210u: goto label_1b0210;
        case 0x1b0214u: goto label_1b0214;
        case 0x1b0218u: goto label_1b0218;
        case 0x1b021cu: goto label_1b021c;
        case 0x1b0220u: goto label_1b0220;
        case 0x1b0224u: goto label_1b0224;
        case 0x1b0228u: goto label_1b0228;
        case 0x1b022cu: goto label_1b022c;
        case 0x1b0230u: goto label_1b0230;
        case 0x1b0234u: goto label_1b0234;
        case 0x1b0238u: goto label_1b0238;
        case 0x1b023cu: goto label_1b023c;
        case 0x1b0240u: goto label_1b0240;
        case 0x1b0244u: goto label_1b0244;
        case 0x1b0248u: goto label_1b0248;
        case 0x1b024cu: goto label_1b024c;
        case 0x1b0250u: goto label_1b0250;
        case 0x1b0254u: goto label_1b0254;
        case 0x1b0258u: goto label_1b0258;
        case 0x1b025cu: goto label_1b025c;
        case 0x1b0260u: goto label_1b0260;
        case 0x1b0264u: goto label_1b0264;
        case 0x1b0268u: goto label_1b0268;
        case 0x1b026cu: goto label_1b026c;
        case 0x1b0270u: goto label_1b0270;
        case 0x1b0274u: goto label_1b0274;
        case 0x1b0278u: goto label_1b0278;
        case 0x1b027cu: goto label_1b027c;
        case 0x1b0280u: goto label_1b0280;
        case 0x1b0284u: goto label_1b0284;
        case 0x1b0288u: goto label_1b0288;
        case 0x1b028cu: goto label_1b028c;
        case 0x1b0290u: goto label_1b0290;
        case 0x1b0294u: goto label_1b0294;
        case 0x1b0298u: goto label_1b0298;
        case 0x1b029cu: goto label_1b029c;
        case 0x1b02a0u: goto label_1b02a0;
        case 0x1b02a4u: goto label_1b02a4;
        case 0x1b02a8u: goto label_1b02a8;
        case 0x1b02acu: goto label_1b02ac;
        case 0x1b02b0u: goto label_1b02b0;
        case 0x1b02b4u: goto label_1b02b4;
        case 0x1b02b8u: goto label_1b02b8;
        case 0x1b02bcu: goto label_1b02bc;
        case 0x1b02c0u: goto label_1b02c0;
        case 0x1b02c4u: goto label_1b02c4;
        case 0x1b02c8u: goto label_1b02c8;
        case 0x1b02ccu: goto label_1b02cc;
        case 0x1b02d0u: goto label_1b02d0;
        case 0x1b02d4u: goto label_1b02d4;
        case 0x1b02d8u: goto label_1b02d8;
        case 0x1b02dcu: goto label_1b02dc;
        case 0x1b02e0u: goto label_1b02e0;
        case 0x1b02e4u: goto label_1b02e4;
        case 0x1b02e8u: goto label_1b02e8;
        case 0x1b02ecu: goto label_1b02ec;
        case 0x1b02f0u: goto label_1b02f0;
        case 0x1b02f4u: goto label_1b02f4;
        case 0x1b02f8u: goto label_1b02f8;
        case 0x1b02fcu: goto label_1b02fc;
        case 0x1b0300u: goto label_1b0300;
        case 0x1b0304u: goto label_1b0304;
        case 0x1b0308u: goto label_1b0308;
        case 0x1b030cu: goto label_1b030c;
        case 0x1b0310u: goto label_1b0310;
        case 0x1b0314u: goto label_1b0314;
        case 0x1b0318u: goto label_1b0318;
        case 0x1b031cu: goto label_1b031c;
        case 0x1b0320u: goto label_1b0320;
        case 0x1b0324u: goto label_1b0324;
        case 0x1b0328u: goto label_1b0328;
        case 0x1b032cu: goto label_1b032c;
        case 0x1b0330u: goto label_1b0330;
        case 0x1b0334u: goto label_1b0334;
        case 0x1b0338u: goto label_1b0338;
        case 0x1b033cu: goto label_1b033c;
        case 0x1b0340u: goto label_1b0340;
        case 0x1b0344u: goto label_1b0344;
        case 0x1b0348u: goto label_1b0348;
        case 0x1b034cu: goto label_1b034c;
        case 0x1b0350u: goto label_1b0350;
        case 0x1b0354u: goto label_1b0354;
        case 0x1b0358u: goto label_1b0358;
        case 0x1b035cu: goto label_1b035c;
        case 0x1b0360u: goto label_1b0360;
        case 0x1b0364u: goto label_1b0364;
        case 0x1b0368u: goto label_1b0368;
        case 0x1b036cu: goto label_1b036c;
        case 0x1b0370u: goto label_1b0370;
        case 0x1b0374u: goto label_1b0374;
        case 0x1b0378u: goto label_1b0378;
        case 0x1b037cu: goto label_1b037c;
        case 0x1b0380u: goto label_1b0380;
        case 0x1b0384u: goto label_1b0384;
        case 0x1b0388u: goto label_1b0388;
        case 0x1b038cu: goto label_1b038c;
        case 0x1b0390u: goto label_1b0390;
        case 0x1b0394u: goto label_1b0394;
        case 0x1b0398u: goto label_1b0398;
        case 0x1b039cu: goto label_1b039c;
        case 0x1b03a0u: goto label_1b03a0;
        case 0x1b03a4u: goto label_1b03a4;
        case 0x1b03a8u: goto label_1b03a8;
        case 0x1b03acu: goto label_1b03ac;
        case 0x1b03b0u: goto label_1b03b0;
        case 0x1b03b4u: goto label_1b03b4;
        case 0x1b03b8u: goto label_1b03b8;
        case 0x1b03bcu: goto label_1b03bc;
        case 0x1b03c0u: goto label_1b03c0;
        case 0x1b03c4u: goto label_1b03c4;
        case 0x1b03c8u: goto label_1b03c8;
        case 0x1b03ccu: goto label_1b03cc;
        case 0x1b03d0u: goto label_1b03d0;
        case 0x1b03d4u: goto label_1b03d4;
        case 0x1b03d8u: goto label_1b03d8;
        case 0x1b03dcu: goto label_1b03dc;
        case 0x1b03e0u: goto label_1b03e0;
        case 0x1b03e4u: goto label_1b03e4;
        case 0x1b03e8u: goto label_1b03e8;
        case 0x1b03ecu: goto label_1b03ec;
        case 0x1b03f0u: goto label_1b03f0;
        case 0x1b03f4u: goto label_1b03f4;
        case 0x1b03f8u: goto label_1b03f8;
        case 0x1b03fcu: goto label_1b03fc;
        case 0x1b0400u: goto label_1b0400;
        case 0x1b0404u: goto label_1b0404;
        case 0x1b0408u: goto label_1b0408;
        case 0x1b040cu: goto label_1b040c;
        case 0x1b0410u: goto label_1b0410;
        case 0x1b0414u: goto label_1b0414;
        case 0x1b0418u: goto label_1b0418;
        case 0x1b041cu: goto label_1b041c;
        case 0x1b0420u: goto label_1b0420;
        case 0x1b0424u: goto label_1b0424;
        case 0x1b0428u: goto label_1b0428;
        case 0x1b042cu: goto label_1b042c;
        case 0x1b0430u: goto label_1b0430;
        case 0x1b0434u: goto label_1b0434;
        case 0x1b0438u: goto label_1b0438;
        case 0x1b043cu: goto label_1b043c;
        case 0x1b0440u: goto label_1b0440;
        case 0x1b0444u: goto label_1b0444;
        case 0x1b0448u: goto label_1b0448;
        case 0x1b044cu: goto label_1b044c;
        case 0x1b0450u: goto label_1b0450;
        case 0x1b0454u: goto label_1b0454;
        case 0x1b0458u: goto label_1b0458;
        case 0x1b045cu: goto label_1b045c;
        case 0x1b0460u: goto label_1b0460;
        case 0x1b0464u: goto label_1b0464;
        case 0x1b0468u: goto label_1b0468;
        case 0x1b046cu: goto label_1b046c;
        case 0x1b0470u: goto label_1b0470;
        case 0x1b0474u: goto label_1b0474;
        case 0x1b0478u: goto label_1b0478;
        case 0x1b047cu: goto label_1b047c;
        case 0x1b0480u: goto label_1b0480;
        case 0x1b0484u: goto label_1b0484;
        case 0x1b0488u: goto label_1b0488;
        case 0x1b048cu: goto label_1b048c;
        case 0x1b0490u: goto label_1b0490;
        case 0x1b0494u: goto label_1b0494;
        case 0x1b0498u: goto label_1b0498;
        case 0x1b049cu: goto label_1b049c;
        case 0x1b04a0u: goto label_1b04a0;
        case 0x1b04a4u: goto label_1b04a4;
        case 0x1b04a8u: goto label_1b04a8;
        case 0x1b04acu: goto label_1b04ac;
        case 0x1b04b0u: goto label_1b04b0;
        case 0x1b04b4u: goto label_1b04b4;
        case 0x1b04b8u: goto label_1b04b8;
        case 0x1b04bcu: goto label_1b04bc;
        case 0x1b04c0u: goto label_1b04c0;
        case 0x1b04c4u: goto label_1b04c4;
        case 0x1b04c8u: goto label_1b04c8;
        case 0x1b04ccu: goto label_1b04cc;
        case 0x1b04d0u: goto label_1b04d0;
        case 0x1b04d4u: goto label_1b04d4;
        case 0x1b04d8u: goto label_1b04d8;
        case 0x1b04dcu: goto label_1b04dc;
        case 0x1b04e0u: goto label_1b04e0;
        case 0x1b04e4u: goto label_1b04e4;
        case 0x1b04e8u: goto label_1b04e8;
        case 0x1b04ecu: goto label_1b04ec;
        case 0x1b04f0u: goto label_1b04f0;
        case 0x1b04f4u: goto label_1b04f4;
        case 0x1b04f8u: goto label_1b04f8;
        case 0x1b04fcu: goto label_1b04fc;
        case 0x1b0500u: goto label_1b0500;
        case 0x1b0504u: goto label_1b0504;
        case 0x1b0508u: goto label_1b0508;
        case 0x1b050cu: goto label_1b050c;
        case 0x1b0510u: goto label_1b0510;
        case 0x1b0514u: goto label_1b0514;
        case 0x1b0518u: goto label_1b0518;
        case 0x1b051cu: goto label_1b051c;
        case 0x1b0520u: goto label_1b0520;
        case 0x1b0524u: goto label_1b0524;
        case 0x1b0528u: goto label_1b0528;
        case 0x1b052cu: goto label_1b052c;
        case 0x1b0530u: goto label_1b0530;
        case 0x1b0534u: goto label_1b0534;
        case 0x1b0538u: goto label_1b0538;
        case 0x1b053cu: goto label_1b053c;
        case 0x1b0540u: goto label_1b0540;
        default: break;
    }

    ctx->pc = 0x1aff10u;

label_1aff10:
    // 0x1aff10: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1aff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1aff14:
    // 0x1aff14: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1aff14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1aff18:
    // 0x1aff18: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1aff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1aff1c:
    // 0x1aff1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1aff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1aff20:
    // 0x1aff20: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1aff20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1aff24:
    // 0x1aff24: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1aff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1aff28:
    // 0x1aff28: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1aff28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1aff2c:
    // 0x1aff2c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1aff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1aff30:
    // 0x1aff30: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1aff30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1aff34:
    // 0x1aff34: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1aff34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1aff38:
    // 0x1aff38: 0x2b9c0  sll         $s7, $v0, 7
    ctx->pc = 0x1aff38u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1aff3c:
    // 0x1aff3c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1aff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1aff40:
    // 0x1aff40: 0x2a980  sll         $s5, $v0, 6
    ctx->pc = 0x1aff40u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1aff44:
    // 0x1aff44: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1aff44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1aff48:
    // 0x1aff48: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1aff48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aff4c:
    // 0x1aff4c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1aff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1aff50:
    // 0x1aff50: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1aff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1aff54:
    // 0x1aff54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1aff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1aff58:
    // 0x1aff58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1aff5c:
    // 0x1aff5c: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x1aff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
label_1aff60:
    // 0x1aff60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1aff60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1aff64:
    // 0x1aff64: 0xc061fa8  jal         func_187EA0
label_1aff68:
    if (ctx->pc == 0x1AFF68u) {
        ctx->pc = 0x1AFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF64u;
        // 0x1aff68: 0x24a50c38  addiu       $a1, $a1, 0xC38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF6Cu;
        goto label_1aff6c;
    }
    ctx->pc = 0x1AFF64u;
    SET_GPR_U32(ctx, 31, 0x1AFF6Cu);
    ctx->pc = 0x1AFF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF64u;
    // 0x1aff68: 0x24a50c38  addiu       $a1, $a1, 0xC38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1AFF64u, 0x1AFF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF6Cu;
label_1aff6c:
    // 0x1aff6c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1aff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_1aff70:
    // 0x1aff70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aff74:
    // 0x1aff74: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x1aff74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1aff78:
    // 0x1aff78: 0x8e900118  lw          $s0, 0x118($s4)
    ctx->pc = 0x1aff78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1aff7c:
    // 0x1aff7c: 0x8e92011c  lw          $s2, 0x11C($s4)
    ctx->pc = 0x1aff7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1aff80:
    // 0x1aff80: 0x92230063  lbu         $v1, 0x63($s1)
    ctx->pc = 0x1aff80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
label_1aff84:
    // 0x1aff84: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x1aff84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
label_1aff88:
    // 0x1aff88: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1aff88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
label_1aff8c:
    // 0x1aff8c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1aff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_1aff90:
    // 0x1aff90: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1aff90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
label_1aff94:
    // 0x1aff94: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1aff94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
label_1aff98:
    // 0x1aff98: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1aff98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_1aff9c:
    // 0x1aff9c: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1aff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_1affa0:
    // 0x1affa0: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1affa0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1affa4:
    // 0x1affa4: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1affa8:
    if (ctx->pc == 0x1AFFA8u) {
        ctx->pc = 0x1AFFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFA4u;
        // 0x1affa8: 0x2b100  sll         $s6, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFFACu;
        goto label_1affac;
    }
    ctx->pc = 0x1AFFA4u;
    {
        const bool branch_taken_0x1affa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFA4u;
        // 0x1affa8: 0x2b100  sll         $s6, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affa4) {
            ctx->pc = 0x1AFFF8u;
            goto label_1afff8;
        }
    }
    ctx->pc = 0x1AFFACu;
label_1affac:
    // 0x1affac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1affacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1affb0:
    // 0x1affb0: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1affb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1affb4:
    // 0x1affb4: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1affb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1affb8:
    // 0x1affb8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1affb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1affbc:
    // 0x1affbc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1affbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1affc0:
    // 0x1affc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1affc4:
    if (ctx->pc == 0x1AFFC4u) {
        ctx->pc = 0x1AFFC8u;
        goto label_1affc8;
    }
    ctx->pc = 0x1AFFC0u;
    {
        const bool branch_taken_0x1affc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1affc0) {
            ctx->pc = 0x1AFFD4u;
            goto label_1affd4;
        }
    }
    ctx->pc = 0x1AFFC8u;
label_1affc8:
    // 0x1affc8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1affc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1affcc:
    // 0x1affcc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1affccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1affd0:
    // 0x1affd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1affd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1affd4:
    // 0x1affd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1affd8:
    if (ctx->pc == 0x1AFFD8u) {
        ctx->pc = 0x1AFFDCu;
        goto label_1affdc;
    }
    ctx->pc = 0x1AFFD4u;
    {
        const bool branch_taken_0x1affd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1affd4) {
            ctx->pc = 0x1AFFE8u;
            goto label_1affe8;
        }
    }
    ctx->pc = 0x1AFFDCu;
label_1affdc:
    // 0x1affdc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1affdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1affe0:
    // 0x1affe0: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1affe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_1affe4:
    // 0x1affe4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1affe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1affe8:
    // 0x1affe8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1affec:
    if (ctx->pc == 0x1AFFECu) {
        ctx->pc = 0x1AFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFE8u;
        // 0x1affec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFFF0u;
        goto label_1afff0;
    }
    ctx->pc = 0x1AFFE8u;
    {
        const bool branch_taken_0x1affe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFE8u;
        // 0x1affec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affe8) {
            ctx->pc = 0x1AFFFCu;
            goto label_1afffc;
        }
    }
    ctx->pc = 0x1AFFF0u;
label_1afff0:
    // 0x1afff0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1afff4:
    if (ctx->pc == 0x1AFFF4u) {
        ctx->pc = 0x1AFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFF0u;
        // 0x1afff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFFF8u;
        goto label_1afff8;
    }
    ctx->pc = 0x1AFFF0u;
    {
        const bool branch_taken_0x1afff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFF0u;
        // 0x1afff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afff0) {
            ctx->pc = 0x1AFFFCu;
            goto label_1afffc;
        }
    }
    ctx->pc = 0x1AFFF8u;
label_1afff8:
    // 0x1afff8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1afff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afffc:
    // 0x1afffc: 0xc06d130  jal         func_1B44C0
label_1b0000:
    if (ctx->pc == 0x1B0000u) {
        ctx->pc = 0x1B0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFFCu;
        // 0x1b0000: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0004u;
        goto label_1b0004;
    }
    ctx->pc = 0x1AFFFCu;
    SET_GPR_U32(ctx, 31, 0x1B0004u);
    ctx->pc = 0x1B0000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFFFCu;
    // 0x1b0000: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1AFFFCu, 0x1B0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0004u;
label_1b0004:
    // 0x1b0004: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1b0008:
    if (ctx->pc == 0x1B0008u) {
        ctx->pc = 0x1B000Cu;
        goto label_1b000c;
    }
    ctx->pc = 0x1B0004u;
    {
        const bool branch_taken_0x1b0004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0004) {
            ctx->pc = 0x1B0058u;
            goto label_1b0058;
        }
    }
    ctx->pc = 0x1B000Cu;
label_1b000c:
    // 0x1b000c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0010:
    // 0x1b0010: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0014:
    // 0x1b0014: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0018:
    // 0x1b0018: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b001c:
    // 0x1b001c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b001cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0020:
    // 0x1b0020: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0024:
    if (ctx->pc == 0x1B0024u) {
        ctx->pc = 0x1B0028u;
        goto label_1b0028;
    }
    ctx->pc = 0x1B0020u;
    {
        const bool branch_taken_0x1b0020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0020) {
            ctx->pc = 0x1B0034u;
            goto label_1b0034;
        }
    }
    ctx->pc = 0x1B0028u;
label_1b0028:
    // 0x1b0028: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1b002c:
    // 0x1b002c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b002cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0030:
    // 0x1b0030: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0034:
    // 0x1b0034: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0038:
    if (ctx->pc == 0x1B0038u) {
        ctx->pc = 0x1B003Cu;
        goto label_1b003c;
    }
    ctx->pc = 0x1B0034u;
    {
        const bool branch_taken_0x1b0034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0034) {
            ctx->pc = 0x1B0048u;
            goto label_1b0048;
        }
    }
    ctx->pc = 0x1B003Cu;
label_1b003c:
    // 0x1b003c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b0040:
    // 0x1b0040: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1b0040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_1b0044:
    // 0x1b0044: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0048:
    // 0x1b0048: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b004c:
    if (ctx->pc == 0x1B004Cu) {
        ctx->pc = 0x1B0050u;
        goto label_1b0050;
    }
    ctx->pc = 0x1B0048u;
    {
        const bool branch_taken_0x1b0048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0048) {
            ctx->pc = 0x1B0058u;
            goto label_1b0058;
        }
    }
    ctx->pc = 0x1B0050u;
label_1b0050:
    // 0x1b0050: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b0054:
    if (ctx->pc == 0x1B0054u) {
        ctx->pc = 0x1B0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0050u;
        // 0x1b0054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0058u;
        goto label_1b0058;
    }
    ctx->pc = 0x1B0050u;
    {
        const bool branch_taken_0x1b0050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0050u;
        // 0x1b0054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0050) {
            ctx->pc = 0x1B0060u;
            goto label_1b0060;
        }
    }
    ctx->pc = 0x1B0058u;
label_1b0058:
    // 0x1b0058: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b0058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b005c:
    // 0x1b005c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0060:
    // 0x1b0060: 0xc06d14c  jal         func_1B4530
label_1b0064:
    if (ctx->pc == 0x1B0064u) {
        ctx->pc = 0x1B0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0060u;
        // 0x1b0064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0068u;
        goto label_1b0068;
    }
    ctx->pc = 0x1B0060u;
    SET_GPR_U32(ctx, 31, 0x1B0068u);
    ctx->pc = 0x1B0064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0060u;
    // 0x1b0064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0060u, 0x1B0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0068u;
label_1b0068:
    // 0x1b0068: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x1b0068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
label_1b006c:
    // 0x1b006c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b0070:
    // 0x1b0070: 0xffb60008  sd          $s6, 0x8($sp)
    ctx->pc = 0x1b0070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 22));
label_1b0074:
    // 0x1b0074: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b0078:
    // 0x1b0078: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1b0078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1b007c:
    // 0x1b007c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b007cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0080:
    // 0x1b0080: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1b0080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b0084:
    // 0x1b0084: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b0088:
    // 0x1b0088: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1b0088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b008c:
    // 0x1b008c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1b008cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b0090:
    // 0x1b0090: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b0090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b0094:
    // 0x1b0094: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b0094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0098:
    // 0x1b0098: 0xc06be8c  jal         func_1AFA30
label_1b009c:
    if (ctx->pc == 0x1B009Cu) {
        ctx->pc = 0x1B009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0098u;
        // 0x1b009c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B00A0u;
        goto label_1b00a0;
    }
    ctx->pc = 0x1B0098u;
    SET_GPR_U32(ctx, 31, 0x1B00A0u);
    ctx->pc = 0x1B009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0098u;
    // 0x1b009c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B0098u, 0x1B00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B00A0u;
label_1b00a0:
    // 0x1b00a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1b00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b00a4:
    // 0x1b00a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b00a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b00a8:
    // 0x1b00a8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1b00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1b00ac:
    // 0x1b00ac: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1b00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1b00b0:
    // 0x1b00b0: 0x8e910008  lw          $s1, 0x8($s4)
    ctx->pc = 0x1b00b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1b00b4:
    // 0x1b00b4: 0x8e900118  lw          $s0, 0x118($s4)
    ctx->pc = 0x1b00b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b00b8:
    // 0x1b00b8: 0x8e92011c  lw          $s2, 0x11C($s4)
    ctx->pc = 0x1b00b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b00bc:
    // 0x1b00bc: 0x92230063  lbu         $v1, 0x63($s1)
    ctx->pc = 0x1b00bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
label_1b00c0:
    // 0x1b00c0: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x1b00c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
label_1b00c4:
    // 0x1b00c4: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b00c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
label_1b00c8:
    // 0x1b00c8: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b00c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_1b00cc:
    // 0x1b00cc: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b00ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
label_1b00d0:
    // 0x1b00d0: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b00d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
label_1b00d4:
    // 0x1b00d4: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_1b00d8:
    // 0x1b00d8: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_1b00dc:
    // 0x1b00dc: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1b00dcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1b00e0:
    // 0x1b00e0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1b00e4:
    if (ctx->pc == 0x1B00E4u) {
        ctx->pc = 0x1B00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00E0u;
        // 0x1b00e4: 0x2b100  sll         $s6, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B00E8u;
        goto label_1b00e8;
    }
    ctx->pc = 0x1B00E0u;
    {
        const bool branch_taken_0x1b00e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00E0u;
        // 0x1b00e4: 0x2b100  sll         $s6, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00e0) {
            ctx->pc = 0x1B0134u;
            goto label_1b0134;
        }
    }
    ctx->pc = 0x1B00E8u;
label_1b00e8:
    // 0x1b00e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b00ec:
    // 0x1b00ec: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b00f0:
    // 0x1b00f0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b00f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b00f4:
    // 0x1b00f4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b00f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b00f8:
    // 0x1b00f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b00f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b00fc:
    // 0x1b00fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0100:
    if (ctx->pc == 0x1B0100u) {
        ctx->pc = 0x1B0104u;
        goto label_1b0104;
    }
    ctx->pc = 0x1B00FCu;
    {
        const bool branch_taken_0x1b00fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b00fc) {
            ctx->pc = 0x1B0110u;
            goto label_1b0110;
        }
    }
    ctx->pc = 0x1B0104u;
label_1b0104:
    // 0x1b0104: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b0104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1b0108:
    // 0x1b0108: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b010c:
    // 0x1b010c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b010cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0110:
    // 0x1b0110: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0114:
    if (ctx->pc == 0x1B0114u) {
        ctx->pc = 0x1B0118u;
        goto label_1b0118;
    }
    ctx->pc = 0x1B0110u;
    {
        const bool branch_taken_0x1b0110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0110) {
            ctx->pc = 0x1B0124u;
            goto label_1b0124;
        }
    }
    ctx->pc = 0x1B0118u;
label_1b0118:
    // 0x1b0118: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b0118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b011c:
    // 0x1b011c: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1b011cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_1b0120:
    // 0x1b0120: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0124:
    // 0x1b0124: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0128:
    if (ctx->pc == 0x1B0128u) {
        ctx->pc = 0x1B0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0124u;
        // 0x1b0128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B012Cu;
        goto label_1b012c;
    }
    ctx->pc = 0x1B0124u;
    {
        const bool branch_taken_0x1b0124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0124u;
        // 0x1b0128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0124) {
            ctx->pc = 0x1B0138u;
            goto label_1b0138;
        }
    }
    ctx->pc = 0x1B012Cu;
label_1b012c:
    // 0x1b012c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0130:
    if (ctx->pc == 0x1B0130u) {
        ctx->pc = 0x1B0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B012Cu;
        // 0x1b0130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0134u;
        goto label_1b0134;
    }
    ctx->pc = 0x1B012Cu;
    {
        const bool branch_taken_0x1b012c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B012Cu;
        // 0x1b0130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b012c) {
            ctx->pc = 0x1B0138u;
            goto label_1b0138;
        }
    }
    ctx->pc = 0x1B0134u;
label_1b0134:
    // 0x1b0134: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0138:
    // 0x1b0138: 0xc06d130  jal         func_1B44C0
label_1b013c:
    if (ctx->pc == 0x1B013Cu) {
        ctx->pc = 0x1B013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0138u;
        // 0x1b013c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0140u;
        goto label_1b0140;
    }
    ctx->pc = 0x1B0138u;
    SET_GPR_U32(ctx, 31, 0x1B0140u);
    ctx->pc = 0x1B013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0138u;
    // 0x1b013c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0138u, 0x1B0140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0140u;
label_1b0140:
    // 0x1b0140: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1b0144:
    if (ctx->pc == 0x1B0144u) {
        ctx->pc = 0x1B0148u;
        goto label_1b0148;
    }
    ctx->pc = 0x1B0140u;
    {
        const bool branch_taken_0x1b0140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0140) {
            ctx->pc = 0x1B0194u;
            goto label_1b0194;
        }
    }
    ctx->pc = 0x1B0148u;
label_1b0148:
    // 0x1b0148: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b0148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b014c:
    // 0x1b014c: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b014cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0150:
    // 0x1b0150: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0154:
    // 0x1b0154: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0158:
    // 0x1b0158: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b015c:
    // 0x1b015c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0160:
    if (ctx->pc == 0x1B0160u) {
        ctx->pc = 0x1B0164u;
        goto label_1b0164;
    }
    ctx->pc = 0x1B015Cu;
    {
        const bool branch_taken_0x1b015c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b015c) {
            ctx->pc = 0x1B0170u;
            goto label_1b0170;
        }
    }
    ctx->pc = 0x1B0164u;
label_1b0164:
    // 0x1b0164: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b0164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1b0168:
    // 0x1b0168: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b016c:
    // 0x1b016c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b016cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0170:
    // 0x1b0170: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0174:
    if (ctx->pc == 0x1B0174u) {
        ctx->pc = 0x1B0178u;
        goto label_1b0178;
    }
    ctx->pc = 0x1B0170u;
    {
        const bool branch_taken_0x1b0170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0170) {
            ctx->pc = 0x1B0184u;
            goto label_1b0184;
        }
    }
    ctx->pc = 0x1B0178u;
label_1b0178:
    // 0x1b0178: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b0178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b017c:
    // 0x1b017c: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1b017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_1b0180:
    // 0x1b0180: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0184:
    // 0x1b0184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b0188:
    if (ctx->pc == 0x1B0188u) {
        ctx->pc = 0x1B018Cu;
        goto label_1b018c;
    }
    ctx->pc = 0x1B0184u;
    {
        const bool branch_taken_0x1b0184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0184) {
            ctx->pc = 0x1B0194u;
            goto label_1b0194;
        }
    }
    ctx->pc = 0x1B018Cu;
label_1b018c:
    // 0x1b018c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b0190:
    if (ctx->pc == 0x1B0190u) {
        ctx->pc = 0x1B0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B018Cu;
        // 0x1b0190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0194u;
        goto label_1b0194;
    }
    ctx->pc = 0x1B018Cu;
    {
        const bool branch_taken_0x1b018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B018Cu;
        // 0x1b0190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b018c) {
            ctx->pc = 0x1B019Cu;
            goto label_1b019c;
        }
    }
    ctx->pc = 0x1B0194u;
label_1b0194:
    // 0x1b0194: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b0194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0198:
    // 0x1b0198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b019c:
    // 0x1b019c: 0xc06d14c  jal         func_1B4530
label_1b01a0:
    if (ctx->pc == 0x1B01A0u) {
        ctx->pc = 0x1B01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B019Cu;
        // 0x1b01a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01A4u;
        goto label_1b01a4;
    }
    ctx->pc = 0x1B019Cu;
    SET_GPR_U32(ctx, 31, 0x1B01A4u);
    ctx->pc = 0x1B01A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B019Cu;
    // 0x1b01a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B019Cu, 0x1B01A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01A4u;
label_1b01a4:
    // 0x1b01a4: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x1b01a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
label_1b01a8:
    // 0x1b01a8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b01ac:
    // 0x1b01ac: 0xffb60008  sd          $s6, 0x8($sp)
    ctx->pc = 0x1b01acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 22));
label_1b01b0:
    // 0x1b01b0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b01b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b01b4:
    // 0x1b01b4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1b01b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1b01b8:
    // 0x1b01b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b01b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b01bc:
    // 0x1b01bc: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1b01bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b01c0:
    // 0x1b01c0: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b01c4:
    // 0x1b01c4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1b01c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b01c8:
    // 0x1b01c8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1b01c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b01cc:
    // 0x1b01cc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b01ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b01d0:
    // 0x1b01d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b01d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b01d4:
    // 0x1b01d4: 0xc06be8c  jal         func_1AFA30
label_1b01d8:
    if (ctx->pc == 0x1B01D8u) {
        ctx->pc = 0x1B01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01D4u;
        // 0x1b01d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01DCu;
        goto label_1b01dc;
    }
    ctx->pc = 0x1B01D4u;
    SET_GPR_U32(ctx, 31, 0x1B01DCu);
    ctx->pc = 0x1B01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01D4u;
    // 0x1b01d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B01D4u, 0x1B01DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01DCu;
label_1b01dc:
    // 0x1b01dc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1b01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b01e0:
    // 0x1b01e0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1b01e4:
    // 0x1b01e4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1b01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1b01e8:
    // 0x1b01e8: 0x8fb100d0  lw          $s1, 0xD0($sp)
    ctx->pc = 0x1b01e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b01ec:
    // 0x1b01ec: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b01ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b01f0:
    // 0x1b01f0: 0x8e96011c  lw          $s6, 0x11C($s4)
    ctx->pc = 0x1b01f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b01f4:
    // 0x1b01f4: 0xc04b7b4  jal         func_12DED0
label_1b01f8:
    if (ctx->pc == 0x1B01F8u) {
        ctx->pc = 0x1B01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01F4u;
        // 0x1b01f8: 0x27b000e0  addiu       $s0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01FCu;
        goto label_1b01fc;
    }
    ctx->pc = 0x1B01F4u;
    SET_GPR_U32(ctx, 31, 0x1B01FCu);
    ctx->pc = 0x1B01F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01F4u;
    // 0x1b01f8: 0x27b000e0  addiu       $s0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B01F4u, 0x1B01FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01FCu;
label_1b01fc:
    // 0x1b01fc: 0x10000060  b           . + 4 + (0x60 << 2)
label_1b0200:
    if (ctx->pc == 0x1B0200u) {
        ctx->pc = 0x1B0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01FCu;
        // 0x1b0200: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0204u;
        goto label_1b0204;
    }
    ctx->pc = 0x1B01FCu;
    {
        const bool branch_taken_0x1b01fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01FCu;
        // 0x1b0200: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01fc) {
            ctx->pc = 0x1B0380u;
            goto label_1b0380;
        }
    }
    ctx->pc = 0x1B0204u;
label_1b0204:
    // 0x1b0204: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b0204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b0208:
    // 0x1b0208: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x1b0208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1b020c:
    // 0x1b020c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b020cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b0210:
    // 0x1b0210: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1b0210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1b0214:
    // 0x1b0214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0218:
    // 0x1b0218: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b0218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1b021c:
    // 0x1b021c: 0xc04b7dc  jal         func_12DF70
label_1b0220:
    if (ctx->pc == 0x1B0220u) {
        ctx->pc = 0x1B0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B021Cu;
        // 0x1b0220: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0224u;
        goto label_1b0224;
    }
    ctx->pc = 0x1B021Cu;
    SET_GPR_U32(ctx, 31, 0x1B0224u);
    ctx->pc = 0x1B0220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B021Cu;
    // 0x1b0220: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B021Cu, 0x1B0224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0224u;
label_1b0224:
    // 0x1b0224: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x1b0224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1b0228:
    // 0x1b0228: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x1b0228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1b022c:
    // 0x1b022c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0230:
    // 0x1b0230: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0234:
    // 0x1b0234: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b0234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0238:
    // 0x1b0238: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b0238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b023c:
    // 0x1b023c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b023cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b0240:
    // 0x1b0240: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b0240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b0244:
    // 0x1b0244: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b0244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b0248:
    // 0x1b0248: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b0248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1b024c:
    // 0x1b024c: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0250:
    // 0x1b0250: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0254:
    // 0x1b0254: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b0254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0258:
    // 0x1b0258: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b0258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b025c:
    // 0x1b025c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b025cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1b0260:
    // 0x1b0260: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b0260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1b0264:
    // 0x1b0264: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b0264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1b0268:
    // 0x1b0268: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b026c:
    if (ctx->pc == 0x1B026Cu) {
        ctx->pc = 0x1B026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0268u;
        // 0x1b026c: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0270u;
        goto label_1b0270;
    }
    ctx->pc = 0x1B0268u;
    {
        const bool branch_taken_0x1b0268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0268u;
        // 0x1b026c: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0268) {
            ctx->pc = 0x1B02BCu;
            goto label_1b02bc;
        }
    }
    ctx->pc = 0x1B0270u;
label_1b0270:
    // 0x1b0270: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0274:
    // 0x1b0274: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0278:
    // 0x1b0278: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b027c:
    // 0x1b027c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0280:
    // 0x1b0280: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0284:
    // 0x1b0284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0288:
    if (ctx->pc == 0x1B0288u) {
        ctx->pc = 0x1B028Cu;
        goto label_1b028c;
    }
    ctx->pc = 0x1B0284u;
    {
        const bool branch_taken_0x1b0284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0284) {
            ctx->pc = 0x1B0298u;
            goto label_1b0298;
        }
    }
    ctx->pc = 0x1B028Cu;
label_1b028c:
    // 0x1b028c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b0290:
    // 0x1b0290: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0294:
    // 0x1b0294: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0298:
    // 0x1b0298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b029c:
    if (ctx->pc == 0x1B029Cu) {
        ctx->pc = 0x1B02A0u;
        goto label_1b02a0;
    }
    ctx->pc = 0x1B0298u;
    {
        const bool branch_taken_0x1b0298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0298) {
            ctx->pc = 0x1B02ACu;
            goto label_1b02ac;
        }
    }
    ctx->pc = 0x1B02A0u;
label_1b02a0:
    // 0x1b02a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b02a4:
    // 0x1b02a4: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x1b02a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
label_1b02a8:
    // 0x1b02a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b02a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b02ac:
    // 0x1b02ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b02b0:
    if (ctx->pc == 0x1B02B0u) {
        ctx->pc = 0x1B02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02ACu;
        // 0x1b02b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02B4u;
        goto label_1b02b4;
    }
    ctx->pc = 0x1B02ACu;
    {
        const bool branch_taken_0x1b02ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02ACu;
        // 0x1b02b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02ac) {
            ctx->pc = 0x1B02BCu;
            goto label_1b02bc;
        }
    }
    ctx->pc = 0x1B02B4u;
label_1b02b4:
    // 0x1b02b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b02b8:
    if (ctx->pc == 0x1B02B8u) {
        ctx->pc = 0x1B02BCu;
        goto label_1b02bc;
    }
    ctx->pc = 0x1B02B4u;
    {
        const bool branch_taken_0x1b02b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b02b4) {
            ctx->pc = 0x1B02C4u;
            goto label_1b02c4;
        }
    }
    ctx->pc = 0x1B02BCu;
label_1b02bc:
    // 0x1b02bc: 0x0  nop
    ctx->pc = 0x1b02bcu;
    // NOP
label_1b02c0:
    // 0x1b02c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b02c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b02c4:
    // 0x1b02c4: 0x0  nop
    ctx->pc = 0x1b02c4u;
    // NOP
label_1b02c8:
    // 0x1b02c8: 0x8fb30148  lw          $s3, 0x148($sp)
    ctx->pc = 0x1b02c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_1b02cc:
    // 0x1b02cc: 0xc06d130  jal         func_1B44C0
label_1b02d0:
    if (ctx->pc == 0x1B02D0u) {
        ctx->pc = 0x1B02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02CCu;
        // 0x1b02d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02D4u;
        goto label_1b02d4;
    }
    ctx->pc = 0x1B02CCu;
    SET_GPR_U32(ctx, 31, 0x1B02D4u);
    ctx->pc = 0x1B02D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02CCu;
    // 0x1b02d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B02CCu, 0x1B02D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02D4u;
label_1b02d4:
    // 0x1b02d4: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b02d8:
    if (ctx->pc == 0x1B02D8u) {
        ctx->pc = 0x1B02DCu;
        goto label_1b02dc;
    }
    ctx->pc = 0x1B02D4u;
    {
        const bool branch_taken_0x1b02d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b02d4) {
            ctx->pc = 0x1B0328u;
            goto label_1b0328;
        }
    }
    ctx->pc = 0x1B02DCu;
label_1b02dc:
    // 0x1b02dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b02e0:
    // 0x1b02e0: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b02e4:
    // 0x1b02e4: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b02e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b02e8:
    // 0x1b02e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b02e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b02ec:
    // 0x1b02ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b02ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b02f0:
    // 0x1b02f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b02f4:
    if (ctx->pc == 0x1B02F4u) {
        ctx->pc = 0x1B02F8u;
        goto label_1b02f8;
    }
    ctx->pc = 0x1B02F0u;
    {
        const bool branch_taken_0x1b02f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b02f0) {
            ctx->pc = 0x1B0304u;
            goto label_1b0304;
        }
    }
    ctx->pc = 0x1B02F8u;
label_1b02f8:
    // 0x1b02f8: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b02fc:
    // 0x1b02fc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b02fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0300:
    // 0x1b0300: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0304:
    // 0x1b0304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0308:
    if (ctx->pc == 0x1B0308u) {
        ctx->pc = 0x1B030Cu;
        goto label_1b030c;
    }
    ctx->pc = 0x1B0304u;
    {
        const bool branch_taken_0x1b0304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0304) {
            ctx->pc = 0x1B0318u;
            goto label_1b0318;
        }
    }
    ctx->pc = 0x1B030Cu;
label_1b030c:
    // 0x1b030c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0310:
    // 0x1b0310: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x1b0310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
label_1b0314:
    // 0x1b0314: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0318:
    // 0x1b0318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b031c:
    if (ctx->pc == 0x1B031Cu) {
        ctx->pc = 0x1B031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0318u;
        // 0x1b031c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0320u;
        goto label_1b0320;
    }
    ctx->pc = 0x1B0318u;
    {
        const bool branch_taken_0x1b0318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0318u;
        // 0x1b031c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0318) {
            ctx->pc = 0x1B0328u;
            goto label_1b0328;
        }
    }
    ctx->pc = 0x1B0320u;
label_1b0320:
    // 0x1b0320: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0324:
    if (ctx->pc == 0x1B0324u) {
        ctx->pc = 0x1B0328u;
        goto label_1b0328;
    }
    ctx->pc = 0x1B0320u;
    {
        const bool branch_taken_0x1b0320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0320) {
            ctx->pc = 0x1B032Cu;
            goto label_1b032c;
        }
    }
    ctx->pc = 0x1B0328u;
label_1b0328:
    // 0x1b0328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b032c:
    // 0x1b032c: 0x0  nop
    ctx->pc = 0x1b032cu;
    // NOP
label_1b0330:
    // 0x1b0330: 0xc06d14c  jal         func_1B4530
label_1b0334:
    if (ctx->pc == 0x1B0334u) {
        ctx->pc = 0x1B0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0330u;
        // 0x1b0334: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0338u;
        goto label_1b0338;
    }
    ctx->pc = 0x1B0330u;
    SET_GPR_U32(ctx, 31, 0x1B0338u);
    ctx->pc = 0x1B0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0330u;
    // 0x1b0334: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0330u, 0x1B0338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0338u;
label_1b0338:
    // 0x1b0338: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1b0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1b033c:
    // 0x1b033c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b033cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0340:
    // 0x1b0340: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b0340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1b0344:
    // 0x1b0344: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b0348:
    // 0x1b0348: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1b0348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1b034c:
    // 0x1b034c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b034cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0350:
    // 0x1b0350: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b0350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1b0354:
    // 0x1b0354: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1b0354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b0358:
    // 0x1b0358: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b0358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b035c:
    // 0x1b035c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1b035cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b0360:
    // 0x1b0360: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b0364:
    // 0x1b0364: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b0364u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b0368:
    // 0x1b0368: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b0368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b036c:
    // 0x1b036c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b036cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0370:
    // 0x1b0370: 0xc06be8c  jal         func_1AFA30
label_1b0374:
    if (ctx->pc == 0x1B0374u) {
        ctx->pc = 0x1B0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0370u;
        // 0x1b0374: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0378u;
        goto label_1b0378;
    }
    ctx->pc = 0x1B0370u;
    SET_GPR_U32(ctx, 31, 0x1B0378u);
    ctx->pc = 0x1B0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0370u;
    // 0x1b0374: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B0370u, 0x1B0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0378u;
label_1b0378:
    // 0x1b0378: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x1b0378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_1b037c:
    // 0x1b037c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1b037cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1b0380:
    // 0x1b0380: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b0380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0384:
    // 0x1b0384: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_1b0388:
    if (ctx->pc == 0x1B0388u) {
        ctx->pc = 0x1B0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0384u;
        // 0x1b0388: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B038Cu;
        goto label_1b038c;
    }
    ctx->pc = 0x1B0384u;
    {
        const bool branch_taken_0x1b0384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0384u;
        // 0x1b0388: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0384) {
            ctx->pc = 0x1B0208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0208;
        }
    }
    ctx->pc = 0x1B038Cu;
label_1b038c:
    // 0x1b038c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b038cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b0390:
    // 0x1b0390: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_1b0394:
    if (ctx->pc == 0x1B0394u) {
        ctx->pc = 0x1B0398u;
        goto label_1b0398;
    }
    ctx->pc = 0x1B0390u;
    {
        const bool branch_taken_0x1b0390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0390) {
            ctx->pc = 0x1B0204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0204;
        }
    }
    ctx->pc = 0x1B0398u;
label_1b0398:
    // 0x1b0398: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1b0398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1b039c:
    // 0x1b039c: 0x928302f1  lbu         $v1, 0x2F1($s4)
    ctx->pc = 0x1b039cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 753)));
label_1b03a0:
    // 0x1b03a0: 0x2a22018  mult        $a0, $s5, $v0
    ctx->pc = 0x1b03a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b03a4:
    // 0x1b03a4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1b03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b03a8:
    // 0x1b03a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b03ac:
    // 0x1b03ac: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
label_1b03b0:
    if (ctx->pc == 0x1B03B0u) {
        ctx->pc = 0x1B03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03ACu;
        // 0x1b03b0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B03B4u;
        goto label_1b03b4;
    }
    ctx->pc = 0x1B03ACu;
    {
        const bool branch_taken_0x1b03ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03ACu;
        // 0x1b03b0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03ac) {
            ctx->pc = 0x1B04E4u;
            goto label_1b04e4;
        }
    }
    ctx->pc = 0x1B03B4u;
label_1b03b4:
    // 0x1b03b4: 0x8e9000fc  lw          $s0, 0xFC($s4)
    ctx->pc = 0x1b03b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_1b03b8:
    // 0x1b03b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b03b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b03bc:
    // 0x1b03bc: 0x8e910118  lw          $s1, 0x118($s4)
    ctx->pc = 0x1b03bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b03c0:
    // 0x1b03c0: 0x8e92011c  lw          $s2, 0x11C($s4)
    ctx->pc = 0x1b03c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b03c4:
    // 0x1b03c4: 0x92030063  lbu         $v1, 0x63($s0)
    ctx->pc = 0x1b03c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 99)));
label_1b03c8:
    // 0x1b03c8: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x1b03c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
label_1b03cc:
    // 0x1b03cc: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b03ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
label_1b03d0:
    // 0x1b03d0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b03d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_1b03d4:
    // 0x1b03d4: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b03d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
label_1b03d8:
    // 0x1b03d8: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b03d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
label_1b03dc:
    // 0x1b03dc: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_1b03e0:
    // 0x1b03e0: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_1b03e4:
    // 0x1b03e4: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1b03e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1b03e8:
    // 0x1b03e8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1b03ec:
    if (ctx->pc == 0x1B03ECu) {
        ctx->pc = 0x1B03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03E8u;
        // 0x1b03ec: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B03F0u;
        goto label_1b03f0;
    }
    ctx->pc = 0x1B03E8u;
    {
        const bool branch_taken_0x1b03e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03E8u;
        // 0x1b03ec: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03e8) {
            ctx->pc = 0x1B043Cu;
            goto label_1b043c;
        }
    }
    ctx->pc = 0x1B03F0u;
label_1b03f0:
    // 0x1b03f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b03f4:
    // 0x1b03f4: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b03f8:
    // 0x1b03f8: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b03f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b03fc:
    // 0x1b03fc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b03fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0400:
    // 0x1b0400: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0404:
    // 0x1b0404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0408:
    if (ctx->pc == 0x1B0408u) {
        ctx->pc = 0x1B040Cu;
        goto label_1b040c;
    }
    ctx->pc = 0x1B0404u;
    {
        const bool branch_taken_0x1b0404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0404) {
            ctx->pc = 0x1B0418u;
            goto label_1b0418;
        }
    }
    ctx->pc = 0x1B040Cu;
label_1b040c:
    // 0x1b040c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1b040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1b0410:
    // 0x1b0410: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0414:
    // 0x1b0414: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0418:
    // 0x1b0418: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b041c:
    if (ctx->pc == 0x1B041Cu) {
        ctx->pc = 0x1B0420u;
        goto label_1b0420;
    }
    ctx->pc = 0x1B0418u;
    {
        const bool branch_taken_0x1b0418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0418) {
            ctx->pc = 0x1B042Cu;
            goto label_1b042c;
        }
    }
    ctx->pc = 0x1B0420u;
label_1b0420:
    // 0x1b0420: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b0420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b0424:
    // 0x1b0424: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1b0424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_1b0428:
    // 0x1b0428: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b042c:
    // 0x1b042c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0430:
    if (ctx->pc == 0x1B0430u) {
        ctx->pc = 0x1B0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B042Cu;
        // 0x1b0430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0434u;
        goto label_1b0434;
    }
    ctx->pc = 0x1B042Cu;
    {
        const bool branch_taken_0x1b042c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B042Cu;
        // 0x1b0430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b042c) {
            ctx->pc = 0x1B0440u;
            goto label_1b0440;
        }
    }
    ctx->pc = 0x1B0434u;
label_1b0434:
    // 0x1b0434: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0438:
    if (ctx->pc == 0x1B0438u) {
        ctx->pc = 0x1B0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0434u;
        // 0x1b0438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B043Cu;
        goto label_1b043c;
    }
    ctx->pc = 0x1B0434u;
    {
        const bool branch_taken_0x1b0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0434u;
        // 0x1b0438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0434) {
            ctx->pc = 0x1B0440u;
            goto label_1b0440;
        }
    }
    ctx->pc = 0x1B043Cu;
label_1b043c:
    // 0x1b043c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0440:
    // 0x1b0440: 0xc06d130  jal         func_1B44C0
label_1b0444:
    if (ctx->pc == 0x1B0444u) {
        ctx->pc = 0x1B0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0440u;
        // 0x1b0444: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0448u;
        goto label_1b0448;
    }
    ctx->pc = 0x1B0440u;
    SET_GPR_U32(ctx, 31, 0x1B0448u);
    ctx->pc = 0x1B0444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0440u;
    // 0x1b0444: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0440u, 0x1B0448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0448u;
label_1b0448:
    // 0x1b0448: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1b044c:
    if (ctx->pc == 0x1B044Cu) {
        ctx->pc = 0x1B0450u;
        goto label_1b0450;
    }
    ctx->pc = 0x1B0448u;
    {
        const bool branch_taken_0x1b0448 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0448) {
            ctx->pc = 0x1B049Cu;
            goto label_1b049c;
        }
    }
    ctx->pc = 0x1B0450u;
label_1b0450:
    // 0x1b0450: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b0450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b0454:
    // 0x1b0454: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0458:
    // 0x1b0458: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b045c:
    // 0x1b045c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0460:
    // 0x1b0460: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0464:
    // 0x1b0464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0468:
    if (ctx->pc == 0x1B0468u) {
        ctx->pc = 0x1B046Cu;
        goto label_1b046c;
    }
    ctx->pc = 0x1B0464u;
    {
        const bool branch_taken_0x1b0464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0464) {
            ctx->pc = 0x1B0478u;
            goto label_1b0478;
        }
    }
    ctx->pc = 0x1B046Cu;
label_1b046c:
    // 0x1b046c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1b046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1b0470:
    // 0x1b0470: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0474:
    // 0x1b0474: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0478:
    // 0x1b0478: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b047c:
    if (ctx->pc == 0x1B047Cu) {
        ctx->pc = 0x1B0480u;
        goto label_1b0480;
    }
    ctx->pc = 0x1B0478u;
    {
        const bool branch_taken_0x1b0478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0478) {
            ctx->pc = 0x1B048Cu;
            goto label_1b048c;
        }
    }
    ctx->pc = 0x1B0480u;
label_1b0480:
    // 0x1b0480: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b0484:
    // 0x1b0484: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1b0484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_1b0488:
    // 0x1b0488: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b048c:
    // 0x1b048c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b0490:
    if (ctx->pc == 0x1B0490u) {
        ctx->pc = 0x1B0494u;
        goto label_1b0494;
    }
    ctx->pc = 0x1B048Cu;
    {
        const bool branch_taken_0x1b048c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b048c) {
            ctx->pc = 0x1B049Cu;
            goto label_1b049c;
        }
    }
    ctx->pc = 0x1B0494u;
label_1b0494:
    // 0x1b0494: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b0498:
    if (ctx->pc == 0x1B0498u) {
        ctx->pc = 0x1B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0494u;
        // 0x1b0498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B049Cu;
        goto label_1b049c;
    }
    ctx->pc = 0x1B0494u;
    {
        const bool branch_taken_0x1b0494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0494u;
        // 0x1b0498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0494) {
            ctx->pc = 0x1B04A4u;
            goto label_1b04a4;
        }
    }
    ctx->pc = 0x1B049Cu;
label_1b049c:
    // 0x1b049c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b049cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b04a0:
    // 0x1b04a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b04a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b04a4:
    // 0x1b04a4: 0xc06d14c  jal         func_1B4530
label_1b04a8:
    if (ctx->pc == 0x1B04A8u) {
        ctx->pc = 0x1B04A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04A4u;
        // 0x1b04a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04ACu;
        goto label_1b04ac;
    }
    ctx->pc = 0x1B04A4u;
    SET_GPR_U32(ctx, 31, 0x1B04ACu);
    ctx->pc = 0x1B04A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04A4u;
    // 0x1b04a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B04A4u, 0x1B04ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04ACu;
label_1b04ac:
    // 0x1b04ac: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x1b04acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
label_1b04b0:
    // 0x1b04b0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b04b4:
    // 0x1b04b4: 0xffb50008  sd          $s5, 0x8($sp)
    ctx->pc = 0x1b04b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 21));
label_1b04b8:
    // 0x1b04b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b04b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b04bc:
    // 0x1b04bc: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1b04bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b04c0:
    // 0x1b04c0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b04c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b04c4:
    // 0x1b04c4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1b04c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b04c8:
    // 0x1b04c8: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b04c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b04cc:
    // 0x1b04cc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1b04ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b04d0:
    // 0x1b04d0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b04d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b04d4:
    // 0x1b04d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b04d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b04d8:
    // 0x1b04d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b04d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b04dc:
    // 0x1b04dc: 0xc06be8c  jal         func_1AFA30
label_1b04e0:
    if (ctx->pc == 0x1B04E0u) {
        ctx->pc = 0x1B04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04DCu;
        // 0x1b04e0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04E4u;
        goto label_1b04e4;
    }
    ctx->pc = 0x1B04DCu;
    SET_GPR_U32(ctx, 31, 0x1B04E4u);
    ctx->pc = 0x1B04E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04DCu;
    // 0x1b04e0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B04DCu, 0x1B04E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04E4u;
label_1b04e4:
    // 0x1b04e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b04e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b04e8:
    // 0x1b04e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b04e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b04ec:
    // 0x1b04ec: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1b04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1b04f0:
    // 0x1b04f0: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1b04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1b04f4:
    // 0x1b04f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b04f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b04f8:
    // 0x1b04f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b04f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b04fc:
    // 0x1b04fc: 0x320f809  jalr        $t9
label_1b0500:
    if (ctx->pc == 0x1B0500u) {
        ctx->pc = 0x1B0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04FCu;
        // 0x1b0500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0504u;
        goto label_1b0504;
    }
    ctx->pc = 0x1B04FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B0504u);
        ctx->pc = 0x1B0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04FCu;
        // 0x1b0500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B04FCu, 0x1B0504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0504u;
label_1b0504:
    // 0x1b0504: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b0504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b0508:
    // 0x1b0508: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1b0508u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1b050c:
    // 0x1b050c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1b0510:
    if (ctx->pc == 0x1B0510u) {
        ctx->pc = 0x1B0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B050Cu;
        // 0x1b0510: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0514u;
        goto label_1b0514;
    }
    ctx->pc = 0x1B050Cu;
    {
        const bool branch_taken_0x1b050c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B050Cu;
        // 0x1b0510: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b050c) {
            ctx->pc = 0x1B04ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b04ec;
        }
    }
    ctx->pc = 0x1B0514u;
label_1b0514:
    // 0x1b0514: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b0514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1b0518:
    // 0x1b0518: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1b0518u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b051c:
    // 0x1b051c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1b051cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b0520:
    // 0x1b0520: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b0520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b0524:
    // 0x1b0524: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b0524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b0528:
    // 0x1b0528: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b0528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b052c:
    // 0x1b052c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b052cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0530:
    // 0x1b0530: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b0530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0534:
    // 0x1b0534: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b0534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0538:
    // 0x1b0538: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b0538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b053c:
    // 0x1b053c: 0x3e00008  jr          $ra
label_1b0540:
    if (ctx->pc == 0x1B0540u) {
        ctx->pc = 0x1B0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B053Cu;
        // 0x1b0540: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0544u;
        goto label_fallthrough_0x1b053c;
    }
    ctx->pc = 0x1B053Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B053Cu;
        // 0x1b0540: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B053Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b053c:
    ctx->pc = 0x1B0544u;
}
