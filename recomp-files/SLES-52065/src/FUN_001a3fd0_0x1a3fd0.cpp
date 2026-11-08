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

// Function: FUN_001a3fd0
// Address: 0x1a3fd0 - 0x1a4a00
void FUN_001a3fd0_0x1a3fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3fd0_0x1a3fd0");
#endif

    switch (ctx->pc) {
        case 0x1a3fd0u: goto label_1a3fd0;
        case 0x1a3fd4u: goto label_1a3fd4;
        case 0x1a3fd8u: goto label_1a3fd8;
        case 0x1a3fdcu: goto label_1a3fdc;
        case 0x1a3fe0u: goto label_1a3fe0;
        case 0x1a3fe4u: goto label_1a3fe4;
        case 0x1a3fe8u: goto label_1a3fe8;
        case 0x1a3fecu: goto label_1a3fec;
        case 0x1a3ff0u: goto label_1a3ff0;
        case 0x1a3ff4u: goto label_1a3ff4;
        case 0x1a3ff8u: goto label_1a3ff8;
        case 0x1a3ffcu: goto label_1a3ffc;
        case 0x1a4000u: goto label_1a4000;
        case 0x1a4004u: goto label_1a4004;
        case 0x1a4008u: goto label_1a4008;
        case 0x1a400cu: goto label_1a400c;
        case 0x1a4010u: goto label_1a4010;
        case 0x1a4014u: goto label_1a4014;
        case 0x1a4018u: goto label_1a4018;
        case 0x1a401cu: goto label_1a401c;
        case 0x1a4020u: goto label_1a4020;
        case 0x1a4024u: goto label_1a4024;
        case 0x1a4028u: goto label_1a4028;
        case 0x1a402cu: goto label_1a402c;
        case 0x1a4030u: goto label_1a4030;
        case 0x1a4034u: goto label_1a4034;
        case 0x1a4038u: goto label_1a4038;
        case 0x1a403cu: goto label_1a403c;
        case 0x1a4040u: goto label_1a4040;
        case 0x1a4044u: goto label_1a4044;
        case 0x1a4048u: goto label_1a4048;
        case 0x1a404cu: goto label_1a404c;
        case 0x1a4050u: goto label_1a4050;
        case 0x1a4054u: goto label_1a4054;
        case 0x1a4058u: goto label_1a4058;
        case 0x1a405cu: goto label_1a405c;
        case 0x1a4060u: goto label_1a4060;
        case 0x1a4064u: goto label_1a4064;
        case 0x1a4068u: goto label_1a4068;
        case 0x1a406cu: goto label_1a406c;
        case 0x1a4070u: goto label_1a4070;
        case 0x1a4074u: goto label_1a4074;
        case 0x1a4078u: goto label_1a4078;
        case 0x1a407cu: goto label_1a407c;
        case 0x1a4080u: goto label_1a4080;
        case 0x1a4084u: goto label_1a4084;
        case 0x1a4088u: goto label_1a4088;
        case 0x1a408cu: goto label_1a408c;
        case 0x1a4090u: goto label_1a4090;
        case 0x1a4094u: goto label_1a4094;
        case 0x1a4098u: goto label_1a4098;
        case 0x1a409cu: goto label_1a409c;
        case 0x1a40a0u: goto label_1a40a0;
        case 0x1a40a4u: goto label_1a40a4;
        case 0x1a40a8u: goto label_1a40a8;
        case 0x1a40acu: goto label_1a40ac;
        case 0x1a40b0u: goto label_1a40b0;
        case 0x1a40b4u: goto label_1a40b4;
        case 0x1a40b8u: goto label_1a40b8;
        case 0x1a40bcu: goto label_1a40bc;
        case 0x1a40c0u: goto label_1a40c0;
        case 0x1a40c4u: goto label_1a40c4;
        case 0x1a40c8u: goto label_1a40c8;
        case 0x1a40ccu: goto label_1a40cc;
        case 0x1a40d0u: goto label_1a40d0;
        case 0x1a40d4u: goto label_1a40d4;
        case 0x1a40d8u: goto label_1a40d8;
        case 0x1a40dcu: goto label_1a40dc;
        case 0x1a40e0u: goto label_1a40e0;
        case 0x1a40e4u: goto label_1a40e4;
        case 0x1a40e8u: goto label_1a40e8;
        case 0x1a40ecu: goto label_1a40ec;
        case 0x1a40f0u: goto label_1a40f0;
        case 0x1a40f4u: goto label_1a40f4;
        case 0x1a40f8u: goto label_1a40f8;
        case 0x1a40fcu: goto label_1a40fc;
        case 0x1a4100u: goto label_1a4100;
        case 0x1a4104u: goto label_1a4104;
        case 0x1a4108u: goto label_1a4108;
        case 0x1a410cu: goto label_1a410c;
        case 0x1a4110u: goto label_1a4110;
        case 0x1a4114u: goto label_1a4114;
        case 0x1a4118u: goto label_1a4118;
        case 0x1a411cu: goto label_1a411c;
        case 0x1a4120u: goto label_1a4120;
        case 0x1a4124u: goto label_1a4124;
        case 0x1a4128u: goto label_1a4128;
        case 0x1a412cu: goto label_1a412c;
        case 0x1a4130u: goto label_1a4130;
        case 0x1a4134u: goto label_1a4134;
        case 0x1a4138u: goto label_1a4138;
        case 0x1a413cu: goto label_1a413c;
        case 0x1a4140u: goto label_1a4140;
        case 0x1a4144u: goto label_1a4144;
        case 0x1a4148u: goto label_1a4148;
        case 0x1a414cu: goto label_1a414c;
        case 0x1a4150u: goto label_1a4150;
        case 0x1a4154u: goto label_1a4154;
        case 0x1a4158u: goto label_1a4158;
        case 0x1a415cu: goto label_1a415c;
        case 0x1a4160u: goto label_1a4160;
        case 0x1a4164u: goto label_1a4164;
        case 0x1a4168u: goto label_1a4168;
        case 0x1a416cu: goto label_1a416c;
        case 0x1a4170u: goto label_1a4170;
        case 0x1a4174u: goto label_1a4174;
        case 0x1a4178u: goto label_1a4178;
        case 0x1a417cu: goto label_1a417c;
        case 0x1a4180u: goto label_1a4180;
        case 0x1a4184u: goto label_1a4184;
        case 0x1a4188u: goto label_1a4188;
        case 0x1a418cu: goto label_1a418c;
        case 0x1a4190u: goto label_1a4190;
        case 0x1a4194u: goto label_1a4194;
        case 0x1a4198u: goto label_1a4198;
        case 0x1a419cu: goto label_1a419c;
        case 0x1a41a0u: goto label_1a41a0;
        case 0x1a41a4u: goto label_1a41a4;
        case 0x1a41a8u: goto label_1a41a8;
        case 0x1a41acu: goto label_1a41ac;
        case 0x1a41b0u: goto label_1a41b0;
        case 0x1a41b4u: goto label_1a41b4;
        case 0x1a41b8u: goto label_1a41b8;
        case 0x1a41bcu: goto label_1a41bc;
        case 0x1a41c0u: goto label_1a41c0;
        case 0x1a41c4u: goto label_1a41c4;
        case 0x1a41c8u: goto label_1a41c8;
        case 0x1a41ccu: goto label_1a41cc;
        case 0x1a41d0u: goto label_1a41d0;
        case 0x1a41d4u: goto label_1a41d4;
        case 0x1a41d8u: goto label_1a41d8;
        case 0x1a41dcu: goto label_1a41dc;
        case 0x1a41e0u: goto label_1a41e0;
        case 0x1a41e4u: goto label_1a41e4;
        case 0x1a41e8u: goto label_1a41e8;
        case 0x1a41ecu: goto label_1a41ec;
        case 0x1a41f0u: goto label_1a41f0;
        case 0x1a41f4u: goto label_1a41f4;
        case 0x1a41f8u: goto label_1a41f8;
        case 0x1a41fcu: goto label_1a41fc;
        case 0x1a4200u: goto label_1a4200;
        case 0x1a4204u: goto label_1a4204;
        case 0x1a4208u: goto label_1a4208;
        case 0x1a420cu: goto label_1a420c;
        case 0x1a4210u: goto label_1a4210;
        case 0x1a4214u: goto label_1a4214;
        case 0x1a4218u: goto label_1a4218;
        case 0x1a421cu: goto label_1a421c;
        case 0x1a4220u: goto label_1a4220;
        case 0x1a4224u: goto label_1a4224;
        case 0x1a4228u: goto label_1a4228;
        case 0x1a422cu: goto label_1a422c;
        case 0x1a4230u: goto label_1a4230;
        case 0x1a4234u: goto label_1a4234;
        case 0x1a4238u: goto label_1a4238;
        case 0x1a423cu: goto label_1a423c;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4244u: goto label_1a4244;
        case 0x1a4248u: goto label_1a4248;
        case 0x1a424cu: goto label_1a424c;
        case 0x1a4250u: goto label_1a4250;
        case 0x1a4254u: goto label_1a4254;
        case 0x1a4258u: goto label_1a4258;
        case 0x1a425cu: goto label_1a425c;
        case 0x1a4260u: goto label_1a4260;
        case 0x1a4264u: goto label_1a4264;
        case 0x1a4268u: goto label_1a4268;
        case 0x1a426cu: goto label_1a426c;
        case 0x1a4270u: goto label_1a4270;
        case 0x1a4274u: goto label_1a4274;
        case 0x1a4278u: goto label_1a4278;
        case 0x1a427cu: goto label_1a427c;
        case 0x1a4280u: goto label_1a4280;
        case 0x1a4284u: goto label_1a4284;
        case 0x1a4288u: goto label_1a4288;
        case 0x1a428cu: goto label_1a428c;
        case 0x1a4290u: goto label_1a4290;
        case 0x1a4294u: goto label_1a4294;
        case 0x1a4298u: goto label_1a4298;
        case 0x1a429cu: goto label_1a429c;
        case 0x1a42a0u: goto label_1a42a0;
        case 0x1a42a4u: goto label_1a42a4;
        case 0x1a42a8u: goto label_1a42a8;
        case 0x1a42acu: goto label_1a42ac;
        case 0x1a42b0u: goto label_1a42b0;
        case 0x1a42b4u: goto label_1a42b4;
        case 0x1a42b8u: goto label_1a42b8;
        case 0x1a42bcu: goto label_1a42bc;
        case 0x1a42c0u: goto label_1a42c0;
        case 0x1a42c4u: goto label_1a42c4;
        case 0x1a42c8u: goto label_1a42c8;
        case 0x1a42ccu: goto label_1a42cc;
        case 0x1a42d0u: goto label_1a42d0;
        case 0x1a42d4u: goto label_1a42d4;
        case 0x1a42d8u: goto label_1a42d8;
        case 0x1a42dcu: goto label_1a42dc;
        case 0x1a42e0u: goto label_1a42e0;
        case 0x1a42e4u: goto label_1a42e4;
        case 0x1a42e8u: goto label_1a42e8;
        case 0x1a42ecu: goto label_1a42ec;
        case 0x1a42f0u: goto label_1a42f0;
        case 0x1a42f4u: goto label_1a42f4;
        case 0x1a42f8u: goto label_1a42f8;
        case 0x1a42fcu: goto label_1a42fc;
        case 0x1a4300u: goto label_1a4300;
        case 0x1a4304u: goto label_1a4304;
        case 0x1a4308u: goto label_1a4308;
        case 0x1a430cu: goto label_1a430c;
        case 0x1a4310u: goto label_1a4310;
        case 0x1a4314u: goto label_1a4314;
        case 0x1a4318u: goto label_1a4318;
        case 0x1a431cu: goto label_1a431c;
        case 0x1a4320u: goto label_1a4320;
        case 0x1a4324u: goto label_1a4324;
        case 0x1a4328u: goto label_1a4328;
        case 0x1a432cu: goto label_1a432c;
        case 0x1a4330u: goto label_1a4330;
        case 0x1a4334u: goto label_1a4334;
        case 0x1a4338u: goto label_1a4338;
        case 0x1a433cu: goto label_1a433c;
        case 0x1a4340u: goto label_1a4340;
        case 0x1a4344u: goto label_1a4344;
        case 0x1a4348u: goto label_1a4348;
        case 0x1a434cu: goto label_1a434c;
        case 0x1a4350u: goto label_1a4350;
        case 0x1a4354u: goto label_1a4354;
        case 0x1a4358u: goto label_1a4358;
        case 0x1a435cu: goto label_1a435c;
        case 0x1a4360u: goto label_1a4360;
        case 0x1a4364u: goto label_1a4364;
        case 0x1a4368u: goto label_1a4368;
        case 0x1a436cu: goto label_1a436c;
        case 0x1a4370u: goto label_1a4370;
        case 0x1a4374u: goto label_1a4374;
        case 0x1a4378u: goto label_1a4378;
        case 0x1a437cu: goto label_1a437c;
        case 0x1a4380u: goto label_1a4380;
        case 0x1a4384u: goto label_1a4384;
        case 0x1a4388u: goto label_1a4388;
        case 0x1a438cu: goto label_1a438c;
        case 0x1a4390u: goto label_1a4390;
        case 0x1a4394u: goto label_1a4394;
        case 0x1a4398u: goto label_1a4398;
        case 0x1a439cu: goto label_1a439c;
        case 0x1a43a0u: goto label_1a43a0;
        case 0x1a43a4u: goto label_1a43a4;
        case 0x1a43a8u: goto label_1a43a8;
        case 0x1a43acu: goto label_1a43ac;
        case 0x1a43b0u: goto label_1a43b0;
        case 0x1a43b4u: goto label_1a43b4;
        case 0x1a43b8u: goto label_1a43b8;
        case 0x1a43bcu: goto label_1a43bc;
        case 0x1a43c0u: goto label_1a43c0;
        case 0x1a43c4u: goto label_1a43c4;
        case 0x1a43c8u: goto label_1a43c8;
        case 0x1a43ccu: goto label_1a43cc;
        case 0x1a43d0u: goto label_1a43d0;
        case 0x1a43d4u: goto label_1a43d4;
        case 0x1a43d8u: goto label_1a43d8;
        case 0x1a43dcu: goto label_1a43dc;
        case 0x1a43e0u: goto label_1a43e0;
        case 0x1a43e4u: goto label_1a43e4;
        case 0x1a43e8u: goto label_1a43e8;
        case 0x1a43ecu: goto label_1a43ec;
        case 0x1a43f0u: goto label_1a43f0;
        case 0x1a43f4u: goto label_1a43f4;
        case 0x1a43f8u: goto label_1a43f8;
        case 0x1a43fcu: goto label_1a43fc;
        case 0x1a4400u: goto label_1a4400;
        case 0x1a4404u: goto label_1a4404;
        case 0x1a4408u: goto label_1a4408;
        case 0x1a440cu: goto label_1a440c;
        case 0x1a4410u: goto label_1a4410;
        case 0x1a4414u: goto label_1a4414;
        case 0x1a4418u: goto label_1a4418;
        case 0x1a441cu: goto label_1a441c;
        case 0x1a4420u: goto label_1a4420;
        case 0x1a4424u: goto label_1a4424;
        case 0x1a4428u: goto label_1a4428;
        case 0x1a442cu: goto label_1a442c;
        case 0x1a4430u: goto label_1a4430;
        case 0x1a4434u: goto label_1a4434;
        case 0x1a4438u: goto label_1a4438;
        case 0x1a443cu: goto label_1a443c;
        case 0x1a4440u: goto label_1a4440;
        case 0x1a4444u: goto label_1a4444;
        case 0x1a4448u: goto label_1a4448;
        case 0x1a444cu: goto label_1a444c;
        case 0x1a4450u: goto label_1a4450;
        case 0x1a4454u: goto label_1a4454;
        case 0x1a4458u: goto label_1a4458;
        case 0x1a445cu: goto label_1a445c;
        case 0x1a4460u: goto label_1a4460;
        case 0x1a4464u: goto label_1a4464;
        case 0x1a4468u: goto label_1a4468;
        case 0x1a446cu: goto label_1a446c;
        case 0x1a4470u: goto label_1a4470;
        case 0x1a4474u: goto label_1a4474;
        case 0x1a4478u: goto label_1a4478;
        case 0x1a447cu: goto label_1a447c;
        case 0x1a4480u: goto label_1a4480;
        case 0x1a4484u: goto label_1a4484;
        case 0x1a4488u: goto label_1a4488;
        case 0x1a448cu: goto label_1a448c;
        case 0x1a4490u: goto label_1a4490;
        case 0x1a4494u: goto label_1a4494;
        case 0x1a4498u: goto label_1a4498;
        case 0x1a449cu: goto label_1a449c;
        case 0x1a44a0u: goto label_1a44a0;
        case 0x1a44a4u: goto label_1a44a4;
        case 0x1a44a8u: goto label_1a44a8;
        case 0x1a44acu: goto label_1a44ac;
        case 0x1a44b0u: goto label_1a44b0;
        case 0x1a44b4u: goto label_1a44b4;
        case 0x1a44b8u: goto label_1a44b8;
        case 0x1a44bcu: goto label_1a44bc;
        case 0x1a44c0u: goto label_1a44c0;
        case 0x1a44c4u: goto label_1a44c4;
        case 0x1a44c8u: goto label_1a44c8;
        case 0x1a44ccu: goto label_1a44cc;
        case 0x1a44d0u: goto label_1a44d0;
        case 0x1a44d4u: goto label_1a44d4;
        case 0x1a44d8u: goto label_1a44d8;
        case 0x1a44dcu: goto label_1a44dc;
        case 0x1a44e0u: goto label_1a44e0;
        case 0x1a44e4u: goto label_1a44e4;
        case 0x1a44e8u: goto label_1a44e8;
        case 0x1a44ecu: goto label_1a44ec;
        case 0x1a44f0u: goto label_1a44f0;
        case 0x1a44f4u: goto label_1a44f4;
        case 0x1a44f8u: goto label_1a44f8;
        case 0x1a44fcu: goto label_1a44fc;
        case 0x1a4500u: goto label_1a4500;
        case 0x1a4504u: goto label_1a4504;
        case 0x1a4508u: goto label_1a4508;
        case 0x1a450cu: goto label_1a450c;
        case 0x1a4510u: goto label_1a4510;
        case 0x1a4514u: goto label_1a4514;
        case 0x1a4518u: goto label_1a4518;
        case 0x1a451cu: goto label_1a451c;
        case 0x1a4520u: goto label_1a4520;
        case 0x1a4524u: goto label_1a4524;
        case 0x1a4528u: goto label_1a4528;
        case 0x1a452cu: goto label_1a452c;
        case 0x1a4530u: goto label_1a4530;
        case 0x1a4534u: goto label_1a4534;
        case 0x1a4538u: goto label_1a4538;
        case 0x1a453cu: goto label_1a453c;
        case 0x1a4540u: goto label_1a4540;
        case 0x1a4544u: goto label_1a4544;
        case 0x1a4548u: goto label_1a4548;
        case 0x1a454cu: goto label_1a454c;
        case 0x1a4550u: goto label_1a4550;
        case 0x1a4554u: goto label_1a4554;
        case 0x1a4558u: goto label_1a4558;
        case 0x1a455cu: goto label_1a455c;
        case 0x1a4560u: goto label_1a4560;
        case 0x1a4564u: goto label_1a4564;
        case 0x1a4568u: goto label_1a4568;
        case 0x1a456cu: goto label_1a456c;
        case 0x1a4570u: goto label_1a4570;
        case 0x1a4574u: goto label_1a4574;
        case 0x1a4578u: goto label_1a4578;
        case 0x1a457cu: goto label_1a457c;
        case 0x1a4580u: goto label_1a4580;
        case 0x1a4584u: goto label_1a4584;
        case 0x1a4588u: goto label_1a4588;
        case 0x1a458cu: goto label_1a458c;
        case 0x1a4590u: goto label_1a4590;
        case 0x1a4594u: goto label_1a4594;
        case 0x1a4598u: goto label_1a4598;
        case 0x1a459cu: goto label_1a459c;
        case 0x1a45a0u: goto label_1a45a0;
        case 0x1a45a4u: goto label_1a45a4;
        case 0x1a45a8u: goto label_1a45a8;
        case 0x1a45acu: goto label_1a45ac;
        case 0x1a45b0u: goto label_1a45b0;
        case 0x1a45b4u: goto label_1a45b4;
        case 0x1a45b8u: goto label_1a45b8;
        case 0x1a45bcu: goto label_1a45bc;
        case 0x1a45c0u: goto label_1a45c0;
        case 0x1a45c4u: goto label_1a45c4;
        case 0x1a45c8u: goto label_1a45c8;
        case 0x1a45ccu: goto label_1a45cc;
        case 0x1a45d0u: goto label_1a45d0;
        case 0x1a45d4u: goto label_1a45d4;
        case 0x1a45d8u: goto label_1a45d8;
        case 0x1a45dcu: goto label_1a45dc;
        case 0x1a45e0u: goto label_1a45e0;
        case 0x1a45e4u: goto label_1a45e4;
        case 0x1a45e8u: goto label_1a45e8;
        case 0x1a45ecu: goto label_1a45ec;
        case 0x1a45f0u: goto label_1a45f0;
        case 0x1a45f4u: goto label_1a45f4;
        case 0x1a45f8u: goto label_1a45f8;
        case 0x1a45fcu: goto label_1a45fc;
        case 0x1a4600u: goto label_1a4600;
        case 0x1a4604u: goto label_1a4604;
        case 0x1a4608u: goto label_1a4608;
        case 0x1a460cu: goto label_1a460c;
        case 0x1a4610u: goto label_1a4610;
        case 0x1a4614u: goto label_1a4614;
        case 0x1a4618u: goto label_1a4618;
        case 0x1a461cu: goto label_1a461c;
        case 0x1a4620u: goto label_1a4620;
        case 0x1a4624u: goto label_1a4624;
        case 0x1a4628u: goto label_1a4628;
        case 0x1a462cu: goto label_1a462c;
        case 0x1a4630u: goto label_1a4630;
        case 0x1a4634u: goto label_1a4634;
        case 0x1a4638u: goto label_1a4638;
        case 0x1a463cu: goto label_1a463c;
        case 0x1a4640u: goto label_1a4640;
        case 0x1a4644u: goto label_1a4644;
        case 0x1a4648u: goto label_1a4648;
        case 0x1a464cu: goto label_1a464c;
        case 0x1a4650u: goto label_1a4650;
        case 0x1a4654u: goto label_1a4654;
        case 0x1a4658u: goto label_1a4658;
        case 0x1a465cu: goto label_1a465c;
        case 0x1a4660u: goto label_1a4660;
        case 0x1a4664u: goto label_1a4664;
        case 0x1a4668u: goto label_1a4668;
        case 0x1a466cu: goto label_1a466c;
        case 0x1a4670u: goto label_1a4670;
        case 0x1a4674u: goto label_1a4674;
        case 0x1a4678u: goto label_1a4678;
        case 0x1a467cu: goto label_1a467c;
        case 0x1a4680u: goto label_1a4680;
        case 0x1a4684u: goto label_1a4684;
        case 0x1a4688u: goto label_1a4688;
        case 0x1a468cu: goto label_1a468c;
        case 0x1a4690u: goto label_1a4690;
        case 0x1a4694u: goto label_1a4694;
        case 0x1a4698u: goto label_1a4698;
        case 0x1a469cu: goto label_1a469c;
        case 0x1a46a0u: goto label_1a46a0;
        case 0x1a46a4u: goto label_1a46a4;
        case 0x1a46a8u: goto label_1a46a8;
        case 0x1a46acu: goto label_1a46ac;
        case 0x1a46b0u: goto label_1a46b0;
        case 0x1a46b4u: goto label_1a46b4;
        case 0x1a46b8u: goto label_1a46b8;
        case 0x1a46bcu: goto label_1a46bc;
        case 0x1a46c0u: goto label_1a46c0;
        case 0x1a46c4u: goto label_1a46c4;
        case 0x1a46c8u: goto label_1a46c8;
        case 0x1a46ccu: goto label_1a46cc;
        case 0x1a46d0u: goto label_1a46d0;
        case 0x1a46d4u: goto label_1a46d4;
        case 0x1a46d8u: goto label_1a46d8;
        case 0x1a46dcu: goto label_1a46dc;
        case 0x1a46e0u: goto label_1a46e0;
        case 0x1a46e4u: goto label_1a46e4;
        case 0x1a46e8u: goto label_1a46e8;
        case 0x1a46ecu: goto label_1a46ec;
        case 0x1a46f0u: goto label_1a46f0;
        case 0x1a46f4u: goto label_1a46f4;
        case 0x1a46f8u: goto label_1a46f8;
        case 0x1a46fcu: goto label_1a46fc;
        case 0x1a4700u: goto label_1a4700;
        case 0x1a4704u: goto label_1a4704;
        case 0x1a4708u: goto label_1a4708;
        case 0x1a470cu: goto label_1a470c;
        case 0x1a4710u: goto label_1a4710;
        case 0x1a4714u: goto label_1a4714;
        case 0x1a4718u: goto label_1a4718;
        case 0x1a471cu: goto label_1a471c;
        case 0x1a4720u: goto label_1a4720;
        case 0x1a4724u: goto label_1a4724;
        case 0x1a4728u: goto label_1a4728;
        case 0x1a472cu: goto label_1a472c;
        case 0x1a4730u: goto label_1a4730;
        case 0x1a4734u: goto label_1a4734;
        case 0x1a4738u: goto label_1a4738;
        case 0x1a473cu: goto label_1a473c;
        case 0x1a4740u: goto label_1a4740;
        case 0x1a4744u: goto label_1a4744;
        case 0x1a4748u: goto label_1a4748;
        case 0x1a474cu: goto label_1a474c;
        case 0x1a4750u: goto label_1a4750;
        case 0x1a4754u: goto label_1a4754;
        case 0x1a4758u: goto label_1a4758;
        case 0x1a475cu: goto label_1a475c;
        case 0x1a4760u: goto label_1a4760;
        case 0x1a4764u: goto label_1a4764;
        case 0x1a4768u: goto label_1a4768;
        case 0x1a476cu: goto label_1a476c;
        case 0x1a4770u: goto label_1a4770;
        case 0x1a4774u: goto label_1a4774;
        case 0x1a4778u: goto label_1a4778;
        case 0x1a477cu: goto label_1a477c;
        case 0x1a4780u: goto label_1a4780;
        case 0x1a4784u: goto label_1a4784;
        case 0x1a4788u: goto label_1a4788;
        case 0x1a478cu: goto label_1a478c;
        case 0x1a4790u: goto label_1a4790;
        case 0x1a4794u: goto label_1a4794;
        case 0x1a4798u: goto label_1a4798;
        case 0x1a479cu: goto label_1a479c;
        case 0x1a47a0u: goto label_1a47a0;
        case 0x1a47a4u: goto label_1a47a4;
        case 0x1a47a8u: goto label_1a47a8;
        case 0x1a47acu: goto label_1a47ac;
        case 0x1a47b0u: goto label_1a47b0;
        case 0x1a47b4u: goto label_1a47b4;
        case 0x1a47b8u: goto label_1a47b8;
        case 0x1a47bcu: goto label_1a47bc;
        case 0x1a47c0u: goto label_1a47c0;
        case 0x1a47c4u: goto label_1a47c4;
        case 0x1a47c8u: goto label_1a47c8;
        case 0x1a47ccu: goto label_1a47cc;
        case 0x1a47d0u: goto label_1a47d0;
        case 0x1a47d4u: goto label_1a47d4;
        case 0x1a47d8u: goto label_1a47d8;
        case 0x1a47dcu: goto label_1a47dc;
        case 0x1a47e0u: goto label_1a47e0;
        case 0x1a47e4u: goto label_1a47e4;
        case 0x1a47e8u: goto label_1a47e8;
        case 0x1a47ecu: goto label_1a47ec;
        case 0x1a47f0u: goto label_1a47f0;
        case 0x1a47f4u: goto label_1a47f4;
        case 0x1a47f8u: goto label_1a47f8;
        case 0x1a47fcu: goto label_1a47fc;
        case 0x1a4800u: goto label_1a4800;
        case 0x1a4804u: goto label_1a4804;
        case 0x1a4808u: goto label_1a4808;
        case 0x1a480cu: goto label_1a480c;
        case 0x1a4810u: goto label_1a4810;
        case 0x1a4814u: goto label_1a4814;
        case 0x1a4818u: goto label_1a4818;
        case 0x1a481cu: goto label_1a481c;
        case 0x1a4820u: goto label_1a4820;
        case 0x1a4824u: goto label_1a4824;
        case 0x1a4828u: goto label_1a4828;
        case 0x1a482cu: goto label_1a482c;
        case 0x1a4830u: goto label_1a4830;
        case 0x1a4834u: goto label_1a4834;
        case 0x1a4838u: goto label_1a4838;
        case 0x1a483cu: goto label_1a483c;
        case 0x1a4840u: goto label_1a4840;
        case 0x1a4844u: goto label_1a4844;
        case 0x1a4848u: goto label_1a4848;
        case 0x1a484cu: goto label_1a484c;
        case 0x1a4850u: goto label_1a4850;
        case 0x1a4854u: goto label_1a4854;
        case 0x1a4858u: goto label_1a4858;
        case 0x1a485cu: goto label_1a485c;
        case 0x1a4860u: goto label_1a4860;
        case 0x1a4864u: goto label_1a4864;
        case 0x1a4868u: goto label_1a4868;
        case 0x1a486cu: goto label_1a486c;
        case 0x1a4870u: goto label_1a4870;
        case 0x1a4874u: goto label_1a4874;
        case 0x1a4878u: goto label_1a4878;
        case 0x1a487cu: goto label_1a487c;
        case 0x1a4880u: goto label_1a4880;
        case 0x1a4884u: goto label_1a4884;
        case 0x1a4888u: goto label_1a4888;
        case 0x1a488cu: goto label_1a488c;
        case 0x1a4890u: goto label_1a4890;
        case 0x1a4894u: goto label_1a4894;
        case 0x1a4898u: goto label_1a4898;
        case 0x1a489cu: goto label_1a489c;
        case 0x1a48a0u: goto label_1a48a0;
        case 0x1a48a4u: goto label_1a48a4;
        case 0x1a48a8u: goto label_1a48a8;
        case 0x1a48acu: goto label_1a48ac;
        case 0x1a48b0u: goto label_1a48b0;
        case 0x1a48b4u: goto label_1a48b4;
        case 0x1a48b8u: goto label_1a48b8;
        case 0x1a48bcu: goto label_1a48bc;
        case 0x1a48c0u: goto label_1a48c0;
        case 0x1a48c4u: goto label_1a48c4;
        case 0x1a48c8u: goto label_1a48c8;
        case 0x1a48ccu: goto label_1a48cc;
        case 0x1a48d0u: goto label_1a48d0;
        case 0x1a48d4u: goto label_1a48d4;
        case 0x1a48d8u: goto label_1a48d8;
        case 0x1a48dcu: goto label_1a48dc;
        case 0x1a48e0u: goto label_1a48e0;
        case 0x1a48e4u: goto label_1a48e4;
        case 0x1a48e8u: goto label_1a48e8;
        case 0x1a48ecu: goto label_1a48ec;
        case 0x1a48f0u: goto label_1a48f0;
        case 0x1a48f4u: goto label_1a48f4;
        case 0x1a48f8u: goto label_1a48f8;
        case 0x1a48fcu: goto label_1a48fc;
        case 0x1a4900u: goto label_1a4900;
        case 0x1a4904u: goto label_1a4904;
        case 0x1a4908u: goto label_1a4908;
        case 0x1a490cu: goto label_1a490c;
        case 0x1a4910u: goto label_1a4910;
        case 0x1a4914u: goto label_1a4914;
        case 0x1a4918u: goto label_1a4918;
        case 0x1a491cu: goto label_1a491c;
        case 0x1a4920u: goto label_1a4920;
        case 0x1a4924u: goto label_1a4924;
        case 0x1a4928u: goto label_1a4928;
        case 0x1a492cu: goto label_1a492c;
        case 0x1a4930u: goto label_1a4930;
        case 0x1a4934u: goto label_1a4934;
        case 0x1a4938u: goto label_1a4938;
        case 0x1a493cu: goto label_1a493c;
        case 0x1a4940u: goto label_1a4940;
        case 0x1a4944u: goto label_1a4944;
        case 0x1a4948u: goto label_1a4948;
        case 0x1a494cu: goto label_1a494c;
        case 0x1a4950u: goto label_1a4950;
        case 0x1a4954u: goto label_1a4954;
        case 0x1a4958u: goto label_1a4958;
        case 0x1a495cu: goto label_1a495c;
        case 0x1a4960u: goto label_1a4960;
        case 0x1a4964u: goto label_1a4964;
        case 0x1a4968u: goto label_1a4968;
        case 0x1a496cu: goto label_1a496c;
        case 0x1a4970u: goto label_1a4970;
        case 0x1a4974u: goto label_1a4974;
        case 0x1a4978u: goto label_1a4978;
        case 0x1a497cu: goto label_1a497c;
        case 0x1a4980u: goto label_1a4980;
        case 0x1a4984u: goto label_1a4984;
        case 0x1a4988u: goto label_1a4988;
        case 0x1a498cu: goto label_1a498c;
        case 0x1a4990u: goto label_1a4990;
        case 0x1a4994u: goto label_1a4994;
        case 0x1a4998u: goto label_1a4998;
        case 0x1a499cu: goto label_1a499c;
        case 0x1a49a0u: goto label_1a49a0;
        case 0x1a49a4u: goto label_1a49a4;
        case 0x1a49a8u: goto label_1a49a8;
        case 0x1a49acu: goto label_1a49ac;
        case 0x1a49b0u: goto label_1a49b0;
        case 0x1a49b4u: goto label_1a49b4;
        case 0x1a49b8u: goto label_1a49b8;
        case 0x1a49bcu: goto label_1a49bc;
        case 0x1a49c0u: goto label_1a49c0;
        case 0x1a49c4u: goto label_1a49c4;
        case 0x1a49c8u: goto label_1a49c8;
        case 0x1a49ccu: goto label_1a49cc;
        case 0x1a49d0u: goto label_1a49d0;
        case 0x1a49d4u: goto label_1a49d4;
        case 0x1a49d8u: goto label_1a49d8;
        case 0x1a49dcu: goto label_1a49dc;
        case 0x1a49e0u: goto label_1a49e0;
        case 0x1a49e4u: goto label_1a49e4;
        case 0x1a49e8u: goto label_1a49e8;
        case 0x1a49ecu: goto label_1a49ec;
        case 0x1a49f0u: goto label_1a49f0;
        case 0x1a49f4u: goto label_1a49f4;
        case 0x1a49f8u: goto label_1a49f8;
        case 0x1a49fcu: goto label_1a49fc;
        default: break;
    }

    ctx->pc = 0x1a3fd0u;

label_1a3fd0:
    // 0x1a3fd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a3fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a3fd4:
    // 0x1a3fd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a3fd8:
    // 0x1a3fd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a3fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a3fdc:
    // 0x1a3fdc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a3fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a3fe0:
    // 0x1a3fe0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a3fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a3fe4:
    // 0x1a3fe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a3fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a3fe8:
    // 0x1a3fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a3fec:
    // 0x1a3fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3ff0:
    // 0x1a3ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ff4:
    // 0x1a3ff4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a3ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ff8:
    // 0x1a3ff8: 0xc063dd4  jal         func_18F750
label_1a3ffc:
    if (ctx->pc == 0x1A3FFCu) {
        ctx->pc = 0x1A3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FF8u;
        // 0x1a3ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4000u;
        goto label_1a4000;
    }
    ctx->pc = 0x1A3FF8u;
    SET_GPR_U32(ctx, 31, 0x1A4000u);
    ctx->pc = 0x1A3FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3FF8u;
    // 0x1a3ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A3FF8u, 0x1A4000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4000u;
label_1a4000:
    // 0x1a4000: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1a4004:
    if (ctx->pc == 0x1A4004u) {
        ctx->pc = 0x1A4008u;
        goto label_1a4008;
    }
    ctx->pc = 0x1A4000u;
    {
        const bool branch_taken_0x1a4000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4000) {
            ctx->pc = 0x1A4058u;
            goto label_1a4058;
        }
    }
    ctx->pc = 0x1A4008u;
label_1a4008:
    // 0x1a4008: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a4008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a400c:
    // 0x1a400c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a400cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4010:
    // 0x1a4010: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x1a4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a4014:
    // 0x1a4014: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a4014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4018:
    // 0x1a4018: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a4018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a401c:
    // 0x1a401c: 0x8c662c10  lw          $a2, 0x2C10($v1)
    ctx->pc = 0x1a401cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
label_1a4020:
    // 0x1a4020: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x1a4020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_1a4024:
    // 0x1a4024: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a4024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4028:
    // 0x1a4028: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1a4028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1a402c:
    // 0x1a402c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4030:
    // 0x1a4030: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_1a4034:
    if (ctx->pc == 0x1A4034u) {
        ctx->pc = 0x1A4038u;
        goto label_1a4038;
    }
    ctx->pc = 0x1A4030u;
    {
        const bool branch_taken_0x1a4030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4030) {
            ctx->pc = 0x1A4058u;
            goto label_1a4058;
        }
    }
    ctx->pc = 0x1A4038u;
label_1a4038:
    // 0x1a4038: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
label_1a403c:
    if (ctx->pc == 0x1A403Cu) {
        ctx->pc = 0x1A4040u;
        goto label_1a4040;
    }
    ctx->pc = 0x1A4038u;
    {
        const bool branch_taken_0x1a4038 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4038) {
            ctx->pc = 0x1A4048u;
            goto label_1a4048;
        }
    }
    ctx->pc = 0x1A4040u;
label_1a4040:
    // 0x1a4040: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a4044:
    if (ctx->pc == 0x1A4044u) {
        ctx->pc = 0x1A4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4040u;
        // 0x1a4044: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4048u;
        goto label_1a4048;
    }
    ctx->pc = 0x1A4040u;
    {
        const bool branch_taken_0x1a4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4040u;
        // 0x1a4044: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4040) {
            ctx->pc = 0x1A4058u;
            goto label_1a4058;
        }
    }
    ctx->pc = 0x1A4048u;
label_1a4048:
    // 0x1a4048: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a4048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a404c:
    // 0x1a404c: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x1a404cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
label_1a4050:
    // 0x1a4050: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1a4054:
    if (ctx->pc == 0x1A4054u) {
        ctx->pc = 0x1A4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4050u;
        // 0x1a4054: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4058u;
        goto label_1a4058;
    }
    ctx->pc = 0x1A4050u;
    {
        const bool branch_taken_0x1a4050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4050u;
        // 0x1a4054: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4050) {
            ctx->pc = 0x1A4028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4028;
        }
    }
    ctx->pc = 0x1A4058u;
label_1a4058:
    // 0x1a4058: 0x8e22032c  lw          $v0, 0x32C($s1)
    ctx->pc = 0x1a4058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_1a405c:
    // 0x1a405c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1a4060:
    if (ctx->pc == 0x1A4060u) {
        ctx->pc = 0x1A4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A405Cu;
        // 0x1a4060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4064u;
        goto label_1a4064;
    }
    ctx->pc = 0x1A405Cu;
    {
        const bool branch_taken_0x1a405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A405Cu;
        // 0x1a4060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a405c) {
            ctx->pc = 0x1A4098u;
            goto label_1a4098;
        }
    }
    ctx->pc = 0x1A4064u;
label_1a4064:
    // 0x1a4064: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a4064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4068:
    // 0x1a4068: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a406c:
    if (ctx->pc == 0x1A406Cu) {
        ctx->pc = 0x1A406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4068u;
        // 0x1a406c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4070u;
        goto label_1a4070;
    }
    ctx->pc = 0x1A4068u;
    {
        const bool branch_taken_0x1a4068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4068u;
        // 0x1a406c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4068) {
            ctx->pc = 0x1A4080u;
            goto label_1a4080;
        }
    }
    ctx->pc = 0x1A4070u;
label_1a4070:
    // 0x1a4070: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a4070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1a4074:
    // 0x1a4074: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a4074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a4078:
    // 0x1a4078: 0xac40093c  sw          $zero, 0x93C($v0)
    ctx->pc = 0x1a4078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2364), GPR_U32(ctx, 0));
label_1a407c:
    // 0x1a407c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1a4080:
    // 0x1a4080: 0x8e220938  lw          $v0, 0x938($s1)
    ctx->pc = 0x1a4080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2360)));
label_1a4084:
    // 0x1a4084: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1a4084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a4088:
    // 0x1a4088: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a408c:
    if (ctx->pc == 0x1A408Cu) {
        ctx->pc = 0x1A408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4088u;
        // 0x1a408c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4090u;
        goto label_1a4090;
    }
    ctx->pc = 0x1A4088u;
    {
        const bool branch_taken_0x1a4088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4088u;
        // 0x1a408c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4088) {
            ctx->pc = 0x1A4074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4074;
        }
    }
    ctx->pc = 0x1A4090u;
label_1a4090:
    // 0x1a4090: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x1a4090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_1a4094:
    // 0x1a4094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4098:
    // 0x1a4098: 0xc063dd4  jal         func_18F750
label_1a409c:
    if (ctx->pc == 0x1A409Cu) {
        ctx->pc = 0x1A40A0u;
        goto label_1a40a0;
    }
    ctx->pc = 0x1A4098u;
    SET_GPR_U32(ctx, 31, 0x1A40A0u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A4098u, 0x1A40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40A0u;
label_1a40a0:
    // 0x1a40a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1a40a4:
    // 0x1a40a4: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x1a40a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1a40a8:
    // 0x1a40a8: 0x104401f0  beq         $v0, $a0, . + 4 + (0x1F0 << 2)
label_1a40ac:
    if (ctx->pc == 0x1A40ACu) {
        ctx->pc = 0x1A40B0u;
        goto label_1a40b0;
    }
    ctx->pc = 0x1A40A8u;
    {
        const bool branch_taken_0x1a40a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a40a8) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A40B0u;
label_1a40b0:
    // 0x1a40b0: 0x104301ee  beq         $v0, $v1, . + 4 + (0x1EE << 2)
label_1a40b4:
    if (ctx->pc == 0x1A40B4u) {
        ctx->pc = 0x1A40B8u;
        goto label_1a40b8;
    }
    ctx->pc = 0x1A40B0u;
    {
        const bool branch_taken_0x1a40b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40b0) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A40B8u;
label_1a40b8:
    // 0x1a40b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a40bc:
    // 0x1a40bc: 0x104301e2  beq         $v0, $v1, . + 4 + (0x1E2 << 2)
label_1a40c0:
    if (ctx->pc == 0x1A40C0u) {
        ctx->pc = 0x1A40C4u;
        goto label_1a40c4;
    }
    ctx->pc = 0x1A40BCu;
    {
        const bool branch_taken_0x1a40bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40bc) {
            ctx->pc = 0x1A4848u;
            goto label_1a4848;
        }
    }
    ctx->pc = 0x1A40C4u;
label_1a40c4:
    // 0x1a40c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a40c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a40c8:
    // 0x1a40c8: 0x104301b7  beq         $v0, $v1, . + 4 + (0x1B7 << 2)
label_1a40cc:
    if (ctx->pc == 0x1A40CCu) {
        ctx->pc = 0x1A40D0u;
        goto label_1a40d0;
    }
    ctx->pc = 0x1A40C8u;
    {
        const bool branch_taken_0x1a40c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40c8) {
            ctx->pc = 0x1A47A8u;
            goto label_1a47a8;
        }
    }
    ctx->pc = 0x1A40D0u;
label_1a40d0:
    // 0x1a40d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a40d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a40d4:
    // 0x1a40d4: 0x10430119  beq         $v0, $v1, . + 4 + (0x119 << 2)
label_1a40d8:
    if (ctx->pc == 0x1A40D8u) {
        ctx->pc = 0x1A40DCu;
        goto label_1a40dc;
    }
    ctx->pc = 0x1A40D4u;
    {
        const bool branch_taken_0x1a40d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40d4) {
            ctx->pc = 0x1A453Cu;
            goto label_1a453c;
        }
    }
    ctx->pc = 0x1A40DCu;
label_1a40dc:
    // 0x1a40dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a40e0:
    // 0x1a40e0: 0x10430104  beq         $v0, $v1, . + 4 + (0x104 << 2)
label_1a40e4:
    if (ctx->pc == 0x1A40E4u) {
        ctx->pc = 0x1A40E8u;
        goto label_1a40e8;
    }
    ctx->pc = 0x1A40E0u;
    {
        const bool branch_taken_0x1a40e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40e0) {
            ctx->pc = 0x1A44F4u;
            goto label_1a44f4;
        }
    }
    ctx->pc = 0x1A40E8u;
label_1a40e8:
    // 0x1a40e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a40e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a40ec:
    // 0x1a40ec: 0x104300d0  beq         $v0, $v1, . + 4 + (0xD0 << 2)
label_1a40f0:
    if (ctx->pc == 0x1A40F0u) {
        ctx->pc = 0x1A40F4u;
        goto label_1a40f4;
    }
    ctx->pc = 0x1A40ECu;
    {
        const bool branch_taken_0x1a40ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40ec) {
            ctx->pc = 0x1A4430u;
            goto label_1a4430;
        }
    }
    ctx->pc = 0x1A40F4u;
label_1a40f4:
    // 0x1a40f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a40f8:
    if (ctx->pc == 0x1A40F8u) {
        ctx->pc = 0x1A40FCu;
        goto label_1a40fc;
    }
    ctx->pc = 0x1A40F4u;
    {
        const bool branch_taken_0x1a40f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a40f4) {
            ctx->pc = 0x1A4104u;
            goto label_1a4104;
        }
    }
    ctx->pc = 0x1A40FCu;
label_1a40fc:
    // 0x1a40fc: 0x100001dc  b           . + 4 + (0x1DC << 2)
label_1a4100:
    if (ctx->pc == 0x1A4100u) {
        ctx->pc = 0x1A4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40FCu;
        // 0x1a4100: 0x8e220670  lw          $v0, 0x670($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4104u;
        goto label_1a4104;
    }
    ctx->pc = 0x1A40FCu;
    {
        const bool branch_taken_0x1a40fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40FCu;
        // 0x1a4100: 0x8e220670  lw          $v0, 0x670($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40fc) {
            ctx->pc = 0x1A4870u;
            goto label_1a4870;
        }
    }
    ctx->pc = 0x1A4104u;
label_1a4104:
    // 0x1a4104: 0xae200340  sw          $zero, 0x340($s1)
    ctx->pc = 0x1a4104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
label_1a4108:
    // 0x1a4108: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a410c:
    // 0x1a410c: 0xae2006b0  sw          $zero, 0x6B0($s1)
    ctx->pc = 0x1a410cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 0));
label_1a4110:
    // 0x1a4110: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x1a4110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
label_1a4114:
    // 0x1a4114: 0xae200728  sw          $zero, 0x728($s1)
    ctx->pc = 0x1a4114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1832), GPR_U32(ctx, 0));
label_1a4118:
    // 0x1a4118: 0xae220938  sw          $v0, 0x938($s1)
    ctx->pc = 0x1a4118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2360), GPR_U32(ctx, 2));
label_1a411c:
    // 0x1a411c: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x1a411cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
label_1a4120:
    // 0x1a4120: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x1a4120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_1a4124:
    // 0x1a4124: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a4124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a4128:
    // 0x1a4128: 0x24540040  addiu       $s4, $v0, 0x40
    ctx->pc = 0x1a4128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1a412c:
    // 0x1a412c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1a412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1a4130:
    // 0x1a4130: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a4130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a4134:
    // 0x1a4134: 0x1462007c  bne         $v1, $v0, . + 4 + (0x7C << 2)
label_1a4138:
    if (ctx->pc == 0x1A4138u) {
        ctx->pc = 0x1A413Cu;
        goto label_1a413c;
    }
    ctx->pc = 0x1A4134u;
    {
        const bool branch_taken_0x1a4134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4134) {
            ctx->pc = 0x1A4328u;
            goto label_1a4328;
        }
    }
    ctx->pc = 0x1A413Cu;
label_1a413c:
    // 0x1a413c: 0x92830004  lbu         $v1, 0x4($s4)
    ctx->pc = 0x1a413cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_1a4140:
    // 0x1a4140: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x1a4140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1a4144:
    // 0x1a4144: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
label_1a4148:
    if (ctx->pc == 0x1A4148u) {
        ctx->pc = 0x1A414Cu;
        goto label_1a414c;
    }
    ctx->pc = 0x1A4144u;
    {
        const bool branch_taken_0x1a4144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4144) {
            ctx->pc = 0x1A4258u;
            goto label_1a4258;
        }
    }
    ctx->pc = 0x1A414Cu;
label_1a414c:
    // 0x1a414c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1a4150:
    // 0x1a4150: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
label_1a4154:
    if (ctx->pc == 0x1A4154u) {
        ctx->pc = 0x1A4158u;
        goto label_1a4158;
    }
    ctx->pc = 0x1A4150u;
    {
        const bool branch_taken_0x1a4150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4150) {
            ctx->pc = 0x1A4214u;
            goto label_1a4214;
        }
    }
    ctx->pc = 0x1A4158u;
label_1a4158:
    // 0x1a4158: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1a4158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1a415c:
    // 0x1a415c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_1a4160:
    if (ctx->pc == 0x1A4160u) {
        ctx->pc = 0x1A4164u;
        goto label_1a4164;
    }
    ctx->pc = 0x1A415Cu;
    {
        const bool branch_taken_0x1a415c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a415c) {
            ctx->pc = 0x1A41BCu;
            goto label_1a41bc;
        }
    }
    ctx->pc = 0x1A4164u;
label_1a4164:
    // 0x1a4164: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x1a4164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1a4168:
    // 0x1a4168: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1a416c:
    if (ctx->pc == 0x1A416Cu) {
        ctx->pc = 0x1A4170u;
        goto label_1a4170;
    }
    ctx->pc = 0x1A4168u;
    {
        const bool branch_taken_0x1a4168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4168) {
            ctx->pc = 0x1A41A0u;
            goto label_1a41a0;
        }
    }
    ctx->pc = 0x1A4170u;
label_1a4170:
    // 0x1a4170: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1a4170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1a4174:
    // 0x1a4174: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1a4178:
    if (ctx->pc == 0x1A4178u) {
        ctx->pc = 0x1A417Cu;
        goto label_1a417c;
    }
    ctx->pc = 0x1A4174u;
    {
        const bool branch_taken_0x1a4174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4174) {
            ctx->pc = 0x1A4198u;
            goto label_1a4198;
        }
    }
    ctx->pc = 0x1A417Cu;
label_1a417c:
    // 0x1a417c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1a417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1a4180:
    // 0x1a4180: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a4184:
    if (ctx->pc == 0x1A4184u) {
        ctx->pc = 0x1A4188u;
        goto label_1a4188;
    }
    ctx->pc = 0x1A4180u;
    {
        const bool branch_taken_0x1a4180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4180) {
            ctx->pc = 0x1A4190u;
            goto label_1a4190;
        }
    }
    ctx->pc = 0x1A4188u;
label_1a4188:
    // 0x1a4188: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1a418c:
    if (ctx->pc == 0x1A418Cu) {
        ctx->pc = 0x1A4190u;
        goto label_1a4190;
    }
    ctx->pc = 0x1A4188u;
    {
        const bool branch_taken_0x1a4188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4188) {
            ctx->pc = 0x1A42F4u;
            goto label_1a42f4;
        }
    }
    ctx->pc = 0x1A4190u;
label_1a4190:
    // 0x1a4190: 0x10000062  b           . + 4 + (0x62 << 2)
label_1a4194:
    if (ctx->pc == 0x1A4194u) {
        ctx->pc = 0x1A4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4190u;
        // 0x1a4194: 0xae340678  sw          $s4, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4198u;
        goto label_1a4198;
    }
    ctx->pc = 0x1A4190u;
    {
        const bool branch_taken_0x1a4190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4190u;
        // 0x1a4194: 0xae340678  sw          $s4, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4190) {
            ctx->pc = 0x1A431Cu;
            goto label_1a431c;
        }
    }
    ctx->pc = 0x1A4198u;
label_1a4198:
    // 0x1a4198: 0x10000060  b           . + 4 + (0x60 << 2)
label_1a419c:
    if (ctx->pc == 0x1A419Cu) {
        ctx->pc = 0x1A419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4198u;
        // 0x1a419c: 0xae34067c  sw          $s4, 0x67C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41A0u;
        goto label_1a41a0;
    }
    ctx->pc = 0x1A4198u;
    {
        const bool branch_taken_0x1a4198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4198u;
        // 0x1a419c: 0xae34067c  sw          $s4, 0x67C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4198) {
            ctx->pc = 0x1A431Cu;
            goto label_1a431c;
        }
    }
    ctx->pc = 0x1A41A0u;
label_1a41a0:
    // 0x1a41a0: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x1a41a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_1a41a4:
    // 0x1a41a4: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x1a41a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1a41a8:
    // 0x1a41a8: 0xc057040  jal         func_15C100
label_1a41ac:
    if (ctx->pc == 0x1A41ACu) {
        ctx->pc = 0x1A41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41A8u;
        // 0x1a41ac: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41B0u;
        goto label_1a41b0;
    }
    ctx->pc = 0x1A41A8u;
    SET_GPR_U32(ctx, 31, 0x1A41B0u);
    ctx->pc = 0x1A41ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41A8u;
    // 0x1a41ac: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A41A8u, 0x1A41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41B0u;
label_1a41b0:
    // 0x1a41b0: 0xae220688  sw          $v0, 0x688($s1)
    ctx->pc = 0x1a41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1672), GPR_U32(ctx, 2));
label_1a41b4:
    // 0x1a41b4: 0x10000059  b           . + 4 + (0x59 << 2)
label_1a41b8:
    if (ctx->pc == 0x1A41B8u) {
        ctx->pc = 0x1A41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41B4u;
        // 0x1a41b8: 0xae34068c  sw          $s4, 0x68C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41BCu;
        goto label_1a41bc;
    }
    ctx->pc = 0x1A41B4u;
    {
        const bool branch_taken_0x1a41b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41B4u;
        // 0x1a41b8: 0xae34068c  sw          $s4, 0x68C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41b4) {
            ctx->pc = 0x1A431Cu;
            goto label_1a431c;
        }
    }
    ctx->pc = 0x1A41BCu;
label_1a41bc:
    // 0x1a41bc: 0x0  nop
    ctx->pc = 0x1a41bcu;
    // NOP
label_1a41c0:
    // 0x1a41c0: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x1a41c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_1a41c4:
    // 0x1a41c4: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x1a41c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1a41c8:
    // 0x1a41c8: 0xc057040  jal         func_15C100
label_1a41cc:
    if (ctx->pc == 0x1A41CCu) {
        ctx->pc = 0x1A41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41C8u;
        // 0x1a41cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41D0u;
        goto label_1a41d0;
    }
    ctx->pc = 0x1A41C8u;
    SET_GPR_U32(ctx, 31, 0x1A41D0u);
    ctx->pc = 0x1A41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41C8u;
    // 0x1a41cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A41C8u, 0x1A41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41D0u;
label_1a41d0:
    // 0x1a41d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a41d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a41d4:
    // 0x1a41d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a41d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a41d8:
    // 0x1a41d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a41d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a41dc:
    // 0x1a41dc: 0xc064c20  jal         func_193080
label_1a41e0:
    if (ctx->pc == 0x1A41E0u) {
        ctx->pc = 0x1A41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41DCu;
        // 0x1a41e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41E4u;
        goto label_1a41e4;
    }
    ctx->pc = 0x1A41DCu;
    SET_GPR_U32(ctx, 31, 0x1A41E4u);
    ctx->pc = 0x1A41E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41DCu;
    // 0x1a41e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x1A41DCu, 0x1A41E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41E4u;
label_1a41e4:
    // 0x1a41e4: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1a41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_1a41e8:
    // 0x1a41e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a41ec:
    // 0x1a41ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a41f0:
    // 0x1a41f0: 0xac520450  sw          $s2, 0x450($v0)
    ctx->pc = 0x1a41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1104), GPR_U32(ctx, 18));
label_1a41f4:
    // 0x1a41f4: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1a41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_1a41f8:
    // 0x1a41f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a41fc:
    // 0x1a41fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a41fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a4200:
    // 0x1a4200: 0xac540490  sw          $s4, 0x490($v0)
    ctx->pc = 0x1a4200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1168), GPR_U32(ctx, 20));
label_1a4204:
    // 0x1a4204: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1a4204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_1a4208:
    // 0x1a4208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a420c:
    // 0x1a420c: 0x10000043  b           . + 4 + (0x43 << 2)
label_1a4210:
    if (ctx->pc == 0x1A4210u) {
        ctx->pc = 0x1A4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A420Cu;
        // 0x1a4210: 0xae220340  sw          $v0, 0x340($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4214u;
        goto label_1a4214;
    }
    ctx->pc = 0x1A420Cu;
    {
        const bool branch_taken_0x1a420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A420Cu;
        // 0x1a4210: 0xae220340  sw          $v0, 0x340($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a420c) {
            ctx->pc = 0x1A431Cu;
            goto label_1a431c;
        }
    }
    ctx->pc = 0x1A4214u;
label_1a4214:
    // 0x1a4214: 0x0  nop
    ctx->pc = 0x1a4214u;
    // NOP
label_1a4218:
    // 0x1a4218: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x1a4218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
label_1a421c:
    // 0x1a421c: 0x82830024  lb          $v1, 0x24($s4)
    ctx->pc = 0x1a421cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
label_1a4220:
    // 0x1a4220: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a4224:
    // 0x1a4224: 0xa04306f8  sb          $v1, 0x6F8($v0)
    ctx->pc = 0x1a4224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1784), (uint8_t)GPR_U32(ctx, 3));
label_1a4228:
    // 0x1a4228: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x1a4228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
label_1a422c:
    // 0x1a422c: 0x82830028  lb          $v1, 0x28($s4)
    ctx->pc = 0x1a422cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
label_1a4230:
    // 0x1a4230: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a4234:
    // 0x1a4234: 0xa0430708  sb          $v1, 0x708($v0)
    ctx->pc = 0x1a4234u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1800), (uint8_t)GPR_U32(ctx, 3));
label_1a4238:
    // 0x1a4238: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x1a4238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
label_1a423c:
    // 0x1a423c: 0x8283002c  lb          $v1, 0x2C($s4)
    ctx->pc = 0x1a423cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_1a4240:
    // 0x1a4240: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a4244:
    // 0x1a4244: 0xa0430718  sb          $v1, 0x718($v0)
    ctx->pc = 0x1a4244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1816), (uint8_t)GPR_U32(ctx, 3));
label_1a4248:
    // 0x1a4248: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x1a4248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
label_1a424c:
    // 0x1a424c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a4250:
    // 0x1a4250: 0x10000032  b           . + 4 + (0x32 << 2)
label_1a4254:
    if (ctx->pc == 0x1A4254u) {
        ctx->pc = 0x1A4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4250u;
        // 0x1a4254: 0xae2206f4  sw          $v0, 0x6F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4258u;
        goto label_1a4258;
    }
    ctx->pc = 0x1A4250u;
    {
        const bool branch_taken_0x1a4250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4250u;
        // 0x1a4254: 0xae2206f4  sw          $v0, 0x6F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4250) {
            ctx->pc = 0x1A431Cu;
            goto label_1a431c;
        }
    }
    ctx->pc = 0x1A4258u;
label_1a4258:
    // 0x1a4258: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a4258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
label_1a425c:
    // 0x1a425c: 0x82830024  lb          $v1, 0x24($s4)
    ctx->pc = 0x1a425cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
label_1a4260:
    // 0x1a4260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a4264:
    // 0x1a4264: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a4268:
    // 0x1a4268: 0xa04306b4  sb          $v1, 0x6B4($v0)
    ctx->pc = 0x1a4268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1716), (uint8_t)GPR_U32(ctx, 3));
label_1a426c:
    // 0x1a426c: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
label_1a4270:
    // 0x1a4270: 0x82830028  lb          $v1, 0x28($s4)
    ctx->pc = 0x1a4270u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
label_1a4274:
    // 0x1a4274: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a4278:
    // 0x1a4278: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a427c:
    // 0x1a427c: 0xa04306b5  sb          $v1, 0x6B5($v0)
    ctx->pc = 0x1a427cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1717), (uint8_t)GPR_U32(ctx, 3));
label_1a4280:
    // 0x1a4280: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
label_1a4284:
    // 0x1a4284: 0x8283002c  lb          $v1, 0x2C($s4)
    ctx->pc = 0x1a4284u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_1a4288:
    // 0x1a4288: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a428c:
    // 0x1a428c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a4290:
    // 0x1a4290: 0xa04306b6  sb          $v1, 0x6B6($v0)
    ctx->pc = 0x1a4290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1718), (uint8_t)GPR_U32(ctx, 3));
label_1a4294:
    // 0x1a4294: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
label_1a4298:
    // 0x1a4298: 0x82830030  lb          $v1, 0x30($s4)
    ctx->pc = 0x1a4298u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
label_1a429c:
    // 0x1a429c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a429cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a42a0:
    // 0x1a42a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a42a4:
    // 0x1a42a4: 0xa04306b7  sb          $v1, 0x6B7($v0)
    ctx->pc = 0x1a42a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1719), (uint8_t)GPR_U32(ctx, 3));
label_1a42a8:
    // 0x1a42a8: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
label_1a42ac:
    // 0x1a42ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a42acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a42b0:
    // 0x1a42b0: 0xae2206b0  sw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a42b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 2));
label_1a42b4:
    // 0x1a42b4: 0x8e220938  lw          $v0, 0x938($s1)
    ctx->pc = 0x1a42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2360)));
label_1a42b8:
    // 0x1a42b8: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1a42b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1a42bc:
    // 0x1a42bc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1a42bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a42c0:
    // 0x1a42c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1a42c4:
    if (ctx->pc == 0x1A42C4u) {
        ctx->pc = 0x1A42C8u;
        goto label_1a42c8;
    }
    ctx->pc = 0x1A42C0u;
    {
        const bool branch_taken_0x1a42c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a42c0) {
            ctx->pc = 0x1A42CCu;
            goto label_1a42cc;
        }
    }
    ctx->pc = 0x1A42C8u;
label_1a42c8:
    // 0x1a42c8: 0xae230938  sw          $v1, 0x938($s1)
    ctx->pc = 0x1a42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2360), GPR_U32(ctx, 3));
label_1a42cc:
    // 0x1a42cc: 0x0  nop
    ctx->pc = 0x1a42ccu;
    // NOP
label_1a42d0:
    // 0x1a42d0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1a42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1a42d4:
    // 0x1a42d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a42d8:
    // 0x1a42d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a42dc:
    // 0x1a42dc: 0xac40093c  sw          $zero, 0x93C($v0)
    ctx->pc = 0x1a42dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2364), GPR_U32(ctx, 0));
label_1a42e0:
    // 0x1a42e0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1a42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1a42e4:
    // 0x1a42e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a42e8:
    // 0x1a42e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a42ec:
    // 0x1a42ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a42f0:
    if (ctx->pc == 0x1A42F0u) {
        ctx->pc = 0x1A42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42ECu;
        // 0x1a42f0: 0xac54097c  sw          $s4, 0x97C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2428), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A42F4u;
        goto label_1a42f4;
    }
    ctx->pc = 0x1A42ECu;
    {
        const bool branch_taken_0x1a42ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42ECu;
        // 0x1a42f0: 0xac54097c  sw          $s4, 0x97C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2428), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42ec) {
            ctx->pc = 0x1A431Cu;
            goto label_1a431c;
        }
    }
    ctx->pc = 0x1A42F4u;
label_1a42f4:
    // 0x1a42f4: 0x0  nop
    ctx->pc = 0x1a42f4u;
    // NOP
label_1a42f8:
    // 0x1a42f8: 0x8e220728  lw          $v0, 0x728($s1)
    ctx->pc = 0x1a42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1832)));
label_1a42fc:
    // 0x1a42fc: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x1a42fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1a4300:
    // 0x1a4300: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a4300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1a4304:
    // 0x1a4304: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a4308:
    // 0x1a4308: 0xc0805c8  jal         func_201720
label_1a430c:
    if (ctx->pc == 0x1A430Cu) {
        ctx->pc = 0x1A430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4308u;
        // 0x1a430c: 0x2444072c  addiu       $a0, $v0, 0x72C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1836));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4310u;
        goto label_1a4310;
    }
    ctx->pc = 0x1A4308u;
    SET_GPR_U32(ctx, 31, 0x1A4310u);
    ctx->pc = 0x1A430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4308u;
    // 0x1a430c: 0x2444072c  addiu       $a0, $v0, 0x72C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1836));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1A4308u, 0x1A4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4310u;
label_1a4310:
    // 0x1a4310: 0x8e220728  lw          $v0, 0x728($s1)
    ctx->pc = 0x1a4310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1832)));
label_1a4314:
    // 0x1a4314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a4318:
    // 0x1a4318: 0xae220728  sw          $v0, 0x728($s1)
    ctx->pc = 0x1a4318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1832), GPR_U32(ctx, 2));
label_1a431c:
    // 0x1a431c: 0x0  nop
    ctx->pc = 0x1a431cu;
    // NOP
label_1a4320:
    // 0x1a4320: 0x1000ff82  b           . + 4 + (-0x7E << 2)
label_1a4324:
    if (ctx->pc == 0x1A4324u) {
        ctx->pc = 0x1A4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4320u;
        // 0x1a4324: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4328u;
        goto label_1a4328;
    }
    ctx->pc = 0x1A4320u;
    {
        const bool branch_taken_0x1a4320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4320u;
        // 0x1a4324: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4320) {
            ctx->pc = 0x1A412Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a412c;
        }
    }
    ctx->pc = 0x1A4328u;
label_1a4328:
    // 0x1a4328: 0x8e24068c  lw          $a0, 0x68C($s1)
    ctx->pc = 0x1a4328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a432c:
    // 0x1a432c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1a432cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1a4330:
    // 0x1a4330: 0x8e260688  lw          $a2, 0x688($s1)
    ctx->pc = 0x1a4330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
label_1a4334:
    // 0x1a4334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4338:
    // 0x1a4338: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1a4338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a433c:
    // 0x1a433c: 0x262306b4  addiu       $v1, $s1, 0x6B4
    ctx->pc = 0x1a433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1716));
label_1a4340:
    // 0x1a4340: 0x262206f8  addiu       $v0, $s1, 0x6F8
    ctx->pc = 0x1a4340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1784));
label_1a4344:
    // 0x1a4344: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x1a4344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4348:
    // 0x1a4348: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a4348u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1a434c:
    // 0x1a434c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1a434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1a4350:
    // 0x1a4350: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x1a4350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
label_1a4354:
    // 0x1a4354: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a4354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a4358:
    // 0x1a4358: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1a4358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a435c:
    // 0x1a435c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a435cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a4360:
    // 0x1a4360: 0xe6200694  swc1        $f0, 0x694($s1)
    ctx->pc = 0x1a4360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1684), bits); }
label_1a4364:
    // 0x1a4364: 0x8e24068c  lw          $a0, 0x68C($s1)
    ctx->pc = 0x1a4364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a4368:
    // 0x1a4368: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1a4368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1a436c:
    // 0x1a436c: 0xae240698  sw          $a0, 0x698($s1)
    ctx->pc = 0x1a436cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 4));
label_1a4370:
    // 0x1a4370: 0x8e24068c  lw          $a0, 0x68C($s1)
    ctx->pc = 0x1a4370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a4374:
    // 0x1a4374: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1a4374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1a4378:
    // 0x1a4378: 0xae24069c  sw          $a0, 0x69C($s1)
    ctx->pc = 0x1a4378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 4));
label_1a437c:
    // 0x1a437c: 0x8e24068c  lw          $a0, 0x68C($s1)
    ctx->pc = 0x1a437cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a4380:
    // 0x1a4380: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x1a4380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1a4384:
    // 0x1a4384: 0xae2406a0  sw          $a0, 0x6A0($s1)
    ctx->pc = 0x1a4384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1696), GPR_U32(ctx, 4));
label_1a4388:
    // 0x1a4388: 0xae2306a4  sw          $v1, 0x6A4($s1)
    ctx->pc = 0x1a4388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 3));
label_1a438c:
    // 0x1a438c: 0x8e2306b0  lw          $v1, 0x6B0($s1)
    ctx->pc = 0x1a438cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
label_1a4390:
    // 0x1a4390: 0xae2306a8  sw          $v1, 0x6A8($s1)
    ctx->pc = 0x1a4390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 3));
label_1a4394:
    // 0x1a4394: 0xae2206ac  sw          $v0, 0x6AC($s1)
    ctx->pc = 0x1a4394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1708), GPR_U32(ctx, 2));
label_1a4398:
    // 0x1a4398: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a4398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1a439c:
    // 0x1a439c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a439cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a43a0:
    // 0x1a43a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1a43a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1a43a4:
    // 0x1a43a4: 0x320f809  jalr        $t9
label_1a43a8:
    if (ctx->pc == 0x1A43A8u) {
        ctx->pc = 0x1A43ACu;
        goto label_1a43ac;
    }
    ctx->pc = 0x1A43A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A43ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43A4u, 0x1A43ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A43ACu;
label_1a43ac:
    // 0x1a43ac: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a43acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1a43b0:
    // 0x1a43b0: 0xc04ae68  jal         func_12B9A0
label_1a43b4:
    if (ctx->pc == 0x1A43B4u) {
        ctx->pc = 0x1A43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43B0u;
        // 0x1a43b4: 0x26250694  addiu       $a1, $s1, 0x694 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1684));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43B8u;
        goto label_1a43b8;
    }
    ctx->pc = 0x1A43B0u;
    SET_GPR_U32(ctx, 31, 0x1A43B8u);
    ctx->pc = 0x1A43B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43B0u;
    // 0x1a43b4: 0x26250694  addiu       $a1, $s1, 0x694 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1684));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B9A0u, 0x1A43B0u, 0x1A43B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43B8u;
label_1a43b8:
    // 0x1a43b8: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a43b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1a43bc:
    // 0x1a43bc: 0x8e260728  lw          $a2, 0x728($s1)
    ctx->pc = 0x1a43bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1832)));
label_1a43c0:
    // 0x1a43c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a43c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a43c4:
    // 0x1a43c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1a43c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1a43c8:
    // 0x1a43c8: 0x320f809  jalr        $t9
label_1a43cc:
    if (ctx->pc == 0x1A43CCu) {
        ctx->pc = 0x1A43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43C8u;
        // 0x1a43cc: 0x2625072c  addiu       $a1, $s1, 0x72C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1836));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43D0u;
        goto label_1a43d0;
    }
    ctx->pc = 0x1A43C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A43D0u);
        ctx->pc = 0x1A43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43C8u;
        // 0x1a43cc: 0x2625072c  addiu       $a1, $s1, 0x72C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1836));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43C8u, 0x1A43D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A43D0u;
label_1a43d0:
    // 0x1a43d0: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x1a43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_1a43d4:
    // 0x1a43d4: 0x2632067c  addiu       $s2, $s1, 0x67C
    ctx->pc = 0x1a43d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1660));
label_1a43d8:
    // 0x1a43d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a43d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a43dc:
    // 0x1a43dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a43dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a43e0:
    // 0x1a43e0: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a43e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a43e4:
    // 0x1a43e4: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x1a43e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1a43e8:
    // 0x1a43e8: 0xc064f7c  jal         func_193DF0
label_1a43ec:
    if (ctx->pc == 0x1A43ECu) {
        ctx->pc = 0x1A43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43E8u;
        // 0x1a43ec: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43F0u;
        goto label_1a43f0;
    }
    ctx->pc = 0x1A43E8u;
    SET_GPR_U32(ctx, 31, 0x1A43F0u);
    ctx->pc = 0x1A43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43E8u;
    // 0x1a43ec: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A43E8u, 0x1A43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43F0u;
label_1a43f0:
    // 0x1a43f0: 0xc04bf44  jal         func_12FD10
label_1a43f4:
    if (ctx->pc == 0x1A43F4u) {
        ctx->pc = 0x1A43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43F0u;
        // 0x1a43f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43F8u;
        goto label_1a43f8;
    }
    ctx->pc = 0x1A43F0u;
    SET_GPR_U32(ctx, 31, 0x1A43F8u);
    ctx->pc = 0x1A43F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43F0u;
    // 0x1a43f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x1A43F0u, 0x1A43F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43F8u;
label_1a43f8:
    // 0x1a43f8: 0xae220684  sw          $v0, 0x684($s1)
    ctx->pc = 0x1a43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1668), GPR_U32(ctx, 2));
label_1a43fc:
    // 0x1a43fc: 0x8e240684  lw          $a0, 0x684($s1)
    ctx->pc = 0x1a43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a4400:
    // 0x1a4400: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a4400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4404:
    // 0x1a4404: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a4404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a4408:
    // 0x1a4408: 0x320f809  jalr        $t9
label_1a440c:
    if (ctx->pc == 0x1A440Cu) {
        ctx->pc = 0x1A440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4408u;
        // 0x1a440c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4410u;
        goto label_1a4410;
    }
    ctx->pc = 0x1A4408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4410u);
        ctx->pc = 0x1A440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4408u;
        // 0x1a440c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4408u, 0x1A4410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4410u;
label_1a4410:
    // 0x1a4410: 0xae200680  sw          $zero, 0x680($s1)
    ctx->pc = 0x1a4410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
label_1a4414:
    // 0x1a4414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4418:
    // 0x1a4418: 0x8e220938  lw          $v0, 0x938($s1)
    ctx->pc = 0x1a4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2360)));
label_1a441c:
    // 0x1a441c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a4420:
    // 0x1a4420: 0xc063e14  jal         func_18F850
label_1a4424:
    if (ctx->pc == 0x1A4424u) {
        ctx->pc = 0x1A4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4420u;
        // 0x1a4424: 0xae220938  sw          $v0, 0x938($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4428u;
        goto label_1a4428;
    }
    ctx->pc = 0x1A4420u;
    SET_GPR_U32(ctx, 31, 0x1A4428u);
    ctx->pc = 0x1A4424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4420u;
    // 0x1a4424: 0xae220938  sw          $v0, 0x938($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2360), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A4420u, 0x1A4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4428u;
label_1a4428:
    // 0x1a4428: 0x10000110  b           . + 4 + (0x110 << 2)
label_1a442c:
    if (ctx->pc == 0x1A442Cu) {
        ctx->pc = 0x1A4430u;
        goto label_1a4430;
    }
    ctx->pc = 0x1A4428u;
    {
        const bool branch_taken_0x1a4428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4428) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A4430u;
label_1a4430:
    // 0x1a4430: 0x1260010e  beqz        $s3, . + 4 + (0x10E << 2)
label_1a4434:
    if (ctx->pc == 0x1A4434u) {
        ctx->pc = 0x1A4438u;
        goto label_1a4438;
    }
    ctx->pc = 0x1A4430u;
    {
        const bool branch_taken_0x1a4430 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4430) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A4438u;
label_1a4438:
    // 0x1a4438: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x1a4438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_1a443c:
    // 0x1a443c: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_1a4440:
    if (ctx->pc == 0x1A4440u) {
        ctx->pc = 0x1A4444u;
        goto label_1a4444;
    }
    ctx->pc = 0x1A443Cu;
    {
        const bool branch_taken_0x1a443c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a443c) {
            ctx->pc = 0x1A4474u;
            goto label_1a4474;
        }
    }
    ctx->pc = 0x1A4444u;
label_1a4444:
    // 0x1a4444: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1a4444u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1a4448:
    // 0x1a4448: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a444c:
    // 0x1a444c: 0xae230674  sw          $v1, 0x674($s1)
    ctx->pc = 0x1a444cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 3));
label_1a4450:
    // 0x1a4450: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x1a4450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
label_1a4454:
    // 0x1a4454: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a4454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a4458:
    // 0x1a4458: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1a4458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a445c:
    // 0x1a445c: 0xc064fb8  jal         func_193EE0
label_1a4460:
    if (ctx->pc == 0x1A4460u) {
        ctx->pc = 0x1A4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A445Cu;
        // 0x1a4460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4464u;
        goto label_1a4464;
    }
    ctx->pc = 0x1A445Cu;
    SET_GPR_U32(ctx, 31, 0x1A4464u);
    ctx->pc = 0x1A4460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A445Cu;
    // 0x1a4460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A445Cu, 0x1A4464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4464u;
label_1a4464:
    // 0x1a4464: 0xc063e14  jal         func_18F850
label_1a4468:
    if (ctx->pc == 0x1A4468u) {
        ctx->pc = 0x1A4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4464u;
        // 0x1a4468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A446Cu;
        goto label_1a446c;
    }
    ctx->pc = 0x1A4464u;
    SET_GPR_U32(ctx, 31, 0x1A446Cu);
    ctx->pc = 0x1A4468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4464u;
    // 0x1a4468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A4464u, 0x1A446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A446Cu;
label_1a446c:
    // 0x1a446c: 0x100000ff  b           . + 4 + (0xFF << 2)
label_1a4470:
    if (ctx->pc == 0x1A4470u) {
        ctx->pc = 0x1A4474u;
        goto label_1a4474;
    }
    ctx->pc = 0x1A446Cu;
    {
        const bool branch_taken_0x1a446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a446c) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A4474u;
label_1a4474:
    // 0x1a4474: 0x184000fd  blez        $v0, . + 4 + (0xFD << 2)
label_1a4478:
    if (ctx->pc == 0x1A4478u) {
        ctx->pc = 0x1A447Cu;
        goto label_1a447c;
    }
    ctx->pc = 0x1A4474u;
    {
        const bool branch_taken_0x1a4474 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a4474) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A447Cu;
label_1a447c:
    // 0x1a447c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a447cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4480:
    // 0x1a4480: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1a4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4484:
    // 0x1a4484: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a4484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a4488:
    // 0x1a4488: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a448c:
    // 0x1a448c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a448cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a4490:
    // 0x1a4490: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a4490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a4494:
    // 0x1a4494: 0x0  nop
    ctx->pc = 0x1a4494u;
    // NOP
label_1a4498:
    // 0x1a4498: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a449c:
    if (ctx->pc == 0x1A449Cu) {
        ctx->pc = 0x1A44A0u;
        goto label_1a44a0;
    }
    ctx->pc = 0x1A4498u;
    {
        const bool branch_taken_0x1a4498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4498) {
            ctx->pc = 0x1A44A4u;
            goto label_1a44a4;
        }
    }
    ctx->pc = 0x1A44A0u;
label_1a44a0:
    // 0x1a44a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a44a4:
    // 0x1a44a4: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x1a44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
label_1a44a8:
    // 0x1a44a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a44a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a44ac:
    // 0x1a44ac: 0xae270674  sw          $a3, 0x674($s1)
    ctx->pc = 0x1a44acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 7));
label_1a44b0:
    // 0x1a44b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a44b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a44b4:
    // 0x1a44b4: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x1a44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_1a44b8:
    // 0x1a44b8: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1a44b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a44bc:
    // 0x1a44bc: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1a44bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a44c0:
    // 0x1a44c0: 0xc064f7c  jal         func_193DF0
label_1a44c4:
    if (ctx->pc == 0x1A44C4u) {
        ctx->pc = 0x1A44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44C0u;
        // 0x1a44c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44C8u;
        goto label_1a44c8;
    }
    ctx->pc = 0x1A44C0u;
    SET_GPR_U32(ctx, 31, 0x1A44C8u);
    ctx->pc = 0x1A44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44C0u;
    // 0x1a44c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A44C0u, 0x1A44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44C8u;
label_1a44c8:
    // 0x1a44c8: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a44cc:
    // 0x1a44cc: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1a44ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a44d0:
    // 0x1a44d0: 0xc064fb8  jal         func_193EE0
label_1a44d4:
    if (ctx->pc == 0x1A44D4u) {
        ctx->pc = 0x1A44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44D0u;
        // 0x1a44d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44D8u;
        goto label_1a44d8;
    }
    ctx->pc = 0x1A44D0u;
    SET_GPR_U32(ctx, 31, 0x1A44D8u);
    ctx->pc = 0x1A44D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44D0u;
    // 0x1a44d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A44D0u, 0x1A44D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44D8u;
label_1a44d8:
    // 0x1a44d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a44d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a44dc:
    // 0x1a44dc: 0xc0692d8  jal         func_1A4B60
label_1a44e0:
    if (ctx->pc == 0x1A44E0u) {
        ctx->pc = 0x1A44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44DCu;
        // 0x1a44e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44E4u;
        goto label_1a44e4;
    }
    ctx->pc = 0x1A44DCu;
    SET_GPR_U32(ctx, 31, 0x1A44E4u);
    ctx->pc = 0x1A44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44DCu;
    // 0x1a44e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A44DCu, 0x1A44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44E4u;
label_1a44e4:
    // 0x1a44e4: 0xc063e14  jal         func_18F850
label_1a44e8:
    if (ctx->pc == 0x1A44E8u) {
        ctx->pc = 0x1A44E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44E4u;
        // 0x1a44e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44ECu;
        goto label_1a44ec;
    }
    ctx->pc = 0x1A44E4u;
    SET_GPR_U32(ctx, 31, 0x1A44ECu);
    ctx->pc = 0x1A44E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44E4u;
    // 0x1a44e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A44E4u, 0x1A44ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44ECu;
label_1a44ec:
    // 0x1a44ec: 0x100000df  b           . + 4 + (0xDF << 2)
label_1a44f0:
    if (ctx->pc == 0x1A44F0u) {
        ctx->pc = 0x1A44F4u;
        goto label_1a44f4;
    }
    ctx->pc = 0x1A44ECu;
    {
        const bool branch_taken_0x1a44ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a44ec) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A44F4u;
label_1a44f4:
    // 0x1a44f4: 0xc04ae40  jal         func_12B900
label_1a44f8:
    if (ctx->pc == 0x1A44F8u) {
        ctx->pc = 0x1A44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44F4u;
        // 0x1a44f8: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44FCu;
        goto label_1a44fc;
    }
    ctx->pc = 0x1A44F4u;
    SET_GPR_U32(ctx, 31, 0x1A44FCu);
    ctx->pc = 0x1A44F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44F4u;
    // 0x1a44f8: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B900u, 0x1A44F4u, 0x1A44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44FCu;
label_1a44fc:
    // 0x1a44fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a44fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4500:
    // 0x1a4500: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a4500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4504:
    // 0x1a4504: 0x234a821  addu        $s5, $s1, $s4
    ctx->pc = 0x1a4504u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1a4508:
    // 0x1a4508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a450c:
    // 0x1a450c: 0x8ea50450  lw          $a1, 0x450($s5)
    ctx->pc = 0x1a450cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1104)));
label_1a4510:
    // 0x1a4510: 0xc064c20  jal         func_193080
label_1a4514:
    if (ctx->pc == 0x1A4514u) {
        ctx->pc = 0x1A4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4510u;
        // 0x1a4514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4518u;
        goto label_1a4518;
    }
    ctx->pc = 0x1A4510u;
    SET_GPR_U32(ctx, 31, 0x1A4518u);
    ctx->pc = 0x1A4514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4510u;
    // 0x1a4514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x1A4510u, 0x1A4518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4518u;
label_1a4518:
    // 0x1a4518: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a4518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a451c:
    // 0x1a451c: 0xaea004d0  sw          $zero, 0x4D0($s5)
    ctx->pc = 0x1a451cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1232), GPR_U32(ctx, 0));
label_1a4520:
    // 0x1a4520: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1a4520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a4524:
    // 0x1a4524: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1a4528:
    if (ctx->pc == 0x1A4528u) {
        ctx->pc = 0x1A4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4524u;
        // 0x1a4528: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A452Cu;
        goto label_1a452c;
    }
    ctx->pc = 0x1A4524u;
    {
        const bool branch_taken_0x1a4524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4524u;
        // 0x1a4528: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4524) {
            ctx->pc = 0x1A4504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4504;
        }
    }
    ctx->pc = 0x1A452Cu;
label_1a452c:
    // 0x1a452c: 0xc063e14  jal         func_18F850
label_1a4530:
    if (ctx->pc == 0x1A4530u) {
        ctx->pc = 0x1A4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A452Cu;
        // 0x1a4530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4534u;
        goto label_1a4534;
    }
    ctx->pc = 0x1A452Cu;
    SET_GPR_U32(ctx, 31, 0x1A4534u);
    ctx->pc = 0x1A4530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A452Cu;
    // 0x1a4530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A452Cu, 0x1A4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4534u;
label_1a4534:
    // 0x1a4534: 0x100000cd  b           . + 4 + (0xCD << 2)
label_1a4538:
    if (ctx->pc == 0x1A4538u) {
        ctx->pc = 0x1A453Cu;
        goto label_1a453c;
    }
    ctx->pc = 0x1A4534u;
    {
        const bool branch_taken_0x1a4534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4534) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A453Cu;
label_1a453c:
    // 0x1a453c: 0xc04ae64  jal         func_12B990
label_1a4540:
    if (ctx->pc == 0x1A4540u) {
        ctx->pc = 0x1A4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A453Cu;
        // 0x1a4540: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4544u;
        goto label_1a4544;
    }
    ctx->pc = 0x1A453Cu;
    SET_GPR_U32(ctx, 31, 0x1A4544u);
    ctx->pc = 0x1A4540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A453Cu;
    // 0x1a4540: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B990u, 0x1A453Cu, 0x1A4544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4544u;
label_1a4544:
    // 0x1a4544: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_1a4548:
    if (ctx->pc == 0x1A4548u) {
        ctx->pc = 0x1A4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4544u;
        // 0x1a4548: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A454Cu;
        goto label_1a454c;
    }
    ctx->pc = 0x1A4544u;
    {
        const bool branch_taken_0x1a4544 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4544u;
        // 0x1a4548: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4544) {
            ctx->pc = 0x1A456Cu;
            goto label_1a456c;
        }
    }
    ctx->pc = 0x1A454Cu;
label_1a454c:
    // 0x1a454c: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a4550:
    // 0x1a4550: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1a4554:
    if (ctx->pc == 0x1A4554u) {
        ctx->pc = 0x1A4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4550u;
        // 0x1a4554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4558u;
        goto label_1a4558;
    }
    ctx->pc = 0x1A4550u;
    {
        const bool branch_taken_0x1a4550 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4550u;
        // 0x1a4554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4550) {
            ctx->pc = 0x1A4570u;
            goto label_1a4570;
        }
    }
    ctx->pc = 0x1A4558u;
label_1a4558:
    // 0x1a4558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a455c:
    // 0x1a455c: 0xc0692d8  jal         func_1A4B60
label_1a4560:
    if (ctx->pc == 0x1A4560u) {
        ctx->pc = 0x1A4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A455Cu;
        // 0x1a4560: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4564u;
        goto label_1a4564;
    }
    ctx->pc = 0x1A455Cu;
    SET_GPR_U32(ctx, 31, 0x1A4564u);
    ctx->pc = 0x1A4560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A455Cu;
    // 0x1a4560: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A455Cu, 0x1A4564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4564u;
label_1a4564:
    // 0x1a4564: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a4568:
    if (ctx->pc == 0x1A4568u) {
        ctx->pc = 0x1A4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4564u;
        // 0x1a4568: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A456Cu;
        goto label_1a456c;
    }
    ctx->pc = 0x1A4564u;
    {
        const bool branch_taken_0x1a4564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4564u;
        // 0x1a4568: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4564) {
            ctx->pc = 0x1A457Cu;
            goto label_1a457c;
        }
    }
    ctx->pc = 0x1A456Cu;
label_1a456c:
    // 0x1a456c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4570:
    // 0x1a4570: 0xc0692d8  jal         func_1A4B60
label_1a4574:
    if (ctx->pc == 0x1A4574u) {
        ctx->pc = 0x1A4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4570u;
        // 0x1a4574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4578u;
        goto label_1a4578;
    }
    ctx->pc = 0x1A4570u;
    SET_GPR_U32(ctx, 31, 0x1A4578u);
    ctx->pc = 0x1A4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4570u;
    // 0x1a4574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A4570u, 0x1A4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4578u;
label_1a4578:
    // 0x1a4578: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1a4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1a457c:
    // 0x1a457c: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
label_1a4580:
    if (ctx->pc == 0x1A4580u) {
        ctx->pc = 0x1A4584u;
        goto label_1a4584;
    }
    ctx->pc = 0x1A457Cu;
    {
        const bool branch_taken_0x1a457c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a457c) {
            ctx->pc = 0x1A45D0u;
            goto label_1a45d0;
        }
    }
    ctx->pc = 0x1A4584u;
label_1a4584:
    // 0x1a4584: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a4584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a4588:
    // 0x1a4588: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_1a458c:
    if (ctx->pc == 0x1A458Cu) {
        ctx->pc = 0x1A4590u;
        goto label_1a4590;
    }
    ctx->pc = 0x1A4588u;
    {
        const bool branch_taken_0x1a4588 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4588) {
            ctx->pc = 0x1A45A4u;
            goto label_1a45a4;
        }
    }
    ctx->pc = 0x1A4590u;
label_1a4590:
    // 0x1a4590: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4594:
    // 0x1a4594: 0x124200b5  beq         $s2, $v0, . + 4 + (0xB5 << 2)
label_1a4598:
    if (ctx->pc == 0x1A4598u) {
        ctx->pc = 0x1A459Cu;
        goto label_1a459c;
    }
    ctx->pc = 0x1A4594u;
    {
        const bool branch_taken_0x1a4594 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4594) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A459Cu;
label_1a459c:
    // 0x1a459c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a45a0:
    if (ctx->pc == 0x1A45A0u) {
        ctx->pc = 0x1A45A4u;
        goto label_1a45a4;
    }
    ctx->pc = 0x1A459Cu;
    {
        const bool branch_taken_0x1a459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a459c) {
            ctx->pc = 0x1A45F0u;
            goto label_1a45f0;
        }
    }
    ctx->pc = 0x1A45A4u;
label_1a45a4:
    // 0x1a45a4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1a45a8:
    if (ctx->pc == 0x1A45A8u) {
        ctx->pc = 0x1A45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45A4u;
        // 0x1a45a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45ACu;
        goto label_1a45ac;
    }
    ctx->pc = 0x1A45A4u;
    {
        const bool branch_taken_0x1a45a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45A4u;
        // 0x1a45a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45a4) {
            ctx->pc = 0x1A45C0u;
            goto label_1a45c0;
        }
    }
    ctx->pc = 0x1A45ACu;
label_1a45ac:
    // 0x1a45ac: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a45acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a45b0:
    // 0x1a45b0: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1a45b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1a45b4:
    // 0x1a45b4: 0xc064ee0  jal         func_193B80
label_1a45b8:
    if (ctx->pc == 0x1A45B8u) {
        ctx->pc = 0x1A45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45B4u;
        // 0x1a45b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45BCu;
        goto label_1a45bc;
    }
    ctx->pc = 0x1A45B4u;
    SET_GPR_U32(ctx, 31, 0x1A45BCu);
    ctx->pc = 0x1A45B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A45B4u;
    // 0x1a45b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A45B4u, 0x1A45BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45BCu;
label_1a45bc:
    // 0x1a45bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a45bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a45c0:
    // 0x1a45c0: 0xc063e14  jal         func_18F850
label_1a45c4:
    if (ctx->pc == 0x1A45C4u) {
        ctx->pc = 0x1A45C8u;
        goto label_1a45c8;
    }
    ctx->pc = 0x1A45C0u;
    SET_GPR_U32(ctx, 31, 0x1A45C8u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A45C0u, 0x1A45C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45C8u;
label_1a45c8:
    // 0x1a45c8: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_1a45cc:
    if (ctx->pc == 0x1A45CCu) {
        ctx->pc = 0x1A45D0u;
        goto label_1a45d0;
    }
    ctx->pc = 0x1A45C8u;
    {
        const bool branch_taken_0x1a45c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45c8) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A45D0u;
label_1a45d0:
    // 0x1a45d0: 0x126000a6  beqz        $s3, . + 4 + (0xA6 << 2)
label_1a45d4:
    if (ctx->pc == 0x1A45D4u) {
        ctx->pc = 0x1A45D8u;
        goto label_1a45d8;
    }
    ctx->pc = 0x1A45D0u;
    {
        const bool branch_taken_0x1a45d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45d0) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A45D8u;
label_1a45d8:
    // 0x1a45d8: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a45dc:
    // 0x1a45dc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a45dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a45e0:
    // 0x1a45e0: 0xc064ee0  jal         func_193B80
label_1a45e4:
    if (ctx->pc == 0x1A45E4u) {
        ctx->pc = 0x1A45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45E0u;
        // 0x1a45e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45E8u;
        goto label_1a45e8;
    }
    ctx->pc = 0x1A45E0u;
    SET_GPR_U32(ctx, 31, 0x1A45E8u);
    ctx->pc = 0x1A45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A45E0u;
    // 0x1a45e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A45E0u, 0x1A45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45E8u;
label_1a45e8:
    // 0x1a45e8: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1a45ec:
    if (ctx->pc == 0x1A45ECu) {
        ctx->pc = 0x1A45F0u;
        goto label_1a45f0;
    }
    ctx->pc = 0x1A45E8u;
    {
        const bool branch_taken_0x1a45e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45e8) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A45F0u;
label_1a45f0:
    // 0x1a45f0: 0x12600068  beqz        $s3, . + 4 + (0x68 << 2)
label_1a45f4:
    if (ctx->pc == 0x1A45F4u) {
        ctx->pc = 0x1A45F8u;
        goto label_1a45f8;
    }
    ctx->pc = 0x1A45F0u;
    {
        const bool branch_taken_0x1a45f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45f0) {
            ctx->pc = 0x1A4794u;
            goto label_1a4794;
        }
    }
    ctx->pc = 0x1A45F8u;
label_1a45f8:
    // 0x1a45f8: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a45fc:
    // 0x1a45fc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_1a4600:
    if (ctx->pc == 0x1A4600u) {
        ctx->pc = 0x1A4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45FCu;
        // 0x1a4600: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4604u;
        goto label_1a4604;
    }
    ctx->pc = 0x1A45FCu;
    {
        const bool branch_taken_0x1a45fc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45FCu;
        // 0x1a4600: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45fc) {
            ctx->pc = 0x1A4614u;
            goto label_1a4614;
        }
    }
    ctx->pc = 0x1A4604u;
label_1a4604:
    // 0x1a4604: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x1a4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_1a4608:
    // 0x1a4608: 0x18400062  blez        $v0, . + 4 + (0x62 << 2)
label_1a460c:
    if (ctx->pc == 0x1A460Cu) {
        ctx->pc = 0x1A4610u;
        goto label_1a4610;
    }
    ctx->pc = 0x1A4608u;
    {
        const bool branch_taken_0x1a4608 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a4608) {
            ctx->pc = 0x1A4794u;
            goto label_1a4794;
        }
    }
    ctx->pc = 0x1A4610u;
label_1a4610:
    // 0x1a4610: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1a4610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1a4614:
    // 0x1a4614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4618:
    // 0x1a4618: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1a4618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1a461c:
    // 0x1a461c: 0x8ca3097c  lw          $v1, 0x97C($a1)
    ctx->pc = 0x1a461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2428)));
label_1a4620:
    // 0x1a4620: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1a4620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a4624:
    // 0x1a4624: 0x10820025  beq         $a0, $v0, . + 4 + (0x25 << 2)
label_1a4628:
    if (ctx->pc == 0x1A4628u) {
        ctx->pc = 0x1A4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4624u;
        // 0x1a4628: 0x24b4097c  addiu       $s4, $a1, 0x97C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 2428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A462Cu;
        goto label_1a462c;
    }
    ctx->pc = 0x1A4624u;
    {
        const bool branch_taken_0x1a4624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4624u;
        // 0x1a4628: 0x24b4097c  addiu       $s4, $a1, 0x97C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 2428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4624) {
            ctx->pc = 0x1A46BCu;
            goto label_1a46bc;
        }
    }
    ctx->pc = 0x1A462Cu;
label_1a462c:
    // 0x1a462c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4630:
    // 0x1a4630: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_1a4634:
    if (ctx->pc == 0x1A4634u) {
        ctx->pc = 0x1A4638u;
        goto label_1a4638;
    }
    ctx->pc = 0x1A4630u;
    {
        const bool branch_taken_0x1a4630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4630) {
            ctx->pc = 0x1A4690u;
            goto label_1a4690;
        }
    }
    ctx->pc = 0x1A4638u;
label_1a4638:
    // 0x1a4638: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1a463c:
    if (ctx->pc == 0x1A463Cu) {
        ctx->pc = 0x1A4640u;
        goto label_1a4640;
    }
    ctx->pc = 0x1A4638u;
    {
        const bool branch_taken_0x1a4638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4638) {
            ctx->pc = 0x1A4648u;
            goto label_1a4648;
        }
    }
    ctx->pc = 0x1A4640u;
label_1a4640:
    // 0x1a4640: 0x10000054  b           . + 4 + (0x54 << 2)
label_1a4644:
    if (ctx->pc == 0x1A4644u) {
        ctx->pc = 0x1A4648u;
        goto label_1a4648;
    }
    ctx->pc = 0x1A4640u;
    {
        const bool branch_taken_0x1a4640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4640) {
            ctx->pc = 0x1A4794u;
            goto label_1a4794;
        }
    }
    ctx->pc = 0x1A4648u;
label_1a4648:
    // 0x1a4648: 0x8ca2093c  lw          $v0, 0x93C($a1)
    ctx->pc = 0x1a4648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2364)));
label_1a464c:
    // 0x1a464c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1a4650:
    if (ctx->pc == 0x1A4650u) {
        ctx->pc = 0x1A4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A464Cu;
        // 0x1a4650: 0x24a6093c  addiu       $a2, $a1, 0x93C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2364));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4654u;
        goto label_1a4654;
    }
    ctx->pc = 0x1A464Cu;
    {
        const bool branch_taken_0x1a464c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A464Cu;
        // 0x1a4650: 0x24a6093c  addiu       $a2, $a1, 0x93C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a464c) {
            ctx->pc = 0x1A4670u;
            goto label_1a4670;
        }
    }
    ctx->pc = 0x1A4654u;
label_1a4654:
    // 0x1a4654: 0xae320320  sw          $s2, 0x320($s1)
    ctx->pc = 0x1a4654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 18));
label_1a4658:
    // 0x1a4658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a465c:
    // 0x1a465c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a465cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1a4660:
    // 0x1a4660: 0xc0692d8  jal         func_1A4B60
label_1a4664:
    if (ctx->pc == 0x1A4664u) {
        ctx->pc = 0x1A4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4660u;
        // 0x1a4664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4668u;
        goto label_1a4668;
    }
    ctx->pc = 0x1A4660u;
    SET_GPR_U32(ctx, 31, 0x1A4668u);
    ctx->pc = 0x1A4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4660u;
    // 0x1a4664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A4660u, 0x1A4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4668u;
label_1a4668:
    // 0x1a4668: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1a466c:
    if (ctx->pc == 0x1A466Cu) {
        ctx->pc = 0x1A4670u;
        goto label_1a4670;
    }
    ctx->pc = 0x1A4668u;
    {
        const bool branch_taken_0x1a4668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4668) {
            ctx->pc = 0x1A4794u;
            goto label_1a4794;
        }
    }
    ctx->pc = 0x1A4670u;
label_1a4670:
    // 0x1a4670: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4674:
    // 0x1a4674: 0xae220320  sw          $v0, 0x320($s1)
    ctx->pc = 0x1a4674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
label_1a4678:
    // 0x1a4678: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a4678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a467c:
    // 0x1a467c: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1a467cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1a4680:
    // 0x1a4680: 0xc064ee0  jal         func_193B80
label_1a4684:
    if (ctx->pc == 0x1A4684u) {
        ctx->pc = 0x1A4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4680u;
        // 0x1a4684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4688u;
        goto label_1a4688;
    }
    ctx->pc = 0x1A4680u;
    SET_GPR_U32(ctx, 31, 0x1A4688u);
    ctx->pc = 0x1A4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4680u;
    // 0x1a4684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A4680u, 0x1A4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4688u;
label_1a4688:
    // 0x1a4688: 0x10000042  b           . + 4 + (0x42 << 2)
label_1a468c:
    if (ctx->pc == 0x1A468Cu) {
        ctx->pc = 0x1A4690u;
        goto label_1a4690;
    }
    ctx->pc = 0x1A4688u;
    {
        const bool branch_taken_0x1a4688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4688) {
            ctx->pc = 0x1A4794u;
            goto label_1a4794;
        }
    }
    ctx->pc = 0x1A4690u;
label_1a4690:
    // 0x1a4690: 0xc04ae90  jal         func_12BA40
label_1a4694:
    if (ctx->pc == 0x1A4694u) {
        ctx->pc = 0x1A4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4690u;
        // 0x1a4694: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4698u;
        goto label_1a4698;
    }
    ctx->pc = 0x1A4690u;
    SET_GPR_U32(ctx, 31, 0x1A4698u);
    ctx->pc = 0x1A4694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4690u;
    // 0x1a4694: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA40u, 0x1A4690u, 0x1A4698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4698u;
label_1a4698:
    // 0x1a4698: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_1a469c:
    if (ctx->pc == 0x1A469Cu) {
        ctx->pc = 0x1A46A0u;
        goto label_1a46a0;
    }
    ctx->pc = 0x1A4698u;
    {
        const bool branch_taken_0x1a4698 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a4698) {
            ctx->pc = 0x1A46B4u;
            goto label_1a46b4;
        }
    }
    ctx->pc = 0x1A46A0u;
label_1a46a0:
    // 0x1a46a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1a46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1a46a4:
    // 0x1a46a4: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1a46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1a46a8:
    // 0x1a46a8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a46ac:
    // 0x1a46ac: 0x10000039  b           . + 4 + (0x39 << 2)
label_1a46b0:
    if (ctx->pc == 0x1A46B0u) {
        ctx->pc = 0x1A46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46ACu;
        // 0x1a46b0: 0xae220320  sw          $v0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A46B4u;
        goto label_1a46b4;
    }
    ctx->pc = 0x1A46ACu;
    {
        const bool branch_taken_0x1a46ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46ACu;
        // 0x1a46b0: 0xae220320  sw          $v0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46ac) {
            ctx->pc = 0x1A4794u;
            goto label_1a4794;
        }
    }
    ctx->pc = 0x1A46B4u;
label_1a46b4:
    // 0x1a46b4: 0x10000037  b           . + 4 + (0x37 << 2)
label_1a46b8:
    if (ctx->pc == 0x1A46B8u) {
        ctx->pc = 0x1A46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46B4u;
        // 0x1a46b8: 0xae320320  sw          $s2, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A46BCu;
        goto label_1a46bc;
    }
    ctx->pc = 0x1A46B4u;
    {
        const bool branch_taken_0x1a46b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46B4u;
        // 0x1a46b8: 0xae320320  sw          $s2, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46b4) {
            ctx->pc = 0x1A4794u;
            goto label_1a4794;
        }
    }
    ctx->pc = 0x1A46BCu;
label_1a46bc:
    // 0x1a46bc: 0xc0802aa  jal         func_200AA8
label_1a46c0:
    if (ctx->pc == 0x1A46C0u) {
        ctx->pc = 0x1A46C4u;
        goto label_1a46c4;
    }
    ctx->pc = 0x1A46BCu;
    SET_GPR_U32(ctx, 31, 0x1A46C4u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1A46BCu, 0x1A46C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46C4u;
label_1a46c4:
    // 0x1a46c4: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1a46c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_1a46c8:
    // 0x1a46c8: 0x8e220938  lw          $v0, 0x938($s1)
    ctx->pc = 0x1a46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2360)));
label_1a46cc:
    // 0x1a46cc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1a46ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a46d0:
    // 0x1a46d0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1a46d0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a46d4:
    // 0x1a46d4: 0x0  nop
    ctx->pc = 0x1a46d4u;
    // NOP
label_1a46d8:
    // 0x1a46d8: 0x0  nop
    ctx->pc = 0x1a46d8u;
    // NOP
label_1a46dc:
    // 0x1a46dc: 0x1810  mfhi        $v1
    ctx->pc = 0x1a46dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1a46e0:
    // 0x1a46e0: 0x10000028  b           . + 4 + (0x28 << 2)
label_1a46e4:
    if (ctx->pc == 0x1A46E4u) {
        ctx->pc = 0x1A46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46E0u;
        // 0x1a46e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A46E8u;
        goto label_1a46e8;
    }
    ctx->pc = 0x1A46E0u;
    {
        const bool branch_taken_0x1a46e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46E0u;
        // 0x1a46e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46e0) {
            ctx->pc = 0x1A4784u;
            goto label_1a4784;
        }
    }
    ctx->pc = 0x1A46E8u;
label_1a46e8:
    // 0x1a46e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a46ec:
    // 0x1a46ec: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1a46ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a46f0:
    // 0x1a46f0: 0x8cc2093c  lw          $v0, 0x93C($a2)
    ctx->pc = 0x1a46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2364)));
label_1a46f4:
    // 0x1a46f4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1a46f8:
    if (ctx->pc == 0x1A46F8u) {
        ctx->pc = 0x1A46FCu;
        goto label_1a46fc;
    }
    ctx->pc = 0x1A46F4u;
    {
        const bool branch_taken_0x1a46f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a46f4) {
            ctx->pc = 0x1A4768u;
            goto label_1a4768;
        }
    }
    ctx->pc = 0x1A46FCu;
label_1a46fc:
    // 0x1a46fc: 0x8cc4097c  lw          $a0, 0x97C($a2)
    ctx->pc = 0x1a46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2428)));
label_1a4700:
    // 0x1a4700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4704:
    // 0x1a4704: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1a4704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1a4708:
    // 0x1a4708: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_1a470c:
    if (ctx->pc == 0x1A470Cu) {
        ctx->pc = 0x1A470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4708u;
        // 0x1a470c: 0x24d2097c  addiu       $s2, $a2, 0x97C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 2428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4710u;
        goto label_1a4710;
    }
    ctx->pc = 0x1A4708u;
    {
        const bool branch_taken_0x1a4708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4708u;
        // 0x1a470c: 0x24d2097c  addiu       $s2, $a2, 0x97C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 2428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4708) {
            ctx->pc = 0x1A4748u;
            goto label_1a4748;
        }
    }
    ctx->pc = 0x1A4710u;
label_1a4710:
    // 0x1a4710: 0xc04ae90  jal         func_12BA40
label_1a4714:
    if (ctx->pc == 0x1A4714u) {
        ctx->pc = 0x1A4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4710u;
        // 0x1a4714: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4718u;
        goto label_1a4718;
    }
    ctx->pc = 0x1A4710u;
    SET_GPR_U32(ctx, 31, 0x1A4718u);
    ctx->pc = 0x1A4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4710u;
    // 0x1a4714: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA40u, 0x1A4710u, 0x1A4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4718u;
label_1a4718:
    // 0x1a4718: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1a471c:
    if (ctx->pc == 0x1A471Cu) {
        ctx->pc = 0x1A4720u;
        goto label_1a4720;
    }
    ctx->pc = 0x1A4718u;
    {
        const bool branch_taken_0x1a4718 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a4718) {
            ctx->pc = 0x1A4738u;
            goto label_1a4738;
        }
    }
    ctx->pc = 0x1A4720u;
label_1a4720:
    // 0x1a4720: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a4720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a4724:
    // 0x1a4724: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a4724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a4728:
    // 0x1a4728: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1a4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1a472c:
    // 0x1a472c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a4730:
    // 0x1a4730: 0x10000018  b           . + 4 + (0x18 << 2)
label_1a4734:
    if (ctx->pc == 0x1A4734u) {
        ctx->pc = 0x1A4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4730u;
        // 0x1a4734: 0xae220320  sw          $v0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4738u;
        goto label_1a4738;
    }
    ctx->pc = 0x1A4730u;
    {
        const bool branch_taken_0x1a4730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4730u;
        // 0x1a4734: 0xae220320  sw          $v0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4730) {
            ctx->pc = 0x1A4794u;
            goto label_1a4794;
        }
    }
    ctx->pc = 0x1A4738u;
label_1a4738:
    // 0x1a4738: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a4738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a473c:
    // 0x1a473c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a4740:
    // 0x1a4740: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a4744:
    if (ctx->pc == 0x1A4744u) {
        ctx->pc = 0x1A4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4740u;
        // 0x1a4744: 0xae220320  sw          $v0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4748u;
        goto label_1a4748;
    }
    ctx->pc = 0x1A4740u;
    {
        const bool branch_taken_0x1a4740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4740u;
        // 0x1a4744: 0xae220320  sw          $v0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4740) {
            ctx->pc = 0x1A4794u;
            goto label_1a4794;
        }
    }
    ctx->pc = 0x1A4748u;
label_1a4748:
    // 0x1a4748: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1a474c:
    // 0x1a474c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a474cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4750:
    // 0x1a4750: 0xae220320  sw          $v0, 0x320($s1)
    ctx->pc = 0x1a4750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
label_1a4754:
    // 0x1a4754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4758:
    // 0x1a4758: 0xc0692d8  jal         func_1A4B60
label_1a475c:
    if (ctx->pc == 0x1A475Cu) {
        ctx->pc = 0x1A475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4758u;
        // 0x1a475c: 0xacc3093c  sw          $v1, 0x93C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4760u;
        goto label_1a4760;
    }
    ctx->pc = 0x1A4758u;
    SET_GPR_U32(ctx, 31, 0x1A4760u);
    ctx->pc = 0x1A475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4758u;
    // 0x1a475c: 0xacc3093c  sw          $v1, 0x93C($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 2364), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A4758u, 0x1A4760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4760u;
label_1a4760:
    // 0x1a4760: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a4764:
    if (ctx->pc == 0x1A4764u) {
        ctx->pc = 0x1A4768u;
        goto label_1a4768;
    }
    ctx->pc = 0x1A4760u;
    {
        const bool branch_taken_0x1a4760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4760) {
            ctx->pc = 0x1A4794u;
            goto label_1a4794;
        }
    }
    ctx->pc = 0x1A4768u;
label_1a4768:
    // 0x1a4768: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a476c:
    // 0x1a476c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1a476cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a4770:
    // 0x1a4770: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a4774:
    if (ctx->pc == 0x1A4774u) {
        ctx->pc = 0x1A4778u;
        goto label_1a4778;
    }
    ctx->pc = 0x1A4770u;
    {
        const bool branch_taken_0x1a4770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4770) {
            ctx->pc = 0x1A477Cu;
            goto label_1a477c;
        }
    }
    ctx->pc = 0x1A4778u;
label_1a4778:
    // 0x1a4778: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a4778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a477c:
    // 0x1a477c: 0x0  nop
    ctx->pc = 0x1a477cu;
    // NOP
label_1a4780:
    // 0x1a4780: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a4780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a4784:
    // 0x1a4784: 0x0  nop
    ctx->pc = 0x1a4784u;
    // NOP
label_1a4788:
    // 0x1a4788: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1a4788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a478c:
    // 0x1a478c: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_1a4790:
    if (ctx->pc == 0x1A4790u) {
        ctx->pc = 0x1A4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A478Cu;
        // 0x1a4790: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4794u;
        goto label_1a4794;
    }
    ctx->pc = 0x1A478Cu;
    {
        const bool branch_taken_0x1a478c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A478Cu;
        // 0x1a4790: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a478c) {
            ctx->pc = 0x1A46ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a46ec;
        }
    }
    ctx->pc = 0x1A4794u;
label_1a4794:
    // 0x1a4794: 0x0  nop
    ctx->pc = 0x1a4794u;
    // NOP
label_1a4798:
    // 0x1a4798: 0xc063e14  jal         func_18F850
label_1a479c:
    if (ctx->pc == 0x1A479Cu) {
        ctx->pc = 0x1A479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4798u;
        // 0x1a479c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47A0u;
        goto label_1a47a0;
    }
    ctx->pc = 0x1A4798u;
    SET_GPR_U32(ctx, 31, 0x1A47A0u);
    ctx->pc = 0x1A479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4798u;
    // 0x1a479c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A4798u, 0x1A47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47A0u;
label_1a47a0:
    // 0x1a47a0: 0x10000032  b           . + 4 + (0x32 << 2)
label_1a47a4:
    if (ctx->pc == 0x1A47A4u) {
        ctx->pc = 0x1A47A8u;
        goto label_1a47a8;
    }
    ctx->pc = 0x1A47A0u;
    {
        const bool branch_taken_0x1a47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47a0) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A47A8u;
label_1a47a8:
    // 0x1a47a8: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x1a47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_1a47ac:
    // 0x1a47ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a47acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a47b0:
    // 0x1a47b0: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_1a47b4:
    if (ctx->pc == 0x1A47B4u) {
        ctx->pc = 0x1A47B8u;
        goto label_1a47b8;
    }
    ctx->pc = 0x1A47B0u;
    {
        const bool branch_taken_0x1a47b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a47b0) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A47B8u;
label_1a47b8:
    // 0x1a47b8: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x1a47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_1a47bc:
    // 0x1a47bc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1a47c0:
    if (ctx->pc == 0x1A47C0u) {
        ctx->pc = 0x1A47C4u;
        goto label_1a47c4;
    }
    ctx->pc = 0x1A47BCu;
    {
        const bool branch_taken_0x1a47bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a47bc) {
            ctx->pc = 0x1A47CCu;
            goto label_1a47cc;
        }
    }
    ctx->pc = 0x1A47C4u;
label_1a47c4:
    // 0x1a47c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a47c8:
    // 0x1a47c8: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x1a47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_1a47cc:
    // 0x1a47cc: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a47d0:
    // 0x1a47d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a47d4:
    if (ctx->pc == 0x1A47D4u) {
        ctx->pc = 0x1A47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47D0u;
        // 0x1a47d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47D8u;
        goto label_1a47d8;
    }
    ctx->pc = 0x1A47D0u;
    {
        const bool branch_taken_0x1a47d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47D0u;
        // 0x1a47d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47d0) {
            ctx->pc = 0x1A47E8u;
            goto label_1a47e8;
        }
    }
    ctx->pc = 0x1A47D8u;
label_1a47d8:
    // 0x1a47d8: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x1a47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_1a47dc:
    // 0x1a47dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1a47e0:
    if (ctx->pc == 0x1A47E0u) {
        ctx->pc = 0x1A47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47DCu;
        // 0x1a47e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47E4u;
        goto label_1a47e4;
    }
    ctx->pc = 0x1A47DCu;
    {
        const bool branch_taken_0x1a47dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47DCu;
        // 0x1a47e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47dc) {
            ctx->pc = 0x1A4800u;
            goto label_1a4800;
        }
    }
    ctx->pc = 0x1A47E4u;
label_1a47e4:
    // 0x1a47e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a47e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a47e8:
    // 0x1a47e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a47e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a47ec:
    // 0x1a47ec: 0xc063e08  jal         func_18F820
label_1a47f0:
    if (ctx->pc == 0x1A47F0u) {
        ctx->pc = 0x1A47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47ECu;
        // 0x1a47f0: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47F4u;
        goto label_1a47f4;
    }
    ctx->pc = 0x1A47ECu;
    SET_GPR_U32(ctx, 31, 0x1A47F4u);
    ctx->pc = 0x1A47F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47ECu;
    // 0x1a47f0: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A47ECu, 0x1A47F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47F4u;
label_1a47f4:
    // 0x1a47f4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1a47f8:
    if (ctx->pc == 0x1A47F8u) {
        ctx->pc = 0x1A47FCu;
        goto label_1a47fc;
    }
    ctx->pc = 0x1A47F4u;
    {
        const bool branch_taken_0x1a47f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47f4) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A47FCu;
label_1a47fc:
    // 0x1a47fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a47fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4800:
    // 0x1a4800: 0xc063e08  jal         func_18F820
label_1a4804:
    if (ctx->pc == 0x1A4804u) {
        ctx->pc = 0x1A4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4800u;
        // 0x1a4804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4808u;
        goto label_1a4808;
    }
    ctx->pc = 0x1A4800u;
    SET_GPR_U32(ctx, 31, 0x1A4808u);
    ctx->pc = 0x1A4804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4800u;
    // 0x1a4804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A4800u, 0x1A4808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4808u;
label_1a4808:
    // 0x1a4808: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1a4808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a480c:
    // 0x1a480c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1a480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1a4810:
    // 0x1a4810: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4814:
    // 0x1a4814: 0x0  nop
    ctx->pc = 0x1a4814u;
    // NOP
label_1a4818:
    // 0x1a4818: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a481c:
    // 0x1a481c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a481cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a4820:
    // 0x1a4820: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a4820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1a4824:
    // 0x1a4824: 0x0  nop
    ctx->pc = 0x1a4824u;
    // NOP
label_1a4828:
    // 0x1a4828: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_1a482c:
    if (ctx->pc == 0x1A482Cu) {
        ctx->pc = 0x1A482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4828u;
        // 0x1a482c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4830u;
        goto label_1a4830;
    }
    ctx->pc = 0x1A4828u;
    {
        const bool branch_taken_0x1a4828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4828u;
        // 0x1a482c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4828) {
            ctx->pc = 0x1A4838u;
            goto label_1a4838;
        }
    }
    ctx->pc = 0x1A4830u;
label_1a4830:
    // 0x1a4830: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a4830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a4834:
    // 0x1a4834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4838:
    // 0x1a4838: 0xc063de0  jal         func_18F780
label_1a483c:
    if (ctx->pc == 0x1A483Cu) {
        ctx->pc = 0x1A483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4838u;
        // 0x1a483c: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4840u;
        goto label_1a4840;
    }
    ctx->pc = 0x1A4838u;
    SET_GPR_U32(ctx, 31, 0x1A4840u);
    ctx->pc = 0x1A483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4838u;
    // 0x1a483c: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x1A4838u, 0x1A4840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4840u;
label_1a4840:
    // 0x1a4840: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a4844:
    if (ctx->pc == 0x1A4844u) {
        ctx->pc = 0x1A4848u;
        goto label_1a4848;
    }
    ctx->pc = 0x1A4840u;
    {
        const bool branch_taken_0x1a4840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4840) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A4848u;
label_1a4848:
    // 0x1a4848: 0x12200064  beqz        $s1, . + 4 + (0x64 << 2)
label_1a484c:
    if (ctx->pc == 0x1A484Cu) {
        ctx->pc = 0x1A4850u;
        goto label_1a4850;
    }
    ctx->pc = 0x1A4848u;
    {
        const bool branch_taken_0x1a4848 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4848) {
            ctx->pc = 0x1A49DCu;
            goto label_1a49dc;
        }
    }
    ctx->pc = 0x1A4850u;
label_1a4850:
    // 0x1a4850: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x1a4850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_1a4854:
    // 0x1a4854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4858:
    // 0x1a4858: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a4858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a485c:
    // 0x1a485c: 0x320f809  jalr        $t9
label_1a4860:
    if (ctx->pc == 0x1A4860u) {
        ctx->pc = 0x1A4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A485Cu;
        // 0x1a4860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4864u;
        goto label_1a4864;
    }
    ctx->pc = 0x1A485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4864u);
        ctx->pc = 0x1A4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A485Cu;
        // 0x1a4860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A485Cu, 0x1A4864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4864u;
label_1a4864:
    // 0x1a4864: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1a4868:
    if (ctx->pc == 0x1A4868u) {
        ctx->pc = 0x1A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4864u;
        // 0x1a4868: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A486Cu;
        goto label_1a486c;
    }
    ctx->pc = 0x1A4864u;
    {
        const bool branch_taken_0x1a4864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4864u;
        // 0x1a4868: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4864) {
            ctx->pc = 0x1A49E0u;
            goto label_1a49e0;
        }
    }
    ctx->pc = 0x1A486Cu;
label_1a486c:
    // 0x1a486c: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a4870:
    // 0x1a4870: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
label_1a4874:
    if (ctx->pc == 0x1A4874u) {
        ctx->pc = 0x1A4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4870u;
        // 0x1a4874: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4878u;
        goto label_1a4878;
    }
    ctx->pc = 0x1A4870u;
    {
        const bool branch_taken_0x1a4870 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4870u;
        // 0x1a4874: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4870) {
            ctx->pc = 0x1A491Cu;
            goto label_1a491c;
        }
    }
    ctx->pc = 0x1A4878u;
label_1a4878:
    // 0x1a4878: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a4878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a487c:
    // 0x1a487c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a487cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a4880:
    // 0x1a4880: 0xae230670  sw          $v1, 0x670($s1)
    ctx->pc = 0x1a4880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 3));
label_1a4884:
    // 0x1a4884: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a4884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a4888:
    // 0x1a4888: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a4888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a488c:
    // 0x1a488c: 0x8e23067c  lw          $v1, 0x67C($s1)
    ctx->pc = 0x1a488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_1a4890:
    // 0x1a4890: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x1a4890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_1a4894:
    // 0x1a4894: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4898:
    // 0x1a4898: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a4898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a489c:
    // 0x1a489c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a489cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a48a0:
    // 0x1a48a0: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1a48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1a48a4:
    // 0x1a48a4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a48a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a48a8:
    // 0x1a48a8: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1a48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_1a48ac:
    // 0x1a48ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a48acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a48b0:
    // 0x1a48b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a48b4:
    // 0x1a48b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a48b8:
    // 0x1a48b8: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1a48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a48bc:
    // 0x1a48bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a48bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a48c0:
    // 0x1a48c0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a48c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a48c4:
    // 0x1a48c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a48c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a48c8:
    // 0x1a48c8: 0x0  nop
    ctx->pc = 0x1a48c8u;
    // NOP
label_1a48cc:
    // 0x1a48cc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1a48ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a48d0:
    // 0x1a48d0: 0x0  nop
    ctx->pc = 0x1a48d0u;
    // NOP
label_1a48d4:
    // 0x1a48d4: 0x0  nop
    ctx->pc = 0x1a48d4u;
    // NOP
label_1a48d8:
    // 0x1a48d8: 0x3012  mflo        $a2
    ctx->pc = 0x1a48d8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_1a48dc:
    // 0x1a48dc: 0xc04bf38  jal         func_12FCE0
label_1a48e0:
    if (ctx->pc == 0x1A48E0u) {
        ctx->pc = 0x1A48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48DCu;
        // 0x1a48e0: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48E4u;
        goto label_1a48e4;
    }
    ctx->pc = 0x1A48DCu;
    SET_GPR_U32(ctx, 31, 0x1A48E4u);
    ctx->pc = 0x1A48E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48DCu;
    // 0x1a48e0: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x1A48DCu, 0x1A48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48E4u;
label_1a48e4:
    // 0x1a48e4: 0x8e240684  lw          $a0, 0x684($s1)
    ctx->pc = 0x1a48e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a48e8:
    // 0x1a48e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1a48ec:
    // 0x1a48ec: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x1a48ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_1a48f0:
    // 0x1a48f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a48f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a48f4:
    // 0x1a48f4: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1a48f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1a48f8:
    // 0x1a48f8: 0x320f809  jalr        $t9
label_1a48fc:
    if (ctx->pc == 0x1A48FCu) {
        ctx->pc = 0x1A48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48F8u;
        // 0x1a48fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4900u;
        goto label_1a4900;
    }
    ctx->pc = 0x1A48F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4900u);
        ctx->pc = 0x1A48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48F8u;
        // 0x1a48fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48F8u, 0x1A4900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4900u;
label_1a4900:
    // 0x1a4900: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a4900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a4904:
    // 0x1a4904: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a4908:
    if (ctx->pc == 0x1A4908u) {
        ctx->pc = 0x1A490Cu;
        goto label_1a490c;
    }
    ctx->pc = 0x1A4904u;
    {
        const bool branch_taken_0x1a4904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4904) {
            ctx->pc = 0x1A4918u;
            goto label_1a4918;
        }
    }
    ctx->pc = 0x1A490Cu;
label_1a490c:
    // 0x1a490c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4910:
    // 0x1a4910: 0xc0692d8  jal         func_1A4B60
label_1a4914:
    if (ctx->pc == 0x1A4914u) {
        ctx->pc = 0x1A4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4910u;
        // 0x1a4914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4918u;
        goto label_1a4918;
    }
    ctx->pc = 0x1A4910u;
    SET_GPR_U32(ctx, 31, 0x1A4918u);
    ctx->pc = 0x1A4914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4910u;
    // 0x1a4914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A4910u, 0x1A4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4918u;
label_1a4918:
    // 0x1a4918: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a4918u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a491c:
    // 0x1a491c: 0x10000026  b           . + 4 + (0x26 << 2)
label_1a4920:
    if (ctx->pc == 0x1A4920u) {
        ctx->pc = 0x1A4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A491Cu;
        // 0x1a4920: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4924u;
        goto label_1a4924;
    }
    ctx->pc = 0x1A491Cu;
    {
        const bool branch_taken_0x1a491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A491Cu;
        // 0x1a4920: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a491c) {
            ctx->pc = 0x1A49B8u;
            goto label_1a49b8;
        }
    }
    ctx->pc = 0x1A4924u;
label_1a4924:
    // 0x1a4924: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x1a4924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1a4928:
    // 0x1a4928: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a492c:
    // 0x1a492c: 0x8c830450  lw          $v1, 0x450($a0)
    ctx->pc = 0x1a492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_1a4930:
    // 0x1a4930: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a4930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a4934:
    // 0x1a4934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4938:
    // 0x1a4938: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a4938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a493c:
    // 0x1a493c: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x1a493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_1a4940:
    // 0x1a4940: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a4944:
    if (ctx->pc == 0x1A4944u) {
        ctx->pc = 0x1A4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4940u;
        // 0x1a4944: 0x24920450  addiu       $s2, $a0, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4948u;
        goto label_1a4948;
    }
    ctx->pc = 0x1A4940u;
    {
        const bool branch_taken_0x1a4940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4940u;
        // 0x1a4944: 0x24920450  addiu       $s2, $a0, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4940) {
            ctx->pc = 0x1A4954u;
            goto label_1a4954;
        }
    }
    ctx->pc = 0x1A4948u;
label_1a4948:
    // 0x1a4948: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a4948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a494c:
    // 0x1a494c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1a4950:
    if (ctx->pc == 0x1A4950u) {
        ctx->pc = 0x1A4954u;
        goto label_1a4954;
    }
    ctx->pc = 0x1A494Cu;
    {
        const bool branch_taken_0x1a494c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a494c) {
            ctx->pc = 0x1A49B0u;
            goto label_1a49b0;
        }
    }
    ctx->pc = 0x1A4954u;
label_1a4954:
    // 0x1a4954: 0x0  nop
    ctx->pc = 0x1a4954u;
    // NOP
label_1a4958:
    // 0x1a4958: 0x8c8204d0  lw          $v0, 0x4D0($a0)
    ctx->pc = 0x1a4958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1232)));
label_1a495c:
    // 0x1a495c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1a4960:
    if (ctx->pc == 0x1A4960u) {
        ctx->pc = 0x1A4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A495Cu;
        // 0x1a4960: 0x249404d0  addiu       $s4, $a0, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4964u;
        goto label_1a4964;
    }
    ctx->pc = 0x1A495Cu;
    {
        const bool branch_taken_0x1a495c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A495Cu;
        // 0x1a4960: 0x249404d0  addiu       $s4, $a0, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a495c) {
            ctx->pc = 0x1A49B0u;
            goto label_1a49b0;
        }
    }
    ctx->pc = 0x1A4964u;
label_1a4964:
    // 0x1a4964: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_1a4968:
    if (ctx->pc == 0x1A4968u) {
        ctx->pc = 0x1A496Cu;
        goto label_1a496c;
    }
    ctx->pc = 0x1A4964u;
    {
        const bool branch_taken_0x1a4964 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4964) {
            ctx->pc = 0x1A497Cu;
            goto label_1a497c;
        }
    }
    ctx->pc = 0x1A496Cu;
label_1a496c:
    // 0x1a496c: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a4970:
    // 0x1a4970: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a4970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a4974:
    // 0x1a4974: 0xc064ee0  jal         func_193B80
label_1a4978:
    if (ctx->pc == 0x1A4978u) {
        ctx->pc = 0x1A4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4974u;
        // 0x1a4978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A497Cu;
        goto label_1a497c;
    }
    ctx->pc = 0x1A4974u;
    SET_GPR_U32(ctx, 31, 0x1A497Cu);
    ctx->pc = 0x1A4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4974u;
    // 0x1a4978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A4974u, 0x1A497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A497Cu;
label_1a497c:
    // 0x1a497c: 0x0  nop
    ctx->pc = 0x1a497cu;
    // NOP
label_1a4980:
    // 0x1a4980: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a4980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1a4984:
    // 0x1a4984: 0xc04ad30  jal         func_12B4C0
label_1a4988:
    if (ctx->pc == 0x1A4988u) {
        ctx->pc = 0x1A4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4984u;
        // 0x1a4988: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A498Cu;
        goto label_1a498c;
    }
    ctx->pc = 0x1A4984u;
    SET_GPR_U32(ctx, 31, 0x1A498Cu);
    ctx->pc = 0x1A4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4984u;
    // 0x1a4988: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B4C0u, 0x1A4984u, 0x1A498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A498Cu;
label_1a498c:
    // 0x1a498c: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a4990:
    // 0x1a4990: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a4994:
    if (ctx->pc == 0x1A4994u) {
        ctx->pc = 0x1A4998u;
        goto label_1a4998;
    }
    ctx->pc = 0x1A4990u;
    {
        const bool branch_taken_0x1a4990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4990) {
            ctx->pc = 0x1A49A8u;
            goto label_1a49a8;
        }
    }
    ctx->pc = 0x1A4998u;
label_1a4998:
    // 0x1a4998: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1a4998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a499c:
    // 0x1a499c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a49a0:
    // 0x1a49a0: 0xc064c20  jal         func_193080
label_1a49a4:
    if (ctx->pc == 0x1A49A4u) {
        ctx->pc = 0x1A49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49A0u;
        // 0x1a49a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49A8u;
        goto label_1a49a8;
    }
    ctx->pc = 0x1A49A0u;
    SET_GPR_U32(ctx, 31, 0x1A49A8u);
    ctx->pc = 0x1A49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A49A0u;
    // 0x1a49a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x1A49A0u, 0x1A49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A49A8u;
label_1a49a8:
    // 0x1a49a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a49ac:
    // 0x1a49ac: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1a49acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1a49b0:
    // 0x1a49b0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a49b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a49b4:
    // 0x1a49b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a49b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1a49b8:
    // 0x1a49b8: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1a49b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_1a49bc:
    // 0x1a49bc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1a49bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a49c0:
    // 0x1a49c0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1a49c4:
    if (ctx->pc == 0x1A49C4u) {
        ctx->pc = 0x1A49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49C0u;
        // 0x1a49c4: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49C8u;
        goto label_1a49c8;
    }
    ctx->pc = 0x1A49C0u;
    {
        const bool branch_taken_0x1a49c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49C0u;
        // 0x1a49c4: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49c0) {
            ctx->pc = 0x1A4928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4928;
        }
    }
    ctx->pc = 0x1A49C8u;
label_1a49c8:
    // 0x1a49c8: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a49c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1a49cc:
    // 0x1a49cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a49ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a49d0:
    // 0x1a49d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a49d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a49d4:
    // 0x1a49d4: 0x320f809  jalr        $t9
label_1a49d8:
    if (ctx->pc == 0x1A49D8u) {
        ctx->pc = 0x1A49DCu;
        goto label_1a49dc;
    }
    ctx->pc = 0x1A49D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A49DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49D4u, 0x1A49DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A49DCu;
label_1a49dc:
    // 0x1a49dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a49dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a49e0:
    // 0x1a49e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a49e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a49e4:
    // 0x1a49e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a49e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a49e8:
    // 0x1a49e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a49e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a49ec:
    // 0x1a49ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a49ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a49f0:
    // 0x1a49f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a49f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a49f4:
    // 0x1a49f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a49f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a49f8:
    // 0x1a49f8: 0x3e00008  jr          $ra
label_1a49fc:
    if (ctx->pc == 0x1A49FCu) {
        ctx->pc = 0x1A49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49F8u;
        // 0x1a49fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A00u;
        goto label_fallthrough_0x1a49f8;
    }
    ctx->pc = 0x1A49F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49F8u;
        // 0x1a49fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a49f8:
    ctx->pc = 0x1A4A00u;
}
