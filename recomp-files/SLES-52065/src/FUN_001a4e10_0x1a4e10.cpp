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

// Function: FUN_001a4e10
// Address: 0x1a4e10 - 0x1a5404
void FUN_001a4e10_0x1a4e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4e10_0x1a4e10");
#endif

    switch (ctx->pc) {
        case 0x1a4e10u: goto label_1a4e10;
        case 0x1a4e14u: goto label_1a4e14;
        case 0x1a4e18u: goto label_1a4e18;
        case 0x1a4e1cu: goto label_1a4e1c;
        case 0x1a4e20u: goto label_1a4e20;
        case 0x1a4e24u: goto label_1a4e24;
        case 0x1a4e28u: goto label_1a4e28;
        case 0x1a4e2cu: goto label_1a4e2c;
        case 0x1a4e30u: goto label_1a4e30;
        case 0x1a4e34u: goto label_1a4e34;
        case 0x1a4e38u: goto label_1a4e38;
        case 0x1a4e3cu: goto label_1a4e3c;
        case 0x1a4e40u: goto label_1a4e40;
        case 0x1a4e44u: goto label_1a4e44;
        case 0x1a4e48u: goto label_1a4e48;
        case 0x1a4e4cu: goto label_1a4e4c;
        case 0x1a4e50u: goto label_1a4e50;
        case 0x1a4e54u: goto label_1a4e54;
        case 0x1a4e58u: goto label_1a4e58;
        case 0x1a4e5cu: goto label_1a4e5c;
        case 0x1a4e60u: goto label_1a4e60;
        case 0x1a4e64u: goto label_1a4e64;
        case 0x1a4e68u: goto label_1a4e68;
        case 0x1a4e6cu: goto label_1a4e6c;
        case 0x1a4e70u: goto label_1a4e70;
        case 0x1a4e74u: goto label_1a4e74;
        case 0x1a4e78u: goto label_1a4e78;
        case 0x1a4e7cu: goto label_1a4e7c;
        case 0x1a4e80u: goto label_1a4e80;
        case 0x1a4e84u: goto label_1a4e84;
        case 0x1a4e88u: goto label_1a4e88;
        case 0x1a4e8cu: goto label_1a4e8c;
        case 0x1a4e90u: goto label_1a4e90;
        case 0x1a4e94u: goto label_1a4e94;
        case 0x1a4e98u: goto label_1a4e98;
        case 0x1a4e9cu: goto label_1a4e9c;
        case 0x1a4ea0u: goto label_1a4ea0;
        case 0x1a4ea4u: goto label_1a4ea4;
        case 0x1a4ea8u: goto label_1a4ea8;
        case 0x1a4eacu: goto label_1a4eac;
        case 0x1a4eb0u: goto label_1a4eb0;
        case 0x1a4eb4u: goto label_1a4eb4;
        case 0x1a4eb8u: goto label_1a4eb8;
        case 0x1a4ebcu: goto label_1a4ebc;
        case 0x1a4ec0u: goto label_1a4ec0;
        case 0x1a4ec4u: goto label_1a4ec4;
        case 0x1a4ec8u: goto label_1a4ec8;
        case 0x1a4eccu: goto label_1a4ecc;
        case 0x1a4ed0u: goto label_1a4ed0;
        case 0x1a4ed4u: goto label_1a4ed4;
        case 0x1a4ed8u: goto label_1a4ed8;
        case 0x1a4edcu: goto label_1a4edc;
        case 0x1a4ee0u: goto label_1a4ee0;
        case 0x1a4ee4u: goto label_1a4ee4;
        case 0x1a4ee8u: goto label_1a4ee8;
        case 0x1a4eecu: goto label_1a4eec;
        case 0x1a4ef0u: goto label_1a4ef0;
        case 0x1a4ef4u: goto label_1a4ef4;
        case 0x1a4ef8u: goto label_1a4ef8;
        case 0x1a4efcu: goto label_1a4efc;
        case 0x1a4f00u: goto label_1a4f00;
        case 0x1a4f04u: goto label_1a4f04;
        case 0x1a4f08u: goto label_1a4f08;
        case 0x1a4f0cu: goto label_1a4f0c;
        case 0x1a4f10u: goto label_1a4f10;
        case 0x1a4f14u: goto label_1a4f14;
        case 0x1a4f18u: goto label_1a4f18;
        case 0x1a4f1cu: goto label_1a4f1c;
        case 0x1a4f20u: goto label_1a4f20;
        case 0x1a4f24u: goto label_1a4f24;
        case 0x1a4f28u: goto label_1a4f28;
        case 0x1a4f2cu: goto label_1a4f2c;
        case 0x1a4f30u: goto label_1a4f30;
        case 0x1a4f34u: goto label_1a4f34;
        case 0x1a4f38u: goto label_1a4f38;
        case 0x1a4f3cu: goto label_1a4f3c;
        case 0x1a4f40u: goto label_1a4f40;
        case 0x1a4f44u: goto label_1a4f44;
        case 0x1a4f48u: goto label_1a4f48;
        case 0x1a4f4cu: goto label_1a4f4c;
        case 0x1a4f50u: goto label_1a4f50;
        case 0x1a4f54u: goto label_1a4f54;
        case 0x1a4f58u: goto label_1a4f58;
        case 0x1a4f5cu: goto label_1a4f5c;
        case 0x1a4f60u: goto label_1a4f60;
        case 0x1a4f64u: goto label_1a4f64;
        case 0x1a4f68u: goto label_1a4f68;
        case 0x1a4f6cu: goto label_1a4f6c;
        case 0x1a4f70u: goto label_1a4f70;
        case 0x1a4f74u: goto label_1a4f74;
        case 0x1a4f78u: goto label_1a4f78;
        case 0x1a4f7cu: goto label_1a4f7c;
        case 0x1a4f80u: goto label_1a4f80;
        case 0x1a4f84u: goto label_1a4f84;
        case 0x1a4f88u: goto label_1a4f88;
        case 0x1a4f8cu: goto label_1a4f8c;
        case 0x1a4f90u: goto label_1a4f90;
        case 0x1a4f94u: goto label_1a4f94;
        case 0x1a4f98u: goto label_1a4f98;
        case 0x1a4f9cu: goto label_1a4f9c;
        case 0x1a4fa0u: goto label_1a4fa0;
        case 0x1a4fa4u: goto label_1a4fa4;
        case 0x1a4fa8u: goto label_1a4fa8;
        case 0x1a4facu: goto label_1a4fac;
        case 0x1a4fb0u: goto label_1a4fb0;
        case 0x1a4fb4u: goto label_1a4fb4;
        case 0x1a4fb8u: goto label_1a4fb8;
        case 0x1a4fbcu: goto label_1a4fbc;
        case 0x1a4fc0u: goto label_1a4fc0;
        case 0x1a4fc4u: goto label_1a4fc4;
        case 0x1a4fc8u: goto label_1a4fc8;
        case 0x1a4fccu: goto label_1a4fcc;
        case 0x1a4fd0u: goto label_1a4fd0;
        case 0x1a4fd4u: goto label_1a4fd4;
        case 0x1a4fd8u: goto label_1a4fd8;
        case 0x1a4fdcu: goto label_1a4fdc;
        case 0x1a4fe0u: goto label_1a4fe0;
        case 0x1a4fe4u: goto label_1a4fe4;
        case 0x1a4fe8u: goto label_1a4fe8;
        case 0x1a4fecu: goto label_1a4fec;
        case 0x1a4ff0u: goto label_1a4ff0;
        case 0x1a4ff4u: goto label_1a4ff4;
        case 0x1a4ff8u: goto label_1a4ff8;
        case 0x1a4ffcu: goto label_1a4ffc;
        case 0x1a5000u: goto label_1a5000;
        case 0x1a5004u: goto label_1a5004;
        case 0x1a5008u: goto label_1a5008;
        case 0x1a500cu: goto label_1a500c;
        case 0x1a5010u: goto label_1a5010;
        case 0x1a5014u: goto label_1a5014;
        case 0x1a5018u: goto label_1a5018;
        case 0x1a501cu: goto label_1a501c;
        case 0x1a5020u: goto label_1a5020;
        case 0x1a5024u: goto label_1a5024;
        case 0x1a5028u: goto label_1a5028;
        case 0x1a502cu: goto label_1a502c;
        case 0x1a5030u: goto label_1a5030;
        case 0x1a5034u: goto label_1a5034;
        case 0x1a5038u: goto label_1a5038;
        case 0x1a503cu: goto label_1a503c;
        case 0x1a5040u: goto label_1a5040;
        case 0x1a5044u: goto label_1a5044;
        case 0x1a5048u: goto label_1a5048;
        case 0x1a504cu: goto label_1a504c;
        case 0x1a5050u: goto label_1a5050;
        case 0x1a5054u: goto label_1a5054;
        case 0x1a5058u: goto label_1a5058;
        case 0x1a505cu: goto label_1a505c;
        case 0x1a5060u: goto label_1a5060;
        case 0x1a5064u: goto label_1a5064;
        case 0x1a5068u: goto label_1a5068;
        case 0x1a506cu: goto label_1a506c;
        case 0x1a5070u: goto label_1a5070;
        case 0x1a5074u: goto label_1a5074;
        case 0x1a5078u: goto label_1a5078;
        case 0x1a507cu: goto label_1a507c;
        case 0x1a5080u: goto label_1a5080;
        case 0x1a5084u: goto label_1a5084;
        case 0x1a5088u: goto label_1a5088;
        case 0x1a508cu: goto label_1a508c;
        case 0x1a5090u: goto label_1a5090;
        case 0x1a5094u: goto label_1a5094;
        case 0x1a5098u: goto label_1a5098;
        case 0x1a509cu: goto label_1a509c;
        case 0x1a50a0u: goto label_1a50a0;
        case 0x1a50a4u: goto label_1a50a4;
        case 0x1a50a8u: goto label_1a50a8;
        case 0x1a50acu: goto label_1a50ac;
        case 0x1a50b0u: goto label_1a50b0;
        case 0x1a50b4u: goto label_1a50b4;
        case 0x1a50b8u: goto label_1a50b8;
        case 0x1a50bcu: goto label_1a50bc;
        case 0x1a50c0u: goto label_1a50c0;
        case 0x1a50c4u: goto label_1a50c4;
        case 0x1a50c8u: goto label_1a50c8;
        case 0x1a50ccu: goto label_1a50cc;
        case 0x1a50d0u: goto label_1a50d0;
        case 0x1a50d4u: goto label_1a50d4;
        case 0x1a50d8u: goto label_1a50d8;
        case 0x1a50dcu: goto label_1a50dc;
        case 0x1a50e0u: goto label_1a50e0;
        case 0x1a50e4u: goto label_1a50e4;
        case 0x1a50e8u: goto label_1a50e8;
        case 0x1a50ecu: goto label_1a50ec;
        case 0x1a50f0u: goto label_1a50f0;
        case 0x1a50f4u: goto label_1a50f4;
        case 0x1a50f8u: goto label_1a50f8;
        case 0x1a50fcu: goto label_1a50fc;
        case 0x1a5100u: goto label_1a5100;
        case 0x1a5104u: goto label_1a5104;
        case 0x1a5108u: goto label_1a5108;
        case 0x1a510cu: goto label_1a510c;
        case 0x1a5110u: goto label_1a5110;
        case 0x1a5114u: goto label_1a5114;
        case 0x1a5118u: goto label_1a5118;
        case 0x1a511cu: goto label_1a511c;
        case 0x1a5120u: goto label_1a5120;
        case 0x1a5124u: goto label_1a5124;
        case 0x1a5128u: goto label_1a5128;
        case 0x1a512cu: goto label_1a512c;
        case 0x1a5130u: goto label_1a5130;
        case 0x1a5134u: goto label_1a5134;
        case 0x1a5138u: goto label_1a5138;
        case 0x1a513cu: goto label_1a513c;
        case 0x1a5140u: goto label_1a5140;
        case 0x1a5144u: goto label_1a5144;
        case 0x1a5148u: goto label_1a5148;
        case 0x1a514cu: goto label_1a514c;
        case 0x1a5150u: goto label_1a5150;
        case 0x1a5154u: goto label_1a5154;
        case 0x1a5158u: goto label_1a5158;
        case 0x1a515cu: goto label_1a515c;
        case 0x1a5160u: goto label_1a5160;
        case 0x1a5164u: goto label_1a5164;
        case 0x1a5168u: goto label_1a5168;
        case 0x1a516cu: goto label_1a516c;
        case 0x1a5170u: goto label_1a5170;
        case 0x1a5174u: goto label_1a5174;
        case 0x1a5178u: goto label_1a5178;
        case 0x1a517cu: goto label_1a517c;
        case 0x1a5180u: goto label_1a5180;
        case 0x1a5184u: goto label_1a5184;
        case 0x1a5188u: goto label_1a5188;
        case 0x1a518cu: goto label_1a518c;
        case 0x1a5190u: goto label_1a5190;
        case 0x1a5194u: goto label_1a5194;
        case 0x1a5198u: goto label_1a5198;
        case 0x1a519cu: goto label_1a519c;
        case 0x1a51a0u: goto label_1a51a0;
        case 0x1a51a4u: goto label_1a51a4;
        case 0x1a51a8u: goto label_1a51a8;
        case 0x1a51acu: goto label_1a51ac;
        case 0x1a51b0u: goto label_1a51b0;
        case 0x1a51b4u: goto label_1a51b4;
        case 0x1a51b8u: goto label_1a51b8;
        case 0x1a51bcu: goto label_1a51bc;
        case 0x1a51c0u: goto label_1a51c0;
        case 0x1a51c4u: goto label_1a51c4;
        case 0x1a51c8u: goto label_1a51c8;
        case 0x1a51ccu: goto label_1a51cc;
        case 0x1a51d0u: goto label_1a51d0;
        case 0x1a51d4u: goto label_1a51d4;
        case 0x1a51d8u: goto label_1a51d8;
        case 0x1a51dcu: goto label_1a51dc;
        case 0x1a51e0u: goto label_1a51e0;
        case 0x1a51e4u: goto label_1a51e4;
        case 0x1a51e8u: goto label_1a51e8;
        case 0x1a51ecu: goto label_1a51ec;
        case 0x1a51f0u: goto label_1a51f0;
        case 0x1a51f4u: goto label_1a51f4;
        case 0x1a51f8u: goto label_1a51f8;
        case 0x1a51fcu: goto label_1a51fc;
        case 0x1a5200u: goto label_1a5200;
        case 0x1a5204u: goto label_1a5204;
        case 0x1a5208u: goto label_1a5208;
        case 0x1a520cu: goto label_1a520c;
        case 0x1a5210u: goto label_1a5210;
        case 0x1a5214u: goto label_1a5214;
        case 0x1a5218u: goto label_1a5218;
        case 0x1a521cu: goto label_1a521c;
        case 0x1a5220u: goto label_1a5220;
        case 0x1a5224u: goto label_1a5224;
        case 0x1a5228u: goto label_1a5228;
        case 0x1a522cu: goto label_1a522c;
        case 0x1a5230u: goto label_1a5230;
        case 0x1a5234u: goto label_1a5234;
        case 0x1a5238u: goto label_1a5238;
        case 0x1a523cu: goto label_1a523c;
        case 0x1a5240u: goto label_1a5240;
        case 0x1a5244u: goto label_1a5244;
        case 0x1a5248u: goto label_1a5248;
        case 0x1a524cu: goto label_1a524c;
        case 0x1a5250u: goto label_1a5250;
        case 0x1a5254u: goto label_1a5254;
        case 0x1a5258u: goto label_1a5258;
        case 0x1a525cu: goto label_1a525c;
        case 0x1a5260u: goto label_1a5260;
        case 0x1a5264u: goto label_1a5264;
        case 0x1a5268u: goto label_1a5268;
        case 0x1a526cu: goto label_1a526c;
        case 0x1a5270u: goto label_1a5270;
        case 0x1a5274u: goto label_1a5274;
        case 0x1a5278u: goto label_1a5278;
        case 0x1a527cu: goto label_1a527c;
        case 0x1a5280u: goto label_1a5280;
        case 0x1a5284u: goto label_1a5284;
        case 0x1a5288u: goto label_1a5288;
        case 0x1a528cu: goto label_1a528c;
        case 0x1a5290u: goto label_1a5290;
        case 0x1a5294u: goto label_1a5294;
        case 0x1a5298u: goto label_1a5298;
        case 0x1a529cu: goto label_1a529c;
        case 0x1a52a0u: goto label_1a52a0;
        case 0x1a52a4u: goto label_1a52a4;
        case 0x1a52a8u: goto label_1a52a8;
        case 0x1a52acu: goto label_1a52ac;
        case 0x1a52b0u: goto label_1a52b0;
        case 0x1a52b4u: goto label_1a52b4;
        case 0x1a52b8u: goto label_1a52b8;
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52c0u: goto label_1a52c0;
        case 0x1a52c4u: goto label_1a52c4;
        case 0x1a52c8u: goto label_1a52c8;
        case 0x1a52ccu: goto label_1a52cc;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52d4u: goto label_1a52d4;
        case 0x1a52d8u: goto label_1a52d8;
        case 0x1a52dcu: goto label_1a52dc;
        case 0x1a52e0u: goto label_1a52e0;
        case 0x1a52e4u: goto label_1a52e4;
        case 0x1a52e8u: goto label_1a52e8;
        case 0x1a52ecu: goto label_1a52ec;
        case 0x1a52f0u: goto label_1a52f0;
        case 0x1a52f4u: goto label_1a52f4;
        case 0x1a52f8u: goto label_1a52f8;
        case 0x1a52fcu: goto label_1a52fc;
        case 0x1a5300u: goto label_1a5300;
        case 0x1a5304u: goto label_1a5304;
        case 0x1a5308u: goto label_1a5308;
        case 0x1a530cu: goto label_1a530c;
        case 0x1a5310u: goto label_1a5310;
        case 0x1a5314u: goto label_1a5314;
        case 0x1a5318u: goto label_1a5318;
        case 0x1a531cu: goto label_1a531c;
        case 0x1a5320u: goto label_1a5320;
        case 0x1a5324u: goto label_1a5324;
        case 0x1a5328u: goto label_1a5328;
        case 0x1a532cu: goto label_1a532c;
        case 0x1a5330u: goto label_1a5330;
        case 0x1a5334u: goto label_1a5334;
        case 0x1a5338u: goto label_1a5338;
        case 0x1a533cu: goto label_1a533c;
        case 0x1a5340u: goto label_1a5340;
        case 0x1a5344u: goto label_1a5344;
        case 0x1a5348u: goto label_1a5348;
        case 0x1a534cu: goto label_1a534c;
        case 0x1a5350u: goto label_1a5350;
        case 0x1a5354u: goto label_1a5354;
        case 0x1a5358u: goto label_1a5358;
        case 0x1a535cu: goto label_1a535c;
        case 0x1a5360u: goto label_1a5360;
        case 0x1a5364u: goto label_1a5364;
        case 0x1a5368u: goto label_1a5368;
        case 0x1a536cu: goto label_1a536c;
        case 0x1a5370u: goto label_1a5370;
        case 0x1a5374u: goto label_1a5374;
        case 0x1a5378u: goto label_1a5378;
        case 0x1a537cu: goto label_1a537c;
        case 0x1a5380u: goto label_1a5380;
        case 0x1a5384u: goto label_1a5384;
        case 0x1a5388u: goto label_1a5388;
        case 0x1a538cu: goto label_1a538c;
        case 0x1a5390u: goto label_1a5390;
        case 0x1a5394u: goto label_1a5394;
        case 0x1a5398u: goto label_1a5398;
        case 0x1a539cu: goto label_1a539c;
        case 0x1a53a0u: goto label_1a53a0;
        case 0x1a53a4u: goto label_1a53a4;
        case 0x1a53a8u: goto label_1a53a8;
        case 0x1a53acu: goto label_1a53ac;
        case 0x1a53b0u: goto label_1a53b0;
        case 0x1a53b4u: goto label_1a53b4;
        case 0x1a53b8u: goto label_1a53b8;
        case 0x1a53bcu: goto label_1a53bc;
        case 0x1a53c0u: goto label_1a53c0;
        case 0x1a53c4u: goto label_1a53c4;
        case 0x1a53c8u: goto label_1a53c8;
        case 0x1a53ccu: goto label_1a53cc;
        case 0x1a53d0u: goto label_1a53d0;
        case 0x1a53d4u: goto label_1a53d4;
        case 0x1a53d8u: goto label_1a53d8;
        case 0x1a53dcu: goto label_1a53dc;
        case 0x1a53e0u: goto label_1a53e0;
        case 0x1a53e4u: goto label_1a53e4;
        case 0x1a53e8u: goto label_1a53e8;
        case 0x1a53ecu: goto label_1a53ec;
        case 0x1a53f0u: goto label_1a53f0;
        case 0x1a53f4u: goto label_1a53f4;
        case 0x1a53f8u: goto label_1a53f8;
        case 0x1a53fcu: goto label_1a53fc;
        case 0x1a5400u: goto label_1a5400;
        default: break;
    }

    ctx->pc = 0x1a4e10u;

label_1a4e10:
    // 0x1a4e10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a4e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a4e14:
    // 0x1a4e14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a4e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a4e18:
    // 0x1a4e18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a4e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a4e1c:
    // 0x1a4e1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a4e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a4e20:
    // 0x1a4e20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a4e24:
    // 0x1a4e24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a4e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e28:
    // 0x1a4e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a4e2c:
    // 0x1a4e2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a4e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e30:
    // 0x1a4e30: 0x26640930  addiu       $a0, $s3, 0x930
    ctx->pc = 0x1a4e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
label_1a4e34:
    // 0x1a4e34: 0xc069a24  jal         func_1A6890
label_1a4e38:
    if (ctx->pc == 0x1A4E38u) {
        ctx->pc = 0x1A4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E34u;
        // 0x1a4e38: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E3Cu;
        goto label_1a4e3c;
    }
    ctx->pc = 0x1A4E34u;
    SET_GPR_U32(ctx, 31, 0x1A4E3Cu);
    ctx->pc = 0x1A4E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E34u;
    // 0x1a4e38: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6890u, 0x1A4E34u, 0x1A4E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E3Cu;
label_1a4e3c:
    // 0x1a4e3c: 0xc063dd4  jal         func_18F750
label_1a4e40:
    if (ctx->pc == 0x1A4E40u) {
        ctx->pc = 0x1A4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E3Cu;
        // 0x1a4e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E44u;
        goto label_1a4e44;
    }
    ctx->pc = 0x1A4E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A4E44u);
    ctx->pc = 0x1A4E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E3Cu;
    // 0x1a4e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A4E3Cu, 0x1A4E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E44u;
label_1a4e44:
    // 0x1a4e44: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1a4e48:
    // 0x1a4e48: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x1a4e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1a4e4c:
    // 0x1a4e4c: 0x10440136  beq         $v0, $a0, . + 4 + (0x136 << 2)
label_1a4e50:
    if (ctx->pc == 0x1A4E50u) {
        ctx->pc = 0x1A4E54u;
        goto label_1a4e54;
    }
    ctx->pc = 0x1A4E4Cu;
    {
        const bool branch_taken_0x1a4e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a4e4c) {
            ctx->pc = 0x1A5328u;
            goto label_1a5328;
        }
    }
    ctx->pc = 0x1A4E54u;
label_1a4e54:
    // 0x1a4e54: 0x10430134  beq         $v0, $v1, . + 4 + (0x134 << 2)
label_1a4e58:
    if (ctx->pc == 0x1A4E58u) {
        ctx->pc = 0x1A4E5Cu;
        goto label_1a4e5c;
    }
    ctx->pc = 0x1A4E54u;
    {
        const bool branch_taken_0x1a4e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4e54) {
            ctx->pc = 0x1A5328u;
            goto label_1a5328;
        }
    }
    ctx->pc = 0x1A4E5Cu;
label_1a4e5c:
    // 0x1a4e5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a4e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a4e60:
    // 0x1a4e60: 0x10430106  beq         $v0, $v1, . + 4 + (0x106 << 2)
label_1a4e64:
    if (ctx->pc == 0x1A4E64u) {
        ctx->pc = 0x1A4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E60u;
        // 0x1a4e64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E68u;
        goto label_1a4e68;
    }
    ctx->pc = 0x1A4E60u;
    {
        const bool branch_taken_0x1a4e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E60u;
        // 0x1a4e64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e60) {
            ctx->pc = 0x1A527Cu;
            goto label_1a527c;
        }
    }
    ctx->pc = 0x1A4E68u;
label_1a4e68:
    // 0x1a4e68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a4e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a4e6c:
    // 0x1a4e6c: 0x104300fa  beq         $v0, $v1, . + 4 + (0xFA << 2)
label_1a4e70:
    if (ctx->pc == 0x1A4E70u) {
        ctx->pc = 0x1A4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E6Cu;
        // 0x1a4e70: 0x26640950  addiu       $a0, $s3, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E74u;
        goto label_1a4e74;
    }
    ctx->pc = 0x1A4E6Cu;
    {
        const bool branch_taken_0x1a4e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E6Cu;
        // 0x1a4e70: 0x26640950  addiu       $a0, $s3, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e6c) {
            ctx->pc = 0x1A5258u;
            goto label_1a5258;
        }
    }
    ctx->pc = 0x1A4E74u;
label_1a4e74:
    // 0x1a4e74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a4e78:
    // 0x1a4e78: 0x104300e1  beq         $v0, $v1, . + 4 + (0xE1 << 2)
label_1a4e7c:
    if (ctx->pc == 0x1A4E7Cu) {
        ctx->pc = 0x1A4E80u;
        goto label_1a4e80;
    }
    ctx->pc = 0x1A4E78u;
    {
        const bool branch_taken_0x1a4e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4e78) {
            ctx->pc = 0x1A5200u;
            goto label_1a5200;
        }
    }
    ctx->pc = 0x1A4E80u;
label_1a4e80:
    // 0x1a4e80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a4e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4e84:
    // 0x1a4e84: 0x104300bc  beq         $v0, $v1, . + 4 + (0xBC << 2)
label_1a4e88:
    if (ctx->pc == 0x1A4E88u) {
        ctx->pc = 0x1A4E8Cu;
        goto label_1a4e8c;
    }
    ctx->pc = 0x1A4E84u;
    {
        const bool branch_taken_0x1a4e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4e84) {
            ctx->pc = 0x1A5178u;
            goto label_1a5178;
        }
    }
    ctx->pc = 0x1A4E8Cu;
label_1a4e8c:
    // 0x1a4e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4e90:
    // 0x1a4e90: 0x104300ad  beq         $v0, $v1, . + 4 + (0xAD << 2)
label_1a4e94:
    if (ctx->pc == 0x1A4E94u) {
        ctx->pc = 0x1A4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E90u;
        // 0x1a4e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E98u;
        goto label_1a4e98;
    }
    ctx->pc = 0x1A4E90u;
    {
        const bool branch_taken_0x1a4e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E90u;
        // 0x1a4e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e90) {
            ctx->pc = 0x1A5148u;
            goto label_1a5148;
        }
    }
    ctx->pc = 0x1A4E98u;
label_1a4e98:
    // 0x1a4e98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a4e9c:
    if (ctx->pc == 0x1A4E9Cu) {
        ctx->pc = 0x1A4EA0u;
        goto label_1a4ea0;
    }
    ctx->pc = 0x1A4E98u;
    {
        const bool branch_taken_0x1a4e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e98) {
            ctx->pc = 0x1A4EA8u;
            goto label_1a4ea8;
        }
    }
    ctx->pc = 0x1A4EA0u;
label_1a4ea0:
    // 0x1a4ea0: 0x10000121  b           . + 4 + (0x121 << 2)
label_1a4ea4:
    if (ctx->pc == 0x1A4EA4u) {
        ctx->pc = 0x1A4EA8u;
        goto label_1a4ea8;
    }
    ctx->pc = 0x1A4EA0u;
    {
        const bool branch_taken_0x1a4ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ea0) {
            ctx->pc = 0x1A5328u;
            goto label_1a5328;
        }
    }
    ctx->pc = 0x1A4EA8u;
label_1a4ea8:
    // 0x1a4ea8: 0xc067f08  jal         func_19FC20
label_1a4eac:
    if (ctx->pc == 0x1A4EACu) {
        ctx->pc = 0x1A4EB0u;
        goto label_1a4eb0;
    }
    ctx->pc = 0x1A4EA8u;
    SET_GPR_U32(ctx, 31, 0x1A4EB0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1A4EA8u, 0x1A4EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EB0u;
label_1a4eb0:
    // 0x1a4eb0: 0xae620750  sw          $v0, 0x750($s3)
    ctx->pc = 0x1a4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1872), GPR_U32(ctx, 2));
label_1a4eb4:
    // 0x1a4eb4: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x1a4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
label_1a4eb8:
    // 0x1a4eb8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1a4ebc:
    if (ctx->pc == 0x1A4EBCu) {
        ctx->pc = 0x1A4EC0u;
        goto label_1a4ec0;
    }
    ctx->pc = 0x1A4EB8u;
    {
        const bool branch_taken_0x1a4eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4eb8) {
            ctx->pc = 0x1A4EDCu;
            goto label_1a4edc;
        }
    }
    ctx->pc = 0x1A4EC0u;
label_1a4ec0:
    // 0x1a4ec0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a4ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a4ec4:
    // 0x1a4ec4: 0xc067f68  jal         func_19FDA0
label_1a4ec8:
    if (ctx->pc == 0x1A4EC8u) {
        ctx->pc = 0x1A4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EC4u;
        // 0x1a4ec8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4ECCu;
        goto label_1a4ecc;
    }
    ctx->pc = 0x1A4EC4u;
    SET_GPR_U32(ctx, 31, 0x1A4ECCu);
    ctx->pc = 0x1A4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EC4u;
    // 0x1a4ec8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A4EC4u, 0x1A4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4ECCu;
label_1a4ecc:
    // 0x1a4ecc: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x1a4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
label_1a4ed0:
    // 0x1a4ed0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a4ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4ed4:
    // 0x1a4ed4: 0xc067f68  jal         func_19FDA0
label_1a4ed8:
    if (ctx->pc == 0x1A4ED8u) {
        ctx->pc = 0x1A4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ED4u;
        // 0x1a4ed8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EDCu;
        goto label_1a4edc;
    }
    ctx->pc = 0x1A4ED4u;
    SET_GPR_U32(ctx, 31, 0x1A4EDCu);
    ctx->pc = 0x1A4ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4ED4u;
    // 0x1a4ed8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A4ED4u, 0x1A4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EDCu;
label_1a4edc:
    // 0x1a4edc: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a4ee0:
    // 0x1a4ee0: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a4ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a4ee4:
    // 0x1a4ee4: 0xc06bd9c  jal         func_1AF670
label_1a4ee8:
    if (ctx->pc == 0x1A4EE8u) {
        ctx->pc = 0x1A4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EE4u;
        // 0x1a4ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EECu;
        goto label_1a4eec;
    }
    ctx->pc = 0x1A4EE4u;
    SET_GPR_U32(ctx, 31, 0x1A4EECu);
    ctx->pc = 0x1A4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EE4u;
    // 0x1a4ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1A4EE4u, 0x1A4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EECu;
label_1a4eec:
    // 0x1a4eec: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a4ef0:
    // 0x1a4ef0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1a4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a4ef4:
    // 0x1a4ef4: 0x8c420308  lw          $v0, 0x308($v0)
    ctx->pc = 0x1a4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 776)));
label_1a4ef8:
    // 0x1a4ef8: 0xae620a60  sw          $v0, 0xA60($s3)
    ctx->pc = 0x1a4ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2656), GPR_U32(ctx, 2));
label_1a4efc:
    // 0x1a4efc: 0x8e640a60  lw          $a0, 0xA60($s3)
    ctx->pc = 0x1a4efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2656)));
label_1a4f00:
    // 0x1a4f00: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1a4f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a4f04:
    // 0x1a4f04: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a4f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a4f08:
    // 0x1a4f08: 0x320f809  jalr        $t9
label_1a4f0c:
    if (ctx->pc == 0x1A4F0Cu) {
        ctx->pc = 0x1A4F10u;
        goto label_1a4f10;
    }
    ctx->pc = 0x1A4F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4F10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F08u, 0x1A4F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4F10u;
label_1a4f10:
    // 0x1a4f10: 0x8e620a60  lw          $v0, 0xA60($s3)
    ctx->pc = 0x1a4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2656)));
label_1a4f14:
    // 0x1a4f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4f18:
    // 0x1a4f18: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a4f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a4f1c:
    // 0x1a4f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a4f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f20:
    // 0x1a4f20: 0x24a504f8  addiu       $a1, $a1, 0x4F8
    ctx->pc = 0x1a4f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1272));
label_1a4f24:
    // 0x1a4f24: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1a4f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4f28:
    // 0x1a4f28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a4f28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a4f2c:
    // 0x1a4f2c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a4f30:
    // 0x1a4f30: 0xa04328f5  sb          $v1, 0x28F5($v0)
    ctx->pc = 0x1a4f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10485), (uint8_t)GPR_U32(ctx, 3));
label_1a4f34:
    // 0x1a4f34: 0xa260075c  sb          $zero, 0x75C($s3)
    ctx->pc = 0x1a4f34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1884), (uint8_t)GPR_U32(ctx, 0));
label_1a4f38:
    // 0x1a4f38: 0xc064a88  jal         func_192A20
label_1a4f3c:
    if (ctx->pc == 0x1A4F3Cu) {
        ctx->pc = 0x1A4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F38u;
        // 0x1a4f3c: 0xfe600780  sd          $zero, 0x780($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 1920), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F40u;
        goto label_1a4f40;
    }
    ctx->pc = 0x1A4F38u;
    SET_GPR_U32(ctx, 31, 0x1A4F40u);
    ctx->pc = 0x1A4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F38u;
    // 0x1a4f3c: 0xfe600780  sd          $zero, 0x780($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 1920), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x1A4F38u, 0x1A4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F40u;
label_1a4f40:
    // 0x1a4f40: 0xae6007c0  sw          $zero, 0x7C0($s3)
    ctx->pc = 0x1a4f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1984), GPR_U32(ctx, 0));
label_1a4f44:
    // 0x1a4f44: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a4f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a4f48:
    // 0x1a4f48: 0xae600934  sw          $zero, 0x934($s3)
    ctx->pc = 0x1a4f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2356), GPR_U32(ctx, 0));
label_1a4f4c:
    // 0x1a4f4c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a4f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_1a4f50:
    // 0x1a4f50: 0xa260093c  sb          $zero, 0x93C($s3)
    ctx->pc = 0x1a4f50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2364), (uint8_t)GPR_U32(ctx, 0));
label_1a4f54:
    // 0x1a4f54: 0x24a50500  addiu       $a1, $a1, 0x500
    ctx->pc = 0x1a4f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1280));
label_1a4f58:
    // 0x1a4f58: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1a4f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1a4f5c:
    // 0x1a4f5c: 0x24c60510  addiu       $a2, $a2, 0x510
    ctx->pc = 0x1a4f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1296));
label_1a4f60:
    // 0x1a4f60: 0xc06cf34  jal         func_1B3CD0
label_1a4f64:
    if (ctx->pc == 0x1A4F64u) {
        ctx->pc = 0x1A4F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F60u;
        // 0x1a4f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F68u;
        goto label_1a4f68;
    }
    ctx->pc = 0x1A4F60u;
    SET_GPR_U32(ctx, 31, 0x1A4F68u);
    ctx->pc = 0x1A4F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F60u;
    // 0x1a4f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1A4F60u, 0x1A4F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F68u;
label_1a4f68:
    // 0x1a4f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a4f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f6c:
    // 0x1a4f6c: 0xc0699f0  jal         func_1A67C0
label_1a4f70:
    if (ctx->pc == 0x1A4F70u) {
        ctx->pc = 0x1A4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F6Cu;
        // 0x1a4f70: 0x26640930  addiu       $a0, $s3, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F74u;
        goto label_1a4f74;
    }
    ctx->pc = 0x1A4F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A4F74u);
    ctx->pc = 0x1A4F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F6Cu;
    // 0x1a4f70: 0x26640930  addiu       $a0, $s3, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A67C0u, 0x1A4F6Cu, 0x1A4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F74u;
label_1a4f74:
    // 0x1a4f74: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a4f78:
    // 0x1a4f78: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a4f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a4f7c:
    // 0x1a4f7c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1a4f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a4f80:
    // 0x1a4f80: 0xc057040  jal         func_15C100
label_1a4f84:
    if (ctx->pc == 0x1A4F84u) {
        ctx->pc = 0x1A4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F80u;
        // 0x1a4f84: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F88u;
        goto label_1a4f88;
    }
    ctx->pc = 0x1A4F80u;
    SET_GPR_U32(ctx, 31, 0x1A4F88u);
    ctx->pc = 0x1A4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F80u;
    // 0x1a4f84: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A4F80u, 0x1A4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F88u;
label_1a4f88:
    // 0x1a4f88: 0xae620738  sw          $v0, 0x738($s3)
    ctx->pc = 0x1a4f88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1848), GPR_U32(ctx, 2));
label_1a4f8c:
    // 0x1a4f8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a4f90:
    // 0x1a4f90: 0xae620754  sw          $v0, 0x754($s3)
    ctx->pc = 0x1a4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1876), GPR_U32(ctx, 2));
label_1a4f94:
    // 0x1a4f94: 0xae600680  sw          $zero, 0x680($s3)
    ctx->pc = 0x1a4f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 0));
label_1a4f98:
    // 0x1a4f98: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a4f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a4f9c:
    // 0x1a4f9c: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a4f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1a4fa0:
    // 0x1a4fa0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1a4fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4fa4:
    // 0x1a4fa4: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_1a4fa8:
    if (ctx->pc == 0x1A4FA8u) {
        ctx->pc = 0x1A4FACu;
        goto label_1a4fac;
    }
    ctx->pc = 0x1A4FA4u;
    {
        const bool branch_taken_0x1a4fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fa4) {
            ctx->pc = 0x1A50CCu;
            goto label_1a50cc;
        }
    }
    ctx->pc = 0x1A4FACu;
label_1a4fac:
    // 0x1a4fac: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x1a4facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1a4fb0:
    // 0x1a4fb0: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_1a4fb4:
    if (ctx->pc == 0x1A4FB4u) {
        ctx->pc = 0x1A4FB8u;
        goto label_1a4fb8;
    }
    ctx->pc = 0x1A4FB0u;
    {
        const bool branch_taken_0x1a4fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4fb0) {
            ctx->pc = 0x1A50B4u;
            goto label_1a50b4;
        }
    }
    ctx->pc = 0x1A4FB8u;
label_1a4fb8:
    // 0x1a4fb8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1a4fbc:
    // 0x1a4fbc: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_1a4fc0:
    if (ctx->pc == 0x1A4FC0u) {
        ctx->pc = 0x1A4FC4u;
        goto label_1a4fc4;
    }
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A5078u;
            goto label_1a5078;
        }
    }
    ctx->pc = 0x1A4FC4u;
label_1a4fc4:
    // 0x1a4fc4: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x1a4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1a4fc8:
    // 0x1a4fc8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a4fcc:
    if (ctx->pc == 0x1A4FCCu) {
        ctx->pc = 0x1A4FD0u;
        goto label_1a4fd0;
    }
    ctx->pc = 0x1A4FC8u;
    {
        const bool branch_taken_0x1a4fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4fc8) {
            ctx->pc = 0x1A4FD8u;
            goto label_1a4fd8;
        }
    }
    ctx->pc = 0x1A4FD0u;
label_1a4fd0:
    // 0x1a4fd0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1a4fd4:
    if (ctx->pc == 0x1A4FD4u) {
        ctx->pc = 0x1A4FD8u;
        goto label_1a4fd8;
    }
    ctx->pc = 0x1A4FD0u;
    {
        const bool branch_taken_0x1a4fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fd0) {
            ctx->pc = 0x1A50CCu;
            goto label_1a50cc;
        }
    }
    ctx->pc = 0x1A4FD8u;
label_1a4fd8:
    // 0x1a4fd8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a4fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a4fdc:
    // 0x1a4fdc: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a4fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a4fe0:
    // 0x1a4fe0: 0xc057040  jal         func_15C100
label_1a4fe4:
    if (ctx->pc == 0x1A4FE4u) {
        ctx->pc = 0x1A4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE0u;
        // 0x1a4fe4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FE8u;
        goto label_1a4fe8;
    }
    ctx->pc = 0x1A4FE0u;
    SET_GPR_U32(ctx, 31, 0x1A4FE8u);
    ctx->pc = 0x1A4FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4FE0u;
    // 0x1a4fe4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A4FE0u, 0x1A4FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FE8u;
label_1a4fe8:
    // 0x1a4fe8: 0x8e650680  lw          $a1, 0x680($s3)
    ctx->pc = 0x1a4fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1a4fec:
    // 0x1a4fec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a4ff0:
    // 0x1a4ff0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a4ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a4ff4:
    // 0x1a4ff4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a4ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a4ff8:
    // 0x1a4ff8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a4ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a4ffc:
    // 0x1a4ffc: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1a4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1a5000:
    // 0x1a5000: 0xac820684  sw          $v0, 0x684($a0)
    ctx->pc = 0x1a5000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1668), GPR_U32(ctx, 2));
label_1a5004:
    // 0x1a5004: 0x8e640680  lw          $a0, 0x680($s3)
    ctx->pc = 0x1a5004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1a5008:
    // 0x1a5008: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a5008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a500c:
    // 0x1a500c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a5010:
    // 0x1a5010: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a5014:
    // 0x1a5014: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a5014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a5018:
    // 0x1a5018: 0xac50068c  sw          $s0, 0x68C($v0)
    ctx->pc = 0x1a5018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1676), GPR_U32(ctx, 16));
label_1a501c:
    // 0x1a501c: 0x8e640680  lw          $a0, 0x680($s3)
    ctx->pc = 0x1a501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1a5020:
    // 0x1a5020: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a5020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a5024:
    // 0x1a5024: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a5024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a5028:
    // 0x1a5028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a502c:
    // 0x1a502c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a5030:
    // 0x1a5030: 0xac400688  sw          $zero, 0x688($v0)
    ctx->pc = 0x1a5030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1672), GPR_U32(ctx, 0));
label_1a5034:
    // 0x1a5034: 0x8e640680  lw          $a0, 0x680($s3)
    ctx->pc = 0x1a5034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1a5038:
    // 0x1a5038: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a5038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a503c:
    // 0x1a503c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a5040:
    // 0x1a5040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a5044:
    // 0x1a5044: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a5048:
    // 0x1a5048: 0xac400690  sw          $zero, 0x690($v0)
    ctx->pc = 0x1a5048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1680), GPR_U32(ctx, 0));
label_1a504c:
    // 0x1a504c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a5050:
    // 0x1a5050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a5054:
    // 0x1a5054: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a5054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a5058:
    // 0x1a5058: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a5058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a505c:
    // 0x1a505c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a505cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a5060:
    // 0x1a5060: 0x320f809  jalr        $t9
label_1a5064:
    if (ctx->pc == 0x1A5064u) {
        ctx->pc = 0x1A5068u;
        goto label_1a5068;
    }
    ctx->pc = 0x1A5060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5068u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5060u, 0x1A5068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5068u;
label_1a5068:
    // 0x1a5068: 0x8e620680  lw          $v0, 0x680($s3)
    ctx->pc = 0x1a5068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1a506c:
    // 0x1a506c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a5070:
    // 0x1a5070: 0x10000016  b           . + 4 + (0x16 << 2)
label_1a5074:
    if (ctx->pc == 0x1A5074u) {
        ctx->pc = 0x1A5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5070u;
        // 0x1a5074: 0xae620680  sw          $v0, 0x680($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5078u;
        goto label_1a5078;
    }
    ctx->pc = 0x1A5070u;
    {
        const bool branch_taken_0x1a5070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5070u;
        // 0x1a5074: 0xae620680  sw          $v0, 0x680($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5070) {
            ctx->pc = 0x1A50CCu;
            goto label_1a50cc;
        }
    }
    ctx->pc = 0x1A5078u;
label_1a5078:
    // 0x1a5078: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a5078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a507c:
    // 0x1a507c: 0xfe620788  sd          $v0, 0x788($s3)
    ctx->pc = 0x1a507cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1928), GPR_U64(ctx, 2));
label_1a5080:
    // 0x1a5080: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a5080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a5084:
    // 0x1a5084: 0xfe620790  sd          $v0, 0x790($s3)
    ctx->pc = 0x1a5084u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1936), GPR_U64(ctx, 2));
label_1a5088:
    // 0x1a5088: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1a5088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1a508c:
    // 0x1a508c: 0xfe620798  sd          $v0, 0x798($s3)
    ctx->pc = 0x1a508cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1944), GPR_U64(ctx, 2));
label_1a5090:
    // 0x1a5090: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1a5090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1a5094:
    // 0x1a5094: 0xfe6207a0  sd          $v0, 0x7A0($s3)
    ctx->pc = 0x1a5094u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1952), GPR_U64(ctx, 2));
label_1a5098:
    // 0x1a5098: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1a5098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1a509c:
    // 0x1a509c: 0xfe6207a8  sd          $v0, 0x7A8($s3)
    ctx->pc = 0x1a509cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1960), GPR_U64(ctx, 2));
label_1a50a0:
    // 0x1a50a0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1a50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1a50a4:
    // 0x1a50a4: 0xfe6207b0  sd          $v0, 0x7B0($s3)
    ctx->pc = 0x1a50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1968), GPR_U64(ctx, 2));
label_1a50a8:
    // 0x1a50a8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1a50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1a50ac:
    // 0x1a50ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a50b0:
    if (ctx->pc == 0x1A50B0u) {
        ctx->pc = 0x1A50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50ACu;
        // 0x1a50b0: 0xfe6207b8  sd          $v0, 0x7B8($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 1976), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50B4u;
        goto label_1a50b4;
    }
    ctx->pc = 0x1A50ACu;
    {
        const bool branch_taken_0x1a50ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50ACu;
        // 0x1a50b0: 0xfe6207b8  sd          $v0, 0x7B8($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 1976), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50ac) {
            ctx->pc = 0x1A50CCu;
            goto label_1a50cc;
        }
    }
    ctx->pc = 0x1A50B4u;
label_1a50b4:
    // 0x1a50b4: 0x0  nop
    ctx->pc = 0x1a50b4u;
    // NOP
label_1a50b8:
    // 0x1a50b8: 0x8e6207c0  lw          $v0, 0x7C0($s3)
    ctx->pc = 0x1a50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1984)));
label_1a50bc:
    // 0x1a50bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a50c0:
    if (ctx->pc == 0x1A50C0u) {
        ctx->pc = 0x1A50C4u;
        goto label_1a50c4;
    }
    ctx->pc = 0x1A50BCu;
    {
        const bool branch_taken_0x1a50bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a50bc) {
            ctx->pc = 0x1A50CCu;
            goto label_1a50cc;
        }
    }
    ctx->pc = 0x1A50C4u;
label_1a50c4:
    // 0x1a50c4: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x1a50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_1a50c8:
    // 0x1a50c8: 0xae6207c0  sw          $v0, 0x7C0($s3)
    ctx->pc = 0x1a50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1984), GPR_U32(ctx, 2));
label_1a50cc:
    // 0x1a50cc: 0x0  nop
    ctx->pc = 0x1a50ccu;
    // NOP
label_1a50d0:
    // 0x1a50d0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a50d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1a50d4:
    // 0x1a50d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a50d8:
    // 0x1a50d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a50dc:
    // 0x1a50dc: 0x1062ffb0  beq         $v1, $v0, . + 4 + (-0x50 << 2)
label_1a50e0:
    if (ctx->pc == 0x1A50E0u) {
        ctx->pc = 0x1A50E4u;
        goto label_1a50e4;
    }
    ctx->pc = 0x1A50DCu;
    {
        const bool branch_taken_0x1a50dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a50dc) {
            ctx->pc = 0x1A4FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4fa0;
        }
    }
    ctx->pc = 0x1A50E4u;
label_1a50e4:
    // 0x1a50e4: 0xc063e14  jal         func_18F850
label_1a50e8:
    if (ctx->pc == 0x1A50E8u) {
        ctx->pc = 0x1A50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50E4u;
        // 0x1a50e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50ECu;
        goto label_1a50ec;
    }
    ctx->pc = 0x1A50E4u;
    SET_GPR_U32(ctx, 31, 0x1A50ECu);
    ctx->pc = 0x1A50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A50E4u;
    // 0x1a50e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A50E4u, 0x1A50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50ECu;
label_1a50ec:
    // 0x1a50ec: 0xc058018  jal         func_160060
label_1a50f0:
    if (ctx->pc == 0x1A50F0u) {
        ctx->pc = 0x1A50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50ECu;
        // 0x1a50f0: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50F4u;
        goto label_1a50f4;
    }
    ctx->pc = 0x1A50ECu;
    SET_GPR_U32(ctx, 31, 0x1A50F4u);
    ctx->pc = 0x1A50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A50ECu;
    // 0x1a50f0: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1A50ECu, 0x1A50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50F4u;
label_1a50f4:
    // 0x1a50f4: 0xae60073c  sw          $zero, 0x73C($s3)
    ctx->pc = 0x1a50f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1852), GPR_U32(ctx, 0));
label_1a50f8:
    // 0x1a50f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a50fc:
    // 0x1a50fc: 0xa262075c  sb          $v0, 0x75C($s3)
    ctx->pc = 0x1a50fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1884), (uint8_t)GPR_U32(ctx, 2));
label_1a5100:
    // 0x1a5100: 0xae600760  sw          $zero, 0x760($s3)
    ctx->pc = 0x1a5100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1888), GPR_U32(ctx, 0));
label_1a5104:
    // 0x1a5104: 0xae600764  sw          $zero, 0x764($s3)
    ctx->pc = 0x1a5104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1892), GPR_U32(ctx, 0));
label_1a5108:
    // 0x1a5108: 0xae600768  sw          $zero, 0x768($s3)
    ctx->pc = 0x1a5108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1896), GPR_U32(ctx, 0));
label_1a510c:
    // 0x1a510c: 0xae60076c  sw          $zero, 0x76C($s3)
    ctx->pc = 0x1a510cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1900), GPR_U32(ctx, 0));
label_1a5110:
    // 0x1a5110: 0xae600770  sw          $zero, 0x770($s3)
    ctx->pc = 0x1a5110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1904), GPR_U32(ctx, 0));
label_1a5114:
    // 0x1a5114: 0xae600774  sw          $zero, 0x774($s3)
    ctx->pc = 0x1a5114u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1908), GPR_U32(ctx, 0));
label_1a5118:
    // 0x1a5118: 0xae600778  sw          $zero, 0x778($s3)
    ctx->pc = 0x1a5118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1912), GPR_U32(ctx, 0));
label_1a511c:
    // 0x1a511c: 0xae60077c  sw          $zero, 0x77C($s3)
    ctx->pc = 0x1a511cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1916), GPR_U32(ctx, 0));
label_1a5120:
    // 0x1a5120: 0xae6007c4  sw          $zero, 0x7C4($s3)
    ctx->pc = 0x1a5120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1988), GPR_U32(ctx, 0));
label_1a5124:
    // 0x1a5124: 0xae6007c8  sw          $zero, 0x7C8($s3)
    ctx->pc = 0x1a5124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1992), GPR_U32(ctx, 0));
label_1a5128:
    // 0x1a5128: 0xae6007cc  sw          $zero, 0x7CC($s3)
    ctx->pc = 0x1a5128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1996), GPR_U32(ctx, 0));
label_1a512c:
    // 0x1a512c: 0xae6007d0  sw          $zero, 0x7D0($s3)
    ctx->pc = 0x1a512cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2000), GPR_U32(ctx, 0));
label_1a5130:
    // 0x1a5130: 0xae6007d4  sw          $zero, 0x7D4($s3)
    ctx->pc = 0x1a5130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2004), GPR_U32(ctx, 0));
label_1a5134:
    // 0x1a5134: 0xae6007d8  sw          $zero, 0x7D8($s3)
    ctx->pc = 0x1a5134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2008), GPR_U32(ctx, 0));
label_1a5138:
    // 0x1a5138: 0xae6007dc  sw          $zero, 0x7DC($s3)
    ctx->pc = 0x1a5138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2012), GPR_U32(ctx, 0));
label_1a513c:
    // 0x1a513c: 0xae6007e0  sw          $zero, 0x7E0($s3)
    ctx->pc = 0x1a513cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2016), GPR_U32(ctx, 0));
label_1a5140:
    // 0x1a5140: 0xae6007e4  sw          $zero, 0x7E4($s3)
    ctx->pc = 0x1a5140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2020), GPR_U32(ctx, 0));
label_1a5144:
    // 0x1a5144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5148:
    // 0x1a5148: 0xc063e14  jal         func_18F850
label_1a514c:
    if (ctx->pc == 0x1A514Cu) {
        ctx->pc = 0x1A5150u;
        goto label_1a5150;
    }
    ctx->pc = 0x1A5148u;
    SET_GPR_U32(ctx, 31, 0x1A5150u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A5148u, 0x1A5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5150u;
label_1a5150:
    // 0x1a5150: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5154:
    // 0x1a5154: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1a5154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1a5158:
    // 0x1a5158: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a515c:
    // 0x1a515c: 0x26640930  addiu       $a0, $s3, 0x930
    ctx->pc = 0x1a515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
label_1a5160:
    // 0x1a5160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a5164:
    // 0x1a5164: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1a5164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1a5168:
    // 0x1a5168: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a516c:
    // 0x1a516c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a516cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a5170:
    // 0x1a5170: 0xc0699e0  jal         func_1A6780
label_1a5174:
    if (ctx->pc == 0x1A5174u) {
        ctx->pc = 0x1A5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5170u;
        // 0x1a5174: 0xae620758  sw          $v0, 0x758($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5178u;
        goto label_1a5178;
    }
    ctx->pc = 0x1A5170u;
    SET_GPR_U32(ctx, 31, 0x1A5178u);
    ctx->pc = 0x1A5174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5170u;
    // 0x1a5174: 0xae620758  sw          $v0, 0x758($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6780u, 0x1A5170u, 0x1A5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5178u;
label_1a5178:
    // 0x1a5178: 0x9262093c  lbu         $v0, 0x93C($s3)
    ctx->pc = 0x1a5178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2364)));
label_1a517c:
    // 0x1a517c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_1a5180:
    if (ctx->pc == 0x1A5180u) {
        ctx->pc = 0x1A5184u;
        goto label_1a5184;
    }
    ctx->pc = 0x1A517Cu;
    {
        const bool branch_taken_0x1a517c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a517c) {
            ctx->pc = 0x1A5328u;
            goto label_1a5328;
        }
    }
    ctx->pc = 0x1A5184u;
label_1a5184:
    // 0x1a5184: 0xa260075c  sb          $zero, 0x75C($s3)
    ctx->pc = 0x1a5184u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1884), (uint8_t)GPR_U32(ctx, 0));
label_1a5188:
    // 0x1a5188: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a5188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a518c:
    // 0x1a518c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a518cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5190:
    // 0x1a5190: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x1a5190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1a5194:
    // 0x1a5194: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a5194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a5198:
    // 0x1a5198: 0x8c630684  lw          $v1, 0x684($v1)
    ctx->pc = 0x1a5198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1668)));
label_1a519c:
    // 0x1a519c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a519cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a51a0:
    // 0x1a51a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a51a4:
    // 0x1a51a4: 0x8c542cd8  lw          $s4, 0x2CD8($v0)
    ctx->pc = 0x1a51a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a51a8:
    // 0x1a51a8: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x1a51a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1a51ac:
    // 0x1a51ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a51acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a51b0:
    // 0x1a51b0: 0x320f809  jalr        $t9
label_1a51b4:
    if (ctx->pc == 0x1A51B4u) {
        ctx->pc = 0x1A51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51B0u;
        // 0x1a51b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51B8u;
        goto label_1a51b8;
    }
    ctx->pc = 0x1A51B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A51B8u);
        ctx->pc = 0x1A51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51B0u;
        // 0x1a51b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A51B0u, 0x1A51B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A51B8u;
label_1a51b8:
    // 0x1a51b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a51b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a51bc:
    // 0x1a51bc: 0xc05ee1c  jal         func_17B870
label_1a51c0:
    if (ctx->pc == 0x1A51C0u) {
        ctx->pc = 0x1A51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51BCu;
        // 0x1a51c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51C4u;
        goto label_1a51c4;
    }
    ctx->pc = 0x1A51BCu;
    SET_GPR_U32(ctx, 31, 0x1A51C4u);
    ctx->pc = 0x1A51C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51BCu;
    // 0x1a51c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x1A51BCu, 0x1A51C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51C4u;
label_1a51c4:
    // 0x1a51c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a51c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a51c8:
    // 0x1a51c8: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x1a51c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_1a51cc:
    // 0x1a51cc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1a51d0:
    if (ctx->pc == 0x1A51D0u) {
        ctx->pc = 0x1A51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51CCu;
        // 0x1a51d0: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51D4u;
        goto label_1a51d4;
    }
    ctx->pc = 0x1A51CCu;
    {
        const bool branch_taken_0x1a51cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51CCu;
        // 0x1a51d0: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51cc) {
            ctx->pc = 0x1A5190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5190;
        }
    }
    ctx->pc = 0x1A51D4u;
label_1a51d4:
    // 0x1a51d4: 0xc069a9c  jal         func_1A6A70
label_1a51d8:
    if (ctx->pc == 0x1A51D8u) {
        ctx->pc = 0x1A51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51D4u;
        // 0x1a51d8: 0x26640930  addiu       $a0, $s3, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51DCu;
        goto label_1a51dc;
    }
    ctx->pc = 0x1A51D4u;
    SET_GPR_U32(ctx, 31, 0x1A51DCu);
    ctx->pc = 0x1A51D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51D4u;
    // 0x1a51d8: 0x26640930  addiu       $a0, $s3, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A70u, 0x1A51D4u, 0x1A51DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51DCu;
label_1a51dc:
    // 0x1a51dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a51dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a51e0:
    // 0x1a51e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a51e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a51e4:
    // 0x1a51e4: 0x24a504f8  addiu       $a1, $a1, 0x4F8
    ctx->pc = 0x1a51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1272));
label_1a51e8:
    // 0x1a51e8: 0xc064a88  jal         func_192A20
label_1a51ec:
    if (ctx->pc == 0x1A51ECu) {
        ctx->pc = 0x1A51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51E8u;
        // 0x1a51ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51F0u;
        goto label_1a51f0;
    }
    ctx->pc = 0x1A51E8u;
    SET_GPR_U32(ctx, 31, 0x1A51F0u);
    ctx->pc = 0x1A51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51E8u;
    // 0x1a51ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x1A51E8u, 0x1A51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51F0u;
label_1a51f0:
    // 0x1a51f0: 0xc063e14  jal         func_18F850
label_1a51f4:
    if (ctx->pc == 0x1A51F4u) {
        ctx->pc = 0x1A51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51F0u;
        // 0x1a51f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51F8u;
        goto label_1a51f8;
    }
    ctx->pc = 0x1A51F0u;
    SET_GPR_U32(ctx, 31, 0x1A51F8u);
    ctx->pc = 0x1A51F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51F0u;
    // 0x1a51f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A51F0u, 0x1A51F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51F8u;
label_1a51f8:
    // 0x1a51f8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1a51fc:
    if (ctx->pc == 0x1A51FCu) {
        ctx->pc = 0x1A5200u;
        goto label_1a5200;
    }
    ctx->pc = 0x1A51F8u;
    {
        const bool branch_taken_0x1a51f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a51f8) {
            ctx->pc = 0x1A5328u;
            goto label_1a5328;
        }
    }
    ctx->pc = 0x1A5200u;
label_1a5200:
    // 0x1a5200: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a5200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a5204:
    // 0x1a5204: 0xde660780  ld          $a2, 0x780($s3)
    ctx->pc = 0x1a5204u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 1920)));
label_1a5208:
    // 0x1a5208: 0xdc452818  ld          $a1, 0x2818($v0)
    ctx->pc = 0x1a5208u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
label_1a520c:
    // 0x1a520c: 0xc06972c  jal         func_1A5CB0
label_1a5210:
    if (ctx->pc == 0x1A5210u) {
        ctx->pc = 0x1A5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A520Cu;
        // 0x1a5210: 0x26640950  addiu       $a0, $s3, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5214u;
        goto label_1a5214;
    }
    ctx->pc = 0x1A520Cu;
    SET_GPR_U32(ctx, 31, 0x1A5214u);
    ctx->pc = 0x1A5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A520Cu;
    // 0x1a5210: 0x26640950  addiu       $a0, $s3, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5CB0u, 0x1A520Cu, 0x1A5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5214u;
label_1a5214:
    // 0x1a5214: 0x8e650780  lw          $a1, 0x780($s3)
    ctx->pc = 0x1a5214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1920)));
label_1a5218:
    // 0x1a5218: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a521c:
    // 0x1a521c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a521cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5220:
    // 0x1a5220: 0xc064b08  jal         func_192C20
label_1a5224:
    if (ctx->pc == 0x1A5224u) {
        ctx->pc = 0x1A5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5220u;
        // 0x1a5224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5228u;
        goto label_1a5228;
    }
    ctx->pc = 0x1A5220u;
    SET_GPR_U32(ctx, 31, 0x1A5228u);
    ctx->pc = 0x1A5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5220u;
    // 0x1a5224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x1A5220u, 0x1A5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5228u;
label_1a5228:
    // 0x1a5228: 0x8e6207c0  lw          $v0, 0x7C0($s3)
    ctx->pc = 0x1a5228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1984)));
label_1a522c:
    // 0x1a522c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a5230:
    if (ctx->pc == 0x1A5230u) {
        ctx->pc = 0x1A5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A522Cu;
        // 0x1a5230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5234u;
        goto label_1a5234;
    }
    ctx->pc = 0x1A522Cu;
    {
        const bool branch_taken_0x1a522c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A522Cu;
        // 0x1a5230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a522c) {
            ctx->pc = 0x1A5244u;
            goto label_1a5244;
        }
    }
    ctx->pc = 0x1A5234u;
label_1a5234:
    // 0x1a5234: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5238:
    // 0x1a5238: 0xc064fb8  jal         func_193EE0
label_1a523c:
    if (ctx->pc == 0x1A523Cu) {
        ctx->pc = 0x1A523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5238u;
        // 0x1a523c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5240u;
        goto label_1a5240;
    }
    ctx->pc = 0x1A5238u;
    SET_GPR_U32(ctx, 31, 0x1A5240u);
    ctx->pc = 0x1A523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5238u;
    // 0x1a523c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A5238u, 0x1A5240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5240u;
label_1a5240:
    // 0x1a5240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5244:
    // 0x1a5244: 0xc063e14  jal         func_18F850
label_1a5248:
    if (ctx->pc == 0x1A5248u) {
        ctx->pc = 0x1A524Cu;
        goto label_1a524c;
    }
    ctx->pc = 0x1A5244u;
    SET_GPR_U32(ctx, 31, 0x1A524Cu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A5244u, 0x1A524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A524Cu;
label_1a524c:
    // 0x1a524c: 0x10000036  b           . + 4 + (0x36 << 2)
label_1a5250:
    if (ctx->pc == 0x1A5250u) {
        ctx->pc = 0x1A5254u;
        goto label_1a5254;
    }
    ctx->pc = 0x1A524Cu;
    {
        const bool branch_taken_0x1a524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a524c) {
            ctx->pc = 0x1A5328u;
            goto label_1a5328;
        }
    }
    ctx->pc = 0x1A5254u;
label_1a5254:
    // 0x1a5254: 0x26640950  addiu       $a0, $s3, 0x950
    ctx->pc = 0x1a5254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
label_1a5258:
    // 0x1a5258: 0xc06977c  jal         func_1A5DF0
label_1a525c:
    if (ctx->pc == 0x1A525Cu) {
        ctx->pc = 0x1A5260u;
        goto label_1a5260;
    }
    ctx->pc = 0x1A5258u;
    SET_GPR_U32(ctx, 31, 0x1A5260u);
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x1A5258u, 0x1A5260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5260u;
label_1a5260:
    // 0x1a5260: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_1a5264:
    if (ctx->pc == 0x1A5264u) {
        ctx->pc = 0x1A5268u;
        goto label_1a5268;
    }
    ctx->pc = 0x1A5260u;
    {
        const bool branch_taken_0x1a5260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5260) {
            ctx->pc = 0x1A5328u;
            goto label_1a5328;
        }
    }
    ctx->pc = 0x1A5268u;
label_1a5268:
    // 0x1a5268: 0xc063e14  jal         func_18F850
label_1a526c:
    if (ctx->pc == 0x1A526Cu) {
        ctx->pc = 0x1A526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5268u;
        // 0x1a526c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5270u;
        goto label_1a5270;
    }
    ctx->pc = 0x1A5268u;
    SET_GPR_U32(ctx, 31, 0x1A5270u);
    ctx->pc = 0x1A526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5268u;
    // 0x1a526c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A5268u, 0x1A5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5270u;
label_1a5270:
    // 0x1a5270: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1a5274:
    if (ctx->pc == 0x1A5274u) {
        ctx->pc = 0x1A5278u;
        goto label_1a5278;
    }
    ctx->pc = 0x1A5270u;
    {
        const bool branch_taken_0x1a5270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5270) {
            ctx->pc = 0x1A5328u;
            goto label_1a5328;
        }
    }
    ctx->pc = 0x1A5278u;
label_1a5278:
    // 0x1a5278: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a5278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a527c:
    // 0x1a527c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1a5280:
    // 0x1a5280: 0x0  nop
    ctx->pc = 0x1a5280u;
    // NOP
label_1a5284:
    // 0x1a5284: 0x0  nop
    ctx->pc = 0x1a5284u;
    // NOP
label_1a5288:
    // 0x1a5288: 0x0  nop
    ctx->pc = 0x1a5288u;
    // NOP
label_1a528c:
    // 0x1a528c: 0x0  nop
    ctx->pc = 0x1a528cu;
    // NOP
label_1a5290:
    // 0x1a5290: 0x1860fffa  blez        $v1, . + 4 + (-0x6 << 2)
label_1a5294:
    if (ctx->pc == 0x1A5294u) {
        ctx->pc = 0x1A5298u;
        goto label_1a5298;
    }
    ctx->pc = 0x1A5290u;
    {
        const bool branch_taken_0x1a5290 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a5290) {
            ctx->pc = 0x1A527Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a527c;
        }
    }
    ctx->pc = 0x1A5298u;
label_1a5298:
    // 0x1a5298: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1a5298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1a529c:
    // 0x1a529c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1a52a0:
    if (ctx->pc == 0x1A52A0u) {
        ctx->pc = 0x1A52A4u;
        goto label_1a52a4;
    }
    ctx->pc = 0x1A529Cu;
    {
        const bool branch_taken_0x1a529c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a529c) {
            ctx->pc = 0x1A52C0u;
            goto label_1a52c0;
        }
    }
    ctx->pc = 0x1A52A4u;
label_1a52a4:
    // 0x1a52a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a52a8:
    // 0x1a52a8: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x1a52a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1a52ac:
    // 0x1a52ac: 0x0  nop
    ctx->pc = 0x1a52acu;
    // NOP
label_1a52b0:
    // 0x1a52b0: 0x0  nop
    ctx->pc = 0x1a52b0u;
    // NOP
label_1a52b4:
    // 0x1a52b4: 0x0  nop
    ctx->pc = 0x1a52b4u;
    // NOP
label_1a52b8:
    // 0x1a52b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a52bc:
    if (ctx->pc == 0x1A52BCu) {
        ctx->pc = 0x1A52C0u;
        goto label_1a52c0;
    }
    ctx->pc = 0x1A52B8u;
    {
        const bool branch_taken_0x1a52b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a52b8) {
            ctx->pc = 0x1A52A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a52a4;
        }
    }
    ctx->pc = 0x1A52C0u;
label_1a52c0:
    // 0x1a52c0: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x1a52c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
label_1a52c4:
    // 0x1a52c4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1a52c8:
    if (ctx->pc == 0x1A52C8u) {
        ctx->pc = 0x1A52CCu;
        goto label_1a52cc;
    }
    ctx->pc = 0x1A52C4u;
    {
        const bool branch_taken_0x1a52c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a52c4) {
            ctx->pc = 0x1A52E8u;
            goto label_1a52e8;
        }
    }
    ctx->pc = 0x1A52CCu;
label_1a52cc:
    // 0x1a52cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a52ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a52d0:
    // 0x1a52d0: 0xc067f68  jal         func_19FDA0
label_1a52d4:
    if (ctx->pc == 0x1A52D4u) {
        ctx->pc = 0x1A52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52D0u;
        // 0x1a52d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52D8u;
        goto label_1a52d8;
    }
    ctx->pc = 0x1A52D0u;
    SET_GPR_U32(ctx, 31, 0x1A52D8u);
    ctx->pc = 0x1A52D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52D0u;
    // 0x1a52d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A52D0u, 0x1A52D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52D8u;
label_1a52d8:
    // 0x1a52d8: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x1a52d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
label_1a52dc:
    // 0x1a52dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a52dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a52e0:
    // 0x1a52e0: 0xc067f68  jal         func_19FDA0
label_1a52e4:
    if (ctx->pc == 0x1A52E4u) {
        ctx->pc = 0x1A52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52E0u;
        // 0x1a52e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52E8u;
        goto label_1a52e8;
    }
    ctx->pc = 0x1A52E0u;
    SET_GPR_U32(ctx, 31, 0x1A52E8u);
    ctx->pc = 0x1A52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52E0u;
    // 0x1a52e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A52E0u, 0x1A52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52E8u;
label_1a52e8:
    // 0x1a52e8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a52ec:
    // 0x1a52ec: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a52ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a52f0:
    // 0x1a52f0: 0xc06bd9c  jal         func_1AF670
label_1a52f4:
    if (ctx->pc == 0x1A52F4u) {
        ctx->pc = 0x1A52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52F0u;
        // 0x1a52f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52F8u;
        goto label_1a52f8;
    }
    ctx->pc = 0x1A52F0u;
    SET_GPR_U32(ctx, 31, 0x1A52F8u);
    ctx->pc = 0x1A52F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52F0u;
    // 0x1a52f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1A52F0u, 0x1A52F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52F8u;
label_1a52f8:
    // 0x1a52f8: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1a52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a52fc:
    // 0x1a52fc: 0xa06028f5  sb          $zero, 0x28F5($v1)
    ctx->pc = 0x1a52fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
label_1a5300:
    // 0x1a5300: 0x8e630a60  lw          $v1, 0xA60($s3)
    ctx->pc = 0x1a5300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2656)));
label_1a5304:
    // 0x1a5304: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
label_1a5308:
    if (ctx->pc == 0x1A5308u) {
        ctx->pc = 0x1A5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5304u;
        // 0x1a5308: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A530Cu;
        goto label_1a530c;
    }
    ctx->pc = 0x1A5304u;
    {
        const bool branch_taken_0x1a5304 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5304u;
        // 0x1a5308: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5304) {
            ctx->pc = 0x1A53E4u;
            goto label_1a53e4;
        }
    }
    ctx->pc = 0x1A530Cu;
label_1a530c:
    // 0x1a530c: 0x8e79031c  lw          $t9, 0x31C($s3)
    ctx->pc = 0x1a530cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_1a5310:
    // 0x1a5310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5314:
    // 0x1a5314: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a5314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a5318:
    // 0x1a5318: 0x320f809  jalr        $t9
label_1a531c:
    if (ctx->pc == 0x1A531Cu) {
        ctx->pc = 0x1A531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5318u;
        // 0x1a531c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5320u;
        goto label_1a5320;
    }
    ctx->pc = 0x1A5318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5320u);
        ctx->pc = 0x1A531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5318u;
        // 0x1a531c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5318u, 0x1A5320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5320u;
label_1a5320:
    // 0x1a5320: 0x10000031  b           . + 4 + (0x31 << 2)
label_1a5324:
    if (ctx->pc == 0x1A5324u) {
        ctx->pc = 0x1A5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5320u;
        // 0x1a5324: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5328u;
        goto label_1a5328;
    }
    ctx->pc = 0x1A5320u;
    {
        const bool branch_taken_0x1a5320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5320u;
        // 0x1a5324: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5320) {
            ctx->pc = 0x1A53E8u;
            goto label_1a53e8;
        }
    }
    ctx->pc = 0x1A5328u;
label_1a5328:
    // 0x1a5328: 0xc067f08  jal         func_19FC20
label_1a532c:
    if (ctx->pc == 0x1A532Cu) {
        ctx->pc = 0x1A5330u;
        goto label_1a5330;
    }
    ctx->pc = 0x1A5328u;
    SET_GPR_U32(ctx, 31, 0x1A5330u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1A5328u, 0x1A5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5330u;
label_1a5330:
    // 0x1a5330: 0xae620750  sw          $v0, 0x750($s3)
    ctx->pc = 0x1a5330u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1872), GPR_U32(ctx, 2));
label_1a5334:
    // 0x1a5334: 0x8e620750  lw          $v0, 0x750($s3)
    ctx->pc = 0x1a5334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
label_1a5338:
    // 0x1a5338: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a533c:
    if (ctx->pc == 0x1A533Cu) {
        ctx->pc = 0x1A5340u;
        goto label_1a5340;
    }
    ctx->pc = 0x1A5338u;
    {
        const bool branch_taken_0x1a5338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5338) {
            ctx->pc = 0x1A538Cu;
            goto label_1a538c;
        }
    }
    ctx->pc = 0x1A5340u;
label_1a5340:
    // 0x1a5340: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x1a5340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_1a5344:
    // 0x1a5344: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a5344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a5348:
    // 0x1a5348: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1a534c:
    if (ctx->pc == 0x1A534Cu) {
        ctx->pc = 0x1A5350u;
        goto label_1a5350;
    }
    ctx->pc = 0x1A5348u;
    {
        const bool branch_taken_0x1a5348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5348) {
            ctx->pc = 0x1A538Cu;
            goto label_1a538c;
        }
    }
    ctx->pc = 0x1A5350u;
label_1a5350:
    // 0x1a5350: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a5350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a5354:
    // 0x1a5354: 0x8c833ddc  lw          $v1, 0x3DDC($a0)
    ctx->pc = 0x1a5354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15836)));
label_1a5358:
    // 0x1a5358: 0x8c823dd8  lw          $v0, 0x3DD8($a0)
    ctx->pc = 0x1a5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15832)));
label_1a535c:
    // 0x1a535c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1a5360:
    if (ctx->pc == 0x1A5360u) {
        ctx->pc = 0x1A5364u;
        goto label_1a5364;
    }
    ctx->pc = 0x1A535Cu;
    {
        const bool branch_taken_0x1a535c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a535c) {
            ctx->pc = 0x1A5380u;
            goto label_1a5380;
        }
    }
    ctx->pc = 0x1A5364u;
label_1a5364:
    // 0x1a5364: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a5368:
    // 0x1a5368: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a5368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a536c:
    // 0x1a536c: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x1a536cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_1a5370:
    // 0x1a5370: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a5370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a5374:
    // 0x1a5374: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a5374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a5378:
    // 0x1a5378: 0x320f809  jalr        $t9
label_1a537c:
    if (ctx->pc == 0x1A537Cu) {
        ctx->pc = 0x1A5380u;
        goto label_1a5380;
    }
    ctx->pc = 0x1A5378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5380u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5378u, 0x1A5380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5380u;
label_1a5380:
    // 0x1a5380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5384:
    // 0x1a5384: 0xc063e08  jal         func_18F820
label_1a5388:
    if (ctx->pc == 0x1A5388u) {
        ctx->pc = 0x1A5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5384u;
        // 0x1a5388: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A538Cu;
        goto label_1a538c;
    }
    ctx->pc = 0x1A5384u;
    SET_GPR_U32(ctx, 31, 0x1A538Cu);
    ctx->pc = 0x1A5388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5384u;
    // 0x1a5388: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A5384u, 0x1A538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A538Cu;
label_1a538c:
    // 0x1a538c: 0x9262075c  lbu         $v0, 0x75C($s3)
    ctx->pc = 0x1a538cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1884)));
label_1a5390:
    // 0x1a5390: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a5394:
    if (ctx->pc == 0x1A5394u) {
        ctx->pc = 0x1A5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5390u;
        // 0x1a5394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5398u;
        goto label_1a5398;
    }
    ctx->pc = 0x1A5390u;
    {
        const bool branch_taken_0x1a5390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5390u;
        // 0x1a5394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5390) {
            ctx->pc = 0x1A53B8u;
            goto label_1a53b8;
        }
    }
    ctx->pc = 0x1A5398u;
label_1a5398:
    // 0x1a5398: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1a5398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_1a539c:
    // 0x1a539c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1a539cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_1a53a0:
    // 0x1a53a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a53a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a53a4:
    // 0x1a53a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a53a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a53a8:
    // 0x1a53a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1a53a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1a53ac:
    // 0x1a53ac: 0xc06282c  jal         func_18A0B0
label_1a53b0:
    if (ctx->pc == 0x1A53B0u) {
        ctx->pc = 0x1A53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53ACu;
        // 0x1a53b0: 0x266407f0  addiu       $a0, $s3, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53B4u;
        goto label_1a53b4;
    }
    ctx->pc = 0x1A53ACu;
    SET_GPR_U32(ctx, 31, 0x1A53B4u);
    ctx->pc = 0x1A53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53ACu;
    // 0x1a53b0: 0x266407f0  addiu       $a0, $s3, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1A53ACu, 0x1A53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53B4u;
label_1a53b4:
    // 0x1a53b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a53b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a53b8:
    // 0x1a53b8: 0xc069538  jal         func_1A54E0
label_1a53bc:
    if (ctx->pc == 0x1A53BCu) {
        ctx->pc = 0x1A53C0u;
        goto label_1a53c0;
    }
    ctx->pc = 0x1A53B8u;
    SET_GPR_U32(ctx, 31, 0x1A53C0u);
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1A53B8u, 0x1A53C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53C0u;
label_1a53c0:
    // 0x1a53c0: 0xc06957c  jal         func_1A55F0
label_1a53c4:
    if (ctx->pc == 0x1A53C4u) {
        ctx->pc = 0x1A53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C0u;
        // 0x1a53c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53C8u;
        goto label_1a53c8;
    }
    ctx->pc = 0x1A53C0u;
    SET_GPR_U32(ctx, 31, 0x1A53C8u);
    ctx->pc = 0x1A53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53C0u;
    // 0x1a53c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A55F0u, 0x1A53C0u, 0x1A53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53C8u;
label_1a53c8:
    // 0x1a53c8: 0xc0695ac  jal         func_1A56B0
label_1a53cc:
    if (ctx->pc == 0x1A53CCu) {
        ctx->pc = 0x1A53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C8u;
        // 0x1a53cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53D0u;
        goto label_1a53d0;
    }
    ctx->pc = 0x1A53C8u;
    SET_GPR_U32(ctx, 31, 0x1A53D0u);
    ctx->pc = 0x1A53CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53C8u;
    // 0x1a53cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A56B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A56B0u, 0x1A53C8u, 0x1A53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53D0u;
label_1a53d0:
    // 0x1a53d0: 0x8e640a60  lw          $a0, 0xA60($s3)
    ctx->pc = 0x1a53d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2656)));
label_1a53d4:
    // 0x1a53d4: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1a53d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a53d8:
    // 0x1a53d8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1a53d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1a53dc:
    // 0x1a53dc: 0x320f809  jalr        $t9
label_1a53e0:
    if (ctx->pc == 0x1A53E0u) {
        ctx->pc = 0x1A53E4u;
        goto label_1a53e4;
    }
    ctx->pc = 0x1A53DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A53E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A53DCu, 0x1A53E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A53E4u;
label_1a53e4:
    // 0x1a53e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a53e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a53e8:
    // 0x1a53e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a53e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a53ec:
    // 0x1a53ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a53ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a53f0:
    // 0x1a53f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a53f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a53f4:
    // 0x1a53f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a53f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a53f8:
    // 0x1a53f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a53f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a53fc:
    // 0x1a53fc: 0x3e00008  jr          $ra
label_1a5400:
    if (ctx->pc == 0x1A5400u) {
        ctx->pc = 0x1A5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53FCu;
        // 0x1a5400: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5404u;
        goto label_fallthrough_0x1a53fc;
    }
    ctx->pc = 0x1A53FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53FCu;
        // 0x1a5400: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A53FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a53fc:
    ctx->pc = 0x1A5404u;
}
