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

// Function: FUN_001916b0
// Address: 0x1916b0 - 0x1923ac
void FUN_001916b0_0x1916b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001916b0_0x1916b0");
#endif

    switch (ctx->pc) {
        case 0x1916b0u: goto label_1916b0;
        case 0x1916b4u: goto label_1916b4;
        case 0x1916b8u: goto label_1916b8;
        case 0x1916bcu: goto label_1916bc;
        case 0x1916c0u: goto label_1916c0;
        case 0x1916c4u: goto label_1916c4;
        case 0x1916c8u: goto label_1916c8;
        case 0x1916ccu: goto label_1916cc;
        case 0x1916d0u: goto label_1916d0;
        case 0x1916d4u: goto label_1916d4;
        case 0x1916d8u: goto label_1916d8;
        case 0x1916dcu: goto label_1916dc;
        case 0x1916e0u: goto label_1916e0;
        case 0x1916e4u: goto label_1916e4;
        case 0x1916e8u: goto label_1916e8;
        case 0x1916ecu: goto label_1916ec;
        case 0x1916f0u: goto label_1916f0;
        case 0x1916f4u: goto label_1916f4;
        case 0x1916f8u: goto label_1916f8;
        case 0x1916fcu: goto label_1916fc;
        case 0x191700u: goto label_191700;
        case 0x191704u: goto label_191704;
        case 0x191708u: goto label_191708;
        case 0x19170cu: goto label_19170c;
        case 0x191710u: goto label_191710;
        case 0x191714u: goto label_191714;
        case 0x191718u: goto label_191718;
        case 0x19171cu: goto label_19171c;
        case 0x191720u: goto label_191720;
        case 0x191724u: goto label_191724;
        case 0x191728u: goto label_191728;
        case 0x19172cu: goto label_19172c;
        case 0x191730u: goto label_191730;
        case 0x191734u: goto label_191734;
        case 0x191738u: goto label_191738;
        case 0x19173cu: goto label_19173c;
        case 0x191740u: goto label_191740;
        case 0x191744u: goto label_191744;
        case 0x191748u: goto label_191748;
        case 0x19174cu: goto label_19174c;
        case 0x191750u: goto label_191750;
        case 0x191754u: goto label_191754;
        case 0x191758u: goto label_191758;
        case 0x19175cu: goto label_19175c;
        case 0x191760u: goto label_191760;
        case 0x191764u: goto label_191764;
        case 0x191768u: goto label_191768;
        case 0x19176cu: goto label_19176c;
        case 0x191770u: goto label_191770;
        case 0x191774u: goto label_191774;
        case 0x191778u: goto label_191778;
        case 0x19177cu: goto label_19177c;
        case 0x191780u: goto label_191780;
        case 0x191784u: goto label_191784;
        case 0x191788u: goto label_191788;
        case 0x19178cu: goto label_19178c;
        case 0x191790u: goto label_191790;
        case 0x191794u: goto label_191794;
        case 0x191798u: goto label_191798;
        case 0x19179cu: goto label_19179c;
        case 0x1917a0u: goto label_1917a0;
        case 0x1917a4u: goto label_1917a4;
        case 0x1917a8u: goto label_1917a8;
        case 0x1917acu: goto label_1917ac;
        case 0x1917b0u: goto label_1917b0;
        case 0x1917b4u: goto label_1917b4;
        case 0x1917b8u: goto label_1917b8;
        case 0x1917bcu: goto label_1917bc;
        case 0x1917c0u: goto label_1917c0;
        case 0x1917c4u: goto label_1917c4;
        case 0x1917c8u: goto label_1917c8;
        case 0x1917ccu: goto label_1917cc;
        case 0x1917d0u: goto label_1917d0;
        case 0x1917d4u: goto label_1917d4;
        case 0x1917d8u: goto label_1917d8;
        case 0x1917dcu: goto label_1917dc;
        case 0x1917e0u: goto label_1917e0;
        case 0x1917e4u: goto label_1917e4;
        case 0x1917e8u: goto label_1917e8;
        case 0x1917ecu: goto label_1917ec;
        case 0x1917f0u: goto label_1917f0;
        case 0x1917f4u: goto label_1917f4;
        case 0x1917f8u: goto label_1917f8;
        case 0x1917fcu: goto label_1917fc;
        case 0x191800u: goto label_191800;
        case 0x191804u: goto label_191804;
        case 0x191808u: goto label_191808;
        case 0x19180cu: goto label_19180c;
        case 0x191810u: goto label_191810;
        case 0x191814u: goto label_191814;
        case 0x191818u: goto label_191818;
        case 0x19181cu: goto label_19181c;
        case 0x191820u: goto label_191820;
        case 0x191824u: goto label_191824;
        case 0x191828u: goto label_191828;
        case 0x19182cu: goto label_19182c;
        case 0x191830u: goto label_191830;
        case 0x191834u: goto label_191834;
        case 0x191838u: goto label_191838;
        case 0x19183cu: goto label_19183c;
        case 0x191840u: goto label_191840;
        case 0x191844u: goto label_191844;
        case 0x191848u: goto label_191848;
        case 0x19184cu: goto label_19184c;
        case 0x191850u: goto label_191850;
        case 0x191854u: goto label_191854;
        case 0x191858u: goto label_191858;
        case 0x19185cu: goto label_19185c;
        case 0x191860u: goto label_191860;
        case 0x191864u: goto label_191864;
        case 0x191868u: goto label_191868;
        case 0x19186cu: goto label_19186c;
        case 0x191870u: goto label_191870;
        case 0x191874u: goto label_191874;
        case 0x191878u: goto label_191878;
        case 0x19187cu: goto label_19187c;
        case 0x191880u: goto label_191880;
        case 0x191884u: goto label_191884;
        case 0x191888u: goto label_191888;
        case 0x19188cu: goto label_19188c;
        case 0x191890u: goto label_191890;
        case 0x191894u: goto label_191894;
        case 0x191898u: goto label_191898;
        case 0x19189cu: goto label_19189c;
        case 0x1918a0u: goto label_1918a0;
        case 0x1918a4u: goto label_1918a4;
        case 0x1918a8u: goto label_1918a8;
        case 0x1918acu: goto label_1918ac;
        case 0x1918b0u: goto label_1918b0;
        case 0x1918b4u: goto label_1918b4;
        case 0x1918b8u: goto label_1918b8;
        case 0x1918bcu: goto label_1918bc;
        case 0x1918c0u: goto label_1918c0;
        case 0x1918c4u: goto label_1918c4;
        case 0x1918c8u: goto label_1918c8;
        case 0x1918ccu: goto label_1918cc;
        case 0x1918d0u: goto label_1918d0;
        case 0x1918d4u: goto label_1918d4;
        case 0x1918d8u: goto label_1918d8;
        case 0x1918dcu: goto label_1918dc;
        case 0x1918e0u: goto label_1918e0;
        case 0x1918e4u: goto label_1918e4;
        case 0x1918e8u: goto label_1918e8;
        case 0x1918ecu: goto label_1918ec;
        case 0x1918f0u: goto label_1918f0;
        case 0x1918f4u: goto label_1918f4;
        case 0x1918f8u: goto label_1918f8;
        case 0x1918fcu: goto label_1918fc;
        case 0x191900u: goto label_191900;
        case 0x191904u: goto label_191904;
        case 0x191908u: goto label_191908;
        case 0x19190cu: goto label_19190c;
        case 0x191910u: goto label_191910;
        case 0x191914u: goto label_191914;
        case 0x191918u: goto label_191918;
        case 0x19191cu: goto label_19191c;
        case 0x191920u: goto label_191920;
        case 0x191924u: goto label_191924;
        case 0x191928u: goto label_191928;
        case 0x19192cu: goto label_19192c;
        case 0x191930u: goto label_191930;
        case 0x191934u: goto label_191934;
        case 0x191938u: goto label_191938;
        case 0x19193cu: goto label_19193c;
        case 0x191940u: goto label_191940;
        case 0x191944u: goto label_191944;
        case 0x191948u: goto label_191948;
        case 0x19194cu: goto label_19194c;
        case 0x191950u: goto label_191950;
        case 0x191954u: goto label_191954;
        case 0x191958u: goto label_191958;
        case 0x19195cu: goto label_19195c;
        case 0x191960u: goto label_191960;
        case 0x191964u: goto label_191964;
        case 0x191968u: goto label_191968;
        case 0x19196cu: goto label_19196c;
        case 0x191970u: goto label_191970;
        case 0x191974u: goto label_191974;
        case 0x191978u: goto label_191978;
        case 0x19197cu: goto label_19197c;
        case 0x191980u: goto label_191980;
        case 0x191984u: goto label_191984;
        case 0x191988u: goto label_191988;
        case 0x19198cu: goto label_19198c;
        case 0x191990u: goto label_191990;
        case 0x191994u: goto label_191994;
        case 0x191998u: goto label_191998;
        case 0x19199cu: goto label_19199c;
        case 0x1919a0u: goto label_1919a0;
        case 0x1919a4u: goto label_1919a4;
        case 0x1919a8u: goto label_1919a8;
        case 0x1919acu: goto label_1919ac;
        case 0x1919b0u: goto label_1919b0;
        case 0x1919b4u: goto label_1919b4;
        case 0x1919b8u: goto label_1919b8;
        case 0x1919bcu: goto label_1919bc;
        case 0x1919c0u: goto label_1919c0;
        case 0x1919c4u: goto label_1919c4;
        case 0x1919c8u: goto label_1919c8;
        case 0x1919ccu: goto label_1919cc;
        case 0x1919d0u: goto label_1919d0;
        case 0x1919d4u: goto label_1919d4;
        case 0x1919d8u: goto label_1919d8;
        case 0x1919dcu: goto label_1919dc;
        case 0x1919e0u: goto label_1919e0;
        case 0x1919e4u: goto label_1919e4;
        case 0x1919e8u: goto label_1919e8;
        case 0x1919ecu: goto label_1919ec;
        case 0x1919f0u: goto label_1919f0;
        case 0x1919f4u: goto label_1919f4;
        case 0x1919f8u: goto label_1919f8;
        case 0x1919fcu: goto label_1919fc;
        case 0x191a00u: goto label_191a00;
        case 0x191a04u: goto label_191a04;
        case 0x191a08u: goto label_191a08;
        case 0x191a0cu: goto label_191a0c;
        case 0x191a10u: goto label_191a10;
        case 0x191a14u: goto label_191a14;
        case 0x191a18u: goto label_191a18;
        case 0x191a1cu: goto label_191a1c;
        case 0x191a20u: goto label_191a20;
        case 0x191a24u: goto label_191a24;
        case 0x191a28u: goto label_191a28;
        case 0x191a2cu: goto label_191a2c;
        case 0x191a30u: goto label_191a30;
        case 0x191a34u: goto label_191a34;
        case 0x191a38u: goto label_191a38;
        case 0x191a3cu: goto label_191a3c;
        case 0x191a40u: goto label_191a40;
        case 0x191a44u: goto label_191a44;
        case 0x191a48u: goto label_191a48;
        case 0x191a4cu: goto label_191a4c;
        case 0x191a50u: goto label_191a50;
        case 0x191a54u: goto label_191a54;
        case 0x191a58u: goto label_191a58;
        case 0x191a5cu: goto label_191a5c;
        case 0x191a60u: goto label_191a60;
        case 0x191a64u: goto label_191a64;
        case 0x191a68u: goto label_191a68;
        case 0x191a6cu: goto label_191a6c;
        case 0x191a70u: goto label_191a70;
        case 0x191a74u: goto label_191a74;
        case 0x191a78u: goto label_191a78;
        case 0x191a7cu: goto label_191a7c;
        case 0x191a80u: goto label_191a80;
        case 0x191a84u: goto label_191a84;
        case 0x191a88u: goto label_191a88;
        case 0x191a8cu: goto label_191a8c;
        case 0x191a90u: goto label_191a90;
        case 0x191a94u: goto label_191a94;
        case 0x191a98u: goto label_191a98;
        case 0x191a9cu: goto label_191a9c;
        case 0x191aa0u: goto label_191aa0;
        case 0x191aa4u: goto label_191aa4;
        case 0x191aa8u: goto label_191aa8;
        case 0x191aacu: goto label_191aac;
        case 0x191ab0u: goto label_191ab0;
        case 0x191ab4u: goto label_191ab4;
        case 0x191ab8u: goto label_191ab8;
        case 0x191abcu: goto label_191abc;
        case 0x191ac0u: goto label_191ac0;
        case 0x191ac4u: goto label_191ac4;
        case 0x191ac8u: goto label_191ac8;
        case 0x191accu: goto label_191acc;
        case 0x191ad0u: goto label_191ad0;
        case 0x191ad4u: goto label_191ad4;
        case 0x191ad8u: goto label_191ad8;
        case 0x191adcu: goto label_191adc;
        case 0x191ae0u: goto label_191ae0;
        case 0x191ae4u: goto label_191ae4;
        case 0x191ae8u: goto label_191ae8;
        case 0x191aecu: goto label_191aec;
        case 0x191af0u: goto label_191af0;
        case 0x191af4u: goto label_191af4;
        case 0x191af8u: goto label_191af8;
        case 0x191afcu: goto label_191afc;
        case 0x191b00u: goto label_191b00;
        case 0x191b04u: goto label_191b04;
        case 0x191b08u: goto label_191b08;
        case 0x191b0cu: goto label_191b0c;
        case 0x191b10u: goto label_191b10;
        case 0x191b14u: goto label_191b14;
        case 0x191b18u: goto label_191b18;
        case 0x191b1cu: goto label_191b1c;
        case 0x191b20u: goto label_191b20;
        case 0x191b24u: goto label_191b24;
        case 0x191b28u: goto label_191b28;
        case 0x191b2cu: goto label_191b2c;
        case 0x191b30u: goto label_191b30;
        case 0x191b34u: goto label_191b34;
        case 0x191b38u: goto label_191b38;
        case 0x191b3cu: goto label_191b3c;
        case 0x191b40u: goto label_191b40;
        case 0x191b44u: goto label_191b44;
        case 0x191b48u: goto label_191b48;
        case 0x191b4cu: goto label_191b4c;
        case 0x191b50u: goto label_191b50;
        case 0x191b54u: goto label_191b54;
        case 0x191b58u: goto label_191b58;
        case 0x191b5cu: goto label_191b5c;
        case 0x191b60u: goto label_191b60;
        case 0x191b64u: goto label_191b64;
        case 0x191b68u: goto label_191b68;
        case 0x191b6cu: goto label_191b6c;
        case 0x191b70u: goto label_191b70;
        case 0x191b74u: goto label_191b74;
        case 0x191b78u: goto label_191b78;
        case 0x191b7cu: goto label_191b7c;
        case 0x191b80u: goto label_191b80;
        case 0x191b84u: goto label_191b84;
        case 0x191b88u: goto label_191b88;
        case 0x191b8cu: goto label_191b8c;
        case 0x191b90u: goto label_191b90;
        case 0x191b94u: goto label_191b94;
        case 0x191b98u: goto label_191b98;
        case 0x191b9cu: goto label_191b9c;
        case 0x191ba0u: goto label_191ba0;
        case 0x191ba4u: goto label_191ba4;
        case 0x191ba8u: goto label_191ba8;
        case 0x191bacu: goto label_191bac;
        case 0x191bb0u: goto label_191bb0;
        case 0x191bb4u: goto label_191bb4;
        case 0x191bb8u: goto label_191bb8;
        case 0x191bbcu: goto label_191bbc;
        case 0x191bc0u: goto label_191bc0;
        case 0x191bc4u: goto label_191bc4;
        case 0x191bc8u: goto label_191bc8;
        case 0x191bccu: goto label_191bcc;
        case 0x191bd0u: goto label_191bd0;
        case 0x191bd4u: goto label_191bd4;
        case 0x191bd8u: goto label_191bd8;
        case 0x191bdcu: goto label_191bdc;
        case 0x191be0u: goto label_191be0;
        case 0x191be4u: goto label_191be4;
        case 0x191be8u: goto label_191be8;
        case 0x191becu: goto label_191bec;
        case 0x191bf0u: goto label_191bf0;
        case 0x191bf4u: goto label_191bf4;
        case 0x191bf8u: goto label_191bf8;
        case 0x191bfcu: goto label_191bfc;
        case 0x191c00u: goto label_191c00;
        case 0x191c04u: goto label_191c04;
        case 0x191c08u: goto label_191c08;
        case 0x191c0cu: goto label_191c0c;
        case 0x191c10u: goto label_191c10;
        case 0x191c14u: goto label_191c14;
        case 0x191c18u: goto label_191c18;
        case 0x191c1cu: goto label_191c1c;
        case 0x191c20u: goto label_191c20;
        case 0x191c24u: goto label_191c24;
        case 0x191c28u: goto label_191c28;
        case 0x191c2cu: goto label_191c2c;
        case 0x191c30u: goto label_191c30;
        case 0x191c34u: goto label_191c34;
        case 0x191c38u: goto label_191c38;
        case 0x191c3cu: goto label_191c3c;
        case 0x191c40u: goto label_191c40;
        case 0x191c44u: goto label_191c44;
        case 0x191c48u: goto label_191c48;
        case 0x191c4cu: goto label_191c4c;
        case 0x191c50u: goto label_191c50;
        case 0x191c54u: goto label_191c54;
        case 0x191c58u: goto label_191c58;
        case 0x191c5cu: goto label_191c5c;
        case 0x191c60u: goto label_191c60;
        case 0x191c64u: goto label_191c64;
        case 0x191c68u: goto label_191c68;
        case 0x191c6cu: goto label_191c6c;
        case 0x191c70u: goto label_191c70;
        case 0x191c74u: goto label_191c74;
        case 0x191c78u: goto label_191c78;
        case 0x191c7cu: goto label_191c7c;
        case 0x191c80u: goto label_191c80;
        case 0x191c84u: goto label_191c84;
        case 0x191c88u: goto label_191c88;
        case 0x191c8cu: goto label_191c8c;
        case 0x191c90u: goto label_191c90;
        case 0x191c94u: goto label_191c94;
        case 0x191c98u: goto label_191c98;
        case 0x191c9cu: goto label_191c9c;
        case 0x191ca0u: goto label_191ca0;
        case 0x191ca4u: goto label_191ca4;
        case 0x191ca8u: goto label_191ca8;
        case 0x191cacu: goto label_191cac;
        case 0x191cb0u: goto label_191cb0;
        case 0x191cb4u: goto label_191cb4;
        case 0x191cb8u: goto label_191cb8;
        case 0x191cbcu: goto label_191cbc;
        case 0x191cc0u: goto label_191cc0;
        case 0x191cc4u: goto label_191cc4;
        case 0x191cc8u: goto label_191cc8;
        case 0x191cccu: goto label_191ccc;
        case 0x191cd0u: goto label_191cd0;
        case 0x191cd4u: goto label_191cd4;
        case 0x191cd8u: goto label_191cd8;
        case 0x191cdcu: goto label_191cdc;
        case 0x191ce0u: goto label_191ce0;
        case 0x191ce4u: goto label_191ce4;
        case 0x191ce8u: goto label_191ce8;
        case 0x191cecu: goto label_191cec;
        case 0x191cf0u: goto label_191cf0;
        case 0x191cf4u: goto label_191cf4;
        case 0x191cf8u: goto label_191cf8;
        case 0x191cfcu: goto label_191cfc;
        case 0x191d00u: goto label_191d00;
        case 0x191d04u: goto label_191d04;
        case 0x191d08u: goto label_191d08;
        case 0x191d0cu: goto label_191d0c;
        case 0x191d10u: goto label_191d10;
        case 0x191d14u: goto label_191d14;
        case 0x191d18u: goto label_191d18;
        case 0x191d1cu: goto label_191d1c;
        case 0x191d20u: goto label_191d20;
        case 0x191d24u: goto label_191d24;
        case 0x191d28u: goto label_191d28;
        case 0x191d2cu: goto label_191d2c;
        case 0x191d30u: goto label_191d30;
        case 0x191d34u: goto label_191d34;
        case 0x191d38u: goto label_191d38;
        case 0x191d3cu: goto label_191d3c;
        case 0x191d40u: goto label_191d40;
        case 0x191d44u: goto label_191d44;
        case 0x191d48u: goto label_191d48;
        case 0x191d4cu: goto label_191d4c;
        case 0x191d50u: goto label_191d50;
        case 0x191d54u: goto label_191d54;
        case 0x191d58u: goto label_191d58;
        case 0x191d5cu: goto label_191d5c;
        case 0x191d60u: goto label_191d60;
        case 0x191d64u: goto label_191d64;
        case 0x191d68u: goto label_191d68;
        case 0x191d6cu: goto label_191d6c;
        case 0x191d70u: goto label_191d70;
        case 0x191d74u: goto label_191d74;
        case 0x191d78u: goto label_191d78;
        case 0x191d7cu: goto label_191d7c;
        case 0x191d80u: goto label_191d80;
        case 0x191d84u: goto label_191d84;
        case 0x191d88u: goto label_191d88;
        case 0x191d8cu: goto label_191d8c;
        case 0x191d90u: goto label_191d90;
        case 0x191d94u: goto label_191d94;
        case 0x191d98u: goto label_191d98;
        case 0x191d9cu: goto label_191d9c;
        case 0x191da0u: goto label_191da0;
        case 0x191da4u: goto label_191da4;
        case 0x191da8u: goto label_191da8;
        case 0x191dacu: goto label_191dac;
        case 0x191db0u: goto label_191db0;
        case 0x191db4u: goto label_191db4;
        case 0x191db8u: goto label_191db8;
        case 0x191dbcu: goto label_191dbc;
        case 0x191dc0u: goto label_191dc0;
        case 0x191dc4u: goto label_191dc4;
        case 0x191dc8u: goto label_191dc8;
        case 0x191dccu: goto label_191dcc;
        case 0x191dd0u: goto label_191dd0;
        case 0x191dd4u: goto label_191dd4;
        case 0x191dd8u: goto label_191dd8;
        case 0x191ddcu: goto label_191ddc;
        case 0x191de0u: goto label_191de0;
        case 0x191de4u: goto label_191de4;
        case 0x191de8u: goto label_191de8;
        case 0x191decu: goto label_191dec;
        case 0x191df0u: goto label_191df0;
        case 0x191df4u: goto label_191df4;
        case 0x191df8u: goto label_191df8;
        case 0x191dfcu: goto label_191dfc;
        case 0x191e00u: goto label_191e00;
        case 0x191e04u: goto label_191e04;
        case 0x191e08u: goto label_191e08;
        case 0x191e0cu: goto label_191e0c;
        case 0x191e10u: goto label_191e10;
        case 0x191e14u: goto label_191e14;
        case 0x191e18u: goto label_191e18;
        case 0x191e1cu: goto label_191e1c;
        case 0x191e20u: goto label_191e20;
        case 0x191e24u: goto label_191e24;
        case 0x191e28u: goto label_191e28;
        case 0x191e2cu: goto label_191e2c;
        case 0x191e30u: goto label_191e30;
        case 0x191e34u: goto label_191e34;
        case 0x191e38u: goto label_191e38;
        case 0x191e3cu: goto label_191e3c;
        case 0x191e40u: goto label_191e40;
        case 0x191e44u: goto label_191e44;
        case 0x191e48u: goto label_191e48;
        case 0x191e4cu: goto label_191e4c;
        case 0x191e50u: goto label_191e50;
        case 0x191e54u: goto label_191e54;
        case 0x191e58u: goto label_191e58;
        case 0x191e5cu: goto label_191e5c;
        case 0x191e60u: goto label_191e60;
        case 0x191e64u: goto label_191e64;
        case 0x191e68u: goto label_191e68;
        case 0x191e6cu: goto label_191e6c;
        case 0x191e70u: goto label_191e70;
        case 0x191e74u: goto label_191e74;
        case 0x191e78u: goto label_191e78;
        case 0x191e7cu: goto label_191e7c;
        case 0x191e80u: goto label_191e80;
        case 0x191e84u: goto label_191e84;
        case 0x191e88u: goto label_191e88;
        case 0x191e8cu: goto label_191e8c;
        case 0x191e90u: goto label_191e90;
        case 0x191e94u: goto label_191e94;
        case 0x191e98u: goto label_191e98;
        case 0x191e9cu: goto label_191e9c;
        case 0x191ea0u: goto label_191ea0;
        case 0x191ea4u: goto label_191ea4;
        case 0x191ea8u: goto label_191ea8;
        case 0x191eacu: goto label_191eac;
        case 0x191eb0u: goto label_191eb0;
        case 0x191eb4u: goto label_191eb4;
        case 0x191eb8u: goto label_191eb8;
        case 0x191ebcu: goto label_191ebc;
        case 0x191ec0u: goto label_191ec0;
        case 0x191ec4u: goto label_191ec4;
        case 0x191ec8u: goto label_191ec8;
        case 0x191eccu: goto label_191ecc;
        case 0x191ed0u: goto label_191ed0;
        case 0x191ed4u: goto label_191ed4;
        case 0x191ed8u: goto label_191ed8;
        case 0x191edcu: goto label_191edc;
        case 0x191ee0u: goto label_191ee0;
        case 0x191ee4u: goto label_191ee4;
        case 0x191ee8u: goto label_191ee8;
        case 0x191eecu: goto label_191eec;
        case 0x191ef0u: goto label_191ef0;
        case 0x191ef4u: goto label_191ef4;
        case 0x191ef8u: goto label_191ef8;
        case 0x191efcu: goto label_191efc;
        case 0x191f00u: goto label_191f00;
        case 0x191f04u: goto label_191f04;
        case 0x191f08u: goto label_191f08;
        case 0x191f0cu: goto label_191f0c;
        case 0x191f10u: goto label_191f10;
        case 0x191f14u: goto label_191f14;
        case 0x191f18u: goto label_191f18;
        case 0x191f1cu: goto label_191f1c;
        case 0x191f20u: goto label_191f20;
        case 0x191f24u: goto label_191f24;
        case 0x191f28u: goto label_191f28;
        case 0x191f2cu: goto label_191f2c;
        case 0x191f30u: goto label_191f30;
        case 0x191f34u: goto label_191f34;
        case 0x191f38u: goto label_191f38;
        case 0x191f3cu: goto label_191f3c;
        case 0x191f40u: goto label_191f40;
        case 0x191f44u: goto label_191f44;
        case 0x191f48u: goto label_191f48;
        case 0x191f4cu: goto label_191f4c;
        case 0x191f50u: goto label_191f50;
        case 0x191f54u: goto label_191f54;
        case 0x191f58u: goto label_191f58;
        case 0x191f5cu: goto label_191f5c;
        case 0x191f60u: goto label_191f60;
        case 0x191f64u: goto label_191f64;
        case 0x191f68u: goto label_191f68;
        case 0x191f6cu: goto label_191f6c;
        case 0x191f70u: goto label_191f70;
        case 0x191f74u: goto label_191f74;
        case 0x191f78u: goto label_191f78;
        case 0x191f7cu: goto label_191f7c;
        case 0x191f80u: goto label_191f80;
        case 0x191f84u: goto label_191f84;
        case 0x191f88u: goto label_191f88;
        case 0x191f8cu: goto label_191f8c;
        case 0x191f90u: goto label_191f90;
        case 0x191f94u: goto label_191f94;
        case 0x191f98u: goto label_191f98;
        case 0x191f9cu: goto label_191f9c;
        case 0x191fa0u: goto label_191fa0;
        case 0x191fa4u: goto label_191fa4;
        case 0x191fa8u: goto label_191fa8;
        case 0x191facu: goto label_191fac;
        case 0x191fb0u: goto label_191fb0;
        case 0x191fb4u: goto label_191fb4;
        case 0x191fb8u: goto label_191fb8;
        case 0x191fbcu: goto label_191fbc;
        case 0x191fc0u: goto label_191fc0;
        case 0x191fc4u: goto label_191fc4;
        case 0x191fc8u: goto label_191fc8;
        case 0x191fccu: goto label_191fcc;
        case 0x191fd0u: goto label_191fd0;
        case 0x191fd4u: goto label_191fd4;
        case 0x191fd8u: goto label_191fd8;
        case 0x191fdcu: goto label_191fdc;
        case 0x191fe0u: goto label_191fe0;
        case 0x191fe4u: goto label_191fe4;
        case 0x191fe8u: goto label_191fe8;
        case 0x191fecu: goto label_191fec;
        case 0x191ff0u: goto label_191ff0;
        case 0x191ff4u: goto label_191ff4;
        case 0x191ff8u: goto label_191ff8;
        case 0x191ffcu: goto label_191ffc;
        case 0x192000u: goto label_192000;
        case 0x192004u: goto label_192004;
        case 0x192008u: goto label_192008;
        case 0x19200cu: goto label_19200c;
        case 0x192010u: goto label_192010;
        case 0x192014u: goto label_192014;
        case 0x192018u: goto label_192018;
        case 0x19201cu: goto label_19201c;
        case 0x192020u: goto label_192020;
        case 0x192024u: goto label_192024;
        case 0x192028u: goto label_192028;
        case 0x19202cu: goto label_19202c;
        case 0x192030u: goto label_192030;
        case 0x192034u: goto label_192034;
        case 0x192038u: goto label_192038;
        case 0x19203cu: goto label_19203c;
        case 0x192040u: goto label_192040;
        case 0x192044u: goto label_192044;
        case 0x192048u: goto label_192048;
        case 0x19204cu: goto label_19204c;
        case 0x192050u: goto label_192050;
        case 0x192054u: goto label_192054;
        case 0x192058u: goto label_192058;
        case 0x19205cu: goto label_19205c;
        case 0x192060u: goto label_192060;
        case 0x192064u: goto label_192064;
        case 0x192068u: goto label_192068;
        case 0x19206cu: goto label_19206c;
        case 0x192070u: goto label_192070;
        case 0x192074u: goto label_192074;
        case 0x192078u: goto label_192078;
        case 0x19207cu: goto label_19207c;
        case 0x192080u: goto label_192080;
        case 0x192084u: goto label_192084;
        case 0x192088u: goto label_192088;
        case 0x19208cu: goto label_19208c;
        case 0x192090u: goto label_192090;
        case 0x192094u: goto label_192094;
        case 0x192098u: goto label_192098;
        case 0x19209cu: goto label_19209c;
        case 0x1920a0u: goto label_1920a0;
        case 0x1920a4u: goto label_1920a4;
        case 0x1920a8u: goto label_1920a8;
        case 0x1920acu: goto label_1920ac;
        case 0x1920b0u: goto label_1920b0;
        case 0x1920b4u: goto label_1920b4;
        case 0x1920b8u: goto label_1920b8;
        case 0x1920bcu: goto label_1920bc;
        case 0x1920c0u: goto label_1920c0;
        case 0x1920c4u: goto label_1920c4;
        case 0x1920c8u: goto label_1920c8;
        case 0x1920ccu: goto label_1920cc;
        case 0x1920d0u: goto label_1920d0;
        case 0x1920d4u: goto label_1920d4;
        case 0x1920d8u: goto label_1920d8;
        case 0x1920dcu: goto label_1920dc;
        case 0x1920e0u: goto label_1920e0;
        case 0x1920e4u: goto label_1920e4;
        case 0x1920e8u: goto label_1920e8;
        case 0x1920ecu: goto label_1920ec;
        case 0x1920f0u: goto label_1920f0;
        case 0x1920f4u: goto label_1920f4;
        case 0x1920f8u: goto label_1920f8;
        case 0x1920fcu: goto label_1920fc;
        case 0x192100u: goto label_192100;
        case 0x192104u: goto label_192104;
        case 0x192108u: goto label_192108;
        case 0x19210cu: goto label_19210c;
        case 0x192110u: goto label_192110;
        case 0x192114u: goto label_192114;
        case 0x192118u: goto label_192118;
        case 0x19211cu: goto label_19211c;
        case 0x192120u: goto label_192120;
        case 0x192124u: goto label_192124;
        case 0x192128u: goto label_192128;
        case 0x19212cu: goto label_19212c;
        case 0x192130u: goto label_192130;
        case 0x192134u: goto label_192134;
        case 0x192138u: goto label_192138;
        case 0x19213cu: goto label_19213c;
        case 0x192140u: goto label_192140;
        case 0x192144u: goto label_192144;
        case 0x192148u: goto label_192148;
        case 0x19214cu: goto label_19214c;
        case 0x192150u: goto label_192150;
        case 0x192154u: goto label_192154;
        case 0x192158u: goto label_192158;
        case 0x19215cu: goto label_19215c;
        case 0x192160u: goto label_192160;
        case 0x192164u: goto label_192164;
        case 0x192168u: goto label_192168;
        case 0x19216cu: goto label_19216c;
        case 0x192170u: goto label_192170;
        case 0x192174u: goto label_192174;
        case 0x192178u: goto label_192178;
        case 0x19217cu: goto label_19217c;
        case 0x192180u: goto label_192180;
        case 0x192184u: goto label_192184;
        case 0x192188u: goto label_192188;
        case 0x19218cu: goto label_19218c;
        case 0x192190u: goto label_192190;
        case 0x192194u: goto label_192194;
        case 0x192198u: goto label_192198;
        case 0x19219cu: goto label_19219c;
        case 0x1921a0u: goto label_1921a0;
        case 0x1921a4u: goto label_1921a4;
        case 0x1921a8u: goto label_1921a8;
        case 0x1921acu: goto label_1921ac;
        case 0x1921b0u: goto label_1921b0;
        case 0x1921b4u: goto label_1921b4;
        case 0x1921b8u: goto label_1921b8;
        case 0x1921bcu: goto label_1921bc;
        case 0x1921c0u: goto label_1921c0;
        case 0x1921c4u: goto label_1921c4;
        case 0x1921c8u: goto label_1921c8;
        case 0x1921ccu: goto label_1921cc;
        case 0x1921d0u: goto label_1921d0;
        case 0x1921d4u: goto label_1921d4;
        case 0x1921d8u: goto label_1921d8;
        case 0x1921dcu: goto label_1921dc;
        case 0x1921e0u: goto label_1921e0;
        case 0x1921e4u: goto label_1921e4;
        case 0x1921e8u: goto label_1921e8;
        case 0x1921ecu: goto label_1921ec;
        case 0x1921f0u: goto label_1921f0;
        case 0x1921f4u: goto label_1921f4;
        case 0x1921f8u: goto label_1921f8;
        case 0x1921fcu: goto label_1921fc;
        case 0x192200u: goto label_192200;
        case 0x192204u: goto label_192204;
        case 0x192208u: goto label_192208;
        case 0x19220cu: goto label_19220c;
        case 0x192210u: goto label_192210;
        case 0x192214u: goto label_192214;
        case 0x192218u: goto label_192218;
        case 0x19221cu: goto label_19221c;
        case 0x192220u: goto label_192220;
        case 0x192224u: goto label_192224;
        case 0x192228u: goto label_192228;
        case 0x19222cu: goto label_19222c;
        case 0x192230u: goto label_192230;
        case 0x192234u: goto label_192234;
        case 0x192238u: goto label_192238;
        case 0x19223cu: goto label_19223c;
        case 0x192240u: goto label_192240;
        case 0x192244u: goto label_192244;
        case 0x192248u: goto label_192248;
        case 0x19224cu: goto label_19224c;
        case 0x192250u: goto label_192250;
        case 0x192254u: goto label_192254;
        case 0x192258u: goto label_192258;
        case 0x19225cu: goto label_19225c;
        case 0x192260u: goto label_192260;
        case 0x192264u: goto label_192264;
        case 0x192268u: goto label_192268;
        case 0x19226cu: goto label_19226c;
        case 0x192270u: goto label_192270;
        case 0x192274u: goto label_192274;
        case 0x192278u: goto label_192278;
        case 0x19227cu: goto label_19227c;
        case 0x192280u: goto label_192280;
        case 0x192284u: goto label_192284;
        case 0x192288u: goto label_192288;
        case 0x19228cu: goto label_19228c;
        case 0x192290u: goto label_192290;
        case 0x192294u: goto label_192294;
        case 0x192298u: goto label_192298;
        case 0x19229cu: goto label_19229c;
        case 0x1922a0u: goto label_1922a0;
        case 0x1922a4u: goto label_1922a4;
        case 0x1922a8u: goto label_1922a8;
        case 0x1922acu: goto label_1922ac;
        case 0x1922b0u: goto label_1922b0;
        case 0x1922b4u: goto label_1922b4;
        case 0x1922b8u: goto label_1922b8;
        case 0x1922bcu: goto label_1922bc;
        case 0x1922c0u: goto label_1922c0;
        case 0x1922c4u: goto label_1922c4;
        case 0x1922c8u: goto label_1922c8;
        case 0x1922ccu: goto label_1922cc;
        case 0x1922d0u: goto label_1922d0;
        case 0x1922d4u: goto label_1922d4;
        case 0x1922d8u: goto label_1922d8;
        case 0x1922dcu: goto label_1922dc;
        case 0x1922e0u: goto label_1922e0;
        case 0x1922e4u: goto label_1922e4;
        case 0x1922e8u: goto label_1922e8;
        case 0x1922ecu: goto label_1922ec;
        case 0x1922f0u: goto label_1922f0;
        case 0x1922f4u: goto label_1922f4;
        case 0x1922f8u: goto label_1922f8;
        case 0x1922fcu: goto label_1922fc;
        case 0x192300u: goto label_192300;
        case 0x192304u: goto label_192304;
        case 0x192308u: goto label_192308;
        case 0x19230cu: goto label_19230c;
        case 0x192310u: goto label_192310;
        case 0x192314u: goto label_192314;
        case 0x192318u: goto label_192318;
        case 0x19231cu: goto label_19231c;
        case 0x192320u: goto label_192320;
        case 0x192324u: goto label_192324;
        case 0x192328u: goto label_192328;
        case 0x19232cu: goto label_19232c;
        case 0x192330u: goto label_192330;
        case 0x192334u: goto label_192334;
        case 0x192338u: goto label_192338;
        case 0x19233cu: goto label_19233c;
        case 0x192340u: goto label_192340;
        case 0x192344u: goto label_192344;
        case 0x192348u: goto label_192348;
        case 0x19234cu: goto label_19234c;
        case 0x192350u: goto label_192350;
        case 0x192354u: goto label_192354;
        case 0x192358u: goto label_192358;
        case 0x19235cu: goto label_19235c;
        case 0x192360u: goto label_192360;
        case 0x192364u: goto label_192364;
        case 0x192368u: goto label_192368;
        case 0x19236cu: goto label_19236c;
        case 0x192370u: goto label_192370;
        case 0x192374u: goto label_192374;
        case 0x192378u: goto label_192378;
        case 0x19237cu: goto label_19237c;
        case 0x192380u: goto label_192380;
        case 0x192384u: goto label_192384;
        case 0x192388u: goto label_192388;
        case 0x19238cu: goto label_19238c;
        case 0x192390u: goto label_192390;
        case 0x192394u: goto label_192394;
        case 0x192398u: goto label_192398;
        case 0x19239cu: goto label_19239c;
        case 0x1923a0u: goto label_1923a0;
        case 0x1923a4u: goto label_1923a4;
        case 0x1923a8u: goto label_1923a8;
        default: break;
    }

    ctx->pc = 0x1916b0u;

label_1916b0:
    // 0x1916b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1916b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1916b4:
    // 0x1916b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1916b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1916b8:
    // 0x1916b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1916b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1916bc:
    // 0x1916bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1916bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1916c0:
    // 0x1916c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1916c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1916c4:
    // 0x1916c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1916c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1916c8:
    // 0x1916c8: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x1916c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
label_1916cc:
    // 0x1916cc: 0x10000317  b           . + 4 + (0x317 << 2)
label_1916d0:
    if (ctx->pc == 0x1916D0u) {
        ctx->pc = 0x1916D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916CCu;
        // 0x1916d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916D4u;
        goto label_1916d4;
    }
    ctx->pc = 0x1916CCu;
    {
        const bool branch_taken_0x1916cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916CCu;
        // 0x1916d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916cc) {
            ctx->pc = 0x19232Cu;
            goto label_19232c;
        }
    }
    ctx->pc = 0x1916D4u;
label_1916d4:
    // 0x1916d4: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x1916d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1916d8:
    // 0x1916d8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1916d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1916dc:
    // 0x1916dc: 0x78620350  lq          $v0, 0x350($v1)
    ctx->pc = 0x1916dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 848)));
label_1916e0:
    // 0x1916e0: 0x708210a8  pceqw       $v0, $a0, $v0
    ctx->pc = 0x1916e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_1916e4:
    // 0x1916e4: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1916e4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_1916e8:
    // 0x1916e8: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1916e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_1916ec:
    // 0x1916ec: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
label_1916f0:
    if (ctx->pc == 0x1916F0u) {
        ctx->pc = 0x1916F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916ECu;
        // 0x1916f0: 0x24650350  addiu       $a1, $v1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916F4u;
        goto label_1916f4;
    }
    ctx->pc = 0x1916ECu;
    {
        const bool branch_taken_0x1916ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916ECu;
        // 0x1916f0: 0x24650350  addiu       $a1, $v1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916ec) {
            ctx->pc = 0x191C6Cu;
            goto label_191c6c;
        }
    }
    ctx->pc = 0x1916F4u;
label_1916f4:
    // 0x1916f4: 0xc0648ec  jal         func_1923B0
label_1916f8:
    if (ctx->pc == 0x1916F8u) {
        ctx->pc = 0x1916F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916F4u;
        // 0x1916f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916FCu;
        goto label_1916fc;
    }
    ctx->pc = 0x1916F4u;
    SET_GPR_U32(ctx, 31, 0x1916FCu);
    ctx->pc = 0x1916F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916F4u;
    // 0x1916f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x1916F4u, 0x1916FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1916FCu;
label_1916fc:
    // 0x1916fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1916fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191700:
    // 0x191700: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191704:
    // 0x191704: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191708:
    // 0x191708: 0x8c450490  lw          $a1, 0x490($v0)
    ctx->pc = 0x191708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_19170c:
    // 0x19170c: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x19170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_191710:
    // 0x191710: 0x20630005  addi        $v1, $v1, 0x5
    ctx->pc = 0x191710u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)5, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_191714:
    // 0x191714: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x191714u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_191718:
    // 0x191718: 0x10200302  beqz        $at, . + 4 + (0x302 << 2)
label_19171c:
    if (ctx->pc == 0x19171Cu) {
        ctx->pc = 0x19171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191718u;
        // 0x19171c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191720u;
        goto label_191720;
    }
    ctx->pc = 0x191718u;
    {
        const bool branch_taken_0x191718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191718u;
        // 0x19171c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191718) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191720u;
label_191720:
    // 0x191720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191724:
    // 0x191724: 0x2484feb0  addiu       $a0, $a0, -0x150
    ctx->pc = 0x191724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966960));
label_191728:
    // 0x191728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19172c:
    // 0x19172c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_191730:
    // 0x191730: 0x600008  jr          $v1
label_191734:
    if (ctx->pc == 0x191734u) {
        ctx->pc = 0x191738u;
        goto label_191738;
    }
    ctx->pc = 0x191730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191738u: goto label_191738;
            case 0x191768u: goto label_191768;
            case 0x191808u: goto label_191808;
            case 0x1918A8u: goto label_1918a8;
            case 0x1918D0u: goto label_1918d0;
            case 0x1918F8u: goto label_1918f8;
            case 0x19194Cu: goto label_19194c;
            case 0x1919A0u: goto label_1919a0;
            case 0x1919C8u: goto label_1919c8;
            case 0x1919F0u: goto label_1919f0;
            case 0x191B2Cu: goto label_191b2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191730u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x191738u;
label_191738:
    // 0x191738: 0x124002fa  beqz        $s2, . + 4 + (0x2FA << 2)
label_19173c:
    if (ctx->pc == 0x19173Cu) {
        ctx->pc = 0x191740u;
        goto label_191740;
    }
    ctx->pc = 0x191738u;
    {
        const bool branch_taken_0x191738 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191738) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191740u;
label_191740:
    // 0x191740: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x191740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_191744:
    // 0x191744: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x191744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_191748:
    // 0x191748: 0x108302f6  beq         $a0, $v1, . + 4 + (0x2F6 << 2)
label_19174c:
    if (ctx->pc == 0x19174Cu) {
        ctx->pc = 0x191750u;
        goto label_191750;
    }
    ctx->pc = 0x191748u;
    {
        const bool branch_taken_0x191748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191748) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191750u;
label_191750:
    // 0x191750: 0x8c430510  lw          $v1, 0x510($v0)
    ctx->pc = 0x191750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
label_191754:
    // 0x191754: 0x146002f3  bnez        $v1, . + 4 + (0x2F3 << 2)
label_191758:
    if (ctx->pc == 0x191758u) {
        ctx->pc = 0x191758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191754u;
        // 0x191758: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19175Cu;
        goto label_19175c;
    }
    ctx->pc = 0x191754u;
    {
        const bool branch_taken_0x191754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x191758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191754u;
        // 0x191758: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191754) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x19175Cu;
label_19175c:
    // 0x19175c: 0xac4304d0  sw          $v1, 0x4D0($v0)
    ctx->pc = 0x19175cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
label_191760:
    // 0x191760: 0x100002f0  b           . + 4 + (0x2F0 << 2)
label_191764:
    if (ctx->pc == 0x191764u) {
        ctx->pc = 0x191764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191760u;
        // 0x191764: 0xac430510  sw          $v1, 0x510($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191768u;
        goto label_191768;
    }
    ctx->pc = 0x191760u;
    {
        const bool branch_taken_0x191760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191760u;
        // 0x191764: 0xac430510  sw          $v1, 0x510($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191760) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191768u;
label_191768:
    // 0x191768: 0x124002ee  beqz        $s2, . + 4 + (0x2EE << 2)
label_19176c:
    if (ctx->pc == 0x19176Cu) {
        ctx->pc = 0x191770u;
        goto label_191770;
    }
    ctx->pc = 0x191768u;
    {
        const bool branch_taken_0x191768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191768) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191770u;
label_191770:
    // 0x191770: 0xc067f08  jal         func_19FC20
label_191774:
    if (ctx->pc == 0x191774u) {
        ctx->pc = 0x191778u;
        goto label_191778;
    }
    ctx->pc = 0x191770u;
    SET_GPR_U32(ctx, 31, 0x191778u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x191770u, 0x191778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191778u;
label_191778:
    // 0x191778: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
label_19177c:
    if (ctx->pc == 0x19177Cu) {
        ctx->pc = 0x191780u;
        goto label_191780;
    }
    ctx->pc = 0x191778u;
    {
        const bool branch_taken_0x191778 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x191778) {
            ctx->pc = 0x1917D8u;
            goto label_1917d8;
        }
    }
    ctx->pc = 0x191780u;
label_191780:
    // 0x191780: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191784:
    // 0x191784: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191788:
    // 0x191788: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x191788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_19178c:
    // 0x19178c: 0xc067f08  jal         func_19FC20
label_191790:
    if (ctx->pc == 0x191790u) {
        ctx->pc = 0x191790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19178Cu;
        // 0x191790: 0x8c520028  lw          $s2, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191794u;
        goto label_191794;
    }
    ctx->pc = 0x19178Cu;
    SET_GPR_U32(ctx, 31, 0x191794u);
    ctx->pc = 0x191790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19178Cu;
    // 0x191790: 0x8c520028  lw          $s2, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19178Cu, 0x191794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191794u;
label_191794:
    // 0x191794: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x191794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191798:
    // 0x191798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19179c:
    // 0x19179c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x19179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1917a0:
    // 0x1917a0: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x1917a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_1917a4:
    // 0x1917a4: 0xc067f0c  jal         func_19FC30
label_1917a8:
    if (ctx->pc == 0x1917A8u) {
        ctx->pc = 0x1917A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917A4u;
        // 0x1917a8: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917ACu;
        goto label_1917ac;
    }
    ctx->pc = 0x1917A4u;
    SET_GPR_U32(ctx, 31, 0x1917ACu);
    ctx->pc = 0x1917A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917A4u;
    // 0x1917a8: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x1917A4u, 0x1917ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917ACu;
label_1917ac:
    // 0x1917ac: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
label_1917b0:
    if (ctx->pc == 0x1917B0u) {
        ctx->pc = 0x1917B4u;
        goto label_1917b4;
    }
    ctx->pc = 0x1917ACu;
    {
        const bool branch_taken_0x1917ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1917ac) {
            ctx->pc = 0x1917C8u;
            goto label_1917c8;
        }
    }
    ctx->pc = 0x1917B4u;
label_1917b4:
    // 0x1917b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1917b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1917b8:
    // 0x1917b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1917b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1917bc:
    // 0x1917bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1917bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1917c0:
    // 0x1917c0: 0x100002d8  b           . + 4 + (0x2D8 << 2)
label_1917c4:
    if (ctx->pc == 0x1917C4u) {
        ctx->pc = 0x1917C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917C0u;
        // 0x1917c4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917C8u;
        goto label_1917c8;
    }
    ctx->pc = 0x1917C0u;
    {
        const bool branch_taken_0x1917c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917C0u;
        // 0x1917c4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917c0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1917C8u;
label_1917c8:
    // 0x1917c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1917c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1917cc:
    // 0x1917cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1917ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1917d0:
    // 0x1917d0: 0x100002d4  b           . + 4 + (0x2D4 << 2)
label_1917d4:
    if (ctx->pc == 0x1917D4u) {
        ctx->pc = 0x1917D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917D0u;
        // 0x1917d4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917D8u;
        goto label_1917d8;
    }
    ctx->pc = 0x1917D0u;
    {
        const bool branch_taken_0x1917d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917D0u;
        // 0x1917d4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917d0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1917D8u;
label_1917d8:
    // 0x1917d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1917d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1917dc:
    // 0x1917dc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1917dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1917e0:
    // 0x1917e0: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x1917e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_1917e4:
    // 0x1917e4: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x1917e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_1917e8:
    // 0x1917e8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1917e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1917ec:
    // 0x1917ec: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1917f0:
    if (ctx->pc == 0x1917F0u) {
        ctx->pc = 0x1917F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917ECu;
        // 0x1917f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917F4u;
        goto label_1917f4;
    }
    ctx->pc = 0x1917ECu;
    {
        const bool branch_taken_0x1917ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1917F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917ECu;
        // 0x1917f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917ec) {
            ctx->pc = 0x1917FCu;
            goto label_1917fc;
        }
    }
    ctx->pc = 0x1917F4u;
label_1917f4:
    // 0x1917f4: 0x100002cb  b           . + 4 + (0x2CB << 2)
label_1917f8:
    if (ctx->pc == 0x1917F8u) {
        ctx->pc = 0x1917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917F4u;
        // 0x1917f8: 0xac6204d0  sw          $v0, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917FCu;
        goto label_1917fc;
    }
    ctx->pc = 0x1917F4u;
    {
        const bool branch_taken_0x1917f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917F4u;
        // 0x1917f8: 0xac6204d0  sw          $v0, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917f4) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1917FCu;
label_1917fc:
    // 0x1917fc: 0x0  nop
    ctx->pc = 0x1917fcu;
    // NOP
label_191800:
    // 0x191800: 0x100002c8  b           . + 4 + (0x2C8 << 2)
label_191804:
    if (ctx->pc == 0x191804u) {
        ctx->pc = 0x191804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191800u;
        // 0x191804: 0xac6004d0  sw          $zero, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191808u;
        goto label_191808;
    }
    ctx->pc = 0x191800u;
    {
        const bool branch_taken_0x191800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191800u;
        // 0x191804: 0xac6004d0  sw          $zero, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191800) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191808u;
label_191808:
    // 0x191808: 0x124002c6  beqz        $s2, . + 4 + (0x2C6 << 2)
label_19180c:
    if (ctx->pc == 0x19180Cu) {
        ctx->pc = 0x191810u;
        goto label_191810;
    }
    ctx->pc = 0x191808u;
    {
        const bool branch_taken_0x191808 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191808) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191810u;
label_191810:
    // 0x191810: 0xc067f08  jal         func_19FC20
label_191814:
    if (ctx->pc == 0x191814u) {
        ctx->pc = 0x191818u;
        goto label_191818;
    }
    ctx->pc = 0x191810u;
    SET_GPR_U32(ctx, 31, 0x191818u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x191810u, 0x191818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191818u;
label_191818:
    // 0x191818: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
label_19181c:
    if (ctx->pc == 0x19181Cu) {
        ctx->pc = 0x191820u;
        goto label_191820;
    }
    ctx->pc = 0x191818u;
    {
        const bool branch_taken_0x191818 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x191818) {
            ctx->pc = 0x191878u;
            goto label_191878;
        }
    }
    ctx->pc = 0x191820u;
label_191820:
    // 0x191820: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191824:
    // 0x191824: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191828:
    // 0x191828: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x191828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_19182c:
    // 0x19182c: 0xc067f08  jal         func_19FC20
label_191830:
    if (ctx->pc == 0x191830u) {
        ctx->pc = 0x191830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19182Cu;
        // 0x191830: 0x8c520028  lw          $s2, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191834u;
        goto label_191834;
    }
    ctx->pc = 0x19182Cu;
    SET_GPR_U32(ctx, 31, 0x191834u);
    ctx->pc = 0x191830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19182Cu;
    // 0x191830: 0x8c520028  lw          $s2, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19182Cu, 0x191834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191834u;
label_191834:
    // 0x191834: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x191834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191838:
    // 0x191838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19183c:
    // 0x19183c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x19183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_191840:
    // 0x191840: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x191840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_191844:
    // 0x191844: 0xc067f0c  jal         func_19FC30
label_191848:
    if (ctx->pc == 0x191848u) {
        ctx->pc = 0x191848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191844u;
        // 0x191848: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19184Cu;
        goto label_19184c;
    }
    ctx->pc = 0x191844u;
    SET_GPR_U32(ctx, 31, 0x19184Cu);
    ctx->pc = 0x191848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191844u;
    // 0x191848: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x191844u, 0x19184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19184Cu;
label_19184c:
    // 0x19184c: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_191850:
    if (ctx->pc == 0x191850u) {
        ctx->pc = 0x191854u;
        goto label_191854;
    }
    ctx->pc = 0x19184Cu;
    {
        const bool branch_taken_0x19184c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x19184c) {
            ctx->pc = 0x191868u;
            goto label_191868;
        }
    }
    ctx->pc = 0x191854u;
label_191854:
    // 0x191854: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191858:
    // 0x191858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19185c:
    // 0x19185c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191860:
    // 0x191860: 0x100002b0  b           . + 4 + (0x2B0 << 2)
label_191864:
    if (ctx->pc == 0x191864u) {
        ctx->pc = 0x191864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191860u;
        // 0x191864: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191868u;
        goto label_191868;
    }
    ctx->pc = 0x191860u;
    {
        const bool branch_taken_0x191860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191860u;
        // 0x191864: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191860) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191868u;
label_191868:
    // 0x191868: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19186c:
    // 0x19186c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191870:
    // 0x191870: 0x100002ac  b           . + 4 + (0x2AC << 2)
label_191874:
    if (ctx->pc == 0x191874u) {
        ctx->pc = 0x191874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191870u;
        // 0x191874: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191878u;
        goto label_191878;
    }
    ctx->pc = 0x191870u;
    {
        const bool branch_taken_0x191870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191870u;
        // 0x191874: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191870) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191878u;
label_191878:
    // 0x191878: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19187c:
    // 0x19187c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x19187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191880:
    // 0x191880: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x191880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_191884:
    // 0x191884: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x191884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_191888:
    // 0x191888: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x191888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_19188c:
    // 0x19188c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_191890:
    if (ctx->pc == 0x191890u) {
        ctx->pc = 0x191890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19188Cu;
        // 0x191890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191894u;
        goto label_191894;
    }
    ctx->pc = 0x19188Cu;
    {
        const bool branch_taken_0x19188c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x191890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19188Cu;
        // 0x191890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19188c) {
            ctx->pc = 0x19189Cu;
            goto label_19189c;
        }
    }
    ctx->pc = 0x191894u;
label_191894:
    // 0x191894: 0x100002a3  b           . + 4 + (0x2A3 << 2)
label_191898:
    if (ctx->pc == 0x191898u) {
        ctx->pc = 0x191898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191894u;
        // 0x191898: 0xac6204d0  sw          $v0, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19189Cu;
        goto label_19189c;
    }
    ctx->pc = 0x191894u;
    {
        const bool branch_taken_0x191894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191894u;
        // 0x191898: 0xac6204d0  sw          $v0, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191894) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x19189Cu;
label_19189c:
    // 0x19189c: 0x0  nop
    ctx->pc = 0x19189cu;
    // NOP
label_1918a0:
    // 0x1918a0: 0x100002a0  b           . + 4 + (0x2A0 << 2)
label_1918a4:
    if (ctx->pc == 0x1918A4u) {
        ctx->pc = 0x1918A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918A0u;
        // 0x1918a4: 0xac6004d0  sw          $zero, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918A8u;
        goto label_1918a8;
    }
    ctx->pc = 0x1918A0u;
    {
        const bool branch_taken_0x1918a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918A0u;
        // 0x1918a4: 0xac6004d0  sw          $zero, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918a0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1918A8u;
label_1918a8:
    // 0x1918a8: 0x1240029e  beqz        $s2, . + 4 + (0x29E << 2)
label_1918ac:
    if (ctx->pc == 0x1918ACu) {
        ctx->pc = 0x1918B0u;
        goto label_1918b0;
    }
    ctx->pc = 0x1918A8u;
    {
        const bool branch_taken_0x1918a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1918a8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1918B0u;
label_1918b0:
    // 0x1918b0: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1918b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_1918b4:
    // 0x1918b4: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1918b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_1918b8:
    // 0x1918b8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1918bc:
    if (ctx->pc == 0x1918BCu) {
        ctx->pc = 0x1918BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918B8u;
        // 0x1918bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918C0u;
        goto label_1918c0;
    }
    ctx->pc = 0x1918B8u;
    {
        const bool branch_taken_0x1918b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1918BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918B8u;
        // 0x1918bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918b8) {
            ctx->pc = 0x1918C8u;
            goto label_1918c8;
        }
    }
    ctx->pc = 0x1918C0u;
label_1918c0:
    // 0x1918c0: 0x10000298  b           . + 4 + (0x298 << 2)
label_1918c4:
    if (ctx->pc == 0x1918C4u) {
        ctx->pc = 0x1918C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918C0u;
        // 0x1918c4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918C8u;
        goto label_1918c8;
    }
    ctx->pc = 0x1918C0u;
    {
        const bool branch_taken_0x1918c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918C0u;
        // 0x1918c4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918c0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1918C8u;
label_1918c8:
    // 0x1918c8: 0x10000296  b           . + 4 + (0x296 << 2)
label_1918cc:
    if (ctx->pc == 0x1918CCu) {
        ctx->pc = 0x1918CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918C8u;
        // 0x1918cc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918D0u;
        goto label_1918d0;
    }
    ctx->pc = 0x1918C8u;
    {
        const bool branch_taken_0x1918c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918C8u;
        // 0x1918cc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918c8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1918D0u;
label_1918d0:
    // 0x1918d0: 0x12400294  beqz        $s2, . + 4 + (0x294 << 2)
label_1918d4:
    if (ctx->pc == 0x1918D4u) {
        ctx->pc = 0x1918D8u;
        goto label_1918d8;
    }
    ctx->pc = 0x1918D0u;
    {
        const bool branch_taken_0x1918d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1918d0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1918D8u;
label_1918d8:
    // 0x1918d8: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1918d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_1918dc:
    // 0x1918dc: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1918dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_1918e0:
    // 0x1918e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1918e4:
    if (ctx->pc == 0x1918E4u) {
        ctx->pc = 0x1918E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918E0u;
        // 0x1918e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918E8u;
        goto label_1918e8;
    }
    ctx->pc = 0x1918E0u;
    {
        const bool branch_taken_0x1918e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1918E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918E0u;
        // 0x1918e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918e0) {
            ctx->pc = 0x1918F0u;
            goto label_1918f0;
        }
    }
    ctx->pc = 0x1918E8u;
label_1918e8:
    // 0x1918e8: 0x1000028e  b           . + 4 + (0x28E << 2)
label_1918ec:
    if (ctx->pc == 0x1918ECu) {
        ctx->pc = 0x1918ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918E8u;
        // 0x1918ec: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918F0u;
        goto label_1918f0;
    }
    ctx->pc = 0x1918E8u;
    {
        const bool branch_taken_0x1918e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918E8u;
        // 0x1918ec: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918e8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1918F0u;
label_1918f0:
    // 0x1918f0: 0x1000028c  b           . + 4 + (0x28C << 2)
label_1918f4:
    if (ctx->pc == 0x1918F4u) {
        ctx->pc = 0x1918F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918F0u;
        // 0x1918f4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918F8u;
        goto label_1918f8;
    }
    ctx->pc = 0x1918F0u;
    {
        const bool branch_taken_0x1918f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918F0u;
        // 0x1918f4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918f0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1918F8u;
label_1918f8:
    // 0x1918f8: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_1918fc:
    if (ctx->pc == 0x1918FCu) {
        ctx->pc = 0x191900u;
        goto label_191900;
    }
    ctx->pc = 0x1918F8u;
    {
        const bool branch_taken_0x1918f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1918f8) {
            ctx->pc = 0x191940u;
            goto label_191940;
        }
    }
    ctx->pc = 0x191900u;
label_191900:
    // 0x191900: 0x8e430660  lw          $v1, 0x660($s2)
    ctx->pc = 0x191900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
label_191904:
    // 0x191904: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191908:
    // 0x191908: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
label_19190c:
    if (ctx->pc == 0x19190Cu) {
        ctx->pc = 0x191910u;
        goto label_191910;
    }
    ctx->pc = 0x191908u;
    {
        const bool branch_taken_0x191908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x191908) {
            ctx->pc = 0x191938u;
            goto label_191938;
        }
    }
    ctx->pc = 0x191910u;
label_191910:
    // 0x191910: 0x8e440664  lw          $a0, 0x664($s2)
    ctx->pc = 0x191910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_191914:
    // 0x191914: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x191914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_191918:
    // 0x191918: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x191918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19191c:
    // 0x19191c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_191920:
    if (ctx->pc == 0x191920u) {
        ctx->pc = 0x191924u;
        goto label_191924;
    }
    ctx->pc = 0x19191Cu;
    {
        const bool branch_taken_0x19191c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19191c) {
            ctx->pc = 0x19192Cu;
            goto label_19192c;
        }
    }
    ctx->pc = 0x191924u;
label_191924:
    // 0x191924: 0x1000027f  b           . + 4 + (0x27F << 2)
label_191928:
    if (ctx->pc == 0x191928u) {
        ctx->pc = 0x191928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191924u;
        // 0x191928: 0xac4504d0  sw          $a1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19192Cu;
        goto label_19192c;
    }
    ctx->pc = 0x191924u;
    {
        const bool branch_taken_0x191924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191924u;
        // 0x191928: 0xac4504d0  sw          $a1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191924) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x19192Cu;
label_19192c:
    // 0x19192c: 0x0  nop
    ctx->pc = 0x19192cu;
    // NOP
label_191930:
    // 0x191930: 0x1000027c  b           . + 4 + (0x27C << 2)
label_191934:
    if (ctx->pc == 0x191934u) {
        ctx->pc = 0x191934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191930u;
        // 0x191934: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191938u;
        goto label_191938;
    }
    ctx->pc = 0x191930u;
    {
        const bool branch_taken_0x191930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191930u;
        // 0x191934: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191930) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191938u;
label_191938:
    // 0x191938: 0x1000027a  b           . + 4 + (0x27A << 2)
label_19193c:
    if (ctx->pc == 0x19193Cu) {
        ctx->pc = 0x19193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191938u;
        // 0x19193c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191940u;
        goto label_191940;
    }
    ctx->pc = 0x191938u;
    {
        const bool branch_taken_0x191938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191938u;
        // 0x19193c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191938) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191940u;
label_191940:
    // 0x191940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191944:
    // 0x191944: 0x10000277  b           . + 4 + (0x277 << 2)
label_191948:
    if (ctx->pc == 0x191948u) {
        ctx->pc = 0x191948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191944u;
        // 0x191948: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19194Cu;
        goto label_19194c;
    }
    ctx->pc = 0x191944u;
    {
        const bool branch_taken_0x191944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191944u;
        // 0x191948: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191944) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x19194Cu;
label_19194c:
    // 0x19194c: 0x0  nop
    ctx->pc = 0x19194cu;
    // NOP
label_191950:
    // 0x191950: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_191954:
    if (ctx->pc == 0x191954u) {
        ctx->pc = 0x191958u;
        goto label_191958;
    }
    ctx->pc = 0x191950u;
    {
        const bool branch_taken_0x191950 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191950) {
            ctx->pc = 0x191998u;
            goto label_191998;
        }
    }
    ctx->pc = 0x191958u;
label_191958:
    // 0x191958: 0x8e430660  lw          $v1, 0x660($s2)
    ctx->pc = 0x191958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
label_19195c:
    // 0x19195c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191960:
    // 0x191960: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
label_191964:
    if (ctx->pc == 0x191964u) {
        ctx->pc = 0x191968u;
        goto label_191968;
    }
    ctx->pc = 0x191960u;
    {
        const bool branch_taken_0x191960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x191960) {
            ctx->pc = 0x191990u;
            goto label_191990;
        }
    }
    ctx->pc = 0x191968u;
label_191968:
    // 0x191968: 0x8e440664  lw          $a0, 0x664($s2)
    ctx->pc = 0x191968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_19196c:
    // 0x19196c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_191970:
    // 0x191970: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x191970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_191974:
    // 0x191974: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_191978:
    if (ctx->pc == 0x191978u) {
        ctx->pc = 0x19197Cu;
        goto label_19197c;
    }
    ctx->pc = 0x191974u;
    {
        const bool branch_taken_0x191974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191974) {
            ctx->pc = 0x191984u;
            goto label_191984;
        }
    }
    ctx->pc = 0x19197Cu;
label_19197c:
    // 0x19197c: 0x10000269  b           . + 4 + (0x269 << 2)
label_191980:
    if (ctx->pc == 0x191980u) {
        ctx->pc = 0x191980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19197Cu;
        // 0x191980: 0xac4504d0  sw          $a1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191984u;
        goto label_191984;
    }
    ctx->pc = 0x19197Cu;
    {
        const bool branch_taken_0x19197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19197Cu;
        // 0x191980: 0xac4504d0  sw          $a1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19197c) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191984u;
label_191984:
    // 0x191984: 0x0  nop
    ctx->pc = 0x191984u;
    // NOP
label_191988:
    // 0x191988: 0x10000266  b           . + 4 + (0x266 << 2)
label_19198c:
    if (ctx->pc == 0x19198Cu) {
        ctx->pc = 0x19198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191988u;
        // 0x19198c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191990u;
        goto label_191990;
    }
    ctx->pc = 0x191988u;
    {
        const bool branch_taken_0x191988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191988u;
        // 0x19198c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191988) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191990u;
label_191990:
    // 0x191990: 0x10000264  b           . + 4 + (0x264 << 2)
label_191994:
    if (ctx->pc == 0x191994u) {
        ctx->pc = 0x191994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191990u;
        // 0x191994: 0xac4504d0  sw          $a1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191998u;
        goto label_191998;
    }
    ctx->pc = 0x191990u;
    {
        const bool branch_taken_0x191990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191990u;
        // 0x191994: 0xac4504d0  sw          $a1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191990) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191998u;
label_191998:
    // 0x191998: 0x10000262  b           . + 4 + (0x262 << 2)
label_19199c:
    if (ctx->pc == 0x19199Cu) {
        ctx->pc = 0x19199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191998u;
        // 0x19199c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919A0u;
        goto label_1919a0;
    }
    ctx->pc = 0x191998u;
    {
        const bool branch_taken_0x191998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191998u;
        // 0x19199c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191998) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1919A0u;
label_1919a0:
    // 0x1919a0: 0x12400260  beqz        $s2, . + 4 + (0x260 << 2)
label_1919a4:
    if (ctx->pc == 0x1919A4u) {
        ctx->pc = 0x1919A8u;
        goto label_1919a8;
    }
    ctx->pc = 0x1919A0u;
    {
        const bool branch_taken_0x1919a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919a0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1919A8u;
label_1919a8:
    // 0x1919a8: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x1919a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_1919ac:
    // 0x1919ac: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1919acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_1919b0:
    // 0x1919b0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1919b4:
    if (ctx->pc == 0x1919B4u) {
        ctx->pc = 0x1919B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919B0u;
        // 0x1919b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919B8u;
        goto label_1919b8;
    }
    ctx->pc = 0x1919B0u;
    {
        const bool branch_taken_0x1919b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1919B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919B0u;
        // 0x1919b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919b0) {
            ctx->pc = 0x1919C0u;
            goto label_1919c0;
        }
    }
    ctx->pc = 0x1919B8u;
label_1919b8:
    // 0x1919b8: 0x1000025a  b           . + 4 + (0x25A << 2)
label_1919bc:
    if (ctx->pc == 0x1919BCu) {
        ctx->pc = 0x1919BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919B8u;
        // 0x1919bc: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919C0u;
        goto label_1919c0;
    }
    ctx->pc = 0x1919B8u;
    {
        const bool branch_taken_0x1919b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919B8u;
        // 0x1919bc: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919b8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1919C0u;
label_1919c0:
    // 0x1919c0: 0x10000258  b           . + 4 + (0x258 << 2)
label_1919c4:
    if (ctx->pc == 0x1919C4u) {
        ctx->pc = 0x1919C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919C0u;
        // 0x1919c4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919C8u;
        goto label_1919c8;
    }
    ctx->pc = 0x1919C0u;
    {
        const bool branch_taken_0x1919c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919C0u;
        // 0x1919c4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919c0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1919C8u;
label_1919c8:
    // 0x1919c8: 0x12400256  beqz        $s2, . + 4 + (0x256 << 2)
label_1919cc:
    if (ctx->pc == 0x1919CCu) {
        ctx->pc = 0x1919D0u;
        goto label_1919d0;
    }
    ctx->pc = 0x1919C8u;
    {
        const bool branch_taken_0x1919c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919c8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1919D0u;
label_1919d0:
    // 0x1919d0: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_1919d4:
    // 0x1919d4: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_1919d8:
    // 0x1919d8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1919dc:
    if (ctx->pc == 0x1919DCu) {
        ctx->pc = 0x1919DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919D8u;
        // 0x1919dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919E0u;
        goto label_1919e0;
    }
    ctx->pc = 0x1919D8u;
    {
        const bool branch_taken_0x1919d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1919DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919D8u;
        // 0x1919dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919d8) {
            ctx->pc = 0x1919E8u;
            goto label_1919e8;
        }
    }
    ctx->pc = 0x1919E0u;
label_1919e0:
    // 0x1919e0: 0x10000250  b           . + 4 + (0x250 << 2)
label_1919e4:
    if (ctx->pc == 0x1919E4u) {
        ctx->pc = 0x1919E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919E0u;
        // 0x1919e4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919E8u;
        goto label_1919e8;
    }
    ctx->pc = 0x1919E0u;
    {
        const bool branch_taken_0x1919e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919E0u;
        // 0x1919e4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919e0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1919E8u;
label_1919e8:
    // 0x1919e8: 0x1000024e  b           . + 4 + (0x24E << 2)
label_1919ec:
    if (ctx->pc == 0x1919ECu) {
        ctx->pc = 0x1919ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919E8u;
        // 0x1919ec: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919F0u;
        goto label_1919f0;
    }
    ctx->pc = 0x1919E8u;
    {
        const bool branch_taken_0x1919e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919E8u;
        // 0x1919ec: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919e8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1919F0u;
label_1919f0:
    // 0x1919f0: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x1919f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_1919f4:
    // 0x1919f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1919f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1919f8:
    // 0x1919f8: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
label_1919fc:
    if (ctx->pc == 0x1919FCu) {
        ctx->pc = 0x1919FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919F8u;
        // 0x1919fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A00u;
        goto label_191a00;
    }
    ctx->pc = 0x1919F8u;
    {
        const bool branch_taken_0x1919f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1919FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919F8u;
        // 0x1919fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919f8) {
            ctx->pc = 0x191A94u;
            goto label_191a94;
        }
    }
    ctx->pc = 0x191A00u;
label_191a00:
    // 0x191a00: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_191a04:
    if (ctx->pc == 0x191A04u) {
        ctx->pc = 0x191A08u;
        goto label_191a08;
    }
    ctx->pc = 0x191A00u;
    {
        const bool branch_taken_0x191a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191a00) {
            ctx->pc = 0x191A24u;
            goto label_191a24;
        }
    }
    ctx->pc = 0x191A08u;
label_191a08:
    // 0x191a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191a0c:
    // 0x191a0c: 0x10820245  beq         $a0, $v0, . + 4 + (0x245 << 2)
label_191a10:
    if (ctx->pc == 0x191A10u) {
        ctx->pc = 0x191A14u;
        goto label_191a14;
    }
    ctx->pc = 0x191A0Cu;
    {
        const bool branch_taken_0x191a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x191a0c) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191A14u;
label_191a14:
    // 0x191a14: 0x10800243  beqz        $a0, . + 4 + (0x243 << 2)
label_191a18:
    if (ctx->pc == 0x191A18u) {
        ctx->pc = 0x191A1Cu;
        goto label_191a1c;
    }
    ctx->pc = 0x191A14u;
    {
        const bool branch_taken_0x191a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a14) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191A1Cu;
label_191a1c:
    // 0x191a1c: 0x10000241  b           . + 4 + (0x241 << 2)
label_191a20:
    if (ctx->pc == 0x191A20u) {
        ctx->pc = 0x191A24u;
        goto label_191a24;
    }
    ctx->pc = 0x191A1Cu;
    {
        const bool branch_taken_0x191a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a1c) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191A24u;
label_191a24:
    // 0x191a24: 0x0  nop
    ctx->pc = 0x191a24u;
    // NOP
label_191a28:
    // 0x191a28: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x191a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
label_191a2c:
    // 0x191a2c: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x191a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191a30:
    // 0x191a30: 0x24a4002c  addiu       $a0, $a1, 0x2C
    ctx->pc = 0x191a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
label_191a34:
    // 0x191a34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191a34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191a38:
    // 0x191a38: 0x10000010  b           . + 4 + (0x10 << 2)
label_191a3c:
    if (ctx->pc == 0x191A3Cu) {
        ctx->pc = 0x191A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A38u;
        // 0x191a3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A40u;
        goto label_191a40;
    }
    ctx->pc = 0x191A38u;
    {
        const bool branch_taken_0x191a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A38u;
        // 0x191a3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a38) {
            ctx->pc = 0x191A7Cu;
            goto label_191a7c;
        }
    }
    ctx->pc = 0x191A40u;
label_191a40:
    // 0x191a40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x191a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191a44:
    // 0x191a44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x191a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_191a48:
    // 0x191a48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191a4c:
    // 0x191a4c: 0x10450235  beq         $v0, $a1, . + 4 + (0x235 << 2)
label_191a50:
    if (ctx->pc == 0x191A50u) {
        ctx->pc = 0x191A54u;
        goto label_191a54;
    }
    ctx->pc = 0x191A4Cu;
    {
        const bool branch_taken_0x191a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x191a4c) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191A54u;
label_191a54:
    // 0x191a54: 0x8cc72c10  lw          $a3, 0x2C10($a2)
    ctx->pc = 0x191a54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11280)));
label_191a58:
    // 0x191a58: 0x14470006  bne         $v0, $a3, . + 4 + (0x6 << 2)
label_191a5c:
    if (ctx->pc == 0x191A5Cu) {
        ctx->pc = 0x191A60u;
        goto label_191a60;
    }
    ctx->pc = 0x191A58u;
    {
        const bool branch_taken_0x191a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x191a58) {
            ctx->pc = 0x191A74u;
            goto label_191a74;
        }
    }
    ctx->pc = 0x191A60u;
label_191a60:
    // 0x191a60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191a64:
    // 0x191a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191a68:
    // 0x191a68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191a6c:
    // 0x191a6c: 0x1000022d  b           . + 4 + (0x22D << 2)
label_191a70:
    if (ctx->pc == 0x191A70u) {
        ctx->pc = 0x191A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A6Cu;
        // 0x191a70: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A74u;
        goto label_191a74;
    }
    ctx->pc = 0x191A6Cu;
    {
        const bool branch_taken_0x191a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A6Cu;
        // 0x191a70: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a6c) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191A74u;
label_191a74:
    // 0x191a74: 0x0  nop
    ctx->pc = 0x191a74u;
    // NOP
label_191a78:
    // 0x191a78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x191a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_191a7c:
    // 0x191a7c: 0x0  nop
    ctx->pc = 0x191a7cu;
    // NOP
label_191a80:
    // 0x191a80: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x191a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_191a84:
    // 0x191a84: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_191a88:
    if (ctx->pc == 0x191A88u) {
        ctx->pc = 0x191A8Cu;
        goto label_191a8c;
    }
    ctx->pc = 0x191A84u;
    {
        const bool branch_taken_0x191a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191a84) {
            ctx->pc = 0x191A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191a40;
        }
    }
    ctx->pc = 0x191A8Cu;
label_191a8c:
    // 0x191a8c: 0x10000225  b           . + 4 + (0x225 << 2)
label_191a90:
    if (ctx->pc == 0x191A90u) {
        ctx->pc = 0x191A94u;
        goto label_191a94;
    }
    ctx->pc = 0x191A8Cu;
    {
        const bool branch_taken_0x191a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a8c) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191A94u;
label_191a94:
    // 0x191a94: 0x0  nop
    ctx->pc = 0x191a94u;
    // NOP
label_191a98:
    // 0x191a98: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x191a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
label_191a9c:
    // 0x191a9c: 0x8f8885f4  lw          $t0, -0x7A0C($gp)
    ctx->pc = 0x191a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191aa0:
    // 0x191aa0: 0x24a4002c  addiu       $a0, $a1, 0x2C
    ctx->pc = 0x191aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
label_191aa4:
    // 0x191aa4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191aa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191aa8:
    // 0x191aa8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_191aac:
    if (ctx->pc == 0x191AACu) {
        ctx->pc = 0x191AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AA8u;
        // 0x191aac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AB0u;
        goto label_191ab0;
    }
    ctx->pc = 0x191AA8u;
    {
        const bool branch_taken_0x191aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AA8u;
        // 0x191aac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191aa8) {
            ctx->pc = 0x191B14u;
            goto label_191b14;
        }
    }
    ctx->pc = 0x191AB0u;
label_191ab0:
    // 0x191ab0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x191ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191ab4:
    // 0x191ab4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x191ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_191ab8:
    // 0x191ab8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x191ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191abc:
    // 0x191abc: 0x10a70219  beq         $a1, $a3, . + 4 + (0x219 << 2)
label_191ac0:
    if (ctx->pc == 0x191AC0u) {
        ctx->pc = 0x191AC4u;
        goto label_191ac4;
    }
    ctx->pc = 0x191ABCu;
    {
        const bool branch_taken_0x191abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x191abc) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191AC4u;
label_191ac4:
    // 0x191ac4: 0x8d092c10  lw          $t1, 0x2C10($t0)
    ctx->pc = 0x191ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11280)));
label_191ac8:
    // 0x191ac8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x191ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_191acc:
    // 0x191acc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x191accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_191ad0:
    // 0x191ad0: 0x8d062c1c  lw          $a2, 0x2C1C($t0)
    ctx->pc = 0x191ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11292)));
label_191ad4:
    // 0x191ad4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_191ad8:
    // 0x191ad8: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_191adc:
    // 0x191adc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x191adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_191ae0:
    // 0x191ae0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x191ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_191ae4:
    // 0x191ae4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x191ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_191ae8:
    // 0x191ae8: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x191ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
label_191aec:
    // 0x191aec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x191aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_191af0:
    // 0x191af0: 0x90a5003f  lbu         $a1, 0x3F($a1)
    ctx->pc = 0x191af0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
label_191af4:
    // 0x191af4: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_191af8:
    if (ctx->pc == 0x191AF8u) {
        ctx->pc = 0x191AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AF4u;
        // 0x191af8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AFCu;
        goto label_191afc;
    }
    ctx->pc = 0x191AF4u;
    {
        const bool branch_taken_0x191af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x191AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AF4u;
        // 0x191af8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191af4) {
            ctx->pc = 0x191B0Cu;
            goto label_191b0c;
        }
    }
    ctx->pc = 0x191AFCu;
label_191afc:
    // 0x191afc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191b00:
    // 0x191b00: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191b04:
    // 0x191b04: 0x10000207  b           . + 4 + (0x207 << 2)
label_191b08:
    if (ctx->pc == 0x191B08u) {
        ctx->pc = 0x191B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B04u;
        // 0x191b08: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B0Cu;
        goto label_191b0c;
    }
    ctx->pc = 0x191B04u;
    {
        const bool branch_taken_0x191b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B04u;
        // 0x191b08: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b04) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191B0Cu;
label_191b0c:
    // 0x191b0c: 0x0  nop
    ctx->pc = 0x191b0cu;
    // NOP
label_191b10:
    // 0x191b10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x191b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_191b14:
    // 0x191b14: 0x0  nop
    ctx->pc = 0x191b14u;
    // NOP
label_191b18:
    // 0x191b18: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x191b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_191b1c:
    // 0x191b1c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_191b20:
    if (ctx->pc == 0x191B20u) {
        ctx->pc = 0x191B24u;
        goto label_191b24;
    }
    ctx->pc = 0x191B1Cu;
    {
        const bool branch_taken_0x191b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191b1c) {
            ctx->pc = 0x191AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191ab0;
        }
    }
    ctx->pc = 0x191B24u;
label_191b24:
    // 0x191b24: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_191b28:
    if (ctx->pc == 0x191B28u) {
        ctx->pc = 0x191B2Cu;
        goto label_191b2c;
    }
    ctx->pc = 0x191B24u;
    {
        const bool branch_taken_0x191b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b24) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191B2Cu;
label_191b2c:
    // 0x191b2c: 0x0  nop
    ctx->pc = 0x191b2cu;
    // NOP
label_191b30:
    // 0x191b30: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x191b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_191b34:
    // 0x191b34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x191b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_191b38:
    // 0x191b38: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
label_191b3c:
    if (ctx->pc == 0x191B3Cu) {
        ctx->pc = 0x191B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B38u;
        // 0x191b3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B40u;
        goto label_191b40;
    }
    ctx->pc = 0x191B38u;
    {
        const bool branch_taken_0x191b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x191B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B38u;
        // 0x191b3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b38) {
            ctx->pc = 0x191BD4u;
            goto label_191bd4;
        }
    }
    ctx->pc = 0x191B40u;
label_191b40:
    // 0x191b40: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_191b44:
    if (ctx->pc == 0x191B44u) {
        ctx->pc = 0x191B48u;
        goto label_191b48;
    }
    ctx->pc = 0x191B40u;
    {
        const bool branch_taken_0x191b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191b40) {
            ctx->pc = 0x191B64u;
            goto label_191b64;
        }
    }
    ctx->pc = 0x191B48u;
label_191b48:
    // 0x191b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191b4c:
    // 0x191b4c: 0x108201f5  beq         $a0, $v0, . + 4 + (0x1F5 << 2)
label_191b50:
    if (ctx->pc == 0x191B50u) {
        ctx->pc = 0x191B54u;
        goto label_191b54;
    }
    ctx->pc = 0x191B4Cu;
    {
        const bool branch_taken_0x191b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x191b4c) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191B54u;
label_191b54:
    // 0x191b54: 0x108001f3  beqz        $a0, . + 4 + (0x1F3 << 2)
label_191b58:
    if (ctx->pc == 0x191B58u) {
        ctx->pc = 0x191B5Cu;
        goto label_191b5c;
    }
    ctx->pc = 0x191B54u;
    {
        const bool branch_taken_0x191b54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b54) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191B5Cu;
label_191b5c:
    // 0x191b5c: 0x100001f1  b           . + 4 + (0x1F1 << 2)
label_191b60:
    if (ctx->pc == 0x191B60u) {
        ctx->pc = 0x191B64u;
        goto label_191b64;
    }
    ctx->pc = 0x191B5Cu;
    {
        const bool branch_taken_0x191b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b5c) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191B64u;
label_191b64:
    // 0x191b64: 0x0  nop
    ctx->pc = 0x191b64u;
    // NOP
label_191b68:
    // 0x191b68: 0x24a4002c  addiu       $a0, $a1, 0x2C
    ctx->pc = 0x191b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
label_191b6c:
    // 0x191b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191b70:
    // 0x191b70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191b74:
    // 0x191b74: 0xac4504d0  sw          $a1, 0x4D0($v0)
    ctx->pc = 0x191b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
label_191b78:
    // 0x191b78: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x191b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191b7c:
    // 0x191b7c: 0x1000000f  b           . + 4 + (0xF << 2)
label_191b80:
    if (ctx->pc == 0x191B80u) {
        ctx->pc = 0x191B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B7Cu;
        // 0x191b80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B84u;
        goto label_191b84;
    }
    ctx->pc = 0x191B7Cu;
    {
        const bool branch_taken_0x191b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B7Cu;
        // 0x191b80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b7c) {
            ctx->pc = 0x191BBCu;
            goto label_191bbc;
        }
    }
    ctx->pc = 0x191B84u;
label_191b84:
    // 0x191b84: 0x0  nop
    ctx->pc = 0x191b84u;
    // NOP
label_191b88:
    // 0x191b88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x191b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191b8c:
    // 0x191b8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x191b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_191b90:
    // 0x191b90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191b94:
    // 0x191b94: 0x104501e3  beq         $v0, $a1, . + 4 + (0x1E3 << 2)
label_191b98:
    if (ctx->pc == 0x191B98u) {
        ctx->pc = 0x191B9Cu;
        goto label_191b9c;
    }
    ctx->pc = 0x191B94u;
    {
        const bool branch_taken_0x191b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x191b94) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191B9Cu;
label_191b9c:
    // 0x191b9c: 0x8cc72c10  lw          $a3, 0x2C10($a2)
    ctx->pc = 0x191b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11280)));
label_191ba0:
    // 0x191ba0: 0x14470005  bne         $v0, $a3, . + 4 + (0x5 << 2)
label_191ba4:
    if (ctx->pc == 0x191BA4u) {
        ctx->pc = 0x191BA8u;
        goto label_191ba8;
    }
    ctx->pc = 0x191BA0u;
    {
        const bool branch_taken_0x191ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x191ba0) {
            ctx->pc = 0x191BB8u;
            goto label_191bb8;
        }
    }
    ctx->pc = 0x191BA8u;
label_191ba8:
    // 0x191ba8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191bac:
    // 0x191bac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191bb0:
    // 0x191bb0: 0x100001dc  b           . + 4 + (0x1DC << 2)
label_191bb4:
    if (ctx->pc == 0x191BB4u) {
        ctx->pc = 0x191BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BB0u;
        // 0x191bb4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BB8u;
        goto label_191bb8;
    }
    ctx->pc = 0x191BB0u;
    {
        const bool branch_taken_0x191bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BB0u;
        // 0x191bb4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bb0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191BB8u;
label_191bb8:
    // 0x191bb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x191bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_191bbc:
    // 0x191bbc: 0x0  nop
    ctx->pc = 0x191bbcu;
    // NOP
label_191bc0:
    // 0x191bc0: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x191bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_191bc4:
    // 0x191bc4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_191bc8:
    if (ctx->pc == 0x191BC8u) {
        ctx->pc = 0x191BCCu;
        goto label_191bcc;
    }
    ctx->pc = 0x191BC4u;
    {
        const bool branch_taken_0x191bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191bc4) {
            ctx->pc = 0x191B84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191b84;
        }
    }
    ctx->pc = 0x191BCCu;
label_191bcc:
    // 0x191bcc: 0x100001d5  b           . + 4 + (0x1D5 << 2)
label_191bd0:
    if (ctx->pc == 0x191BD0u) {
        ctx->pc = 0x191BD4u;
        goto label_191bd4;
    }
    ctx->pc = 0x191BCCu;
    {
        const bool branch_taken_0x191bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bcc) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191BD4u;
label_191bd4:
    // 0x191bd4: 0x0  nop
    ctx->pc = 0x191bd4u;
    // NOP
label_191bd8:
    // 0x191bd8: 0x24a4002c  addiu       $a0, $a1, 0x2C
    ctx->pc = 0x191bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
label_191bdc:
    // 0x191bdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191be0:
    // 0x191be0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191be4:
    // 0x191be4: 0xac4504d0  sw          $a1, 0x4D0($v0)
    ctx->pc = 0x191be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
label_191be8:
    // 0x191be8: 0x8f8885f4  lw          $t0, -0x7A0C($gp)
    ctx->pc = 0x191be8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191bec:
    // 0x191bec: 0x10000019  b           . + 4 + (0x19 << 2)
label_191bf0:
    if (ctx->pc == 0x191BF0u) {
        ctx->pc = 0x191BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BECu;
        // 0x191bf0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BF4u;
        goto label_191bf4;
    }
    ctx->pc = 0x191BECu;
    {
        const bool branch_taken_0x191bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BECu;
        // 0x191bf0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bec) {
            ctx->pc = 0x191C54u;
            goto label_191c54;
        }
    }
    ctx->pc = 0x191BF4u;
label_191bf4:
    // 0x191bf4: 0x0  nop
    ctx->pc = 0x191bf4u;
    // NOP
label_191bf8:
    // 0x191bf8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x191bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191bfc:
    // 0x191bfc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x191bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_191c00:
    // 0x191c00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x191c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191c04:
    // 0x191c04: 0x10a701c7  beq         $a1, $a3, . + 4 + (0x1C7 << 2)
label_191c08:
    if (ctx->pc == 0x191C08u) {
        ctx->pc = 0x191C0Cu;
        goto label_191c0c;
    }
    ctx->pc = 0x191C04u;
    {
        const bool branch_taken_0x191c04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x191c04) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191C0Cu;
label_191c0c:
    // 0x191c0c: 0x8d092c10  lw          $t1, 0x2C10($t0)
    ctx->pc = 0x191c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11280)));
label_191c10:
    // 0x191c10: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x191c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_191c14:
    // 0x191c14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x191c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_191c18:
    // 0x191c18: 0x8d062c1c  lw          $a2, 0x2C1C($t0)
    ctx->pc = 0x191c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11292)));
label_191c1c:
    // 0x191c1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_191c20:
    // 0x191c20: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x191c20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_191c24:
    // 0x191c24: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x191c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_191c28:
    // 0x191c28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x191c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_191c2c:
    // 0x191c2c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x191c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_191c30:
    // 0x191c30: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x191c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
label_191c34:
    // 0x191c34: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x191c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_191c38:
    // 0x191c38: 0x90a5003f  lbu         $a1, 0x3F($a1)
    ctx->pc = 0x191c38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
label_191c3c:
    // 0x191c3c: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
label_191c40:
    if (ctx->pc == 0x191C40u) {
        ctx->pc = 0x191C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C3Cu;
        // 0x191c40: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C44u;
        goto label_191c44;
    }
    ctx->pc = 0x191C3Cu;
    {
        const bool branch_taken_0x191c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x191C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C3Cu;
        // 0x191c40: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c3c) {
            ctx->pc = 0x191C50u;
            goto label_191c50;
        }
    }
    ctx->pc = 0x191C44u;
label_191c44:
    // 0x191c44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191c48:
    // 0x191c48: 0x100001b6  b           . + 4 + (0x1B6 << 2)
label_191c4c:
    if (ctx->pc == 0x191C4Cu) {
        ctx->pc = 0x191C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C48u;
        // 0x191c4c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C50u;
        goto label_191c50;
    }
    ctx->pc = 0x191C48u;
    {
        const bool branch_taken_0x191c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C48u;
        // 0x191c4c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c48) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191C50u;
label_191c50:
    // 0x191c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x191c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_191c54:
    // 0x191c54: 0x0  nop
    ctx->pc = 0x191c54u;
    // NOP
label_191c58:
    // 0x191c58: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x191c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_191c5c:
    // 0x191c5c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_191c60:
    if (ctx->pc == 0x191C60u) {
        ctx->pc = 0x191C64u;
        goto label_191c64;
    }
    ctx->pc = 0x191C5Cu;
    {
        const bool branch_taken_0x191c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191c5c) {
            ctx->pc = 0x191BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191bf4;
        }
    }
    ctx->pc = 0x191C64u;
label_191c64:
    // 0x191c64: 0x100001af  b           . + 4 + (0x1AF << 2)
label_191c68:
    if (ctx->pc == 0x191C68u) {
        ctx->pc = 0x191C6Cu;
        goto label_191c6c;
    }
    ctx->pc = 0x191C64u;
    {
        const bool branch_taken_0x191c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c64) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191C6Cu;
label_191c6c:
    // 0x191c6c: 0x0  nop
    ctx->pc = 0x191c6cu;
    // NOP
label_191c70:
    // 0x191c70: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191c74:
    // 0x191c74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191c78:
    // 0x191c78: 0x8c460490  lw          $a2, 0x490($v0)
    ctx->pc = 0x191c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_191c7c:
    // 0x191c7c: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x191c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_191c80:
    // 0x191c80: 0x20630005  addi        $v1, $v1, 0x5
    ctx->pc = 0x191c80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)5, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_191c84:
    // 0x191c84: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x191c84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_191c88:
    // 0x191c88: 0x102001a6  beqz        $at, . + 4 + (0x1A6 << 2)
label_191c8c:
    if (ctx->pc == 0x191C8Cu) {
        ctx->pc = 0x191C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C88u;
        // 0x191c8c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C90u;
        goto label_191c90;
    }
    ctx->pc = 0x191C88u;
    {
        const bool branch_taken_0x191c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C88u;
        // 0x191c8c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c88) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191C90u;
label_191c90:
    // 0x191c90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191c94:
    // 0x191c94: 0x2484fe80  addiu       $a0, $a0, -0x180
    ctx->pc = 0x191c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966912));
label_191c98:
    // 0x191c98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191c9c:
    // 0x191c9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_191ca0:
    // 0x191ca0: 0x600008  jr          $v1
label_191ca4:
    if (ctx->pc == 0x191CA4u) {
        ctx->pc = 0x191CA8u;
        goto label_191ca8;
    }
    ctx->pc = 0x191CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191CA8u: goto label_191ca8;
            case 0x191D70u: goto label_191d70;
            case 0x191E20u: goto label_191e20;
            case 0x191ED0u: goto label_191ed0;
            case 0x191ED8u: goto label_191ed8;
            case 0x192100u: goto label_192100;
            case 0x192324u: goto label_192324;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191CA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x191CA8u;
label_191ca8:
    // 0x191ca8: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x191ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191cac:
    // 0x191cac: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x191cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191cb0:
    // 0x191cb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191cb4:
    // 0x191cb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191cb8:
    // 0x191cb8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x191cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_191cbc:
    // 0x191cbc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x191cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_191cc0:
    // 0x191cc0: 0x10600198  beqz        $v1, . + 4 + (0x198 << 2)
label_191cc4:
    if (ctx->pc == 0x191CC4u) {
        ctx->pc = 0x191CC8u;
        goto label_191cc8;
    }
    ctx->pc = 0x191CC0u;
    {
        const bool branch_taken_0x191cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191cc0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191CC8u;
label_191cc8:
    // 0x191cc8: 0x8c430510  lw          $v1, 0x510($v0)
    ctx->pc = 0x191cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
label_191ccc:
    // 0x191ccc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x191cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_191cd0:
    // 0x191cd0: 0xac430510  sw          $v1, 0x510($v0)
    ctx->pc = 0x191cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1296), GPR_U32(ctx, 3));
label_191cd4:
    // 0x191cd4: 0x8c480490  lw          $t0, 0x490($v0)
    ctx->pc = 0x191cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_191cd8:
    // 0x191cd8: 0x8c440510  lw          $a0, 0x510($v0)
    ctx->pc = 0x191cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
label_191cdc:
    // 0x191cdc: 0x8d030030  lw          $v1, 0x30($t0)
    ctx->pc = 0x191cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_191ce0:
    // 0x191ce0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x191ce0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_191ce4:
    // 0x191ce4: 0x1460018f  bnez        $v1, . + 4 + (0x18F << 2)
label_191ce8:
    if (ctx->pc == 0x191CE8u) {
        ctx->pc = 0x191CECu;
        goto label_191cec;
    }
    ctx->pc = 0x191CE4u;
    {
        const bool branch_taken_0x191ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x191ce4) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191CECu;
label_191cec:
    // 0x191cec: 0x8d060034  lw          $a2, 0x34($t0)
    ctx->pc = 0x191cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
label_191cf0:
    // 0x191cf0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_191cf4:
    if (ctx->pc == 0x191CF4u) {
        ctx->pc = 0x191CF8u;
        goto label_191cf8;
    }
    ctx->pc = 0x191CF0u;
    {
        const bool branch_taken_0x191cf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x191cf0) {
            ctx->pc = 0x191D10u;
            goto label_191d10;
        }
    }
    ctx->pc = 0x191CF8u;
label_191cf8:
    // 0x191cf8: 0x8d070038  lw          $a3, 0x38($t0)
    ctx->pc = 0x191cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
label_191cfc:
    // 0x191cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_191d00:
    // 0x191d00: 0x8c450450  lw          $a1, 0x450($v0)
    ctx->pc = 0x191d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191d04:
    // 0x191d04: 0x8d08003c  lw          $t0, 0x3C($t0)
    ctx->pc = 0x191d04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
label_191d08:
    // 0x191d08: 0xc064d84  jal         func_193610
label_191d0c:
    if (ctx->pc == 0x191D0Cu) {
        ctx->pc = 0x191D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D08u;
        // 0x191d0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D10u;
        goto label_191d10;
    }
    ctx->pc = 0x191D08u;
    SET_GPR_U32(ctx, 31, 0x191D10u);
    ctx->pc = 0x191D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D08u;
    // 0x191d0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x191D08u, 0x191D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D10u;
label_191d10:
    // 0x191d10: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191d14:
    // 0x191d14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191d18:
    // 0x191d18: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x191d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_191d1c:
    // 0x191d1c: 0x1000000b  b           . + 4 + (0xB << 2)
label_191d20:
    if (ctx->pc == 0x191D20u) {
        ctx->pc = 0x191D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D1Cu;
        // 0x191d20: 0x24520040  addiu       $s2, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D24u;
        goto label_191d24;
    }
    ctx->pc = 0x191D1Cu;
    {
        const bool branch_taken_0x191d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D1Cu;
        // 0x191d20: 0x24520040  addiu       $s2, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d1c) {
            ctx->pc = 0x191D4Cu;
            goto label_191d4c;
        }
    }
    ctx->pc = 0x191D24u;
label_191d24:
    // 0x191d24: 0x0  nop
    ctx->pc = 0x191d24u;
    // NOP
label_191d28:
    // 0x191d28: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x191d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_191d2c:
    // 0x191d2c: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x191d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_191d30:
    // 0x191d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_191d34:
    // 0x191d34: 0x8e47002c  lw          $a3, 0x2C($s2)
    ctx->pc = 0x191d34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_191d38:
    // 0x191d38: 0x8e480030  lw          $t0, 0x30($s2)
    ctx->pc = 0x191d38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_191d3c:
    // 0x191d3c: 0x8e490034  lw          $t1, 0x34($s2)
    ctx->pc = 0x191d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_191d40:
    // 0x191d40: 0xc064ec0  jal         func_193B00
label_191d44:
    if (ctx->pc == 0x191D44u) {
        ctx->pc = 0x191D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D40u;
        // 0x191d44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D48u;
        goto label_191d48;
    }
    ctx->pc = 0x191D40u;
    SET_GPR_U32(ctx, 31, 0x191D48u);
    ctx->pc = 0x191D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D40u;
    // 0x191d44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B00u, 0x191D40u, 0x191D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D48u;
label_191d48:
    // 0x191d48: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x191d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_191d4c:
    // 0x191d4c: 0x0  nop
    ctx->pc = 0x191d4cu;
    // NOP
label_191d50:
    // 0x191d50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x191d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_191d54:
    // 0x191d54: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x191d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191d58:
    // 0x191d58: 0x1062fff2  beq         $v1, $v0, . + 4 + (-0xE << 2)
label_191d5c:
    if (ctx->pc == 0x191D5Cu) {
        ctx->pc = 0x191D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D58u;
        // 0x191d5c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D60u;
        goto label_191d60;
    }
    ctx->pc = 0x191D58u;
    {
        const bool branch_taken_0x191d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D58u;
        // 0x191d5c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d58) {
            ctx->pc = 0x191D24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191d24;
        }
    }
    ctx->pc = 0x191D60u;
label_191d60:
    // 0x191d60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191d64:
    // 0x191d64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191d68:
    // 0x191d68: 0x1000016e  b           . + 4 + (0x16E << 2)
label_191d6c:
    if (ctx->pc == 0x191D6Cu) {
        ctx->pc = 0x191D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D68u;
        // 0x191d6c: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D70u;
        goto label_191d70;
    }
    ctx->pc = 0x191D68u;
    {
        const bool branch_taken_0x191d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D68u;
        // 0x191d6c: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d68) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191D70u;
label_191d70:
    // 0x191d70: 0x8cd20030  lw          $s2, 0x30($a2)
    ctx->pc = 0x191d70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_191d74:
    // 0x191d74: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
label_191d78:
    if (ctx->pc == 0x191D78u) {
        ctx->pc = 0x191D7Cu;
        goto label_191d7c;
    }
    ctx->pc = 0x191D74u;
    {
        const bool branch_taken_0x191d74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x191d74) {
            ctx->pc = 0x191DD0u;
            goto label_191dd0;
        }
    }
    ctx->pc = 0x191D7Cu;
label_191d7c:
    // 0x191d7c: 0x8c420450  lw          $v0, 0x450($v0)
    ctx->pc = 0x191d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191d80:
    // 0x191d80: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191d84:
    // 0x191d84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191d88:
    // 0x191d88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191d8c:
    // 0x191d8c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x191d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191d90:
    // 0x191d90: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x191d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191d94:
    // 0x191d94: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191d98:
    // 0x191d98: 0x320f809  jalr        $t9
label_191d9c:
    if (ctx->pc == 0x191D9Cu) {
        ctx->pc = 0x191DA0u;
        goto label_191da0;
    }
    ctx->pc = 0x191D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191DA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191D98u, 0x191DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191DA0u;
label_191da0:
    // 0x191da0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_191da4:
    if (ctx->pc == 0x191DA4u) {
        ctx->pc = 0x191DA8u;
        goto label_191da8;
    }
    ctx->pc = 0x191DA0u;
    {
        const bool branch_taken_0x191da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191da0) {
            ctx->pc = 0x191DBCu;
            goto label_191dbc;
        }
    }
    ctx->pc = 0x191DA8u;
label_191da8:
    // 0x191da8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191dac:
    // 0x191dac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191db0:
    // 0x191db0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191db4:
    // 0x191db4: 0x1000015b  b           . + 4 + (0x15B << 2)
label_191db8:
    if (ctx->pc == 0x191DB8u) {
        ctx->pc = 0x191DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DB4u;
        // 0x191db8: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191DBCu;
        goto label_191dbc;
    }
    ctx->pc = 0x191DB4u;
    {
        const bool branch_taken_0x191db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DB4u;
        // 0x191db8: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191db4) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191DBCu;
label_191dbc:
    // 0x191dbc: 0x0  nop
    ctx->pc = 0x191dbcu;
    // NOP
label_191dc0:
    // 0x191dc0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191dc4:
    // 0x191dc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191dc8:
    // 0x191dc8: 0x10000156  b           . + 4 + (0x156 << 2)
label_191dcc:
    if (ctx->pc == 0x191DCCu) {
        ctx->pc = 0x191DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DC8u;
        // 0x191dcc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191DD0u;
        goto label_191dd0;
    }
    ctx->pc = 0x191DC8u;
    {
        const bool branch_taken_0x191dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DC8u;
        // 0x191dcc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191dc8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191DD0u;
label_191dd0:
    // 0x191dd0: 0x8c420450  lw          $v0, 0x450($v0)
    ctx->pc = 0x191dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191dd4:
    // 0x191dd4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191dd8:
    // 0x191dd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191ddc:
    // 0x191ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191de0:
    // 0x191de0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x191de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191de4:
    // 0x191de4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x191de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191de8:
    // 0x191de8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191dec:
    // 0x191dec: 0x320f809  jalr        $t9
label_191df0:
    if (ctx->pc == 0x191DF0u) {
        ctx->pc = 0x191DF4u;
        goto label_191df4;
    }
    ctx->pc = 0x191DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191DF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191DECu, 0x191DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191DF4u;
label_191df4:
    // 0x191df4: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
label_191df8:
    if (ctx->pc == 0x191DF8u) {
        ctx->pc = 0x191DFCu;
        goto label_191dfc;
    }
    ctx->pc = 0x191DF4u;
    {
        const bool branch_taken_0x191df4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x191df4) {
            ctx->pc = 0x191E10u;
            goto label_191e10;
        }
    }
    ctx->pc = 0x191DFCu;
label_191dfc:
    // 0x191dfc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191e00:
    // 0x191e00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191e04:
    // 0x191e04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191e08:
    // 0x191e08: 0x10000146  b           . + 4 + (0x146 << 2)
label_191e0c:
    if (ctx->pc == 0x191E0Cu) {
        ctx->pc = 0x191E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E08u;
        // 0x191e0c: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E10u;
        goto label_191e10;
    }
    ctx->pc = 0x191E08u;
    {
        const bool branch_taken_0x191e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E08u;
        // 0x191e0c: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e08) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191E10u;
label_191e10:
    // 0x191e10: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191e14:
    // 0x191e14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191e18:
    // 0x191e18: 0x10000142  b           . + 4 + (0x142 << 2)
label_191e1c:
    if (ctx->pc == 0x191E1Cu) {
        ctx->pc = 0x191E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E18u;
        // 0x191e1c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E20u;
        goto label_191e20;
    }
    ctx->pc = 0x191E18u;
    {
        const bool branch_taken_0x191e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E18u;
        // 0x191e1c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e18) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191E20u;
label_191e20:
    // 0x191e20: 0x8cd20030  lw          $s2, 0x30($a2)
    ctx->pc = 0x191e20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_191e24:
    // 0x191e24: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
label_191e28:
    if (ctx->pc == 0x191E28u) {
        ctx->pc = 0x191E2Cu;
        goto label_191e2c;
    }
    ctx->pc = 0x191E24u;
    {
        const bool branch_taken_0x191e24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x191e24) {
            ctx->pc = 0x191E80u;
            goto label_191e80;
        }
    }
    ctx->pc = 0x191E2Cu;
label_191e2c:
    // 0x191e2c: 0x8c420450  lw          $v0, 0x450($v0)
    ctx->pc = 0x191e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191e30:
    // 0x191e30: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191e34:
    // 0x191e34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191e38:
    // 0x191e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191e3c:
    // 0x191e3c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x191e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191e40:
    // 0x191e40: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x191e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191e44:
    // 0x191e44: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191e48:
    // 0x191e48: 0x320f809  jalr        $t9
label_191e4c:
    if (ctx->pc == 0x191E4Cu) {
        ctx->pc = 0x191E50u;
        goto label_191e50;
    }
    ctx->pc = 0x191E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191E50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191E48u, 0x191E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191E50u;
label_191e50:
    // 0x191e50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_191e54:
    if (ctx->pc == 0x191E54u) {
        ctx->pc = 0x191E58u;
        goto label_191e58;
    }
    ctx->pc = 0x191E50u;
    {
        const bool branch_taken_0x191e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191e50) {
            ctx->pc = 0x191E6Cu;
            goto label_191e6c;
        }
    }
    ctx->pc = 0x191E58u;
label_191e58:
    // 0x191e58: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191e5c:
    // 0x191e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191e60:
    // 0x191e60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191e64:
    // 0x191e64: 0x1000012f  b           . + 4 + (0x12F << 2)
label_191e68:
    if (ctx->pc == 0x191E68u) {
        ctx->pc = 0x191E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E64u;
        // 0x191e68: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E6Cu;
        goto label_191e6c;
    }
    ctx->pc = 0x191E64u;
    {
        const bool branch_taken_0x191e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E64u;
        // 0x191e68: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e64) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191E6Cu;
label_191e6c:
    // 0x191e6c: 0x0  nop
    ctx->pc = 0x191e6cu;
    // NOP
label_191e70:
    // 0x191e70: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191e74:
    // 0x191e74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191e78:
    // 0x191e78: 0x1000012a  b           . + 4 + (0x12A << 2)
label_191e7c:
    if (ctx->pc == 0x191E7Cu) {
        ctx->pc = 0x191E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E78u;
        // 0x191e7c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E80u;
        goto label_191e80;
    }
    ctx->pc = 0x191E78u;
    {
        const bool branch_taken_0x191e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E78u;
        // 0x191e7c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e78) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191E80u;
label_191e80:
    // 0x191e80: 0x8c420450  lw          $v0, 0x450($v0)
    ctx->pc = 0x191e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191e84:
    // 0x191e84: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191e88:
    // 0x191e88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191e8c:
    // 0x191e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191e90:
    // 0x191e90: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191e94:
    // 0x191e94: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x191e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191e98:
    // 0x191e98: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191e9c:
    // 0x191e9c: 0x320f809  jalr        $t9
label_191ea0:
    if (ctx->pc == 0x191EA0u) {
        ctx->pc = 0x191EA4u;
        goto label_191ea4;
    }
    ctx->pc = 0x191E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191EA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191E9Cu, 0x191EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191EA4u;
label_191ea4:
    // 0x191ea4: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_191ea8:
    if (ctx->pc == 0x191EA8u) {
        ctx->pc = 0x191EACu;
        goto label_191eac;
    }
    ctx->pc = 0x191EA4u;
    {
        const bool branch_taken_0x191ea4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x191ea4) {
            ctx->pc = 0x191EC0u;
            goto label_191ec0;
        }
    }
    ctx->pc = 0x191EACu;
label_191eac:
    // 0x191eac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191eb0:
    // 0x191eb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191eb4:
    // 0x191eb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191eb8:
    // 0x191eb8: 0x1000011a  b           . + 4 + (0x11A << 2)
label_191ebc:
    if (ctx->pc == 0x191EBCu) {
        ctx->pc = 0x191EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EB8u;
        // 0x191ebc: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EC0u;
        goto label_191ec0;
    }
    ctx->pc = 0x191EB8u;
    {
        const bool branch_taken_0x191eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EB8u;
        // 0x191ebc: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191eb8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191EC0u;
label_191ec0:
    // 0x191ec0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191ec4:
    // 0x191ec4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191ec8:
    // 0x191ec8: 0x10000116  b           . + 4 + (0x116 << 2)
label_191ecc:
    if (ctx->pc == 0x191ECCu) {
        ctx->pc = 0x191ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EC8u;
        // 0x191ecc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191ED0u;
        goto label_191ed0;
    }
    ctx->pc = 0x191EC8u;
    {
        const bool branch_taken_0x191ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EC8u;
        // 0x191ecc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ec8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191ED0u;
label_191ed0:
    // 0x191ed0: 0x10000130  b           . + 4 + (0x130 << 2)
label_191ed4:
    if (ctx->pc == 0x191ED4u) {
        ctx->pc = 0x191ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191ED0u;
        // 0x191ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191ED8u;
        goto label_191ed8;
    }
    ctx->pc = 0x191ED0u;
    {
        const bool branch_taken_0x191ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191ED0u;
        // 0x191ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ed0) {
            ctx->pc = 0x192394u;
            goto label_192394;
        }
    }
    ctx->pc = 0x191ED8u;
label_191ed8:
    // 0x191ed8: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x191ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_191edc:
    // 0x191edc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x191edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_191ee0:
    // 0x191ee0: 0x10a30073  beq         $a1, $v1, . + 4 + (0x73 << 2)
label_191ee4:
    if (ctx->pc == 0x191EE4u) {
        ctx->pc = 0x191EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EE0u;
        // 0x191ee4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EE8u;
        goto label_191ee8;
    }
    ctx->pc = 0x191EE0u;
    {
        const bool branch_taken_0x191ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x191EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EE0u;
        // 0x191ee4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ee0) {
            ctx->pc = 0x1920B0u;
            goto label_1920b0;
        }
    }
    ctx->pc = 0x191EE8u;
label_191ee8:
    // 0x191ee8: 0x10a40067  beq         $a1, $a0, . + 4 + (0x67 << 2)
label_191eec:
    if (ctx->pc == 0x191EECu) {
        ctx->pc = 0x191EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EE8u;
        // 0x191eec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EF0u;
        goto label_191ef0;
    }
    ctx->pc = 0x191EE8u;
    {
        const bool branch_taken_0x191ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x191EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EE8u;
        // 0x191eec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ee8) {
            ctx->pc = 0x192088u;
            goto label_192088;
        }
    }
    ctx->pc = 0x191EF0u;
label_191ef0:
    // 0x191ef0: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
label_191ef4:
    if (ctx->pc == 0x191EF4u) {
        ctx->pc = 0x191EF8u;
        goto label_191ef8;
    }
    ctx->pc = 0x191EF0u;
    {
        const bool branch_taken_0x191ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x191ef0) {
            ctx->pc = 0x191FC0u;
            goto label_191fc0;
        }
    }
    ctx->pc = 0x191EF8u;
label_191ef8:
    // 0x191ef8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_191efc:
    if (ctx->pc == 0x191EFCu) {
        ctx->pc = 0x191F00u;
        goto label_191f00;
    }
    ctx->pc = 0x191EF8u;
    {
        const bool branch_taken_0x191ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191ef8) {
            ctx->pc = 0x191F08u;
            goto label_191f08;
        }
    }
    ctx->pc = 0x191F00u;
label_191f00:
    // 0x191f00: 0x10000108  b           . + 4 + (0x108 << 2)
label_191f04:
    if (ctx->pc == 0x191F04u) {
        ctx->pc = 0x191F08u;
        goto label_191f08;
    }
    ctx->pc = 0x191F00u;
    {
        const bool branch_taken_0x191f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f00) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191F08u;
label_191f08:
    // 0x191f08: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x191f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191f0c:
    // 0x191f0c: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x191f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_191f10:
    // 0x191f10: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_191f14:
    if (ctx->pc == 0x191F14u) {
        ctx->pc = 0x191F18u;
        goto label_191f18;
    }
    ctx->pc = 0x191F10u;
    {
        const bool branch_taken_0x191f10 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x191f10) {
            ctx->pc = 0x191F20u;
            goto label_191f20;
        }
    }
    ctx->pc = 0x191F18u;
label_191f18:
    // 0x191f18: 0x10000008  b           . + 4 + (0x8 << 2)
label_191f1c:
    if (ctx->pc == 0x191F1Cu) {
        ctx->pc = 0x191F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F18u;
        // 0x191f1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F20u;
        goto label_191f20;
    }
    ctx->pc = 0x191F18u;
    {
        const bool branch_taken_0x191f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F18u;
        // 0x191f1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f18) {
            ctx->pc = 0x191F3Cu;
            goto label_191f3c;
        }
    }
    ctx->pc = 0x191F20u;
label_191f20:
    // 0x191f20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x191f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_191f24:
    // 0x191f24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x191f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191f28:
    // 0x191f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191f2c:
    // 0x191f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191f30:
    // 0x191f30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_191f34:
    // 0x191f34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x191f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_191f38:
    // 0x191f38: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x191f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_191f3c:
    // 0x191f3c: 0x0  nop
    ctx->pc = 0x191f3cu;
    // NOP
label_191f40:
    // 0x191f40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191f44:
    // 0x191f44: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x191f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191f48:
    // 0x191f48: 0x848201ec  lh          $v0, 0x1EC($a0)
    ctx->pc = 0x191f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 492)));
label_191f4c:
    // 0x191f4c: 0x8c630450  lw          $v1, 0x450($v1)
    ctx->pc = 0x191f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1104)));
label_191f50:
    // 0x191f50: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_191f54:
    if (ctx->pc == 0x191F54u) {
        ctx->pc = 0x191F58u;
        goto label_191f58;
    }
    ctx->pc = 0x191F50u;
    {
        const bool branch_taken_0x191f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x191f50) {
            ctx->pc = 0x191F88u;
            goto label_191f88;
        }
    }
    ctx->pc = 0x191F58u;
label_191f58:
    // 0x191f58: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x191f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
label_191f5c:
    // 0x191f5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191f60:
    // 0x191f60: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_191f64:
    if (ctx->pc == 0x191F64u) {
        ctx->pc = 0x191F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F60u;
        // 0x191f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F68u;
        goto label_191f68;
    }
    ctx->pc = 0x191F60u;
    {
        const bool branch_taken_0x191f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F60u;
        // 0x191f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f60) {
            ctx->pc = 0x191F70u;
            goto label_191f70;
        }
    }
    ctx->pc = 0x191F68u;
label_191f68:
    // 0x191f68: 0x10000002  b           . + 4 + (0x2 << 2)
label_191f6c:
    if (ctx->pc == 0x191F6Cu) {
        ctx->pc = 0x191F70u;
        goto label_191f70;
    }
    ctx->pc = 0x191F68u;
    {
        const bool branch_taken_0x191f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f68) {
            ctx->pc = 0x191F74u;
            goto label_191f74;
        }
    }
    ctx->pc = 0x191F70u;
label_191f70:
    // 0x191f70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191f74:
    // 0x191f74: 0x0  nop
    ctx->pc = 0x191f74u;
    // NOP
label_191f78:
    // 0x191f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_191f7c:
    if (ctx->pc == 0x191F7Cu) {
        ctx->pc = 0x191F80u;
        goto label_191f80;
    }
    ctx->pc = 0x191F78u;
    {
        const bool branch_taken_0x191f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f78) {
            ctx->pc = 0x191F88u;
            goto label_191f88;
        }
    }
    ctx->pc = 0x191F80u;
label_191f80:
    // 0x191f80: 0x10000002  b           . + 4 + (0x2 << 2)
label_191f84:
    if (ctx->pc == 0x191F84u) {
        ctx->pc = 0x191F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F80u;
        // 0x191f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F88u;
        goto label_191f88;
    }
    ctx->pc = 0x191F80u;
    {
        const bool branch_taken_0x191f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F80u;
        // 0x191f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f80) {
            ctx->pc = 0x191F8Cu;
            goto label_191f8c;
        }
    }
    ctx->pc = 0x191F88u;
label_191f88:
    // 0x191f88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191f8c:
    // 0x191f8c: 0x0  nop
    ctx->pc = 0x191f8cu;
    // NOP
label_191f90:
    // 0x191f90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_191f94:
    if (ctx->pc == 0x191F94u) {
        ctx->pc = 0x191F98u;
        goto label_191f98;
    }
    ctx->pc = 0x191F90u;
    {
        const bool branch_taken_0x191f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f90) {
            ctx->pc = 0x191FACu;
            goto label_191fac;
        }
    }
    ctx->pc = 0x191F98u;
label_191f98:
    // 0x191f98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191f9c:
    // 0x191f9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191fa0:
    // 0x191fa0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191fa4:
    // 0x191fa4: 0x100000df  b           . + 4 + (0xDF << 2)
label_191fa8:
    if (ctx->pc == 0x191FA8u) {
        ctx->pc = 0x191FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FA4u;
        // 0x191fa8: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191FACu;
        goto label_191fac;
    }
    ctx->pc = 0x191FA4u;
    {
        const bool branch_taken_0x191fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FA4u;
        // 0x191fa8: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fa4) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191FACu;
label_191fac:
    // 0x191fac: 0x0  nop
    ctx->pc = 0x191facu;
    // NOP
label_191fb0:
    // 0x191fb0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191fb4:
    // 0x191fb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191fb8:
    // 0x191fb8: 0x100000da  b           . + 4 + (0xDA << 2)
label_191fbc:
    if (ctx->pc == 0x191FBCu) {
        ctx->pc = 0x191FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FB8u;
        // 0x191fbc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191FC0u;
        goto label_191fc0;
    }
    ctx->pc = 0x191FB8u;
    {
        const bool branch_taken_0x191fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FB8u;
        // 0x191fbc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fb8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x191FC0u;
label_191fc0:
    // 0x191fc0: 0x8c460450  lw          $a2, 0x450($v0)
    ctx->pc = 0x191fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191fc4:
    // 0x191fc4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191fc8:
    // 0x191fc8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_191fcc:
    if (ctx->pc == 0x191FCCu) {
        ctx->pc = 0x191FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FC8u;
        // 0x191fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191FD0u;
        goto label_191fd0;
    }
    ctx->pc = 0x191FC8u;
    {
        const bool branch_taken_0x191fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FC8u;
        // 0x191fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fc8) {
            ctx->pc = 0x192044u;
            goto label_192044;
        }
    }
    ctx->pc = 0x191FD0u;
label_191fd0:
    // 0x191fd0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x191fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_191fd4:
    // 0x191fd4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x191fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_191fd8:
    // 0x191fd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191fdc:
    // 0x191fdc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x191fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_191fe0:
    // 0x191fe0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_191fe4:
    // 0x191fe4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x191fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_191fe8:
    // 0x191fe8: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x191fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_191fec:
    // 0x191fec: 0x8442022c  lh          $v0, 0x22C($v0)
    ctx->pc = 0x191fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 556)));
label_191ff0:
    // 0x191ff0: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
label_191ff4:
    if (ctx->pc == 0x191FF4u) {
        ctx->pc = 0x191FF8u;
        goto label_191ff8;
    }
    ctx->pc = 0x191FF0u;
    {
        const bool branch_taken_0x191ff0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x191ff0) {
            ctx->pc = 0x192028u;
            goto label_192028;
        }
    }
    ctx->pc = 0x191FF8u;
label_191ff8:
    // 0x191ff8: 0x84e201e8  lh          $v0, 0x1E8($a3)
    ctx->pc = 0x191ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 488)));
label_191ffc:
    // 0x191ffc: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_192000:
    if (ctx->pc == 0x192000u) {
        ctx->pc = 0x192000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FFCu;
        // 0x192000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192004u;
        goto label_192004;
    }
    ctx->pc = 0x191FFCu;
    {
        const bool branch_taken_0x191ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x192000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FFCu;
        // 0x192000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ffc) {
            ctx->pc = 0x19200Cu;
            goto label_19200c;
        }
    }
    ctx->pc = 0x192004u;
label_192004:
    // 0x192004: 0x10000003  b           . + 4 + (0x3 << 2)
label_192008:
    if (ctx->pc == 0x192008u) {
        ctx->pc = 0x19200Cu;
        goto label_19200c;
    }
    ctx->pc = 0x192004u;
    {
        const bool branch_taken_0x192004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192004) {
            ctx->pc = 0x192014u;
            goto label_192014;
        }
    }
    ctx->pc = 0x19200Cu;
label_19200c:
    // 0x19200c: 0x0  nop
    ctx->pc = 0x19200cu;
    // NOP
label_192010:
    // 0x192010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192014:
    // 0x192014: 0x0  nop
    ctx->pc = 0x192014u;
    // NOP
label_192018:
    // 0x192018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19201c:
    if (ctx->pc == 0x19201Cu) {
        ctx->pc = 0x192020u;
        goto label_192020;
    }
    ctx->pc = 0x192018u;
    {
        const bool branch_taken_0x192018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192018) {
            ctx->pc = 0x192028u;
            goto label_192028;
        }
    }
    ctx->pc = 0x192020u;
label_192020:
    // 0x192020: 0x10000002  b           . + 4 + (0x2 << 2)
label_192024:
    if (ctx->pc == 0x192024u) {
        ctx->pc = 0x192024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192020u;
        // 0x192024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192028u;
        goto label_192028;
    }
    ctx->pc = 0x192020u;
    {
        const bool branch_taken_0x192020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192020u;
        // 0x192024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192020) {
            ctx->pc = 0x19202Cu;
            goto label_19202c;
        }
    }
    ctx->pc = 0x192028u;
label_192028:
    // 0x192028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19202c:
    // 0x19202c: 0x0  nop
    ctx->pc = 0x19202cu;
    // NOP
label_192030:
    // 0x192030: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_192034:
    if (ctx->pc == 0x192034u) {
        ctx->pc = 0x192038u;
        goto label_192038;
    }
    ctx->pc = 0x192030u;
    {
        const bool branch_taken_0x192030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192030) {
            ctx->pc = 0x192040u;
            goto label_192040;
        }
    }
    ctx->pc = 0x192038u;
label_192038:
    // 0x192038: 0x10000006  b           . + 4 + (0x6 << 2)
label_19203c:
    if (ctx->pc == 0x19203Cu) {
        ctx->pc = 0x19203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192038u;
        // 0x19203c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192040u;
        goto label_192040;
    }
    ctx->pc = 0x192038u;
    {
        const bool branch_taken_0x192038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192038u;
        // 0x19203c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192038) {
            ctx->pc = 0x192054u;
            goto label_192054;
        }
    }
    ctx->pc = 0x192040u;
label_192040:
    // 0x192040: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_192044:
    // 0x192044: 0x0  nop
    ctx->pc = 0x192044u;
    // NOP
label_192048:
    // 0x192048: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x192048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_19204c:
    // 0x19204c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_192050:
    if (ctx->pc == 0x192050u) {
        ctx->pc = 0x192050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19204Cu;
        // 0x192050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192054u;
        goto label_192054;
    }
    ctx->pc = 0x19204Cu;
    {
        const bool branch_taken_0x19204c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19204Cu;
        // 0x192050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19204c) {
            ctx->pc = 0x191FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191fd0;
        }
    }
    ctx->pc = 0x192054u;
label_192054:
    // 0x192054: 0x0  nop
    ctx->pc = 0x192054u;
    // NOP
label_192058:
    // 0x192058: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19205c:
    if (ctx->pc == 0x19205Cu) {
        ctx->pc = 0x192060u;
        goto label_192060;
    }
    ctx->pc = 0x192058u;
    {
        const bool branch_taken_0x192058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192058) {
            ctx->pc = 0x192074u;
            goto label_192074;
        }
    }
    ctx->pc = 0x192060u;
label_192060:
    // 0x192060: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_192064:
    // 0x192064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192068:
    // 0x192068: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x192068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_19206c:
    // 0x19206c: 0x100000ad  b           . + 4 + (0xAD << 2)
label_192070:
    if (ctx->pc == 0x192070u) {
        ctx->pc = 0x192070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19206Cu;
        // 0x192070: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192074u;
        goto label_192074;
    }
    ctx->pc = 0x19206Cu;
    {
        const bool branch_taken_0x19206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19206Cu;
        // 0x192070: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19206c) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x192074u;
label_192074:
    // 0x192074: 0x0  nop
    ctx->pc = 0x192074u;
    // NOP
label_192078:
    // 0x192078: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19207c:
    // 0x19207c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_192080:
    // 0x192080: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_192084:
    if (ctx->pc == 0x192084u) {
        ctx->pc = 0x192084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192080u;
        // 0x192084: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192088u;
        goto label_192088;
    }
    ctx->pc = 0x192080u;
    {
        const bool branch_taken_0x192080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192080u;
        // 0x192084: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192080) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x192088u;
label_192088:
    // 0x192088: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x192088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19208c:
    // 0x19208c: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x19208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_192090:
    // 0x192090: 0x8c842c10  lw          $a0, 0x2C10($a0)
    ctx->pc = 0x192090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11280)));
label_192094:
    // 0x192094: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_192098:
    if (ctx->pc == 0x192098u) {
        ctx->pc = 0x192098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192094u;
        // 0x192098: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19209Cu;
        goto label_19209c;
    }
    ctx->pc = 0x192094u;
    {
        const bool branch_taken_0x192094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x192098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192094u;
        // 0x192098: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192094) {
            ctx->pc = 0x1920A4u;
            goto label_1920a4;
        }
    }
    ctx->pc = 0x19209Cu;
label_19209c:
    // 0x19209c: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1920a0:
    if (ctx->pc == 0x1920A0u) {
        ctx->pc = 0x1920A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19209Cu;
        // 0x1920a0: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920A4u;
        goto label_1920a4;
    }
    ctx->pc = 0x19209Cu;
    {
        const bool branch_taken_0x19209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19209Cu;
        // 0x1920a0: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19209c) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1920A4u;
label_1920a4:
    // 0x1920a4: 0x0  nop
    ctx->pc = 0x1920a4u;
    // NOP
label_1920a8:
    // 0x1920a8: 0x1000009e  b           . + 4 + (0x9E << 2)
label_1920ac:
    if (ctx->pc == 0x1920ACu) {
        ctx->pc = 0x1920ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920A8u;
        // 0x1920ac: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920B0u;
        goto label_1920b0;
    }
    ctx->pc = 0x1920A8u;
    {
        const bool branch_taken_0x1920a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920A8u;
        // 0x1920ac: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920a8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1920B0u;
label_1920b0:
    // 0x1920b0: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x1920b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1920b4:
    // 0x1920b4: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1920b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1920b8:
    // 0x1920b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1920b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1920bc:
    // 0x1920bc: 0x8ca62c10  lw          $a2, 0x2C10($a1)
    ctx->pc = 0x1920bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11280)));
label_1920c0:
    // 0x1920c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1920c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1920c4:
    // 0x1920c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1920c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1920c8:
    // 0x1920c8: 0x8ca52c1c  lw          $a1, 0x2C1C($a1)
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
label_1920cc:
    // 0x1920cc: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1920d0:
    // 0x1920d0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1920d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1920d4:
    // 0x1920d4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1920d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1920d8:
    // 0x1920d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1920d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1920dc:
    // 0x1920dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1920dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1920e0:
    // 0x1920e0: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x1920e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
label_1920e4:
    // 0x1920e4: 0x9084003f  lbu         $a0, 0x3F($a0)
    ctx->pc = 0x1920e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 63)));
label_1920e8:
    // 0x1920e8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1920ec:
    if (ctx->pc == 0x1920ECu) {
        ctx->pc = 0x1920ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920E8u;
        // 0x1920ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920F0u;
        goto label_1920f0;
    }
    ctx->pc = 0x1920E8u;
    {
        const bool branch_taken_0x1920e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1920ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920E8u;
        // 0x1920ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920e8) {
            ctx->pc = 0x1920F8u;
            goto label_1920f8;
        }
    }
    ctx->pc = 0x1920F0u;
label_1920f0:
    // 0x1920f0: 0x1000008c  b           . + 4 + (0x8C << 2)
label_1920f4:
    if (ctx->pc == 0x1920F4u) {
        ctx->pc = 0x1920F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920F0u;
        // 0x1920f4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920F8u;
        goto label_1920f8;
    }
    ctx->pc = 0x1920F0u;
    {
        const bool branch_taken_0x1920f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920F0u;
        // 0x1920f4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920f0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1920F8u;
label_1920f8:
    // 0x1920f8: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1920fc:
    if (ctx->pc == 0x1920FCu) {
        ctx->pc = 0x1920FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920F8u;
        // 0x1920fc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192100u;
        goto label_192100;
    }
    ctx->pc = 0x1920F8u;
    {
        const bool branch_taken_0x1920f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920F8u;
        // 0x1920fc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920f8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x192100u;
label_192100:
    // 0x192100: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x192100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_192104:
    // 0x192104: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x192104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_192108:
    // 0x192108: 0x10a30073  beq         $a1, $v1, . + 4 + (0x73 << 2)
label_19210c:
    if (ctx->pc == 0x19210Cu) {
        ctx->pc = 0x19210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192108u;
        // 0x19210c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192110u;
        goto label_192110;
    }
    ctx->pc = 0x192108u;
    {
        const bool branch_taken_0x192108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x19210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192108u;
        // 0x19210c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192108) {
            ctx->pc = 0x1922D8u;
            goto label_1922d8;
        }
    }
    ctx->pc = 0x192110u;
label_192110:
    // 0x192110: 0x10a40067  beq         $a1, $a0, . + 4 + (0x67 << 2)
label_192114:
    if (ctx->pc == 0x192114u) {
        ctx->pc = 0x192114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192110u;
        // 0x192114: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192118u;
        goto label_192118;
    }
    ctx->pc = 0x192110u;
    {
        const bool branch_taken_0x192110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x192114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192110u;
        // 0x192114: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192110) {
            ctx->pc = 0x1922B0u;
            goto label_1922b0;
        }
    }
    ctx->pc = 0x192118u;
label_192118:
    // 0x192118: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
label_19211c:
    if (ctx->pc == 0x19211Cu) {
        ctx->pc = 0x192120u;
        goto label_192120;
    }
    ctx->pc = 0x192118u;
    {
        const bool branch_taken_0x192118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x192118) {
            ctx->pc = 0x1921E8u;
            goto label_1921e8;
        }
    }
    ctx->pc = 0x192120u;
label_192120:
    // 0x192120: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_192124:
    if (ctx->pc == 0x192124u) {
        ctx->pc = 0x192128u;
        goto label_192128;
    }
    ctx->pc = 0x192120u;
    {
        const bool branch_taken_0x192120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x192120) {
            ctx->pc = 0x192130u;
            goto label_192130;
        }
    }
    ctx->pc = 0x192128u;
label_192128:
    // 0x192128: 0x1000007e  b           . + 4 + (0x7E << 2)
label_19212c:
    if (ctx->pc == 0x19212Cu) {
        ctx->pc = 0x192130u;
        goto label_192130;
    }
    ctx->pc = 0x192128u;
    {
        const bool branch_taken_0x192128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192128) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x192130u;
label_192130:
    // 0x192130: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x192130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_192134:
    // 0x192134: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x192134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_192138:
    // 0x192138: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_19213c:
    if (ctx->pc == 0x19213Cu) {
        ctx->pc = 0x192140u;
        goto label_192140;
    }
    ctx->pc = 0x192138u;
    {
        const bool branch_taken_0x192138 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x192138) {
            ctx->pc = 0x192148u;
            goto label_192148;
        }
    }
    ctx->pc = 0x192140u;
label_192140:
    // 0x192140: 0x10000008  b           . + 4 + (0x8 << 2)
label_192144:
    if (ctx->pc == 0x192144u) {
        ctx->pc = 0x192144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192140u;
        // 0x192144: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192148u;
        goto label_192148;
    }
    ctx->pc = 0x192140u;
    {
        const bool branch_taken_0x192140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192140u;
        // 0x192144: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192140) {
            ctx->pc = 0x192164u;
            goto label_192164;
        }
    }
    ctx->pc = 0x192148u;
label_192148:
    // 0x192148: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x192148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19214c:
    // 0x19214c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19214cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_192150:
    // 0x192150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_192154:
    // 0x192154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_192158:
    // 0x192158: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19215c:
    // 0x19215c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_192160:
    // 0x192160: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_192164:
    // 0x192164: 0x0  nop
    ctx->pc = 0x192164u;
    // NOP
label_192168:
    // 0x192168: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19216c:
    // 0x19216c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x19216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_192170:
    // 0x192170: 0x848201ec  lh          $v0, 0x1EC($a0)
    ctx->pc = 0x192170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 492)));
label_192174:
    // 0x192174: 0x8c630450  lw          $v1, 0x450($v1)
    ctx->pc = 0x192174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1104)));
label_192178:
    // 0x192178: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_19217c:
    if (ctx->pc == 0x19217Cu) {
        ctx->pc = 0x192180u;
        goto label_192180;
    }
    ctx->pc = 0x192178u;
    {
        const bool branch_taken_0x192178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x192178) {
            ctx->pc = 0x1921B0u;
            goto label_1921b0;
        }
    }
    ctx->pc = 0x192180u;
label_192180:
    // 0x192180: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x192180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
label_192184:
    // 0x192184: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x192184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_192188:
    // 0x192188: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_19218c:
    if (ctx->pc == 0x19218Cu) {
        ctx->pc = 0x19218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192188u;
        // 0x19218c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192190u;
        goto label_192190;
    }
    ctx->pc = 0x192188u;
    {
        const bool branch_taken_0x192188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192188u;
        // 0x19218c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192188) {
            ctx->pc = 0x192198u;
            goto label_192198;
        }
    }
    ctx->pc = 0x192190u;
label_192190:
    // 0x192190: 0x10000002  b           . + 4 + (0x2 << 2)
label_192194:
    if (ctx->pc == 0x192194u) {
        ctx->pc = 0x192198u;
        goto label_192198;
    }
    ctx->pc = 0x192190u;
    {
        const bool branch_taken_0x192190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192190) {
            ctx->pc = 0x19219Cu;
            goto label_19219c;
        }
    }
    ctx->pc = 0x192198u;
label_192198:
    // 0x192198: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19219c:
    // 0x19219c: 0x0  nop
    ctx->pc = 0x19219cu;
    // NOP
label_1921a0:
    // 0x1921a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1921a4:
    if (ctx->pc == 0x1921A4u) {
        ctx->pc = 0x1921A8u;
        goto label_1921a8;
    }
    ctx->pc = 0x1921A0u;
    {
        const bool branch_taken_0x1921a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1921a0) {
            ctx->pc = 0x1921B0u;
            goto label_1921b0;
        }
    }
    ctx->pc = 0x1921A8u;
label_1921a8:
    // 0x1921a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1921ac:
    if (ctx->pc == 0x1921ACu) {
        ctx->pc = 0x1921ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921A8u;
        // 0x1921ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921B0u;
        goto label_1921b0;
    }
    ctx->pc = 0x1921A8u;
    {
        const bool branch_taken_0x1921a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1921ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921A8u;
        // 0x1921ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921a8) {
            ctx->pc = 0x1921B4u;
            goto label_1921b4;
        }
    }
    ctx->pc = 0x1921B0u;
label_1921b0:
    // 0x1921b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1921b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1921b4:
    // 0x1921b4: 0x0  nop
    ctx->pc = 0x1921b4u;
    // NOP
label_1921b8:
    // 0x1921b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1921bc:
    if (ctx->pc == 0x1921BCu) {
        ctx->pc = 0x1921C0u;
        goto label_1921c0;
    }
    ctx->pc = 0x1921B8u;
    {
        const bool branch_taken_0x1921b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1921b8) {
            ctx->pc = 0x1921D4u;
            goto label_1921d4;
        }
    }
    ctx->pc = 0x1921C0u;
label_1921c0:
    // 0x1921c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1921c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1921c4:
    // 0x1921c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1921c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1921c8:
    // 0x1921c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1921c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1921cc:
    // 0x1921cc: 0x10000055  b           . + 4 + (0x55 << 2)
label_1921d0:
    if (ctx->pc == 0x1921D0u) {
        ctx->pc = 0x1921D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921CCu;
        // 0x1921d0: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921D4u;
        goto label_1921d4;
    }
    ctx->pc = 0x1921CCu;
    {
        const bool branch_taken_0x1921cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1921D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921CCu;
        // 0x1921d0: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921cc) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1921D4u;
label_1921d4:
    // 0x1921d4: 0x0  nop
    ctx->pc = 0x1921d4u;
    // NOP
label_1921d8:
    // 0x1921d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1921d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1921dc:
    // 0x1921dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1921dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1921e0:
    // 0x1921e0: 0x10000050  b           . + 4 + (0x50 << 2)
label_1921e4:
    if (ctx->pc == 0x1921E4u) {
        ctx->pc = 0x1921E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921E0u;
        // 0x1921e4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921E8u;
        goto label_1921e8;
    }
    ctx->pc = 0x1921E0u;
    {
        const bool branch_taken_0x1921e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1921E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921E0u;
        // 0x1921e4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921e0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1921E8u;
label_1921e8:
    // 0x1921e8: 0x8c460450  lw          $a2, 0x450($v0)
    ctx->pc = 0x1921e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_1921ec:
    // 0x1921ec: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1921ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1921f0:
    // 0x1921f0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1921f4:
    if (ctx->pc == 0x1921F4u) {
        ctx->pc = 0x1921F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921F0u;
        // 0x1921f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921F8u;
        goto label_1921f8;
    }
    ctx->pc = 0x1921F0u;
    {
        const bool branch_taken_0x1921f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1921F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921F0u;
        // 0x1921f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921f0) {
            ctx->pc = 0x19226Cu;
            goto label_19226c;
        }
    }
    ctx->pc = 0x1921F8u;
label_1921f8:
    // 0x1921f8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1921f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1921fc:
    // 0x1921fc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1921fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_192200:
    // 0x192200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_192204:
    // 0x192204: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x192204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_192208:
    // 0x192208: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19220c:
    // 0x19220c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_192210:
    // 0x192210: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x192210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_192214:
    // 0x192214: 0x8442022c  lh          $v0, 0x22C($v0)
    ctx->pc = 0x192214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 556)));
label_192218:
    // 0x192218: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
label_19221c:
    if (ctx->pc == 0x19221Cu) {
        ctx->pc = 0x192220u;
        goto label_192220;
    }
    ctx->pc = 0x192218u;
    {
        const bool branch_taken_0x192218 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x192218) {
            ctx->pc = 0x192250u;
            goto label_192250;
        }
    }
    ctx->pc = 0x192220u;
label_192220:
    // 0x192220: 0x84e201e8  lh          $v0, 0x1E8($a3)
    ctx->pc = 0x192220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 488)));
label_192224:
    // 0x192224: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_192228:
    if (ctx->pc == 0x192228u) {
        ctx->pc = 0x192228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192224u;
        // 0x192228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19222Cu;
        goto label_19222c;
    }
    ctx->pc = 0x192224u;
    {
        const bool branch_taken_0x192224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x192228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192224u;
        // 0x192228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192224) {
            ctx->pc = 0x192234u;
            goto label_192234;
        }
    }
    ctx->pc = 0x19222Cu;
label_19222c:
    // 0x19222c: 0x10000003  b           . + 4 + (0x3 << 2)
label_192230:
    if (ctx->pc == 0x192230u) {
        ctx->pc = 0x192234u;
        goto label_192234;
    }
    ctx->pc = 0x19222Cu;
    {
        const bool branch_taken_0x19222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19222c) {
            ctx->pc = 0x19223Cu;
            goto label_19223c;
        }
    }
    ctx->pc = 0x192234u;
label_192234:
    // 0x192234: 0x0  nop
    ctx->pc = 0x192234u;
    // NOP
label_192238:
    // 0x192238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19223c:
    // 0x19223c: 0x0  nop
    ctx->pc = 0x19223cu;
    // NOP
label_192240:
    // 0x192240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_192244:
    if (ctx->pc == 0x192244u) {
        ctx->pc = 0x192248u;
        goto label_192248;
    }
    ctx->pc = 0x192240u;
    {
        const bool branch_taken_0x192240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192240) {
            ctx->pc = 0x192250u;
            goto label_192250;
        }
    }
    ctx->pc = 0x192248u;
label_192248:
    // 0x192248: 0x10000002  b           . + 4 + (0x2 << 2)
label_19224c:
    if (ctx->pc == 0x19224Cu) {
        ctx->pc = 0x19224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192248u;
        // 0x19224c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192250u;
        goto label_192250;
    }
    ctx->pc = 0x192248u;
    {
        const bool branch_taken_0x192248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192248u;
        // 0x19224c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192248) {
            ctx->pc = 0x192254u;
            goto label_192254;
        }
    }
    ctx->pc = 0x192250u;
label_192250:
    // 0x192250: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192254:
    // 0x192254: 0x0  nop
    ctx->pc = 0x192254u;
    // NOP
label_192258:
    // 0x192258: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19225c:
    if (ctx->pc == 0x19225Cu) {
        ctx->pc = 0x192260u;
        goto label_192260;
    }
    ctx->pc = 0x192258u;
    {
        const bool branch_taken_0x192258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192258) {
            ctx->pc = 0x192268u;
            goto label_192268;
        }
    }
    ctx->pc = 0x192260u;
label_192260:
    // 0x192260: 0x10000006  b           . + 4 + (0x6 << 2)
label_192264:
    if (ctx->pc == 0x192264u) {
        ctx->pc = 0x192264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192260u;
        // 0x192264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192268u;
        goto label_192268;
    }
    ctx->pc = 0x192260u;
    {
        const bool branch_taken_0x192260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192260u;
        // 0x192264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192260) {
            ctx->pc = 0x19227Cu;
            goto label_19227c;
        }
    }
    ctx->pc = 0x192268u;
label_192268:
    // 0x192268: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19226c:
    // 0x19226c: 0x0  nop
    ctx->pc = 0x19226cu;
    // NOP
label_192270:
    // 0x192270: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x192270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_192274:
    // 0x192274: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_192278:
    if (ctx->pc == 0x192278u) {
        ctx->pc = 0x192278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192274u;
        // 0x192278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19227Cu;
        goto label_19227c;
    }
    ctx->pc = 0x192274u;
    {
        const bool branch_taken_0x192274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192274u;
        // 0x192278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192274) {
            ctx->pc = 0x1921F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1921f8;
        }
    }
    ctx->pc = 0x19227Cu;
label_19227c:
    // 0x19227c: 0x0  nop
    ctx->pc = 0x19227cu;
    // NOP
label_192280:
    // 0x192280: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_192284:
    if (ctx->pc == 0x192284u) {
        ctx->pc = 0x192288u;
        goto label_192288;
    }
    ctx->pc = 0x192280u;
    {
        const bool branch_taken_0x192280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192280) {
            ctx->pc = 0x19229Cu;
            goto label_19229c;
        }
    }
    ctx->pc = 0x192288u;
label_192288:
    // 0x192288: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19228c:
    // 0x19228c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192290:
    // 0x192290: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x192290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_192294:
    // 0x192294: 0x10000023  b           . + 4 + (0x23 << 2)
label_192298:
    if (ctx->pc == 0x192298u) {
        ctx->pc = 0x192298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192294u;
        // 0x192298: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19229Cu;
        goto label_19229c;
    }
    ctx->pc = 0x192294u;
    {
        const bool branch_taken_0x192294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192294u;
        // 0x192298: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192294) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x19229Cu;
label_19229c:
    // 0x19229c: 0x0  nop
    ctx->pc = 0x19229cu;
    // NOP
label_1922a0:
    // 0x1922a0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1922a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1922a4:
    // 0x1922a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1922a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1922a8:
    // 0x1922a8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1922ac:
    if (ctx->pc == 0x1922ACu) {
        ctx->pc = 0x1922ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922A8u;
        // 0x1922ac: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922B0u;
        goto label_1922b0;
    }
    ctx->pc = 0x1922A8u;
    {
        const bool branch_taken_0x1922a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922A8u;
        // 0x1922ac: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922a8) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1922B0u;
label_1922b0:
    // 0x1922b0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1922b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1922b4:
    // 0x1922b4: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x1922b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1922b8:
    // 0x1922b8: 0x8c842c10  lw          $a0, 0x2C10($a0)
    ctx->pc = 0x1922b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11280)));
label_1922bc:
    // 0x1922bc: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_1922c0:
    if (ctx->pc == 0x1922C0u) {
        ctx->pc = 0x1922C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922BCu;
        // 0x1922c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922C4u;
        goto label_1922c4;
    }
    ctx->pc = 0x1922BCu;
    {
        const bool branch_taken_0x1922bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1922C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922BCu;
        // 0x1922c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922bc) {
            ctx->pc = 0x1922CCu;
            goto label_1922cc;
        }
    }
    ctx->pc = 0x1922C4u;
label_1922c4:
    // 0x1922c4: 0x10000017  b           . + 4 + (0x17 << 2)
label_1922c8:
    if (ctx->pc == 0x1922C8u) {
        ctx->pc = 0x1922C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922C4u;
        // 0x1922c8: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922CCu;
        goto label_1922cc;
    }
    ctx->pc = 0x1922C4u;
    {
        const bool branch_taken_0x1922c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922C4u;
        // 0x1922c8: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922c4) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1922CCu;
label_1922cc:
    // 0x1922cc: 0x0  nop
    ctx->pc = 0x1922ccu;
    // NOP
label_1922d0:
    // 0x1922d0: 0x10000014  b           . + 4 + (0x14 << 2)
label_1922d4:
    if (ctx->pc == 0x1922D4u) {
        ctx->pc = 0x1922D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922D0u;
        // 0x1922d4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922D8u;
        goto label_1922d8;
    }
    ctx->pc = 0x1922D0u;
    {
        const bool branch_taken_0x1922d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922D0u;
        // 0x1922d4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922d0) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x1922D8u;
label_1922d8:
    // 0x1922d8: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x1922d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1922dc:
    // 0x1922dc: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1922dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1922e0:
    // 0x1922e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1922e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1922e4:
    // 0x1922e4: 0x8ca62c10  lw          $a2, 0x2C10($a1)
    ctx->pc = 0x1922e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11280)));
label_1922e8:
    // 0x1922e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1922e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1922ec:
    // 0x1922ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1922ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1922f0:
    // 0x1922f0: 0x8ca52c1c  lw          $a1, 0x2C1C($a1)
    ctx->pc = 0x1922f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
label_1922f4:
    // 0x1922f4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1922f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1922f8:
    // 0x1922f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1922f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1922fc:
    // 0x1922fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1922fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_192300:
    // 0x192300: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x192300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_192304:
    // 0x192304: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x192304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_192308:
    // 0x192308: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x192308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
label_19230c:
    // 0x19230c: 0x9084003f  lbu         $a0, 0x3F($a0)
    ctx->pc = 0x19230cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 63)));
label_192310:
    // 0x192310: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_192314:
    if (ctx->pc == 0x192314u) {
        ctx->pc = 0x192314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192310u;
        // 0x192314: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192318u;
        goto label_192318;
    }
    ctx->pc = 0x192310u;
    {
        const bool branch_taken_0x192310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x192314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192310u;
        // 0x192314: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192310) {
            ctx->pc = 0x192320u;
            goto label_192320;
        }
    }
    ctx->pc = 0x192318u;
label_192318:
    // 0x192318: 0x10000002  b           . + 4 + (0x2 << 2)
label_19231c:
    if (ctx->pc == 0x19231Cu) {
        ctx->pc = 0x19231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192318u;
        // 0x19231c: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192320u;
        goto label_192320;
    }
    ctx->pc = 0x192318u;
    {
        const bool branch_taken_0x192318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192318u;
        // 0x19231c: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192318) {
            ctx->pc = 0x192324u;
            goto label_192324;
        }
    }
    ctx->pc = 0x192320u;
label_192320:
    // 0x192320: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x192320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
label_192324:
    // 0x192324: 0x0  nop
    ctx->pc = 0x192324u;
    // NOP
label_192328:
    // 0x192328: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19232c:
    // 0x19232c: 0x0  nop
    ctx->pc = 0x19232cu;
    // NOP
label_192330:
    // 0x192330: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x192330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_192334:
    // 0x192334: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x192334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_192338:
    // 0x192338: 0x1440fce6  bnez        $v0, . + 4 + (-0x31A << 2)
label_19233c:
    if (ctx->pc == 0x19233Cu) {
        ctx->pc = 0x19233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192338u;
        // 0x19233c: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192340u;
        goto label_192340;
    }
    ctx->pc = 0x192338u;
    {
        const bool branch_taken_0x192338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192338u;
        // 0x19233c: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192338) {
            ctx->pc = 0x1916D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1916d4;
        }
    }
    ctx->pc = 0x192340u;
label_192340:
    // 0x192340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192344:
    // 0x192344: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x192344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192348:
    // 0x192348: 0x10000008  b           . + 4 + (0x8 << 2)
label_19234c:
    if (ctx->pc == 0x19234Cu) {
        ctx->pc = 0x19234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192348u;
        // 0x19234c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192350u;
        goto label_192350;
    }
    ctx->pc = 0x192348u;
    {
        const bool branch_taken_0x192348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192348u;
        // 0x19234c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192348) {
            ctx->pc = 0x19236Cu;
            goto label_19236c;
        }
    }
    ctx->pc = 0x192350u;
label_192350:
    // 0x192350: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x192350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_192354:
    // 0x192354: 0x8c4204d0  lw          $v0, 0x4D0($v0)
    ctx->pc = 0x192354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_192358:
    // 0x192358: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_19235c:
    if (ctx->pc == 0x19235Cu) {
        ctx->pc = 0x192360u;
        goto label_192360;
    }
    ctx->pc = 0x192358u;
    {
        const bool branch_taken_0x192358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x192358) {
            ctx->pc = 0x192364u;
            goto label_192364;
        }
    }
    ctx->pc = 0x192360u;
label_192360:
    // 0x192360: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_192364:
    // 0x192364: 0x0  nop
    ctx->pc = 0x192364u;
    // NOP
label_192368:
    // 0x192368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19236c:
    // 0x19236c: 0x0  nop
    ctx->pc = 0x19236cu;
    // NOP
label_192370:
    // 0x192370: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x192370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_192374:
    // 0x192374: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_192378:
    if (ctx->pc == 0x192378u) {
        ctx->pc = 0x192378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192374u;
        // 0x192378: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19237Cu;
        goto label_19237c;
    }
    ctx->pc = 0x192374u;
    {
        const bool branch_taken_0x192374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192374u;
        // 0x192378: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192374) {
            ctx->pc = 0x192350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192350;
        }
    }
    ctx->pc = 0x19237Cu;
label_19237c:
    // 0x19237c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_192380:
    if (ctx->pc == 0x192380u) {
        ctx->pc = 0x192380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19237Cu;
        // 0x192380: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192384u;
        goto label_192384;
    }
    ctx->pc = 0x19237Cu;
    {
        const bool branch_taken_0x19237c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x192380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19237Cu;
        // 0x192380: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19237c) {
            ctx->pc = 0x192394u;
            goto label_192394;
        }
    }
    ctx->pc = 0x192384u;
label_192384:
    // 0x192384: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
label_192388:
    if (ctx->pc == 0x192388u) {
        ctx->pc = 0x192388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192384u;
        // 0x192388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19238Cu;
        goto label_19238c;
    }
    ctx->pc = 0x192384u;
    {
        const bool branch_taken_0x192384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x192388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192384u;
        // 0x192388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192384) {
            ctx->pc = 0x192394u;
            goto label_192394;
        }
    }
    ctx->pc = 0x19238Cu;
label_19238c:
    // 0x19238c: 0x10000001  b           . + 4 + (0x1 << 2)
label_192390:
    if (ctx->pc == 0x192390u) {
        ctx->pc = 0x192390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19238Cu;
        // 0x192390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192394u;
        goto label_192394;
    }
    ctx->pc = 0x19238Cu;
    {
        const bool branch_taken_0x19238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19238Cu;
        // 0x192390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19238c) {
            ctx->pc = 0x192394u;
            goto label_192394;
        }
    }
    ctx->pc = 0x192394u;
label_192394:
    // 0x192394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x192394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_192398:
    // 0x192398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19239c:
    // 0x19239c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19239cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1923a0:
    // 0x1923a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1923a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1923a4:
    // 0x1923a4: 0x3e00008  jr          $ra
label_1923a8:
    if (ctx->pc == 0x1923A8u) {
        ctx->pc = 0x1923A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923A4u;
        // 0x1923a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1923ACu;
        goto label_fallthrough_0x1923a4;
    }
    ctx->pc = 0x1923A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1923A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923A4u;
        // 0x1923a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1923A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1923a4:
    ctx->pc = 0x1923ACu;
}
