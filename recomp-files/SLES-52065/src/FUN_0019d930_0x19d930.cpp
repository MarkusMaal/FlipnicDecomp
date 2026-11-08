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

// Function: FUN_0019d930
// Address: 0x19d930 - 0x19e208
void FUN_0019d930_0x19d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019d930_0x19d930");
#endif

    switch (ctx->pc) {
        case 0x19d930u: goto label_19d930;
        case 0x19d934u: goto label_19d934;
        case 0x19d938u: goto label_19d938;
        case 0x19d93cu: goto label_19d93c;
        case 0x19d940u: goto label_19d940;
        case 0x19d944u: goto label_19d944;
        case 0x19d948u: goto label_19d948;
        case 0x19d94cu: goto label_19d94c;
        case 0x19d950u: goto label_19d950;
        case 0x19d954u: goto label_19d954;
        case 0x19d958u: goto label_19d958;
        case 0x19d95cu: goto label_19d95c;
        case 0x19d960u: goto label_19d960;
        case 0x19d964u: goto label_19d964;
        case 0x19d968u: goto label_19d968;
        case 0x19d96cu: goto label_19d96c;
        case 0x19d970u: goto label_19d970;
        case 0x19d974u: goto label_19d974;
        case 0x19d978u: goto label_19d978;
        case 0x19d97cu: goto label_19d97c;
        case 0x19d980u: goto label_19d980;
        case 0x19d984u: goto label_19d984;
        case 0x19d988u: goto label_19d988;
        case 0x19d98cu: goto label_19d98c;
        case 0x19d990u: goto label_19d990;
        case 0x19d994u: goto label_19d994;
        case 0x19d998u: goto label_19d998;
        case 0x19d99cu: goto label_19d99c;
        case 0x19d9a0u: goto label_19d9a0;
        case 0x19d9a4u: goto label_19d9a4;
        case 0x19d9a8u: goto label_19d9a8;
        case 0x19d9acu: goto label_19d9ac;
        case 0x19d9b0u: goto label_19d9b0;
        case 0x19d9b4u: goto label_19d9b4;
        case 0x19d9b8u: goto label_19d9b8;
        case 0x19d9bcu: goto label_19d9bc;
        case 0x19d9c0u: goto label_19d9c0;
        case 0x19d9c4u: goto label_19d9c4;
        case 0x19d9c8u: goto label_19d9c8;
        case 0x19d9ccu: goto label_19d9cc;
        case 0x19d9d0u: goto label_19d9d0;
        case 0x19d9d4u: goto label_19d9d4;
        case 0x19d9d8u: goto label_19d9d8;
        case 0x19d9dcu: goto label_19d9dc;
        case 0x19d9e0u: goto label_19d9e0;
        case 0x19d9e4u: goto label_19d9e4;
        case 0x19d9e8u: goto label_19d9e8;
        case 0x19d9ecu: goto label_19d9ec;
        case 0x19d9f0u: goto label_19d9f0;
        case 0x19d9f4u: goto label_19d9f4;
        case 0x19d9f8u: goto label_19d9f8;
        case 0x19d9fcu: goto label_19d9fc;
        case 0x19da00u: goto label_19da00;
        case 0x19da04u: goto label_19da04;
        case 0x19da08u: goto label_19da08;
        case 0x19da0cu: goto label_19da0c;
        case 0x19da10u: goto label_19da10;
        case 0x19da14u: goto label_19da14;
        case 0x19da18u: goto label_19da18;
        case 0x19da1cu: goto label_19da1c;
        case 0x19da20u: goto label_19da20;
        case 0x19da24u: goto label_19da24;
        case 0x19da28u: goto label_19da28;
        case 0x19da2cu: goto label_19da2c;
        case 0x19da30u: goto label_19da30;
        case 0x19da34u: goto label_19da34;
        case 0x19da38u: goto label_19da38;
        case 0x19da3cu: goto label_19da3c;
        case 0x19da40u: goto label_19da40;
        case 0x19da44u: goto label_19da44;
        case 0x19da48u: goto label_19da48;
        case 0x19da4cu: goto label_19da4c;
        case 0x19da50u: goto label_19da50;
        case 0x19da54u: goto label_19da54;
        case 0x19da58u: goto label_19da58;
        case 0x19da5cu: goto label_19da5c;
        case 0x19da60u: goto label_19da60;
        case 0x19da64u: goto label_19da64;
        case 0x19da68u: goto label_19da68;
        case 0x19da6cu: goto label_19da6c;
        case 0x19da70u: goto label_19da70;
        case 0x19da74u: goto label_19da74;
        case 0x19da78u: goto label_19da78;
        case 0x19da7cu: goto label_19da7c;
        case 0x19da80u: goto label_19da80;
        case 0x19da84u: goto label_19da84;
        case 0x19da88u: goto label_19da88;
        case 0x19da8cu: goto label_19da8c;
        case 0x19da90u: goto label_19da90;
        case 0x19da94u: goto label_19da94;
        case 0x19da98u: goto label_19da98;
        case 0x19da9cu: goto label_19da9c;
        case 0x19daa0u: goto label_19daa0;
        case 0x19daa4u: goto label_19daa4;
        case 0x19daa8u: goto label_19daa8;
        case 0x19daacu: goto label_19daac;
        case 0x19dab0u: goto label_19dab0;
        case 0x19dab4u: goto label_19dab4;
        case 0x19dab8u: goto label_19dab8;
        case 0x19dabcu: goto label_19dabc;
        case 0x19dac0u: goto label_19dac0;
        case 0x19dac4u: goto label_19dac4;
        case 0x19dac8u: goto label_19dac8;
        case 0x19daccu: goto label_19dacc;
        case 0x19dad0u: goto label_19dad0;
        case 0x19dad4u: goto label_19dad4;
        case 0x19dad8u: goto label_19dad8;
        case 0x19dadcu: goto label_19dadc;
        case 0x19dae0u: goto label_19dae0;
        case 0x19dae4u: goto label_19dae4;
        case 0x19dae8u: goto label_19dae8;
        case 0x19daecu: goto label_19daec;
        case 0x19daf0u: goto label_19daf0;
        case 0x19daf4u: goto label_19daf4;
        case 0x19daf8u: goto label_19daf8;
        case 0x19dafcu: goto label_19dafc;
        case 0x19db00u: goto label_19db00;
        case 0x19db04u: goto label_19db04;
        case 0x19db08u: goto label_19db08;
        case 0x19db0cu: goto label_19db0c;
        case 0x19db10u: goto label_19db10;
        case 0x19db14u: goto label_19db14;
        case 0x19db18u: goto label_19db18;
        case 0x19db1cu: goto label_19db1c;
        case 0x19db20u: goto label_19db20;
        case 0x19db24u: goto label_19db24;
        case 0x19db28u: goto label_19db28;
        case 0x19db2cu: goto label_19db2c;
        case 0x19db30u: goto label_19db30;
        case 0x19db34u: goto label_19db34;
        case 0x19db38u: goto label_19db38;
        case 0x19db3cu: goto label_19db3c;
        case 0x19db40u: goto label_19db40;
        case 0x19db44u: goto label_19db44;
        case 0x19db48u: goto label_19db48;
        case 0x19db4cu: goto label_19db4c;
        case 0x19db50u: goto label_19db50;
        case 0x19db54u: goto label_19db54;
        case 0x19db58u: goto label_19db58;
        case 0x19db5cu: goto label_19db5c;
        case 0x19db60u: goto label_19db60;
        case 0x19db64u: goto label_19db64;
        case 0x19db68u: goto label_19db68;
        case 0x19db6cu: goto label_19db6c;
        case 0x19db70u: goto label_19db70;
        case 0x19db74u: goto label_19db74;
        case 0x19db78u: goto label_19db78;
        case 0x19db7cu: goto label_19db7c;
        case 0x19db80u: goto label_19db80;
        case 0x19db84u: goto label_19db84;
        case 0x19db88u: goto label_19db88;
        case 0x19db8cu: goto label_19db8c;
        case 0x19db90u: goto label_19db90;
        case 0x19db94u: goto label_19db94;
        case 0x19db98u: goto label_19db98;
        case 0x19db9cu: goto label_19db9c;
        case 0x19dba0u: goto label_19dba0;
        case 0x19dba4u: goto label_19dba4;
        case 0x19dba8u: goto label_19dba8;
        case 0x19dbacu: goto label_19dbac;
        case 0x19dbb0u: goto label_19dbb0;
        case 0x19dbb4u: goto label_19dbb4;
        case 0x19dbb8u: goto label_19dbb8;
        case 0x19dbbcu: goto label_19dbbc;
        case 0x19dbc0u: goto label_19dbc0;
        case 0x19dbc4u: goto label_19dbc4;
        case 0x19dbc8u: goto label_19dbc8;
        case 0x19dbccu: goto label_19dbcc;
        case 0x19dbd0u: goto label_19dbd0;
        case 0x19dbd4u: goto label_19dbd4;
        case 0x19dbd8u: goto label_19dbd8;
        case 0x19dbdcu: goto label_19dbdc;
        case 0x19dbe0u: goto label_19dbe0;
        case 0x19dbe4u: goto label_19dbe4;
        case 0x19dbe8u: goto label_19dbe8;
        case 0x19dbecu: goto label_19dbec;
        case 0x19dbf0u: goto label_19dbf0;
        case 0x19dbf4u: goto label_19dbf4;
        case 0x19dbf8u: goto label_19dbf8;
        case 0x19dbfcu: goto label_19dbfc;
        case 0x19dc00u: goto label_19dc00;
        case 0x19dc04u: goto label_19dc04;
        case 0x19dc08u: goto label_19dc08;
        case 0x19dc0cu: goto label_19dc0c;
        case 0x19dc10u: goto label_19dc10;
        case 0x19dc14u: goto label_19dc14;
        case 0x19dc18u: goto label_19dc18;
        case 0x19dc1cu: goto label_19dc1c;
        case 0x19dc20u: goto label_19dc20;
        case 0x19dc24u: goto label_19dc24;
        case 0x19dc28u: goto label_19dc28;
        case 0x19dc2cu: goto label_19dc2c;
        case 0x19dc30u: goto label_19dc30;
        case 0x19dc34u: goto label_19dc34;
        case 0x19dc38u: goto label_19dc38;
        case 0x19dc3cu: goto label_19dc3c;
        case 0x19dc40u: goto label_19dc40;
        case 0x19dc44u: goto label_19dc44;
        case 0x19dc48u: goto label_19dc48;
        case 0x19dc4cu: goto label_19dc4c;
        case 0x19dc50u: goto label_19dc50;
        case 0x19dc54u: goto label_19dc54;
        case 0x19dc58u: goto label_19dc58;
        case 0x19dc5cu: goto label_19dc5c;
        case 0x19dc60u: goto label_19dc60;
        case 0x19dc64u: goto label_19dc64;
        case 0x19dc68u: goto label_19dc68;
        case 0x19dc6cu: goto label_19dc6c;
        case 0x19dc70u: goto label_19dc70;
        case 0x19dc74u: goto label_19dc74;
        case 0x19dc78u: goto label_19dc78;
        case 0x19dc7cu: goto label_19dc7c;
        case 0x19dc80u: goto label_19dc80;
        case 0x19dc84u: goto label_19dc84;
        case 0x19dc88u: goto label_19dc88;
        case 0x19dc8cu: goto label_19dc8c;
        case 0x19dc90u: goto label_19dc90;
        case 0x19dc94u: goto label_19dc94;
        case 0x19dc98u: goto label_19dc98;
        case 0x19dc9cu: goto label_19dc9c;
        case 0x19dca0u: goto label_19dca0;
        case 0x19dca4u: goto label_19dca4;
        case 0x19dca8u: goto label_19dca8;
        case 0x19dcacu: goto label_19dcac;
        case 0x19dcb0u: goto label_19dcb0;
        case 0x19dcb4u: goto label_19dcb4;
        case 0x19dcb8u: goto label_19dcb8;
        case 0x19dcbcu: goto label_19dcbc;
        case 0x19dcc0u: goto label_19dcc0;
        case 0x19dcc4u: goto label_19dcc4;
        case 0x19dcc8u: goto label_19dcc8;
        case 0x19dcccu: goto label_19dccc;
        case 0x19dcd0u: goto label_19dcd0;
        case 0x19dcd4u: goto label_19dcd4;
        case 0x19dcd8u: goto label_19dcd8;
        case 0x19dcdcu: goto label_19dcdc;
        case 0x19dce0u: goto label_19dce0;
        case 0x19dce4u: goto label_19dce4;
        case 0x19dce8u: goto label_19dce8;
        case 0x19dcecu: goto label_19dcec;
        case 0x19dcf0u: goto label_19dcf0;
        case 0x19dcf4u: goto label_19dcf4;
        case 0x19dcf8u: goto label_19dcf8;
        case 0x19dcfcu: goto label_19dcfc;
        case 0x19dd00u: goto label_19dd00;
        case 0x19dd04u: goto label_19dd04;
        case 0x19dd08u: goto label_19dd08;
        case 0x19dd0cu: goto label_19dd0c;
        case 0x19dd10u: goto label_19dd10;
        case 0x19dd14u: goto label_19dd14;
        case 0x19dd18u: goto label_19dd18;
        case 0x19dd1cu: goto label_19dd1c;
        case 0x19dd20u: goto label_19dd20;
        case 0x19dd24u: goto label_19dd24;
        case 0x19dd28u: goto label_19dd28;
        case 0x19dd2cu: goto label_19dd2c;
        case 0x19dd30u: goto label_19dd30;
        case 0x19dd34u: goto label_19dd34;
        case 0x19dd38u: goto label_19dd38;
        case 0x19dd3cu: goto label_19dd3c;
        case 0x19dd40u: goto label_19dd40;
        case 0x19dd44u: goto label_19dd44;
        case 0x19dd48u: goto label_19dd48;
        case 0x19dd4cu: goto label_19dd4c;
        case 0x19dd50u: goto label_19dd50;
        case 0x19dd54u: goto label_19dd54;
        case 0x19dd58u: goto label_19dd58;
        case 0x19dd5cu: goto label_19dd5c;
        case 0x19dd60u: goto label_19dd60;
        case 0x19dd64u: goto label_19dd64;
        case 0x19dd68u: goto label_19dd68;
        case 0x19dd6cu: goto label_19dd6c;
        case 0x19dd70u: goto label_19dd70;
        case 0x19dd74u: goto label_19dd74;
        case 0x19dd78u: goto label_19dd78;
        case 0x19dd7cu: goto label_19dd7c;
        case 0x19dd80u: goto label_19dd80;
        case 0x19dd84u: goto label_19dd84;
        case 0x19dd88u: goto label_19dd88;
        case 0x19dd8cu: goto label_19dd8c;
        case 0x19dd90u: goto label_19dd90;
        case 0x19dd94u: goto label_19dd94;
        case 0x19dd98u: goto label_19dd98;
        case 0x19dd9cu: goto label_19dd9c;
        case 0x19dda0u: goto label_19dda0;
        case 0x19dda4u: goto label_19dda4;
        case 0x19dda8u: goto label_19dda8;
        case 0x19ddacu: goto label_19ddac;
        case 0x19ddb0u: goto label_19ddb0;
        case 0x19ddb4u: goto label_19ddb4;
        case 0x19ddb8u: goto label_19ddb8;
        case 0x19ddbcu: goto label_19ddbc;
        case 0x19ddc0u: goto label_19ddc0;
        case 0x19ddc4u: goto label_19ddc4;
        case 0x19ddc8u: goto label_19ddc8;
        case 0x19ddccu: goto label_19ddcc;
        case 0x19ddd0u: goto label_19ddd0;
        case 0x19ddd4u: goto label_19ddd4;
        case 0x19ddd8u: goto label_19ddd8;
        case 0x19dddcu: goto label_19dddc;
        case 0x19dde0u: goto label_19dde0;
        case 0x19dde4u: goto label_19dde4;
        case 0x19dde8u: goto label_19dde8;
        case 0x19ddecu: goto label_19ddec;
        case 0x19ddf0u: goto label_19ddf0;
        case 0x19ddf4u: goto label_19ddf4;
        case 0x19ddf8u: goto label_19ddf8;
        case 0x19ddfcu: goto label_19ddfc;
        case 0x19de00u: goto label_19de00;
        case 0x19de04u: goto label_19de04;
        case 0x19de08u: goto label_19de08;
        case 0x19de0cu: goto label_19de0c;
        case 0x19de10u: goto label_19de10;
        case 0x19de14u: goto label_19de14;
        case 0x19de18u: goto label_19de18;
        case 0x19de1cu: goto label_19de1c;
        case 0x19de20u: goto label_19de20;
        case 0x19de24u: goto label_19de24;
        case 0x19de28u: goto label_19de28;
        case 0x19de2cu: goto label_19de2c;
        case 0x19de30u: goto label_19de30;
        case 0x19de34u: goto label_19de34;
        case 0x19de38u: goto label_19de38;
        case 0x19de3cu: goto label_19de3c;
        case 0x19de40u: goto label_19de40;
        case 0x19de44u: goto label_19de44;
        case 0x19de48u: goto label_19de48;
        case 0x19de4cu: goto label_19de4c;
        case 0x19de50u: goto label_19de50;
        case 0x19de54u: goto label_19de54;
        case 0x19de58u: goto label_19de58;
        case 0x19de5cu: goto label_19de5c;
        case 0x19de60u: goto label_19de60;
        case 0x19de64u: goto label_19de64;
        case 0x19de68u: goto label_19de68;
        case 0x19de6cu: goto label_19de6c;
        case 0x19de70u: goto label_19de70;
        case 0x19de74u: goto label_19de74;
        case 0x19de78u: goto label_19de78;
        case 0x19de7cu: goto label_19de7c;
        case 0x19de80u: goto label_19de80;
        case 0x19de84u: goto label_19de84;
        case 0x19de88u: goto label_19de88;
        case 0x19de8cu: goto label_19de8c;
        case 0x19de90u: goto label_19de90;
        case 0x19de94u: goto label_19de94;
        case 0x19de98u: goto label_19de98;
        case 0x19de9cu: goto label_19de9c;
        case 0x19dea0u: goto label_19dea0;
        case 0x19dea4u: goto label_19dea4;
        case 0x19dea8u: goto label_19dea8;
        case 0x19deacu: goto label_19deac;
        case 0x19deb0u: goto label_19deb0;
        case 0x19deb4u: goto label_19deb4;
        case 0x19deb8u: goto label_19deb8;
        case 0x19debcu: goto label_19debc;
        case 0x19dec0u: goto label_19dec0;
        case 0x19dec4u: goto label_19dec4;
        case 0x19dec8u: goto label_19dec8;
        case 0x19deccu: goto label_19decc;
        case 0x19ded0u: goto label_19ded0;
        case 0x19ded4u: goto label_19ded4;
        case 0x19ded8u: goto label_19ded8;
        case 0x19dedcu: goto label_19dedc;
        case 0x19dee0u: goto label_19dee0;
        case 0x19dee4u: goto label_19dee4;
        case 0x19dee8u: goto label_19dee8;
        case 0x19deecu: goto label_19deec;
        case 0x19def0u: goto label_19def0;
        case 0x19def4u: goto label_19def4;
        case 0x19def8u: goto label_19def8;
        case 0x19defcu: goto label_19defc;
        case 0x19df00u: goto label_19df00;
        case 0x19df04u: goto label_19df04;
        case 0x19df08u: goto label_19df08;
        case 0x19df0cu: goto label_19df0c;
        case 0x19df10u: goto label_19df10;
        case 0x19df14u: goto label_19df14;
        case 0x19df18u: goto label_19df18;
        case 0x19df1cu: goto label_19df1c;
        case 0x19df20u: goto label_19df20;
        case 0x19df24u: goto label_19df24;
        case 0x19df28u: goto label_19df28;
        case 0x19df2cu: goto label_19df2c;
        case 0x19df30u: goto label_19df30;
        case 0x19df34u: goto label_19df34;
        case 0x19df38u: goto label_19df38;
        case 0x19df3cu: goto label_19df3c;
        case 0x19df40u: goto label_19df40;
        case 0x19df44u: goto label_19df44;
        case 0x19df48u: goto label_19df48;
        case 0x19df4cu: goto label_19df4c;
        case 0x19df50u: goto label_19df50;
        case 0x19df54u: goto label_19df54;
        case 0x19df58u: goto label_19df58;
        case 0x19df5cu: goto label_19df5c;
        case 0x19df60u: goto label_19df60;
        case 0x19df64u: goto label_19df64;
        case 0x19df68u: goto label_19df68;
        case 0x19df6cu: goto label_19df6c;
        case 0x19df70u: goto label_19df70;
        case 0x19df74u: goto label_19df74;
        case 0x19df78u: goto label_19df78;
        case 0x19df7cu: goto label_19df7c;
        case 0x19df80u: goto label_19df80;
        case 0x19df84u: goto label_19df84;
        case 0x19df88u: goto label_19df88;
        case 0x19df8cu: goto label_19df8c;
        case 0x19df90u: goto label_19df90;
        case 0x19df94u: goto label_19df94;
        case 0x19df98u: goto label_19df98;
        case 0x19df9cu: goto label_19df9c;
        case 0x19dfa0u: goto label_19dfa0;
        case 0x19dfa4u: goto label_19dfa4;
        case 0x19dfa8u: goto label_19dfa8;
        case 0x19dfacu: goto label_19dfac;
        case 0x19dfb0u: goto label_19dfb0;
        case 0x19dfb4u: goto label_19dfb4;
        case 0x19dfb8u: goto label_19dfb8;
        case 0x19dfbcu: goto label_19dfbc;
        case 0x19dfc0u: goto label_19dfc0;
        case 0x19dfc4u: goto label_19dfc4;
        case 0x19dfc8u: goto label_19dfc8;
        case 0x19dfccu: goto label_19dfcc;
        case 0x19dfd0u: goto label_19dfd0;
        case 0x19dfd4u: goto label_19dfd4;
        case 0x19dfd8u: goto label_19dfd8;
        case 0x19dfdcu: goto label_19dfdc;
        case 0x19dfe0u: goto label_19dfe0;
        case 0x19dfe4u: goto label_19dfe4;
        case 0x19dfe8u: goto label_19dfe8;
        case 0x19dfecu: goto label_19dfec;
        case 0x19dff0u: goto label_19dff0;
        case 0x19dff4u: goto label_19dff4;
        case 0x19dff8u: goto label_19dff8;
        case 0x19dffcu: goto label_19dffc;
        case 0x19e000u: goto label_19e000;
        case 0x19e004u: goto label_19e004;
        case 0x19e008u: goto label_19e008;
        case 0x19e00cu: goto label_19e00c;
        case 0x19e010u: goto label_19e010;
        case 0x19e014u: goto label_19e014;
        case 0x19e018u: goto label_19e018;
        case 0x19e01cu: goto label_19e01c;
        case 0x19e020u: goto label_19e020;
        case 0x19e024u: goto label_19e024;
        case 0x19e028u: goto label_19e028;
        case 0x19e02cu: goto label_19e02c;
        case 0x19e030u: goto label_19e030;
        case 0x19e034u: goto label_19e034;
        case 0x19e038u: goto label_19e038;
        case 0x19e03cu: goto label_19e03c;
        case 0x19e040u: goto label_19e040;
        case 0x19e044u: goto label_19e044;
        case 0x19e048u: goto label_19e048;
        case 0x19e04cu: goto label_19e04c;
        case 0x19e050u: goto label_19e050;
        case 0x19e054u: goto label_19e054;
        case 0x19e058u: goto label_19e058;
        case 0x19e05cu: goto label_19e05c;
        case 0x19e060u: goto label_19e060;
        case 0x19e064u: goto label_19e064;
        case 0x19e068u: goto label_19e068;
        case 0x19e06cu: goto label_19e06c;
        case 0x19e070u: goto label_19e070;
        case 0x19e074u: goto label_19e074;
        case 0x19e078u: goto label_19e078;
        case 0x19e07cu: goto label_19e07c;
        case 0x19e080u: goto label_19e080;
        case 0x19e084u: goto label_19e084;
        case 0x19e088u: goto label_19e088;
        case 0x19e08cu: goto label_19e08c;
        case 0x19e090u: goto label_19e090;
        case 0x19e094u: goto label_19e094;
        case 0x19e098u: goto label_19e098;
        case 0x19e09cu: goto label_19e09c;
        case 0x19e0a0u: goto label_19e0a0;
        case 0x19e0a4u: goto label_19e0a4;
        case 0x19e0a8u: goto label_19e0a8;
        case 0x19e0acu: goto label_19e0ac;
        case 0x19e0b0u: goto label_19e0b0;
        case 0x19e0b4u: goto label_19e0b4;
        case 0x19e0b8u: goto label_19e0b8;
        case 0x19e0bcu: goto label_19e0bc;
        case 0x19e0c0u: goto label_19e0c0;
        case 0x19e0c4u: goto label_19e0c4;
        case 0x19e0c8u: goto label_19e0c8;
        case 0x19e0ccu: goto label_19e0cc;
        case 0x19e0d0u: goto label_19e0d0;
        case 0x19e0d4u: goto label_19e0d4;
        case 0x19e0d8u: goto label_19e0d8;
        case 0x19e0dcu: goto label_19e0dc;
        case 0x19e0e0u: goto label_19e0e0;
        case 0x19e0e4u: goto label_19e0e4;
        case 0x19e0e8u: goto label_19e0e8;
        case 0x19e0ecu: goto label_19e0ec;
        case 0x19e0f0u: goto label_19e0f0;
        case 0x19e0f4u: goto label_19e0f4;
        case 0x19e0f8u: goto label_19e0f8;
        case 0x19e0fcu: goto label_19e0fc;
        case 0x19e100u: goto label_19e100;
        case 0x19e104u: goto label_19e104;
        case 0x19e108u: goto label_19e108;
        case 0x19e10cu: goto label_19e10c;
        case 0x19e110u: goto label_19e110;
        case 0x19e114u: goto label_19e114;
        case 0x19e118u: goto label_19e118;
        case 0x19e11cu: goto label_19e11c;
        case 0x19e120u: goto label_19e120;
        case 0x19e124u: goto label_19e124;
        case 0x19e128u: goto label_19e128;
        case 0x19e12cu: goto label_19e12c;
        case 0x19e130u: goto label_19e130;
        case 0x19e134u: goto label_19e134;
        case 0x19e138u: goto label_19e138;
        case 0x19e13cu: goto label_19e13c;
        case 0x19e140u: goto label_19e140;
        case 0x19e144u: goto label_19e144;
        case 0x19e148u: goto label_19e148;
        case 0x19e14cu: goto label_19e14c;
        case 0x19e150u: goto label_19e150;
        case 0x19e154u: goto label_19e154;
        case 0x19e158u: goto label_19e158;
        case 0x19e15cu: goto label_19e15c;
        case 0x19e160u: goto label_19e160;
        case 0x19e164u: goto label_19e164;
        case 0x19e168u: goto label_19e168;
        case 0x19e16cu: goto label_19e16c;
        case 0x19e170u: goto label_19e170;
        case 0x19e174u: goto label_19e174;
        case 0x19e178u: goto label_19e178;
        case 0x19e17cu: goto label_19e17c;
        case 0x19e180u: goto label_19e180;
        case 0x19e184u: goto label_19e184;
        case 0x19e188u: goto label_19e188;
        case 0x19e18cu: goto label_19e18c;
        case 0x19e190u: goto label_19e190;
        case 0x19e194u: goto label_19e194;
        case 0x19e198u: goto label_19e198;
        case 0x19e19cu: goto label_19e19c;
        case 0x19e1a0u: goto label_19e1a0;
        case 0x19e1a4u: goto label_19e1a4;
        case 0x19e1a8u: goto label_19e1a8;
        case 0x19e1acu: goto label_19e1ac;
        case 0x19e1b0u: goto label_19e1b0;
        case 0x19e1b4u: goto label_19e1b4;
        case 0x19e1b8u: goto label_19e1b8;
        case 0x19e1bcu: goto label_19e1bc;
        case 0x19e1c0u: goto label_19e1c0;
        case 0x19e1c4u: goto label_19e1c4;
        case 0x19e1c8u: goto label_19e1c8;
        case 0x19e1ccu: goto label_19e1cc;
        case 0x19e1d0u: goto label_19e1d0;
        case 0x19e1d4u: goto label_19e1d4;
        case 0x19e1d8u: goto label_19e1d8;
        case 0x19e1dcu: goto label_19e1dc;
        case 0x19e1e0u: goto label_19e1e0;
        case 0x19e1e4u: goto label_19e1e4;
        case 0x19e1e8u: goto label_19e1e8;
        case 0x19e1ecu: goto label_19e1ec;
        case 0x19e1f0u: goto label_19e1f0;
        case 0x19e1f4u: goto label_19e1f4;
        case 0x19e1f8u: goto label_19e1f8;
        case 0x19e1fcu: goto label_19e1fc;
        case 0x19e200u: goto label_19e200;
        case 0x19e204u: goto label_19e204;
        default: break;
    }

    ctx->pc = 0x19d930u;

label_19d930:
    // 0x19d930: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_19d934:
    // 0x19d934: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_19d938:
    // 0x19d938: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_19d93c:
    // 0x19d93c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_19d940:
    // 0x19d940: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x19d940u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19d944:
    // 0x19d944: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19d944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_19d948:
    // 0x19d948: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_19d94c:
    // 0x19d94c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19d950:
    // 0x19d950: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19d950u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d954:
    // 0x19d954: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19d954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19d958:
    // 0x19d958: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19d958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19d95c:
    // 0x19d95c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19d960:
    // 0x19d960: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19d964:
    // 0x19d964: 0xc063dd4  jal         func_18F750
label_19d968:
    if (ctx->pc == 0x19D968u) {
        ctx->pc = 0x19D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D964u;
        // 0x19d968: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D96Cu;
        goto label_19d96c;
    }
    ctx->pc = 0x19D964u;
    SET_GPR_U32(ctx, 31, 0x19D96Cu);
    ctx->pc = 0x19D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D964u;
    // 0x19d968: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19D964u, 0x19D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D96Cu;
label_19d96c:
    // 0x19d96c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19d970:
    // 0x19d970: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x19d970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_19d974:
    // 0x19d974: 0x104401c9  beq         $v0, $a0, . + 4 + (0x1C9 << 2)
label_19d978:
    if (ctx->pc == 0x19D978u) {
        ctx->pc = 0x19D97Cu;
        goto label_19d97c;
    }
    ctx->pc = 0x19D974u;
    {
        const bool branch_taken_0x19d974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d974) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19D97Cu;
label_19d97c:
    // 0x19d97c: 0x104301c7  beq         $v0, $v1, . + 4 + (0x1C7 << 2)
label_19d980:
    if (ctx->pc == 0x19D980u) {
        ctx->pc = 0x19D984u;
        goto label_19d984;
    }
    ctx->pc = 0x19D97Cu;
    {
        const bool branch_taken_0x19d97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d97c) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19D984u;
label_19d984:
    // 0x19d984: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x19d984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_19d988:
    // 0x19d988: 0x104301bb  beq         $v0, $v1, . + 4 + (0x1BB << 2)
label_19d98c:
    if (ctx->pc == 0x19D98Cu) {
        ctx->pc = 0x19D990u;
        goto label_19d990;
    }
    ctx->pc = 0x19D988u;
    {
        const bool branch_taken_0x19d988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d988) {
            ctx->pc = 0x19E078u;
            goto label_19e078;
        }
    }
    ctx->pc = 0x19D990u;
label_19d990:
    // 0x19d990: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19d990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19d994:
    // 0x19d994: 0x1043018a  beq         $v0, $v1, . + 4 + (0x18A << 2)
label_19d998:
    if (ctx->pc == 0x19D998u) {
        ctx->pc = 0x19D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D994u;
        // 0x19d998: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D99Cu;
        goto label_19d99c;
    }
    ctx->pc = 0x19D994u;
    {
        const bool branch_taken_0x19d994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D994u;
        // 0x19d998: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d994) {
            ctx->pc = 0x19DFC0u;
            goto label_19dfc0;
        }
    }
    ctx->pc = 0x19D99Cu;
label_19d99c:
    // 0x19d99c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_19d9a0:
    // 0x19d9a0: 0x10430165  beq         $v0, $v1, . + 4 + (0x165 << 2)
label_19d9a4:
    if (ctx->pc == 0x19D9A4u) {
        ctx->pc = 0x19D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9A0u;
        // 0x19d9a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D9A8u;
        goto label_19d9a8;
    }
    ctx->pc = 0x19D9A0u;
    {
        const bool branch_taken_0x19d9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9A0u;
        // 0x19d9a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9a0) {
            ctx->pc = 0x19DF38u;
            goto label_19df38;
        }
    }
    ctx->pc = 0x19D9A8u;
label_19d9a8:
    // 0x19d9a8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19d9ac:
    // 0x19d9ac: 0x104301bb  beq         $v0, $v1, . + 4 + (0x1BB << 2)
label_19d9b0:
    if (ctx->pc == 0x19D9B0u) {
        ctx->pc = 0x19D9B4u;
        goto label_19d9b4;
    }
    ctx->pc = 0x19D9ACu;
    {
        const bool branch_taken_0x19d9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d9ac) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19D9B4u;
label_19d9b4:
    // 0x19d9b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19d9b8:
    // 0x19d9b8: 0x10430133  beq         $v0, $v1, . + 4 + (0x133 << 2)
label_19d9bc:
    if (ctx->pc == 0x19D9BCu) {
        ctx->pc = 0x19D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9B8u;
        // 0x19d9bc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D9C0u;
        goto label_19d9c0;
    }
    ctx->pc = 0x19D9B8u;
    {
        const bool branch_taken_0x19d9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9B8u;
        // 0x19d9bc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9b8) {
            ctx->pc = 0x19DE88u;
            goto label_19de88;
        }
    }
    ctx->pc = 0x19D9C0u;
label_19d9c0:
    // 0x19d9c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19d9c4:
    // 0x19d9c4: 0x104301b5  beq         $v0, $v1, . + 4 + (0x1B5 << 2)
label_19d9c8:
    if (ctx->pc == 0x19D9C8u) {
        ctx->pc = 0x19D9CCu;
        goto label_19d9cc;
    }
    ctx->pc = 0x19D9C4u;
    {
        const bool branch_taken_0x19d9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d9c4) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19D9CCu;
label_19d9cc:
    // 0x19d9cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19d9d0:
    // 0x19d9d0: 0x104300fe  beq         $v0, $v1, . + 4 + (0xFE << 2)
label_19d9d4:
    if (ctx->pc == 0x19D9D4u) {
        ctx->pc = 0x19D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9D0u;
        // 0x19d9d4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D9D8u;
        goto label_19d9d8;
    }
    ctx->pc = 0x19D9D0u;
    {
        const bool branch_taken_0x19d9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9D0u;
        // 0x19d9d4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9d0) {
            ctx->pc = 0x19DDCCu;
            goto label_19ddcc;
        }
    }
    ctx->pc = 0x19D9D8u;
label_19d9d8:
    // 0x19d9d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d9dc:
    // 0x19d9dc: 0x104300cb  beq         $v0, $v1, . + 4 + (0xCB << 2)
label_19d9e0:
    if (ctx->pc == 0x19D9E0u) {
        ctx->pc = 0x19D9E4u;
        goto label_19d9e4;
    }
    ctx->pc = 0x19D9DCu;
    {
        const bool branch_taken_0x19d9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d9dc) {
            ctx->pc = 0x19DD0Cu;
            goto label_19dd0c;
        }
    }
    ctx->pc = 0x19D9E4u;
label_19d9e4:
    // 0x19d9e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d9e8:
    // 0x19d9e8: 0x10430057  beq         $v0, $v1, . + 4 + (0x57 << 2)
label_19d9ec:
    if (ctx->pc == 0x19D9ECu) {
        ctx->pc = 0x19D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9E8u;
        // 0x19d9ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D9F0u;
        goto label_19d9f0;
    }
    ctx->pc = 0x19D9E8u;
    {
        const bool branch_taken_0x19d9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9E8u;
        // 0x19d9ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9e8) {
            ctx->pc = 0x19DB48u;
            goto label_19db48;
        }
    }
    ctx->pc = 0x19D9F0u;
label_19d9f0:
    // 0x19d9f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19d9f4:
    if (ctx->pc == 0x19D9F4u) {
        ctx->pc = 0x19D9F8u;
        goto label_19d9f8;
    }
    ctx->pc = 0x19D9F0u;
    {
        const bool branch_taken_0x19d9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d9f0) {
            ctx->pc = 0x19DA00u;
            goto label_19da00;
        }
    }
    ctx->pc = 0x19D9F8u;
label_19d9f8:
    // 0x19d9f8: 0x100001a9  b           . + 4 + (0x1A9 << 2)
label_19d9fc:
    if (ctx->pc == 0x19D9FCu) {
        ctx->pc = 0x19D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9F8u;
        // 0x19d9fc: 0x8ea30320  lw          $v1, 0x320($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA00u;
        goto label_19da00;
    }
    ctx->pc = 0x19D9F8u;
    {
        const bool branch_taken_0x19d9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9F8u;
        // 0x19d9fc: 0x8ea30320  lw          $v1, 0x320($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9f8) {
            ctx->pc = 0x19E0A0u;
            goto label_19e0a0;
        }
    }
    ctx->pc = 0x19DA00u;
label_19da00:
    // 0x19da00: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_19da04:
    // 0x19da04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19da04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19da08:
    // 0x19da08: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x19da08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19da0c:
    // 0x19da0c: 0x2413fffc  addiu       $s3, $zero, -0x4
    ctx->pc = 0x19da0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_19da10:
    // 0x19da10: 0x2414ffc0  addiu       $s4, $zero, -0x40
    ctx->pc = 0x19da10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_19da14:
    // 0x19da14: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x19da14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19da18:
    // 0x19da18: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x19da18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_19da1c:
    // 0x19da1c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x19da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_19da20:
    // 0x19da20: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_19da24:
    if (ctx->pc == 0x19DA24u) {
        ctx->pc = 0x19DA28u;
        goto label_19da28;
    }
    ctx->pc = 0x19DA20u;
    {
        const bool branch_taken_0x19da20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19da20) {
            ctx->pc = 0x19DA88u;
            goto label_19da88;
        }
    }
    ctx->pc = 0x19DA28u;
label_19da28:
    // 0x19da28: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x19da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_19da2c:
    // 0x19da2c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_19da30:
    if (ctx->pc == 0x19DA30u) {
        ctx->pc = 0x19DA34u;
        goto label_19da34;
    }
    ctx->pc = 0x19DA2Cu;
    {
        const bool branch_taken_0x19da2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19da2c) {
            ctx->pc = 0x19DA3Cu;
            goto label_19da3c;
        }
    }
    ctx->pc = 0x19DA34u;
label_19da34:
    // 0x19da34: 0x1000001e  b           . + 4 + (0x1E << 2)
label_19da38:
    if (ctx->pc == 0x19DA38u) {
        ctx->pc = 0x19DA3Cu;
        goto label_19da3c;
    }
    ctx->pc = 0x19DA34u;
    {
        const bool branch_taken_0x19da34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19da34) {
            ctx->pc = 0x19DAB0u;
            goto label_19dab0;
        }
    }
    ctx->pc = 0x19DA3Cu;
label_19da3c:
    // 0x19da3c: 0x0  nop
    ctx->pc = 0x19da3cu;
    // NOP
label_19da40:
    // 0x19da40: 0xaeb20998  sw          $s2, 0x998($s5)
    ctx->pc = 0x19da40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2456), GPR_U32(ctx, 18));
label_19da44:
    // 0x19da44: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x19da44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_19da48:
    // 0x19da48: 0x26b60998  addiu       $s6, $s5, 0x998
    ctx->pc = 0x19da48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 2456));
label_19da4c:
    // 0x19da4c: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x19da4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_19da50:
    // 0x19da50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19da50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19da54:
    // 0x19da54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19da54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19da58:
    // 0x19da58: 0xc064f7c  jal         func_193DF0
label_19da5c:
    if (ctx->pc == 0x19DA5Cu) {
        ctx->pc = 0x19DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA58u;
        // 0x19da5c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA60u;
        goto label_19da60;
    }
    ctx->pc = 0x19DA58u;
    SET_GPR_U32(ctx, 31, 0x19DA60u);
    ctx->pc = 0x19DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA58u;
    // 0x19da5c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x19DA58u, 0x19DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA60u;
label_19da60:
    // 0x19da60: 0xc04bf44  jal         func_12FD10
label_19da64:
    if (ctx->pc == 0x19DA64u) {
        ctx->pc = 0x19DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA60u;
        // 0x19da64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA68u;
        goto label_19da68;
    }
    ctx->pc = 0x19DA60u;
    SET_GPR_U32(ctx, 31, 0x19DA68u);
    ctx->pc = 0x19DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA60u;
    // 0x19da64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x19DA60u, 0x19DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA68u;
label_19da68:
    // 0x19da68: 0xaea2099c  sw          $v0, 0x99C($s5)
    ctx->pc = 0x19da68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2460), GPR_U32(ctx, 2));
label_19da6c:
    // 0x19da6c: 0x8ea4099c  lw          $a0, 0x99C($s5)
    ctx->pc = 0x19da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2460)));
label_19da70:
    // 0x19da70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19da70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19da74:
    // 0x19da74: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x19da74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_19da78:
    // 0x19da78: 0x320f809  jalr        $t9
label_19da7c:
    if (ctx->pc == 0x19DA7Cu) {
        ctx->pc = 0x19DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA78u;
        // 0x19da7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA80u;
        goto label_19da80;
    }
    ctx->pc = 0x19DA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19DA80u);
        ctx->pc = 0x19DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA78u;
        // 0x19da7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DA78u, 0x19DA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19DA80u;
label_19da80:
    // 0x19da80: 0x1000001d  b           . + 4 + (0x1D << 2)
label_19da84:
    if (ctx->pc == 0x19DA84u) {
        ctx->pc = 0x19DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA80u;
        // 0x19da84: 0xaea00994  sw          $zero, 0x994($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA88u;
        goto label_19da88;
    }
    ctx->pc = 0x19DA80u;
    {
        const bool branch_taken_0x19da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA80u;
        // 0x19da84: 0xaea00994  sw          $zero, 0x994($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da80) {
            ctx->pc = 0x19DAF8u;
            goto label_19daf8;
        }
    }
    ctx->pc = 0x19DA88u;
label_19da88:
    // 0x19da88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19da8c:
    // 0x19da8c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_19da90:
    if (ctx->pc == 0x19DA90u) {
        ctx->pc = 0x19DA94u;
        goto label_19da94;
    }
    ctx->pc = 0x19DA8Cu;
    {
        const bool branch_taken_0x19da8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19da8c) {
            ctx->pc = 0x19DA9Cu;
            goto label_19da9c;
        }
    }
    ctx->pc = 0x19DA94u;
label_19da94:
    // 0x19da94: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x19da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_19da98:
    // 0x19da98: 0xac510674  sw          $s1, 0x674($v0)
    ctx->pc = 0x19da98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1652), GPR_U32(ctx, 17));
label_19da9c:
    // 0x19da9c: 0x0  nop
    ctx->pc = 0x19da9cu;
    // NOP
label_19daa0:
    // 0x19daa0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19daa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19daa4:
    // 0x19daa4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x19daa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_19daa8:
    // 0x19daa8: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x19daa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_19daac:
    // 0x19daac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19daacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19dab0:
    // 0x19dab0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x19dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_19dab4:
    // 0x19dab4: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19dab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_19dab8:
    // 0x19dab8: 0xc057040  jal         func_15C100
label_19dabc:
    if (ctx->pc == 0x19DABCu) {
        ctx->pc = 0x19DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAB8u;
        // 0x19dabc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DAC0u;
        goto label_19dac0;
    }
    ctx->pc = 0x19DAB8u;
    SET_GPR_U32(ctx, 31, 0x19DAC0u);
    ctx->pc = 0x19DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAB8u;
    // 0x19dabc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19DAB8u, 0x19DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAC0u;
label_19dac0:
    // 0x19dac0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x19dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19dac4:
    // 0x19dac4: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x19dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_19dac8:
    // 0x19dac8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19dacc:
    // 0x19dacc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19daccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19dad0:
    // 0x19dad0: 0xac620684  sw          $v0, 0x684($v1)
    ctx->pc = 0x19dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1668), GPR_U32(ctx, 2));
label_19dad4:
    // 0x19dad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dad8:
    // 0x19dad8: 0xac720884  sw          $s2, 0x884($v1)
    ctx->pc = 0x19dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2180), GPR_U32(ctx, 18));
label_19dadc:
    // 0x19dadc: 0x8c630684  lw          $v1, 0x684($v1)
    ctx->pc = 0x19dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1668)));
label_19dae0:
    // 0x19dae0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19dae4:
    // 0x19dae4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19dae8:
    // 0x19dae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19daec:
    // 0x19daec: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19daf0:
    // 0x19daf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19daf4:
    // 0x19daf4: 0xa0440028  sb          $a0, 0x28($v0)
    ctx->pc = 0x19daf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 4));
label_19daf8:
    // 0x19daf8: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x19daf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_19dafc:
    // 0x19dafc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19db00:
    // 0x19db00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19db04:
    // 0x19db04: 0x1062ffc4  beq         $v1, $v0, . + 4 + (-0x3C << 2)
label_19db08:
    if (ctx->pc == 0x19DB08u) {
        ctx->pc = 0x19DB0Cu;
        goto label_19db0c;
    }
    ctx->pc = 0x19DB04u;
    {
        const bool branch_taken_0x19db04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19db04) {
            ctx->pc = 0x19DA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19da18;
        }
    }
    ctx->pc = 0x19DB0Cu;
label_19db0c:
    // 0x19db0c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x19db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19db10:
    // 0x19db10: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x19db10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19db14:
    // 0x19db14: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x19db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_19db18:
    // 0x19db18: 0xac910674  sw          $s1, 0x674($a0)
    ctx->pc = 0x19db18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 17));
label_19db1c:
    // 0x19db1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19db20:
    // 0x19db20: 0xaea30670  sw          $v1, 0x670($s5)
    ctx->pc = 0x19db20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 3));
label_19db24:
    // 0x19db24: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19db24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19db28:
    // 0x19db28: 0xaea00984  sw          $zero, 0x984($s5)
    ctx->pc = 0x19db28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2436), GPR_U32(ctx, 0));
label_19db2c:
    // 0x19db2c: 0xaea00988  sw          $zero, 0x988($s5)
    ctx->pc = 0x19db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2440), GPR_U32(ctx, 0));
label_19db30:
    // 0x19db30: 0xaea0098c  sw          $zero, 0x98C($s5)
    ctx->pc = 0x19db30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2444), GPR_U32(ctx, 0));
label_19db34:
    // 0x19db34: 0xc063e14  jal         func_18F850
label_19db38:
    if (ctx->pc == 0x19DB38u) {
        ctx->pc = 0x19DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB34u;
        // 0x19db38: 0xaea20990  sw          $v0, 0x990($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB3Cu;
        goto label_19db3c;
    }
    ctx->pc = 0x19DB34u;
    SET_GPR_U32(ctx, 31, 0x19DB3Cu);
    ctx->pc = 0x19DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB34u;
    // 0x19db38: 0xaea20990  sw          $v0, 0x990($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 2448), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19DB34u, 0x19DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB3Cu;
label_19db3c:
    // 0x19db3c: 0x10000157  b           . + 4 + (0x157 << 2)
label_19db40:
    if (ctx->pc == 0x19DB40u) {
        ctx->pc = 0x19DB44u;
        goto label_19db44;
    }
    ctx->pc = 0x19DB3Cu;
    {
        const bool branch_taken_0x19db3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19db3c) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19DB44u;
label_19db44:
    // 0x19db44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19db44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19db48:
    // 0x19db48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19db48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19db4c:
    // 0x19db4c: 0x10000024  b           . + 4 + (0x24 << 2)
label_19db50:
    if (ctx->pc == 0x19DB50u) {
        ctx->pc = 0x19DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB4Cu;
        // 0x19db50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB54u;
        goto label_19db54;
    }
    ctx->pc = 0x19DB4Cu;
    {
        const bool branch_taken_0x19db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB4Cu;
        // 0x19db50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db4c) {
            ctx->pc = 0x19DBE0u;
            goto label_19dbe0;
        }
    }
    ctx->pc = 0x19DB54u;
label_19db54:
    // 0x19db54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19db54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19db58:
    // 0x19db58: 0x10000019  b           . + 4 + (0x19 << 2)
label_19db5c:
    if (ctx->pc == 0x19DB5Cu) {
        ctx->pc = 0x19DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB58u;
        // 0x19db5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB60u;
        goto label_19db60;
    }
    ctx->pc = 0x19DB58u;
    {
        const bool branch_taken_0x19db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB58u;
        // 0x19db5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db58) {
            ctx->pc = 0x19DBC0u;
            goto label_19dbc0;
        }
    }
    ctx->pc = 0x19DB60u;
label_19db60:
    // 0x19db60: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x19db60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_19db64:
    // 0x19db64: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x19db64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_19db68:
    // 0x19db68: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19db6c:
    // 0x19db6c: 0x8e430684  lw          $v1, 0x684($s2)
    ctx->pc = 0x19db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1668)));
label_19db70:
    // 0x19db70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19db74:
    // 0x19db74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19db74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19db78:
    // 0x19db78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19db7c:
    // 0x19db7c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19db80:
    // 0x19db80: 0xa04601f9  sb          $a2, 0x1F9($v0)
    ctx->pc = 0x19db80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 505), (uint8_t)GPR_U32(ctx, 6));
label_19db84:
    // 0x19db84: 0x8e450684  lw          $a1, 0x684($s2)
    ctx->pc = 0x19db84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1668)));
label_19db88:
    // 0x19db88: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19db8c:
    // 0x19db8c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19db90:
    // 0x19db90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19db94:
    // 0x19db94: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19db98:
    // 0x19db98: 0x8c4201d4  lw          $v0, 0x1D4($v0)
    ctx->pc = 0x19db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
label_19db9c:
    // 0x19db9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19dba0:
    if (ctx->pc == 0x19DBA0u) {
        ctx->pc = 0x19DBA4u;
        goto label_19dba4;
    }
    ctx->pc = 0x19DB9Cu;
    {
        const bool branch_taken_0x19db9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19db9c) {
            ctx->pc = 0x19DBACu;
            goto label_19dbac;
        }
    }
    ctx->pc = 0x19DBA4u;
label_19dba4:
    // 0x19dba4: 0xc064d78  jal         func_1935E0
label_19dba8:
    if (ctx->pc == 0x19DBA8u) {
        ctx->pc = 0x19DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBA4u;
        // 0x19dba8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DBACu;
        goto label_19dbac;
    }
    ctx->pc = 0x19DBA4u;
    SET_GPR_U32(ctx, 31, 0x19DBACu);
    ctx->pc = 0x19DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBA4u;
    // 0x19dba8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1935E0u, 0x19DBA4u, 0x19DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBACu;
label_19dbac:
    // 0x19dbac: 0x0  nop
    ctx->pc = 0x19dbacu;
    // NOP
label_19dbb0:
    // 0x19dbb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dbb4:
    // 0x19dbb4: 0xae420784  sw          $v0, 0x784($s2)
    ctx->pc = 0x19dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1924), GPR_U32(ctx, 2));
label_19dbb8:
    // 0x19dbb8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19dbbc:
    // 0x19dbbc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19dbbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_19dbc0:
    // 0x19dbc0: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x19dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_19dbc4:
    // 0x19dbc4: 0x8c420674  lw          $v0, 0x674($v0)
    ctx->pc = 0x19dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
label_19dbc8:
    // 0x19dbc8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x19dbc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19dbcc:
    // 0x19dbcc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_19dbd0:
    if (ctx->pc == 0x19DBD0u) {
        ctx->pc = 0x19DBD4u;
        goto label_19dbd4;
    }
    ctx->pc = 0x19DBCCu;
    {
        const bool branch_taken_0x19dbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dbcc) {
            ctx->pc = 0x19DB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19db60;
        }
    }
    ctx->pc = 0x19DBD4u;
label_19dbd4:
    // 0x19dbd4: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x19dbd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_19dbd8:
    // 0x19dbd8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19dbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_19dbdc:
    // 0x19dbdc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19dbdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19dbe0:
    // 0x19dbe0: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19dbe4:
    // 0x19dbe4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x19dbe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19dbe8:
    // 0x19dbe8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_19dbec:
    if (ctx->pc == 0x19DBECu) {
        ctx->pc = 0x19DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBE8u;
        // 0x19dbec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DBF0u;
        goto label_19dbf0;
    }
    ctx->pc = 0x19DBE8u;
    {
        const bool branch_taken_0x19dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBE8u;
        // 0x19dbec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbe8) {
            ctx->pc = 0x19DB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19db58;
        }
    }
    ctx->pc = 0x19DBF0u;
label_19dbf0:
    // 0x19dbf0: 0x8ea30990  lw          $v1, 0x990($s5)
    ctx->pc = 0x19dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2448)));
label_19dbf4:
    // 0x19dbf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19dbf8:
    // 0x19dbf8: 0x10650026  beq         $v1, $a1, . + 4 + (0x26 << 2)
label_19dbfc:
    if (ctx->pc == 0x19DBFCu) {
        ctx->pc = 0x19DC00u;
        goto label_19dc00;
    }
    ctx->pc = 0x19DBF8u;
    {
        const bool branch_taken_0x19dbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x19dbf8) {
            ctx->pc = 0x19DC94u;
            goto label_19dc94;
        }
    }
    ctx->pc = 0x19DC00u;
label_19dc00:
    // 0x19dc00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dc04:
    // 0x19dc04: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_19dc08:
    if (ctx->pc == 0x19DC08u) {
        ctx->pc = 0x19DC0Cu;
        goto label_19dc0c;
    }
    ctx->pc = 0x19DC04u;
    {
        const bool branch_taken_0x19dc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19dc04) {
            ctx->pc = 0x19DC54u;
            goto label_19dc54;
        }
    }
    ctx->pc = 0x19DC0Cu;
label_19dc0c:
    // 0x19dc0c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_19dc10:
    if (ctx->pc == 0x19DC10u) {
        ctx->pc = 0x19DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC0Cu;
        // 0x19dc10: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC14u;
        goto label_19dc14;
    }
    ctx->pc = 0x19DC0Cu;
    {
        const bool branch_taken_0x19dc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC0Cu;
        // 0x19dc10: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc0c) {
            ctx->pc = 0x19DC40u;
            goto label_19dc40;
        }
    }
    ctx->pc = 0x19DC14u;
label_19dc14:
    // 0x19dc14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19dc18:
    // 0x19dc18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_19dc1c:
    if (ctx->pc == 0x19DC1Cu) {
        ctx->pc = 0x19DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC18u;
        // 0x19dc1c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC20u;
        goto label_19dc20;
    }
    ctx->pc = 0x19DC18u;
    {
        const bool branch_taken_0x19dc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC18u;
        // 0x19dc1c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc18) {
            ctx->pc = 0x19DC2Cu;
            goto label_19dc2c;
        }
    }
    ctx->pc = 0x19DC20u;
label_19dc20:
    // 0x19dc20: 0x1000002b  b           . + 4 + (0x2B << 2)
label_19dc24:
    if (ctx->pc == 0x19DC24u) {
        ctx->pc = 0x19DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC20u;
        // 0x19dc24: 0x8ea20664  lw          $v0, 0x664($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC28u;
        goto label_19dc28;
    }
    ctx->pc = 0x19DC20u;
    {
        const bool branch_taken_0x19dc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC20u;
        // 0x19dc24: 0x8ea20664  lw          $v0, 0x664($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc20) {
            ctx->pc = 0x19DCD0u;
            goto label_19dcd0;
        }
    }
    ctx->pc = 0x19DC28u;
label_19dc28:
    // 0x19dc28: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19dc2c:
    // 0x19dc2c: 0xc063de0  jal         func_18F780
label_19dc30:
    if (ctx->pc == 0x19DC30u) {
        ctx->pc = 0x19DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC2Cu;
        // 0x19dc30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC34u;
        goto label_19dc34;
    }
    ctx->pc = 0x19DC2Cu;
    SET_GPR_U32(ctx, 31, 0x19DC34u);
    ctx->pc = 0x19DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC2Cu;
    // 0x19dc30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19DC2Cu, 0x19DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC34u;
label_19dc34:
    // 0x19dc34: 0x10000025  b           . + 4 + (0x25 << 2)
label_19dc38:
    if (ctx->pc == 0x19DC38u) {
        ctx->pc = 0x19DC3Cu;
        goto label_19dc3c;
    }
    ctx->pc = 0x19DC34u;
    {
        const bool branch_taken_0x19dc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dc34) {
            ctx->pc = 0x19DCCCu;
            goto label_19dccc;
        }
    }
    ctx->pc = 0x19DC3Cu;
label_19dc3c:
    // 0x19dc3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19dc40:
    // 0x19dc40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19dc44:
    // 0x19dc44: 0xc063de0  jal         func_18F780
label_19dc48:
    if (ctx->pc == 0x19DC48u) {
        ctx->pc = 0x19DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC44u;
        // 0x19dc48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC4Cu;
        goto label_19dc4c;
    }
    ctx->pc = 0x19DC44u;
    SET_GPR_U32(ctx, 31, 0x19DC4Cu);
    ctx->pc = 0x19DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC44u;
    // 0x19dc48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19DC44u, 0x19DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC4Cu;
label_19dc4c:
    // 0x19dc4c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_19dc50:
    if (ctx->pc == 0x19DC50u) {
        ctx->pc = 0x19DC54u;
        goto label_19dc54;
    }
    ctx->pc = 0x19DC4Cu;
    {
        const bool branch_taken_0x19dc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dc4c) {
            ctx->pc = 0x19DCCCu;
            goto label_19dccc;
        }
    }
    ctx->pc = 0x19DC54u;
label_19dc54:
    // 0x19dc54: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_19dc58:
    // 0x19dc58: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19dc5c:
    // 0x19dc5c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x19dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19dc60:
    // 0x19dc60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19dc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19dc64:
    // 0x19dc64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19dc64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19dc68:
    // 0x19dc68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19dc68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19dc6c:
    // 0x19dc6c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19dc6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_19dc70:
    // 0x19dc70: 0x0  nop
    ctx->pc = 0x19dc70u;
    // NOP
label_19dc74:
    // 0x19dc74: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_19dc78:
    if (ctx->pc == 0x19DC78u) {
        ctx->pc = 0x19DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC74u;
        // 0x19dc78: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC7Cu;
        goto label_19dc7c;
    }
    ctx->pc = 0x19DC74u;
    {
        const bool branch_taken_0x19dc74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC74u;
        // 0x19dc78: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc74) {
            ctx->pc = 0x19DC84u;
            goto label_19dc84;
        }
    }
    ctx->pc = 0x19DC7Cu;
label_19dc7c:
    // 0x19dc7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19dc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19dc80:
    // 0x19dc80: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19dc84:
    // 0x19dc84: 0xc063de0  jal         func_18F780
label_19dc88:
    if (ctx->pc == 0x19DC88u) {
        ctx->pc = 0x19DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC84u;
        // 0x19dc88: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC8Cu;
        goto label_19dc8c;
    }
    ctx->pc = 0x19DC84u;
    SET_GPR_U32(ctx, 31, 0x19DC8Cu);
    ctx->pc = 0x19DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC84u;
    // 0x19dc88: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19DC84u, 0x19DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC8Cu;
label_19dc8c:
    // 0x19dc8c: 0x1000000f  b           . + 4 + (0xF << 2)
label_19dc90:
    if (ctx->pc == 0x19DC90u) {
        ctx->pc = 0x19DC94u;
        goto label_19dc94;
    }
    ctx->pc = 0x19DC8Cu;
    {
        const bool branch_taken_0x19dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dc8c) {
            ctx->pc = 0x19DCCCu;
            goto label_19dccc;
        }
    }
    ctx->pc = 0x19DC94u;
label_19dc94:
    // 0x19dc94: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_19dc98:
    // 0x19dc98: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19dc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19dc9c:
    // 0x19dc9c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x19dc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19dca0:
    // 0x19dca0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19dca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19dca4:
    // 0x19dca4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19dca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19dca8:
    // 0x19dca8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19dca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19dcac:
    // 0x19dcac: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19dcacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_19dcb0:
    // 0x19dcb0: 0x0  nop
    ctx->pc = 0x19dcb0u;
    // NOP
label_19dcb4:
    // 0x19dcb4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_19dcb8:
    if (ctx->pc == 0x19DCB8u) {
        ctx->pc = 0x19DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCB4u;
        // 0x19dcb8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DCBCu;
        goto label_19dcbc;
    }
    ctx->pc = 0x19DCB4u;
    {
        const bool branch_taken_0x19dcb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCB4u;
        // 0x19dcb8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dcb4) {
            ctx->pc = 0x19DCC4u;
            goto label_19dcc4;
        }
    }
    ctx->pc = 0x19DCBCu;
label_19dcbc:
    // 0x19dcbc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19dcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19dcc0:
    // 0x19dcc0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19dcc4:
    // 0x19dcc4: 0xc063de0  jal         func_18F780
label_19dcc8:
    if (ctx->pc == 0x19DCC8u) {
        ctx->pc = 0x19DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCC4u;
        // 0x19dcc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DCCCu;
        goto label_19dccc;
    }
    ctx->pc = 0x19DCC4u;
    SET_GPR_U32(ctx, 31, 0x19DCCCu);
    ctx->pc = 0x19DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCC4u;
    // 0x19dcc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19DCC4u, 0x19DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCCCu;
label_19dccc:
    // 0x19dccc: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_19dcd0:
    // 0x19dcd0: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19dcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19dcd4:
    // 0x19dcd4: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x19dcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19dcd8:
    // 0x19dcd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19dcd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19dcdc:
    // 0x19dcdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19dcdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19dce0:
    // 0x19dce0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19dce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19dce4:
    // 0x19dce4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19dce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_19dce8:
    // 0x19dce8: 0x0  nop
    ctx->pc = 0x19dce8u;
    // NOP
label_19dcec:
    // 0x19dcec: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_19dcf0:
    if (ctx->pc == 0x19DCF0u) {
        ctx->pc = 0x19DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCECu;
        // 0x19dcf0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DCF4u;
        goto label_19dcf4;
    }
    ctx->pc = 0x19DCECu;
    {
        const bool branch_taken_0x19dcec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCECu;
        // 0x19dcf0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dcec) {
            ctx->pc = 0x19DCFCu;
            goto label_19dcfc;
        }
    }
    ctx->pc = 0x19DCF4u;
label_19dcf4:
    // 0x19dcf4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19dcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19dcf8:
    // 0x19dcf8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19dcfc:
    // 0x19dcfc: 0xc063de0  jal         func_18F780
label_19dd00:
    if (ctx->pc == 0x19DD00u) {
        ctx->pc = 0x19DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCFCu;
        // 0x19dd00: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD04u;
        goto label_19dd04;
    }
    ctx->pc = 0x19DCFCu;
    SET_GPR_U32(ctx, 31, 0x19DD04u);
    ctx->pc = 0x19DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCFCu;
    // 0x19dd00: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19DCFCu, 0x19DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD04u;
label_19dd04:
    // 0x19dd04: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_19dd08:
    if (ctx->pc == 0x19DD08u) {
        ctx->pc = 0x19DD0Cu;
        goto label_19dd0c;
    }
    ctx->pc = 0x19DD04u;
    {
        const bool branch_taken_0x19dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd04) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19DD0Cu;
label_19dd0c:
    // 0x19dd0c: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x19dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_19dd10:
    // 0x19dd10: 0x106000e2  beqz        $v1, . + 4 + (0xE2 << 2)
label_19dd14:
    if (ctx->pc == 0x19DD14u) {
        ctx->pc = 0x19DD18u;
        goto label_19dd18;
    }
    ctx->pc = 0x19DD10u;
    {
        const bool branch_taken_0x19dd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd10) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19DD18u;
label_19dd18:
    // 0x19dd18: 0xc0802aa  jal         func_200AA8
label_19dd1c:
    if (ctx->pc == 0x19DD1Cu) {
        ctx->pc = 0x19DD20u;
        goto label_19dd20;
    }
    ctx->pc = 0x19DD18u;
    SET_GPR_U32(ctx, 31, 0x19DD20u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x19DD18u, 0x19DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD20u;
label_19dd20:
    // 0x19dd20: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19dd20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_19dd24:
    // 0x19dd24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19dd28:
    // 0x19dd28: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x19dd28u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19dd2c:
    // 0x19dd2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19dd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dd30:
    // 0x19dd30: 0x0  nop
    ctx->pc = 0x19dd30u;
    // NOP
label_19dd34:
    // 0x19dd34: 0x3010  mfhi        $a2
    ctx->pc = 0x19dd34u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_19dd38:
    // 0x19dd38: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_19dd3c:
    // 0x19dd3c: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x19dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19dd40:
    // 0x19dd40: 0x8c620984  lw          $v0, 0x984($v1)
    ctx->pc = 0x19dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2436)));
label_19dd44:
    // 0x19dd44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19dd48:
    if (ctx->pc == 0x19DD48u) {
        ctx->pc = 0x19DD4Cu;
        goto label_19dd4c;
    }
    ctx->pc = 0x19DD44u;
    {
        const bool branch_taken_0x19dd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dd44) {
            ctx->pc = 0x19DD58u;
            goto label_19dd58;
        }
    }
    ctx->pc = 0x19DD4Cu;
label_19dd4c:
    // 0x19dd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dd50:
    // 0x19dd50: 0x10000009  b           . + 4 + (0x9 << 2)
label_19dd54:
    if (ctx->pc == 0x19DD54u) {
        ctx->pc = 0x19DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD50u;
        // 0x19dd54: 0xac620984  sw          $v0, 0x984($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD58u;
        goto label_19dd58;
    }
    ctx->pc = 0x19DD50u;
    {
        const bool branch_taken_0x19dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD50u;
        // 0x19dd54: 0xac620984  sw          $v0, 0x984($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd50) {
            ctx->pc = 0x19DD78u;
            goto label_19dd78;
        }
    }
    ctx->pc = 0x19DD58u;
label_19dd58:
    // 0x19dd58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19dd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19dd5c:
    // 0x19dd5c: 0x14c40002  bne         $a2, $a0, . + 4 + (0x2 << 2)
label_19dd60:
    if (ctx->pc == 0x19DD60u) {
        ctx->pc = 0x19DD64u;
        goto label_19dd64;
    }
    ctx->pc = 0x19DD5Cu;
    {
        const bool branch_taken_0x19dd5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x19dd5c) {
            ctx->pc = 0x19DD68u;
            goto label_19dd68;
        }
    }
    ctx->pc = 0x19DD64u;
label_19dd64:
    // 0x19dd64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19dd64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dd68:
    // 0x19dd68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19dd6c:
    // 0x19dd6c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x19dd6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_19dd70:
    // 0x19dd70: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_19dd74:
    if (ctx->pc == 0x19DD74u) {
        ctx->pc = 0x19DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD70u;
        // 0x19dd74: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD78u;
        goto label_19dd78;
    }
    ctx->pc = 0x19DD70u;
    {
        const bool branch_taken_0x19dd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD70u;
        // 0x19dd74: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd70) {
            ctx->pc = 0x19DD3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dd3c;
        }
    }
    ctx->pc = 0x19DD78u;
label_19dd78:
    // 0x19dd78: 0xaea60990  sw          $a2, 0x990($s5)
    ctx->pc = 0x19dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2448), GPR_U32(ctx, 6));
label_19dd7c:
    // 0x19dd7c: 0xaea6032c  sw          $a2, 0x32C($s5)
    ctx->pc = 0x19dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 812), GPR_U32(ctx, 6));
label_19dd80:
    // 0x19dd80: 0xc6a10328  lwc1        $f1, 0x328($s5)
    ctx->pc = 0x19dd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19dd84:
    // 0x19dd84: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19dd88:
    // 0x19dd88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19dd88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19dd8c:
    // 0x19dd8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19dd8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19dd90:
    // 0x19dd90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19dd90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19dd94:
    // 0x19dd94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19dd94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_19dd98:
    // 0x19dd98: 0x0  nop
    ctx->pc = 0x19dd98u;
    // NOP
label_19dd9c:
    // 0x19dd9c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19dda0:
    if (ctx->pc == 0x19DDA0u) {
        ctx->pc = 0x19DDA4u;
        goto label_19dda4;
    }
    ctx->pc = 0x19DD9Cu;
    {
        const bool branch_taken_0x19dd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dd9c) {
            ctx->pc = 0x19DDA8u;
            goto label_19dda8;
        }
    }
    ctx->pc = 0x19DDA4u;
label_19dda4:
    // 0x19dda4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19dda8:
    // 0x19dda8: 0xaea20328  sw          $v0, 0x328($s5)
    ctx->pc = 0x19dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 808), GPR_U32(ctx, 2));
label_19ddac:
    // 0x19ddac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19ddacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19ddb0:
    // 0x19ddb0: 0xc0678e8  jal         func_19E3A0
label_19ddb4:
    if (ctx->pc == 0x19DDB4u) {
        ctx->pc = 0x19DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDB0u;
        // 0x19ddb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DDB8u;
        goto label_19ddb8;
    }
    ctx->pc = 0x19DDB0u;
    SET_GPR_U32(ctx, 31, 0x19DDB8u);
    ctx->pc = 0x19DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DDB0u;
    // 0x19ddb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E3A0u, 0x19DDB0u, 0x19DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDB8u;
label_19ddb8:
    // 0x19ddb8: 0xc063e24  jal         func_18F890
label_19ddbc:
    if (ctx->pc == 0x19DDBCu) {
        ctx->pc = 0x19DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDB8u;
        // 0x19ddbc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DDC0u;
        goto label_19ddc0;
    }
    ctx->pc = 0x19DDB8u;
    SET_GPR_U32(ctx, 31, 0x19DDC0u);
    ctx->pc = 0x19DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DDB8u;
    // 0x19ddbc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F890u, 0x19DDB8u, 0x19DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDC0u;
label_19ddc0:
    // 0x19ddc0: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_19ddc4:
    if (ctx->pc == 0x19DDC4u) {
        ctx->pc = 0x19DDC8u;
        goto label_19ddc8;
    }
    ctx->pc = 0x19DDC0u;
    {
        const bool branch_taken_0x19ddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ddc0) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19DDC8u;
label_19ddc8:
    // 0x19ddc8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19ddc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ddcc:
    // 0x19ddcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19ddccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ddd0:
    // 0x19ddd0: 0x10000023  b           . + 4 + (0x23 << 2)
label_19ddd4:
    if (ctx->pc == 0x19DDD4u) {
        ctx->pc = 0x19DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDD0u;
        // 0x19ddd4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DDD8u;
        goto label_19ddd8;
    }
    ctx->pc = 0x19DDD0u;
    {
        const bool branch_taken_0x19ddd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDD0u;
        // 0x19ddd4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ddd0) {
            ctx->pc = 0x19DE60u;
            goto label_19de60;
        }
    }
    ctx->pc = 0x19DDD8u;
label_19ddd8:
    // 0x19ddd8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19ddd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dddc:
    // 0x19dddc: 0x10000018  b           . + 4 + (0x18 << 2)
label_19dde0:
    if (ctx->pc == 0x19DDE0u) {
        ctx->pc = 0x19DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDDCu;
        // 0x19dde0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DDE4u;
        goto label_19dde4;
    }
    ctx->pc = 0x19DDDCu;
    {
        const bool branch_taken_0x19dddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDDCu;
        // 0x19dde0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dddc) {
            ctx->pc = 0x19DE40u;
            goto label_19de40;
        }
    }
    ctx->pc = 0x19DDE4u;
label_19dde4:
    // 0x19dde4: 0x0  nop
    ctx->pc = 0x19dde4u;
    // NOP
label_19dde8:
    // 0x19dde8: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x19dde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_19ddec:
    // 0x19ddec: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x19ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_19ddf0:
    // 0x19ddf0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_19ddf4:
    if (ctx->pc == 0x19DDF4u) {
        ctx->pc = 0x19DDF8u;
        goto label_19ddf8;
    }
    ctx->pc = 0x19DDF0u;
    {
        const bool branch_taken_0x19ddf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ddf0) {
            ctx->pc = 0x19DE14u;
            goto label_19de14;
        }
    }
    ctx->pc = 0x19DDF8u;
label_19ddf8:
    // 0x19ddf8: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x19ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_19ddfc:
    // 0x19ddfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19ddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19de00:
    // 0x19de00: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x19de00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19de04:
    // 0x19de04: 0x8e650684  lw          $a1, 0x684($s3)
    ctx->pc = 0x19de04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1668)));
label_19de08:
    // 0x19de08: 0xc064d78  jal         func_1935E0
label_19de0c:
    if (ctx->pc == 0x19DE0Cu) {
        ctx->pc = 0x19DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE08u;
        // 0x19de0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE10u;
        goto label_19de10;
    }
    ctx->pc = 0x19DE08u;
    SET_GPR_U32(ctx, 31, 0x19DE10u);
    ctx->pc = 0x19DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE08u;
    // 0x19de0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1935E0u, 0x19DE08u, 0x19DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE10u;
label_19de10:
    // 0x19de10: 0xae600784  sw          $zero, 0x784($s3)
    ctx->pc = 0x19de10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1924), GPR_U32(ctx, 0));
label_19de14:
    // 0x19de14: 0x0  nop
    ctx->pc = 0x19de14u;
    // NOP
label_19de18:
    // 0x19de18: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x19de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_19de1c:
    // 0x19de1c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x19de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19de20:
    // 0x19de20: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19de20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19de24:
    // 0x19de24: 0x8c630684  lw          $v1, 0x684($v1)
    ctx->pc = 0x19de24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1668)));
label_19de28:
    // 0x19de28: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19de28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19de2c:
    // 0x19de2c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19de30:
    // 0x19de30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19de30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19de34:
    // 0x19de34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19de38:
    // 0x19de38: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19de3c:
    // 0x19de3c: 0xa04001f9  sb          $zero, 0x1F9($v0)
    ctx->pc = 0x19de3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 505), (uint8_t)GPR_U32(ctx, 0));
label_19de40:
    // 0x19de40: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x19de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_19de44:
    // 0x19de44: 0x8c420674  lw          $v0, 0x674($v0)
    ctx->pc = 0x19de44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
label_19de48:
    // 0x19de48: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x19de48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19de4c:
    // 0x19de4c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_19de50:
    if (ctx->pc == 0x19DE50u) {
        ctx->pc = 0x19DE54u;
        goto label_19de54;
    }
    ctx->pc = 0x19DE4Cu;
    {
        const bool branch_taken_0x19de4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19de4c) {
            ctx->pc = 0x19DDE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dde4;
        }
    }
    ctx->pc = 0x19DE54u;
label_19de54:
    // 0x19de54: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x19de54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_19de58:
    // 0x19de58: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x19de58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_19de5c:
    // 0x19de5c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19de5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_19de60:
    // 0x19de60: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19de64:
    // 0x19de64: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x19de64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19de68:
    // 0x19de68: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_19de6c:
    if (ctx->pc == 0x19DE6Cu) {
        ctx->pc = 0x19DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE68u;
        // 0x19de6c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE70u;
        goto label_19de70;
    }
    ctx->pc = 0x19DE68u;
    {
        const bool branch_taken_0x19de68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE68u;
        // 0x19de6c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de68) {
            ctx->pc = 0x19DDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dddc;
        }
    }
    ctx->pc = 0x19DE70u;
label_19de70:
    // 0x19de70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19de70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19de74:
    // 0x19de74: 0xc063e08  jal         func_18F820
label_19de78:
    if (ctx->pc == 0x19DE78u) {
        ctx->pc = 0x19DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE74u;
        // 0x19de78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE7Cu;
        goto label_19de7c;
    }
    ctx->pc = 0x19DE74u;
    SET_GPR_U32(ctx, 31, 0x19DE7Cu);
    ctx->pc = 0x19DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE74u;
    // 0x19de78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19DE74u, 0x19DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE7Cu;
label_19de7c:
    // 0x19de7c: 0x10000087  b           . + 4 + (0x87 << 2)
label_19de80:
    if (ctx->pc == 0x19DE80u) {
        ctx->pc = 0x19DE84u;
        goto label_19de84;
    }
    ctx->pc = 0x19DE7Cu;
    {
        const bool branch_taken_0x19de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19de7c) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19DE84u;
label_19de84:
    // 0x19de84: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19de84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19de88:
    // 0x19de88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19de88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19de8c:
    // 0x19de8c: 0x10000020  b           . + 4 + (0x20 << 2)
label_19de90:
    if (ctx->pc == 0x19DE90u) {
        ctx->pc = 0x19DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE8Cu;
        // 0x19de90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE94u;
        goto label_19de94;
    }
    ctx->pc = 0x19DE8Cu;
    {
        const bool branch_taken_0x19de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE8Cu;
        // 0x19de90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de8c) {
            ctx->pc = 0x19DF10u;
            goto label_19df10;
        }
    }
    ctx->pc = 0x19DE94u;
label_19de94:
    // 0x19de94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19de94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19de98:
    // 0x19de98: 0x10000015  b           . + 4 + (0x15 << 2)
label_19de9c:
    if (ctx->pc == 0x19DE9Cu) {
        ctx->pc = 0x19DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE98u;
        // 0x19de9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DEA0u;
        goto label_19dea0;
    }
    ctx->pc = 0x19DE98u;
    {
        const bool branch_taken_0x19de98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE98u;
        // 0x19de9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de98) {
            ctx->pc = 0x19DEF0u;
            goto label_19def0;
        }
    }
    ctx->pc = 0x19DEA0u;
label_19dea0:
    // 0x19dea0: 0xc0802aa  jal         func_200AA8
label_19dea4:
    if (ctx->pc == 0x19DEA4u) {
        ctx->pc = 0x19DEA8u;
        goto label_19dea8;
    }
    ctx->pc = 0x19DEA0u;
    SET_GPR_U32(ctx, 31, 0x19DEA8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x19DEA0u, 0x19DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEA8u;
label_19dea8:
    // 0x19dea8: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x19dea8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_19deac:
    // 0x19deac: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_19deb0:
    if (ctx->pc == 0x19DEB0u) {
        ctx->pc = 0x19DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEACu;
        // 0x19deb0: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DEB4u;
        goto label_19deb4;
    }
    ctx->pc = 0x19DEACu;
    {
        const bool branch_taken_0x19deac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEACu;
        // 0x19deb0: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19deac) {
            ctx->pc = 0x19DEC0u;
            goto label_19dec0;
        }
    }
    ctx->pc = 0x19DEB4u;
label_19deb4:
    // 0x19deb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_19deb8:
    if (ctx->pc == 0x19DEB8u) {
        ctx->pc = 0x19DEBCu;
        goto label_19debc;
    }
    ctx->pc = 0x19DEB4u;
    {
        const bool branch_taken_0x19deb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19deb4) {
            ctx->pc = 0x19DEC0u;
            goto label_19dec0;
        }
    }
    ctx->pc = 0x19DEBCu;
label_19debc:
    // 0x19debc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_19dec0:
    // 0x19dec0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_19dec4:
    if (ctx->pc == 0x19DEC4u) {
        ctx->pc = 0x19DEC8u;
        goto label_19dec8;
    }
    ctx->pc = 0x19DEC0u;
    {
        const bool branch_taken_0x19dec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dec0) {
            ctx->pc = 0x19DEE4u;
            goto label_19dee4;
        }
    }
    ctx->pc = 0x19DEC8u;
label_19dec8:
    // 0x19dec8: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x19dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_19decc:
    // 0x19decc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19deccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19ded0:
    // 0x19ded0: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x19ded0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19ded4:
    // 0x19ded4: 0x8e650684  lw          $a1, 0x684($s3)
    ctx->pc = 0x19ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1668)));
label_19ded8:
    // 0x19ded8: 0xc064d78  jal         func_1935E0
label_19dedc:
    if (ctx->pc == 0x19DEDCu) {
        ctx->pc = 0x19DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DED8u;
        // 0x19dedc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DEE0u;
        goto label_19dee0;
    }
    ctx->pc = 0x19DED8u;
    SET_GPR_U32(ctx, 31, 0x19DEE0u);
    ctx->pc = 0x19DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DED8u;
    // 0x19dedc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1935E0u, 0x19DED8u, 0x19DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEE0u;
label_19dee0:
    // 0x19dee0: 0xae600784  sw          $zero, 0x784($s3)
    ctx->pc = 0x19dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1924), GPR_U32(ctx, 0));
label_19dee4:
    // 0x19dee4: 0x0  nop
    ctx->pc = 0x19dee4u;
    // NOP
label_19dee8:
    // 0x19dee8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19dee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19deec:
    // 0x19deec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19deecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19def0:
    // 0x19def0: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x19def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_19def4:
    // 0x19def4: 0x8c420674  lw          $v0, 0x674($v0)
    ctx->pc = 0x19def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
label_19def8:
    // 0x19def8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x19def8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19defc:
    // 0x19defc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_19df00:
    if (ctx->pc == 0x19DF00u) {
        ctx->pc = 0x19DF04u;
        goto label_19df04;
    }
    ctx->pc = 0x19DEFCu;
    {
        const bool branch_taken_0x19defc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19defc) {
            ctx->pc = 0x19DEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dea0;
        }
    }
    ctx->pc = 0x19DF04u;
label_19df04:
    // 0x19df04: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x19df04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_19df08:
    // 0x19df08: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x19df08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_19df0c:
    // 0x19df0c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19df0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_19df10:
    // 0x19df10: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19df14:
    // 0x19df14: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x19df14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19df18:
    // 0x19df18: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_19df1c:
    if (ctx->pc == 0x19DF1Cu) {
        ctx->pc = 0x19DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF18u;
        // 0x19df1c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF20u;
        goto label_19df20;
    }
    ctx->pc = 0x19DF18u;
    {
        const bool branch_taken_0x19df18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF18u;
        // 0x19df1c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df18) {
            ctx->pc = 0x19DE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19de98;
        }
    }
    ctx->pc = 0x19DF20u;
label_19df20:
    // 0x19df20: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19df20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19df24:
    // 0x19df24: 0xc063e08  jal         func_18F820
label_19df28:
    if (ctx->pc == 0x19DF28u) {
        ctx->pc = 0x19DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF24u;
        // 0x19df28: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF2Cu;
        goto label_19df2c;
    }
    ctx->pc = 0x19DF24u;
    SET_GPR_U32(ctx, 31, 0x19DF2Cu);
    ctx->pc = 0x19DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF24u;
    // 0x19df28: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19DF24u, 0x19DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF2Cu;
label_19df2c:
    // 0x19df2c: 0x1000005b  b           . + 4 + (0x5B << 2)
label_19df30:
    if (ctx->pc == 0x19DF30u) {
        ctx->pc = 0x19DF34u;
        goto label_19df34;
    }
    ctx->pc = 0x19DF2Cu;
    {
        const bool branch_taken_0x19df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19df2c) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19DF34u;
label_19df34:
    // 0x19df34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19df34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19df38:
    // 0x19df38: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19df38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19df3c:
    // 0x19df3c: 0x10000016  b           . + 4 + (0x16 << 2)
label_19df40:
    if (ctx->pc == 0x19DF40u) {
        ctx->pc = 0x19DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF3Cu;
        // 0x19df40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF44u;
        goto label_19df44;
    }
    ctx->pc = 0x19DF3Cu;
    {
        const bool branch_taken_0x19df3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF3Cu;
        // 0x19df40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df3c) {
            ctx->pc = 0x19DF98u;
            goto label_19df98;
        }
    }
    ctx->pc = 0x19DF44u;
label_19df44:
    // 0x19df44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19df44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19df48:
    // 0x19df48: 0x1000000a  b           . + 4 + (0xA << 2)
label_19df4c:
    if (ctx->pc == 0x19DF4Cu) {
        ctx->pc = 0x19DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF48u;
        // 0x19df4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF50u;
        goto label_19df50;
    }
    ctx->pc = 0x19DF48u;
    {
        const bool branch_taken_0x19df48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF48u;
        // 0x19df4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df48) {
            ctx->pc = 0x19DF74u;
            goto label_19df74;
        }
    }
    ctx->pc = 0x19DF50u;
label_19df50:
    // 0x19df50: 0x2b61021  addu        $v0, $s5, $s6
    ctx->pc = 0x19df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_19df54:
    // 0x19df54: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x19df54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19df58:
    // 0x19df58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19df58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19df5c:
    // 0x19df5c: 0x8e450684  lw          $a1, 0x684($s2)
    ctx->pc = 0x19df5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1668)));
label_19df60:
    // 0x19df60: 0xc064d78  jal         func_1935E0
label_19df64:
    if (ctx->pc == 0x19DF64u) {
        ctx->pc = 0x19DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF60u;
        // 0x19df64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF68u;
        goto label_19df68;
    }
    ctx->pc = 0x19DF60u;
    SET_GPR_U32(ctx, 31, 0x19DF68u);
    ctx->pc = 0x19DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF60u;
    // 0x19df64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1935E0u, 0x19DF60u, 0x19DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF68u;
label_19df68:
    // 0x19df68: 0xae400784  sw          $zero, 0x784($s2)
    ctx->pc = 0x19df68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1924), GPR_U32(ctx, 0));
label_19df6c:
    // 0x19df6c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19df6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19df70:
    // 0x19df70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19df70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_19df74:
    // 0x19df74: 0x0  nop
    ctx->pc = 0x19df74u;
    // NOP
label_19df78:
    // 0x19df78: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x19df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_19df7c:
    // 0x19df7c: 0x8c420674  lw          $v0, 0x674($v0)
    ctx->pc = 0x19df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
label_19df80:
    // 0x19df80: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x19df80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19df84:
    // 0x19df84: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_19df88:
    if (ctx->pc == 0x19DF88u) {
        ctx->pc = 0x19DF8Cu;
        goto label_19df8c;
    }
    ctx->pc = 0x19DF84u;
    {
        const bool branch_taken_0x19df84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19df84) {
            ctx->pc = 0x19DF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19df50;
        }
    }
    ctx->pc = 0x19DF8Cu;
label_19df8c:
    // 0x19df8c: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x19df8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_19df90:
    // 0x19df90: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19df90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_19df94:
    // 0x19df94: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19df94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19df98:
    // 0x19df98: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19df98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19df9c:
    // 0x19df9c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x19df9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19dfa0:
    // 0x19dfa0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_19dfa4:
    if (ctx->pc == 0x19DFA4u) {
        ctx->pc = 0x19DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA0u;
        // 0x19dfa4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFA8u;
        goto label_19dfa8;
    }
    ctx->pc = 0x19DFA0u;
    {
        const bool branch_taken_0x19dfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA0u;
        // 0x19dfa4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfa0) {
            ctx->pc = 0x19DF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19df48;
        }
    }
    ctx->pc = 0x19DFA8u;
label_19dfa8:
    // 0x19dfa8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19dfac:
    // 0x19dfac: 0xc063e08  jal         func_18F820
label_19dfb0:
    if (ctx->pc == 0x19DFB0u) {
        ctx->pc = 0x19DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFACu;
        // 0x19dfb0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFB4u;
        goto label_19dfb4;
    }
    ctx->pc = 0x19DFACu;
    SET_GPR_U32(ctx, 31, 0x19DFB4u);
    ctx->pc = 0x19DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFACu;
    // 0x19dfb0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19DFACu, 0x19DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFB4u;
label_19dfb4:
    // 0x19dfb4: 0x10000039  b           . + 4 + (0x39 << 2)
label_19dfb8:
    if (ctx->pc == 0x19DFB8u) {
        ctx->pc = 0x19DFBCu;
        goto label_19dfbc;
    }
    ctx->pc = 0x19DFB4u;
    {
        const bool branch_taken_0x19dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dfb4) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19DFBCu;
label_19dfbc:
    // 0x19dfbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19dfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dfc0:
    // 0x19dfc0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19dfc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dfc4:
    // 0x19dfc4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19dfc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dfc8:
    // 0x19dfc8: 0x10000021  b           . + 4 + (0x21 << 2)
label_19dfcc:
    if (ctx->pc == 0x19DFCCu) {
        ctx->pc = 0x19DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFC8u;
        // 0x19dfcc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFD0u;
        goto label_19dfd0;
    }
    ctx->pc = 0x19DFC8u;
    {
        const bool branch_taken_0x19dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFC8u;
        // 0x19dfcc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfc8) {
            ctx->pc = 0x19E050u;
            goto label_19e050;
        }
    }
    ctx->pc = 0x19DFD0u;
label_19dfd0:
    // 0x19dfd0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19dfd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dfd4:
    // 0x19dfd4: 0x10000016  b           . + 4 + (0x16 << 2)
label_19dfd8:
    if (ctx->pc == 0x19DFD8u) {
        ctx->pc = 0x19DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFD4u;
        // 0x19dfd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFDCu;
        goto label_19dfdc;
    }
    ctx->pc = 0x19DFD4u;
    {
        const bool branch_taken_0x19dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFD4u;
        // 0x19dfd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfd4) {
            ctx->pc = 0x19E030u;
            goto label_19e030;
        }
    }
    ctx->pc = 0x19DFDCu;
label_19dfdc:
    // 0x19dfdc: 0x0  nop
    ctx->pc = 0x19dfdcu;
    // NOP
label_19dfe0:
    // 0x19dfe0: 0x2b71821  addu        $v1, $s5, $s7
    ctx->pc = 0x19dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_19dfe4:
    // 0x19dfe4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x19dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_19dfe8:
    // 0x19dfe8: 0x8c830784  lw          $v1, 0x784($a0)
    ctx->pc = 0x19dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1924)));
label_19dfec:
    // 0x19dfec: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_19dff0:
    if (ctx->pc == 0x19DFF0u) {
        ctx->pc = 0x19DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFECu;
        // 0x19dff0: 0x24930784  addiu       $s3, $a0, 0x784 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1924));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFF4u;
        goto label_19dff4;
    }
    ctx->pc = 0x19DFECu;
    {
        const bool branch_taken_0x19dfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFECu;
        // 0x19dff0: 0x24930784  addiu       $s3, $a0, 0x784 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1924));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfec) {
            ctx->pc = 0x19E028u;
            goto label_19e028;
        }
    }
    ctx->pc = 0x19DFF4u;
label_19dff4:
    // 0x19dff4: 0x8c850684  lw          $a1, 0x684($a0)
    ctx->pc = 0x19dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1668)));
label_19dff8:
    // 0x19dff8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19dffc:
    // 0x19dffc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x19dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19e000:
    // 0x19e000: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19e004:
    // 0x19e004: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19e004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19e008:
    // 0x19e008: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_19e00c:
    // 0x19e00c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_19e010:
    if (ctx->pc == 0x19E010u) {
        ctx->pc = 0x19E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E00Cu;
        // 0x19e010: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E014u;
        goto label_19e014;
    }
    ctx->pc = 0x19E00Cu;
    {
        const bool branch_taken_0x19e00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E00Cu;
        // 0x19e010: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e00c) {
            ctx->pc = 0x19E028u;
            goto label_19e028;
        }
    }
    ctx->pc = 0x19E014u;
label_19e014:
    // 0x19e014: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19e014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19e018:
    // 0x19e018: 0xc064d78  jal         func_1935E0
label_19e01c:
    if (ctx->pc == 0x19E01Cu) {
        ctx->pc = 0x19E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E018u;
        // 0x19e01c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E020u;
        goto label_19e020;
    }
    ctx->pc = 0x19E018u;
    SET_GPR_U32(ctx, 31, 0x19E020u);
    ctx->pc = 0x19E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E018u;
    // 0x19e01c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1935E0u, 0x19E018u, 0x19E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E020u;
label_19e020:
    // 0x19e020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e024:
    // 0x19e024: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x19e024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_19e028:
    // 0x19e028: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19e028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_19e02c:
    // 0x19e02c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19e02cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19e030:
    // 0x19e030: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x19e030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_19e034:
    // 0x19e034: 0x8c630674  lw          $v1, 0x674($v1)
    ctx->pc = 0x19e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
label_19e038:
    // 0x19e038: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x19e038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19e03c:
    // 0x19e03c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_19e040:
    if (ctx->pc == 0x19E040u) {
        ctx->pc = 0x19E044u;
        goto label_19e044;
    }
    ctx->pc = 0x19E03Cu;
    {
        const bool branch_taken_0x19e03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e03c) {
            ctx->pc = 0x19DFDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dfdc;
        }
    }
    ctx->pc = 0x19E044u;
label_19e044:
    // 0x19e044: 0x26f70040  addiu       $s7, $s7, 0x40
    ctx->pc = 0x19e044u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
label_19e048:
    // 0x19e048: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x19e048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_19e04c:
    // 0x19e04c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19e04cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_19e050:
    // 0x19e050: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19e050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19e054:
    // 0x19e054: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x19e054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19e058:
    // 0x19e058: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_19e05c:
    if (ctx->pc == 0x19E05Cu) {
        ctx->pc = 0x19E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E058u;
        // 0x19e05c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E060u;
        goto label_19e060;
    }
    ctx->pc = 0x19E058u;
    {
        const bool branch_taken_0x19e058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E058u;
        // 0x19e05c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e058) {
            ctx->pc = 0x19DFD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dfd4;
        }
    }
    ctx->pc = 0x19E060u;
label_19e060:
    // 0x19e060: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_19e064:
    if (ctx->pc == 0x19E064u) {
        ctx->pc = 0x19E068u;
        goto label_19e068;
    }
    ctx->pc = 0x19E060u;
    {
        const bool branch_taken_0x19e060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e060) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19E068u;
label_19e068:
    // 0x19e068: 0xc063e24  jal         func_18F890
label_19e06c:
    if (ctx->pc == 0x19E06Cu) {
        ctx->pc = 0x19E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E068u;
        // 0x19e06c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E070u;
        goto label_19e070;
    }
    ctx->pc = 0x19E068u;
    SET_GPR_U32(ctx, 31, 0x19E070u);
    ctx->pc = 0x19E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E068u;
    // 0x19e06c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F890u, 0x19E068u, 0x19E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E070u;
label_19e070:
    // 0x19e070: 0x1000000a  b           . + 4 + (0xA << 2)
label_19e074:
    if (ctx->pc == 0x19E074u) {
        ctx->pc = 0x19E078u;
        goto label_19e078;
    }
    ctx->pc = 0x19E070u;
    {
        const bool branch_taken_0x19e070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e070) {
            ctx->pc = 0x19E09Cu;
            goto label_19e09c;
        }
    }
    ctx->pc = 0x19E078u;
label_19e078:
    // 0x19e078: 0x12a00057  beqz        $s5, . + 4 + (0x57 << 2)
label_19e07c:
    if (ctx->pc == 0x19E07Cu) {
        ctx->pc = 0x19E080u;
        goto label_19e080;
    }
    ctx->pc = 0x19E078u;
    {
        const bool branch_taken_0x19e078 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e078) {
            ctx->pc = 0x19E1D8u;
            goto label_19e1d8;
        }
    }
    ctx->pc = 0x19E080u;
label_19e080:
    // 0x19e080: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x19e080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_19e084:
    // 0x19e084: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19e084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19e088:
    // 0x19e088: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19e088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19e08c:
    // 0x19e08c: 0x320f809  jalr        $t9
label_19e090:
    if (ctx->pc == 0x19E090u) {
        ctx->pc = 0x19E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E08Cu;
        // 0x19e090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E094u;
        goto label_19e094;
    }
    ctx->pc = 0x19E08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E094u);
        ctx->pc = 0x19E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E08Cu;
        // 0x19e090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E08Cu, 0x19E094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E094u;
label_19e094:
    // 0x19e094: 0x10000051  b           . + 4 + (0x51 << 2)
label_19e098:
    if (ctx->pc == 0x19E098u) {
        ctx->pc = 0x19E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E094u;
        // 0x19e098: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E09Cu;
        goto label_19e09c;
    }
    ctx->pc = 0x19E094u;
    {
        const bool branch_taken_0x19e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E094u;
        // 0x19e098: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e094) {
            ctx->pc = 0x19E1DCu;
            goto label_19e1dc;
        }
    }
    ctx->pc = 0x19E09Cu;
label_19e09c:
    // 0x19e09c: 0x8ea30320  lw          $v1, 0x320($s5)
    ctx->pc = 0x19e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
label_19e0a0:
    // 0x19e0a0: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_19e0a4:
    if (ctx->pc == 0x19E0A4u) {
        ctx->pc = 0x19E0A8u;
        goto label_19e0a8;
    }
    ctx->pc = 0x19E0A0u;
    {
        const bool branch_taken_0x19e0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e0a0) {
            ctx->pc = 0x19E128u;
            goto label_19e128;
        }
    }
    ctx->pc = 0x19E0A8u;
label_19e0a8:
    // 0x19e0a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19e0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e0ac:
    // 0x19e0ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19e0acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e0b0:
    // 0x19e0b0: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x19e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19e0b4:
    // 0x19e0b4: 0x8c420984  lw          $v0, 0x984($v0)
    ctx->pc = 0x19e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2436)));
label_19e0b8:
    // 0x19e0b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19e0bc:
    if (ctx->pc == 0x19E0BCu) {
        ctx->pc = 0x19E0C0u;
        goto label_19e0c0;
    }
    ctx->pc = 0x19E0B8u;
    {
        const bool branch_taken_0x19e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e0b8) {
            ctx->pc = 0x19E0D0u;
            goto label_19e0d0;
        }
    }
    ctx->pc = 0x19E0C0u;
label_19e0c0:
    // 0x19e0c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19e0c4:
    // 0x19e0c4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x19e0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_19e0c8:
    // 0x19e0c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_19e0cc:
    if (ctx->pc == 0x19E0CCu) {
        ctx->pc = 0x19E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0C8u;
        // 0x19e0cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0D0u;
        goto label_19e0d0;
    }
    ctx->pc = 0x19E0C8u;
    {
        const bool branch_taken_0x19e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0C8u;
        // 0x19e0cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0c8) {
            ctx->pc = 0x19E0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e0b0;
        }
    }
    ctx->pc = 0x19E0D0u;
label_19e0d0:
    // 0x19e0d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e0d4:
    // 0x19e0d4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_19e0d8:
    if (ctx->pc == 0x19E0D8u) {
        ctx->pc = 0x19E0DCu;
        goto label_19e0dc;
    }
    ctx->pc = 0x19E0D4u;
    {
        const bool branch_taken_0x19e0d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e0d4) {
            ctx->pc = 0x19E0F0u;
            goto label_19e0f0;
        }
    }
    ctx->pc = 0x19E0DCu;
label_19e0dc:
    // 0x19e0dc: 0xaea00984  sw          $zero, 0x984($s5)
    ctx->pc = 0x19e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2436), GPR_U32(ctx, 0));
label_19e0e0:
    // 0x19e0e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19e0e4:
    // 0x19e0e4: 0xaea00988  sw          $zero, 0x988($s5)
    ctx->pc = 0x19e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2440), GPR_U32(ctx, 0));
label_19e0e8:
    // 0x19e0e8: 0xaea0098c  sw          $zero, 0x98C($s5)
    ctx->pc = 0x19e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2444), GPR_U32(ctx, 0));
label_19e0ec:
    // 0x19e0ec: 0xaea2032c  sw          $v0, 0x32C($s5)
    ctx->pc = 0x19e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 812), GPR_U32(ctx, 2));
label_19e0f0:
    // 0x19e0f0: 0xaea00328  sw          $zero, 0x328($s5)
    ctx->pc = 0x19e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 808), GPR_U32(ctx, 0));
label_19e0f4:
    // 0x19e0f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19e0f8:
    // 0x19e0f8: 0xaea20320  sw          $v0, 0x320($s5)
    ctx->pc = 0x19e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 800), GPR_U32(ctx, 2));
label_19e0fc:
    // 0x19e0fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19e0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19e100:
    // 0x19e100: 0xaea20990  sw          $v0, 0x990($s5)
    ctx->pc = 0x19e100u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2448), GPR_U32(ctx, 2));
label_19e104:
    // 0x19e104: 0xc0678e8  jal         func_19E3A0
label_19e108:
    if (ctx->pc == 0x19E108u) {
        ctx->pc = 0x19E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E104u;
        // 0x19e108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E10Cu;
        goto label_19e10c;
    }
    ctx->pc = 0x19E104u;
    SET_GPR_U32(ctx, 31, 0x19E10Cu);
    ctx->pc = 0x19E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E104u;
    // 0x19e108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E3A0u, 0x19E104u, 0x19E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E10Cu;
label_19e10c:
    // 0x19e10c: 0xc063dd4  jal         func_18F750
label_19e110:
    if (ctx->pc == 0x19E110u) {
        ctx->pc = 0x19E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E10Cu;
        // 0x19e110: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E114u;
        goto label_19e114;
    }
    ctx->pc = 0x19E10Cu;
    SET_GPR_U32(ctx, 31, 0x19E114u);
    ctx->pc = 0x19E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E10Cu;
    // 0x19e110: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19E10Cu, 0x19E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E114u;
label_19e114:
    // 0x19e114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e118:
    // 0x19e118: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_19e11c:
    if (ctx->pc == 0x19E11Cu) {
        ctx->pc = 0x19E120u;
        goto label_19e120;
    }
    ctx->pc = 0x19E118u;
    {
        const bool branch_taken_0x19e118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19e118) {
            ctx->pc = 0x19E128u;
            goto label_19e128;
        }
    }
    ctx->pc = 0x19E120u;
label_19e120:
    // 0x19e120: 0xc063e24  jal         func_18F890
label_19e124:
    if (ctx->pc == 0x19E124u) {
        ctx->pc = 0x19E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E120u;
        // 0x19e124: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E128u;
        goto label_19e128;
    }
    ctx->pc = 0x19E120u;
    SET_GPR_U32(ctx, 31, 0x19E128u);
    ctx->pc = 0x19E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E120u;
    // 0x19e124: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F890u, 0x19E120u, 0x19E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E128u;
label_19e128:
    // 0x19e128: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x19e128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_19e12c:
    // 0x19e12c: 0x1860002a  blez        $v1, . + 4 + (0x2A << 2)
label_19e130:
    if (ctx->pc == 0x19E130u) {
        ctx->pc = 0x19E134u;
        goto label_19e134;
    }
    ctx->pc = 0x19E12Cu;
    {
        const bool branch_taken_0x19e12c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19e12c) {
            ctx->pc = 0x19E1D8u;
            goto label_19e1d8;
        }
    }
    ctx->pc = 0x19E134u;
label_19e134:
    // 0x19e134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19e138:
    // 0x19e138: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19e138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19e13c:
    // 0x19e13c: 0xaea30328  sw          $v1, 0x328($s5)
    ctx->pc = 0x19e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 808), GPR_U32(ctx, 3));
label_19e140:
    // 0x19e140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e144:
    // 0x19e144: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e148:
    // 0x19e148: 0x8ea30998  lw          $v1, 0x998($s5)
    ctx->pc = 0x19e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2456)));
label_19e14c:
    // 0x19e14c: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x19e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19e150:
    // 0x19e150: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x19e150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19e154:
    // 0x19e154: 0x8ea20328  lw          $v0, 0x328($s5)
    ctx->pc = 0x19e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_19e158:
    // 0x19e158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19e15c:
    // 0x19e15c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x19e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_19e160:
    // 0x19e160: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19e160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19e164:
    // 0x19e164: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x19e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_19e168:
    // 0x19e168: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19e168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19e16c:
    // 0x19e16c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19e170:
    // 0x19e170: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19e174:
    // 0x19e174: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x19e174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19e178:
    // 0x19e178: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19e178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19e17c:
    // 0x19e17c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19e17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19e180:
    // 0x19e180: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19e180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19e184:
    // 0x19e184: 0x0  nop
    ctx->pc = 0x19e184u;
    // NOP
label_19e188:
    // 0x19e188: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19e188u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19e18c:
    // 0x19e18c: 0x0  nop
    ctx->pc = 0x19e18cu;
    // NOP
label_19e190:
    // 0x19e190: 0x0  nop
    ctx->pc = 0x19e190u;
    // NOP
label_19e194:
    // 0x19e194: 0x3012  mflo        $a2
    ctx->pc = 0x19e194u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19e198:
    // 0x19e198: 0xc04bf38  jal         func_12FCE0
label_19e19c:
    if (ctx->pc == 0x19E19Cu) {
        ctx->pc = 0x19E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E198u;
        // 0x19e19c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1A0u;
        goto label_19e1a0;
    }
    ctx->pc = 0x19E198u;
    SET_GPR_U32(ctx, 31, 0x19E1A0u);
    ctx->pc = 0x19E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E198u;
    // 0x19e19c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x19E198u, 0x19E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1A0u;
label_19e1a0:
    // 0x19e1a0: 0x8ea4099c  lw          $a0, 0x99C($s5)
    ctx->pc = 0x19e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2460)));
label_19e1a4:
    // 0x19e1a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19e1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19e1a8:
    // 0x19e1a8: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x19e1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_19e1ac:
    // 0x19e1ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19e1acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19e1b0:
    // 0x19e1b0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19e1b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19e1b4:
    // 0x19e1b4: 0x320f809  jalr        $t9
label_19e1b8:
    if (ctx->pc == 0x19E1B8u) {
        ctx->pc = 0x19E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1B4u;
        // 0x19e1b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1BCu;
        goto label_19e1bc;
    }
    ctx->pc = 0x19E1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E1BCu);
        ctx->pc = 0x19E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1B4u;
        // 0x19e1b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E1B4u, 0x19E1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E1BCu;
label_19e1bc:
    // 0x19e1bc: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x19e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_19e1c0:
    // 0x19e1c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_19e1c4:
    if (ctx->pc == 0x19E1C4u) {
        ctx->pc = 0x19E1C8u;
        goto label_19e1c8;
    }
    ctx->pc = 0x19E1C0u;
    {
        const bool branch_taken_0x19e1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e1c0) {
            ctx->pc = 0x19E1D8u;
            goto label_19e1d8;
        }
    }
    ctx->pc = 0x19E1C8u;
label_19e1c8:
    // 0x19e1c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19e1cc:
    // 0x19e1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e1d0:
    // 0x19e1d0: 0xc0678e8  jal         func_19E3A0
label_19e1d4:
    if (ctx->pc == 0x19E1D4u) {
        ctx->pc = 0x19E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1D0u;
        // 0x19e1d4: 0xaea00320  sw          $zero, 0x320($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1D8u;
        goto label_19e1d8;
    }
    ctx->pc = 0x19E1D0u;
    SET_GPR_U32(ctx, 31, 0x19E1D8u);
    ctx->pc = 0x19E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1D0u;
    // 0x19e1d4: 0xaea00320  sw          $zero, 0x320($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 800), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E3A0u, 0x19E1D0u, 0x19E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1D8u;
label_19e1d8:
    // 0x19e1d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19e1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19e1dc:
    // 0x19e1dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19e1dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19e1e0:
    // 0x19e1e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19e1e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19e1e4:
    // 0x19e1e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19e1e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19e1e8:
    // 0x19e1e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19e1e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19e1ec:
    // 0x19e1ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19e1ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19e1f0:
    // 0x19e1f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19e1f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19e1f4:
    // 0x19e1f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19e1f8:
    // 0x19e1f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19e1fc:
    // 0x19e1fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19e200:
    // 0x19e200: 0x3e00008  jr          $ra
label_19e204:
    if (ctx->pc == 0x19E204u) {
        ctx->pc = 0x19E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E200u;
        // 0x19e204: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E208u;
        goto label_fallthrough_0x19e200;
    }
    ctx->pc = 0x19E200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E200u;
        // 0x19e204: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19e200:
    ctx->pc = 0x19E208u;
}
