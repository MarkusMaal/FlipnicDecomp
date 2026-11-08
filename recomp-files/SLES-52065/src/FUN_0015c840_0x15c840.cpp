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

// Function: FUN_0015c840
// Address: 0x15c840 - 0x15cf50
void FUN_0015c840_0x15c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c840_0x15c840");
#endif

    switch (ctx->pc) {
        case 0x15c840u: goto label_15c840;
        case 0x15c844u: goto label_15c844;
        case 0x15c848u: goto label_15c848;
        case 0x15c84cu: goto label_15c84c;
        case 0x15c850u: goto label_15c850;
        case 0x15c854u: goto label_15c854;
        case 0x15c858u: goto label_15c858;
        case 0x15c85cu: goto label_15c85c;
        case 0x15c860u: goto label_15c860;
        case 0x15c864u: goto label_15c864;
        case 0x15c868u: goto label_15c868;
        case 0x15c86cu: goto label_15c86c;
        case 0x15c870u: goto label_15c870;
        case 0x15c874u: goto label_15c874;
        case 0x15c878u: goto label_15c878;
        case 0x15c87cu: goto label_15c87c;
        case 0x15c880u: goto label_15c880;
        case 0x15c884u: goto label_15c884;
        case 0x15c888u: goto label_15c888;
        case 0x15c88cu: goto label_15c88c;
        case 0x15c890u: goto label_15c890;
        case 0x15c894u: goto label_15c894;
        case 0x15c898u: goto label_15c898;
        case 0x15c89cu: goto label_15c89c;
        case 0x15c8a0u: goto label_15c8a0;
        case 0x15c8a4u: goto label_15c8a4;
        case 0x15c8a8u: goto label_15c8a8;
        case 0x15c8acu: goto label_15c8ac;
        case 0x15c8b0u: goto label_15c8b0;
        case 0x15c8b4u: goto label_15c8b4;
        case 0x15c8b8u: goto label_15c8b8;
        case 0x15c8bcu: goto label_15c8bc;
        case 0x15c8c0u: goto label_15c8c0;
        case 0x15c8c4u: goto label_15c8c4;
        case 0x15c8c8u: goto label_15c8c8;
        case 0x15c8ccu: goto label_15c8cc;
        case 0x15c8d0u: goto label_15c8d0;
        case 0x15c8d4u: goto label_15c8d4;
        case 0x15c8d8u: goto label_15c8d8;
        case 0x15c8dcu: goto label_15c8dc;
        case 0x15c8e0u: goto label_15c8e0;
        case 0x15c8e4u: goto label_15c8e4;
        case 0x15c8e8u: goto label_15c8e8;
        case 0x15c8ecu: goto label_15c8ec;
        case 0x15c8f0u: goto label_15c8f0;
        case 0x15c8f4u: goto label_15c8f4;
        case 0x15c8f8u: goto label_15c8f8;
        case 0x15c8fcu: goto label_15c8fc;
        case 0x15c900u: goto label_15c900;
        case 0x15c904u: goto label_15c904;
        case 0x15c908u: goto label_15c908;
        case 0x15c90cu: goto label_15c90c;
        case 0x15c910u: goto label_15c910;
        case 0x15c914u: goto label_15c914;
        case 0x15c918u: goto label_15c918;
        case 0x15c91cu: goto label_15c91c;
        case 0x15c920u: goto label_15c920;
        case 0x15c924u: goto label_15c924;
        case 0x15c928u: goto label_15c928;
        case 0x15c92cu: goto label_15c92c;
        case 0x15c930u: goto label_15c930;
        case 0x15c934u: goto label_15c934;
        case 0x15c938u: goto label_15c938;
        case 0x15c93cu: goto label_15c93c;
        case 0x15c940u: goto label_15c940;
        case 0x15c944u: goto label_15c944;
        case 0x15c948u: goto label_15c948;
        case 0x15c94cu: goto label_15c94c;
        case 0x15c950u: goto label_15c950;
        case 0x15c954u: goto label_15c954;
        case 0x15c958u: goto label_15c958;
        case 0x15c95cu: goto label_15c95c;
        case 0x15c960u: goto label_15c960;
        case 0x15c964u: goto label_15c964;
        case 0x15c968u: goto label_15c968;
        case 0x15c96cu: goto label_15c96c;
        case 0x15c970u: goto label_15c970;
        case 0x15c974u: goto label_15c974;
        case 0x15c978u: goto label_15c978;
        case 0x15c97cu: goto label_15c97c;
        case 0x15c980u: goto label_15c980;
        case 0x15c984u: goto label_15c984;
        case 0x15c988u: goto label_15c988;
        case 0x15c98cu: goto label_15c98c;
        case 0x15c990u: goto label_15c990;
        case 0x15c994u: goto label_15c994;
        case 0x15c998u: goto label_15c998;
        case 0x15c99cu: goto label_15c99c;
        case 0x15c9a0u: goto label_15c9a0;
        case 0x15c9a4u: goto label_15c9a4;
        case 0x15c9a8u: goto label_15c9a8;
        case 0x15c9acu: goto label_15c9ac;
        case 0x15c9b0u: goto label_15c9b0;
        case 0x15c9b4u: goto label_15c9b4;
        case 0x15c9b8u: goto label_15c9b8;
        case 0x15c9bcu: goto label_15c9bc;
        case 0x15c9c0u: goto label_15c9c0;
        case 0x15c9c4u: goto label_15c9c4;
        case 0x15c9c8u: goto label_15c9c8;
        case 0x15c9ccu: goto label_15c9cc;
        case 0x15c9d0u: goto label_15c9d0;
        case 0x15c9d4u: goto label_15c9d4;
        case 0x15c9d8u: goto label_15c9d8;
        case 0x15c9dcu: goto label_15c9dc;
        case 0x15c9e0u: goto label_15c9e0;
        case 0x15c9e4u: goto label_15c9e4;
        case 0x15c9e8u: goto label_15c9e8;
        case 0x15c9ecu: goto label_15c9ec;
        case 0x15c9f0u: goto label_15c9f0;
        case 0x15c9f4u: goto label_15c9f4;
        case 0x15c9f8u: goto label_15c9f8;
        case 0x15c9fcu: goto label_15c9fc;
        case 0x15ca00u: goto label_15ca00;
        case 0x15ca04u: goto label_15ca04;
        case 0x15ca08u: goto label_15ca08;
        case 0x15ca0cu: goto label_15ca0c;
        case 0x15ca10u: goto label_15ca10;
        case 0x15ca14u: goto label_15ca14;
        case 0x15ca18u: goto label_15ca18;
        case 0x15ca1cu: goto label_15ca1c;
        case 0x15ca20u: goto label_15ca20;
        case 0x15ca24u: goto label_15ca24;
        case 0x15ca28u: goto label_15ca28;
        case 0x15ca2cu: goto label_15ca2c;
        case 0x15ca30u: goto label_15ca30;
        case 0x15ca34u: goto label_15ca34;
        case 0x15ca38u: goto label_15ca38;
        case 0x15ca3cu: goto label_15ca3c;
        case 0x15ca40u: goto label_15ca40;
        case 0x15ca44u: goto label_15ca44;
        case 0x15ca48u: goto label_15ca48;
        case 0x15ca4cu: goto label_15ca4c;
        case 0x15ca50u: goto label_15ca50;
        case 0x15ca54u: goto label_15ca54;
        case 0x15ca58u: goto label_15ca58;
        case 0x15ca5cu: goto label_15ca5c;
        case 0x15ca60u: goto label_15ca60;
        case 0x15ca64u: goto label_15ca64;
        case 0x15ca68u: goto label_15ca68;
        case 0x15ca6cu: goto label_15ca6c;
        case 0x15ca70u: goto label_15ca70;
        case 0x15ca74u: goto label_15ca74;
        case 0x15ca78u: goto label_15ca78;
        case 0x15ca7cu: goto label_15ca7c;
        case 0x15ca80u: goto label_15ca80;
        case 0x15ca84u: goto label_15ca84;
        case 0x15ca88u: goto label_15ca88;
        case 0x15ca8cu: goto label_15ca8c;
        case 0x15ca90u: goto label_15ca90;
        case 0x15ca94u: goto label_15ca94;
        case 0x15ca98u: goto label_15ca98;
        case 0x15ca9cu: goto label_15ca9c;
        case 0x15caa0u: goto label_15caa0;
        case 0x15caa4u: goto label_15caa4;
        case 0x15caa8u: goto label_15caa8;
        case 0x15caacu: goto label_15caac;
        case 0x15cab0u: goto label_15cab0;
        case 0x15cab4u: goto label_15cab4;
        case 0x15cab8u: goto label_15cab8;
        case 0x15cabcu: goto label_15cabc;
        case 0x15cac0u: goto label_15cac0;
        case 0x15cac4u: goto label_15cac4;
        case 0x15cac8u: goto label_15cac8;
        case 0x15caccu: goto label_15cacc;
        case 0x15cad0u: goto label_15cad0;
        case 0x15cad4u: goto label_15cad4;
        case 0x15cad8u: goto label_15cad8;
        case 0x15cadcu: goto label_15cadc;
        case 0x15cae0u: goto label_15cae0;
        case 0x15cae4u: goto label_15cae4;
        case 0x15cae8u: goto label_15cae8;
        case 0x15caecu: goto label_15caec;
        case 0x15caf0u: goto label_15caf0;
        case 0x15caf4u: goto label_15caf4;
        case 0x15caf8u: goto label_15caf8;
        case 0x15cafcu: goto label_15cafc;
        case 0x15cb00u: goto label_15cb00;
        case 0x15cb04u: goto label_15cb04;
        case 0x15cb08u: goto label_15cb08;
        case 0x15cb0cu: goto label_15cb0c;
        case 0x15cb10u: goto label_15cb10;
        case 0x15cb14u: goto label_15cb14;
        case 0x15cb18u: goto label_15cb18;
        case 0x15cb1cu: goto label_15cb1c;
        case 0x15cb20u: goto label_15cb20;
        case 0x15cb24u: goto label_15cb24;
        case 0x15cb28u: goto label_15cb28;
        case 0x15cb2cu: goto label_15cb2c;
        case 0x15cb30u: goto label_15cb30;
        case 0x15cb34u: goto label_15cb34;
        case 0x15cb38u: goto label_15cb38;
        case 0x15cb3cu: goto label_15cb3c;
        case 0x15cb40u: goto label_15cb40;
        case 0x15cb44u: goto label_15cb44;
        case 0x15cb48u: goto label_15cb48;
        case 0x15cb4cu: goto label_15cb4c;
        case 0x15cb50u: goto label_15cb50;
        case 0x15cb54u: goto label_15cb54;
        case 0x15cb58u: goto label_15cb58;
        case 0x15cb5cu: goto label_15cb5c;
        case 0x15cb60u: goto label_15cb60;
        case 0x15cb64u: goto label_15cb64;
        case 0x15cb68u: goto label_15cb68;
        case 0x15cb6cu: goto label_15cb6c;
        case 0x15cb70u: goto label_15cb70;
        case 0x15cb74u: goto label_15cb74;
        case 0x15cb78u: goto label_15cb78;
        case 0x15cb7cu: goto label_15cb7c;
        case 0x15cb80u: goto label_15cb80;
        case 0x15cb84u: goto label_15cb84;
        case 0x15cb88u: goto label_15cb88;
        case 0x15cb8cu: goto label_15cb8c;
        case 0x15cb90u: goto label_15cb90;
        case 0x15cb94u: goto label_15cb94;
        case 0x15cb98u: goto label_15cb98;
        case 0x15cb9cu: goto label_15cb9c;
        case 0x15cba0u: goto label_15cba0;
        case 0x15cba4u: goto label_15cba4;
        case 0x15cba8u: goto label_15cba8;
        case 0x15cbacu: goto label_15cbac;
        case 0x15cbb0u: goto label_15cbb0;
        case 0x15cbb4u: goto label_15cbb4;
        case 0x15cbb8u: goto label_15cbb8;
        case 0x15cbbcu: goto label_15cbbc;
        case 0x15cbc0u: goto label_15cbc0;
        case 0x15cbc4u: goto label_15cbc4;
        case 0x15cbc8u: goto label_15cbc8;
        case 0x15cbccu: goto label_15cbcc;
        case 0x15cbd0u: goto label_15cbd0;
        case 0x15cbd4u: goto label_15cbd4;
        case 0x15cbd8u: goto label_15cbd8;
        case 0x15cbdcu: goto label_15cbdc;
        case 0x15cbe0u: goto label_15cbe0;
        case 0x15cbe4u: goto label_15cbe4;
        case 0x15cbe8u: goto label_15cbe8;
        case 0x15cbecu: goto label_15cbec;
        case 0x15cbf0u: goto label_15cbf0;
        case 0x15cbf4u: goto label_15cbf4;
        case 0x15cbf8u: goto label_15cbf8;
        case 0x15cbfcu: goto label_15cbfc;
        case 0x15cc00u: goto label_15cc00;
        case 0x15cc04u: goto label_15cc04;
        case 0x15cc08u: goto label_15cc08;
        case 0x15cc0cu: goto label_15cc0c;
        case 0x15cc10u: goto label_15cc10;
        case 0x15cc14u: goto label_15cc14;
        case 0x15cc18u: goto label_15cc18;
        case 0x15cc1cu: goto label_15cc1c;
        case 0x15cc20u: goto label_15cc20;
        case 0x15cc24u: goto label_15cc24;
        case 0x15cc28u: goto label_15cc28;
        case 0x15cc2cu: goto label_15cc2c;
        case 0x15cc30u: goto label_15cc30;
        case 0x15cc34u: goto label_15cc34;
        case 0x15cc38u: goto label_15cc38;
        case 0x15cc3cu: goto label_15cc3c;
        case 0x15cc40u: goto label_15cc40;
        case 0x15cc44u: goto label_15cc44;
        case 0x15cc48u: goto label_15cc48;
        case 0x15cc4cu: goto label_15cc4c;
        case 0x15cc50u: goto label_15cc50;
        case 0x15cc54u: goto label_15cc54;
        case 0x15cc58u: goto label_15cc58;
        case 0x15cc5cu: goto label_15cc5c;
        case 0x15cc60u: goto label_15cc60;
        case 0x15cc64u: goto label_15cc64;
        case 0x15cc68u: goto label_15cc68;
        case 0x15cc6cu: goto label_15cc6c;
        case 0x15cc70u: goto label_15cc70;
        case 0x15cc74u: goto label_15cc74;
        case 0x15cc78u: goto label_15cc78;
        case 0x15cc7cu: goto label_15cc7c;
        case 0x15cc80u: goto label_15cc80;
        case 0x15cc84u: goto label_15cc84;
        case 0x15cc88u: goto label_15cc88;
        case 0x15cc8cu: goto label_15cc8c;
        case 0x15cc90u: goto label_15cc90;
        case 0x15cc94u: goto label_15cc94;
        case 0x15cc98u: goto label_15cc98;
        case 0x15cc9cu: goto label_15cc9c;
        case 0x15cca0u: goto label_15cca0;
        case 0x15cca4u: goto label_15cca4;
        case 0x15cca8u: goto label_15cca8;
        case 0x15ccacu: goto label_15ccac;
        case 0x15ccb0u: goto label_15ccb0;
        case 0x15ccb4u: goto label_15ccb4;
        case 0x15ccb8u: goto label_15ccb8;
        case 0x15ccbcu: goto label_15ccbc;
        case 0x15ccc0u: goto label_15ccc0;
        case 0x15ccc4u: goto label_15ccc4;
        case 0x15ccc8u: goto label_15ccc8;
        case 0x15ccccu: goto label_15cccc;
        case 0x15ccd0u: goto label_15ccd0;
        case 0x15ccd4u: goto label_15ccd4;
        case 0x15ccd8u: goto label_15ccd8;
        case 0x15ccdcu: goto label_15ccdc;
        case 0x15cce0u: goto label_15cce0;
        case 0x15cce4u: goto label_15cce4;
        case 0x15cce8u: goto label_15cce8;
        case 0x15ccecu: goto label_15ccec;
        case 0x15ccf0u: goto label_15ccf0;
        case 0x15ccf4u: goto label_15ccf4;
        case 0x15ccf8u: goto label_15ccf8;
        case 0x15ccfcu: goto label_15ccfc;
        case 0x15cd00u: goto label_15cd00;
        case 0x15cd04u: goto label_15cd04;
        case 0x15cd08u: goto label_15cd08;
        case 0x15cd0cu: goto label_15cd0c;
        case 0x15cd10u: goto label_15cd10;
        case 0x15cd14u: goto label_15cd14;
        case 0x15cd18u: goto label_15cd18;
        case 0x15cd1cu: goto label_15cd1c;
        case 0x15cd20u: goto label_15cd20;
        case 0x15cd24u: goto label_15cd24;
        case 0x15cd28u: goto label_15cd28;
        case 0x15cd2cu: goto label_15cd2c;
        case 0x15cd30u: goto label_15cd30;
        case 0x15cd34u: goto label_15cd34;
        case 0x15cd38u: goto label_15cd38;
        case 0x15cd3cu: goto label_15cd3c;
        case 0x15cd40u: goto label_15cd40;
        case 0x15cd44u: goto label_15cd44;
        case 0x15cd48u: goto label_15cd48;
        case 0x15cd4cu: goto label_15cd4c;
        case 0x15cd50u: goto label_15cd50;
        case 0x15cd54u: goto label_15cd54;
        case 0x15cd58u: goto label_15cd58;
        case 0x15cd5cu: goto label_15cd5c;
        case 0x15cd60u: goto label_15cd60;
        case 0x15cd64u: goto label_15cd64;
        case 0x15cd68u: goto label_15cd68;
        case 0x15cd6cu: goto label_15cd6c;
        case 0x15cd70u: goto label_15cd70;
        case 0x15cd74u: goto label_15cd74;
        case 0x15cd78u: goto label_15cd78;
        case 0x15cd7cu: goto label_15cd7c;
        case 0x15cd80u: goto label_15cd80;
        case 0x15cd84u: goto label_15cd84;
        case 0x15cd88u: goto label_15cd88;
        case 0x15cd8cu: goto label_15cd8c;
        case 0x15cd90u: goto label_15cd90;
        case 0x15cd94u: goto label_15cd94;
        case 0x15cd98u: goto label_15cd98;
        case 0x15cd9cu: goto label_15cd9c;
        case 0x15cda0u: goto label_15cda0;
        case 0x15cda4u: goto label_15cda4;
        case 0x15cda8u: goto label_15cda8;
        case 0x15cdacu: goto label_15cdac;
        case 0x15cdb0u: goto label_15cdb0;
        case 0x15cdb4u: goto label_15cdb4;
        case 0x15cdb8u: goto label_15cdb8;
        case 0x15cdbcu: goto label_15cdbc;
        case 0x15cdc0u: goto label_15cdc0;
        case 0x15cdc4u: goto label_15cdc4;
        case 0x15cdc8u: goto label_15cdc8;
        case 0x15cdccu: goto label_15cdcc;
        case 0x15cdd0u: goto label_15cdd0;
        case 0x15cdd4u: goto label_15cdd4;
        case 0x15cdd8u: goto label_15cdd8;
        case 0x15cddcu: goto label_15cddc;
        case 0x15cde0u: goto label_15cde0;
        case 0x15cde4u: goto label_15cde4;
        case 0x15cde8u: goto label_15cde8;
        case 0x15cdecu: goto label_15cdec;
        case 0x15cdf0u: goto label_15cdf0;
        case 0x15cdf4u: goto label_15cdf4;
        case 0x15cdf8u: goto label_15cdf8;
        case 0x15cdfcu: goto label_15cdfc;
        case 0x15ce00u: goto label_15ce00;
        case 0x15ce04u: goto label_15ce04;
        case 0x15ce08u: goto label_15ce08;
        case 0x15ce0cu: goto label_15ce0c;
        case 0x15ce10u: goto label_15ce10;
        case 0x15ce14u: goto label_15ce14;
        case 0x15ce18u: goto label_15ce18;
        case 0x15ce1cu: goto label_15ce1c;
        case 0x15ce20u: goto label_15ce20;
        case 0x15ce24u: goto label_15ce24;
        case 0x15ce28u: goto label_15ce28;
        case 0x15ce2cu: goto label_15ce2c;
        case 0x15ce30u: goto label_15ce30;
        case 0x15ce34u: goto label_15ce34;
        case 0x15ce38u: goto label_15ce38;
        case 0x15ce3cu: goto label_15ce3c;
        case 0x15ce40u: goto label_15ce40;
        case 0x15ce44u: goto label_15ce44;
        case 0x15ce48u: goto label_15ce48;
        case 0x15ce4cu: goto label_15ce4c;
        case 0x15ce50u: goto label_15ce50;
        case 0x15ce54u: goto label_15ce54;
        case 0x15ce58u: goto label_15ce58;
        case 0x15ce5cu: goto label_15ce5c;
        case 0x15ce60u: goto label_15ce60;
        case 0x15ce64u: goto label_15ce64;
        case 0x15ce68u: goto label_15ce68;
        case 0x15ce6cu: goto label_15ce6c;
        case 0x15ce70u: goto label_15ce70;
        case 0x15ce74u: goto label_15ce74;
        case 0x15ce78u: goto label_15ce78;
        case 0x15ce7cu: goto label_15ce7c;
        case 0x15ce80u: goto label_15ce80;
        case 0x15ce84u: goto label_15ce84;
        case 0x15ce88u: goto label_15ce88;
        case 0x15ce8cu: goto label_15ce8c;
        case 0x15ce90u: goto label_15ce90;
        case 0x15ce94u: goto label_15ce94;
        case 0x15ce98u: goto label_15ce98;
        case 0x15ce9cu: goto label_15ce9c;
        case 0x15cea0u: goto label_15cea0;
        case 0x15cea4u: goto label_15cea4;
        case 0x15cea8u: goto label_15cea8;
        case 0x15ceacu: goto label_15ceac;
        case 0x15ceb0u: goto label_15ceb0;
        case 0x15ceb4u: goto label_15ceb4;
        case 0x15ceb8u: goto label_15ceb8;
        case 0x15cebcu: goto label_15cebc;
        case 0x15cec0u: goto label_15cec0;
        case 0x15cec4u: goto label_15cec4;
        case 0x15cec8u: goto label_15cec8;
        case 0x15ceccu: goto label_15cecc;
        case 0x15ced0u: goto label_15ced0;
        case 0x15ced4u: goto label_15ced4;
        case 0x15ced8u: goto label_15ced8;
        case 0x15cedcu: goto label_15cedc;
        case 0x15cee0u: goto label_15cee0;
        case 0x15cee4u: goto label_15cee4;
        case 0x15cee8u: goto label_15cee8;
        case 0x15ceecu: goto label_15ceec;
        case 0x15cef0u: goto label_15cef0;
        case 0x15cef4u: goto label_15cef4;
        case 0x15cef8u: goto label_15cef8;
        case 0x15cefcu: goto label_15cefc;
        case 0x15cf00u: goto label_15cf00;
        case 0x15cf04u: goto label_15cf04;
        case 0x15cf08u: goto label_15cf08;
        case 0x15cf0cu: goto label_15cf0c;
        case 0x15cf10u: goto label_15cf10;
        case 0x15cf14u: goto label_15cf14;
        case 0x15cf18u: goto label_15cf18;
        case 0x15cf1cu: goto label_15cf1c;
        case 0x15cf20u: goto label_15cf20;
        case 0x15cf24u: goto label_15cf24;
        case 0x15cf28u: goto label_15cf28;
        case 0x15cf2cu: goto label_15cf2c;
        case 0x15cf30u: goto label_15cf30;
        case 0x15cf34u: goto label_15cf34;
        case 0x15cf38u: goto label_15cf38;
        case 0x15cf3cu: goto label_15cf3c;
        case 0x15cf40u: goto label_15cf40;
        case 0x15cf44u: goto label_15cf44;
        case 0x15cf48u: goto label_15cf48;
        case 0x15cf4cu: goto label_15cf4c;
        default: break;
    }

    ctx->pc = 0x15c840u;

label_15c840:
    // 0x15c840: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x15c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_15c844:
    // 0x15c844: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x15c844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
label_15c848:
    // 0x15c848: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15c848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15c84c:
    // 0x15c84c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x15c84cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
label_15c850:
    // 0x15c850: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15c850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15c854:
    // 0x15c854: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x15c854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
label_15c858:
    // 0x15c858: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15c858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15c85c:
    // 0x15c85c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x15c85cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_15c860:
    // 0x15c860: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15c864:
    // 0x15c864: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x15c864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
label_15c868:
    // 0x15c868: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15c86c:
    // 0x15c86c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x15c86cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_15c870:
    // 0x15c870: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15c874:
    // 0x15c874: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15c878:
    // 0x15c878: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c87c:
    // 0x15c87c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c880:
    // 0x15c880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15c884:
    // 0x15c884: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x15c884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_15c888:
    // 0x15c888: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x15c888u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
label_15c88c:
    // 0x15c88c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x15c88cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_15c890:
    // 0x15c890: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15c894:
    if (ctx->pc == 0x15C894u) {
        ctx->pc = 0x15C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C890u;
        // 0x15c894: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C898u;
        goto label_15c898;
    }
    ctx->pc = 0x15C890u;
    {
        const bool branch_taken_0x15c890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C890u;
        // 0x15c894: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c890) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C898u;
label_15c898:
    // 0x15c898: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x15c898u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_15c89c:
    // 0x15c89c: 0xfea20020  sd          $v0, 0x20($s5)
    ctx->pc = 0x15c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 2));
label_15c8a0:
    // 0x15c8a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x15c8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_15c8a4:
    // 0x15c8a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c8a8:
    // 0x15c8a8: 0xac207520  sw          $zero, 0x7520($at)
    ctx->pc = 0x15c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29984), GPR_U32(ctx, 0));
label_15c8ac:
    // 0x15c8ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c8b0:
    // 0x15c8b0: 0x2b19021  addu        $s2, $s5, $s1
    ctx->pc = 0x15c8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_15c8b4:
    // 0x15c8b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15c8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c8b8:
    // 0x15c8b8: 0x86420228  lh          $v0, 0x228($s2)
    ctx->pc = 0x15c8b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 552)));
label_15c8bc:
    // 0x15c8bc: 0x1046003b  beq         $v0, $a2, . + 4 + (0x3B << 2)
label_15c8c0:
    if (ctx->pc == 0x15C8C0u) {
        ctx->pc = 0x15C8C4u;
        goto label_15c8c4;
    }
    ctx->pc = 0x15C8BCu;
    {
        const bool branch_taken_0x15c8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x15c8bc) {
            ctx->pc = 0x15C9ACu;
            goto label_15c9ac;
        }
    }
    ctx->pc = 0x15C8C4u;
label_15c8c4:
    // 0x15c8c4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_15c8c8:
    if (ctx->pc == 0x15C8C8u) {
        ctx->pc = 0x15C8CCu;
        goto label_15c8cc;
    }
    ctx->pc = 0x15C8C4u;
    {
        const bool branch_taken_0x15c8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c8c4) {
            ctx->pc = 0x15C9ACu;
            goto label_15c9ac;
        }
    }
    ctx->pc = 0x15C8CCu;
label_15c8cc:
    // 0x15c8cc: 0x8642022a  lh          $v0, 0x22A($s2)
    ctx->pc = 0x15c8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 554)));
label_15c8d0:
    // 0x15c8d0: 0x2841ffff  slti        $at, $v0, -0x1
    ctx->pc = 0x15c8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
label_15c8d4:
    // 0x15c8d4: 0x14200035  bnez        $at, . + 4 + (0x35 << 2)
label_15c8d8:
    if (ctx->pc == 0x15C8D8u) {
        ctx->pc = 0x15C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8D4u;
        // 0x15c8d8: 0x26530040  addiu       $s3, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8DCu;
        goto label_15c8dc;
    }
    ctx->pc = 0x15C8D4u;
    {
        const bool branch_taken_0x15c8d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8D4u;
        // 0x15c8d8: 0x26530040  addiu       $s3, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8d4) {
            ctx->pc = 0x15C9ACu;
            goto label_15c9ac;
        }
    }
    ctx->pc = 0x15C8DCu;
label_15c8dc:
    // 0x15c8dc: 0x26a42c00  addiu       $a0, $s5, 0x2C00
    ctx->pc = 0x15c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11264));
label_15c8e0:
    // 0x15c8e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c8e4:
    // 0x15c8e4: 0xc058138  jal         func_1604E0
label_15c8e8:
    if (ctx->pc == 0x15C8E8u) {
        ctx->pc = 0x15C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8E4u;
        // 0x15c8e8: 0x26470310  addiu       $a3, $s2, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8ECu;
        goto label_15c8ec;
    }
    ctx->pc = 0x15C8E4u;
    SET_GPR_U32(ctx, 31, 0x15C8ECu);
    ctx->pc = 0x15C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8E4u;
    // 0x15c8e8: 0x26470310  addiu       $a3, $s2, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x15C8E4u, 0x15C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8ECu;
label_15c8ec:
    // 0x15c8ec: 0x8e420310  lw          $v0, 0x310($s2)
    ctx->pc = 0x15c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
label_15c8f0:
    // 0x15c8f0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15c8f4:
    if (ctx->pc == 0x15C8F4u) {
        ctx->pc = 0x15C8F8u;
        goto label_15c8f8;
    }
    ctx->pc = 0x15C8F0u;
    {
        const bool branch_taken_0x15c8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8f0) {
            ctx->pc = 0x15C9ACu;
            goto label_15c9ac;
        }
    }
    ctx->pc = 0x15C8F8u;
label_15c8f8:
    // 0x15c8f8: 0x8e430318  lw          $v1, 0x318($s2)
    ctx->pc = 0x15c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
label_15c8fc:
    // 0x15c8fc: 0x8e450320  lw          $a1, 0x320($s2)
    ctx->pc = 0x15c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_15c900:
    // 0x15c900: 0x8ea62c1c  lw          $a2, 0x2C1C($s5)
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15c904:
    // 0x15c904: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15c904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15c908:
    // 0x15c908: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15c908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c90c:
    // 0x15c90c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x15c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_15c910:
    // 0x15c910: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15c910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15c914:
    // 0x15c914: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15c918:
    // 0x15c918: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15c918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15c91c:
    // 0x15c91c: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x15c91cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15c920:
    // 0x15c920: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x15c920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_15c924:
    // 0x15c924: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x15c924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15c928:
    // 0x15c928: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x15c928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c92c:
    // 0x15c92c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15c92cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15c930:
    // 0x15c930: 0x0  nop
    ctx->pc = 0x15c930u;
    // NOP
label_15c934:
    // 0x15c934: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_15c938:
    if (ctx->pc == 0x15C938u) {
        ctx->pc = 0x15C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C934u;
        // 0x15c938: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C93Cu;
        goto label_15c93c;
    }
    ctx->pc = 0x15C934u;
    {
        const bool branch_taken_0x15c934 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C934u;
        // 0x15c938: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c934) {
            ctx->pc = 0x15C940u;
            goto label_15c940;
        }
    }
    ctx->pc = 0x15C93Cu;
label_15c93c:
    // 0x15c93c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c940:
    // 0x15c940: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_15c944:
    if (ctx->pc == 0x15C944u) {
        ctx->pc = 0x15C948u;
        goto label_15c948;
    }
    ctx->pc = 0x15C940u;
    {
        const bool branch_taken_0x15c940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c940) {
            ctx->pc = 0x15C990u;
            goto label_15c990;
        }
    }
    ctx->pc = 0x15C948u;
label_15c948:
    // 0x15c948: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x15c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15c94c:
    // 0x15c94c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x15c94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c950:
    // 0x15c950: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15c950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15c954:
    // 0x15c954: 0x0  nop
    ctx->pc = 0x15c954u;
    // NOP
label_15c958:
    // 0x15c958: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_15c95c:
    if (ctx->pc == 0x15C95Cu) {
        ctx->pc = 0x15C960u;
        goto label_15c960;
    }
    ctx->pc = 0x15C958u;
    {
        const bool branch_taken_0x15c958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c958) {
            ctx->pc = 0x15C990u;
            goto label_15c990;
        }
    }
    ctx->pc = 0x15C960u;
label_15c960:
    // 0x15c960: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x15c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15c964:
    // 0x15c964: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x15c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c968:
    // 0x15c968: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15c968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15c96c:
    // 0x15c96c: 0x0  nop
    ctx->pc = 0x15c96cu;
    // NOP
label_15c970:
    // 0x15c970: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_15c974:
    if (ctx->pc == 0x15C974u) {
        ctx->pc = 0x15C978u;
        goto label_15c978;
    }
    ctx->pc = 0x15C970u;
    {
        const bool branch_taken_0x15c970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c970) {
            ctx->pc = 0x15C990u;
            goto label_15c990;
        }
    }
    ctx->pc = 0x15C978u;
label_15c978:
    // 0x15c978: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x15c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15c97c:
    // 0x15c97c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x15c97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c980:
    // 0x15c980: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15c980u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15c984:
    // 0x15c984: 0x0  nop
    ctx->pc = 0x15c984u;
    // NOP
label_15c988:
    // 0x15c988: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_15c98c:
    if (ctx->pc == 0x15C98Cu) {
        ctx->pc = 0x15C990u;
        goto label_15c990;
    }
    ctx->pc = 0x15C988u;
    {
        const bool branch_taken_0x15c988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c988) {
            ctx->pc = 0x15C9ACu;
            goto label_15c9ac;
        }
    }
    ctx->pc = 0x15C990u;
label_15c990:
    // 0x15c990: 0xc055d4c  jal         func_157530
label_15c994:
    if (ctx->pc == 0x15C994u) {
        ctx->pc = 0x15C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C990u;
        // 0x15c994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C998u;
        goto label_15c998;
    }
    ctx->pc = 0x15C990u;
    SET_GPR_U32(ctx, 31, 0x15C998u);
    ctx->pc = 0x15C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C990u;
    // 0x15c994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157530u, 0x15C990u, 0x15C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C998u;
label_15c998:
    // 0x15c998: 0x8ea22c1c  lw          $v0, 0x2C1C($s5)
    ctx->pc = 0x15c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15c99c:
    // 0x15c99c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c9a0:
    // 0x15c9a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15c9a4:
    // 0x15c9a4: 0xc055dec  jal         func_1577B0
label_15c9a8:
    if (ctx->pc == 0x15C9A8u) {
        ctx->pc = 0x15C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9A4u;
        // 0x15c9a8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9ACu;
        goto label_15c9ac;
    }
    ctx->pc = 0x15C9A4u;
    SET_GPR_U32(ctx, 31, 0x15C9ACu);
    ctx->pc = 0x15C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C9A4u;
    // 0x15c9a8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577B0u, 0x15C9A4u, 0x15C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9ACu;
label_15c9ac:
    // 0x15c9ac: 0x0  nop
    ctx->pc = 0x15c9acu;
    // NOP
label_15c9b0:
    // 0x15c9b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15c9b4:
    // 0x15c9b4: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x15c9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_15c9b8:
    // 0x15c9b8: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_15c9bc:
    if (ctx->pc == 0x15C9BCu) {
        ctx->pc = 0x15C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9B8u;
        // 0x15c9bc: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9C0u;
        goto label_15c9c0;
    }
    ctx->pc = 0x15C9B8u;
    {
        const bool branch_taken_0x15c9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9B8u;
        // 0x15c9bc: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9b8) {
            ctx->pc = 0x15C8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c8b0;
        }
    }
    ctx->pc = 0x15C9C0u;
label_15c9c0:
    // 0x15c9c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c9c4:
    // 0x15c9c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c9c8:
    // 0x15c9c8: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x15c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_15c9cc:
    // 0x15c9cc: 0xc055ac0  jal         func_156B00
label_15c9d0:
    if (ctx->pc == 0x15C9D0u) {
        ctx->pc = 0x15C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9CCu;
        // 0x15c9d0: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9D4u;
        goto label_15c9d4;
    }
    ctx->pc = 0x15C9CCu;
    SET_GPR_U32(ctx, 31, 0x15C9D4u);
    ctx->pc = 0x15C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C9CCu;
    // 0x15c9d0: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B00u, 0x15C9CCu, 0x15C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9D4u;
label_15c9d4:
    // 0x15c9d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15c9d8:
    // 0x15c9d8: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x15c9d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_15c9dc:
    // 0x15c9dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_15c9e0:
    if (ctx->pc == 0x15C9E0u) {
        ctx->pc = 0x15C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9DCu;
        // 0x15c9e0: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9E4u;
        goto label_15c9e4;
    }
    ctx->pc = 0x15C9DCu;
    {
        const bool branch_taken_0x15c9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9DCu;
        // 0x15c9e0: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9dc) {
            ctx->pc = 0x15C9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c9c8;
        }
    }
    ctx->pc = 0x15C9E4u;
label_15c9e4:
    // 0x15c9e4: 0x92a3002e  lbu         $v1, 0x2E($s5)
    ctx->pc = 0x15c9e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
label_15c9e8:
    // 0x15c9e8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_15c9ec:
    if (ctx->pc == 0x15C9ECu) {
        ctx->pc = 0x15C9F0u;
        goto label_15c9f0;
    }
    ctx->pc = 0x15C9E8u;
    {
        const bool branch_taken_0x15c9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c9e8) {
            ctx->pc = 0x15CA3Cu;
            goto label_15ca3c;
        }
    }
    ctx->pc = 0x15C9F0u;
label_15c9f0:
    // 0x15c9f0: 0x8ea33dd8  lw          $v1, 0x3DD8($s5)
    ctx->pc = 0x15c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15832)));
label_15c9f4:
    // 0x15c9f4: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x15c9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_15c9f8:
    // 0x15c9f8: 0x6000010  bltz        $s0, . + 4 + (0x10 << 2)
label_15c9fc:
    if (ctx->pc == 0x15C9FCu) {
        ctx->pc = 0x15C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9F8u;
        // 0x15c9fc: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA00u;
        goto label_15ca00;
    }
    ctx->pc = 0x15C9F8u;
    {
        const bool branch_taken_0x15c9f8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x15C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9F8u;
        // 0x15c9fc: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9f8) {
            ctx->pc = 0x15CA3Cu;
            goto label_15ca3c;
        }
    }
    ctx->pc = 0x15CA00u;
label_15ca00:
    // 0x15ca00: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x15ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_15ca04:
    // 0x15ca04: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15ca08:
    // 0x15ca08: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15ca08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15ca0c:
    // 0x15ca0c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_15ca10:
    if (ctx->pc == 0x15CA10u) {
        ctx->pc = 0x15CA14u;
        goto label_15ca14;
    }
    ctx->pc = 0x15CA0Cu;
    {
        const bool branch_taken_0x15ca0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ca0c) {
            ctx->pc = 0x15CA30u;
            goto label_15ca30;
        }
    }
    ctx->pc = 0x15CA14u;
label_15ca14:
    // 0x15ca14: 0x908301f9  lbu         $v1, 0x1F9($a0)
    ctx->pc = 0x15ca14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 505)));
label_15ca18:
    // 0x15ca18: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_15ca1c:
    if (ctx->pc == 0x15CA1Cu) {
        ctx->pc = 0x15CA20u;
        goto label_15ca20;
    }
    ctx->pc = 0x15CA18u;
    {
        const bool branch_taken_0x15ca18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ca18) {
            ctx->pc = 0x15CA30u;
            goto label_15ca30;
        }
    }
    ctx->pc = 0x15CA20u;
label_15ca20:
    // 0x15ca20: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15ca20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15ca24:
    // 0x15ca24: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x15ca24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_15ca28:
    // 0x15ca28: 0x320f809  jalr        $t9
label_15ca2c:
    if (ctx->pc == 0x15CA2Cu) {
        ctx->pc = 0x15CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA28u;
        // 0x15ca2c: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA30u;
        goto label_15ca30;
    }
    ctx->pc = 0x15CA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CA30u);
        ctx->pc = 0x15CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA28u;
        // 0x15ca2c: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA28u, 0x15CA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA30u;
label_15ca30:
    // 0x15ca30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15ca30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_15ca34:
    // 0x15ca34: 0x601fff2  bgez        $s0, . + 4 + (-0xE << 2)
label_15ca38:
    if (ctx->pc == 0x15CA38u) {
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA3Cu;
        goto label_15ca3c;
    }
    ctx->pc = 0x15CA34u;
    {
        const bool branch_taken_0x15ca34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca34) {
            ctx->pc = 0x15CA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ca00;
        }
    }
    ctx->pc = 0x15CA3Cu;
label_15ca3c:
    // 0x15ca3c: 0x0  nop
    ctx->pc = 0x15ca3cu;
    // NOP
label_15ca40:
    // 0x15ca40: 0x8ea33dd8  lw          $v1, 0x3DD8($s5)
    ctx->pc = 0x15ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15832)));
label_15ca44:
    // 0x15ca44: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x15ca44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_15ca48:
    // 0x15ca48: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
label_15ca4c:
    if (ctx->pc == 0x15CA4Cu) {
        ctx->pc = 0x15CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA48u;
        // 0x15ca4c: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA50u;
        goto label_15ca50;
    }
    ctx->pc = 0x15CA48u;
    {
        const bool branch_taken_0x15ca48 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x15CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA48u;
        // 0x15ca4c: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca48) {
            ctx->pc = 0x15CA74u;
            goto label_15ca74;
        }
    }
    ctx->pc = 0x15CA50u;
label_15ca50:
    // 0x15ca50: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x15ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_15ca54:
    // 0x15ca54: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x15ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_15ca58:
    // 0x15ca58: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15ca58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15ca5c:
    // 0x15ca5c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x15ca5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_15ca60:
    // 0x15ca60: 0x320f809  jalr        $t9
label_15ca64:
    if (ctx->pc == 0x15CA64u) {
        ctx->pc = 0x15CA68u;
        goto label_15ca68;
    }
    ctx->pc = 0x15CA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CA68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA60u, 0x15CA68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA68u;
label_15ca68:
    // 0x15ca68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15ca68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_15ca6c:
    // 0x15ca6c: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_15ca70:
    if (ctx->pc == 0x15CA70u) {
        ctx->pc = 0x15CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA6Cu;
        // 0x15ca70: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA74u;
        goto label_15ca74;
    }
    ctx->pc = 0x15CA6Cu;
    {
        const bool branch_taken_0x15ca6c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA6Cu;
        // 0x15ca70: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca6c) {
            ctx->pc = 0x15CA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ca50;
        }
    }
    ctx->pc = 0x15CA74u;
label_15ca74:
    // 0x15ca74: 0x0  nop
    ctx->pc = 0x15ca74u;
    // NOP
label_15ca78:
    // 0x15ca78: 0x8eb02c20  lw          $s0, 0x2C20($s5)
    ctx->pc = 0x15ca78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11296)));
label_15ca7c:
    // 0x15ca7c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15ca7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15ca80:
    // 0x15ca80: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_15ca84:
    if (ctx->pc == 0x15CA84u) {
        ctx->pc = 0x15CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA80u;
        // 0x15ca84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA88u;
        goto label_15ca88;
    }
    ctx->pc = 0x15CA80u;
    {
        const bool branch_taken_0x15ca80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA80u;
        // 0x15ca84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca80) {
            ctx->pc = 0x15CAE8u;
            goto label_15cae8;
        }
    }
    ctx->pc = 0x15CA88u;
label_15ca88:
    // 0x15ca88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ca88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ca8c:
    // 0x15ca8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ca90:
    // 0x15ca90: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15ca94:
    // 0x15ca94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15ca94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ca98:
    // 0x15ca98: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x15ca98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_15ca9c:
    // 0x15ca9c: 0x85250004  lh          $a1, 0x4($t1)
    ctx->pc = 0x15ca9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_15caa0:
    // 0x15caa0: 0x85230006  lh          $v1, 0x6($t1)
    ctx->pc = 0x15caa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
label_15caa4:
    // 0x15caa4: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x15caa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_15caa8:
    // 0x15caa8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x15caa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15caac:
    // 0x15caac: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x15caacu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_15cab0:
    // 0x15cab0: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
label_15cab4:
    if (ctx->pc == 0x15CAB4u) {
        ctx->pc = 0x15CAB8u;
        goto label_15cab8;
    }
    ctx->pc = 0x15CAB0u;
    {
        const bool branch_taken_0x15cab0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cab0) {
            ctx->pc = 0x15CABCu;
            goto label_15cabc;
        }
    }
    ctx->pc = 0x15CAB8u;
label_15cab8:
    // 0x15cab8: 0xa1240042  sb          $a0, 0x42($t1)
    ctx->pc = 0x15cab8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 66), (uint8_t)GPR_U32(ctx, 4));
label_15cabc:
    // 0x15cabc: 0x0  nop
    ctx->pc = 0x15cabcu;
    // NOP
label_15cac0:
    // 0x15cac0: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15cac4:
    // 0x15cac4: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x15cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_15cac8:
    // 0x15cac8: 0x90a30041  lbu         $v1, 0x41($a1)
    ctx->pc = 0x15cac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 65)));
label_15cacc:
    // 0x15cacc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_15cad0:
    if (ctx->pc == 0x15CAD0u) {
        ctx->pc = 0x15CAD4u;
        goto label_15cad4;
    }
    ctx->pc = 0x15CACCu;
    {
        const bool branch_taken_0x15cacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cacc) {
            ctx->pc = 0x15CAD8u;
            goto label_15cad8;
        }
    }
    ctx->pc = 0x15CAD4u;
label_15cad4:
    // 0x15cad4: 0xa0a40042  sb          $a0, 0x42($a1)
    ctx->pc = 0x15cad4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 66), (uint8_t)GPR_U32(ctx, 4));
label_15cad8:
    // 0x15cad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15cad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15cadc:
    // 0x15cadc: 0xd0182a  slt         $v1, $a2, $s0
    ctx->pc = 0x15cadcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15cae0:
    // 0x15cae0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_15cae4:
    if (ctx->pc == 0x15CAE4u) {
        ctx->pc = 0x15CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAE0u;
        // 0x15cae4: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAE8u;
        goto label_15cae8;
    }
    ctx->pc = 0x15CAE0u;
    {
        const bool branch_taken_0x15cae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAE0u;
        // 0x15cae4: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cae0) {
            ctx->pc = 0x15CA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ca90;
        }
    }
    ctx->pc = 0x15CAE8u;
label_15cae8:
    // 0x15cae8: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15cae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15caec:
    // 0x15caec: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_15caf0:
    if (ctx->pc == 0x15CAF0u) {
        ctx->pc = 0x15CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAECu;
        // 0x15caf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAF4u;
        goto label_15caf4;
    }
    ctx->pc = 0x15CAECu;
    {
        const bool branch_taken_0x15caec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAECu;
        // 0x15caf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15caec) {
            ctx->pc = 0x15CB6Cu;
            goto label_15cb6c;
        }
    }
    ctx->pc = 0x15CAF4u;
label_15caf4:
    // 0x15caf4: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15caf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_15caf8:
    // 0x15caf8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
label_15cafc:
    if (ctx->pc == 0x15CAFCu) {
        ctx->pc = 0x15CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF8u;
        // 0x15cafc: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB00u;
        goto label_15cb00;
    }
    ctx->pc = 0x15CAF8u;
    {
        const bool branch_taken_0x15caf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF8u;
        // 0x15cafc: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15caf8) {
            ctx->pc = 0x15CB40u;
            goto label_15cb40;
        }
    }
    ctx->pc = 0x15CB00u;
label_15cb00:
    // 0x15cb00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15cb00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cb04:
    // 0x15cb04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15cb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cb08:
    // 0x15cb08: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x15cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_15cb0c:
    // 0x15cb0c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x15cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_15cb10:
    // 0x15cb10: 0x246800b0  addiu       $t0, $v1, 0xB0
    ctx->pc = 0x15cb10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_15cb14:
    // 0x15cb14: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x15cb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_15cb18:
    // 0x15cb18: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x15cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_15cb1c:
    // 0x15cb1c: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x15cb1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_15cb20:
    // 0x15cb20: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x15cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
label_15cb24:
    // 0x15cb24: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x15cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
label_15cb28:
    // 0x15cb28: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x15cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
label_15cb2c:
    // 0x15cb2c: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x15cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_15cb30:
    // 0x15cb30: 0xad040014  sw          $a0, 0x14($t0)
    ctx->pc = 0x15cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 4));
label_15cb34:
    // 0x15cb34: 0xad040018  sw          $a0, 0x18($t0)
    ctx->pc = 0x15cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 4));
label_15cb38:
    // 0x15cb38: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_15cb3c:
    if (ctx->pc == 0x15CB3Cu) {
        ctx->pc = 0x15CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB38u;
        // 0x15cb3c: 0xad04001c  sw          $a0, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB40u;
        goto label_15cb40;
    }
    ctx->pc = 0x15CB38u;
    {
        const bool branch_taken_0x15cb38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB38u;
        // 0x15cb3c: 0xad04001c  sw          $a0, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb38) {
            ctx->pc = 0x15CB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cb08;
        }
    }
    ctx->pc = 0x15CB40u;
label_15cb40:
    // 0x15cb40: 0xb0082a  slt         $at, $a1, $s0
    ctx->pc = 0x15cb40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15cb44:
    // 0x15cb44: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_15cb48:
    if (ctx->pc == 0x15CB48u) {
        ctx->pc = 0x15CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB44u;
        // 0x15cb48: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB4Cu;
        goto label_15cb4c;
    }
    ctx->pc = 0x15CB44u;
    {
        const bool branch_taken_0x15cb44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB44u;
        // 0x15cb48: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb44) {
            ctx->pc = 0x15CB6Cu;
            goto label_15cb6c;
        }
    }
    ctx->pc = 0x15CB4Cu;
label_15cb4c:
    // 0x15cb4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cb50:
    // 0x15cb50: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x15cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_15cb54:
    // 0x15cb54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15cb58:
    // 0x15cb58: 0xac6400b0  sw          $a0, 0xB0($v1)
    ctx->pc = 0x15cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 4));
label_15cb5c:
    // 0x15cb5c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x15cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_15cb60:
    // 0x15cb60: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x15cb60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15cb64:
    // 0x15cb64: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_15cb68:
    if (ctx->pc == 0x15CB68u) {
        ctx->pc = 0x15CB6Cu;
        goto label_15cb6c;
    }
    ctx->pc = 0x15CB64u;
    {
        const bool branch_taken_0x15cb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cb64) {
            ctx->pc = 0x15CB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cb50;
        }
    }
    ctx->pc = 0x15CB6Cu;
label_15cb6c:
    // 0x15cb6c: 0x0  nop
    ctx->pc = 0x15cb6cu;
    // NOP
label_15cb70:
    // 0x15cb70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15cb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cb74:
    // 0x15cb74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15cb74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cb78:
    // 0x15cb78: 0x2b4b821  addu        $s7, $s5, $s4
    ctx->pc = 0x15cb78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_15cb7c:
    // 0x15cb7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15cb80:
    // 0x15cb80: 0x86e40228  lh          $a0, 0x228($s7)
    ctx->pc = 0x15cb80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 552)));
label_15cb84:
    // 0x15cb84: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_15cb88:
    if (ctx->pc == 0x15CB88u) {
        ctx->pc = 0x15CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB84u;
        // 0x15cb88: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB8Cu;
        goto label_15cb8c;
    }
    ctx->pc = 0x15CB84u;
    {
        const bool branch_taken_0x15cb84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB84u;
        // 0x15cb88: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb84) {
            ctx->pc = 0x15CC0Cu;
            goto label_15cc0c;
        }
    }
    ctx->pc = 0x15CB8Cu;
label_15cb8c:
    // 0x15cb8c: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_15cb90:
    if (ctx->pc == 0x15CB90u) {
        ctx->pc = 0x15CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB8Cu;
        // 0x15cb90: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB94u;
        goto label_15cb94;
    }
    ctx->pc = 0x15CB8Cu;
    {
        const bool branch_taken_0x15cb8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB8Cu;
        // 0x15cb90: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb8c) {
            ctx->pc = 0x15CC0Cu;
            goto label_15cc0c;
        }
    }
    ctx->pc = 0x15CB94u;
label_15cb94:
    // 0x15cb94: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_15cb98:
    if (ctx->pc == 0x15CB98u) {
        ctx->pc = 0x15CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB94u;
        // 0x15cb98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB9Cu;
        goto label_15cb9c;
    }
    ctx->pc = 0x15CB94u;
    {
        const bool branch_taken_0x15cb94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB94u;
        // 0x15cb98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb94) {
            ctx->pc = 0x15CC0Cu;
            goto label_15cc0c;
        }
    }
    ctx->pc = 0x15CB9Cu;
label_15cb9c:
    // 0x15cb9c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15cb9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cba0:
    // 0x15cba0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15cba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cba4:
    // 0x15cba4: 0x0  nop
    ctx->pc = 0x15cba4u;
    // NOP
label_15cba8:
    // 0x15cba8: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15cbac:
    // 0x15cbac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cbb0:
    // 0x15cbb0: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x15cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_15cbb4:
    // 0x15cbb4: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x15cbb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_15cbb8:
    // 0x15cbb8: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x15cbb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_15cbbc:
    // 0x15cbbc: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15cbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_15cbc0:
    // 0x15cbc0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x15cbc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15cbc4:
    // 0x15cbc4: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x15cbc4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_15cbc8:
    // 0x15cbc8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_15cbcc:
    if (ctx->pc == 0x15CBCCu) {
        ctx->pc = 0x15CBD0u;
        goto label_15cbd0;
    }
    ctx->pc = 0x15CBC8u;
    {
        const bool branch_taken_0x15cbc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cbc8) {
            ctx->pc = 0x15CBF4u;
            goto label_15cbf4;
        }
    }
    ctx->pc = 0x15CBD0u;
label_15cbd0:
    // 0x15cbd0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x15cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_15cbd4:
    // 0x15cbd4: 0x26a42c00  addiu       $a0, $s5, 0x2C00
    ctx->pc = 0x15cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11264));
label_15cbd8:
    // 0x15cbd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15cbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15cbdc:
    // 0x15cbdc: 0x26e50040  addiu       $a1, $s7, 0x40
    ctx->pc = 0x15cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
label_15cbe0:
    // 0x15cbe0: 0xc058154  jal         func_160550
label_15cbe4:
    if (ctx->pc == 0x15CBE4u) {
        ctx->pc = 0x15CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBE0u;
        // 0x15cbe4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBE8u;
        goto label_15cbe8;
    }
    ctx->pc = 0x15CBE0u;
    SET_GPR_U32(ctx, 31, 0x15CBE8u);
    ctx->pc = 0x15CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBE0u;
    // 0x15cbe4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160550u, 0x15CBE0u, 0x15CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CBE8u;
label_15cbe8:
    // 0x15cbe8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_15cbec:
    if (ctx->pc == 0x15CBECu) {
        ctx->pc = 0x15CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBE8u;
        // 0x15cbec: 0x27d1821  addu        $v1, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBF0u;
        goto label_15cbf0;
    }
    ctx->pc = 0x15CBE8u;
    {
        const bool branch_taken_0x15cbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBE8u;
        // 0x15cbec: 0x27d1821  addu        $v1, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbe8) {
            ctx->pc = 0x15CBF4u;
            goto label_15cbf4;
        }
    }
    ctx->pc = 0x15CBF0u;
label_15cbf0:
    // 0x15cbf0: 0xac6000b0  sw          $zero, 0xB0($v1)
    ctx->pc = 0x15cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
label_15cbf4:
    // 0x15cbf4: 0x0  nop
    ctx->pc = 0x15cbf4u;
    // NOP
label_15cbf8:
    // 0x15cbf8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15cbf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15cbfc:
    // 0x15cbfc: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x15cbfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15cc00:
    // 0x15cc00: 0x26d60050  addiu       $s6, $s6, 0x50
    ctx->pc = 0x15cc00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
label_15cc04:
    // 0x15cc04: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_15cc08:
    if (ctx->pc == 0x15CC08u) {
        ctx->pc = 0x15CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC04u;
        // 0x15cc08: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC0Cu;
        goto label_15cc0c;
    }
    ctx->pc = 0x15CC04u;
    {
        const bool branch_taken_0x15cc04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC04u;
        // 0x15cc08: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc04) {
            ctx->pc = 0x15CBA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cba4;
        }
    }
    ctx->pc = 0x15CC0Cu;
label_15cc0c:
    // 0x15cc0c: 0x0  nop
    ctx->pc = 0x15cc0cu;
    // NOP
label_15cc10:
    // 0x15cc10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15cc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15cc14:
    // 0x15cc14: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x15cc14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_15cc18:
    // 0x15cc18: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_15cc1c:
    if (ctx->pc == 0x15CC1Cu) {
        ctx->pc = 0x15CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC18u;
        // 0x15cc1c: 0x269403d0  addiu       $s4, $s4, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC20u;
        goto label_15cc20;
    }
    ctx->pc = 0x15CC18u;
    {
        const bool branch_taken_0x15cc18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC18u;
        // 0x15cc1c: 0x269403d0  addiu       $s4, $s4, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc18) {
            ctx->pc = 0x15CB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cb78;
        }
    }
    ctx->pc = 0x15CC20u;
label_15cc20:
    // 0x15cc20: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15cc20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15cc24:
    // 0x15cc24: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
label_15cc28:
    if (ctx->pc == 0x15CC28u) {
        ctx->pc = 0x15CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC24u;
        // 0x15cc28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC2Cu;
        goto label_15cc2c;
    }
    ctx->pc = 0x15CC24u;
    {
        const bool branch_taken_0x15cc24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC24u;
        // 0x15cc28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc24) {
            ctx->pc = 0x15CDACu;
            goto label_15cdac;
        }
    }
    ctx->pc = 0x15CC2Cu;
label_15cc2c:
    // 0x15cc2c: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15cc2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_15cc30:
    // 0x15cc30: 0x1420004a  bnez        $at, . + 4 + (0x4A << 2)
label_15cc34:
    if (ctx->pc == 0x15CC34u) {
        ctx->pc = 0x15CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC30u;
        // 0x15cc34: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC38u;
        goto label_15cc38;
    }
    ctx->pc = 0x15CC30u;
    {
        const bool branch_taken_0x15cc30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC30u;
        // 0x15cc34: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc30) {
            ctx->pc = 0x15CD5Cu;
            goto label_15cd5c;
        }
    }
    ctx->pc = 0x15CC38u;
label_15cc38:
    // 0x15cc38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cc3c:
    // 0x15cc3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15cc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cc40:
    // 0x15cc40: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15cc40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15cc44:
    // 0x15cc44: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x15cc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_15cc48:
    // 0x15cc48: 0x24e700b0  addiu       $a3, $a3, 0xB0
    ctx->pc = 0x15cc48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
label_15cc4c:
    // 0x15cc4c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x15cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_15cc50:
    // 0x15cc50: 0x80e90000  lb          $t1, 0x0($a3)
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_15cc54:
    // 0x15cc54: 0x64402a  slt         $t0, $v1, $a0
    ctx->pc = 0x15cc54u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_15cc58:
    // 0x15cc58: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x15cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_15cc5c:
    // 0x15cc5c: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_15cc60:
    // 0x15cc60: 0x918b0041  lbu         $t3, 0x41($t4)
    ctx->pc = 0x15cc60u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 65)));
label_15cc64:
    // 0x15cc64: 0x918a0042  lbu         $t2, 0x42($t4)
    ctx->pc = 0x15cc64u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 66)));
label_15cc68:
    // 0x15cc68: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cc68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
label_15cc6c:
    // 0x15cc6c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15cc6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_15cc70:
    // 0x15cc70: 0xa1890042  sb          $t1, 0x42($t4)
    ctx->pc = 0x15cc70u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 66), (uint8_t)GPR_U32(ctx, 9));
label_15cc74:
    // 0x15cc74: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15cc74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15cc78:
    // 0x15cc78: 0x80e90004  lb          $t1, 0x4($a3)
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_15cc7c:
    // 0x15cc7c: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15cc7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_15cc80:
    // 0x15cc80: 0x918b0091  lbu         $t3, 0x91($t4)
    ctx->pc = 0x15cc80u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 145)));
label_15cc84:
    // 0x15cc84: 0x918a0092  lbu         $t2, 0x92($t4)
    ctx->pc = 0x15cc84u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 146)));
label_15cc88:
    // 0x15cc88: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cc88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
label_15cc8c:
    // 0x15cc8c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15cc8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_15cc90:
    // 0x15cc90: 0xa1890092  sb          $t1, 0x92($t4)
    ctx->pc = 0x15cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 146), (uint8_t)GPR_U32(ctx, 9));
label_15cc94:
    // 0x15cc94: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15cc94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15cc98:
    // 0x15cc98: 0x80e90008  lb          $t1, 0x8($a3)
    ctx->pc = 0x15cc98u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_15cc9c:
    // 0x15cc9c: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15cc9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_15cca0:
    // 0x15cca0: 0x918b00e1  lbu         $t3, 0xE1($t4)
    ctx->pc = 0x15cca0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 225)));
label_15cca4:
    // 0x15cca4: 0x918a00e2  lbu         $t2, 0xE2($t4)
    ctx->pc = 0x15cca4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 226)));
label_15cca8:
    // 0x15cca8: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cca8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
label_15ccac:
    // 0x15ccac: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15ccacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_15ccb0:
    // 0x15ccb0: 0xa18900e2  sb          $t1, 0xE2($t4)
    ctx->pc = 0x15ccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 226), (uint8_t)GPR_U32(ctx, 9));
label_15ccb4:
    // 0x15ccb4: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15ccb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15ccb8:
    // 0x15ccb8: 0x80e9000c  lb          $t1, 0xC($a3)
    ctx->pc = 0x15ccb8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
label_15ccbc:
    // 0x15ccbc: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15ccbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_15ccc0:
    // 0x15ccc0: 0x918b0131  lbu         $t3, 0x131($t4)
    ctx->pc = 0x15ccc0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 305)));
label_15ccc4:
    // 0x15ccc4: 0x918a0132  lbu         $t2, 0x132($t4)
    ctx->pc = 0x15ccc4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 306)));
label_15ccc8:
    // 0x15ccc8: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15ccc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
label_15cccc:
    // 0x15cccc: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15ccccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_15ccd0:
    // 0x15ccd0: 0xa1890132  sb          $t1, 0x132($t4)
    ctx->pc = 0x15ccd0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 306), (uint8_t)GPR_U32(ctx, 9));
label_15ccd4:
    // 0x15ccd4: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15ccd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15ccd8:
    // 0x15ccd8: 0x80e90010  lb          $t1, 0x10($a3)
    ctx->pc = 0x15ccd8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_15ccdc:
    // 0x15ccdc: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15ccdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_15cce0:
    // 0x15cce0: 0x918b0181  lbu         $t3, 0x181($t4)
    ctx->pc = 0x15cce0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 385)));
label_15cce4:
    // 0x15cce4: 0x918a0182  lbu         $t2, 0x182($t4)
    ctx->pc = 0x15cce4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 386)));
label_15cce8:
    // 0x15cce8: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cce8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
label_15ccec:
    // 0x15ccec: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15ccecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_15ccf0:
    // 0x15ccf0: 0xa1890182  sb          $t1, 0x182($t4)
    ctx->pc = 0x15ccf0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 386), (uint8_t)GPR_U32(ctx, 9));
label_15ccf4:
    // 0x15ccf4: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15ccf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15ccf8:
    // 0x15ccf8: 0x80e90014  lb          $t1, 0x14($a3)
    ctx->pc = 0x15ccf8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
label_15ccfc:
    // 0x15ccfc: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15ccfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_15cd00:
    // 0x15cd00: 0x918b01d1  lbu         $t3, 0x1D1($t4)
    ctx->pc = 0x15cd00u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 465)));
label_15cd04:
    // 0x15cd04: 0x918a01d2  lbu         $t2, 0x1D2($t4)
    ctx->pc = 0x15cd04u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 466)));
label_15cd08:
    // 0x15cd08: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cd08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
label_15cd0c:
    // 0x15cd0c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15cd0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_15cd10:
    // 0x15cd10: 0xa18901d2  sb          $t1, 0x1D2($t4)
    ctx->pc = 0x15cd10u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 466), (uint8_t)GPR_U32(ctx, 9));
label_15cd14:
    // 0x15cd14: 0x8eaa2c1c  lw          $t2, 0x2C1C($s5)
    ctx->pc = 0x15cd14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15cd18:
    // 0x15cd18: 0x80e90018  lb          $t1, 0x18($a3)
    ctx->pc = 0x15cd18u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
label_15cd1c:
    // 0x15cd1c: 0x1456021  addu        $t4, $t2, $a1
    ctx->pc = 0x15cd1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_15cd20:
    // 0x15cd20: 0x918b0221  lbu         $t3, 0x221($t4)
    ctx->pc = 0x15cd20u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 545)));
label_15cd24:
    // 0x15cd24: 0x918a0222  lbu         $t2, 0x222($t4)
    ctx->pc = 0x15cd24u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 546)));
label_15cd28:
    // 0x15cd28: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x15cd28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
label_15cd2c:
    // 0x15cd2c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x15cd2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_15cd30:
    // 0x15cd30: 0xa1890222  sb          $t1, 0x222($t4)
    ctx->pc = 0x15cd30u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 546), (uint8_t)GPR_U32(ctx, 9));
label_15cd34:
    // 0x15cd34: 0x8ea92c1c  lw          $t1, 0x2C1C($s5)
    ctx->pc = 0x15cd34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15cd38:
    // 0x15cd38: 0x80e7001c  lb          $a3, 0x1C($a3)
    ctx->pc = 0x15cd38u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
label_15cd3c:
    // 0x15cd3c: 0x1255821  addu        $t3, $t1, $a1
    ctx->pc = 0x15cd3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_15cd40:
    // 0x15cd40: 0x916a0271  lbu         $t2, 0x271($t3)
    ctx->pc = 0x15cd40u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 625)));
label_15cd44:
    // 0x15cd44: 0x24a50280  addiu       $a1, $a1, 0x280
    ctx->pc = 0x15cd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
label_15cd48:
    // 0x15cd48: 0x91690272  lbu         $t1, 0x272($t3)
    ctx->pc = 0x15cd48u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 626)));
label_15cd4c:
    // 0x15cd4c: 0x1473825  or          $a3, $t2, $a3
    ctx->pc = 0x15cd4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
label_15cd50:
    // 0x15cd50: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x15cd50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
label_15cd54:
    // 0x15cd54: 0x1500ffba  bnez        $t0, . + 4 + (-0x46 << 2)
label_15cd58:
    if (ctx->pc == 0x15CD58u) {
        ctx->pc = 0x15CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD54u;
        // 0x15cd58: 0xa1670272  sb          $a3, 0x272($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 626), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD5Cu;
        goto label_15cd5c;
    }
    ctx->pc = 0x15CD54u;
    {
        const bool branch_taken_0x15cd54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD54u;
        // 0x15cd58: 0xa1670272  sb          $a3, 0x272($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 626), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd54) {
            ctx->pc = 0x15CC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cc40;
        }
    }
    ctx->pc = 0x15CD5Cu;
label_15cd5c:
    // 0x15cd5c: 0x0  nop
    ctx->pc = 0x15cd5cu;
    // NOP
label_15cd60:
    // 0x15cd60: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x15cd60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15cd64:
    // 0x15cd64: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_15cd68:
    if (ctx->pc == 0x15CD68u) {
        ctx->pc = 0x15CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD64u;
        // 0x15cd68: 0x34880  sll         $t1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD6Cu;
        goto label_15cd6c;
    }
    ctx->pc = 0x15CD64u;
    {
        const bool branch_taken_0x15cd64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD64u;
        // 0x15cd68: 0x34880  sll         $t1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd64) {
            ctx->pc = 0x15CDACu;
            goto label_15cdac;
        }
    }
    ctx->pc = 0x15CD6Cu;
label_15cd6c:
    // 0x15cd6c: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x15cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_15cd70:
    // 0x15cd70: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x15cd70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15cd74:
    // 0x15cd74: 0x8ea62c1c  lw          $a2, 0x2C1C($s5)
    ctx->pc = 0x15cd74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15cd78:
    // 0x15cd78: 0x13d2021  addu        $a0, $t1, $sp
    ctx->pc = 0x15cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
label_15cd7c:
    // 0x15cd7c: 0x808500b0  lb          $a1, 0xB0($a0)
    ctx->pc = 0x15cd7cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 176)));
label_15cd80:
    // 0x15cd80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15cd84:
    // 0x15cd84: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x15cd84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_15cd88:
    // 0x15cd88: 0xc85021  addu        $t2, $a2, $t0
    ctx->pc = 0x15cd88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_15cd8c:
    // 0x15cd8c: 0x91470041  lbu         $a3, 0x41($t2)
    ctx->pc = 0x15cd8cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 65)));
label_15cd90:
    // 0x15cd90: 0x70202a  slt         $a0, $v1, $s0
    ctx->pc = 0x15cd90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15cd94:
    // 0x15cd94: 0x91460042  lbu         $a2, 0x42($t2)
    ctx->pc = 0x15cd94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 66)));
label_15cd98:
    // 0x15cd98: 0x25080050  addiu       $t0, $t0, 0x50
    ctx->pc = 0x15cd98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
label_15cd9c:
    // 0x15cd9c: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x15cd9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_15cda0:
    // 0x15cda0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15cda0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_15cda4:
    // 0x15cda4: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_15cda8:
    if (ctx->pc == 0x15CDA8u) {
        ctx->pc = 0x15CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDA4u;
        // 0x15cda8: 0xa1450042  sb          $a1, 0x42($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 66), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDACu;
        goto label_15cdac;
    }
    ctx->pc = 0x15CDA4u;
    {
        const bool branch_taken_0x15cda4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDA4u;
        // 0x15cda8: 0xa1450042  sb          $a1, 0x42($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 66), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cda4) {
            ctx->pc = 0x15CD74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cd74;
        }
    }
    ctx->pc = 0x15CDACu;
label_15cdac:
    // 0x15cdac: 0x0  nop
    ctx->pc = 0x15cdacu;
    // NOP
label_15cdb0:
    // 0x15cdb0: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15cdb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15cdb4:
    // 0x15cdb4: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_15cdb8:
    if (ctx->pc == 0x15CDB8u) {
        ctx->pc = 0x15CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB4u;
        // 0x15cdb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDBCu;
        goto label_15cdbc;
    }
    ctx->pc = 0x15CDB4u;
    {
        const bool branch_taken_0x15cdb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB4u;
        // 0x15cdb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdb4) {
            ctx->pc = 0x15CE98u;
            goto label_15ce98;
        }
    }
    ctx->pc = 0x15CDBCu;
label_15cdbc:
    // 0x15cdbc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x15cdbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cdc0:
    // 0x15cdc0: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15cdc4:
    // 0x15cdc4: 0x7e3821  addu        $a3, $v1, $fp
    ctx->pc = 0x15cdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_15cdc8:
    // 0x15cdc8: 0x90e30042  lbu         $v1, 0x42($a3)
    ctx->pc = 0x15cdc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 66)));
label_15cdcc:
    // 0x15cdcc: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
label_15cdd0:
    if (ctx->pc == 0x15CDD0u) {
        ctx->pc = 0x15CDD4u;
        goto label_15cdd4;
    }
    ctx->pc = 0x15CDCCu;
    {
        const bool branch_taken_0x15cdcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cdcc) {
            ctx->pc = 0x15CE88u;
            goto label_15ce88;
        }
    }
    ctx->pc = 0x15CDD4u;
label_15cdd4:
    // 0x15cdd4: 0x84e6000a  lh          $a2, 0xA($a3)
    ctx->pc = 0x15cdd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15cdd8:
    // 0x15cdd8: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x15cdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_15cddc:
    // 0x15cddc: 0x84e4000c  lh          $a0, 0xC($a3)
    ctx->pc = 0x15cddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_15cde0:
    // 0x15cde0: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x15cde0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_15cde4:
    // 0x15cde4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15cde8:
    // 0x15cde8: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x15cde8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15cdec:
    // 0x15cdec: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x15cdecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_15cdf0:
    // 0x15cdf0: 0x292082a  slt         $at, $s4, $s2
    ctx->pc = 0x15cdf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_15cdf4:
    // 0x15cdf4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_15cdf8:
    if (ctx->pc == 0x15CDF8u) {
        ctx->pc = 0x15CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDF4u;
        // 0x15cdf8: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDFCu;
        goto label_15cdfc;
    }
    ctx->pc = 0x15CDF4u;
    {
        const bool branch_taken_0x15cdf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDF4u;
        // 0x15cdf8: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdf4) {
            ctx->pc = 0x15CE2Cu;
            goto label_15ce2c;
        }
    }
    ctx->pc = 0x15CDFCu;
label_15cdfc:
    // 0x15cdfc: 0x14b880  sll         $s7, $s4, 2
    ctx->pc = 0x15cdfcu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_15ce00:
    // 0x15ce00: 0x2b71021  addu        $v0, $s5, $s7
    ctx->pc = 0x15ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_15ce04:
    // 0x15ce04: 0x8c562cd8  lw          $s6, 0x2CD8($v0)
    ctx->pc = 0x15ce04u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15ce08:
    // 0x15ce08: 0xc056258  jal         func_158960
label_15ce0c:
    if (ctx->pc == 0x15CE0Cu) {
        ctx->pc = 0x15CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE08u;
        // 0x15ce0c: 0x26c40010  addiu       $a0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE10u;
        goto label_15ce10;
    }
    ctx->pc = 0x15CE08u;
    SET_GPR_U32(ctx, 31, 0x15CE10u);
    ctx->pc = 0x15CE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE08u;
    // 0x15ce0c: 0x26c40010  addiu       $a0, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158960u, 0x15CE08u, 0x15CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE10u;
label_15ce10:
    // 0x15ce10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15ce14:
    // 0x15ce14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15ce14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15ce18:
    // 0x15ce18: 0xa2c301d1  sb          $v1, 0x1D1($s6)
    ctx->pc = 0x15ce18u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 465), (uint8_t)GPR_U32(ctx, 3));
label_15ce1c:
    // 0x15ce1c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x15ce1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_15ce20:
    // 0x15ce20: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x15ce20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_15ce24:
    // 0x15ce24: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_15ce28:
    if (ctx->pc == 0x15CE28u) {
        ctx->pc = 0x15CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE24u;
        // 0x15ce28: 0xaec001fc  sw          $zero, 0x1FC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE2Cu;
        goto label_15ce2c;
    }
    ctx->pc = 0x15CE24u;
    {
        const bool branch_taken_0x15ce24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE24u;
        // 0x15ce28: 0xaec001fc  sw          $zero, 0x1FC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce24) {
            ctx->pc = 0x15CE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ce00;
        }
    }
    ctx->pc = 0x15CE2Cu;
label_15ce2c:
    // 0x15ce2c: 0x0  nop
    ctx->pc = 0x15ce2cu;
    // NOP
label_15ce30:
    // 0x15ce30: 0x92a3002e  lbu         $v1, 0x2E($s5)
    ctx->pc = 0x15ce30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
label_15ce34:
    // 0x15ce34: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_15ce38:
    if (ctx->pc == 0x15CE38u) {
        ctx->pc = 0x15CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE34u;
        // 0x15ce38: 0x292082a  slt         $at, $s4, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE3Cu;
        goto label_15ce3c;
    }
    ctx->pc = 0x15CE34u;
    {
        const bool branch_taken_0x15ce34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE34u;
        // 0x15ce38: 0x292082a  slt         $at, $s4, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce34) {
            ctx->pc = 0x15CE88u;
            goto label_15ce88;
        }
    }
    ctx->pc = 0x15CE3Cu;
label_15ce3c:
    // 0x15ce3c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_15ce40:
    if (ctx->pc == 0x15CE40u) {
        ctx->pc = 0x15CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE3Cu;
        // 0x15ce40: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE44u;
        goto label_15ce44;
    }
    ctx->pc = 0x15CE3Cu;
    {
        const bool branch_taken_0x15ce3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE3Cu;
        // 0x15ce40: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce3c) {
            ctx->pc = 0x15CE88u;
            goto label_15ce88;
        }
    }
    ctx->pc = 0x15CE44u;
label_15ce44:
    // 0x15ce44: 0x0  nop
    ctx->pc = 0x15ce44u;
    // NOP
label_15ce48:
    // 0x15ce48: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x15ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_15ce4c:
    // 0x15ce4c: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15ce50:
    // 0x15ce50: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15ce50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15ce54:
    // 0x15ce54: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_15ce58:
    if (ctx->pc == 0x15CE58u) {
        ctx->pc = 0x15CE5Cu;
        goto label_15ce5c;
    }
    ctx->pc = 0x15CE54u;
    {
        const bool branch_taken_0x15ce54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ce54) {
            ctx->pc = 0x15CE78u;
            goto label_15ce78;
        }
    }
    ctx->pc = 0x15CE5Cu;
label_15ce5c:
    // 0x15ce5c: 0x908301f9  lbu         $v1, 0x1F9($a0)
    ctx->pc = 0x15ce5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 505)));
label_15ce60:
    // 0x15ce60: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_15ce64:
    if (ctx->pc == 0x15CE64u) {
        ctx->pc = 0x15CE68u;
        goto label_15ce68;
    }
    ctx->pc = 0x15CE60u;
    {
        const bool branch_taken_0x15ce60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ce60) {
            ctx->pc = 0x15CE78u;
            goto label_15ce78;
        }
    }
    ctx->pc = 0x15CE68u;
label_15ce68:
    // 0x15ce68: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15ce68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15ce6c:
    // 0x15ce6c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x15ce6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_15ce70:
    // 0x15ce70: 0x320f809  jalr        $t9
label_15ce74:
    if (ctx->pc == 0x15CE74u) {
        ctx->pc = 0x15CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE70u;
        // 0x15ce74: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE78u;
        goto label_15ce78;
    }
    ctx->pc = 0x15CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CE78u);
        ctx->pc = 0x15CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE70u;
        // 0x15ce74: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE70u, 0x15CE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CE78u;
label_15ce78:
    // 0x15ce78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15ce78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15ce7c:
    // 0x15ce7c: 0x292182a  slt         $v1, $s4, $s2
    ctx->pc = 0x15ce7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_15ce80:
    // 0x15ce80: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_15ce84:
    if (ctx->pc == 0x15CE84u) {
        ctx->pc = 0x15CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE80u;
        // 0x15ce84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE88u;
        goto label_15ce88;
    }
    ctx->pc = 0x15CE80u;
    {
        const bool branch_taken_0x15ce80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE80u;
        // 0x15ce84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce80) {
            ctx->pc = 0x15CE44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ce44;
        }
    }
    ctx->pc = 0x15CE88u;
label_15ce88:
    // 0x15ce88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ce88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15ce8c:
    // 0x15ce8c: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x15ce8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15ce90:
    // 0x15ce90: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_15ce94:
    if (ctx->pc == 0x15CE94u) {
        ctx->pc = 0x15CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE90u;
        // 0x15ce94: 0x27de0050  addiu       $fp, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE98u;
        goto label_15ce98;
    }
    ctx->pc = 0x15CE90u;
    {
        const bool branch_taken_0x15ce90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE90u;
        // 0x15ce94: 0x27de0050  addiu       $fp, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce90) {
            ctx->pc = 0x15CDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cdc0;
        }
    }
    ctx->pc = 0x15CE98u;
label_15ce98:
    // 0x15ce98: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15ce98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15ce9c:
    // 0x15ce9c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_15cea0:
    if (ctx->pc == 0x15CEA0u) {
        ctx->pc = 0x15CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE9Cu;
        // 0x15cea0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEA4u;
        goto label_15cea4;
    }
    ctx->pc = 0x15CE9Cu;
    {
        const bool branch_taken_0x15ce9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE9Cu;
        // 0x15cea0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce9c) {
            ctx->pc = 0x15CF20u;
            goto label_15cf20;
        }
    }
    ctx->pc = 0x15CEA4u;
label_15cea4:
    // 0x15cea4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15cea4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cea8:
    // 0x15cea8: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
label_15ceac:
    // 0x15ceac: 0x763821  addu        $a3, $v1, $s6
    ctx->pc = 0x15ceacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_15ceb0:
    // 0x15ceb0: 0x90e30042  lbu         $v1, 0x42($a3)
    ctx->pc = 0x15ceb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 66)));
label_15ceb4:
    // 0x15ceb4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_15ceb8:
    if (ctx->pc == 0x15CEB8u) {
        ctx->pc = 0x15CEBCu;
        goto label_15cebc;
    }
    ctx->pc = 0x15CEB4u;
    {
        const bool branch_taken_0x15ceb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ceb4) {
            ctx->pc = 0x15CF10u;
            goto label_15cf10;
        }
    }
    ctx->pc = 0x15CEBCu;
label_15cebc:
    // 0x15cebc: 0x84e6000a  lh          $a2, 0xA($a3)
    ctx->pc = 0x15cebcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15cec0:
    // 0x15cec0: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x15cec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_15cec4:
    // 0x15cec4: 0x84e4000c  lh          $a0, 0xC($a3)
    ctx->pc = 0x15cec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_15cec8:
    // 0x15cec8: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x15cec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_15cecc:
    // 0x15cecc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15ceccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15ced0:
    // 0x15ced0: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x15ced0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15ced4:
    // 0x15ced4: 0x2639021  addu        $s2, $s3, $v1
    ctx->pc = 0x15ced4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_15ced8:
    // 0x15ced8: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x15ced8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_15cedc:
    // 0x15cedc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_15cee0:
    if (ctx->pc == 0x15CEE0u) {
        ctx->pc = 0x15CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEDCu;
        // 0x15cee0: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEE4u;
        goto label_15cee4;
    }
    ctx->pc = 0x15CEDCu;
    {
        const bool branch_taken_0x15cedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEDCu;
        // 0x15cee0: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cedc) {
            ctx->pc = 0x15CF10u;
            goto label_15cf10;
        }
    }
    ctx->pc = 0x15CEE4u;
label_15cee4:
    // 0x15cee4: 0x0  nop
    ctx->pc = 0x15cee4u;
    // NOP
label_15cee8:
    // 0x15cee8: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x15cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_15ceec:
    // 0x15ceec: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15cef0:
    // 0x15cef0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15cef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15cef4:
    // 0x15cef4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x15cef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_15cef8:
    // 0x15cef8: 0x320f809  jalr        $t9
label_15cefc:
    if (ctx->pc == 0x15CEFCu) {
        ctx->pc = 0x15CF00u;
        goto label_15cf00;
    }
    ctx->pc = 0x15CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CF00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CEF8u, 0x15CF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CF00u;
label_15cf00:
    // 0x15cf00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15cf00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15cf04:
    // 0x15cf04: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x15cf04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_15cf08:
    // 0x15cf08: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_15cf0c:
    if (ctx->pc == 0x15CF0Cu) {
        ctx->pc = 0x15CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF08u;
        // 0x15cf0c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF10u;
        goto label_15cf10;
    }
    ctx->pc = 0x15CF08u;
    {
        const bool branch_taken_0x15cf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF08u;
        // 0x15cf0c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf08) {
            ctx->pc = 0x15CEE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cee4;
        }
    }
    ctx->pc = 0x15CF10u;
label_15cf10:
    // 0x15cf10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15cf10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15cf14:
    // 0x15cf14: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x15cf14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15cf18:
    // 0x15cf18: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_15cf1c:
    if (ctx->pc == 0x15CF1Cu) {
        ctx->pc = 0x15CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF18u;
        // 0x15cf1c: 0x26d60050  addiu       $s6, $s6, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF20u;
        goto label_15cf20;
    }
    ctx->pc = 0x15CF18u;
    {
        const bool branch_taken_0x15cf18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF18u;
        // 0x15cf1c: 0x26d60050  addiu       $s6, $s6, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf18) {
            ctx->pc = 0x15CEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cea8;
        }
    }
    ctx->pc = 0x15CF20u;
label_15cf20:
    // 0x15cf20: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15cf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15cf24:
    // 0x15cf24: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15cf24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15cf28:
    // 0x15cf28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15cf28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15cf2c:
    // 0x15cf2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15cf2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15cf30:
    // 0x15cf30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15cf30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15cf34:
    // 0x15cf34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15cf34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15cf38:
    // 0x15cf38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15cf38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15cf3c:
    // 0x15cf3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cf3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15cf40:
    // 0x15cf40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cf40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15cf44:
    // 0x15cf44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cf44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15cf48:
    // 0x15cf48: 0x3e00008  jr          $ra
label_15cf4c:
    if (ctx->pc == 0x15CF4Cu) {
        ctx->pc = 0x15CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF48u;
        // 0x15cf4c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF50u;
        goto label_fallthrough_0x15cf48;
    }
    ctx->pc = 0x15CF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF48u;
        // 0x15cf4c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15cf48:
    ctx->pc = 0x15CF50u;
}
