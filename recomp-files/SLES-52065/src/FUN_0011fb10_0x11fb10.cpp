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

// Function: FUN_0011fb10
// Address: 0x11fb10 - 0x120104
void FUN_0011fb10_0x11fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011fb10_0x11fb10");
#endif

    switch (ctx->pc) {
        case 0x11fb10u: goto label_11fb10;
        case 0x11fb14u: goto label_11fb14;
        case 0x11fb18u: goto label_11fb18;
        case 0x11fb1cu: goto label_11fb1c;
        case 0x11fb20u: goto label_11fb20;
        case 0x11fb24u: goto label_11fb24;
        case 0x11fb28u: goto label_11fb28;
        case 0x11fb2cu: goto label_11fb2c;
        case 0x11fb30u: goto label_11fb30;
        case 0x11fb34u: goto label_11fb34;
        case 0x11fb38u: goto label_11fb38;
        case 0x11fb3cu: goto label_11fb3c;
        case 0x11fb40u: goto label_11fb40;
        case 0x11fb44u: goto label_11fb44;
        case 0x11fb48u: goto label_11fb48;
        case 0x11fb4cu: goto label_11fb4c;
        case 0x11fb50u: goto label_11fb50;
        case 0x11fb54u: goto label_11fb54;
        case 0x11fb58u: goto label_11fb58;
        case 0x11fb5cu: goto label_11fb5c;
        case 0x11fb60u: goto label_11fb60;
        case 0x11fb64u: goto label_11fb64;
        case 0x11fb68u: goto label_11fb68;
        case 0x11fb6cu: goto label_11fb6c;
        case 0x11fb70u: goto label_11fb70;
        case 0x11fb74u: goto label_11fb74;
        case 0x11fb78u: goto label_11fb78;
        case 0x11fb7cu: goto label_11fb7c;
        case 0x11fb80u: goto label_11fb80;
        case 0x11fb84u: goto label_11fb84;
        case 0x11fb88u: goto label_11fb88;
        case 0x11fb8cu: goto label_11fb8c;
        case 0x11fb90u: goto label_11fb90;
        case 0x11fb94u: goto label_11fb94;
        case 0x11fb98u: goto label_11fb98;
        case 0x11fb9cu: goto label_11fb9c;
        case 0x11fba0u: goto label_11fba0;
        case 0x11fba4u: goto label_11fba4;
        case 0x11fba8u: goto label_11fba8;
        case 0x11fbacu: goto label_11fbac;
        case 0x11fbb0u: goto label_11fbb0;
        case 0x11fbb4u: goto label_11fbb4;
        case 0x11fbb8u: goto label_11fbb8;
        case 0x11fbbcu: goto label_11fbbc;
        case 0x11fbc0u: goto label_11fbc0;
        case 0x11fbc4u: goto label_11fbc4;
        case 0x11fbc8u: goto label_11fbc8;
        case 0x11fbccu: goto label_11fbcc;
        case 0x11fbd0u: goto label_11fbd0;
        case 0x11fbd4u: goto label_11fbd4;
        case 0x11fbd8u: goto label_11fbd8;
        case 0x11fbdcu: goto label_11fbdc;
        case 0x11fbe0u: goto label_11fbe0;
        case 0x11fbe4u: goto label_11fbe4;
        case 0x11fbe8u: goto label_11fbe8;
        case 0x11fbecu: goto label_11fbec;
        case 0x11fbf0u: goto label_11fbf0;
        case 0x11fbf4u: goto label_11fbf4;
        case 0x11fbf8u: goto label_11fbf8;
        case 0x11fbfcu: goto label_11fbfc;
        case 0x11fc00u: goto label_11fc00;
        case 0x11fc04u: goto label_11fc04;
        case 0x11fc08u: goto label_11fc08;
        case 0x11fc0cu: goto label_11fc0c;
        case 0x11fc10u: goto label_11fc10;
        case 0x11fc14u: goto label_11fc14;
        case 0x11fc18u: goto label_11fc18;
        case 0x11fc1cu: goto label_11fc1c;
        case 0x11fc20u: goto label_11fc20;
        case 0x11fc24u: goto label_11fc24;
        case 0x11fc28u: goto label_11fc28;
        case 0x11fc2cu: goto label_11fc2c;
        case 0x11fc30u: goto label_11fc30;
        case 0x11fc34u: goto label_11fc34;
        case 0x11fc38u: goto label_11fc38;
        case 0x11fc3cu: goto label_11fc3c;
        case 0x11fc40u: goto label_11fc40;
        case 0x11fc44u: goto label_11fc44;
        case 0x11fc48u: goto label_11fc48;
        case 0x11fc4cu: goto label_11fc4c;
        case 0x11fc50u: goto label_11fc50;
        case 0x11fc54u: goto label_11fc54;
        case 0x11fc58u: goto label_11fc58;
        case 0x11fc5cu: goto label_11fc5c;
        case 0x11fc60u: goto label_11fc60;
        case 0x11fc64u: goto label_11fc64;
        case 0x11fc68u: goto label_11fc68;
        case 0x11fc6cu: goto label_11fc6c;
        case 0x11fc70u: goto label_11fc70;
        case 0x11fc74u: goto label_11fc74;
        case 0x11fc78u: goto label_11fc78;
        case 0x11fc7cu: goto label_11fc7c;
        case 0x11fc80u: goto label_11fc80;
        case 0x11fc84u: goto label_11fc84;
        case 0x11fc88u: goto label_11fc88;
        case 0x11fc8cu: goto label_11fc8c;
        case 0x11fc90u: goto label_11fc90;
        case 0x11fc94u: goto label_11fc94;
        case 0x11fc98u: goto label_11fc98;
        case 0x11fc9cu: goto label_11fc9c;
        case 0x11fca0u: goto label_11fca0;
        case 0x11fca4u: goto label_11fca4;
        case 0x11fca8u: goto label_11fca8;
        case 0x11fcacu: goto label_11fcac;
        case 0x11fcb0u: goto label_11fcb0;
        case 0x11fcb4u: goto label_11fcb4;
        case 0x11fcb8u: goto label_11fcb8;
        case 0x11fcbcu: goto label_11fcbc;
        case 0x11fcc0u: goto label_11fcc0;
        case 0x11fcc4u: goto label_11fcc4;
        case 0x11fcc8u: goto label_11fcc8;
        case 0x11fcccu: goto label_11fccc;
        case 0x11fcd0u: goto label_11fcd0;
        case 0x11fcd4u: goto label_11fcd4;
        case 0x11fcd8u: goto label_11fcd8;
        case 0x11fcdcu: goto label_11fcdc;
        case 0x11fce0u: goto label_11fce0;
        case 0x11fce4u: goto label_11fce4;
        case 0x11fce8u: goto label_11fce8;
        case 0x11fcecu: goto label_11fcec;
        case 0x11fcf0u: goto label_11fcf0;
        case 0x11fcf4u: goto label_11fcf4;
        case 0x11fcf8u: goto label_11fcf8;
        case 0x11fcfcu: goto label_11fcfc;
        case 0x11fd00u: goto label_11fd00;
        case 0x11fd04u: goto label_11fd04;
        case 0x11fd08u: goto label_11fd08;
        case 0x11fd0cu: goto label_11fd0c;
        case 0x11fd10u: goto label_11fd10;
        case 0x11fd14u: goto label_11fd14;
        case 0x11fd18u: goto label_11fd18;
        case 0x11fd1cu: goto label_11fd1c;
        case 0x11fd20u: goto label_11fd20;
        case 0x11fd24u: goto label_11fd24;
        case 0x11fd28u: goto label_11fd28;
        case 0x11fd2cu: goto label_11fd2c;
        case 0x11fd30u: goto label_11fd30;
        case 0x11fd34u: goto label_11fd34;
        case 0x11fd38u: goto label_11fd38;
        case 0x11fd3cu: goto label_11fd3c;
        case 0x11fd40u: goto label_11fd40;
        case 0x11fd44u: goto label_11fd44;
        case 0x11fd48u: goto label_11fd48;
        case 0x11fd4cu: goto label_11fd4c;
        case 0x11fd50u: goto label_11fd50;
        case 0x11fd54u: goto label_11fd54;
        case 0x11fd58u: goto label_11fd58;
        case 0x11fd5cu: goto label_11fd5c;
        case 0x11fd60u: goto label_11fd60;
        case 0x11fd64u: goto label_11fd64;
        case 0x11fd68u: goto label_11fd68;
        case 0x11fd6cu: goto label_11fd6c;
        case 0x11fd70u: goto label_11fd70;
        case 0x11fd74u: goto label_11fd74;
        case 0x11fd78u: goto label_11fd78;
        case 0x11fd7cu: goto label_11fd7c;
        case 0x11fd80u: goto label_11fd80;
        case 0x11fd84u: goto label_11fd84;
        case 0x11fd88u: goto label_11fd88;
        case 0x11fd8cu: goto label_11fd8c;
        case 0x11fd90u: goto label_11fd90;
        case 0x11fd94u: goto label_11fd94;
        case 0x11fd98u: goto label_11fd98;
        case 0x11fd9cu: goto label_11fd9c;
        case 0x11fda0u: goto label_11fda0;
        case 0x11fda4u: goto label_11fda4;
        case 0x11fda8u: goto label_11fda8;
        case 0x11fdacu: goto label_11fdac;
        case 0x11fdb0u: goto label_11fdb0;
        case 0x11fdb4u: goto label_11fdb4;
        case 0x11fdb8u: goto label_11fdb8;
        case 0x11fdbcu: goto label_11fdbc;
        case 0x11fdc0u: goto label_11fdc0;
        case 0x11fdc4u: goto label_11fdc4;
        case 0x11fdc8u: goto label_11fdc8;
        case 0x11fdccu: goto label_11fdcc;
        case 0x11fdd0u: goto label_11fdd0;
        case 0x11fdd4u: goto label_11fdd4;
        case 0x11fdd8u: goto label_11fdd8;
        case 0x11fddcu: goto label_11fddc;
        case 0x11fde0u: goto label_11fde0;
        case 0x11fde4u: goto label_11fde4;
        case 0x11fde8u: goto label_11fde8;
        case 0x11fdecu: goto label_11fdec;
        case 0x11fdf0u: goto label_11fdf0;
        case 0x11fdf4u: goto label_11fdf4;
        case 0x11fdf8u: goto label_11fdf8;
        case 0x11fdfcu: goto label_11fdfc;
        case 0x11fe00u: goto label_11fe00;
        case 0x11fe04u: goto label_11fe04;
        case 0x11fe08u: goto label_11fe08;
        case 0x11fe0cu: goto label_11fe0c;
        case 0x11fe10u: goto label_11fe10;
        case 0x11fe14u: goto label_11fe14;
        case 0x11fe18u: goto label_11fe18;
        case 0x11fe1cu: goto label_11fe1c;
        case 0x11fe20u: goto label_11fe20;
        case 0x11fe24u: goto label_11fe24;
        case 0x11fe28u: goto label_11fe28;
        case 0x11fe2cu: goto label_11fe2c;
        case 0x11fe30u: goto label_11fe30;
        case 0x11fe34u: goto label_11fe34;
        case 0x11fe38u: goto label_11fe38;
        case 0x11fe3cu: goto label_11fe3c;
        case 0x11fe40u: goto label_11fe40;
        case 0x11fe44u: goto label_11fe44;
        case 0x11fe48u: goto label_11fe48;
        case 0x11fe4cu: goto label_11fe4c;
        case 0x11fe50u: goto label_11fe50;
        case 0x11fe54u: goto label_11fe54;
        case 0x11fe58u: goto label_11fe58;
        case 0x11fe5cu: goto label_11fe5c;
        case 0x11fe60u: goto label_11fe60;
        case 0x11fe64u: goto label_11fe64;
        case 0x11fe68u: goto label_11fe68;
        case 0x11fe6cu: goto label_11fe6c;
        case 0x11fe70u: goto label_11fe70;
        case 0x11fe74u: goto label_11fe74;
        case 0x11fe78u: goto label_11fe78;
        case 0x11fe7cu: goto label_11fe7c;
        case 0x11fe80u: goto label_11fe80;
        case 0x11fe84u: goto label_11fe84;
        case 0x11fe88u: goto label_11fe88;
        case 0x11fe8cu: goto label_11fe8c;
        case 0x11fe90u: goto label_11fe90;
        case 0x11fe94u: goto label_11fe94;
        case 0x11fe98u: goto label_11fe98;
        case 0x11fe9cu: goto label_11fe9c;
        case 0x11fea0u: goto label_11fea0;
        case 0x11fea4u: goto label_11fea4;
        case 0x11fea8u: goto label_11fea8;
        case 0x11feacu: goto label_11feac;
        case 0x11feb0u: goto label_11feb0;
        case 0x11feb4u: goto label_11feb4;
        case 0x11feb8u: goto label_11feb8;
        case 0x11febcu: goto label_11febc;
        case 0x11fec0u: goto label_11fec0;
        case 0x11fec4u: goto label_11fec4;
        case 0x11fec8u: goto label_11fec8;
        case 0x11feccu: goto label_11fecc;
        case 0x11fed0u: goto label_11fed0;
        case 0x11fed4u: goto label_11fed4;
        case 0x11fed8u: goto label_11fed8;
        case 0x11fedcu: goto label_11fedc;
        case 0x11fee0u: goto label_11fee0;
        case 0x11fee4u: goto label_11fee4;
        case 0x11fee8u: goto label_11fee8;
        case 0x11feecu: goto label_11feec;
        case 0x11fef0u: goto label_11fef0;
        case 0x11fef4u: goto label_11fef4;
        case 0x11fef8u: goto label_11fef8;
        case 0x11fefcu: goto label_11fefc;
        case 0x11ff00u: goto label_11ff00;
        case 0x11ff04u: goto label_11ff04;
        case 0x11ff08u: goto label_11ff08;
        case 0x11ff0cu: goto label_11ff0c;
        case 0x11ff10u: goto label_11ff10;
        case 0x11ff14u: goto label_11ff14;
        case 0x11ff18u: goto label_11ff18;
        case 0x11ff1cu: goto label_11ff1c;
        case 0x11ff20u: goto label_11ff20;
        case 0x11ff24u: goto label_11ff24;
        case 0x11ff28u: goto label_11ff28;
        case 0x11ff2cu: goto label_11ff2c;
        case 0x11ff30u: goto label_11ff30;
        case 0x11ff34u: goto label_11ff34;
        case 0x11ff38u: goto label_11ff38;
        case 0x11ff3cu: goto label_11ff3c;
        case 0x11ff40u: goto label_11ff40;
        case 0x11ff44u: goto label_11ff44;
        case 0x11ff48u: goto label_11ff48;
        case 0x11ff4cu: goto label_11ff4c;
        case 0x11ff50u: goto label_11ff50;
        case 0x11ff54u: goto label_11ff54;
        case 0x11ff58u: goto label_11ff58;
        case 0x11ff5cu: goto label_11ff5c;
        case 0x11ff60u: goto label_11ff60;
        case 0x11ff64u: goto label_11ff64;
        case 0x11ff68u: goto label_11ff68;
        case 0x11ff6cu: goto label_11ff6c;
        case 0x11ff70u: goto label_11ff70;
        case 0x11ff74u: goto label_11ff74;
        case 0x11ff78u: goto label_11ff78;
        case 0x11ff7cu: goto label_11ff7c;
        case 0x11ff80u: goto label_11ff80;
        case 0x11ff84u: goto label_11ff84;
        case 0x11ff88u: goto label_11ff88;
        case 0x11ff8cu: goto label_11ff8c;
        case 0x11ff90u: goto label_11ff90;
        case 0x11ff94u: goto label_11ff94;
        case 0x11ff98u: goto label_11ff98;
        case 0x11ff9cu: goto label_11ff9c;
        case 0x11ffa0u: goto label_11ffa0;
        case 0x11ffa4u: goto label_11ffa4;
        case 0x11ffa8u: goto label_11ffa8;
        case 0x11ffacu: goto label_11ffac;
        case 0x11ffb0u: goto label_11ffb0;
        case 0x11ffb4u: goto label_11ffb4;
        case 0x11ffb8u: goto label_11ffb8;
        case 0x11ffbcu: goto label_11ffbc;
        case 0x11ffc0u: goto label_11ffc0;
        case 0x11ffc4u: goto label_11ffc4;
        case 0x11ffc8u: goto label_11ffc8;
        case 0x11ffccu: goto label_11ffcc;
        case 0x11ffd0u: goto label_11ffd0;
        case 0x11ffd4u: goto label_11ffd4;
        case 0x11ffd8u: goto label_11ffd8;
        case 0x11ffdcu: goto label_11ffdc;
        case 0x11ffe0u: goto label_11ffe0;
        case 0x11ffe4u: goto label_11ffe4;
        case 0x11ffe8u: goto label_11ffe8;
        case 0x11ffecu: goto label_11ffec;
        case 0x11fff0u: goto label_11fff0;
        case 0x11fff4u: goto label_11fff4;
        case 0x11fff8u: goto label_11fff8;
        case 0x11fffcu: goto label_11fffc;
        case 0x120000u: goto label_120000;
        case 0x120004u: goto label_120004;
        case 0x120008u: goto label_120008;
        case 0x12000cu: goto label_12000c;
        case 0x120010u: goto label_120010;
        case 0x120014u: goto label_120014;
        case 0x120018u: goto label_120018;
        case 0x12001cu: goto label_12001c;
        case 0x120020u: goto label_120020;
        case 0x120024u: goto label_120024;
        case 0x120028u: goto label_120028;
        case 0x12002cu: goto label_12002c;
        case 0x120030u: goto label_120030;
        case 0x120034u: goto label_120034;
        case 0x120038u: goto label_120038;
        case 0x12003cu: goto label_12003c;
        case 0x120040u: goto label_120040;
        case 0x120044u: goto label_120044;
        case 0x120048u: goto label_120048;
        case 0x12004cu: goto label_12004c;
        case 0x120050u: goto label_120050;
        case 0x120054u: goto label_120054;
        case 0x120058u: goto label_120058;
        case 0x12005cu: goto label_12005c;
        case 0x120060u: goto label_120060;
        case 0x120064u: goto label_120064;
        case 0x120068u: goto label_120068;
        case 0x12006cu: goto label_12006c;
        case 0x120070u: goto label_120070;
        case 0x120074u: goto label_120074;
        case 0x120078u: goto label_120078;
        case 0x12007cu: goto label_12007c;
        case 0x120080u: goto label_120080;
        case 0x120084u: goto label_120084;
        case 0x120088u: goto label_120088;
        case 0x12008cu: goto label_12008c;
        case 0x120090u: goto label_120090;
        case 0x120094u: goto label_120094;
        case 0x120098u: goto label_120098;
        case 0x12009cu: goto label_12009c;
        case 0x1200a0u: goto label_1200a0;
        case 0x1200a4u: goto label_1200a4;
        case 0x1200a8u: goto label_1200a8;
        case 0x1200acu: goto label_1200ac;
        case 0x1200b0u: goto label_1200b0;
        case 0x1200b4u: goto label_1200b4;
        case 0x1200b8u: goto label_1200b8;
        case 0x1200bcu: goto label_1200bc;
        case 0x1200c0u: goto label_1200c0;
        case 0x1200c4u: goto label_1200c4;
        case 0x1200c8u: goto label_1200c8;
        case 0x1200ccu: goto label_1200cc;
        case 0x1200d0u: goto label_1200d0;
        case 0x1200d4u: goto label_1200d4;
        case 0x1200d8u: goto label_1200d8;
        case 0x1200dcu: goto label_1200dc;
        case 0x1200e0u: goto label_1200e0;
        case 0x1200e4u: goto label_1200e4;
        case 0x1200e8u: goto label_1200e8;
        case 0x1200ecu: goto label_1200ec;
        case 0x1200f0u: goto label_1200f0;
        case 0x1200f4u: goto label_1200f4;
        case 0x1200f8u: goto label_1200f8;
        case 0x1200fcu: goto label_1200fc;
        case 0x120100u: goto label_120100;
        default: break;
    }

    ctx->pc = 0x11fb10u;

label_11fb10:
    // 0x11fb10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11fb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11fb14:
    // 0x11fb14: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x11fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_11fb18:
    // 0x11fb18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11fb1c:
    // 0x11fb1c: 0xc71818  mult        $v1, $a2, $a3
    ctx->pc = 0x11fb1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_11fb20:
    // 0x11fb20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11fb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11fb24:
    // 0x11fb24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11fb28:
    // 0x11fb28: 0x11020039  beq         $t0, $v0, . + 4 + (0x39 << 2)
label_11fb2c:
    if (ctx->pc == 0x11FB2Cu) {
        ctx->pc = 0x11FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB28u;
        // 0x11fb2c: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB30u;
        goto label_11fb30;
    }
    ctx->pc = 0x11FB28u;
    {
        const bool branch_taken_0x11fb28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB28u;
        // 0x11fb2c: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb28) {
            ctx->pc = 0x11FC10u;
            goto label_11fc10;
        }
    }
    ctx->pc = 0x11FB30u;
label_11fb30:
    // 0x11fb30: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x11fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_11fb34:
    // 0x11fb34: 0x11020036  beq         $t0, $v0, . + 4 + (0x36 << 2)
label_11fb38:
    if (ctx->pc == 0x11FB38u) {
        ctx->pc = 0x11FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB34u;
        // 0x11fb38: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB3Cu;
        goto label_11fb3c;
    }
    ctx->pc = 0x11FB34u;
    {
        const bool branch_taken_0x11fb34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB34u;
        // 0x11fb38: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb34) {
            ctx->pc = 0x11FC10u;
            goto label_11fc10;
        }
    }
    ctx->pc = 0x11FB3Cu;
label_11fb3c:
    // 0x11fb3c: 0x11020034  beq         $t0, $v0, . + 4 + (0x34 << 2)
label_11fb40:
    if (ctx->pc == 0x11FB40u) {
        ctx->pc = 0x11FB44u;
        goto label_11fb44;
    }
    ctx->pc = 0x11FB3Cu;
    {
        const bool branch_taken_0x11fb3c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fb3c) {
            ctx->pc = 0x11FC10u;
            goto label_11fc10;
        }
    }
    ctx->pc = 0x11FB44u;
label_11fb44:
    // 0x11fb44: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x11fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_11fb48:
    // 0x11fb48: 0x1102002e  beq         $t0, $v0, . + 4 + (0x2E << 2)
label_11fb4c:
    if (ctx->pc == 0x11FB4Cu) {
        ctx->pc = 0x11FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB48u;
        // 0x11fb4c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB50u;
        goto label_11fb50;
    }
    ctx->pc = 0x11FB48u;
    {
        const bool branch_taken_0x11fb48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB48u;
        // 0x11fb4c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb48) {
            ctx->pc = 0x11FC04u;
            goto label_11fc04;
        }
    }
    ctx->pc = 0x11FB50u;
label_11fb50:
    // 0x11fb50: 0x1102002c  beq         $t0, $v0, . + 4 + (0x2C << 2)
label_11fb54:
    if (ctx->pc == 0x11FB54u) {
        ctx->pc = 0x11FB58u;
        goto label_11fb58;
    }
    ctx->pc = 0x11FB50u;
    {
        const bool branch_taken_0x11fb50 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fb50) {
            ctx->pc = 0x11FC04u;
            goto label_11fc04;
        }
    }
    ctx->pc = 0x11FB58u;
label_11fb58:
    // 0x11fb58: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x11fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11fb5c:
    // 0x11fb5c: 0x11020022  beq         $t0, $v0, . + 4 + (0x22 << 2)
label_11fb60:
    if (ctx->pc == 0x11FB60u) {
        ctx->pc = 0x11FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB5Cu;
        // 0x11fb60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB64u;
        goto label_11fb64;
    }
    ctx->pc = 0x11FB5Cu;
    {
        const bool branch_taken_0x11fb5c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB5Cu;
        // 0x11fb60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb5c) {
            ctx->pc = 0x11FBE8u;
            goto label_11fbe8;
        }
    }
    ctx->pc = 0x11FB64u;
label_11fb64:
    // 0x11fb64: 0x11020020  beq         $t0, $v0, . + 4 + (0x20 << 2)
label_11fb68:
    if (ctx->pc == 0x11FB68u) {
        ctx->pc = 0x11FB6Cu;
        goto label_11fb6c;
    }
    ctx->pc = 0x11FB64u;
    {
        const bool branch_taken_0x11fb64 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fb64) {
            ctx->pc = 0x11FBE8u;
            goto label_11fbe8;
        }
    }
    ctx->pc = 0x11FB6Cu;
label_11fb6c:
    // 0x11fb6c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x11fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_11fb70:
    // 0x11fb70: 0x1102001d  beq         $t0, $v0, . + 4 + (0x1D << 2)
label_11fb74:
    if (ctx->pc == 0x11FB74u) {
        ctx->pc = 0x11FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB70u;
        // 0x11fb74: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB78u;
        goto label_11fb78;
    }
    ctx->pc = 0x11FB70u;
    {
        const bool branch_taken_0x11fb70 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB70u;
        // 0x11fb74: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb70) {
            ctx->pc = 0x11FBE8u;
            goto label_11fbe8;
        }
    }
    ctx->pc = 0x11FB78u;
label_11fb78:
    // 0x11fb78: 0x1102001b  beq         $t0, $v0, . + 4 + (0x1B << 2)
label_11fb7c:
    if (ctx->pc == 0x11FB7Cu) {
        ctx->pc = 0x11FB80u;
        goto label_11fb80;
    }
    ctx->pc = 0x11FB78u;
    {
        const bool branch_taken_0x11fb78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fb78) {
            ctx->pc = 0x11FBE8u;
            goto label_11fbe8;
        }
    }
    ctx->pc = 0x11FB80u;
label_11fb80:
    // 0x11fb80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11fb84:
    // 0x11fb84: 0x11020010  beq         $t0, $v0, . + 4 + (0x10 << 2)
label_11fb88:
    if (ctx->pc == 0x11FB88u) {
        ctx->pc = 0x11FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB84u;
        // 0x11fb88: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB8Cu;
        goto label_11fb8c;
    }
    ctx->pc = 0x11FB84u;
    {
        const bool branch_taken_0x11fb84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB84u;
        // 0x11fb88: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb84) {
            ctx->pc = 0x11FBC8u;
            goto label_11fbc8;
        }
    }
    ctx->pc = 0x11FB8Cu;
label_11fb8c:
    // 0x11fb8c: 0x1102000e  beq         $t0, $v0, . + 4 + (0xE << 2)
label_11fb90:
    if (ctx->pc == 0x11FB90u) {
        ctx->pc = 0x11FB94u;
        goto label_11fb94;
    }
    ctx->pc = 0x11FB8Cu;
    {
        const bool branch_taken_0x11fb8c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fb8c) {
            ctx->pc = 0x11FBC8u;
            goto label_11fbc8;
        }
    }
    ctx->pc = 0x11FB94u;
label_11fb94:
    // 0x11fb94: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_11fb98:
    if (ctx->pc == 0x11FB98u) {
        ctx->pc = 0x11FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB94u;
        // 0x11fb98: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FB9Cu;
        goto label_11fb9c;
    }
    ctx->pc = 0x11FB94u;
    {
        const bool branch_taken_0x11fb94 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB94u;
        // 0x11fb98: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb94) {
            ctx->pc = 0x11FBACu;
            goto label_11fbac;
        }
    }
    ctx->pc = 0x11FB9Cu;
label_11fb9c:
    // 0x11fb9c: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
label_11fba0:
    if (ctx->pc == 0x11FBA0u) {
        ctx->pc = 0x11FBA4u;
        goto label_11fba4;
    }
    ctx->pc = 0x11FB9Cu;
    {
        const bool branch_taken_0x11fb9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fb9c) {
            ctx->pc = 0x11FBACu;
            goto label_11fbac;
        }
    }
    ctx->pc = 0x11FBA4u;
label_11fba4:
    // 0x11fba4: 0x10000021  b           . + 4 + (0x21 << 2)
label_11fba8:
    if (ctx->pc == 0x11FBA8u) {
        ctx->pc = 0x11FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBA4u;
        // 0x11fba8: 0x3c040039  lui         $a0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FBACu;
        goto label_11fbac;
    }
    ctx->pc = 0x11FBA4u;
    {
        const bool branch_taken_0x11fba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBA4u;
        // 0x11fba8: 0x3c040039  lui         $a0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fba4) {
            ctx->pc = 0x11FC2Cu;
            goto label_11fc2c;
        }
    }
    ctx->pc = 0x11FBACu;
label_11fbac:
    // 0x11fbac: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_11fbb0:
    // 0x11fbb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11fbb4:
    // 0x11fbb4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fbb8:
    // 0x11fbb8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_11fbbc:
    // 0x11fbbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11fbc0:
    // 0x11fbc0: 0x10000038  b           . + 4 + (0x38 << 2)
label_11fbc4:
    if (ctx->pc == 0x11FBC4u) {
        ctx->pc = 0x11FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBC0u;
        // 0x11fbc4: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FBC8u;
        goto label_11fbc8;
    }
    ctx->pc = 0x11FBC0u;
    {
        const bool branch_taken_0x11fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBC0u;
        // 0x11fbc4: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbc0) {
            ctx->pc = 0x11FCA4u;
            goto label_11fca4;
        }
    }
    ctx->pc = 0x11FBC8u;
label_11fbc8:
    // 0x11fbc8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_11fbcc:
    // 0x11fbcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11fbd0:
    // 0x11fbd0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fbd4:
    // 0x11fbd4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x11fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_11fbd8:
    // 0x11fbd8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x11fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_11fbdc:
    // 0x11fbdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11fbe0:
    // 0x11fbe0: 0x10000030  b           . + 4 + (0x30 << 2)
label_11fbe4:
    if (ctx->pc == 0x11FBE4u) {
        ctx->pc = 0x11FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBE0u;
        // 0x11fbe4: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FBE8u;
        goto label_11fbe8;
    }
    ctx->pc = 0x11FBE0u;
    {
        const bool branch_taken_0x11fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBE0u;
        // 0x11fbe4: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbe0) {
            ctx->pc = 0x11FCA4u;
            goto label_11fca4;
        }
    }
    ctx->pc = 0x11FBE8u;
label_11fbe8:
    // 0x11fbe8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_11fbec:
    // 0x11fbec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fbf0:
    // 0x11fbf0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fbf4:
    // 0x11fbf4: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_11fbf8:
    // 0x11fbf8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fbfc:
    // 0x11fbfc: 0x10000029  b           . + 4 + (0x29 << 2)
label_11fc00:
    if (ctx->pc == 0x11FC00u) {
        ctx->pc = 0x11FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBFCu;
        // 0x11fc00: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC04u;
        goto label_11fc04;
    }
    ctx->pc = 0x11FBFCu;
    {
        const bool branch_taken_0x11fbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBFCu;
        // 0x11fc00: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbfc) {
            ctx->pc = 0x11FCA4u;
            goto label_11fca4;
        }
    }
    ctx->pc = 0x11FC04u;
label_11fc04:
    // 0x11fc04: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_11fc08:
    // 0x11fc08: 0x10000026  b           . + 4 + (0x26 << 2)
label_11fc0c:
    if (ctx->pc == 0x11FC0Cu) {
        ctx->pc = 0x11FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC08u;
        // 0x11fc0c: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC10u;
        goto label_11fc10;
    }
    ctx->pc = 0x11FC08u;
    {
        const bool branch_taken_0x11fc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC08u;
        // 0x11fc0c: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc08) {
            ctx->pc = 0x11FCA4u;
            goto label_11fca4;
        }
    }
    ctx->pc = 0x11FC10u;
label_11fc10:
    // 0x11fc10: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_11fc14:
    // 0x11fc14: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x11fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_11fc18:
    // 0x11fc18: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fc1c:
    // 0x11fc1c: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_11fc20:
    // 0x11fc20: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x11fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_11fc24:
    // 0x11fc24: 0x1000001f  b           . + 4 + (0x1F << 2)
label_11fc28:
    if (ctx->pc == 0x11FC28u) {
        ctx->pc = 0x11FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC24u;
        // 0x11fc28: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC2Cu;
        goto label_11fc2c;
    }
    ctx->pc = 0x11FC24u;
    {
        const bool branch_taken_0x11fc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC24u;
        // 0x11fc28: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc24) {
            ctx->pc = 0x11FCA4u;
            goto label_11fca4;
        }
    }
    ctx->pc = 0x11FC2Cu;
label_11fc2c:
    // 0x11fc2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_11fc30:
    // 0x11fc30: 0x2484b510  addiu       $a0, $a0, -0x4AF0
    ctx->pc = 0x11fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948112));
label_11fc34:
    // 0x11fc34: 0xc048198  jal         func_120660
label_11fc38:
    if (ctx->pc == 0x11FC38u) {
        ctx->pc = 0x11FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC34u;
        // 0x11fc38: 0x24a5e920  addiu       $a1, $a1, -0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC3Cu;
        goto label_11fc3c;
    }
    ctx->pc = 0x11FC34u;
    SET_GPR_U32(ctx, 31, 0x11FC3Cu);
    ctx->pc = 0x11FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC34u;
    // 0x11fc38: 0x24a5e920  addiu       $a1, $a1, -0x16E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120660u, 0x11FC34u, 0x11FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC3Cu;
label_11fc3c:
    // 0x11fc3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11fc40:
    // 0x11fc40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11fc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fc44:
    // 0x11fc44: 0xc04805c  jal         func_120170
label_11fc48:
    if (ctx->pc == 0x11FC48u) {
        ctx->pc = 0x11FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC44u;
        // 0x11fc48: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC4Cu;
        goto label_11fc4c;
    }
    ctx->pc = 0x11FC44u;
    SET_GPR_U32(ctx, 31, 0x11FC4Cu);
    ctx->pc = 0x11FC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC44u;
    // 0x11fc48: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120170u, 0x11FC44u, 0x11FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC4Cu;
label_11fc4c:
    // 0x11fc4c: 0x9382840c  lbu         $v0, -0x7BF4($gp)
    ctx->pc = 0x11fc4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935564)));
label_11fc50:
    // 0x11fc50: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x11fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_11fc54:
    // 0x11fc54: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x11fc54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11fc58:
    // 0x11fc58: 0x83a5003c  lb          $a1, 0x3C($sp)
    ctx->pc = 0x11fc58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
label_11fc5c:
    // 0x11fc5c: 0xc04815c  jal         func_120570
label_11fc60:
    if (ctx->pc == 0x11FC60u) {
        ctx->pc = 0x11FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC5Cu;
        // 0x11fc60: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC64u;
        goto label_11fc64;
    }
    ctx->pc = 0x11FC5Cu;
    SET_GPR_U32(ctx, 31, 0x11FC64u);
    ctx->pc = 0x11FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC5Cu;
    // 0x11fc60: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120570u, 0x11FC5Cu, 0x11FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC64u;
label_11fc64:
    // 0x11fc64: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x11fc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11fc68:
    // 0x11fc68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fc6c:
    // 0x11fc6c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x11fc6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_11fc70:
    // 0x11fc70: 0x320f809  jalr        $t9
label_11fc74:
    if (ctx->pc == 0x11FC74u) {
        ctx->pc = 0x11FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC70u;
        // 0x11fc74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC78u;
        goto label_11fc78;
    }
    ctx->pc = 0x11FC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11FC78u);
        ctx->pc = 0x11FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC70u;
        // 0x11fc74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC70u, 0x11FC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FC78u;
label_11fc78:
    // 0x11fc78: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x11fc78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11fc7c:
    // 0x11fc7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11fc80:
    // 0x11fc80: 0xc048044  jal         func_120110
label_11fc84:
    if (ctx->pc == 0x11FC84u) {
        ctx->pc = 0x11FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC80u;
        // 0x11fc84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC88u;
        goto label_11fc88;
    }
    ctx->pc = 0x11FC80u;
    SET_GPR_U32(ctx, 31, 0x11FC88u);
    ctx->pc = 0x11FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC80u;
    // 0x11fc84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x11FC80u, 0x11FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC88u;
label_11fc88:
    // 0x11fc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11fc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11fc8c:
    // 0x11fc8c: 0xc048254  jal         func_120950
label_11fc90:
    if (ctx->pc == 0x11FC90u) {
        ctx->pc = 0x11FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC8Cu;
        // 0x11fc90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC94u;
        goto label_11fc94;
    }
    ctx->pc = 0x11FC8Cu;
    SET_GPR_U32(ctx, 31, 0x11FC94u);
    ctx->pc = 0x11FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC8Cu;
    // 0x11fc90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120950u, 0x11FC8Cu, 0x11FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC94u;
label_11fc94:
    // 0x11fc94: 0xc048208  jal         func_120820
label_11fc98:
    if (ctx->pc == 0x11FC98u) {
        ctx->pc = 0x11FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC94u;
        // 0x11fc98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC9Cu;
        goto label_11fc9c;
    }
    ctx->pc = 0x11FC94u;
    SET_GPR_U32(ctx, 31, 0x11FC9Cu);
    ctx->pc = 0x11FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC94u;
    // 0x11fc98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x11FC94u, 0x11FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC9Cu;
label_11fc9c:
    // 0x11fc9c: 0x10000115  b           . + 4 + (0x115 << 2)
label_11fca0:
    if (ctx->pc == 0x11FCA0u) {
        ctx->pc = 0x11FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC9Cu;
        // 0x11fca0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FCA4u;
        goto label_11fca4;
    }
    ctx->pc = 0x11FC9Cu;
    {
        const bool branch_taken_0x11fc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC9Cu;
        // 0x11fca0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc9c) {
            ctx->pc = 0x1200F4u;
            goto label_1200f4;
        }
    }
    ctx->pc = 0x11FCA4u;
label_11fca4:
    // 0x11fca4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x11fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_11fca8:
    // 0x11fca8: 0x1502006d  bne         $t0, $v0, . + 4 + (0x6D << 2)
label_11fcac:
    if (ctx->pc == 0x11FCACu) {
        ctx->pc = 0x11FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCA8u;
        // 0x11fcac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FCB0u;
        goto label_11fcb0;
    }
    ctx->pc = 0x11FCA8u;
    {
        const bool branch_taken_0x11fca8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCA8u;
        // 0x11fcac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fca8) {
            ctx->pc = 0x11FE60u;
            goto label_11fe60;
        }
    }
    ctx->pc = 0x11FCB0u;
label_11fcb0:
    // 0x11fcb0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x11fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_11fcb4:
    // 0x11fcb4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fcb8:
    if (ctx->pc == 0x11FCB8u) {
        ctx->pc = 0x11FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCB4u;
        // 0x11fcb8: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FCBCu;
        goto label_11fcbc;
    }
    ctx->pc = 0x11FCB4u;
    {
        const bool branch_taken_0x11fcb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCB4u;
        // 0x11fcb8: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcb4) {
            ctx->pc = 0x11FCD8u;
            goto label_11fcd8;
        }
    }
    ctx->pc = 0x11FCBCu;
label_11fcbc:
    // 0x11fcbc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11fcc0:
    // 0x11fcc0: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fcc4:
    if (ctx->pc == 0x11FCC4u) {
        ctx->pc = 0x11FCC8u;
        goto label_11fcc8;
    }
    ctx->pc = 0x11FCC0u;
    {
        const bool branch_taken_0x11fcc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fcc0) {
            ctx->pc = 0x11FCD4u;
            goto label_11fcd4;
        }
    }
    ctx->pc = 0x11FCC8u;
label_11fcc8:
    // 0x11fcc8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fccc:
    // 0x11fccc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fcd0:
    // 0x11fcd0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fcd4:
    // 0x11fcd4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x11fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_11fcd8:
    // 0x11fcd8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fcdc:
    if (ctx->pc == 0x11FCDCu) {
        ctx->pc = 0x11FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCD8u;
        // 0x11fcdc: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FCE0u;
        goto label_11fce0;
    }
    ctx->pc = 0x11FCD8u;
    {
        const bool branch_taken_0x11fcd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCD8u;
        // 0x11fcdc: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcd8) {
            ctx->pc = 0x11FCFCu;
            goto label_11fcfc;
        }
    }
    ctx->pc = 0x11FCE0u;
label_11fce0:
    // 0x11fce0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fce4:
    // 0x11fce4: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fce8:
    if (ctx->pc == 0x11FCE8u) {
        ctx->pc = 0x11FCECu;
        goto label_11fcec;
    }
    ctx->pc = 0x11FCE4u;
    {
        const bool branch_taken_0x11fce4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fce4) {
            ctx->pc = 0x11FCF8u;
            goto label_11fcf8;
        }
    }
    ctx->pc = 0x11FCECu;
label_11fcec:
    // 0x11fcec: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fcf0:
    // 0x11fcf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11fcf4:
    // 0x11fcf4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fcf8:
    // 0x11fcf8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_11fcfc:
    // 0x11fcfc: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fd00:
    if (ctx->pc == 0x11FD00u) {
        ctx->pc = 0x11FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCFCu;
        // 0x11fd00: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FD04u;
        goto label_11fd04;
    }
    ctx->pc = 0x11FCFCu;
    {
        const bool branch_taken_0x11fcfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCFCu;
        // 0x11fd00: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcfc) {
            ctx->pc = 0x11FD20u;
            goto label_11fd20;
        }
    }
    ctx->pc = 0x11FD04u;
label_11fd04:
    // 0x11fd04: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11fd08:
    // 0x11fd08: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fd0c:
    if (ctx->pc == 0x11FD0Cu) {
        ctx->pc = 0x11FD10u;
        goto label_11fd10;
    }
    ctx->pc = 0x11FD08u;
    {
        const bool branch_taken_0x11fd08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fd08) {
            ctx->pc = 0x11FD1Cu;
            goto label_11fd1c;
        }
    }
    ctx->pc = 0x11FD10u;
label_11fd10:
    // 0x11fd10: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fd14:
    // 0x11fd14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fd18:
    // 0x11fd18: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fd1c:
    // 0x11fd1c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_11fd20:
    // 0x11fd20: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fd24:
    if (ctx->pc == 0x11FD24u) {
        ctx->pc = 0x11FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD20u;
        // 0x11fd24: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FD28u;
        goto label_11fd28;
    }
    ctx->pc = 0x11FD20u;
    {
        const bool branch_taken_0x11fd20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD20u;
        // 0x11fd24: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd20) {
            ctx->pc = 0x11FD44u;
            goto label_11fd44;
        }
    }
    ctx->pc = 0x11FD28u;
label_11fd28:
    // 0x11fd28: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fd2c:
    // 0x11fd2c: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fd30:
    if (ctx->pc == 0x11FD30u) {
        ctx->pc = 0x11FD34u;
        goto label_11fd34;
    }
    ctx->pc = 0x11FD2Cu;
    {
        const bool branch_taken_0x11fd2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fd2c) {
            ctx->pc = 0x11FD40u;
            goto label_11fd40;
        }
    }
    ctx->pc = 0x11FD34u;
label_11fd34:
    // 0x11fd34: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fd38:
    // 0x11fd38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11fd3c:
    // 0x11fd3c: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fd40:
    // 0x11fd40: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_11fd44:
    // 0x11fd44: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fd48:
    if (ctx->pc == 0x11FD48u) {
        ctx->pc = 0x11FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD44u;
        // 0x11fd48: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FD4Cu;
        goto label_11fd4c;
    }
    ctx->pc = 0x11FD44u;
    {
        const bool branch_taken_0x11fd44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD44u;
        // 0x11fd48: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd44) {
            ctx->pc = 0x11FD68u;
            goto label_11fd68;
        }
    }
    ctx->pc = 0x11FD4Cu;
label_11fd4c:
    // 0x11fd4c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11fd50:
    // 0x11fd50: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fd54:
    if (ctx->pc == 0x11FD54u) {
        ctx->pc = 0x11FD58u;
        goto label_11fd58;
    }
    ctx->pc = 0x11FD50u;
    {
        const bool branch_taken_0x11fd50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fd50) {
            ctx->pc = 0x11FD64u;
            goto label_11fd64;
        }
    }
    ctx->pc = 0x11FD58u;
label_11fd58:
    // 0x11fd58: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fd5c:
    // 0x11fd5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fd60:
    // 0x11fd60: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fd64:
    // 0x11fd64: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_11fd68:
    // 0x11fd68: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fd6c:
    if (ctx->pc == 0x11FD6Cu) {
        ctx->pc = 0x11FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD68u;
        // 0x11fd6c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FD70u;
        goto label_11fd70;
    }
    ctx->pc = 0x11FD68u;
    {
        const bool branch_taken_0x11fd68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD68u;
        // 0x11fd6c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd68) {
            ctx->pc = 0x11FD8Cu;
            goto label_11fd8c;
        }
    }
    ctx->pc = 0x11FD70u;
label_11fd70:
    // 0x11fd70: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fd74:
    // 0x11fd74: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fd78:
    if (ctx->pc == 0x11FD78u) {
        ctx->pc = 0x11FD7Cu;
        goto label_11fd7c;
    }
    ctx->pc = 0x11FD74u;
    {
        const bool branch_taken_0x11fd74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fd74) {
            ctx->pc = 0x11FD88u;
            goto label_11fd88;
        }
    }
    ctx->pc = 0x11FD7Cu;
label_11fd7c:
    // 0x11fd7c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fd80:
    // 0x11fd80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11fd84:
    // 0x11fd84: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fd88:
    // 0x11fd88: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11fd8c:
    // 0x11fd8c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fd90:
    if (ctx->pc == 0x11FD90u) {
        ctx->pc = 0x11FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD8Cu;
        // 0x11fd90: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FD94u;
        goto label_11fd94;
    }
    ctx->pc = 0x11FD8Cu;
    {
        const bool branch_taken_0x11fd8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD8Cu;
        // 0x11fd90: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd8c) {
            ctx->pc = 0x11FDB0u;
            goto label_11fdb0;
        }
    }
    ctx->pc = 0x11FD94u;
label_11fd94:
    // 0x11fd94: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fd98:
    // 0x11fd98: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fd9c:
    if (ctx->pc == 0x11FD9Cu) {
        ctx->pc = 0x11FDA0u;
        goto label_11fda0;
    }
    ctx->pc = 0x11FD98u;
    {
        const bool branch_taken_0x11fd98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fd98) {
            ctx->pc = 0x11FDACu;
            goto label_11fdac;
        }
    }
    ctx->pc = 0x11FDA0u;
label_11fda0:
    // 0x11fda0: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fda4:
    // 0x11fda4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fda8:
    // 0x11fda8: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fdac:
    // 0x11fdac: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11fdb0:
    // 0x11fdb0: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fdb4:
    if (ctx->pc == 0x11FDB4u) {
        ctx->pc = 0x11FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDB0u;
        // 0x11fdb4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FDB8u;
        goto label_11fdb8;
    }
    ctx->pc = 0x11FDB0u;
    {
        const bool branch_taken_0x11fdb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDB0u;
        // 0x11fdb4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdb0) {
            ctx->pc = 0x11FDD4u;
            goto label_11fdd4;
        }
    }
    ctx->pc = 0x11FDB8u;
label_11fdb8:
    // 0x11fdb8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_11fdbc:
    // 0x11fdbc: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fdc0:
    if (ctx->pc == 0x11FDC0u) {
        ctx->pc = 0x11FDC4u;
        goto label_11fdc4;
    }
    ctx->pc = 0x11FDBCu;
    {
        const bool branch_taken_0x11fdbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fdbc) {
            ctx->pc = 0x11FDD0u;
            goto label_11fdd0;
        }
    }
    ctx->pc = 0x11FDC4u;
label_11fdc4:
    // 0x11fdc4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fdc8:
    // 0x11fdc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11fdcc:
    // 0x11fdcc: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fdd0:
    // 0x11fdd0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11fdd4:
    // 0x11fdd4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fdd8:
    if (ctx->pc == 0x11FDD8u) {
        ctx->pc = 0x11FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDD4u;
        // 0x11fdd8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FDDCu;
        goto label_11fddc;
    }
    ctx->pc = 0x11FDD4u;
    {
        const bool branch_taken_0x11fdd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDD4u;
        // 0x11fdd8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdd4) {
            ctx->pc = 0x11FDF8u;
            goto label_11fdf8;
        }
    }
    ctx->pc = 0x11FDDCu;
label_11fddc:
    // 0x11fddc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11fde0:
    // 0x11fde0: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fde4:
    if (ctx->pc == 0x11FDE4u) {
        ctx->pc = 0x11FDE8u;
        goto label_11fde8;
    }
    ctx->pc = 0x11FDE0u;
    {
        const bool branch_taken_0x11fde0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fde0) {
            ctx->pc = 0x11FDF4u;
            goto label_11fdf4;
        }
    }
    ctx->pc = 0x11FDE8u;
label_11fde8:
    // 0x11fde8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fdec:
    // 0x11fdec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fdf0:
    // 0x11fdf0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fdf4:
    // 0x11fdf4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fdf8:
    // 0x11fdf8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fdfc:
    if (ctx->pc == 0x11FDFCu) {
        ctx->pc = 0x11FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDF8u;
        // 0x11fdfc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE00u;
        goto label_11fe00;
    }
    ctx->pc = 0x11FDF8u;
    {
        const bool branch_taken_0x11fdf8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDF8u;
        // 0x11fdfc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdf8) {
            ctx->pc = 0x11FE1Cu;
            goto label_11fe1c;
        }
    }
    ctx->pc = 0x11FE00u;
label_11fe00:
    // 0x11fe00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_11fe04:
    // 0x11fe04: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fe08:
    if (ctx->pc == 0x11FE08u) {
        ctx->pc = 0x11FE0Cu;
        goto label_11fe0c;
    }
    ctx->pc = 0x11FE04u;
    {
        const bool branch_taken_0x11fe04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe04) {
            ctx->pc = 0x11FE18u;
            goto label_11fe18;
        }
    }
    ctx->pc = 0x11FE0Cu;
label_11fe0c:
    // 0x11fe0c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fe10:
    // 0x11fe10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fe14:
    // 0x11fe14: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fe18:
    // 0x11fe18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fe1c:
    // 0x11fe1c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fe20:
    if (ctx->pc == 0x11FE20u) {
        ctx->pc = 0x11FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE1Cu;
        // 0x11fe20: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE24u;
        goto label_11fe24;
    }
    ctx->pc = 0x11FE1Cu;
    {
        const bool branch_taken_0x11fe1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE1Cu;
        // 0x11fe20: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe1c) {
            ctx->pc = 0x11FE40u;
            goto label_11fe40;
        }
    }
    ctx->pc = 0x11FE24u;
label_11fe24:
    // 0x11fe24: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11fe28:
    // 0x11fe28: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fe2c:
    if (ctx->pc == 0x11FE2Cu) {
        ctx->pc = 0x11FE30u;
        goto label_11fe30;
    }
    ctx->pc = 0x11FE28u;
    {
        const bool branch_taken_0x11fe28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe28) {
            ctx->pc = 0x11FE3Cu;
            goto label_11fe3c;
        }
    }
    ctx->pc = 0x11FE30u;
label_11fe30:
    // 0x11fe30: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fe34:
    // 0x11fe34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11fe38:
    // 0x11fe38: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fe3c:
    // 0x11fe3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fe40:
    // 0x11fe40: 0x14c200a9  bne         $a2, $v0, . + 4 + (0xA9 << 2)
label_11fe44:
    if (ctx->pc == 0x11FE44u) {
        ctx->pc = 0x11FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE40u;
        // 0x11fe44: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE48u;
        goto label_11fe48;
    }
    ctx->pc = 0x11FE40u;
    {
        const bool branch_taken_0x11fe40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE40u;
        // 0x11fe44: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe40) {
            ctx->pc = 0x1200E8u;
            goto label_1200e8;
        }
    }
    ctx->pc = 0x11FE48u;
label_11fe48:
    // 0x11fe48: 0x14e200a7  bne         $a3, $v0, . + 4 + (0xA7 << 2)
label_11fe4c:
    if (ctx->pc == 0x11FE4Cu) {
        ctx->pc = 0x11FE50u;
        goto label_11fe50;
    }
    ctx->pc = 0x11FE48u;
    {
        const bool branch_taken_0x11fe48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe48) {
            ctx->pc = 0x1200E8u;
            goto label_1200e8;
        }
    }
    ctx->pc = 0x11FE50u;
label_11fe50:
    // 0x11fe50: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fe54:
    // 0x11fe54: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fe58:
    // 0x11fe58: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_11fe5c:
    if (ctx->pc == 0x11FE5Cu) {
        ctx->pc = 0x11FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE58u;
        // 0x11fe5c: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE60u;
        goto label_11fe60;
    }
    ctx->pc = 0x11FE58u;
    {
        const bool branch_taken_0x11fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE58u;
        // 0x11fe5c: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe58) {
            ctx->pc = 0x1200E8u;
            goto label_1200e8;
        }
    }
    ctx->pc = 0x11FE60u;
label_11fe60:
    // 0x11fe60: 0x150200a1  bne         $t0, $v0, . + 4 + (0xA1 << 2)
label_11fe64:
    if (ctx->pc == 0x11FE64u) {
        ctx->pc = 0x11FE68u;
        goto label_11fe68;
    }
    ctx->pc = 0x11FE60u;
    {
        const bool branch_taken_0x11fe60 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe60) {
            ctx->pc = 0x1200E8u;
            goto label_1200e8;
        }
    }
    ctx->pc = 0x11FE68u;
label_11fe68:
    // 0x11fe68: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fe6c:
    // 0x11fe6c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fe70:
    if (ctx->pc == 0x11FE70u) {
        ctx->pc = 0x11FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE6Cu;
        // 0x11fe70: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE74u;
        goto label_11fe74;
    }
    ctx->pc = 0x11FE6Cu;
    {
        const bool branch_taken_0x11fe6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE6Cu;
        // 0x11fe70: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe6c) {
            ctx->pc = 0x11FE90u;
            goto label_11fe90;
        }
    }
    ctx->pc = 0x11FE74u;
label_11fe74:
    // 0x11fe74: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11fe78:
    // 0x11fe78: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fe7c:
    if (ctx->pc == 0x11FE7Cu) {
        ctx->pc = 0x11FE80u;
        goto label_11fe80;
    }
    ctx->pc = 0x11FE78u;
    {
        const bool branch_taken_0x11fe78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe78) {
            ctx->pc = 0x11FE8Cu;
            goto label_11fe8c;
        }
    }
    ctx->pc = 0x11FE80u;
label_11fe80:
    // 0x11fe80: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fe84:
    // 0x11fe84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fe88:
    // 0x11fe88: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fe8c:
    // 0x11fe8c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11fe90:
    // 0x11fe90: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fe94:
    if (ctx->pc == 0x11FE94u) {
        ctx->pc = 0x11FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE90u;
        // 0x11fe94: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FE98u;
        goto label_11fe98;
    }
    ctx->pc = 0x11FE90u;
    {
        const bool branch_taken_0x11fe90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE90u;
        // 0x11fe94: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe90) {
            ctx->pc = 0x11FEB4u;
            goto label_11feb4;
        }
    }
    ctx->pc = 0x11FE98u;
label_11fe98:
    // 0x11fe98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_11fe9c:
    // 0x11fe9c: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fea0:
    if (ctx->pc == 0x11FEA0u) {
        ctx->pc = 0x11FEA4u;
        goto label_11fea4;
    }
    ctx->pc = 0x11FE9Cu;
    {
        const bool branch_taken_0x11fe9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe9c) {
            ctx->pc = 0x11FEB0u;
            goto label_11feb0;
        }
    }
    ctx->pc = 0x11FEA4u;
label_11fea4:
    // 0x11fea4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fea8:
    // 0x11fea8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11feac:
    // 0x11feac: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11feacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11feb0:
    // 0x11feb0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11feb4:
    // 0x11feb4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11feb8:
    if (ctx->pc == 0x11FEB8u) {
        ctx->pc = 0x11FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEB4u;
        // 0x11feb8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FEBCu;
        goto label_11febc;
    }
    ctx->pc = 0x11FEB4u;
    {
        const bool branch_taken_0x11feb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEB4u;
        // 0x11feb8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11feb4) {
            ctx->pc = 0x11FED8u;
            goto label_11fed8;
        }
    }
    ctx->pc = 0x11FEBCu;
label_11febc:
    // 0x11febc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_11fec0:
    // 0x11fec0: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fec4:
    if (ctx->pc == 0x11FEC4u) {
        ctx->pc = 0x11FEC8u;
        goto label_11fec8;
    }
    ctx->pc = 0x11FEC0u;
    {
        const bool branch_taken_0x11fec0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fec0) {
            ctx->pc = 0x11FED4u;
            goto label_11fed4;
        }
    }
    ctx->pc = 0x11FEC8u;
label_11fec8:
    // 0x11fec8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fecc:
    // 0x11fecc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11feccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_11fed0:
    // 0x11fed0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fed4:
    // 0x11fed4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11fed8:
    // 0x11fed8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fedc:
    if (ctx->pc == 0x11FEDCu) {
        ctx->pc = 0x11FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FED8u;
        // 0x11fedc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FEE0u;
        goto label_11fee0;
    }
    ctx->pc = 0x11FED8u;
    {
        const bool branch_taken_0x11fed8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FED8u;
        // 0x11fedc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fed8) {
            ctx->pc = 0x11FEFCu;
            goto label_11fefc;
        }
    }
    ctx->pc = 0x11FEE0u;
label_11fee0:
    // 0x11fee0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_11fee4:
    // 0x11fee4: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11fee8:
    if (ctx->pc == 0x11FEE8u) {
        ctx->pc = 0x11FEECu;
        goto label_11feec;
    }
    ctx->pc = 0x11FEE4u;
    {
        const bool branch_taken_0x11fee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fee4) {
            ctx->pc = 0x11FEF8u;
            goto label_11fef8;
        }
    }
    ctx->pc = 0x11FEECu;
label_11feec:
    // 0x11feec: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11fef0:
    // 0x11fef0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11fef4:
    // 0x11fef4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fef8:
    // 0x11fef8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11fefc:
    // 0x11fefc: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11ff00:
    if (ctx->pc == 0x11FF00u) {
        ctx->pc = 0x11FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEFCu;
        // 0x11ff00: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF04u;
        goto label_11ff04;
    }
    ctx->pc = 0x11FEFCu;
    {
        const bool branch_taken_0x11fefc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEFCu;
        // 0x11ff00: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fefc) {
            ctx->pc = 0x11FF20u;
            goto label_11ff20;
        }
    }
    ctx->pc = 0x11FF04u;
label_11ff04:
    // 0x11ff04: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11ff08:
    // 0x11ff08: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11ff0c:
    if (ctx->pc == 0x11FF0Cu) {
        ctx->pc = 0x11FF10u;
        goto label_11ff10;
    }
    ctx->pc = 0x11FF08u;
    {
        const bool branch_taken_0x11ff08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff08) {
            ctx->pc = 0x11FF1Cu;
            goto label_11ff1c;
        }
    }
    ctx->pc = 0x11FF10u;
label_11ff10:
    // 0x11ff10: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11ff14:
    // 0x11ff14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11ff18:
    // 0x11ff18: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11ff1c:
    // 0x11ff1c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11ff20:
    // 0x11ff20: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11ff24:
    if (ctx->pc == 0x11FF24u) {
        ctx->pc = 0x11FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF20u;
        // 0x11ff24: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF28u;
        goto label_11ff28;
    }
    ctx->pc = 0x11FF20u;
    {
        const bool branch_taken_0x11ff20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF20u;
        // 0x11ff24: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff20) {
            ctx->pc = 0x11FF44u;
            goto label_11ff44;
        }
    }
    ctx->pc = 0x11FF28u;
label_11ff28:
    // 0x11ff28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_11ff2c:
    // 0x11ff2c: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11ff30:
    if (ctx->pc == 0x11FF30u) {
        ctx->pc = 0x11FF34u;
        goto label_11ff34;
    }
    ctx->pc = 0x11FF2Cu;
    {
        const bool branch_taken_0x11ff2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff2c) {
            ctx->pc = 0x11FF40u;
            goto label_11ff40;
        }
    }
    ctx->pc = 0x11FF34u;
label_11ff34:
    // 0x11ff34: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11ff38:
    // 0x11ff38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11ff3c:
    // 0x11ff3c: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11ff40:
    // 0x11ff40: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11ff44:
    // 0x11ff44: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11ff48:
    if (ctx->pc == 0x11FF48u) {
        ctx->pc = 0x11FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF44u;
        // 0x11ff48: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF4Cu;
        goto label_11ff4c;
    }
    ctx->pc = 0x11FF44u;
    {
        const bool branch_taken_0x11ff44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF44u;
        // 0x11ff48: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff44) {
            ctx->pc = 0x11FF68u;
            goto label_11ff68;
        }
    }
    ctx->pc = 0x11FF4Cu;
label_11ff4c:
    // 0x11ff4c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_11ff50:
    // 0x11ff50: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11ff54:
    if (ctx->pc == 0x11FF54u) {
        ctx->pc = 0x11FF58u;
        goto label_11ff58;
    }
    ctx->pc = 0x11FF50u;
    {
        const bool branch_taken_0x11ff50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff50) {
            ctx->pc = 0x11FF64u;
            goto label_11ff64;
        }
    }
    ctx->pc = 0x11FF58u;
label_11ff58:
    // 0x11ff58: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11ff5c:
    // 0x11ff5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11ff60:
    // 0x11ff60: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11ff64:
    // 0x11ff64: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11ff68:
    // 0x11ff68: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11ff6c:
    if (ctx->pc == 0x11FF6Cu) {
        ctx->pc = 0x11FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF68u;
        // 0x11ff6c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FF70u;
        goto label_11ff70;
    }
    ctx->pc = 0x11FF68u;
    {
        const bool branch_taken_0x11ff68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF68u;
        // 0x11ff6c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff68) {
            ctx->pc = 0x11FF8Cu;
            goto label_11ff8c;
        }
    }
    ctx->pc = 0x11FF70u;
label_11ff70:
    // 0x11ff70: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_11ff74:
    // 0x11ff74: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11ff78:
    if (ctx->pc == 0x11FF78u) {
        ctx->pc = 0x11FF7Cu;
        goto label_11ff7c;
    }
    ctx->pc = 0x11FF74u;
    {
        const bool branch_taken_0x11ff74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff74) {
            ctx->pc = 0x11FF88u;
            goto label_11ff88;
        }
    }
    ctx->pc = 0x11FF7Cu;
label_11ff7c:
    // 0x11ff7c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11ff80:
    // 0x11ff80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11ff84:
    // 0x11ff84: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11ff88:
    // 0x11ff88: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11ff8c:
    // 0x11ff8c: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
label_11ff90:
    if (ctx->pc == 0x11FF90u) {
        ctx->pc = 0x11FF94u;
        goto label_11ff94;
    }
    ctx->pc = 0x11FF8Cu;
    {
        const bool branch_taken_0x11ff8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff8c) {
            ctx->pc = 0x11FFA8u;
            goto label_11ffa8;
        }
    }
    ctx->pc = 0x11FF94u;
label_11ff94:
    // 0x11ff94: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11ff98:
    if (ctx->pc == 0x11FF98u) {
        ctx->pc = 0x11FF9Cu;
        goto label_11ff9c;
    }
    ctx->pc = 0x11FF94u;
    {
        const bool branch_taken_0x11ff94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff94) {
            ctx->pc = 0x11FFA8u;
            goto label_11ffa8;
        }
    }
    ctx->pc = 0x11FF9Cu;
label_11ff9c:
    // 0x11ff9c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11ffa0:
    // 0x11ffa0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11ffa4:
    // 0x11ffa4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11ffa8:
    // 0x11ffa8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11ffac:
    // 0x11ffac: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11ffb0:
    if (ctx->pc == 0x11FFB0u) {
        ctx->pc = 0x11FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFACu;
        // 0x11ffb0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FFB4u;
        goto label_11ffb4;
    }
    ctx->pc = 0x11FFACu;
    {
        const bool branch_taken_0x11ffac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFACu;
        // 0x11ffb0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffac) {
            ctx->pc = 0x11FFD0u;
            goto label_11ffd0;
        }
    }
    ctx->pc = 0x11FFB4u;
label_11ffb4:
    // 0x11ffb4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11ffb8:
    // 0x11ffb8: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11ffbc:
    if (ctx->pc == 0x11FFBCu) {
        ctx->pc = 0x11FFC0u;
        goto label_11ffc0;
    }
    ctx->pc = 0x11FFB8u;
    {
        const bool branch_taken_0x11ffb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ffb8) {
            ctx->pc = 0x11FFCCu;
            goto label_11ffcc;
        }
    }
    ctx->pc = 0x11FFC0u;
label_11ffc0:
    // 0x11ffc0: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11ffc4:
    // 0x11ffc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11ffc8:
    // 0x11ffc8: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11ffcc:
    // 0x11ffcc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_11ffd0:
    // 0x11ffd0: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11ffd4:
    if (ctx->pc == 0x11FFD4u) {
        ctx->pc = 0x11FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFD0u;
        // 0x11ffd4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FFD8u;
        goto label_11ffd8;
    }
    ctx->pc = 0x11FFD0u;
    {
        const bool branch_taken_0x11ffd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFD0u;
        // 0x11ffd4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffd0) {
            ctx->pc = 0x11FFF4u;
            goto label_11fff4;
        }
    }
    ctx->pc = 0x11FFD8u;
label_11ffd8:
    // 0x11ffd8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11ffdc:
    // 0x11ffdc: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_11ffe0:
    if (ctx->pc == 0x11FFE0u) {
        ctx->pc = 0x11FFE4u;
        goto label_11ffe4;
    }
    ctx->pc = 0x11FFDCu;
    {
        const bool branch_taken_0x11ffdc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ffdc) {
            ctx->pc = 0x11FFF0u;
            goto label_11fff0;
        }
    }
    ctx->pc = 0x11FFE4u;
label_11ffe4:
    // 0x11ffe4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_11ffe8:
    // 0x11ffe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11ffec:
    // 0x11ffec: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_11fff0:
    // 0x11fff0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_11fff4:
    // 0x11fff4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_11fff8:
    if (ctx->pc == 0x11FFF8u) {
        ctx->pc = 0x11FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFF4u;
        // 0x11fff8: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FFFCu;
        goto label_11fffc;
    }
    ctx->pc = 0x11FFF4u;
    {
        const bool branch_taken_0x11fff4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFF4u;
        // 0x11fff8: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fff4) {
            ctx->pc = 0x120018u;
            goto label_120018;
        }
    }
    ctx->pc = 0x11FFFCu;
label_11fffc:
    // 0x11fffc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_120000:
    // 0x120000: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_120004:
    if (ctx->pc == 0x120004u) {
        ctx->pc = 0x120008u;
        goto label_120008;
    }
    ctx->pc = 0x120000u;
    {
        const bool branch_taken_0x120000 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x120000) {
            ctx->pc = 0x120014u;
            goto label_120014;
        }
    }
    ctx->pc = 0x120008u;
label_120008:
    // 0x120008: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x120008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_12000c:
    // 0x12000c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_120010:
    // 0x120010: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x120010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_120014:
    // 0x120014: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x120014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_120018:
    // 0x120018: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_12001c:
    if (ctx->pc == 0x12001Cu) {
        ctx->pc = 0x12001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120018u;
        // 0x12001c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120020u;
        goto label_120020;
    }
    ctx->pc = 0x120018u;
    {
        const bool branch_taken_0x120018 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x12001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120018u;
        // 0x12001c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120018) {
            ctx->pc = 0x12003Cu;
            goto label_12003c;
        }
    }
    ctx->pc = 0x120020u;
label_120020:
    // 0x120020: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x120020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_120024:
    // 0x120024: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_120028:
    if (ctx->pc == 0x120028u) {
        ctx->pc = 0x12002Cu;
        goto label_12002c;
    }
    ctx->pc = 0x120024u;
    {
        const bool branch_taken_0x120024 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x120024) {
            ctx->pc = 0x120038u;
            goto label_120038;
        }
    }
    ctx->pc = 0x12002Cu;
label_12002c:
    // 0x12002c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x12002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_120030:
    // 0x120030: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x120030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_120034:
    // 0x120034: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x120034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_120038:
    // 0x120038: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x120038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12003c:
    // 0x12003c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_120040:
    if (ctx->pc == 0x120040u) {
        ctx->pc = 0x120040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12003Cu;
        // 0x120040: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120044u;
        goto label_120044;
    }
    ctx->pc = 0x12003Cu;
    {
        const bool branch_taken_0x12003c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x120040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12003Cu;
        // 0x120040: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12003c) {
            ctx->pc = 0x120060u;
            goto label_120060;
        }
    }
    ctx->pc = 0x120044u;
label_120044:
    // 0x120044: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x120044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_120048:
    // 0x120048: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_12004c:
    if (ctx->pc == 0x12004Cu) {
        ctx->pc = 0x120050u;
        goto label_120050;
    }
    ctx->pc = 0x120048u;
    {
        const bool branch_taken_0x120048 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x120048) {
            ctx->pc = 0x12005Cu;
            goto label_12005c;
        }
    }
    ctx->pc = 0x120050u;
label_120050:
    // 0x120050: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x120050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_120054:
    // 0x120054: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x120054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_120058:
    // 0x120058: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x120058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_12005c:
    // 0x12005c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x12005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_120060:
    // 0x120060: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_120064:
    if (ctx->pc == 0x120064u) {
        ctx->pc = 0x120064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120060u;
        // 0x120064: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120068u;
        goto label_120068;
    }
    ctx->pc = 0x120060u;
    {
        const bool branch_taken_0x120060 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x120064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120060u;
        // 0x120064: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120060) {
            ctx->pc = 0x120084u;
            goto label_120084;
        }
    }
    ctx->pc = 0x120068u;
label_120068:
    // 0x120068: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x120068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_12006c:
    // 0x12006c: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_120070:
    if (ctx->pc == 0x120070u) {
        ctx->pc = 0x120074u;
        goto label_120074;
    }
    ctx->pc = 0x12006Cu;
    {
        const bool branch_taken_0x12006c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x12006c) {
            ctx->pc = 0x120080u;
            goto label_120080;
        }
    }
    ctx->pc = 0x120074u;
label_120074:
    // 0x120074: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x120074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_120078:
    // 0x120078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x120078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_12007c:
    // 0x12007c: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x12007cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_120080:
    // 0x120080: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x120080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_120084:
    // 0x120084: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_120088:
    if (ctx->pc == 0x120088u) {
        ctx->pc = 0x120088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120084u;
        // 0x120088: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12008Cu;
        goto label_12008c;
    }
    ctx->pc = 0x120084u;
    {
        const bool branch_taken_0x120084 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x120088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120084u;
        // 0x120088: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120084) {
            ctx->pc = 0x1200A8u;
            goto label_1200a8;
        }
    }
    ctx->pc = 0x12008Cu;
label_12008c:
    // 0x12008c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_120090:
    // 0x120090: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_120094:
    if (ctx->pc == 0x120094u) {
        ctx->pc = 0x120098u;
        goto label_120098;
    }
    ctx->pc = 0x120090u;
    {
        const bool branch_taken_0x120090 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x120090) {
            ctx->pc = 0x1200A4u;
            goto label_1200a4;
        }
    }
    ctx->pc = 0x120098u;
label_120098:
    // 0x120098: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x120098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_12009c:
    // 0x12009c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12009cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1200a0:
    // 0x1200a0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x1200a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_1200a4:
    // 0x1200a4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1200a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1200a8:
    // 0x1200a8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_1200ac:
    if (ctx->pc == 0x1200ACu) {
        ctx->pc = 0x1200ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200A8u;
        // 0x1200ac: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1200B0u;
        goto label_1200b0;
    }
    ctx->pc = 0x1200A8u;
    {
        const bool branch_taken_0x1200a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1200ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200A8u;
        // 0x1200ac: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200a8) {
            ctx->pc = 0x1200CCu;
            goto label_1200cc;
        }
    }
    ctx->pc = 0x1200B0u;
label_1200b0:
    // 0x1200b0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1200b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1200b4:
    // 0x1200b4: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1200b8:
    if (ctx->pc == 0x1200B8u) {
        ctx->pc = 0x1200BCu;
        goto label_1200bc;
    }
    ctx->pc = 0x1200B4u;
    {
        const bool branch_taken_0x1200b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1200b4) {
            ctx->pc = 0x1200C8u;
            goto label_1200c8;
        }
    }
    ctx->pc = 0x1200BCu;
label_1200bc:
    // 0x1200bc: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1200bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_1200c0:
    // 0x1200c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1200c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1200c4:
    // 0x1200c4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x1200c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_1200c8:
    // 0x1200c8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1200c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1200cc:
    // 0x1200cc: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
label_1200d0:
    if (ctx->pc == 0x1200D0u) {
        ctx->pc = 0x1200D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200CCu;
        // 0x1200d0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1200D4u;
        goto label_1200d4;
    }
    ctx->pc = 0x1200CCu;
    {
        const bool branch_taken_0x1200cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1200D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200CCu;
        // 0x1200d0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200cc) {
            ctx->pc = 0x1200E8u;
            goto label_1200e8;
        }
    }
    ctx->pc = 0x1200D4u;
label_1200d4:
    // 0x1200d4: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1200d8:
    if (ctx->pc == 0x1200D8u) {
        ctx->pc = 0x1200DCu;
        goto label_1200dc;
    }
    ctx->pc = 0x1200D4u;
    {
        const bool branch_taken_0x1200d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1200d4) {
            ctx->pc = 0x1200E8u;
            goto label_1200e8;
        }
    }
    ctx->pc = 0x1200DCu;
label_1200dc:
    // 0x1200dc: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1200dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_1200e0:
    // 0x1200e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1200e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1200e4:
    // 0x1200e4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x1200e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_1200e8:
    // 0x1200e8: 0xc048060  jal         func_120180
label_1200ec:
    if (ctx->pc == 0x1200ECu) {
        ctx->pc = 0x1200F0u;
        goto label_1200f0;
    }
    ctx->pc = 0x1200E8u;
    SET_GPR_U32(ctx, 31, 0x1200F0u);
    ctx->pc = 0x120180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120180u, 0x1200E8u, 0x1200F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200F0u;
label_1200f0:
    // 0x1200f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1200f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1200f4:
    // 0x1200f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1200f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1200f8:
    // 0x1200f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1200f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1200fc:
    // 0x1200fc: 0x3e00008  jr          $ra
label_120100:
    if (ctx->pc == 0x120100u) {
        ctx->pc = 0x120100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200FCu;
        // 0x120100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120104u;
        goto label_fallthrough_0x1200fc;
    }
    ctx->pc = 0x1200FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200FCu;
        // 0x120100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1200FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1200fc:
    ctx->pc = 0x120104u;
}
