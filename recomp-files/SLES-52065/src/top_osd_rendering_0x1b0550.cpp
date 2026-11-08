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

// Function: top_osd_rendering
// Address: 0x1b0550 - 0x1b121c
void top_osd_rendering_0x1b0550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("top_osd_rendering_0x1b0550");
#endif

    switch (ctx->pc) {
        case 0x1b0550u: goto label_1b0550;
        case 0x1b0554u: goto label_1b0554;
        case 0x1b0558u: goto label_1b0558;
        case 0x1b055cu: goto label_1b055c;
        case 0x1b0560u: goto label_1b0560;
        case 0x1b0564u: goto label_1b0564;
        case 0x1b0568u: goto label_1b0568;
        case 0x1b056cu: goto label_1b056c;
        case 0x1b0570u: goto label_1b0570;
        case 0x1b0574u: goto label_1b0574;
        case 0x1b0578u: goto label_1b0578;
        case 0x1b057cu: goto label_1b057c;
        case 0x1b0580u: goto label_1b0580;
        case 0x1b0584u: goto label_1b0584;
        case 0x1b0588u: goto label_1b0588;
        case 0x1b058cu: goto label_1b058c;
        case 0x1b0590u: goto label_1b0590;
        case 0x1b0594u: goto label_1b0594;
        case 0x1b0598u: goto label_1b0598;
        case 0x1b059cu: goto label_1b059c;
        case 0x1b05a0u: goto label_1b05a0;
        case 0x1b05a4u: goto label_1b05a4;
        case 0x1b05a8u: goto label_1b05a8;
        case 0x1b05acu: goto label_1b05ac;
        case 0x1b05b0u: goto label_1b05b0;
        case 0x1b05b4u: goto label_1b05b4;
        case 0x1b05b8u: goto label_1b05b8;
        case 0x1b05bcu: goto label_1b05bc;
        case 0x1b05c0u: goto label_1b05c0;
        case 0x1b05c4u: goto label_1b05c4;
        case 0x1b05c8u: goto label_1b05c8;
        case 0x1b05ccu: goto label_1b05cc;
        case 0x1b05d0u: goto label_1b05d0;
        case 0x1b05d4u: goto label_1b05d4;
        case 0x1b05d8u: goto label_1b05d8;
        case 0x1b05dcu: goto label_1b05dc;
        case 0x1b05e0u: goto label_1b05e0;
        case 0x1b05e4u: goto label_1b05e4;
        case 0x1b05e8u: goto label_1b05e8;
        case 0x1b05ecu: goto label_1b05ec;
        case 0x1b05f0u: goto label_1b05f0;
        case 0x1b05f4u: goto label_1b05f4;
        case 0x1b05f8u: goto label_1b05f8;
        case 0x1b05fcu: goto label_1b05fc;
        case 0x1b0600u: goto label_1b0600;
        case 0x1b0604u: goto label_1b0604;
        case 0x1b0608u: goto label_1b0608;
        case 0x1b060cu: goto label_1b060c;
        case 0x1b0610u: goto label_1b0610;
        case 0x1b0614u: goto label_1b0614;
        case 0x1b0618u: goto label_1b0618;
        case 0x1b061cu: goto label_1b061c;
        case 0x1b0620u: goto label_1b0620;
        case 0x1b0624u: goto label_1b0624;
        case 0x1b0628u: goto label_1b0628;
        case 0x1b062cu: goto label_1b062c;
        case 0x1b0630u: goto label_1b0630;
        case 0x1b0634u: goto label_1b0634;
        case 0x1b0638u: goto label_1b0638;
        case 0x1b063cu: goto label_1b063c;
        case 0x1b0640u: goto label_1b0640;
        case 0x1b0644u: goto label_1b0644;
        case 0x1b0648u: goto label_1b0648;
        case 0x1b064cu: goto label_1b064c;
        case 0x1b0650u: goto label_1b0650;
        case 0x1b0654u: goto label_1b0654;
        case 0x1b0658u: goto label_1b0658;
        case 0x1b065cu: goto label_1b065c;
        case 0x1b0660u: goto label_1b0660;
        case 0x1b0664u: goto label_1b0664;
        case 0x1b0668u: goto label_1b0668;
        case 0x1b066cu: goto label_1b066c;
        case 0x1b0670u: goto label_1b0670;
        case 0x1b0674u: goto label_1b0674;
        case 0x1b0678u: goto label_1b0678;
        case 0x1b067cu: goto label_1b067c;
        case 0x1b0680u: goto label_1b0680;
        case 0x1b0684u: goto label_1b0684;
        case 0x1b0688u: goto label_1b0688;
        case 0x1b068cu: goto label_1b068c;
        case 0x1b0690u: goto label_1b0690;
        case 0x1b0694u: goto label_1b0694;
        case 0x1b0698u: goto label_1b0698;
        case 0x1b069cu: goto label_1b069c;
        case 0x1b06a0u: goto label_1b06a0;
        case 0x1b06a4u: goto label_1b06a4;
        case 0x1b06a8u: goto label_1b06a8;
        case 0x1b06acu: goto label_1b06ac;
        case 0x1b06b0u: goto label_1b06b0;
        case 0x1b06b4u: goto label_1b06b4;
        case 0x1b06b8u: goto label_1b06b8;
        case 0x1b06bcu: goto label_1b06bc;
        case 0x1b06c0u: goto label_1b06c0;
        case 0x1b06c4u: goto label_1b06c4;
        case 0x1b06c8u: goto label_1b06c8;
        case 0x1b06ccu: goto label_1b06cc;
        case 0x1b06d0u: goto label_1b06d0;
        case 0x1b06d4u: goto label_1b06d4;
        case 0x1b06d8u: goto label_1b06d8;
        case 0x1b06dcu: goto label_1b06dc;
        case 0x1b06e0u: goto label_1b06e0;
        case 0x1b06e4u: goto label_1b06e4;
        case 0x1b06e8u: goto label_1b06e8;
        case 0x1b06ecu: goto label_1b06ec;
        case 0x1b06f0u: goto label_1b06f0;
        case 0x1b06f4u: goto label_1b06f4;
        case 0x1b06f8u: goto label_1b06f8;
        case 0x1b06fcu: goto label_1b06fc;
        case 0x1b0700u: goto label_1b0700;
        case 0x1b0704u: goto label_1b0704;
        case 0x1b0708u: goto label_1b0708;
        case 0x1b070cu: goto label_1b070c;
        case 0x1b0710u: goto label_1b0710;
        case 0x1b0714u: goto label_1b0714;
        case 0x1b0718u: goto label_1b0718;
        case 0x1b071cu: goto label_1b071c;
        case 0x1b0720u: goto label_1b0720;
        case 0x1b0724u: goto label_1b0724;
        case 0x1b0728u: goto label_1b0728;
        case 0x1b072cu: goto label_1b072c;
        case 0x1b0730u: goto label_1b0730;
        case 0x1b0734u: goto label_1b0734;
        case 0x1b0738u: goto label_1b0738;
        case 0x1b073cu: goto label_1b073c;
        case 0x1b0740u: goto label_1b0740;
        case 0x1b0744u: goto label_1b0744;
        case 0x1b0748u: goto label_1b0748;
        case 0x1b074cu: goto label_1b074c;
        case 0x1b0750u: goto label_1b0750;
        case 0x1b0754u: goto label_1b0754;
        case 0x1b0758u: goto label_1b0758;
        case 0x1b075cu: goto label_1b075c;
        case 0x1b0760u: goto label_1b0760;
        case 0x1b0764u: goto label_1b0764;
        case 0x1b0768u: goto label_1b0768;
        case 0x1b076cu: goto label_1b076c;
        case 0x1b0770u: goto label_1b0770;
        case 0x1b0774u: goto label_1b0774;
        case 0x1b0778u: goto label_1b0778;
        case 0x1b077cu: goto label_1b077c;
        case 0x1b0780u: goto label_1b0780;
        case 0x1b0784u: goto label_1b0784;
        case 0x1b0788u: goto label_1b0788;
        case 0x1b078cu: goto label_1b078c;
        case 0x1b0790u: goto label_1b0790;
        case 0x1b0794u: goto label_1b0794;
        case 0x1b0798u: goto label_1b0798;
        case 0x1b079cu: goto label_1b079c;
        case 0x1b07a0u: goto label_1b07a0;
        case 0x1b07a4u: goto label_1b07a4;
        case 0x1b07a8u: goto label_1b07a8;
        case 0x1b07acu: goto label_1b07ac;
        case 0x1b07b0u: goto label_1b07b0;
        case 0x1b07b4u: goto label_1b07b4;
        case 0x1b07b8u: goto label_1b07b8;
        case 0x1b07bcu: goto label_1b07bc;
        case 0x1b07c0u: goto label_1b07c0;
        case 0x1b07c4u: goto label_1b07c4;
        case 0x1b07c8u: goto label_1b07c8;
        case 0x1b07ccu: goto label_1b07cc;
        case 0x1b07d0u: goto label_1b07d0;
        case 0x1b07d4u: goto label_1b07d4;
        case 0x1b07d8u: goto label_1b07d8;
        case 0x1b07dcu: goto label_1b07dc;
        case 0x1b07e0u: goto label_1b07e0;
        case 0x1b07e4u: goto label_1b07e4;
        case 0x1b07e8u: goto label_1b07e8;
        case 0x1b07ecu: goto label_1b07ec;
        case 0x1b07f0u: goto label_1b07f0;
        case 0x1b07f4u: goto label_1b07f4;
        case 0x1b07f8u: goto label_1b07f8;
        case 0x1b07fcu: goto label_1b07fc;
        case 0x1b0800u: goto label_1b0800;
        case 0x1b0804u: goto label_1b0804;
        case 0x1b0808u: goto label_1b0808;
        case 0x1b080cu: goto label_1b080c;
        case 0x1b0810u: goto label_1b0810;
        case 0x1b0814u: goto label_1b0814;
        case 0x1b0818u: goto label_1b0818;
        case 0x1b081cu: goto label_1b081c;
        case 0x1b0820u: goto label_1b0820;
        case 0x1b0824u: goto label_1b0824;
        case 0x1b0828u: goto label_1b0828;
        case 0x1b082cu: goto label_1b082c;
        case 0x1b0830u: goto label_1b0830;
        case 0x1b0834u: goto label_1b0834;
        case 0x1b0838u: goto label_1b0838;
        case 0x1b083cu: goto label_1b083c;
        case 0x1b0840u: goto label_1b0840;
        case 0x1b0844u: goto label_1b0844;
        case 0x1b0848u: goto label_1b0848;
        case 0x1b084cu: goto label_1b084c;
        case 0x1b0850u: goto label_1b0850;
        case 0x1b0854u: goto label_1b0854;
        case 0x1b0858u: goto label_1b0858;
        case 0x1b085cu: goto label_1b085c;
        case 0x1b0860u: goto label_1b0860;
        case 0x1b0864u: goto label_1b0864;
        case 0x1b0868u: goto label_1b0868;
        case 0x1b086cu: goto label_1b086c;
        case 0x1b0870u: goto label_1b0870;
        case 0x1b0874u: goto label_1b0874;
        case 0x1b0878u: goto label_1b0878;
        case 0x1b087cu: goto label_1b087c;
        case 0x1b0880u: goto label_1b0880;
        case 0x1b0884u: goto label_1b0884;
        case 0x1b0888u: goto label_1b0888;
        case 0x1b088cu: goto label_1b088c;
        case 0x1b0890u: goto label_1b0890;
        case 0x1b0894u: goto label_1b0894;
        case 0x1b0898u: goto label_1b0898;
        case 0x1b089cu: goto label_1b089c;
        case 0x1b08a0u: goto label_1b08a0;
        case 0x1b08a4u: goto label_1b08a4;
        case 0x1b08a8u: goto label_1b08a8;
        case 0x1b08acu: goto label_1b08ac;
        case 0x1b08b0u: goto label_1b08b0;
        case 0x1b08b4u: goto label_1b08b4;
        case 0x1b08b8u: goto label_1b08b8;
        case 0x1b08bcu: goto label_1b08bc;
        case 0x1b08c0u: goto label_1b08c0;
        case 0x1b08c4u: goto label_1b08c4;
        case 0x1b08c8u: goto label_1b08c8;
        case 0x1b08ccu: goto label_1b08cc;
        case 0x1b08d0u: goto label_1b08d0;
        case 0x1b08d4u: goto label_1b08d4;
        case 0x1b08d8u: goto label_1b08d8;
        case 0x1b08dcu: goto label_1b08dc;
        case 0x1b08e0u: goto label_1b08e0;
        case 0x1b08e4u: goto label_1b08e4;
        case 0x1b08e8u: goto label_1b08e8;
        case 0x1b08ecu: goto label_1b08ec;
        case 0x1b08f0u: goto label_1b08f0;
        case 0x1b08f4u: goto label_1b08f4;
        case 0x1b08f8u: goto label_1b08f8;
        case 0x1b08fcu: goto label_1b08fc;
        case 0x1b0900u: goto label_1b0900;
        case 0x1b0904u: goto label_1b0904;
        case 0x1b0908u: goto label_1b0908;
        case 0x1b090cu: goto label_1b090c;
        case 0x1b0910u: goto label_1b0910;
        case 0x1b0914u: goto label_1b0914;
        case 0x1b0918u: goto label_1b0918;
        case 0x1b091cu: goto label_1b091c;
        case 0x1b0920u: goto label_1b0920;
        case 0x1b0924u: goto label_1b0924;
        case 0x1b0928u: goto label_1b0928;
        case 0x1b092cu: goto label_1b092c;
        case 0x1b0930u: goto label_1b0930;
        case 0x1b0934u: goto label_1b0934;
        case 0x1b0938u: goto label_1b0938;
        case 0x1b093cu: goto label_1b093c;
        case 0x1b0940u: goto label_1b0940;
        case 0x1b0944u: goto label_1b0944;
        case 0x1b0948u: goto label_1b0948;
        case 0x1b094cu: goto label_1b094c;
        case 0x1b0950u: goto label_1b0950;
        case 0x1b0954u: goto label_1b0954;
        case 0x1b0958u: goto label_1b0958;
        case 0x1b095cu: goto label_1b095c;
        case 0x1b0960u: goto label_1b0960;
        case 0x1b0964u: goto label_1b0964;
        case 0x1b0968u: goto label_1b0968;
        case 0x1b096cu: goto label_1b096c;
        case 0x1b0970u: goto label_1b0970;
        case 0x1b0974u: goto label_1b0974;
        case 0x1b0978u: goto label_1b0978;
        case 0x1b097cu: goto label_1b097c;
        case 0x1b0980u: goto label_1b0980;
        case 0x1b0984u: goto label_1b0984;
        case 0x1b0988u: goto label_1b0988;
        case 0x1b098cu: goto label_1b098c;
        case 0x1b0990u: goto label_1b0990;
        case 0x1b0994u: goto label_1b0994;
        case 0x1b0998u: goto label_1b0998;
        case 0x1b099cu: goto label_1b099c;
        case 0x1b09a0u: goto label_1b09a0;
        case 0x1b09a4u: goto label_1b09a4;
        case 0x1b09a8u: goto label_1b09a8;
        case 0x1b09acu: goto label_1b09ac;
        case 0x1b09b0u: goto label_1b09b0;
        case 0x1b09b4u: goto label_1b09b4;
        case 0x1b09b8u: goto label_1b09b8;
        case 0x1b09bcu: goto label_1b09bc;
        case 0x1b09c0u: goto label_1b09c0;
        case 0x1b09c4u: goto label_1b09c4;
        case 0x1b09c8u: goto label_1b09c8;
        case 0x1b09ccu: goto label_1b09cc;
        case 0x1b09d0u: goto label_1b09d0;
        case 0x1b09d4u: goto label_1b09d4;
        case 0x1b09d8u: goto label_1b09d8;
        case 0x1b09dcu: goto label_1b09dc;
        case 0x1b09e0u: goto label_1b09e0;
        case 0x1b09e4u: goto label_1b09e4;
        case 0x1b09e8u: goto label_1b09e8;
        case 0x1b09ecu: goto label_1b09ec;
        case 0x1b09f0u: goto label_1b09f0;
        case 0x1b09f4u: goto label_1b09f4;
        case 0x1b09f8u: goto label_1b09f8;
        case 0x1b09fcu: goto label_1b09fc;
        case 0x1b0a00u: goto label_1b0a00;
        case 0x1b0a04u: goto label_1b0a04;
        case 0x1b0a08u: goto label_1b0a08;
        case 0x1b0a0cu: goto label_1b0a0c;
        case 0x1b0a10u: goto label_1b0a10;
        case 0x1b0a14u: goto label_1b0a14;
        case 0x1b0a18u: goto label_1b0a18;
        case 0x1b0a1cu: goto label_1b0a1c;
        case 0x1b0a20u: goto label_1b0a20;
        case 0x1b0a24u: goto label_1b0a24;
        case 0x1b0a28u: goto label_1b0a28;
        case 0x1b0a2cu: goto label_1b0a2c;
        case 0x1b0a30u: goto label_1b0a30;
        case 0x1b0a34u: goto label_1b0a34;
        case 0x1b0a38u: goto label_1b0a38;
        case 0x1b0a3cu: goto label_1b0a3c;
        case 0x1b0a40u: goto label_1b0a40;
        case 0x1b0a44u: goto label_1b0a44;
        case 0x1b0a48u: goto label_1b0a48;
        case 0x1b0a4cu: goto label_1b0a4c;
        case 0x1b0a50u: goto label_1b0a50;
        case 0x1b0a54u: goto label_1b0a54;
        case 0x1b0a58u: goto label_1b0a58;
        case 0x1b0a5cu: goto label_1b0a5c;
        case 0x1b0a60u: goto label_1b0a60;
        case 0x1b0a64u: goto label_1b0a64;
        case 0x1b0a68u: goto label_1b0a68;
        case 0x1b0a6cu: goto label_1b0a6c;
        case 0x1b0a70u: goto label_1b0a70;
        case 0x1b0a74u: goto label_1b0a74;
        case 0x1b0a78u: goto label_1b0a78;
        case 0x1b0a7cu: goto label_1b0a7c;
        case 0x1b0a80u: goto label_1b0a80;
        case 0x1b0a84u: goto label_1b0a84;
        case 0x1b0a88u: goto label_1b0a88;
        case 0x1b0a8cu: goto label_1b0a8c;
        case 0x1b0a90u: goto label_1b0a90;
        case 0x1b0a94u: goto label_1b0a94;
        case 0x1b0a98u: goto label_1b0a98;
        case 0x1b0a9cu: goto label_1b0a9c;
        case 0x1b0aa0u: goto label_1b0aa0;
        case 0x1b0aa4u: goto label_1b0aa4;
        case 0x1b0aa8u: goto label_1b0aa8;
        case 0x1b0aacu: goto label_1b0aac;
        case 0x1b0ab0u: goto label_1b0ab0;
        case 0x1b0ab4u: goto label_1b0ab4;
        case 0x1b0ab8u: goto label_1b0ab8;
        case 0x1b0abcu: goto label_1b0abc;
        case 0x1b0ac0u: goto label_1b0ac0;
        case 0x1b0ac4u: goto label_1b0ac4;
        case 0x1b0ac8u: goto label_1b0ac8;
        case 0x1b0accu: goto label_1b0acc;
        case 0x1b0ad0u: goto label_1b0ad0;
        case 0x1b0ad4u: goto label_1b0ad4;
        case 0x1b0ad8u: goto label_1b0ad8;
        case 0x1b0adcu: goto label_1b0adc;
        case 0x1b0ae0u: goto label_1b0ae0;
        case 0x1b0ae4u: goto label_1b0ae4;
        case 0x1b0ae8u: goto label_1b0ae8;
        case 0x1b0aecu: goto label_1b0aec;
        case 0x1b0af0u: goto label_1b0af0;
        case 0x1b0af4u: goto label_1b0af4;
        case 0x1b0af8u: goto label_1b0af8;
        case 0x1b0afcu: goto label_1b0afc;
        case 0x1b0b00u: goto label_1b0b00;
        case 0x1b0b04u: goto label_1b0b04;
        case 0x1b0b08u: goto label_1b0b08;
        case 0x1b0b0cu: goto label_1b0b0c;
        case 0x1b0b10u: goto label_1b0b10;
        case 0x1b0b14u: goto label_1b0b14;
        case 0x1b0b18u: goto label_1b0b18;
        case 0x1b0b1cu: goto label_1b0b1c;
        case 0x1b0b20u: goto label_1b0b20;
        case 0x1b0b24u: goto label_1b0b24;
        case 0x1b0b28u: goto label_1b0b28;
        case 0x1b0b2cu: goto label_1b0b2c;
        case 0x1b0b30u: goto label_1b0b30;
        case 0x1b0b34u: goto label_1b0b34;
        case 0x1b0b38u: goto label_1b0b38;
        case 0x1b0b3cu: goto label_1b0b3c;
        case 0x1b0b40u: goto label_1b0b40;
        case 0x1b0b44u: goto label_1b0b44;
        case 0x1b0b48u: goto label_1b0b48;
        case 0x1b0b4cu: goto label_1b0b4c;
        case 0x1b0b50u: goto label_1b0b50;
        case 0x1b0b54u: goto label_1b0b54;
        case 0x1b0b58u: goto label_1b0b58;
        case 0x1b0b5cu: goto label_1b0b5c;
        case 0x1b0b60u: goto label_1b0b60;
        case 0x1b0b64u: goto label_1b0b64;
        case 0x1b0b68u: goto label_1b0b68;
        case 0x1b0b6cu: goto label_1b0b6c;
        case 0x1b0b70u: goto label_1b0b70;
        case 0x1b0b74u: goto label_1b0b74;
        case 0x1b0b78u: goto label_1b0b78;
        case 0x1b0b7cu: goto label_1b0b7c;
        case 0x1b0b80u: goto label_1b0b80;
        case 0x1b0b84u: goto label_1b0b84;
        case 0x1b0b88u: goto label_1b0b88;
        case 0x1b0b8cu: goto label_1b0b8c;
        case 0x1b0b90u: goto label_1b0b90;
        case 0x1b0b94u: goto label_1b0b94;
        case 0x1b0b98u: goto label_1b0b98;
        case 0x1b0b9cu: goto label_1b0b9c;
        case 0x1b0ba0u: goto label_1b0ba0;
        case 0x1b0ba4u: goto label_1b0ba4;
        case 0x1b0ba8u: goto label_1b0ba8;
        case 0x1b0bacu: goto label_1b0bac;
        case 0x1b0bb0u: goto label_1b0bb0;
        case 0x1b0bb4u: goto label_1b0bb4;
        case 0x1b0bb8u: goto label_1b0bb8;
        case 0x1b0bbcu: goto label_1b0bbc;
        case 0x1b0bc0u: goto label_1b0bc0;
        case 0x1b0bc4u: goto label_1b0bc4;
        case 0x1b0bc8u: goto label_1b0bc8;
        case 0x1b0bccu: goto label_1b0bcc;
        case 0x1b0bd0u: goto label_1b0bd0;
        case 0x1b0bd4u: goto label_1b0bd4;
        case 0x1b0bd8u: goto label_1b0bd8;
        case 0x1b0bdcu: goto label_1b0bdc;
        case 0x1b0be0u: goto label_1b0be0;
        case 0x1b0be4u: goto label_1b0be4;
        case 0x1b0be8u: goto label_1b0be8;
        case 0x1b0becu: goto label_1b0bec;
        case 0x1b0bf0u: goto label_1b0bf0;
        case 0x1b0bf4u: goto label_1b0bf4;
        case 0x1b0bf8u: goto label_1b0bf8;
        case 0x1b0bfcu: goto label_1b0bfc;
        case 0x1b0c00u: goto label_1b0c00;
        case 0x1b0c04u: goto label_1b0c04;
        case 0x1b0c08u: goto label_1b0c08;
        case 0x1b0c0cu: goto label_1b0c0c;
        case 0x1b0c10u: goto label_1b0c10;
        case 0x1b0c14u: goto label_1b0c14;
        case 0x1b0c18u: goto label_1b0c18;
        case 0x1b0c1cu: goto label_1b0c1c;
        case 0x1b0c20u: goto label_1b0c20;
        case 0x1b0c24u: goto label_1b0c24;
        case 0x1b0c28u: goto label_1b0c28;
        case 0x1b0c2cu: goto label_1b0c2c;
        case 0x1b0c30u: goto label_1b0c30;
        case 0x1b0c34u: goto label_1b0c34;
        case 0x1b0c38u: goto label_1b0c38;
        case 0x1b0c3cu: goto label_1b0c3c;
        case 0x1b0c40u: goto label_1b0c40;
        case 0x1b0c44u: goto label_1b0c44;
        case 0x1b0c48u: goto label_1b0c48;
        case 0x1b0c4cu: goto label_1b0c4c;
        case 0x1b0c50u: goto label_1b0c50;
        case 0x1b0c54u: goto label_1b0c54;
        case 0x1b0c58u: goto label_1b0c58;
        case 0x1b0c5cu: goto label_1b0c5c;
        case 0x1b0c60u: goto label_1b0c60;
        case 0x1b0c64u: goto label_1b0c64;
        case 0x1b0c68u: goto label_1b0c68;
        case 0x1b0c6cu: goto label_1b0c6c;
        case 0x1b0c70u: goto label_1b0c70;
        case 0x1b0c74u: goto label_1b0c74;
        case 0x1b0c78u: goto label_1b0c78;
        case 0x1b0c7cu: goto label_1b0c7c;
        case 0x1b0c80u: goto label_1b0c80;
        case 0x1b0c84u: goto label_1b0c84;
        case 0x1b0c88u: goto label_1b0c88;
        case 0x1b0c8cu: goto label_1b0c8c;
        case 0x1b0c90u: goto label_1b0c90;
        case 0x1b0c94u: goto label_1b0c94;
        case 0x1b0c98u: goto label_1b0c98;
        case 0x1b0c9cu: goto label_1b0c9c;
        case 0x1b0ca0u: goto label_1b0ca0;
        case 0x1b0ca4u: goto label_1b0ca4;
        case 0x1b0ca8u: goto label_1b0ca8;
        case 0x1b0cacu: goto label_1b0cac;
        case 0x1b0cb0u: goto label_1b0cb0;
        case 0x1b0cb4u: goto label_1b0cb4;
        case 0x1b0cb8u: goto label_1b0cb8;
        case 0x1b0cbcu: goto label_1b0cbc;
        case 0x1b0cc0u: goto label_1b0cc0;
        case 0x1b0cc4u: goto label_1b0cc4;
        case 0x1b0cc8u: goto label_1b0cc8;
        case 0x1b0cccu: goto label_1b0ccc;
        case 0x1b0cd0u: goto label_1b0cd0;
        case 0x1b0cd4u: goto label_1b0cd4;
        case 0x1b0cd8u: goto label_1b0cd8;
        case 0x1b0cdcu: goto label_1b0cdc;
        case 0x1b0ce0u: goto label_1b0ce0;
        case 0x1b0ce4u: goto label_1b0ce4;
        case 0x1b0ce8u: goto label_1b0ce8;
        case 0x1b0cecu: goto label_1b0cec;
        case 0x1b0cf0u: goto label_1b0cf0;
        case 0x1b0cf4u: goto label_1b0cf4;
        case 0x1b0cf8u: goto label_1b0cf8;
        case 0x1b0cfcu: goto label_1b0cfc;
        case 0x1b0d00u: goto label_1b0d00;
        case 0x1b0d04u: goto label_1b0d04;
        case 0x1b0d08u: goto label_1b0d08;
        case 0x1b0d0cu: goto label_1b0d0c;
        case 0x1b0d10u: goto label_1b0d10;
        case 0x1b0d14u: goto label_1b0d14;
        case 0x1b0d18u: goto label_1b0d18;
        case 0x1b0d1cu: goto label_1b0d1c;
        case 0x1b0d20u: goto label_1b0d20;
        case 0x1b0d24u: goto label_1b0d24;
        case 0x1b0d28u: goto label_1b0d28;
        case 0x1b0d2cu: goto label_1b0d2c;
        case 0x1b0d30u: goto label_1b0d30;
        case 0x1b0d34u: goto label_1b0d34;
        case 0x1b0d38u: goto label_1b0d38;
        case 0x1b0d3cu: goto label_1b0d3c;
        case 0x1b0d40u: goto label_1b0d40;
        case 0x1b0d44u: goto label_1b0d44;
        case 0x1b0d48u: goto label_1b0d48;
        case 0x1b0d4cu: goto label_1b0d4c;
        case 0x1b0d50u: goto label_1b0d50;
        case 0x1b0d54u: goto label_1b0d54;
        case 0x1b0d58u: goto label_1b0d58;
        case 0x1b0d5cu: goto label_1b0d5c;
        case 0x1b0d60u: goto label_1b0d60;
        case 0x1b0d64u: goto label_1b0d64;
        case 0x1b0d68u: goto label_1b0d68;
        case 0x1b0d6cu: goto label_1b0d6c;
        case 0x1b0d70u: goto label_1b0d70;
        case 0x1b0d74u: goto label_1b0d74;
        case 0x1b0d78u: goto label_1b0d78;
        case 0x1b0d7cu: goto label_1b0d7c;
        case 0x1b0d80u: goto label_1b0d80;
        case 0x1b0d84u: goto label_1b0d84;
        case 0x1b0d88u: goto label_1b0d88;
        case 0x1b0d8cu: goto label_1b0d8c;
        case 0x1b0d90u: goto label_1b0d90;
        case 0x1b0d94u: goto label_1b0d94;
        case 0x1b0d98u: goto label_1b0d98;
        case 0x1b0d9cu: goto label_1b0d9c;
        case 0x1b0da0u: goto label_1b0da0;
        case 0x1b0da4u: goto label_1b0da4;
        case 0x1b0da8u: goto label_1b0da8;
        case 0x1b0dacu: goto label_1b0dac;
        case 0x1b0db0u: goto label_1b0db0;
        case 0x1b0db4u: goto label_1b0db4;
        case 0x1b0db8u: goto label_1b0db8;
        case 0x1b0dbcu: goto label_1b0dbc;
        case 0x1b0dc0u: goto label_1b0dc0;
        case 0x1b0dc4u: goto label_1b0dc4;
        case 0x1b0dc8u: goto label_1b0dc8;
        case 0x1b0dccu: goto label_1b0dcc;
        case 0x1b0dd0u: goto label_1b0dd0;
        case 0x1b0dd4u: goto label_1b0dd4;
        case 0x1b0dd8u: goto label_1b0dd8;
        case 0x1b0ddcu: goto label_1b0ddc;
        case 0x1b0de0u: goto label_1b0de0;
        case 0x1b0de4u: goto label_1b0de4;
        case 0x1b0de8u: goto label_1b0de8;
        case 0x1b0decu: goto label_1b0dec;
        case 0x1b0df0u: goto label_1b0df0;
        case 0x1b0df4u: goto label_1b0df4;
        case 0x1b0df8u: goto label_1b0df8;
        case 0x1b0dfcu: goto label_1b0dfc;
        case 0x1b0e00u: goto label_1b0e00;
        case 0x1b0e04u: goto label_1b0e04;
        case 0x1b0e08u: goto label_1b0e08;
        case 0x1b0e0cu: goto label_1b0e0c;
        case 0x1b0e10u: goto label_1b0e10;
        case 0x1b0e14u: goto label_1b0e14;
        case 0x1b0e18u: goto label_1b0e18;
        case 0x1b0e1cu: goto label_1b0e1c;
        case 0x1b0e20u: goto label_1b0e20;
        case 0x1b0e24u: goto label_1b0e24;
        case 0x1b0e28u: goto label_1b0e28;
        case 0x1b0e2cu: goto label_1b0e2c;
        case 0x1b0e30u: goto label_1b0e30;
        case 0x1b0e34u: goto label_1b0e34;
        case 0x1b0e38u: goto label_1b0e38;
        case 0x1b0e3cu: goto label_1b0e3c;
        case 0x1b0e40u: goto label_1b0e40;
        case 0x1b0e44u: goto label_1b0e44;
        case 0x1b0e48u: goto label_1b0e48;
        case 0x1b0e4cu: goto label_1b0e4c;
        case 0x1b0e50u: goto label_1b0e50;
        case 0x1b0e54u: goto label_1b0e54;
        case 0x1b0e58u: goto label_1b0e58;
        case 0x1b0e5cu: goto label_1b0e5c;
        case 0x1b0e60u: goto label_1b0e60;
        case 0x1b0e64u: goto label_1b0e64;
        case 0x1b0e68u: goto label_1b0e68;
        case 0x1b0e6cu: goto label_1b0e6c;
        case 0x1b0e70u: goto label_1b0e70;
        case 0x1b0e74u: goto label_1b0e74;
        case 0x1b0e78u: goto label_1b0e78;
        case 0x1b0e7cu: goto label_1b0e7c;
        case 0x1b0e80u: goto label_1b0e80;
        case 0x1b0e84u: goto label_1b0e84;
        case 0x1b0e88u: goto label_1b0e88;
        case 0x1b0e8cu: goto label_1b0e8c;
        case 0x1b0e90u: goto label_1b0e90;
        case 0x1b0e94u: goto label_1b0e94;
        case 0x1b0e98u: goto label_1b0e98;
        case 0x1b0e9cu: goto label_1b0e9c;
        case 0x1b0ea0u: goto label_1b0ea0;
        case 0x1b0ea4u: goto label_1b0ea4;
        case 0x1b0ea8u: goto label_1b0ea8;
        case 0x1b0eacu: goto label_1b0eac;
        case 0x1b0eb0u: goto label_1b0eb0;
        case 0x1b0eb4u: goto label_1b0eb4;
        case 0x1b0eb8u: goto label_1b0eb8;
        case 0x1b0ebcu: goto label_1b0ebc;
        case 0x1b0ec0u: goto label_1b0ec0;
        case 0x1b0ec4u: goto label_1b0ec4;
        case 0x1b0ec8u: goto label_1b0ec8;
        case 0x1b0eccu: goto label_1b0ecc;
        case 0x1b0ed0u: goto label_1b0ed0;
        case 0x1b0ed4u: goto label_1b0ed4;
        case 0x1b0ed8u: goto label_1b0ed8;
        case 0x1b0edcu: goto label_1b0edc;
        case 0x1b0ee0u: goto label_1b0ee0;
        case 0x1b0ee4u: goto label_1b0ee4;
        case 0x1b0ee8u: goto label_1b0ee8;
        case 0x1b0eecu: goto label_1b0eec;
        case 0x1b0ef0u: goto label_1b0ef0;
        case 0x1b0ef4u: goto label_1b0ef4;
        case 0x1b0ef8u: goto label_1b0ef8;
        case 0x1b0efcu: goto label_1b0efc;
        case 0x1b0f00u: goto label_1b0f00;
        case 0x1b0f04u: goto label_1b0f04;
        case 0x1b0f08u: goto label_1b0f08;
        case 0x1b0f0cu: goto label_1b0f0c;
        case 0x1b0f10u: goto label_1b0f10;
        case 0x1b0f14u: goto label_1b0f14;
        case 0x1b0f18u: goto label_1b0f18;
        case 0x1b0f1cu: goto label_1b0f1c;
        case 0x1b0f20u: goto label_1b0f20;
        case 0x1b0f24u: goto label_1b0f24;
        case 0x1b0f28u: goto label_1b0f28;
        case 0x1b0f2cu: goto label_1b0f2c;
        case 0x1b0f30u: goto label_1b0f30;
        case 0x1b0f34u: goto label_1b0f34;
        case 0x1b0f38u: goto label_1b0f38;
        case 0x1b0f3cu: goto label_1b0f3c;
        case 0x1b0f40u: goto label_1b0f40;
        case 0x1b0f44u: goto label_1b0f44;
        case 0x1b0f48u: goto label_1b0f48;
        case 0x1b0f4cu: goto label_1b0f4c;
        case 0x1b0f50u: goto label_1b0f50;
        case 0x1b0f54u: goto label_1b0f54;
        case 0x1b0f58u: goto label_1b0f58;
        case 0x1b0f5cu: goto label_1b0f5c;
        case 0x1b0f60u: goto label_1b0f60;
        case 0x1b0f64u: goto label_1b0f64;
        case 0x1b0f68u: goto label_1b0f68;
        case 0x1b0f6cu: goto label_1b0f6c;
        case 0x1b0f70u: goto label_1b0f70;
        case 0x1b0f74u: goto label_1b0f74;
        case 0x1b0f78u: goto label_1b0f78;
        case 0x1b0f7cu: goto label_1b0f7c;
        case 0x1b0f80u: goto label_1b0f80;
        case 0x1b0f84u: goto label_1b0f84;
        case 0x1b0f88u: goto label_1b0f88;
        case 0x1b0f8cu: goto label_1b0f8c;
        case 0x1b0f90u: goto label_1b0f90;
        case 0x1b0f94u: goto label_1b0f94;
        case 0x1b0f98u: goto label_1b0f98;
        case 0x1b0f9cu: goto label_1b0f9c;
        case 0x1b0fa0u: goto label_1b0fa0;
        case 0x1b0fa4u: goto label_1b0fa4;
        case 0x1b0fa8u: goto label_1b0fa8;
        case 0x1b0facu: goto label_1b0fac;
        case 0x1b0fb0u: goto label_1b0fb0;
        case 0x1b0fb4u: goto label_1b0fb4;
        case 0x1b0fb8u: goto label_1b0fb8;
        case 0x1b0fbcu: goto label_1b0fbc;
        case 0x1b0fc0u: goto label_1b0fc0;
        case 0x1b0fc4u: goto label_1b0fc4;
        case 0x1b0fc8u: goto label_1b0fc8;
        case 0x1b0fccu: goto label_1b0fcc;
        case 0x1b0fd0u: goto label_1b0fd0;
        case 0x1b0fd4u: goto label_1b0fd4;
        case 0x1b0fd8u: goto label_1b0fd8;
        case 0x1b0fdcu: goto label_1b0fdc;
        case 0x1b0fe0u: goto label_1b0fe0;
        case 0x1b0fe4u: goto label_1b0fe4;
        case 0x1b0fe8u: goto label_1b0fe8;
        case 0x1b0fecu: goto label_1b0fec;
        case 0x1b0ff0u: goto label_1b0ff0;
        case 0x1b0ff4u: goto label_1b0ff4;
        case 0x1b0ff8u: goto label_1b0ff8;
        case 0x1b0ffcu: goto label_1b0ffc;
        case 0x1b1000u: goto label_1b1000;
        case 0x1b1004u: goto label_1b1004;
        case 0x1b1008u: goto label_1b1008;
        case 0x1b100cu: goto label_1b100c;
        case 0x1b1010u: goto label_1b1010;
        case 0x1b1014u: goto label_1b1014;
        case 0x1b1018u: goto label_1b1018;
        case 0x1b101cu: goto label_1b101c;
        case 0x1b1020u: goto label_1b1020;
        case 0x1b1024u: goto label_1b1024;
        case 0x1b1028u: goto label_1b1028;
        case 0x1b102cu: goto label_1b102c;
        case 0x1b1030u: goto label_1b1030;
        case 0x1b1034u: goto label_1b1034;
        case 0x1b1038u: goto label_1b1038;
        case 0x1b103cu: goto label_1b103c;
        case 0x1b1040u: goto label_1b1040;
        case 0x1b1044u: goto label_1b1044;
        case 0x1b1048u: goto label_1b1048;
        case 0x1b104cu: goto label_1b104c;
        case 0x1b1050u: goto label_1b1050;
        case 0x1b1054u: goto label_1b1054;
        case 0x1b1058u: goto label_1b1058;
        case 0x1b105cu: goto label_1b105c;
        case 0x1b1060u: goto label_1b1060;
        case 0x1b1064u: goto label_1b1064;
        case 0x1b1068u: goto label_1b1068;
        case 0x1b106cu: goto label_1b106c;
        case 0x1b1070u: goto label_1b1070;
        case 0x1b1074u: goto label_1b1074;
        case 0x1b1078u: goto label_1b1078;
        case 0x1b107cu: goto label_1b107c;
        case 0x1b1080u: goto label_1b1080;
        case 0x1b1084u: goto label_1b1084;
        case 0x1b1088u: goto label_1b1088;
        case 0x1b108cu: goto label_1b108c;
        case 0x1b1090u: goto label_1b1090;
        case 0x1b1094u: goto label_1b1094;
        case 0x1b1098u: goto label_1b1098;
        case 0x1b109cu: goto label_1b109c;
        case 0x1b10a0u: goto label_1b10a0;
        case 0x1b10a4u: goto label_1b10a4;
        case 0x1b10a8u: goto label_1b10a8;
        case 0x1b10acu: goto label_1b10ac;
        case 0x1b10b0u: goto label_1b10b0;
        case 0x1b10b4u: goto label_1b10b4;
        case 0x1b10b8u: goto label_1b10b8;
        case 0x1b10bcu: goto label_1b10bc;
        case 0x1b10c0u: goto label_1b10c0;
        case 0x1b10c4u: goto label_1b10c4;
        case 0x1b10c8u: goto label_1b10c8;
        case 0x1b10ccu: goto label_1b10cc;
        case 0x1b10d0u: goto label_1b10d0;
        case 0x1b10d4u: goto label_1b10d4;
        case 0x1b10d8u: goto label_1b10d8;
        case 0x1b10dcu: goto label_1b10dc;
        case 0x1b10e0u: goto label_1b10e0;
        case 0x1b10e4u: goto label_1b10e4;
        case 0x1b10e8u: goto label_1b10e8;
        case 0x1b10ecu: goto label_1b10ec;
        case 0x1b10f0u: goto label_1b10f0;
        case 0x1b10f4u: goto label_1b10f4;
        case 0x1b10f8u: goto label_1b10f8;
        case 0x1b10fcu: goto label_1b10fc;
        case 0x1b1100u: goto label_1b1100;
        case 0x1b1104u: goto label_1b1104;
        case 0x1b1108u: goto label_1b1108;
        case 0x1b110cu: goto label_1b110c;
        case 0x1b1110u: goto label_1b1110;
        case 0x1b1114u: goto label_1b1114;
        case 0x1b1118u: goto label_1b1118;
        case 0x1b111cu: goto label_1b111c;
        case 0x1b1120u: goto label_1b1120;
        case 0x1b1124u: goto label_1b1124;
        case 0x1b1128u: goto label_1b1128;
        case 0x1b112cu: goto label_1b112c;
        case 0x1b1130u: goto label_1b1130;
        case 0x1b1134u: goto label_1b1134;
        case 0x1b1138u: goto label_1b1138;
        case 0x1b113cu: goto label_1b113c;
        case 0x1b1140u: goto label_1b1140;
        case 0x1b1144u: goto label_1b1144;
        case 0x1b1148u: goto label_1b1148;
        case 0x1b114cu: goto label_1b114c;
        case 0x1b1150u: goto label_1b1150;
        case 0x1b1154u: goto label_1b1154;
        case 0x1b1158u: goto label_1b1158;
        case 0x1b115cu: goto label_1b115c;
        case 0x1b1160u: goto label_1b1160;
        case 0x1b1164u: goto label_1b1164;
        case 0x1b1168u: goto label_1b1168;
        case 0x1b116cu: goto label_1b116c;
        case 0x1b1170u: goto label_1b1170;
        case 0x1b1174u: goto label_1b1174;
        case 0x1b1178u: goto label_1b1178;
        case 0x1b117cu: goto label_1b117c;
        case 0x1b1180u: goto label_1b1180;
        case 0x1b1184u: goto label_1b1184;
        case 0x1b1188u: goto label_1b1188;
        case 0x1b118cu: goto label_1b118c;
        case 0x1b1190u: goto label_1b1190;
        case 0x1b1194u: goto label_1b1194;
        case 0x1b1198u: goto label_1b1198;
        case 0x1b119cu: goto label_1b119c;
        case 0x1b11a0u: goto label_1b11a0;
        case 0x1b11a4u: goto label_1b11a4;
        case 0x1b11a8u: goto label_1b11a8;
        case 0x1b11acu: goto label_1b11ac;
        case 0x1b11b0u: goto label_1b11b0;
        case 0x1b11b4u: goto label_1b11b4;
        case 0x1b11b8u: goto label_1b11b8;
        case 0x1b11bcu: goto label_1b11bc;
        case 0x1b11c0u: goto label_1b11c0;
        case 0x1b11c4u: goto label_1b11c4;
        case 0x1b11c8u: goto label_1b11c8;
        case 0x1b11ccu: goto label_1b11cc;
        case 0x1b11d0u: goto label_1b11d0;
        case 0x1b11d4u: goto label_1b11d4;
        case 0x1b11d8u: goto label_1b11d8;
        case 0x1b11dcu: goto label_1b11dc;
        case 0x1b11e0u: goto label_1b11e0;
        case 0x1b11e4u: goto label_1b11e4;
        case 0x1b11e8u: goto label_1b11e8;
        case 0x1b11ecu: goto label_1b11ec;
        case 0x1b11f0u: goto label_1b11f0;
        case 0x1b11f4u: goto label_1b11f4;
        case 0x1b11f8u: goto label_1b11f8;
        case 0x1b11fcu: goto label_1b11fc;
        case 0x1b1200u: goto label_1b1200;
        case 0x1b1204u: goto label_1b1204;
        case 0x1b1208u: goto label_1b1208;
        case 0x1b120cu: goto label_1b120c;
        case 0x1b1210u: goto label_1b1210;
        case 0x1b1214u: goto label_1b1214;
        case 0x1b1218u: goto label_1b1218;
        default: break;
    }

    ctx->pc = 0x1b0550u;

label_1b0550:
    // 0x1b0550: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1b0550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_1b0554:
    // 0x1b0554: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1b0554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1b0558:
    // 0x1b0558: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1b0558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1b055c:
    // 0x1b055c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1b055cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1b0560:
    // 0x1b0560: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1b0560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1b0564:
    // 0x1b0564: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1b0564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1b0568:
    // 0x1b0568: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1b0568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1b056c:
    // 0x1b056c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b056cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1b0570:
    // 0x1b0570: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b0570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0574:
    // 0x1b0574: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b0574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1b0578:
    // 0x1b0578: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b0578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b057c:
    // 0x1b057c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b057cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b0580:
    // 0x1b0580: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1b0580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1b0584:
    // 0x1b0584: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1b0588:
    // 0x1b0588: 0x8c840118  lw          $a0, 0x118($a0)
    ctx->pc = 0x1b0588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_1b058c:
    // 0x1b058c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_1b0590:
    if (ctx->pc == 0x1B0590u) {
        ctx->pc = 0x1B0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B058Cu;
        // 0x1b0590: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0594u;
        goto label_1b0594;
    }
    ctx->pc = 0x1B058Cu;
    {
        const bool branch_taken_0x1b058c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B058Cu;
        // 0x1b0590: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b058c) {
            ctx->pc = 0x1B05DCu;
            goto label_1b05dc;
        }
    }
    ctx->pc = 0x1B0594u;
label_1b0594:
    // 0x1b0594: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1b0594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_1b0598:
    // 0x1b0598: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b0598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b059c:
    // 0x1b059c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b059cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1b05a0:
    // 0x1b05a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b05a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b05a4:
    // 0x1b05a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b05a8:
    if (ctx->pc == 0x1B05A8u) {
        ctx->pc = 0x1B05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05A4u;
        // 0x1b05a8: 0x8e83011c  lw          $v1, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B05ACu;
        goto label_1b05ac;
    }
    ctx->pc = 0x1B05A4u;
    {
        const bool branch_taken_0x1b05a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05A4u;
        // 0x1b05a8: 0x8e83011c  lw          $v1, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05a4) {
            ctx->pc = 0x1B05B8u;
            goto label_1b05b8;
        }
    }
    ctx->pc = 0x1B05ACu;
label_1b05ac:
    // 0x1b05ac: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1b05acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1b05b0:
    // 0x1b05b0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b05b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1b05b4:
    // 0x1b05b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b05b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b05b8:
    // 0x1b05b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b05bc:
    if (ctx->pc == 0x1B05BCu) {
        ctx->pc = 0x1B05C0u;
        goto label_1b05c0;
    }
    ctx->pc = 0x1B05B8u;
    {
        const bool branch_taken_0x1b05b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b05b8) {
            ctx->pc = 0x1B05CCu;
            goto label_1b05cc;
        }
    }
    ctx->pc = 0x1B05C0u;
label_1b05c0:
    // 0x1b05c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b05c4:
    // 0x1b05c4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b05c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b05c8:
    // 0x1b05c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b05c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b05cc:
    // 0x1b05cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b05d0:
    if (ctx->pc == 0x1B05D0u) {
        ctx->pc = 0x1B05D4u;
        goto label_1b05d4;
    }
    ctx->pc = 0x1B05CCu;
    {
        const bool branch_taken_0x1b05cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b05cc) {
            ctx->pc = 0x1B05DCu;
            goto label_1b05dc;
        }
    }
    ctx->pc = 0x1B05D4u;
label_1b05d4:
    // 0x1b05d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b05d8:
    if (ctx->pc == 0x1B05D8u) {
        ctx->pc = 0x1B05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05D4u;
        // 0x1b05d8: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B05DCu;
        goto label_1b05dc;
    }
    ctx->pc = 0x1B05D4u;
    {
        const bool branch_taken_0x1b05d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05D4u;
        // 0x1b05d8: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05d4) {
            ctx->pc = 0x1B05E4u;
            goto label_1b05e4;
        }
    }
    ctx->pc = 0x1B05DCu;
label_1b05dc:
    // 0x1b05dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b05dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b05e0:
    // 0x1b05e0: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x1b05e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1b05e4:
    // 0x1b05e4: 0xc06d100  jal         func_1B4400
label_1b05e8:
    if (ctx->pc == 0x1B05E8u) {
        ctx->pc = 0x1B05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05E4u;
        // 0x1b05e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B05ECu;
        goto label_1b05ec;
    }
    ctx->pc = 0x1B05E4u;
    SET_GPR_U32(ctx, 31, 0x1B05ECu);
    ctx->pc = 0x1B05E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B05E4u;
    // 0x1b05e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x1B05E4u, 0x1B05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B05ECu;
label_1b05ec:
    // 0x1b05ec: 0xc06be68  jal         func_1AF9A0
label_1b05f0:
    if (ctx->pc == 0x1B05F0u) {
        ctx->pc = 0x1B05F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05ECu;
        // 0x1b05f0: 0x27848334  addiu       $a0, $gp, -0x7CCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B05F4u;
        goto label_1b05f4;
    }
    ctx->pc = 0x1B05ECu;
    SET_GPR_U32(ctx, 31, 0x1B05F4u);
    ctx->pc = 0x1B05F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B05ECu;
    // 0x1b05f0: 0x27848334  addiu       $a0, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF9A0u, 0x1B05ECu, 0x1B05F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B05F4u;
label_1b05f4:
    // 0x1b05f4: 0x928202f2  lbu         $v0, 0x2F2($s4)
    ctx->pc = 0x1b05f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 754)));
label_1b05f8:
    // 0x1b05f8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_1b05fc:
    if (ctx->pc == 0x1B05FCu) {
        ctx->pc = 0x1B0600u;
        goto label_1b0600;
    }
    ctx->pc = 0x1B05F8u;
    {
        const bool branch_taken_0x1b05f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b05f8) {
            ctx->pc = 0x1B07C8u;
            goto label_1b07c8;
        }
    }
    ctx->pc = 0x1B0600u;
label_1b0600:
    // 0x1b0600: 0x8e8602e0  lw          $a2, 0x2E0($s4)
    ctx->pc = 0x1b0600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
label_1b0604:
    // 0x1b0604: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b0604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1b0608:
    // 0x1b0608: 0x8e8702e4  lw          $a3, 0x2E4($s4)
    ctx->pc = 0x1b0608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
label_1b060c:
    // 0x1b060c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b060cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b0610:
    // 0x1b0610: 0x8e8802e8  lw          $t0, 0x2E8($s4)
    ctx->pc = 0x1b0610u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 744)));
label_1b0614:
    // 0x1b0614: 0xc061fa8  jal         func_187EA0
label_1b0618:
    if (ctx->pc == 0x1B0618u) {
        ctx->pc = 0x1B0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0614u;
        // 0x1b0618: 0x24a50c40  addiu       $a1, $a1, 0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B061Cu;
        goto label_1b061c;
    }
    ctx->pc = 0x1B0614u;
    SET_GPR_U32(ctx, 31, 0x1B061Cu);
    ctx->pc = 0x1B0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0614u;
    // 0x1b0618: 0x24a50c40  addiu       $a1, $a1, 0xC40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B0614u, 0x1B061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B061Cu;
label_1b061c:
    // 0x1b061c: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b061cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b0620:
    // 0x1b0620: 0x24117100  addiu       $s1, $zero, 0x7100
    ctx->pc = 0x1b0620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
label_1b0624:
    // 0x1b0624: 0x8e95011c  lw          $s5, 0x11C($s4)
    ctx->pc = 0x1b0624u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b0628:
    // 0x1b0628: 0xc04b7b4  jal         func_12DED0
label_1b062c:
    if (ctx->pc == 0x1B062Cu) {
        ctx->pc = 0x1B062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0628u;
        // 0x1b062c: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0630u;
        goto label_1b0630;
    }
    ctx->pc = 0x1B0628u;
    SET_GPR_U32(ctx, 31, 0x1B0630u);
    ctx->pc = 0x1B062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0628u;
    // 0x1b062c: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B0628u, 0x1B0630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0630u;
label_1b0630:
    // 0x1b0630: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1b0634:
    if (ctx->pc == 0x1B0634u) {
        ctx->pc = 0x1B0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0630u;
        // 0x1b0634: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0638u;
        goto label_1b0638;
    }
    ctx->pc = 0x1B0630u;
    {
        const bool branch_taken_0x1b0630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0630u;
        // 0x1b0634: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0630) {
            ctx->pc = 0x1B07ACu;
            goto label_1b07ac;
        }
    }
    ctx->pc = 0x1B0638u;
label_1b0638:
    // 0x1b0638: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b0638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b063c:
    // 0x1b063c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1b063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1b0640:
    // 0x1b0640: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b0644:
    // 0x1b0644: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b0644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b0648:
    // 0x1b0648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b064c:
    // 0x1b064c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b064cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1b0650:
    // 0x1b0650: 0xc04b7dc  jal         func_12DF70
label_1b0654:
    if (ctx->pc == 0x1B0654u) {
        ctx->pc = 0x1B0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0650u;
        // 0x1b0654: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0658u;
        goto label_1b0658;
    }
    ctx->pc = 0x1B0650u;
    SET_GPR_U32(ctx, 31, 0x1B0658u);
    ctx->pc = 0x1B0654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0650u;
    // 0x1b0654: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B0650u, 0x1B0658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0658u;
label_1b0658:
    // 0x1b0658: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1b0658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1b065c:
    // 0x1b065c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x1b065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1b0660:
    // 0x1b0660: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b0660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0664:
    // 0x1b0664: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0668:
    // 0x1b0668: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b0668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b066c:
    // 0x1b066c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0670:
    // 0x1b0670: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b0670u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b0674:
    // 0x1b0674: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b0674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b0678:
    // 0x1b0678: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b0678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b067c:
    // 0x1b067c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1b0680:
    // 0x1b0680: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b0680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0684:
    // 0x1b0684: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b0684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0688:
    // 0x1b0688: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b0688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b068c:
    // 0x1b068c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0690:
    // 0x1b0690: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b0690u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1b0694:
    // 0x1b0694: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b0694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1b0698:
    // 0x1b0698: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b0698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1b069c:
    // 0x1b069c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b06a0:
    if (ctx->pc == 0x1B06A0u) {
        ctx->pc = 0x1B06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B069Cu;
        // 0x1b06a0: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06A4u;
        goto label_1b06a4;
    }
    ctx->pc = 0x1B069Cu;
    {
        const bool branch_taken_0x1b069c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B069Cu;
        // 0x1b06a0: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b069c) {
            ctx->pc = 0x1B06F0u;
            goto label_1b06f0;
        }
    }
    ctx->pc = 0x1B06A4u;
label_1b06a4:
    // 0x1b06a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b06a8:
    // 0x1b06a8: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b06a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b06ac:
    // 0x1b06ac: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b06acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b06b0:
    // 0x1b06b0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b06b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b06b4:
    // 0x1b06b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b06b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b06b8:
    // 0x1b06b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b06bc:
    if (ctx->pc == 0x1B06BCu) {
        ctx->pc = 0x1B06C0u;
        goto label_1b06c0;
    }
    ctx->pc = 0x1B06B8u;
    {
        const bool branch_taken_0x1b06b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06b8) {
            ctx->pc = 0x1B06CCu;
            goto label_1b06cc;
        }
    }
    ctx->pc = 0x1B06C0u;
label_1b06c0:
    // 0x1b06c0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b06c4:
    // 0x1b06c4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b06c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b06c8:
    // 0x1b06c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b06c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b06cc:
    // 0x1b06cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b06d0:
    if (ctx->pc == 0x1B06D0u) {
        ctx->pc = 0x1B06D4u;
        goto label_1b06d4;
    }
    ctx->pc = 0x1B06CCu;
    {
        const bool branch_taken_0x1b06cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06cc) {
            ctx->pc = 0x1B06E0u;
            goto label_1b06e0;
        }
    }
    ctx->pc = 0x1B06D4u;
label_1b06d4:
    // 0x1b06d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b06d8:
    // 0x1b06d8: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x1b06d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_1b06dc:
    // 0x1b06dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b06dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b06e0:
    // 0x1b06e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b06e4:
    if (ctx->pc == 0x1B06E4u) {
        ctx->pc = 0x1B06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06E0u;
        // 0x1b06e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06E8u;
        goto label_1b06e8;
    }
    ctx->pc = 0x1B06E0u;
    {
        const bool branch_taken_0x1b06e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06E0u;
        // 0x1b06e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06e0) {
            ctx->pc = 0x1B06F0u;
            goto label_1b06f0;
        }
    }
    ctx->pc = 0x1B06E8u;
label_1b06e8:
    // 0x1b06e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b06ec:
    if (ctx->pc == 0x1B06ECu) {
        ctx->pc = 0x1B06F0u;
        goto label_1b06f0;
    }
    ctx->pc = 0x1B06E8u;
    {
        const bool branch_taken_0x1b06e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06e8) {
            ctx->pc = 0x1B06F4u;
            goto label_1b06f4;
        }
    }
    ctx->pc = 0x1B06F0u;
label_1b06f0:
    // 0x1b06f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b06f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b06f4:
    // 0x1b06f4: 0x0  nop
    ctx->pc = 0x1b06f4u;
    // NOP
label_1b06f8:
    // 0x1b06f8: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1b06f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_1b06fc:
    // 0x1b06fc: 0xc06d130  jal         func_1B44C0
label_1b0700:
    if (ctx->pc == 0x1B0700u) {
        ctx->pc = 0x1B0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06FCu;
        // 0x1b0700: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0704u;
        goto label_1b0704;
    }
    ctx->pc = 0x1B06FCu;
    SET_GPR_U32(ctx, 31, 0x1B0704u);
    ctx->pc = 0x1B0700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06FCu;
    // 0x1b0700: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B06FCu, 0x1B0704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0704u;
label_1b0704:
    // 0x1b0704: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b0708:
    if (ctx->pc == 0x1B0708u) {
        ctx->pc = 0x1B070Cu;
        goto label_1b070c;
    }
    ctx->pc = 0x1B0704u;
    {
        const bool branch_taken_0x1b0704 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0704) {
            ctx->pc = 0x1B0758u;
            goto label_1b0758;
        }
    }
    ctx->pc = 0x1B070Cu;
label_1b070c:
    // 0x1b070c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0710:
    // 0x1b0710: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0714:
    // 0x1b0714: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0718:
    // 0x1b0718: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b071c:
    // 0x1b071c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b071cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0720:
    // 0x1b0720: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0724:
    if (ctx->pc == 0x1B0724u) {
        ctx->pc = 0x1B0728u;
        goto label_1b0728;
    }
    ctx->pc = 0x1B0720u;
    {
        const bool branch_taken_0x1b0720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0720) {
            ctx->pc = 0x1B0734u;
            goto label_1b0734;
        }
    }
    ctx->pc = 0x1B0728u;
label_1b0728:
    // 0x1b0728: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b072c:
    // 0x1b072c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0730:
    // 0x1b0730: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0734:
    // 0x1b0734: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0738:
    if (ctx->pc == 0x1B0738u) {
        ctx->pc = 0x1B073Cu;
        goto label_1b073c;
    }
    ctx->pc = 0x1B0734u;
    {
        const bool branch_taken_0x1b0734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0734) {
            ctx->pc = 0x1B0748u;
            goto label_1b0748;
        }
    }
    ctx->pc = 0x1B073Cu;
label_1b073c:
    // 0x1b073c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0740:
    // 0x1b0740: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x1b0740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_1b0744:
    // 0x1b0744: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0748:
    // 0x1b0748: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b074c:
    if (ctx->pc == 0x1B074Cu) {
        ctx->pc = 0x1B074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0748u;
        // 0x1b074c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0750u;
        goto label_1b0750;
    }
    ctx->pc = 0x1B0748u;
    {
        const bool branch_taken_0x1b0748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0748u;
        // 0x1b074c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0748) {
            ctx->pc = 0x1B0758u;
            goto label_1b0758;
        }
    }
    ctx->pc = 0x1B0750u;
label_1b0750:
    // 0x1b0750: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0754:
    if (ctx->pc == 0x1B0754u) {
        ctx->pc = 0x1B0758u;
        goto label_1b0758;
    }
    ctx->pc = 0x1B0750u;
    {
        const bool branch_taken_0x1b0750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0750) {
            ctx->pc = 0x1B075Cu;
            goto label_1b075c;
        }
    }
    ctx->pc = 0x1B0758u;
label_1b0758:
    // 0x1b0758: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b075c:
    // 0x1b075c: 0x0  nop
    ctx->pc = 0x1b075cu;
    // NOP
label_1b0760:
    // 0x1b0760: 0xc06d14c  jal         func_1B4530
label_1b0764:
    if (ctx->pc == 0x1B0764u) {
        ctx->pc = 0x1B0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0760u;
        // 0x1b0764: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0768u;
        goto label_1b0768;
    }
    ctx->pc = 0x1B0760u;
    SET_GPR_U32(ctx, 31, 0x1B0768u);
    ctx->pc = 0x1B0764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0760u;
    // 0x1b0764: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0760u, 0x1B0768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0768u;
label_1b0768:
    // 0x1b0768: 0x24090180  addiu       $t1, $zero, 0x180
    ctx->pc = 0x1b0768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1b076c:
    // 0x1b076c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1b076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1b0770:
    // 0x1b0770: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x1b0770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
label_1b0774:
    // 0x1b0774: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b0774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0778:
    // 0x1b0778: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b0778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1b077c:
    // 0x1b077c: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b0780:
    // 0x1b0780: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b0780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b0784:
    // 0x1b0784: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b0784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0788:
    // 0x1b0788: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b078c:
    // 0x1b078c: 0x240774c0  addiu       $a3, $zero, 0x74C0
    ctx->pc = 0x1b078cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29888));
label_1b0790:
    // 0x1b0790: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1b0790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1b0794:
    // 0x1b0794: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b0794u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b0798:
    // 0x1b0798: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b0798u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b079c:
    // 0x1b079c: 0xc06be8c  jal         func_1AFA30
label_1b07a0:
    if (ctx->pc == 0x1B07A0u) {
        ctx->pc = 0x1B07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B079Cu;
        // 0x1b07a0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07A4u;
        goto label_1b07a4;
    }
    ctx->pc = 0x1B079Cu;
    SET_GPR_U32(ctx, 31, 0x1B07A4u);
    ctx->pc = 0x1B07A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B079Cu;
    // 0x1b07a0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B079Cu, 0x1B07A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07A4u;
label_1b07a4:
    // 0x1b07a4: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x1b07a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1b07a8:
    // 0x1b07a8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1b07a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1b07ac:
    // 0x1b07ac: 0x0  nop
    ctx->pc = 0x1b07acu;
    // NOP
label_1b07b0:
    // 0x1b07b0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b07b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b07b4:
    // 0x1b07b4: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
label_1b07b8:
    if (ctx->pc == 0x1B07B8u) {
        ctx->pc = 0x1B07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07B4u;
        // 0x1b07b8: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07BCu;
        goto label_1b07bc;
    }
    ctx->pc = 0x1B07B4u;
    {
        const bool branch_taken_0x1b07b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07B4u;
        // 0x1b07b8: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07b4) {
            ctx->pc = 0x1B063Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b063c;
        }
    }
    ctx->pc = 0x1B07BCu;
label_1b07bc:
    // 0x1b07bc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b07bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b07c0:
    // 0x1b07c0: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_1b07c4:
    if (ctx->pc == 0x1B07C4u) {
        ctx->pc = 0x1B07C8u;
        goto label_1b07c8;
    }
    ctx->pc = 0x1B07C0u;
    {
        const bool branch_taken_0x1b07c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b07c0) {
            ctx->pc = 0x1B0638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0638;
        }
    }
    ctx->pc = 0x1B07C8u;
label_1b07c8:
    // 0x1b07c8: 0x928202ed  lbu         $v0, 0x2ED($s4)
    ctx->pc = 0x1b07c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 749)));
label_1b07cc:
    // 0x1b07cc: 0x10400262  beqz        $v0, . + 4 + (0x262 << 2)
label_1b07d0:
    if (ctx->pc == 0x1B07D0u) {
        ctx->pc = 0x1B07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07CCu;
        // 0x1b07d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07D4u;
        goto label_1b07d4;
    }
    ctx->pc = 0x1B07CCu;
    {
        const bool branch_taken_0x1b07cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07CCu;
        // 0x1b07d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07cc) {
            ctx->pc = 0x1B1158u;
            goto label_1b1158;
        }
    }
    ctx->pc = 0x1B07D4u;
label_1b07d4:
    // 0x1b07d4: 0x928202f0  lbu         $v0, 0x2F0($s4)
    ctx->pc = 0x1b07d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 752)));
label_1b07d8:
    // 0x1b07d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b07dc:
    if (ctx->pc == 0x1B07DCu) {
        ctx->pc = 0x1B07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07D8u;
        // 0x1b07dc: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07E0u;
        goto label_1b07e0;
    }
    ctx->pc = 0x1B07D8u;
    {
        const bool branch_taken_0x1b07d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07D8u;
        // 0x1b07dc: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07d8) {
            ctx->pc = 0x1B07F8u;
            goto label_1b07f8;
        }
    }
    ctx->pc = 0x1B07E0u;
label_1b07e0:
    // 0x1b07e0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b07e4:
    // 0x1b07e4: 0xc061fa8  jal         func_187EA0
label_1b07e8:
    if (ctx->pc == 0x1B07E8u) {
        ctx->pc = 0x1B07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07E4u;
        // 0x1b07e8: 0x24a50c50  addiu       $a1, $a1, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07ECu;
        goto label_1b07ec;
    }
    ctx->pc = 0x1B07E4u;
    SET_GPR_U32(ctx, 31, 0x1B07ECu);
    ctx->pc = 0x1B07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07E4u;
    // 0x1b07e8: 0x24a50c50  addiu       $a1, $a1, 0xC50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B07E4u, 0x1B07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07ECu;
label_1b07ec:
    // 0x1b07ec: 0x241500a0  addiu       $s5, $zero, 0xA0
    ctx->pc = 0x1b07ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1b07f0:
    // 0x1b07f0: 0x10000011  b           . + 4 + (0x11 << 2)
label_1b07f4:
    if (ctx->pc == 0x1B07F4u) {
        ctx->pc = 0x1B07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07F0u;
        // 0x1b07f4: 0x24170180  addiu       $s7, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07F8u;
        goto label_1b07f8;
    }
    ctx->pc = 0x1B07F0u;
    {
        const bool branch_taken_0x1b07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07F0u;
        // 0x1b07f4: 0x24170180  addiu       $s7, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07f0) {
            ctx->pc = 0x1B0838u;
            goto label_1b0838;
        }
    }
    ctx->pc = 0x1B07F8u;
label_1b07f8:
    // 0x1b07f8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b07fc:
    // 0x1b07fc: 0xdc462818  ld          $a2, 0x2818($v0)
    ctx->pc = 0x1b07fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
label_1b0800:
    // 0x1b0800: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0804:
    // 0x1b0804: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b0804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1b0808:
    // 0x1b0808: 0x3c02540b  lui         $v0, 0x540B
    ctx->pc = 0x1b0808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21515 << 16));
label_1b080c:
    // 0x1b080c: 0x3442e3ff  ori         $v0, $v0, 0xE3FF
    ctx->pc = 0x1b080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58367);
label_1b0810:
    // 0x1b0810: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b0814:
    // 0x1b0814: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x1b0814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b0818:
    // 0x1b0818: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1b081c:
    if (ctx->pc == 0x1B081Cu) {
        ctx->pc = 0x1B081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0818u;
        // 0x1b081c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0820u;
        goto label_1b0820;
    }
    ctx->pc = 0x1B0818u;
    {
        const bool branch_taken_0x1b0818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0818u;
        // 0x1b081c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0818) {
            ctx->pc = 0x1B0824u;
            goto label_1b0824;
        }
    }
    ctx->pc = 0x1B0820u;
label_1b0820:
    // 0x1b0820: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b0820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0824:
    // 0x1b0824: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b0824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b0828:
    // 0x1b0828: 0xc061fa8  jal         func_187EA0
label_1b082c:
    if (ctx->pc == 0x1B082Cu) {
        ctx->pc = 0x1B082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0828u;
        // 0x1b082c: 0x24a50c60  addiu       $a1, $a1, 0xC60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0830u;
        goto label_1b0830;
    }
    ctx->pc = 0x1B0828u;
    SET_GPR_U32(ctx, 31, 0x1B0830u);
    ctx->pc = 0x1B082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0828u;
    // 0x1b082c: 0x24a50c60  addiu       $a1, $a1, 0xC60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B0828u, 0x1B0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0830u;
label_1b0830:
    // 0x1b0830: 0x241500c0  addiu       $s5, $zero, 0xC0
    ctx->pc = 0x1b0830u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1b0834:
    // 0x1b0834: 0x24170180  addiu       $s7, $zero, 0x180
    ctx->pc = 0x1b0834u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1b0838:
    // 0x1b0838: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b0838u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b083c:
    // 0x1b083c: 0x24117100  addiu       $s1, $zero, 0x7100
    ctx->pc = 0x1b083cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
label_1b0840:
    // 0x1b0840: 0x8e96011c  lw          $s6, 0x11C($s4)
    ctx->pc = 0x1b0840u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b0844:
    // 0x1b0844: 0xc04b7b4  jal         func_12DED0
label_1b0848:
    if (ctx->pc == 0x1B0848u) {
        ctx->pc = 0x1B0848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0844u;
        // 0x1b0848: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B084Cu;
        goto label_1b084c;
    }
    ctx->pc = 0x1B0844u;
    SET_GPR_U32(ctx, 31, 0x1B084Cu);
    ctx->pc = 0x1B0848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0844u;
    // 0x1b0848: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B0844u, 0x1B084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B084Cu;
label_1b084c:
    // 0x1b084c: 0x10000060  b           . + 4 + (0x60 << 2)
label_1b0850:
    if (ctx->pc == 0x1B0850u) {
        ctx->pc = 0x1B0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B084Cu;
        // 0x1b0850: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0854u;
        goto label_1b0854;
    }
    ctx->pc = 0x1B084Cu;
    {
        const bool branch_taken_0x1b084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B084Cu;
        // 0x1b0850: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b084c) {
            ctx->pc = 0x1B09D0u;
            goto label_1b09d0;
        }
    }
    ctx->pc = 0x1B0854u;
label_1b0854:
    // 0x1b0854: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b0854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b0858:
    // 0x1b0858: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1b0858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1b085c:
    // 0x1b085c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b085cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b0860:
    // 0x1b0860: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b0860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b0864:
    // 0x1b0864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0868:
    // 0x1b0868: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b0868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1b086c:
    // 0x1b086c: 0xc04b7dc  jal         func_12DF70
label_1b0870:
    if (ctx->pc == 0x1B0870u) {
        ctx->pc = 0x1B0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B086Cu;
        // 0x1b0870: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0874u;
        goto label_1b0874;
    }
    ctx->pc = 0x1B086Cu;
    SET_GPR_U32(ctx, 31, 0x1B0874u);
    ctx->pc = 0x1B0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B086Cu;
    // 0x1b0870: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B086Cu, 0x1B0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0874u;
label_1b0874:
    // 0x1b0874: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1b0874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1b0878:
    // 0x1b0878: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1b0878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b087c:
    // 0x1b087c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0880:
    // 0x1b0880: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b0880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0884:
    // 0x1b0884: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b0884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0888:
    // 0x1b0888: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b0888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b088c:
    // 0x1b088c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b088cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b0890:
    // 0x1b0890: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b0890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b0894:
    // 0x1b0894: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b0894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b0898:
    // 0x1b0898: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b0898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1b089c:
    // 0x1b089c: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b08a0:
    // 0x1b08a0: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b08a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b08a4:
    // 0x1b08a4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b08a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b08a8:
    // 0x1b08a8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b08ac:
    // 0x1b08ac: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b08acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1b08b0:
    // 0x1b08b0: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b08b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1b08b4:
    // 0x1b08b4: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b08b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1b08b8:
    // 0x1b08b8: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b08bc:
    if (ctx->pc == 0x1B08BCu) {
        ctx->pc = 0x1B08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08B8u;
        // 0x1b08bc: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08C0u;
        goto label_1b08c0;
    }
    ctx->pc = 0x1B08B8u;
    {
        const bool branch_taken_0x1b08b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08B8u;
        // 0x1b08bc: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08b8) {
            ctx->pc = 0x1B090Cu;
            goto label_1b090c;
        }
    }
    ctx->pc = 0x1B08C0u;
label_1b08c0:
    // 0x1b08c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b08c4:
    // 0x1b08c4: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b08c8:
    // 0x1b08c8: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b08c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b08cc:
    // 0x1b08cc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b08ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b08d0:
    // 0x1b08d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b08d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b08d4:
    // 0x1b08d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b08d8:
    if (ctx->pc == 0x1B08D8u) {
        ctx->pc = 0x1B08DCu;
        goto label_1b08dc;
    }
    ctx->pc = 0x1B08D4u;
    {
        const bool branch_taken_0x1b08d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08d4) {
            ctx->pc = 0x1B08E8u;
            goto label_1b08e8;
        }
    }
    ctx->pc = 0x1B08DCu;
label_1b08dc:
    // 0x1b08dc: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b08e0:
    // 0x1b08e0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b08e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b08e4:
    // 0x1b08e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b08e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b08e8:
    // 0x1b08e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b08ec:
    if (ctx->pc == 0x1B08ECu) {
        ctx->pc = 0x1B08F0u;
        goto label_1b08f0;
    }
    ctx->pc = 0x1B08E8u;
    {
        const bool branch_taken_0x1b08e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08e8) {
            ctx->pc = 0x1B08FCu;
            goto label_1b08fc;
        }
    }
    ctx->pc = 0x1B08F0u;
label_1b08f0:
    // 0x1b08f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b08f4:
    // 0x1b08f4: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x1b08f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
label_1b08f8:
    // 0x1b08f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b08f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b08fc:
    // 0x1b08fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b0900:
    if (ctx->pc == 0x1B0900u) {
        ctx->pc = 0x1B0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08FCu;
        // 0x1b0900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0904u;
        goto label_1b0904;
    }
    ctx->pc = 0x1B08FCu;
    {
        const bool branch_taken_0x1b08fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08FCu;
        // 0x1b0900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08fc) {
            ctx->pc = 0x1B090Cu;
            goto label_1b090c;
        }
    }
    ctx->pc = 0x1B0904u;
label_1b0904:
    // 0x1b0904: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b0908:
    if (ctx->pc == 0x1B0908u) {
        ctx->pc = 0x1B090Cu;
        goto label_1b090c;
    }
    ctx->pc = 0x1B0904u;
    {
        const bool branch_taken_0x1b0904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0904) {
            ctx->pc = 0x1B0914u;
            goto label_1b0914;
        }
    }
    ctx->pc = 0x1B090Cu;
label_1b090c:
    // 0x1b090c: 0x0  nop
    ctx->pc = 0x1b090cu;
    // NOP
label_1b0910:
    // 0x1b0910: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0914:
    // 0x1b0914: 0x0  nop
    ctx->pc = 0x1b0914u;
    // NOP
label_1b0918:
    // 0x1b0918: 0x8fb30178  lw          $s3, 0x178($sp)
    ctx->pc = 0x1b0918u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_1b091c:
    // 0x1b091c: 0xc06d130  jal         func_1B44C0
label_1b0920:
    if (ctx->pc == 0x1B0920u) {
        ctx->pc = 0x1B0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B091Cu;
        // 0x1b0920: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0924u;
        goto label_1b0924;
    }
    ctx->pc = 0x1B091Cu;
    SET_GPR_U32(ctx, 31, 0x1B0924u);
    ctx->pc = 0x1B0920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B091Cu;
    // 0x1b0920: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B091Cu, 0x1B0924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0924u;
label_1b0924:
    // 0x1b0924: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b0928:
    if (ctx->pc == 0x1B0928u) {
        ctx->pc = 0x1B092Cu;
        goto label_1b092c;
    }
    ctx->pc = 0x1B0924u;
    {
        const bool branch_taken_0x1b0924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0924) {
            ctx->pc = 0x1B0978u;
            goto label_1b0978;
        }
    }
    ctx->pc = 0x1B092Cu;
label_1b092c:
    // 0x1b092c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0930:
    // 0x1b0930: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0934:
    // 0x1b0934: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0938:
    // 0x1b0938: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b093c:
    // 0x1b093c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b093cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0940:
    // 0x1b0940: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0944:
    if (ctx->pc == 0x1B0944u) {
        ctx->pc = 0x1B0948u;
        goto label_1b0948;
    }
    ctx->pc = 0x1B0940u;
    {
        const bool branch_taken_0x1b0940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0940) {
            ctx->pc = 0x1B0954u;
            goto label_1b0954;
        }
    }
    ctx->pc = 0x1B0948u;
label_1b0948:
    // 0x1b0948: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b094c:
    // 0x1b094c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b094cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0950:
    // 0x1b0950: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0954:
    // 0x1b0954: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0958:
    if (ctx->pc == 0x1B0958u) {
        ctx->pc = 0x1B095Cu;
        goto label_1b095c;
    }
    ctx->pc = 0x1B0954u;
    {
        const bool branch_taken_0x1b0954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0954) {
            ctx->pc = 0x1B0968u;
            goto label_1b0968;
        }
    }
    ctx->pc = 0x1B095Cu;
label_1b095c:
    // 0x1b095c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0960:
    // 0x1b0960: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x1b0960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
label_1b0964:
    // 0x1b0964: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0968:
    // 0x1b0968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b096c:
    if (ctx->pc == 0x1B096Cu) {
        ctx->pc = 0x1B096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0968u;
        // 0x1b096c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0970u;
        goto label_1b0970;
    }
    ctx->pc = 0x1B0968u;
    {
        const bool branch_taken_0x1b0968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0968u;
        // 0x1b096c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0968) {
            ctx->pc = 0x1B0978u;
            goto label_1b0978;
        }
    }
    ctx->pc = 0x1B0970u;
label_1b0970:
    // 0x1b0970: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0974:
    if (ctx->pc == 0x1B0974u) {
        ctx->pc = 0x1B0978u;
        goto label_1b0978;
    }
    ctx->pc = 0x1B0970u;
    {
        const bool branch_taken_0x1b0970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0970) {
            ctx->pc = 0x1B097Cu;
            goto label_1b097c;
        }
    }
    ctx->pc = 0x1B0978u;
label_1b0978:
    // 0x1b0978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b097c:
    // 0x1b097c: 0x0  nop
    ctx->pc = 0x1b097cu;
    // NOP
label_1b0980:
    // 0x1b0980: 0xc06d14c  jal         func_1B4530
label_1b0984:
    if (ctx->pc == 0x1B0984u) {
        ctx->pc = 0x1B0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0980u;
        // 0x1b0984: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0988u;
        goto label_1b0988;
    }
    ctx->pc = 0x1B0980u;
    SET_GPR_U32(ctx, 31, 0x1B0988u);
    ctx->pc = 0x1B0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0980u;
    // 0x1b0984: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0980u, 0x1B0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0988u;
label_1b0988:
    // 0x1b0988: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1b0988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1b098c:
    // 0x1b098c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b098cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0990:
    // 0x1b0990: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b0990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1b0994:
    // 0x1b0994: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b0998:
    // 0x1b0998: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1b0998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1b099c:
    // 0x1b099c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b099cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b09a0:
    // 0x1b09a0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b09a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1b09a4:
    // 0x1b09a4: 0x24077340  addiu       $a3, $zero, 0x7340
    ctx->pc = 0x1b09a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29504));
label_1b09a8:
    // 0x1b09a8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b09ac:
    // 0x1b09ac: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1b09acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b09b0:
    // 0x1b09b0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b09b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b09b4:
    // 0x1b09b4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b09b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b09b8:
    // 0x1b09b8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b09b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b09bc:
    // 0x1b09bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b09bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b09c0:
    // 0x1b09c0: 0xc06be8c  jal         func_1AFA30
label_1b09c4:
    if (ctx->pc == 0x1B09C4u) {
        ctx->pc = 0x1B09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09C0u;
        // 0x1b09c4: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09C8u;
        goto label_1b09c8;
    }
    ctx->pc = 0x1B09C0u;
    SET_GPR_U32(ctx, 31, 0x1B09C8u);
    ctx->pc = 0x1B09C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B09C0u;
    // 0x1b09c4: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B09C0u, 0x1B09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09C8u;
label_1b09c8:
    // 0x1b09c8: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x1b09c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_1b09cc:
    // 0x1b09cc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1b09ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1b09d0:
    // 0x1b09d0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b09d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b09d4:
    // 0x1b09d4: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_1b09d8:
    if (ctx->pc == 0x1B09D8u) {
        ctx->pc = 0x1B09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09D4u;
        // 0x1b09d8: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09DCu;
        goto label_1b09dc;
    }
    ctx->pc = 0x1B09D4u;
    {
        const bool branch_taken_0x1b09d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09D4u;
        // 0x1b09d8: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09d4) {
            ctx->pc = 0x1B0858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0858;
        }
    }
    ctx->pc = 0x1B09DCu;
label_1b09dc:
    // 0x1b09dc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b09dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b09e0:
    // 0x1b09e0: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_1b09e4:
    if (ctx->pc == 0x1B09E4u) {
        ctx->pc = 0x1B09E8u;
        goto label_1b09e8;
    }
    ctx->pc = 0x1B09E0u;
    {
        const bool branch_taken_0x1b09e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b09e0) {
            ctx->pc = 0x1B0854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0854;
        }
    }
    ctx->pc = 0x1B09E8u;
label_1b09e8:
    // 0x1b09e8: 0xc067f08  jal         func_19FC20
label_1b09ec:
    if (ctx->pc == 0x1B09ECu) {
        ctx->pc = 0x1B09F0u;
        goto label_1b09f0;
    }
    ctx->pc = 0x1B09E8u;
    SET_GPR_U32(ctx, 31, 0x1B09F0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1B09E8u, 0x1B09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09F0u;
label_1b09f0:
    // 0x1b09f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b09f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b09f4:
    // 0x1b09f4: 0xc067f0c  jal         func_19FC30
label_1b09f8:
    if (ctx->pc == 0x1B09F8u) {
        ctx->pc = 0x1B09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09F4u;
        // 0x1b09f8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09FCu;
        goto label_1b09fc;
    }
    ctx->pc = 0x1B09F4u;
    SET_GPR_U32(ctx, 31, 0x1B09FCu);
    ctx->pc = 0x1B09F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B09F4u;
    // 0x1b09f8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x1B09F4u, 0x1B09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09FCu;
label_1b09fc:
    // 0x1b09fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b09fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b0a00:
    // 0x1b0a00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b0a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a04:
    // 0x1b0a04: 0xa28202f1  sb          $v0, 0x2F1($s4)
    ctx->pc = 0x1b0a04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 753), (uint8_t)GPR_U32(ctx, 2));
label_1b0a08:
    // 0x1b0a08: 0x24057a00  addiu       $a1, $zero, 0x7A00
    ctx->pc = 0x1b0a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31232));
label_1b0a0c:
    // 0x1b0a0c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b0a10:
    // 0x1b0a10: 0x24067340  addiu       $a2, $zero, 0x7340
    ctx->pc = 0x1b0a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29504));
label_1b0a14:
    // 0x1b0a14: 0x8c4728e4  lw          $a3, 0x28E4($v0)
    ctx->pc = 0x1b0a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
label_1b0a18:
    // 0x1b0a18: 0xc06bfc4  jal         func_1AFF10
label_1b0a1c:
    if (ctx->pc == 0x1B0A1Cu) {
        ctx->pc = 0x1B0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A18u;
        // 0x1b0a1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A20u;
        goto label_1b0a20;
    }
    ctx->pc = 0x1B0A18u;
    SET_GPR_U32(ctx, 31, 0x1B0A20u);
    ctx->pc = 0x1B0A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A18u;
    // 0x1b0a1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF10u, 0x1B0A18u, 0x1B0A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A20u;
label_1b0a20:
    // 0x1b0a20: 0x8e840100  lw          $a0, 0x100($s4)
    ctx->pc = 0x1b0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_1b0a24:
    // 0x1b0a24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b0a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b0a28:
    // 0x1b0a28: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b0a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b0a2c:
    // 0x1b0a2c: 0x320f809  jalr        $t9
label_1b0a30:
    if (ctx->pc == 0x1B0A30u) {
        ctx->pc = 0x1B0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A2Cu;
        // 0x1b0a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A34u;
        goto label_1b0a34;
    }
    ctx->pc = 0x1B0A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B0A34u);
        ctx->pc = 0x1B0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A2Cu;
        // 0x1b0a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A2Cu, 0x1B0A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0A34u;
label_1b0a34:
    // 0x1b0a34: 0x8e840108  lw          $a0, 0x108($s4)
    ctx->pc = 0x1b0a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_1b0a38:
    // 0x1b0a38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b0a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b0a3c:
    // 0x1b0a3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b0a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b0a40:
    // 0x1b0a40: 0x320f809  jalr        $t9
label_1b0a44:
    if (ctx->pc == 0x1B0A44u) {
        ctx->pc = 0x1B0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A40u;
        // 0x1b0a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A48u;
        goto label_1b0a48;
    }
    ctx->pc = 0x1B0A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B0A48u);
        ctx->pc = 0x1B0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A40u;
        // 0x1b0a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A40u, 0x1B0A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0A48u;
label_1b0a48:
    // 0x1b0a48: 0x928202ee  lbu         $v0, 0x2EE($s4)
    ctx->pc = 0x1b0a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 750)));
label_1b0a4c:
    // 0x1b0a4c: 0x10400188  beqz        $v0, . + 4 + (0x188 << 2)
label_1b0a50:
    if (ctx->pc == 0x1B0A50u) {
        ctx->pc = 0x1B0A54u;
        goto label_1b0a54;
    }
    ctx->pc = 0x1B0A4Cu;
    {
        const bool branch_taken_0x1b0a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a4c) {
            ctx->pc = 0x1B1070u;
            goto label_1b1070;
        }
    }
    ctx->pc = 0x1B0A54u;
label_1b0a54:
    // 0x1b0a54: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b0a58:
    // 0x1b0a58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b0a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1b0a5c:
    // 0x1b0a5c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b0a60:
    // 0x1b0a60: 0xdc462818  ld          $a2, 0x2818($v0)
    ctx->pc = 0x1b0a60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
label_1b0a64:
    // 0x1b0a64: 0xc061fa8  jal         func_187EA0
label_1b0a68:
    if (ctx->pc == 0x1B0A68u) {
        ctx->pc = 0x1B0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A64u;
        // 0x1b0a68: 0x24a50c68  addiu       $a1, $a1, 0xC68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A6Cu;
        goto label_1b0a6c;
    }
    ctx->pc = 0x1B0A64u;
    SET_GPR_U32(ctx, 31, 0x1B0A6Cu);
    ctx->pc = 0x1B0A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A64u;
    // 0x1b0a68: 0x24a50c68  addiu       $a1, $a1, 0xC68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B0A64u, 0x1B0A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A6Cu;
label_1b0a6c:
    // 0x1b0a6c: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b0a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b0a70:
    // 0x1b0a70: 0x24117100  addiu       $s1, $zero, 0x7100
    ctx->pc = 0x1b0a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
label_1b0a74:
    // 0x1b0a74: 0x8e95011c  lw          $s5, 0x11C($s4)
    ctx->pc = 0x1b0a74u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b0a78:
    // 0x1b0a78: 0xc04b7b4  jal         func_12DED0
label_1b0a7c:
    if (ctx->pc == 0x1B0A7Cu) {
        ctx->pc = 0x1B0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A78u;
        // 0x1b0a7c: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A80u;
        goto label_1b0a80;
    }
    ctx->pc = 0x1B0A78u;
    SET_GPR_U32(ctx, 31, 0x1B0A80u);
    ctx->pc = 0x1B0A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A78u;
    // 0x1b0a7c: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B0A78u, 0x1B0A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A80u;
label_1b0a80:
    // 0x1b0a80: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1b0a84:
    if (ctx->pc == 0x1B0A84u) {
        ctx->pc = 0x1B0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A80u;
        // 0x1b0a84: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A88u;
        goto label_1b0a88;
    }
    ctx->pc = 0x1B0A80u;
    {
        const bool branch_taken_0x1b0a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A80u;
        // 0x1b0a84: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a80) {
            ctx->pc = 0x1B0BFCu;
            goto label_1b0bfc;
        }
    }
    ctx->pc = 0x1B0A88u;
label_1b0a88:
    // 0x1b0a88: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b0a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b0a8c:
    // 0x1b0a8c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1b0a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1b0a90:
    // 0x1b0a90: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b0a94:
    // 0x1b0a94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b0a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a98:
    // 0x1b0a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a9c:
    // 0x1b0a9c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1b0aa0:
    // 0x1b0aa0: 0xc04b7dc  jal         func_12DF70
label_1b0aa4:
    if (ctx->pc == 0x1B0AA4u) {
        ctx->pc = 0x1B0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AA0u;
        // 0x1b0aa4: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0AA8u;
        goto label_1b0aa8;
    }
    ctx->pc = 0x1B0AA0u;
    SET_GPR_U32(ctx, 31, 0x1B0AA8u);
    ctx->pc = 0x1B0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0AA0u;
    // 0x1b0aa4: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B0AA0u, 0x1B0AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0AA8u;
label_1b0aa8:
    // 0x1b0aa8: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1b0aac:
    // 0x1b0aac: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x1b0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1b0ab0:
    // 0x1b0ab0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b0ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0ab4:
    // 0x1b0ab4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b0ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0ab8:
    // 0x1b0ab8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0abc:
    // 0x1b0abc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b0abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0ac0:
    // 0x1b0ac0: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b0ac0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b0ac4:
    // 0x1b0ac4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b0ac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b0ac8:
    // 0x1b0ac8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b0ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b0acc:
    // 0x1b0acc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b0accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1b0ad0:
    // 0x1b0ad0: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b0ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0ad4:
    // 0x1b0ad4: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b0ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0ad8:
    // 0x1b0ad8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b0ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0adc:
    // 0x1b0adc: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b0adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0ae0:
    // 0x1b0ae0: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b0ae0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1b0ae4:
    // 0x1b0ae4: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b0ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1b0ae8:
    // 0x1b0ae8: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b0ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1b0aec:
    // 0x1b0aec: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b0af0:
    if (ctx->pc == 0x1B0AF0u) {
        ctx->pc = 0x1B0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AECu;
        // 0x1b0af0: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0AF4u;
        goto label_1b0af4;
    }
    ctx->pc = 0x1B0AECu;
    {
        const bool branch_taken_0x1b0aec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AECu;
        // 0x1b0af0: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0aec) {
            ctx->pc = 0x1B0B40u;
            goto label_1b0b40;
        }
    }
    ctx->pc = 0x1B0AF4u;
label_1b0af4:
    // 0x1b0af4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0af8:
    // 0x1b0af8: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0afc:
    // 0x1b0afc: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0b00:
    // 0x1b0b00: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0b04:
    // 0x1b0b04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0b08:
    // 0x1b0b08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0b0c:
    if (ctx->pc == 0x1B0B0Cu) {
        ctx->pc = 0x1B0B10u;
        goto label_1b0b10;
    }
    ctx->pc = 0x1B0B08u;
    {
        const bool branch_taken_0x1b0b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b08) {
            ctx->pc = 0x1B0B1Cu;
            goto label_1b0b1c;
        }
    }
    ctx->pc = 0x1B0B10u;
label_1b0b10:
    // 0x1b0b10: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b0b14:
    // 0x1b0b14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0b18:
    // 0x1b0b18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0b1c:
    // 0x1b0b1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0b20:
    if (ctx->pc == 0x1B0B20u) {
        ctx->pc = 0x1B0B24u;
        goto label_1b0b24;
    }
    ctx->pc = 0x1B0B1Cu;
    {
        const bool branch_taken_0x1b0b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b1c) {
            ctx->pc = 0x1B0B30u;
            goto label_1b0b30;
        }
    }
    ctx->pc = 0x1B0B24u;
label_1b0b24:
    // 0x1b0b24: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0b28:
    // 0x1b0b28: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x1b0b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_1b0b2c:
    // 0x1b0b2c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0b30:
    // 0x1b0b30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b0b34:
    if (ctx->pc == 0x1B0B34u) {
        ctx->pc = 0x1B0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B30u;
        // 0x1b0b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B38u;
        goto label_1b0b38;
    }
    ctx->pc = 0x1B0B30u;
    {
        const bool branch_taken_0x1b0b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B30u;
        // 0x1b0b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b30) {
            ctx->pc = 0x1B0B40u;
            goto label_1b0b40;
        }
    }
    ctx->pc = 0x1B0B38u;
label_1b0b38:
    // 0x1b0b38: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0b3c:
    if (ctx->pc == 0x1B0B3Cu) {
        ctx->pc = 0x1B0B40u;
        goto label_1b0b40;
    }
    ctx->pc = 0x1B0B38u;
    {
        const bool branch_taken_0x1b0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b38) {
            ctx->pc = 0x1B0B44u;
            goto label_1b0b44;
        }
    }
    ctx->pc = 0x1B0B40u;
label_1b0b40:
    // 0x1b0b40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b44:
    // 0x1b0b44: 0x0  nop
    ctx->pc = 0x1b0b44u;
    // NOP
label_1b0b48:
    // 0x1b0b48: 0x8fb301b8  lw          $s3, 0x1B8($sp)
    ctx->pc = 0x1b0b48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_1b0b4c:
    // 0x1b0b4c: 0xc06d130  jal         func_1B44C0
label_1b0b50:
    if (ctx->pc == 0x1B0B50u) {
        ctx->pc = 0x1B0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B4Cu;
        // 0x1b0b50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B54u;
        goto label_1b0b54;
    }
    ctx->pc = 0x1B0B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B0B54u);
    ctx->pc = 0x1B0B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B4Cu;
    // 0x1b0b50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0B4Cu, 0x1B0B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B54u;
label_1b0b54:
    // 0x1b0b54: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b0b58:
    if (ctx->pc == 0x1B0B58u) {
        ctx->pc = 0x1B0B5Cu;
        goto label_1b0b5c;
    }
    ctx->pc = 0x1B0B54u;
    {
        const bool branch_taken_0x1b0b54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b54) {
            ctx->pc = 0x1B0BA8u;
            goto label_1b0ba8;
        }
    }
    ctx->pc = 0x1B0B5Cu;
label_1b0b5c:
    // 0x1b0b5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0b60:
    // 0x1b0b60: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0b64:
    // 0x1b0b64: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0b68:
    // 0x1b0b68: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0b6c:
    // 0x1b0b6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0b70:
    // 0x1b0b70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0b74:
    if (ctx->pc == 0x1B0B74u) {
        ctx->pc = 0x1B0B78u;
        goto label_1b0b78;
    }
    ctx->pc = 0x1B0B70u;
    {
        const bool branch_taken_0x1b0b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b70) {
            ctx->pc = 0x1B0B84u;
            goto label_1b0b84;
        }
    }
    ctx->pc = 0x1B0B78u;
label_1b0b78:
    // 0x1b0b78: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b0b7c:
    // 0x1b0b7c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0b80:
    // 0x1b0b80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0b84:
    // 0x1b0b84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0b88:
    if (ctx->pc == 0x1B0B88u) {
        ctx->pc = 0x1B0B8Cu;
        goto label_1b0b8c;
    }
    ctx->pc = 0x1B0B84u;
    {
        const bool branch_taken_0x1b0b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b84) {
            ctx->pc = 0x1B0B98u;
            goto label_1b0b98;
        }
    }
    ctx->pc = 0x1B0B8Cu;
label_1b0b8c:
    // 0x1b0b8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0b90:
    // 0x1b0b90: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x1b0b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_1b0b94:
    // 0x1b0b94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0b98:
    // 0x1b0b98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b0b9c:
    if (ctx->pc == 0x1B0B9Cu) {
        ctx->pc = 0x1B0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B98u;
        // 0x1b0b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BA0u;
        goto label_1b0ba0;
    }
    ctx->pc = 0x1B0B98u;
    {
        const bool branch_taken_0x1b0b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B98u;
        // 0x1b0b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b98) {
            ctx->pc = 0x1B0BA8u;
            goto label_1b0ba8;
        }
    }
    ctx->pc = 0x1B0BA0u;
label_1b0ba0:
    // 0x1b0ba0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0ba4:
    if (ctx->pc == 0x1B0BA4u) {
        ctx->pc = 0x1B0BA8u;
        goto label_1b0ba8;
    }
    ctx->pc = 0x1B0BA0u;
    {
        const bool branch_taken_0x1b0ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ba0) {
            ctx->pc = 0x1B0BACu;
            goto label_1b0bac;
        }
    }
    ctx->pc = 0x1B0BA8u;
label_1b0ba8:
    // 0x1b0ba8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0bac:
    // 0x1b0bac: 0x0  nop
    ctx->pc = 0x1b0bacu;
    // NOP
label_1b0bb0:
    // 0x1b0bb0: 0xc06d14c  jal         func_1B4530
label_1b0bb4:
    if (ctx->pc == 0x1B0BB4u) {
        ctx->pc = 0x1B0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BB0u;
        // 0x1b0bb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BB8u;
        goto label_1b0bb8;
    }
    ctx->pc = 0x1B0BB0u;
    SET_GPR_U32(ctx, 31, 0x1B0BB8u);
    ctx->pc = 0x1B0BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BB0u;
    // 0x1b0bb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0BB0u, 0x1B0BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BB8u;
label_1b0bb8:
    // 0x1b0bb8: 0x24090180  addiu       $t1, $zero, 0x180
    ctx->pc = 0x1b0bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1b0bbc:
    // 0x1b0bbc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1b0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1b0bc0:
    // 0x1b0bc0: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x1b0bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
label_1b0bc4:
    // 0x1b0bc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b0bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0bc8:
    // 0x1b0bc8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b0bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1b0bcc:
    // 0x1b0bcc: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b0bd0:
    // 0x1b0bd0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b0bd4:
    // 0x1b0bd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b0bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0bd8:
    // 0x1b0bd8: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b0bdc:
    // 0x1b0bdc: 0x240774c0  addiu       $a3, $zero, 0x74C0
    ctx->pc = 0x1b0bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29888));
label_1b0be0:
    // 0x1b0be0: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1b0be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1b0be4:
    // 0x1b0be4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b0be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b0be8:
    // 0x1b0be8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b0be8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0bec:
    // 0x1b0bec: 0xc06be8c  jal         func_1AFA30
label_1b0bf0:
    if (ctx->pc == 0x1B0BF0u) {
        ctx->pc = 0x1B0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BECu;
        // 0x1b0bf0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BF4u;
        goto label_1b0bf4;
    }
    ctx->pc = 0x1B0BECu;
    SET_GPR_U32(ctx, 31, 0x1B0BF4u);
    ctx->pc = 0x1B0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BECu;
    // 0x1b0bf0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B0BECu, 0x1B0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BF4u;
label_1b0bf4:
    // 0x1b0bf4: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x1b0bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1b0bf8:
    // 0x1b0bf8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1b0bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1b0bfc:
    // 0x1b0bfc: 0x0  nop
    ctx->pc = 0x1b0bfcu;
    // NOP
label_1b0c00:
    // 0x1b0c00: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b0c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0c04:
    // 0x1b0c04: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
label_1b0c08:
    if (ctx->pc == 0x1B0C08u) {
        ctx->pc = 0x1B0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C04u;
        // 0x1b0c08: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C0Cu;
        goto label_1b0c0c;
    }
    ctx->pc = 0x1B0C04u;
    {
        const bool branch_taken_0x1b0c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C04u;
        // 0x1b0c08: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c04) {
            ctx->pc = 0x1B0A8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0a8c;
        }
    }
    ctx->pc = 0x1B0C0Cu;
label_1b0c0c:
    // 0x1b0c0c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b0c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b0c10:
    // 0x1b0c10: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_1b0c14:
    if (ctx->pc == 0x1B0C14u) {
        ctx->pc = 0x1B0C18u;
        goto label_1b0c18;
    }
    ctx->pc = 0x1B0C10u;
    {
        const bool branch_taken_0x1b0c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c10) {
            ctx->pc = 0x1B0A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0a88;
        }
    }
    ctx->pc = 0x1B0C18u;
label_1b0c18:
    // 0x1b0c18: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x1b0c18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1b0c1c:
    // 0x1b0c1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0c20:
    // 0x1b0c20: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b0c20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b0c24:
    // 0x1b0c24: 0x8e93011c  lw          $s3, 0x11C($s4)
    ctx->pc = 0x1b0c24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b0c28:
    // 0x1b0c28: 0x92230063  lbu         $v1, 0x63($s1)
    ctx->pc = 0x1b0c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
label_1b0c2c:
    // 0x1b0c2c: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x1b0c2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
label_1b0c30:
    // 0x1b0c30: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b0c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
label_1b0c34:
    // 0x1b0c34: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b0c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_1b0c38:
    // 0x1b0c38: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b0c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
label_1b0c3c:
    // 0x1b0c3c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b0c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
label_1b0c40:
    // 0x1b0c40: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_1b0c44:
    // 0x1b0c44: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_1b0c48:
    // 0x1b0c48: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x1b0c48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1b0c4c:
    // 0x1b0c4c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b0c50:
    if (ctx->pc == 0x1B0C50u) {
        ctx->pc = 0x1B0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C4Cu;
        // 0x1b0c50: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C54u;
        goto label_1b0c54;
    }
    ctx->pc = 0x1B0C4Cu;
    {
        const bool branch_taken_0x1b0c4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C4Cu;
        // 0x1b0c50: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c4c) {
            ctx->pc = 0x1B0CA0u;
            goto label_1b0ca0;
        }
    }
    ctx->pc = 0x1B0C54u;
label_1b0c54:
    // 0x1b0c54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0c58:
    // 0x1b0c58: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0c5c:
    // 0x1b0c5c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0c60:
    // 0x1b0c60: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0c64:
    // 0x1b0c64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0c68:
    // 0x1b0c68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0c6c:
    if (ctx->pc == 0x1B0C6Cu) {
        ctx->pc = 0x1B0C70u;
        goto label_1b0c70;
    }
    ctx->pc = 0x1B0C68u;
    {
        const bool branch_taken_0x1b0c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c68) {
            ctx->pc = 0x1B0C7Cu;
            goto label_1b0c7c;
        }
    }
    ctx->pc = 0x1B0C70u;
label_1b0c70:
    // 0x1b0c70: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b0c74:
    // 0x1b0c74: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0c78:
    // 0x1b0c78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0c7c:
    // 0x1b0c7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0c80:
    if (ctx->pc == 0x1B0C80u) {
        ctx->pc = 0x1B0C84u;
        goto label_1b0c84;
    }
    ctx->pc = 0x1B0C7Cu;
    {
        const bool branch_taken_0x1b0c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c7c) {
            ctx->pc = 0x1B0C90u;
            goto label_1b0c90;
        }
    }
    ctx->pc = 0x1B0C84u;
label_1b0c84:
    // 0x1b0c84: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0c88:
    // 0x1b0c88: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x1b0c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
label_1b0c8c:
    // 0x1b0c8c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0c90:
    // 0x1b0c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0c94:
    if (ctx->pc == 0x1B0C94u) {
        ctx->pc = 0x1B0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C90u;
        // 0x1b0c94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C98u;
        goto label_1b0c98;
    }
    ctx->pc = 0x1B0C90u;
    {
        const bool branch_taken_0x1b0c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C90u;
        // 0x1b0c94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c90) {
            ctx->pc = 0x1B0CA4u;
            goto label_1b0ca4;
        }
    }
    ctx->pc = 0x1B0C98u;
label_1b0c98:
    // 0x1b0c98: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0c9c:
    if (ctx->pc == 0x1B0C9Cu) {
        ctx->pc = 0x1B0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C98u;
        // 0x1b0c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CA0u;
        goto label_1b0ca0;
    }
    ctx->pc = 0x1B0C98u;
    {
        const bool branch_taken_0x1b0c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C98u;
        // 0x1b0c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c98) {
            ctx->pc = 0x1B0CA4u;
            goto label_1b0ca4;
        }
    }
    ctx->pc = 0x1B0CA0u;
label_1b0ca0:
    // 0x1b0ca0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ca4:
    // 0x1b0ca4: 0xc06d130  jal         func_1B44C0
label_1b0ca8:
    if (ctx->pc == 0x1B0CA8u) {
        ctx->pc = 0x1B0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CA4u;
        // 0x1b0ca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CACu;
        goto label_1b0cac;
    }
    ctx->pc = 0x1B0CA4u;
    SET_GPR_U32(ctx, 31, 0x1B0CACu);
    ctx->pc = 0x1B0CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CA4u;
    // 0x1b0ca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0CA4u, 0x1B0CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CACu;
label_1b0cac:
    // 0x1b0cac: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b0cb0:
    if (ctx->pc == 0x1B0CB0u) {
        ctx->pc = 0x1B0CB4u;
        goto label_1b0cb4;
    }
    ctx->pc = 0x1B0CACu;
    {
        const bool branch_taken_0x1b0cac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cac) {
            ctx->pc = 0x1B0D00u;
            goto label_1b0d00;
        }
    }
    ctx->pc = 0x1B0CB4u;
label_1b0cb4:
    // 0x1b0cb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0cb8:
    // 0x1b0cb8: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0cbc:
    // 0x1b0cbc: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0cc0:
    // 0x1b0cc0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0cc4:
    // 0x1b0cc4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0cc8:
    // 0x1b0cc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0ccc:
    if (ctx->pc == 0x1B0CCCu) {
        ctx->pc = 0x1B0CD0u;
        goto label_1b0cd0;
    }
    ctx->pc = 0x1B0CC8u;
    {
        const bool branch_taken_0x1b0cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cc8) {
            ctx->pc = 0x1B0CDCu;
            goto label_1b0cdc;
        }
    }
    ctx->pc = 0x1B0CD0u;
label_1b0cd0:
    // 0x1b0cd0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b0cd4:
    // 0x1b0cd4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0cd8:
    // 0x1b0cd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0cdc:
    // 0x1b0cdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0ce0:
    if (ctx->pc == 0x1B0CE0u) {
        ctx->pc = 0x1B0CE4u;
        goto label_1b0ce4;
    }
    ctx->pc = 0x1B0CDCu;
    {
        const bool branch_taken_0x1b0cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cdc) {
            ctx->pc = 0x1B0CF0u;
            goto label_1b0cf0;
        }
    }
    ctx->pc = 0x1B0CE4u;
label_1b0ce4:
    // 0x1b0ce4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0ce8:
    // 0x1b0ce8: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x1b0ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
label_1b0cec:
    // 0x1b0cec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0cf0:
    // 0x1b0cf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b0cf4:
    if (ctx->pc == 0x1B0CF4u) {
        ctx->pc = 0x1B0CF8u;
        goto label_1b0cf8;
    }
    ctx->pc = 0x1B0CF0u;
    {
        const bool branch_taken_0x1b0cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cf0) {
            ctx->pc = 0x1B0D00u;
            goto label_1b0d00;
        }
    }
    ctx->pc = 0x1B0CF8u;
label_1b0cf8:
    // 0x1b0cf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b0cfc:
    if (ctx->pc == 0x1B0CFCu) {
        ctx->pc = 0x1B0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CF8u;
        // 0x1b0cfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D00u;
        goto label_1b0d00;
    }
    ctx->pc = 0x1B0CF8u;
    {
        const bool branch_taken_0x1b0cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CF8u;
        // 0x1b0cfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cf8) {
            ctx->pc = 0x1B0D08u;
            goto label_1b0d08;
        }
    }
    ctx->pc = 0x1B0D00u;
label_1b0d00:
    // 0x1b0d00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b0d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d04:
    // 0x1b0d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d08:
    // 0x1b0d08: 0xc06d14c  jal         func_1B4530
label_1b0d0c:
    if (ctx->pc == 0x1B0D0Cu) {
        ctx->pc = 0x1B0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D08u;
        // 0x1b0d0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D10u;
        goto label_1b0d10;
    }
    ctx->pc = 0x1B0D08u;
    SET_GPR_U32(ctx, 31, 0x1B0D10u);
    ctx->pc = 0x1B0D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D08u;
    // 0x1b0d0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0D08u, 0x1B0D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D10u;
label_1b0d10:
    // 0x1b0d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b0d14:
    // 0x1b0d14: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b0d18:
    // 0x1b0d18: 0x24080180  addiu       $t0, $zero, 0x180
    ctx->pc = 0x1b0d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1b0d1c:
    // 0x1b0d1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d20:
    // 0x1b0d20: 0xffb50008  sd          $s5, 0x8($sp)
    ctx->pc = 0x1b0d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 21));
label_1b0d24:
    // 0x1b0d24: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b0d28:
    // 0x1b0d28: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b0d2c:
    // 0x1b0d2c: 0x24067b80  addiu       $a2, $zero, 0x7B80
    ctx->pc = 0x1b0d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31616));
label_1b0d30:
    // 0x1b0d30: 0x240774c0  addiu       $a3, $zero, 0x74C0
    ctx->pc = 0x1b0d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29888));
label_1b0d34:
    // 0x1b0d34: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1b0d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d38:
    // 0x1b0d38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b0d38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d3c:
    // 0x1b0d3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b0d3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d40:
    // 0x1b0d40: 0xc06be8c  jal         func_1AFA30
label_1b0d44:
    if (ctx->pc == 0x1B0D44u) {
        ctx->pc = 0x1B0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D40u;
        // 0x1b0d44: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D48u;
        goto label_1b0d48;
    }
    ctx->pc = 0x1B0D40u;
    SET_GPR_U32(ctx, 31, 0x1B0D48u);
    ctx->pc = 0x1B0D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D40u;
    // 0x1b0d44: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B0D40u, 0x1B0D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D48u;
label_1b0d48:
    // 0x1b0d48: 0x8e910008  lw          $s1, 0x8($s4)
    ctx->pc = 0x1b0d48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1b0d4c:
    // 0x1b0d4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0d50:
    // 0x1b0d50: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b0d50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b0d54:
    // 0x1b0d54: 0x8e93011c  lw          $s3, 0x11C($s4)
    ctx->pc = 0x1b0d54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b0d58:
    // 0x1b0d58: 0x92230063  lbu         $v1, 0x63($s1)
    ctx->pc = 0x1b0d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
label_1b0d5c:
    // 0x1b0d5c: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x1b0d5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
label_1b0d60:
    // 0x1b0d60: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x1b0d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
label_1b0d64:
    // 0x1b0d64: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b0d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_1b0d68:
    // 0x1b0d68: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1b0d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
label_1b0d6c:
    // 0x1b0d6c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b0d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
label_1b0d70:
    // 0x1b0d70: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1b0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_1b0d74:
    // 0x1b0d74: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_1b0d78:
    // 0x1b0d78: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x1b0d78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1b0d7c:
    // 0x1b0d7c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b0d80:
    if (ctx->pc == 0x1B0D80u) {
        ctx->pc = 0x1B0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D7Cu;
        // 0x1b0d80: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D84u;
        goto label_1b0d84;
    }
    ctx->pc = 0x1B0D7Cu;
    {
        const bool branch_taken_0x1b0d7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D7Cu;
        // 0x1b0d80: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d7c) {
            ctx->pc = 0x1B0DD0u;
            goto label_1b0dd0;
        }
    }
    ctx->pc = 0x1B0D84u;
label_1b0d84:
    // 0x1b0d84: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0d88:
    // 0x1b0d88: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0d8c:
    // 0x1b0d8c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0d90:
    // 0x1b0d90: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0d94:
    // 0x1b0d94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0d98:
    // 0x1b0d98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0d9c:
    if (ctx->pc == 0x1B0D9Cu) {
        ctx->pc = 0x1B0DA0u;
        goto label_1b0da0;
    }
    ctx->pc = 0x1B0D98u;
    {
        const bool branch_taken_0x1b0d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0d98) {
            ctx->pc = 0x1B0DACu;
            goto label_1b0dac;
        }
    }
    ctx->pc = 0x1B0DA0u;
label_1b0da0:
    // 0x1b0da0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b0da4:
    // 0x1b0da4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0da8:
    // 0x1b0da8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0dac:
    // 0x1b0dac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0db0:
    if (ctx->pc == 0x1B0DB0u) {
        ctx->pc = 0x1B0DB4u;
        goto label_1b0db4;
    }
    ctx->pc = 0x1B0DACu;
    {
        const bool branch_taken_0x1b0dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0dac) {
            ctx->pc = 0x1B0DC0u;
            goto label_1b0dc0;
        }
    }
    ctx->pc = 0x1B0DB4u;
label_1b0db4:
    // 0x1b0db4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0db8:
    // 0x1b0db8: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x1b0db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
label_1b0dbc:
    // 0x1b0dbc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0dc0:
    // 0x1b0dc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0dc4:
    if (ctx->pc == 0x1B0DC4u) {
        ctx->pc = 0x1B0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DC0u;
        // 0x1b0dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DC8u;
        goto label_1b0dc8;
    }
    ctx->pc = 0x1B0DC0u;
    {
        const bool branch_taken_0x1b0dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DC0u;
        // 0x1b0dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dc0) {
            ctx->pc = 0x1B0DD4u;
            goto label_1b0dd4;
        }
    }
    ctx->pc = 0x1B0DC8u;
label_1b0dc8:
    // 0x1b0dc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0dcc:
    if (ctx->pc == 0x1B0DCCu) {
        ctx->pc = 0x1B0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DC8u;
        // 0x1b0dcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DD0u;
        goto label_1b0dd0;
    }
    ctx->pc = 0x1B0DC8u;
    {
        const bool branch_taken_0x1b0dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DC8u;
        // 0x1b0dcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dc8) {
            ctx->pc = 0x1B0DD4u;
            goto label_1b0dd4;
        }
    }
    ctx->pc = 0x1B0DD0u;
label_1b0dd0:
    // 0x1b0dd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dd4:
    // 0x1b0dd4: 0xc06d130  jal         func_1B44C0
label_1b0dd8:
    if (ctx->pc == 0x1B0DD8u) {
        ctx->pc = 0x1B0DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DD4u;
        // 0x1b0dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DDCu;
        goto label_1b0ddc;
    }
    ctx->pc = 0x1B0DD4u;
    SET_GPR_U32(ctx, 31, 0x1B0DDCu);
    ctx->pc = 0x1B0DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DD4u;
    // 0x1b0dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0DD4u, 0x1B0DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DDCu;
label_1b0ddc:
    // 0x1b0ddc: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b0de0:
    if (ctx->pc == 0x1B0DE0u) {
        ctx->pc = 0x1B0DE4u;
        goto label_1b0de4;
    }
    ctx->pc = 0x1B0DDCu;
    {
        const bool branch_taken_0x1b0ddc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ddc) {
            ctx->pc = 0x1B0E30u;
            goto label_1b0e30;
        }
    }
    ctx->pc = 0x1B0DE4u;
label_1b0de4:
    // 0x1b0de4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0de8:
    // 0x1b0de8: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0dec:
    // 0x1b0dec: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0df0:
    // 0x1b0df0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0df4:
    // 0x1b0df4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0df8:
    // 0x1b0df8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0dfc:
    if (ctx->pc == 0x1B0DFCu) {
        ctx->pc = 0x1B0E00u;
        goto label_1b0e00;
    }
    ctx->pc = 0x1B0DF8u;
    {
        const bool branch_taken_0x1b0df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0df8) {
            ctx->pc = 0x1B0E0Cu;
            goto label_1b0e0c;
        }
    }
    ctx->pc = 0x1B0E00u;
label_1b0e00:
    // 0x1b0e00: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b0e04:
    // 0x1b0e04: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0e08:
    // 0x1b0e08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0e0c:
    // 0x1b0e0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0e10:
    if (ctx->pc == 0x1B0E10u) {
        ctx->pc = 0x1B0E14u;
        goto label_1b0e14;
    }
    ctx->pc = 0x1B0E0Cu;
    {
        const bool branch_taken_0x1b0e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e0c) {
            ctx->pc = 0x1B0E20u;
            goto label_1b0e20;
        }
    }
    ctx->pc = 0x1B0E14u;
label_1b0e14:
    // 0x1b0e14: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0e18:
    // 0x1b0e18: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x1b0e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
label_1b0e1c:
    // 0x1b0e1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0e20:
    // 0x1b0e20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b0e24:
    if (ctx->pc == 0x1B0E24u) {
        ctx->pc = 0x1B0E28u;
        goto label_1b0e28;
    }
    ctx->pc = 0x1B0E20u;
    {
        const bool branch_taken_0x1b0e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e20) {
            ctx->pc = 0x1B0E30u;
            goto label_1b0e30;
        }
    }
    ctx->pc = 0x1B0E28u;
label_1b0e28:
    // 0x1b0e28: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b0e2c:
    if (ctx->pc == 0x1B0E2Cu) {
        ctx->pc = 0x1B0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E28u;
        // 0x1b0e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E30u;
        goto label_1b0e30;
    }
    ctx->pc = 0x1B0E28u;
    {
        const bool branch_taken_0x1b0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E28u;
        // 0x1b0e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e28) {
            ctx->pc = 0x1B0E38u;
            goto label_1b0e38;
        }
    }
    ctx->pc = 0x1B0E30u;
label_1b0e30:
    // 0x1b0e30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b0e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e34:
    // 0x1b0e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e38:
    // 0x1b0e38: 0xc06d14c  jal         func_1B4530
label_1b0e3c:
    if (ctx->pc == 0x1B0E3Cu) {
        ctx->pc = 0x1B0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E38u;
        // 0x1b0e3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E40u;
        goto label_1b0e40;
    }
    ctx->pc = 0x1B0E38u;
    SET_GPR_U32(ctx, 31, 0x1B0E40u);
    ctx->pc = 0x1B0E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E38u;
    // 0x1b0e3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0E38u, 0x1B0E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E40u;
label_1b0e40:
    // 0x1b0e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b0e44:
    // 0x1b0e44: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b0e48:
    // 0x1b0e48: 0x24080180  addiu       $t0, $zero, 0x180
    ctx->pc = 0x1b0e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1b0e4c:
    // 0x1b0e4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e50:
    // 0x1b0e50: 0xffb50008  sd          $s5, 0x8($sp)
    ctx->pc = 0x1b0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 21));
label_1b0e54:
    // 0x1b0e54: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b0e58:
    // 0x1b0e58: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b0e5c:
    // 0x1b0e5c: 0x24067d00  addiu       $a2, $zero, 0x7D00
    ctx->pc = 0x1b0e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
label_1b0e60:
    // 0x1b0e60: 0x240774c0  addiu       $a3, $zero, 0x74C0
    ctx->pc = 0x1b0e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29888));
label_1b0e64:
    // 0x1b0e64: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1b0e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e68:
    // 0x1b0e68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b0e68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e6c:
    // 0x1b0e6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b0e6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e70:
    // 0x1b0e70: 0xc06be8c  jal         func_1AFA30
label_1b0e74:
    if (ctx->pc == 0x1B0E74u) {
        ctx->pc = 0x1B0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E70u;
        // 0x1b0e74: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E78u;
        goto label_1b0e78;
    }
    ctx->pc = 0x1B0E70u;
    SET_GPR_U32(ctx, 31, 0x1B0E78u);
    ctx->pc = 0x1B0E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E70u;
    // 0x1b0e74: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B0E70u, 0x1B0E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E78u;
label_1b0e78:
    // 0x1b0e78: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b0e7c:
    // 0x1b0e7c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b0e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1b0e80:
    // 0x1b0e80: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b0e84:
    // 0x1b0e84: 0x8c4628e4  lw          $a2, 0x28E4($v0)
    ctx->pc = 0x1b0e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
label_1b0e88:
    // 0x1b0e88: 0xc061fa8  jal         func_187EA0
label_1b0e8c:
    if (ctx->pc == 0x1B0E8Cu) {
        ctx->pc = 0x1B0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E88u;
        // 0x1b0e8c: 0x24a50c38  addiu       $a1, $a1, 0xC38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E90u;
        goto label_1b0e90;
    }
    ctx->pc = 0x1B0E88u;
    SET_GPR_U32(ctx, 31, 0x1B0E90u);
    ctx->pc = 0x1B0E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E88u;
    // 0x1b0e8c: 0x24a50c38  addiu       $a1, $a1, 0xC38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B0E88u, 0x1B0E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E90u;
label_1b0e90:
    // 0x1b0e90: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b0e90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b0e94:
    // 0x1b0e94: 0x24117dc0  addiu       $s1, $zero, 0x7DC0
    ctx->pc = 0x1b0e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32192));
label_1b0e98:
    // 0x1b0e98: 0x8e95011c  lw          $s5, 0x11C($s4)
    ctx->pc = 0x1b0e98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b0e9c:
    // 0x1b0e9c: 0xc04b7b4  jal         func_12DED0
label_1b0ea0:
    if (ctx->pc == 0x1B0EA0u) {
        ctx->pc = 0x1B0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E9Cu;
        // 0x1b0ea0: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EA4u;
        goto label_1b0ea4;
    }
    ctx->pc = 0x1B0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B0EA4u);
    ctx->pc = 0x1B0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E9Cu;
    // 0x1b0ea0: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B0E9Cu, 0x1B0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EA4u;
label_1b0ea4:
    // 0x1b0ea4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1b0ea8:
    if (ctx->pc == 0x1B0EA8u) {
        ctx->pc = 0x1B0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EA4u;
        // 0x1b0ea8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EACu;
        goto label_1b0eac;
    }
    ctx->pc = 0x1B0EA4u;
    {
        const bool branch_taken_0x1b0ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EA4u;
        // 0x1b0ea8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ea4) {
            ctx->pc = 0x1B1024u;
            goto label_1b1024;
        }
    }
    ctx->pc = 0x1B0EACu;
label_1b0eac:
    // 0x1b0eac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b0eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b0eb0:
    // 0x1b0eb0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1b0eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1b0eb4:
    // 0x1b0eb4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b0eb8:
    // 0x1b0eb8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b0eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ebc:
    // 0x1b0ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ec0:
    // 0x1b0ec0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1b0ec4:
    // 0x1b0ec4: 0xc04b7dc  jal         func_12DF70
label_1b0ec8:
    if (ctx->pc == 0x1B0EC8u) {
        ctx->pc = 0x1B0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EC4u;
        // 0x1b0ec8: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0ECCu;
        goto label_1b0ecc;
    }
    ctx->pc = 0x1B0EC4u;
    SET_GPR_U32(ctx, 31, 0x1B0ECCu);
    ctx->pc = 0x1B0EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EC4u;
    // 0x1b0ec8: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B0EC4u, 0x1B0ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0ECCu;
label_1b0ecc:
    // 0x1b0ecc: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1b0ed0:
    // 0x1b0ed0: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x1b0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1b0ed4:
    // 0x1b0ed4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b0ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0ed8:
    // 0x1b0ed8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0edc:
    // 0x1b0edc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b0edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0ee0:
    // 0x1b0ee0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b0ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0ee4:
    // 0x1b0ee4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b0ee4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b0ee8:
    // 0x1b0ee8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b0ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b0eec:
    // 0x1b0eec: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b0eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b0ef0:
    // 0x1b0ef0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b0ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1b0ef4:
    // 0x1b0ef4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b0ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0ef8:
    // 0x1b0ef8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b0ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0efc:
    // 0x1b0efc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b0efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0f00:
    // 0x1b0f00: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b0f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0f04:
    // 0x1b0f04: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b0f04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1b0f08:
    // 0x1b0f08: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b0f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1b0f0c:
    // 0x1b0f0c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b0f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1b0f10:
    // 0x1b0f10: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b0f14:
    if (ctx->pc == 0x1B0F14u) {
        ctx->pc = 0x1B0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F10u;
        // 0x1b0f14: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F18u;
        goto label_1b0f18;
    }
    ctx->pc = 0x1B0F10u;
    {
        const bool branch_taken_0x1b0f10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F10u;
        // 0x1b0f14: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f10) {
            ctx->pc = 0x1B0F64u;
            goto label_1b0f64;
        }
    }
    ctx->pc = 0x1B0F18u;
label_1b0f18:
    // 0x1b0f18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0f1c:
    // 0x1b0f1c: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0f20:
    // 0x1b0f20: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0f24:
    // 0x1b0f24: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0f28:
    // 0x1b0f28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0f2c:
    // 0x1b0f2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0f30:
    if (ctx->pc == 0x1B0F30u) {
        ctx->pc = 0x1B0F34u;
        goto label_1b0f34;
    }
    ctx->pc = 0x1B0F2Cu;
    {
        const bool branch_taken_0x1b0f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f2c) {
            ctx->pc = 0x1B0F40u;
            goto label_1b0f40;
        }
    }
    ctx->pc = 0x1B0F34u;
label_1b0f34:
    // 0x1b0f34: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b0f38:
    // 0x1b0f38: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0f3c:
    // 0x1b0f3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0f40:
    // 0x1b0f40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0f44:
    if (ctx->pc == 0x1B0F44u) {
        ctx->pc = 0x1B0F48u;
        goto label_1b0f48;
    }
    ctx->pc = 0x1B0F40u;
    {
        const bool branch_taken_0x1b0f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f40) {
            ctx->pc = 0x1B0F54u;
            goto label_1b0f54;
        }
    }
    ctx->pc = 0x1B0F48u;
label_1b0f48:
    // 0x1b0f48: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0f4c:
    // 0x1b0f4c: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x1b0f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_1b0f50:
    // 0x1b0f50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0f54:
    // 0x1b0f54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b0f58:
    if (ctx->pc == 0x1B0F58u) {
        ctx->pc = 0x1B0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F54u;
        // 0x1b0f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F5Cu;
        goto label_1b0f5c;
    }
    ctx->pc = 0x1B0F54u;
    {
        const bool branch_taken_0x1b0f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F54u;
        // 0x1b0f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f54) {
            ctx->pc = 0x1B0F64u;
            goto label_1b0f64;
        }
    }
    ctx->pc = 0x1B0F5Cu;
label_1b0f5c:
    // 0x1b0f5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b0f60:
    if (ctx->pc == 0x1B0F60u) {
        ctx->pc = 0x1B0F64u;
        goto label_1b0f64;
    }
    ctx->pc = 0x1B0F5Cu;
    {
        const bool branch_taken_0x1b0f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f5c) {
            ctx->pc = 0x1B0F6Cu;
            goto label_1b0f6c;
        }
    }
    ctx->pc = 0x1B0F64u;
label_1b0f64:
    // 0x1b0f64: 0x0  nop
    ctx->pc = 0x1b0f64u;
    // NOP
label_1b0f68:
    // 0x1b0f68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f6c:
    // 0x1b0f6c: 0x0  nop
    ctx->pc = 0x1b0f6cu;
    // NOP
label_1b0f70:
    // 0x1b0f70: 0x8fb301f8  lw          $s3, 0x1F8($sp)
    ctx->pc = 0x1b0f70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_1b0f74:
    // 0x1b0f74: 0xc06d130  jal         func_1B44C0
label_1b0f78:
    if (ctx->pc == 0x1B0F78u) {
        ctx->pc = 0x1B0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F74u;
        // 0x1b0f78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F7Cu;
        goto label_1b0f7c;
    }
    ctx->pc = 0x1B0F74u;
    SET_GPR_U32(ctx, 31, 0x1B0F7Cu);
    ctx->pc = 0x1B0F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F74u;
    // 0x1b0f78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0F74u, 0x1B0F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F7Cu;
label_1b0f7c:
    // 0x1b0f7c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1b0f80:
    if (ctx->pc == 0x1B0F80u) {
        ctx->pc = 0x1B0F84u;
        goto label_1b0f84;
    }
    ctx->pc = 0x1B0F7Cu;
    {
        const bool branch_taken_0x1b0f7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f7c) {
            ctx->pc = 0x1B0FD0u;
            goto label_1b0fd0;
        }
    }
    ctx->pc = 0x1B0F84u;
label_1b0f84:
    // 0x1b0f84: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b0f88:
    // 0x1b0f88: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
label_1b0f8c:
    // 0x1b0f8c: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
label_1b0f90:
    // 0x1b0f90: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0f94:
    // 0x1b0f94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0f98:
    // 0x1b0f98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0f9c:
    if (ctx->pc == 0x1B0F9Cu) {
        ctx->pc = 0x1B0FA0u;
        goto label_1b0fa0;
    }
    ctx->pc = 0x1B0F98u;
    {
        const bool branch_taken_0x1b0f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f98) {
            ctx->pc = 0x1B0FACu;
            goto label_1b0fac;
        }
    }
    ctx->pc = 0x1B0FA0u;
label_1b0fa0:
    // 0x1b0fa0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1b0fa4:
    // 0x1b0fa4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b0fa8:
    // 0x1b0fa8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0fac:
    // 0x1b0fac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b0fb0:
    if (ctx->pc == 0x1B0FB0u) {
        ctx->pc = 0x1B0FB4u;
        goto label_1b0fb4;
    }
    ctx->pc = 0x1B0FACu;
    {
        const bool branch_taken_0x1b0fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0fac) {
            ctx->pc = 0x1B0FC0u;
            goto label_1b0fc0;
        }
    }
    ctx->pc = 0x1B0FB4u;
label_1b0fb4:
    // 0x1b0fb4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b0fb8:
    // 0x1b0fb8: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x1b0fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_1b0fbc:
    // 0x1b0fbc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b0fc0:
    // 0x1b0fc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b0fc4:
    if (ctx->pc == 0x1B0FC4u) {
        ctx->pc = 0x1B0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FC0u;
        // 0x1b0fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FC8u;
        goto label_1b0fc8;
    }
    ctx->pc = 0x1B0FC0u;
    {
        const bool branch_taken_0x1b0fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FC0u;
        // 0x1b0fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fc0) {
            ctx->pc = 0x1B0FD0u;
            goto label_1b0fd0;
        }
    }
    ctx->pc = 0x1B0FC8u;
label_1b0fc8:
    // 0x1b0fc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0fcc:
    if (ctx->pc == 0x1B0FCCu) {
        ctx->pc = 0x1B0FD0u;
        goto label_1b0fd0;
    }
    ctx->pc = 0x1B0FC8u;
    {
        const bool branch_taken_0x1b0fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0fc8) {
            ctx->pc = 0x1B0FD4u;
            goto label_1b0fd4;
        }
    }
    ctx->pc = 0x1B0FD0u;
label_1b0fd0:
    // 0x1b0fd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0fd4:
    // 0x1b0fd4: 0x0  nop
    ctx->pc = 0x1b0fd4u;
    // NOP
label_1b0fd8:
    // 0x1b0fd8: 0xc06d14c  jal         func_1B4530
label_1b0fdc:
    if (ctx->pc == 0x1B0FDCu) {
        ctx->pc = 0x1B0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FD8u;
        // 0x1b0fdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FE0u;
        goto label_1b0fe0;
    }
    ctx->pc = 0x1B0FD8u;
    SET_GPR_U32(ctx, 31, 0x1B0FE0u);
    ctx->pc = 0x1B0FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FD8u;
    // 0x1b0fdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0FD8u, 0x1B0FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FE0u;
label_1b0fe0:
    // 0x1b0fe0: 0x24090180  addiu       $t1, $zero, 0x180
    ctx->pc = 0x1b0fe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1b0fe4:
    // 0x1b0fe4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1b0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1b0fe8:
    // 0x1b0fe8: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x1b0fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
label_1b0fec:
    // 0x1b0fec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b0fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ff0:
    // 0x1b0ff0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b0ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1b0ff4:
    // 0x1b0ff4: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b0ff8:
    // 0x1b0ff8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b0ffc:
    // 0x1b0ffc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b0ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1000:
    // 0x1b1000: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b1000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b1004:
    // 0x1b1004: 0x240774c0  addiu       $a3, $zero, 0x74C0
    ctx->pc = 0x1b1004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29888));
label_1b1008:
    // 0x1b1008: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1b1008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1b100c:
    // 0x1b100c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b1010:
    // 0x1b1010: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b1010u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1014:
    // 0x1b1014: 0xc06be8c  jal         func_1AFA30
label_1b1018:
    if (ctx->pc == 0x1B1018u) {
        ctx->pc = 0x1B1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1014u;
        // 0x1b1018: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B101Cu;
        goto label_1b101c;
    }
    ctx->pc = 0x1B1014u;
    SET_GPR_U32(ctx, 31, 0x1B101Cu);
    ctx->pc = 0x1B1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1014u;
    // 0x1b1018: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B1014u, 0x1B101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B101Cu;
label_1b101c:
    // 0x1b101c: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x1b101cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1b1020:
    // 0x1b1020: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1b1020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1b1024:
    // 0x1b1024: 0x0  nop
    ctx->pc = 0x1b1024u;
    // NOP
label_1b1028:
    // 0x1b1028: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b1028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b102c:
    // 0x1b102c: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_1b1030:
    if (ctx->pc == 0x1B1030u) {
        ctx->pc = 0x1B1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B102Cu;
        // 0x1b1030: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1034u;
        goto label_1b1034;
    }
    ctx->pc = 0x1B102Cu;
    {
        const bool branch_taken_0x1b102c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B102Cu;
        // 0x1b1030: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b102c) {
            ctx->pc = 0x1B0EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0eb0;
        }
    }
    ctx->pc = 0x1B1034u;
label_1b1034:
    // 0x1b1034: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b1034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b1038:
    // 0x1b1038: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_1b103c:
    if (ctx->pc == 0x1B103Cu) {
        ctx->pc = 0x1B1040u;
        goto label_1b1040;
    }
    ctx->pc = 0x1B1038u;
    {
        const bool branch_taken_0x1b1038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1038) {
            ctx->pc = 0x1B0EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0eac;
        }
    }
    ctx->pc = 0x1B1040u;
label_1b1040:
    // 0x1b1040: 0x8e840104  lw          $a0, 0x104($s4)
    ctx->pc = 0x1b1040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_1b1044:
    // 0x1b1044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1048:
    // 0x1b1048: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b104c:
    // 0x1b104c: 0x320f809  jalr        $t9
label_1b1050:
    if (ctx->pc == 0x1B1050u) {
        ctx->pc = 0x1B1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B104Cu;
        // 0x1b1050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1054u;
        goto label_1b1054;
    }
    ctx->pc = 0x1B104Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1054u);
        ctx->pc = 0x1B1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B104Cu;
        // 0x1b1050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B104Cu, 0x1B1054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1054u;
label_1b1054:
    // 0x1b1054: 0x8e84010c  lw          $a0, 0x10C($s4)
    ctx->pc = 0x1b1054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_1b1058:
    // 0x1b1058: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b105c:
    // 0x1b105c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b105cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b1060:
    // 0x1b1060: 0x320f809  jalr        $t9
label_1b1064:
    if (ctx->pc == 0x1B1064u) {
        ctx->pc = 0x1B1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1060u;
        // 0x1b1064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1068u;
        goto label_1b1068;
    }
    ctx->pc = 0x1B1060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1068u);
        ctx->pc = 0x1B1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1060u;
        // 0x1b1064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1060u, 0x1B1068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1068u;
label_1b1068:
    // 0x1b1068: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b106c:
    if (ctx->pc == 0x1B106Cu) {
        ctx->pc = 0x1B106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1068u;
        // 0x1b106c: 0x8e820118  lw          $v0, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1070u;
        goto label_1b1070;
    }
    ctx->pc = 0x1B1068u;
    {
        const bool branch_taken_0x1b1068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1068u;
        // 0x1b106c: 0x8e820118  lw          $v0, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1068) {
            ctx->pc = 0x1B109Cu;
            goto label_1b109c;
        }
    }
    ctx->pc = 0x1B1070u;
label_1b1070:
    // 0x1b1070: 0x8e840104  lw          $a0, 0x104($s4)
    ctx->pc = 0x1b1070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_1b1074:
    // 0x1b1074: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1078:
    // 0x1b1078: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b107c:
    // 0x1b107c: 0x320f809  jalr        $t9
label_1b1080:
    if (ctx->pc == 0x1B1080u) {
        ctx->pc = 0x1B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B107Cu;
        // 0x1b1080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1084u;
        goto label_1b1084;
    }
    ctx->pc = 0x1B107Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1084u);
        ctx->pc = 0x1B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B107Cu;
        // 0x1b1080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B107Cu, 0x1B1084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1084u;
label_1b1084:
    // 0x1b1084: 0x8e84010c  lw          $a0, 0x10C($s4)
    ctx->pc = 0x1b1084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_1b1088:
    // 0x1b1088: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b108c:
    // 0x1b108c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b1090:
    // 0x1b1090: 0x320f809  jalr        $t9
label_1b1094:
    if (ctx->pc == 0x1B1094u) {
        ctx->pc = 0x1B1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1090u;
        // 0x1b1094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1098u;
        goto label_1b1098;
    }
    ctx->pc = 0x1B1090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1098u);
        ctx->pc = 0x1B1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1090u;
        // 0x1b1094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1090u, 0x1B1098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1098u;
label_1b1098:
    // 0x1b1098: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b109c:
    // 0x1b109c: 0x26840128  addiu       $a0, $s4, 0x128
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
label_1b10a0:
    // 0x1b10a0: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1b10a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1b10a4:
    // 0x1b10a4: 0x27868334  addiu       $a2, $gp, -0x7CCC
    ctx->pc = 0x1b10a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b10a8:
    // 0x1b10a8: 0x34078200  ori         $a3, $zero, 0x8200
    ctx->pc = 0x1b10a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
label_1b10ac:
    // 0x1b10ac: 0x24087340  addiu       $t0, $zero, 0x7340
    ctx->pc = 0x1b10acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29504));
label_1b10b0:
    // 0x1b10b0: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x1b10b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1b10b4:
    // 0x1b10b4: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x1b10b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b10b8:
    // 0x1b10b8: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x1b10b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b10bc:
    // 0x1b10bc: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x1b10bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_1b10c0:
    // 0x1b10c0: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x1b10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b10c4:
    // 0x1b10c4: 0xc06c598  jal         func_1B1660
label_1b10c8:
    if (ctx->pc == 0x1B10C8u) {
        ctx->pc = 0x1B10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10C4u;
        // 0x1b10c8: 0xafa20214  sw          $v0, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10CCu;
        goto label_1b10cc;
    }
    ctx->pc = 0x1B10C4u;
    SET_GPR_U32(ctx, 31, 0x1B10CCu);
    ctx->pc = 0x1B10C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10C4u;
    // 0x1b10c8: 0xafa20214  sw          $v0, 0x214($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1660u, 0x1B10C4u, 0x1B10CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10CCu;
label_1b10cc:
    // 0x1b10cc: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x1b10ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_1b10d0:
    // 0x1b10d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b10d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b10d4:
    // 0x1b10d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b10d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b10d8:
    // 0x1b10d8: 0x320f809  jalr        $t9
label_1b10dc:
    if (ctx->pc == 0x1B10DCu) {
        ctx->pc = 0x1B10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10D8u;
        // 0x1b10dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10E0u;
        goto label_1b10e0;
    }
    ctx->pc = 0x1B10D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B10E0u);
        ctx->pc = 0x1B10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10D8u;
        // 0x1b10dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B10D8u, 0x1B10E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B10E0u;
label_1b10e0:
    // 0x1b10e0: 0x928202ef  lbu         $v0, 0x2EF($s4)
    ctx->pc = 0x1b10e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 751)));
label_1b10e4:
    // 0x1b10e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1b10e8:
    if (ctx->pc == 0x1B10E8u) {
        ctx->pc = 0x1B10ECu;
        goto label_1b10ec;
    }
    ctx->pc = 0x1B10E4u;
    {
        const bool branch_taken_0x1b10e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b10e4) {
            ctx->pc = 0x1B113Cu;
            goto label_1b113c;
        }
    }
    ctx->pc = 0x1B10ECu;
label_1b10ec:
    // 0x1b10ec: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x1b10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b10f0:
    // 0x1b10f0: 0x26840200  addiu       $a0, $s4, 0x200
    ctx->pc = 0x1b10f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
label_1b10f4:
    // 0x1b10f4: 0x27a50218  addiu       $a1, $sp, 0x218
    ctx->pc = 0x1b10f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_1b10f8:
    // 0x1b10f8: 0x27868334  addiu       $a2, $gp, -0x7CCC
    ctx->pc = 0x1b10f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b10fc:
    // 0x1b10fc: 0x34078b10  ori         $a3, $zero, 0x8B10
    ctx->pc = 0x1b10fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35600);
label_1b1100:
    // 0x1b1100: 0x24087440  addiu       $t0, $zero, 0x7440
    ctx->pc = 0x1b1100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29760));
label_1b1104:
    // 0x1b1104: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x1b1104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1b1108:
    // 0x1b1108: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x1b1108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b110c:
    // 0x1b110c: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x1b110cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b1110:
    // 0x1b1110: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x1b1110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
label_1b1114:
    // 0x1b1114: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x1b1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b1118:
    // 0x1b1118: 0xc06c598  jal         func_1B1660
label_1b111c:
    if (ctx->pc == 0x1B111Cu) {
        ctx->pc = 0x1B111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1118u;
        // 0x1b111c: 0xafa2021c  sw          $v0, 0x21C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1120u;
        goto label_1b1120;
    }
    ctx->pc = 0x1B1118u;
    SET_GPR_U32(ctx, 31, 0x1B1120u);
    ctx->pc = 0x1B111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1118u;
    // 0x1b111c: 0xafa2021c  sw          $v0, 0x21C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1660u, 0x1B1118u, 0x1B1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1120u;
label_1b1120:
    // 0x1b1120: 0x8e840114  lw          $a0, 0x114($s4)
    ctx->pc = 0x1b1120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
label_1b1124:
    // 0x1b1124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1128:
    // 0x1b1128: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b112c:
    // 0x1b112c: 0x320f809  jalr        $t9
label_1b1130:
    if (ctx->pc == 0x1B1130u) {
        ctx->pc = 0x1B1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B112Cu;
        // 0x1b1130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1134u;
        goto label_1b1134;
    }
    ctx->pc = 0x1B112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1134u);
        ctx->pc = 0x1B1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B112Cu;
        // 0x1b1130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B112Cu, 0x1B1134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1134u;
label_1b1134:
    // 0x1b1134: 0x10000013  b           . + 4 + (0x13 << 2)
label_1b1138:
    if (ctx->pc == 0x1B1138u) {
        ctx->pc = 0x1B113Cu;
        goto label_1b113c;
    }
    ctx->pc = 0x1B1134u;
    {
        const bool branch_taken_0x1b1134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1134) {
            ctx->pc = 0x1B1184u;
            goto label_1b1184;
        }
    }
    ctx->pc = 0x1B113Cu;
label_1b113c:
    // 0x1b113c: 0x8e840114  lw          $a0, 0x114($s4)
    ctx->pc = 0x1b113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
label_1b1140:
    // 0x1b1140: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1144:
    // 0x1b1144: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b1148:
    // 0x1b1148: 0x320f809  jalr        $t9
label_1b114c:
    if (ctx->pc == 0x1B114Cu) {
        ctx->pc = 0x1B114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1148u;
        // 0x1b114c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1150u;
        goto label_1b1150;
    }
    ctx->pc = 0x1B1148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1150u);
        ctx->pc = 0x1B114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1148u;
        // 0x1b114c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1148u, 0x1B1150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1150u;
label_1b1150:
    // 0x1b1150: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b1154:
    if (ctx->pc == 0x1B1154u) {
        ctx->pc = 0x1B1158u;
        goto label_1b1158;
    }
    ctx->pc = 0x1B1150u;
    {
        const bool branch_taken_0x1b1150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1150) {
            ctx->pc = 0x1B1184u;
            goto label_1b1184;
        }
    }
    ctx->pc = 0x1B1158u;
label_1b1158:
    // 0x1b1158: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b1158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b115c:
    // 0x1b115c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1b115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1b1160:
    // 0x1b1160: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1b1160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1b1164:
    // 0x1b1164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1168:
    // 0x1b1168: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b116c:
    // 0x1b116c: 0x320f809  jalr        $t9
label_1b1170:
    if (ctx->pc == 0x1B1170u) {
        ctx->pc = 0x1B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B116Cu;
        // 0x1b1170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1174u;
        goto label_1b1174;
    }
    ctx->pc = 0x1B116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1174u);
        ctx->pc = 0x1B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B116Cu;
        // 0x1b1170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B116Cu, 0x1B1174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1174u;
label_1b1174:
    // 0x1b1174: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1178:
    // 0x1b1178: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1b1178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1b117c:
    // 0x1b117c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1b1180:
    if (ctx->pc == 0x1B1180u) {
        ctx->pc = 0x1B1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B117Cu;
        // 0x1b1180: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1184u;
        goto label_1b1184;
    }
    ctx->pc = 0x1B117Cu;
    {
        const bool branch_taken_0x1b117c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B117Cu;
        // 0x1b1180: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b117c) {
            ctx->pc = 0x1B115Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b115c;
        }
    }
    ctx->pc = 0x1B1184u;
label_1b1184:
    // 0x1b1184: 0x0  nop
    ctx->pc = 0x1b1184u;
    // NOP
label_1b1188:
    // 0x1b1188: 0x8e840118  lw          $a0, 0x118($s4)
    ctx->pc = 0x1b1188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b118c:
    // 0x1b118c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_1b1190:
    if (ctx->pc == 0x1B1190u) {
        ctx->pc = 0x1B1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B118Cu;
        // 0x1b1190: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1194u;
        goto label_1b1194;
    }
    ctx->pc = 0x1B118Cu;
    {
        const bool branch_taken_0x1b118c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B118Cu;
        // 0x1b1190: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b118c) {
            ctx->pc = 0x1B11DCu;
            goto label_1b11dc;
        }
    }
    ctx->pc = 0x1B1194u;
label_1b1194:
    // 0x1b1194: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1b1194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_1b1198:
    // 0x1b1198: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b119c:
    // 0x1b119c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1b11a0:
    // 0x1b11a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b11a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b11a4:
    // 0x1b11a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b11a8:
    if (ctx->pc == 0x1B11A8u) {
        ctx->pc = 0x1B11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11A4u;
        // 0x1b11a8: 0x8e83011c  lw          $v1, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11ACu;
        goto label_1b11ac;
    }
    ctx->pc = 0x1B11A4u;
    {
        const bool branch_taken_0x1b11a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11A4u;
        // 0x1b11a8: 0x8e83011c  lw          $v1, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11a4) {
            ctx->pc = 0x1B11B8u;
            goto label_1b11b8;
        }
    }
    ctx->pc = 0x1B11ACu;
label_1b11ac:
    // 0x1b11ac: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1b11acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1b11b0:
    // 0x1b11b0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b11b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1b11b4:
    // 0x1b11b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b11b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b11b8:
    // 0x1b11b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b11bc:
    if (ctx->pc == 0x1B11BCu) {
        ctx->pc = 0x1B11C0u;
        goto label_1b11c0;
    }
    ctx->pc = 0x1B11B8u;
    {
        const bool branch_taken_0x1b11b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b11b8) {
            ctx->pc = 0x1B11CCu;
            goto label_1b11cc;
        }
    }
    ctx->pc = 0x1B11C0u;
label_1b11c0:
    // 0x1b11c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b11c4:
    // 0x1b11c4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b11c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b11c8:
    // 0x1b11c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b11c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b11cc:
    // 0x1b11cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b11d0:
    if (ctx->pc == 0x1B11D0u) {
        ctx->pc = 0x1B11D4u;
        goto label_1b11d4;
    }
    ctx->pc = 0x1B11CCu;
    {
        const bool branch_taken_0x1b11cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b11cc) {
            ctx->pc = 0x1B11DCu;
            goto label_1b11dc;
        }
    }
    ctx->pc = 0x1B11D4u;
label_1b11d4:
    // 0x1b11d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b11d8:
    if (ctx->pc == 0x1B11D8u) {
        ctx->pc = 0x1B11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11D4u;
        // 0x1b11d8: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11DCu;
        goto label_1b11dc;
    }
    ctx->pc = 0x1B11D4u;
    {
        const bool branch_taken_0x1b11d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11D4u;
        // 0x1b11d8: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11d4) {
            ctx->pc = 0x1B11E4u;
            goto label_1b11e4;
        }
    }
    ctx->pc = 0x1B11DCu;
label_1b11dc:
    // 0x1b11dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b11dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b11e0:
    // 0x1b11e0: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x1b11e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1b11e4:
    // 0x1b11e4: 0xc06d118  jal         func_1B4460
label_1b11e8:
    if (ctx->pc == 0x1B11E8u) {
        ctx->pc = 0x1B11ECu;
        goto label_1b11ec;
    }
    ctx->pc = 0x1B11E4u;
    SET_GPR_U32(ctx, 31, 0x1B11ECu);
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x1B11E4u, 0x1B11ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B11ECu;
label_1b11ec:
    // 0x1b11ec: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b11ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1b11f0:
    // 0x1b11f0: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1b11f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b11f4:
    // 0x1b11f4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1b11f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b11f8:
    // 0x1b11f8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b11f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b11fc:
    // 0x1b11fc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b11fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b1200:
    // 0x1b1200: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b1200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1204:
    // 0x1b1204: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b1204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1208:
    // 0x1b1208: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b1208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b120c:
    // 0x1b120c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b120cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1210:
    // 0x1b1210: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1214:
    // 0x1b1214: 0x3e00008  jr          $ra
label_1b1218:
    if (ctx->pc == 0x1B1218u) {
        ctx->pc = 0x1B1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1214u;
        // 0x1b1218: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B121Cu;
        goto label_fallthrough_0x1b1214;
    }
    ctx->pc = 0x1B1214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1214u;
        // 0x1b1218: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b1214:
    ctx->pc = 0x1B121Cu;
}
