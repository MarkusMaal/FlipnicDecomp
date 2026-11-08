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

// Function: FUN_0016cbf0
// Address: 0x16cbf0 - 0x16d1c4
void FUN_0016cbf0_0x16cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016cbf0_0x16cbf0");
#endif

    switch (ctx->pc) {
        case 0x16cbf0u: goto label_16cbf0;
        case 0x16cbf4u: goto label_16cbf4;
        case 0x16cbf8u: goto label_16cbf8;
        case 0x16cbfcu: goto label_16cbfc;
        case 0x16cc00u: goto label_16cc00;
        case 0x16cc04u: goto label_16cc04;
        case 0x16cc08u: goto label_16cc08;
        case 0x16cc0cu: goto label_16cc0c;
        case 0x16cc10u: goto label_16cc10;
        case 0x16cc14u: goto label_16cc14;
        case 0x16cc18u: goto label_16cc18;
        case 0x16cc1cu: goto label_16cc1c;
        case 0x16cc20u: goto label_16cc20;
        case 0x16cc24u: goto label_16cc24;
        case 0x16cc28u: goto label_16cc28;
        case 0x16cc2cu: goto label_16cc2c;
        case 0x16cc30u: goto label_16cc30;
        case 0x16cc34u: goto label_16cc34;
        case 0x16cc38u: goto label_16cc38;
        case 0x16cc3cu: goto label_16cc3c;
        case 0x16cc40u: goto label_16cc40;
        case 0x16cc44u: goto label_16cc44;
        case 0x16cc48u: goto label_16cc48;
        case 0x16cc4cu: goto label_16cc4c;
        case 0x16cc50u: goto label_16cc50;
        case 0x16cc54u: goto label_16cc54;
        case 0x16cc58u: goto label_16cc58;
        case 0x16cc5cu: goto label_16cc5c;
        case 0x16cc60u: goto label_16cc60;
        case 0x16cc64u: goto label_16cc64;
        case 0x16cc68u: goto label_16cc68;
        case 0x16cc6cu: goto label_16cc6c;
        case 0x16cc70u: goto label_16cc70;
        case 0x16cc74u: goto label_16cc74;
        case 0x16cc78u: goto label_16cc78;
        case 0x16cc7cu: goto label_16cc7c;
        case 0x16cc80u: goto label_16cc80;
        case 0x16cc84u: goto label_16cc84;
        case 0x16cc88u: goto label_16cc88;
        case 0x16cc8cu: goto label_16cc8c;
        case 0x16cc90u: goto label_16cc90;
        case 0x16cc94u: goto label_16cc94;
        case 0x16cc98u: goto label_16cc98;
        case 0x16cc9cu: goto label_16cc9c;
        case 0x16cca0u: goto label_16cca0;
        case 0x16cca4u: goto label_16cca4;
        case 0x16cca8u: goto label_16cca8;
        case 0x16ccacu: goto label_16ccac;
        case 0x16ccb0u: goto label_16ccb0;
        case 0x16ccb4u: goto label_16ccb4;
        case 0x16ccb8u: goto label_16ccb8;
        case 0x16ccbcu: goto label_16ccbc;
        case 0x16ccc0u: goto label_16ccc0;
        case 0x16ccc4u: goto label_16ccc4;
        case 0x16ccc8u: goto label_16ccc8;
        case 0x16ccccu: goto label_16cccc;
        case 0x16ccd0u: goto label_16ccd0;
        case 0x16ccd4u: goto label_16ccd4;
        case 0x16ccd8u: goto label_16ccd8;
        case 0x16ccdcu: goto label_16ccdc;
        case 0x16cce0u: goto label_16cce0;
        case 0x16cce4u: goto label_16cce4;
        case 0x16cce8u: goto label_16cce8;
        case 0x16ccecu: goto label_16ccec;
        case 0x16ccf0u: goto label_16ccf0;
        case 0x16ccf4u: goto label_16ccf4;
        case 0x16ccf8u: goto label_16ccf8;
        case 0x16ccfcu: goto label_16ccfc;
        case 0x16cd00u: goto label_16cd00;
        case 0x16cd04u: goto label_16cd04;
        case 0x16cd08u: goto label_16cd08;
        case 0x16cd0cu: goto label_16cd0c;
        case 0x16cd10u: goto label_16cd10;
        case 0x16cd14u: goto label_16cd14;
        case 0x16cd18u: goto label_16cd18;
        case 0x16cd1cu: goto label_16cd1c;
        case 0x16cd20u: goto label_16cd20;
        case 0x16cd24u: goto label_16cd24;
        case 0x16cd28u: goto label_16cd28;
        case 0x16cd2cu: goto label_16cd2c;
        case 0x16cd30u: goto label_16cd30;
        case 0x16cd34u: goto label_16cd34;
        case 0x16cd38u: goto label_16cd38;
        case 0x16cd3cu: goto label_16cd3c;
        case 0x16cd40u: goto label_16cd40;
        case 0x16cd44u: goto label_16cd44;
        case 0x16cd48u: goto label_16cd48;
        case 0x16cd4cu: goto label_16cd4c;
        case 0x16cd50u: goto label_16cd50;
        case 0x16cd54u: goto label_16cd54;
        case 0x16cd58u: goto label_16cd58;
        case 0x16cd5cu: goto label_16cd5c;
        case 0x16cd60u: goto label_16cd60;
        case 0x16cd64u: goto label_16cd64;
        case 0x16cd68u: goto label_16cd68;
        case 0x16cd6cu: goto label_16cd6c;
        case 0x16cd70u: goto label_16cd70;
        case 0x16cd74u: goto label_16cd74;
        case 0x16cd78u: goto label_16cd78;
        case 0x16cd7cu: goto label_16cd7c;
        case 0x16cd80u: goto label_16cd80;
        case 0x16cd84u: goto label_16cd84;
        case 0x16cd88u: goto label_16cd88;
        case 0x16cd8cu: goto label_16cd8c;
        case 0x16cd90u: goto label_16cd90;
        case 0x16cd94u: goto label_16cd94;
        case 0x16cd98u: goto label_16cd98;
        case 0x16cd9cu: goto label_16cd9c;
        case 0x16cda0u: goto label_16cda0;
        case 0x16cda4u: goto label_16cda4;
        case 0x16cda8u: goto label_16cda8;
        case 0x16cdacu: goto label_16cdac;
        case 0x16cdb0u: goto label_16cdb0;
        case 0x16cdb4u: goto label_16cdb4;
        case 0x16cdb8u: goto label_16cdb8;
        case 0x16cdbcu: goto label_16cdbc;
        case 0x16cdc0u: goto label_16cdc0;
        case 0x16cdc4u: goto label_16cdc4;
        case 0x16cdc8u: goto label_16cdc8;
        case 0x16cdccu: goto label_16cdcc;
        case 0x16cdd0u: goto label_16cdd0;
        case 0x16cdd4u: goto label_16cdd4;
        case 0x16cdd8u: goto label_16cdd8;
        case 0x16cddcu: goto label_16cddc;
        case 0x16cde0u: goto label_16cde0;
        case 0x16cde4u: goto label_16cde4;
        case 0x16cde8u: goto label_16cde8;
        case 0x16cdecu: goto label_16cdec;
        case 0x16cdf0u: goto label_16cdf0;
        case 0x16cdf4u: goto label_16cdf4;
        case 0x16cdf8u: goto label_16cdf8;
        case 0x16cdfcu: goto label_16cdfc;
        case 0x16ce00u: goto label_16ce00;
        case 0x16ce04u: goto label_16ce04;
        case 0x16ce08u: goto label_16ce08;
        case 0x16ce0cu: goto label_16ce0c;
        case 0x16ce10u: goto label_16ce10;
        case 0x16ce14u: goto label_16ce14;
        case 0x16ce18u: goto label_16ce18;
        case 0x16ce1cu: goto label_16ce1c;
        case 0x16ce20u: goto label_16ce20;
        case 0x16ce24u: goto label_16ce24;
        case 0x16ce28u: goto label_16ce28;
        case 0x16ce2cu: goto label_16ce2c;
        case 0x16ce30u: goto label_16ce30;
        case 0x16ce34u: goto label_16ce34;
        case 0x16ce38u: goto label_16ce38;
        case 0x16ce3cu: goto label_16ce3c;
        case 0x16ce40u: goto label_16ce40;
        case 0x16ce44u: goto label_16ce44;
        case 0x16ce48u: goto label_16ce48;
        case 0x16ce4cu: goto label_16ce4c;
        case 0x16ce50u: goto label_16ce50;
        case 0x16ce54u: goto label_16ce54;
        case 0x16ce58u: goto label_16ce58;
        case 0x16ce5cu: goto label_16ce5c;
        case 0x16ce60u: goto label_16ce60;
        case 0x16ce64u: goto label_16ce64;
        case 0x16ce68u: goto label_16ce68;
        case 0x16ce6cu: goto label_16ce6c;
        case 0x16ce70u: goto label_16ce70;
        case 0x16ce74u: goto label_16ce74;
        case 0x16ce78u: goto label_16ce78;
        case 0x16ce7cu: goto label_16ce7c;
        case 0x16ce80u: goto label_16ce80;
        case 0x16ce84u: goto label_16ce84;
        case 0x16ce88u: goto label_16ce88;
        case 0x16ce8cu: goto label_16ce8c;
        case 0x16ce90u: goto label_16ce90;
        case 0x16ce94u: goto label_16ce94;
        case 0x16ce98u: goto label_16ce98;
        case 0x16ce9cu: goto label_16ce9c;
        case 0x16cea0u: goto label_16cea0;
        case 0x16cea4u: goto label_16cea4;
        case 0x16cea8u: goto label_16cea8;
        case 0x16ceacu: goto label_16ceac;
        case 0x16ceb0u: goto label_16ceb0;
        case 0x16ceb4u: goto label_16ceb4;
        case 0x16ceb8u: goto label_16ceb8;
        case 0x16cebcu: goto label_16cebc;
        case 0x16cec0u: goto label_16cec0;
        case 0x16cec4u: goto label_16cec4;
        case 0x16cec8u: goto label_16cec8;
        case 0x16ceccu: goto label_16cecc;
        case 0x16ced0u: goto label_16ced0;
        case 0x16ced4u: goto label_16ced4;
        case 0x16ced8u: goto label_16ced8;
        case 0x16cedcu: goto label_16cedc;
        case 0x16cee0u: goto label_16cee0;
        case 0x16cee4u: goto label_16cee4;
        case 0x16cee8u: goto label_16cee8;
        case 0x16ceecu: goto label_16ceec;
        case 0x16cef0u: goto label_16cef0;
        case 0x16cef4u: goto label_16cef4;
        case 0x16cef8u: goto label_16cef8;
        case 0x16cefcu: goto label_16cefc;
        case 0x16cf00u: goto label_16cf00;
        case 0x16cf04u: goto label_16cf04;
        case 0x16cf08u: goto label_16cf08;
        case 0x16cf0cu: goto label_16cf0c;
        case 0x16cf10u: goto label_16cf10;
        case 0x16cf14u: goto label_16cf14;
        case 0x16cf18u: goto label_16cf18;
        case 0x16cf1cu: goto label_16cf1c;
        case 0x16cf20u: goto label_16cf20;
        case 0x16cf24u: goto label_16cf24;
        case 0x16cf28u: goto label_16cf28;
        case 0x16cf2cu: goto label_16cf2c;
        case 0x16cf30u: goto label_16cf30;
        case 0x16cf34u: goto label_16cf34;
        case 0x16cf38u: goto label_16cf38;
        case 0x16cf3cu: goto label_16cf3c;
        case 0x16cf40u: goto label_16cf40;
        case 0x16cf44u: goto label_16cf44;
        case 0x16cf48u: goto label_16cf48;
        case 0x16cf4cu: goto label_16cf4c;
        case 0x16cf50u: goto label_16cf50;
        case 0x16cf54u: goto label_16cf54;
        case 0x16cf58u: goto label_16cf58;
        case 0x16cf5cu: goto label_16cf5c;
        case 0x16cf60u: goto label_16cf60;
        case 0x16cf64u: goto label_16cf64;
        case 0x16cf68u: goto label_16cf68;
        case 0x16cf6cu: goto label_16cf6c;
        case 0x16cf70u: goto label_16cf70;
        case 0x16cf74u: goto label_16cf74;
        case 0x16cf78u: goto label_16cf78;
        case 0x16cf7cu: goto label_16cf7c;
        case 0x16cf80u: goto label_16cf80;
        case 0x16cf84u: goto label_16cf84;
        case 0x16cf88u: goto label_16cf88;
        case 0x16cf8cu: goto label_16cf8c;
        case 0x16cf90u: goto label_16cf90;
        case 0x16cf94u: goto label_16cf94;
        case 0x16cf98u: goto label_16cf98;
        case 0x16cf9cu: goto label_16cf9c;
        case 0x16cfa0u: goto label_16cfa0;
        case 0x16cfa4u: goto label_16cfa4;
        case 0x16cfa8u: goto label_16cfa8;
        case 0x16cfacu: goto label_16cfac;
        case 0x16cfb0u: goto label_16cfb0;
        case 0x16cfb4u: goto label_16cfb4;
        case 0x16cfb8u: goto label_16cfb8;
        case 0x16cfbcu: goto label_16cfbc;
        case 0x16cfc0u: goto label_16cfc0;
        case 0x16cfc4u: goto label_16cfc4;
        case 0x16cfc8u: goto label_16cfc8;
        case 0x16cfccu: goto label_16cfcc;
        case 0x16cfd0u: goto label_16cfd0;
        case 0x16cfd4u: goto label_16cfd4;
        case 0x16cfd8u: goto label_16cfd8;
        case 0x16cfdcu: goto label_16cfdc;
        case 0x16cfe0u: goto label_16cfe0;
        case 0x16cfe4u: goto label_16cfe4;
        case 0x16cfe8u: goto label_16cfe8;
        case 0x16cfecu: goto label_16cfec;
        case 0x16cff0u: goto label_16cff0;
        case 0x16cff4u: goto label_16cff4;
        case 0x16cff8u: goto label_16cff8;
        case 0x16cffcu: goto label_16cffc;
        case 0x16d000u: goto label_16d000;
        case 0x16d004u: goto label_16d004;
        case 0x16d008u: goto label_16d008;
        case 0x16d00cu: goto label_16d00c;
        case 0x16d010u: goto label_16d010;
        case 0x16d014u: goto label_16d014;
        case 0x16d018u: goto label_16d018;
        case 0x16d01cu: goto label_16d01c;
        case 0x16d020u: goto label_16d020;
        case 0x16d024u: goto label_16d024;
        case 0x16d028u: goto label_16d028;
        case 0x16d02cu: goto label_16d02c;
        case 0x16d030u: goto label_16d030;
        case 0x16d034u: goto label_16d034;
        case 0x16d038u: goto label_16d038;
        case 0x16d03cu: goto label_16d03c;
        case 0x16d040u: goto label_16d040;
        case 0x16d044u: goto label_16d044;
        case 0x16d048u: goto label_16d048;
        case 0x16d04cu: goto label_16d04c;
        case 0x16d050u: goto label_16d050;
        case 0x16d054u: goto label_16d054;
        case 0x16d058u: goto label_16d058;
        case 0x16d05cu: goto label_16d05c;
        case 0x16d060u: goto label_16d060;
        case 0x16d064u: goto label_16d064;
        case 0x16d068u: goto label_16d068;
        case 0x16d06cu: goto label_16d06c;
        case 0x16d070u: goto label_16d070;
        case 0x16d074u: goto label_16d074;
        case 0x16d078u: goto label_16d078;
        case 0x16d07cu: goto label_16d07c;
        case 0x16d080u: goto label_16d080;
        case 0x16d084u: goto label_16d084;
        case 0x16d088u: goto label_16d088;
        case 0x16d08cu: goto label_16d08c;
        case 0x16d090u: goto label_16d090;
        case 0x16d094u: goto label_16d094;
        case 0x16d098u: goto label_16d098;
        case 0x16d09cu: goto label_16d09c;
        case 0x16d0a0u: goto label_16d0a0;
        case 0x16d0a4u: goto label_16d0a4;
        case 0x16d0a8u: goto label_16d0a8;
        case 0x16d0acu: goto label_16d0ac;
        case 0x16d0b0u: goto label_16d0b0;
        case 0x16d0b4u: goto label_16d0b4;
        case 0x16d0b8u: goto label_16d0b8;
        case 0x16d0bcu: goto label_16d0bc;
        case 0x16d0c0u: goto label_16d0c0;
        case 0x16d0c4u: goto label_16d0c4;
        case 0x16d0c8u: goto label_16d0c8;
        case 0x16d0ccu: goto label_16d0cc;
        case 0x16d0d0u: goto label_16d0d0;
        case 0x16d0d4u: goto label_16d0d4;
        case 0x16d0d8u: goto label_16d0d8;
        case 0x16d0dcu: goto label_16d0dc;
        case 0x16d0e0u: goto label_16d0e0;
        case 0x16d0e4u: goto label_16d0e4;
        case 0x16d0e8u: goto label_16d0e8;
        case 0x16d0ecu: goto label_16d0ec;
        case 0x16d0f0u: goto label_16d0f0;
        case 0x16d0f4u: goto label_16d0f4;
        case 0x16d0f8u: goto label_16d0f8;
        case 0x16d0fcu: goto label_16d0fc;
        case 0x16d100u: goto label_16d100;
        case 0x16d104u: goto label_16d104;
        case 0x16d108u: goto label_16d108;
        case 0x16d10cu: goto label_16d10c;
        case 0x16d110u: goto label_16d110;
        case 0x16d114u: goto label_16d114;
        case 0x16d118u: goto label_16d118;
        case 0x16d11cu: goto label_16d11c;
        case 0x16d120u: goto label_16d120;
        case 0x16d124u: goto label_16d124;
        case 0x16d128u: goto label_16d128;
        case 0x16d12cu: goto label_16d12c;
        case 0x16d130u: goto label_16d130;
        case 0x16d134u: goto label_16d134;
        case 0x16d138u: goto label_16d138;
        case 0x16d13cu: goto label_16d13c;
        case 0x16d140u: goto label_16d140;
        case 0x16d144u: goto label_16d144;
        case 0x16d148u: goto label_16d148;
        case 0x16d14cu: goto label_16d14c;
        case 0x16d150u: goto label_16d150;
        case 0x16d154u: goto label_16d154;
        case 0x16d158u: goto label_16d158;
        case 0x16d15cu: goto label_16d15c;
        case 0x16d160u: goto label_16d160;
        case 0x16d164u: goto label_16d164;
        case 0x16d168u: goto label_16d168;
        case 0x16d16cu: goto label_16d16c;
        case 0x16d170u: goto label_16d170;
        case 0x16d174u: goto label_16d174;
        case 0x16d178u: goto label_16d178;
        case 0x16d17cu: goto label_16d17c;
        case 0x16d180u: goto label_16d180;
        case 0x16d184u: goto label_16d184;
        case 0x16d188u: goto label_16d188;
        case 0x16d18cu: goto label_16d18c;
        case 0x16d190u: goto label_16d190;
        case 0x16d194u: goto label_16d194;
        case 0x16d198u: goto label_16d198;
        case 0x16d19cu: goto label_16d19c;
        case 0x16d1a0u: goto label_16d1a0;
        case 0x16d1a4u: goto label_16d1a4;
        case 0x16d1a8u: goto label_16d1a8;
        case 0x16d1acu: goto label_16d1ac;
        case 0x16d1b0u: goto label_16d1b0;
        case 0x16d1b4u: goto label_16d1b4;
        case 0x16d1b8u: goto label_16d1b8;
        case 0x16d1bcu: goto label_16d1bc;
        case 0x16d1c0u: goto label_16d1c0;
        default: break;
    }

    ctx->pc = 0x16cbf0u;

label_16cbf0:
    // 0x16cbf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16cbf4:
    // 0x16cbf4: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
label_16cbf8:
    // 0x16cbf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16cbfc:
    // 0x16cbfc: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16cbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_16cc00:
    // 0x16cc00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16cc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16cc04:
    // 0x16cc04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16cc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cc08:
    // 0x16cc08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16cc0c:
    // 0x16cc0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16cc10:
    // 0x16cc10: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_16cc14:
    // 0x16cc14: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16cc14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16cc18:
    // 0x16cc18: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_16cc1c:
    // 0x16cc1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16cc1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16cc20:
    // 0x16cc20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16cc20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16cc24:
    // 0x16cc24: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x16cc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16cc28:
    // 0x16cc28: 0xc4820240  lwc1        $f2, 0x240($a0)
    ctx->pc = 0x16cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16cc2c:
    // 0x16cc2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16cc2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cc30:
    // 0x16cc30: 0x0  nop
    ctx->pc = 0x16cc30u;
    // NOP
label_16cc34:
    // 0x16cc34: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16cc34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_16cc38:
    // 0x16cc38: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16cc38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_16cc3c:
    // 0x16cc3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16cc3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cc40:
    // 0x16cc40: 0x0  nop
    ctx->pc = 0x16cc40u;
    // NOP
label_16cc44:
    // 0x16cc44: 0x45010070  bc1t        . + 4 + (0x70 << 2)
label_16cc48:
    if (ctx->pc == 0x16CC48u) {
        ctx->pc = 0x16CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC44u;
        // 0x16cc48: 0xe4810240  swc1        $f1, 0x240($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 576), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CC4Cu;
        goto label_16cc4c;
    }
    ctx->pc = 0x16CC44u;
    {
        const bool branch_taken_0x16cc44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC44u;
        // 0x16cc48: 0xe4810240  swc1        $f1, 0x240($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc44) {
            ctx->pc = 0x16CE08u;
            goto label_16ce08;
        }
    }
    ctx->pc = 0x16CC4Cu;
label_16cc4c:
    // 0x16cc4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16cc4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16cc50:
    // 0x16cc50: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x16cc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
label_16cc54:
    // 0x16cc54: 0x86230220  lh          $v1, 0x220($s1)
    ctx->pc = 0x16cc54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
label_16cc58:
    // 0x16cc58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16cc5c:
    // 0x16cc5c: 0xa6230220  sh          $v1, 0x220($s1)
    ctx->pc = 0x16cc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 3));
label_16cc60:
    // 0x16cc60: 0x86250220  lh          $a1, 0x220($s1)
    ctx->pc = 0x16cc60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
label_16cc64:
    // 0x16cc64: 0x86230222  lh          $v1, 0x222($s1)
    ctx->pc = 0x16cc64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
label_16cc68:
    // 0x16cc68: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16cc68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_16cc6c:
    // 0x16cc6c: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_16cc70:
    if (ctx->pc == 0x16CC70u) {
        ctx->pc = 0x16CC74u;
        goto label_16cc74;
    }
    ctx->pc = 0x16CC6Cu;
    {
        const bool branch_taken_0x16cc6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc6c) {
            ctx->pc = 0x16CE08u;
            goto label_16ce08;
        }
    }
    ctx->pc = 0x16CC74u;
label_16cc74:
    // 0x16cc74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16cc78:
    // 0x16cc78: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16cc78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_16cc7c:
    // 0x16cc7c: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_16cc80:
    if (ctx->pc == 0x16CC80u) {
        ctx->pc = 0x16CC84u;
        goto label_16cc84;
    }
    ctx->pc = 0x16CC7Cu;
    {
        const bool branch_taken_0x16cc7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc7c) {
            ctx->pc = 0x16CD04u;
            goto label_16cd04;
        }
    }
    ctx->pc = 0x16CC84u;
label_16cc84:
    // 0x16cc84: 0xa6200220  sh          $zero, 0x220($s1)
    ctx->pc = 0x16cc84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 0));
label_16cc88:
    // 0x16cc88: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16cc8c:
    // 0x16cc8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16cc90:
    if (ctx->pc == 0x16CC90u) {
        ctx->pc = 0x16CC94u;
        goto label_16cc94;
    }
    ctx->pc = 0x16CC8Cu;
    {
        const bool branch_taken_0x16cc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc8c) {
            ctx->pc = 0x16CCACu;
            goto label_16ccac;
        }
    }
    ctx->pc = 0x16CC94u;
label_16cc94:
    // 0x16cc94: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16cc94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16cc98:
    // 0x16cc98: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cc98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16cc9c:
    // 0x16cc9c: 0x320f809  jalr        $t9
label_16cca0:
    if (ctx->pc == 0x16CCA0u) {
        ctx->pc = 0x16CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC9Cu;
        // 0x16cca0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCA4u;
        goto label_16cca4;
    }
    ctx->pc = 0x16CC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CCA4u);
        ctx->pc = 0x16CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC9Cu;
        // 0x16cca0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CC9Cu, 0x16CCA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CCA4u;
label_16cca4:
    // 0x16cca4: 0x10000006  b           . + 4 + (0x6 << 2)
label_16cca8:
    if (ctx->pc == 0x16CCA8u) {
        ctx->pc = 0x16CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCA4u;
        // 0x16cca8: 0xc6210210  lwc1        $f1, 0x210($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCACu;
        goto label_16ccac;
    }
    ctx->pc = 0x16CCA4u;
    {
        const bool branch_taken_0x16cca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCA4u;
        // 0x16cca8: 0xc6210210  lwc1        $f1, 0x210($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cca4) {
            ctx->pc = 0x16CCC0u;
            goto label_16ccc0;
        }
    }
    ctx->pc = 0x16CCACu;
label_16ccac:
    // 0x16ccac: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16ccacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16ccb0:
    // 0x16ccb0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16ccb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16ccb4:
    // 0x16ccb4: 0x320f809  jalr        $t9
label_16ccb8:
    if (ctx->pc == 0x16CCB8u) {
        ctx->pc = 0x16CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCB4u;
        // 0x16ccb8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCBCu;
        goto label_16ccbc;
    }
    ctx->pc = 0x16CCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CCBCu);
        ctx->pc = 0x16CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCB4u;
        // 0x16ccb8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CCB4u, 0x16CCBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CCBCu;
label_16ccbc:
    // 0x16ccbc: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16ccc0:
    // 0x16ccc0: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ccc4:
    // 0x16ccc4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16ccc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16ccc8:
    // 0x16ccc8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16ccc8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16cccc:
    // 0x16cccc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16ccd0:
    // 0x16ccd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ccd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ccd4:
    // 0x16ccd4: 0x0  nop
    ctx->pc = 0x16ccd4u;
    // NOP
label_16ccd8:
    // 0x16ccd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ccd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ccdc:
    // 0x16ccdc: 0x0  nop
    ctx->pc = 0x16ccdcu;
    // NOP
label_16cce0:
    // 0x16cce0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16cce4:
    if (ctx->pc == 0x16CCE4u) {
        ctx->pc = 0x16CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCE0u;
        // 0x16cce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCE8u;
        goto label_16cce8;
    }
    ctx->pc = 0x16CCE0u;
    {
        const bool branch_taken_0x16cce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCE0u;
        // 0x16cce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cce0) {
            ctx->pc = 0x16CCECu;
            goto label_16ccec;
        }
    }
    ctx->pc = 0x16CCE8u;
label_16cce8:
    // 0x16cce8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ccec:
    // 0x16ccec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ccf0:
    // 0x16ccf0: 0x14830045  bne         $a0, $v1, . + 4 + (0x45 << 2)
label_16ccf4:
    if (ctx->pc == 0x16CCF4u) {
        ctx->pc = 0x16CCF8u;
        goto label_16ccf8;
    }
    ctx->pc = 0x16CCF0u;
    {
        const bool branch_taken_0x16ccf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ccf0) {
            ctx->pc = 0x16CE08u;
            goto label_16ce08;
        }
    }
    ctx->pc = 0x16CCF8u;
label_16ccf8:
    // 0x16ccf8: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ccfc:
    // 0x16ccfc: 0x10000042  b           . + 4 + (0x42 << 2)
label_16cd00:
    if (ctx->pc == 0x16CD00u) {
        ctx->pc = 0x16CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCFCu;
        // 0x16cd00: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD04u;
        goto label_16cd04;
    }
    ctx->pc = 0x16CCFCu;
    {
        const bool branch_taken_0x16ccfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCFCu;
        // 0x16cd00: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccfc) {
            ctx->pc = 0x16CE08u;
            goto label_16ce08;
        }
    }
    ctx->pc = 0x16CD04u;
label_16cd04:
    // 0x16cd04: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16cd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cd08:
    // 0x16cd08: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cd0c:
    // 0x16cd0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16cd0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16cd10:
    // 0x16cd10: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16cd10u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16cd14:
    // 0x16cd14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16cd18:
    // 0x16cd18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16cd18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cd1c:
    // 0x16cd1c: 0x0  nop
    ctx->pc = 0x16cd1cu;
    // NOP
label_16cd20:
    // 0x16cd20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16cd20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cd24:
    // 0x16cd24: 0x0  nop
    ctx->pc = 0x16cd24u;
    // NOP
label_16cd28:
    // 0x16cd28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16cd2c:
    if (ctx->pc == 0x16CD2Cu) {
        ctx->pc = 0x16CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD28u;
        // 0x16cd2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD30u;
        goto label_16cd30;
    }
    ctx->pc = 0x16CD28u;
    {
        const bool branch_taken_0x16cd28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD28u;
        // 0x16cd2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd28) {
            ctx->pc = 0x16CD34u;
            goto label_16cd34;
        }
    }
    ctx->pc = 0x16CD30u;
label_16cd30:
    // 0x16cd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cd34:
    // 0x16cd34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cd38:
    // 0x16cd38: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
label_16cd3c:
    if (ctx->pc == 0x16CD3Cu) {
        ctx->pc = 0x16CD40u;
        goto label_16cd40;
    }
    ctx->pc = 0x16CD38u;
    {
        const bool branch_taken_0x16cd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16cd38) {
            ctx->pc = 0x16CD84u;
            goto label_16cd84;
        }
    }
    ctx->pc = 0x16CD40u;
label_16cd40:
    // 0x16cd40: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16cd44:
    // 0x16cd44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16cd48:
    if (ctx->pc == 0x16CD48u) {
        ctx->pc = 0x16CD4Cu;
        goto label_16cd4c;
    }
    ctx->pc = 0x16CD44u;
    {
        const bool branch_taken_0x16cd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd44) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CD4Cu;
label_16cd4c:
    // 0x16cd4c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cd4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cd50:
    // 0x16cd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cd54:
    // 0x16cd54: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cd54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16cd58:
    // 0x16cd58: 0x320f809  jalr        $t9
label_16cd5c:
    if (ctx->pc == 0x16CD5Cu) {
        ctx->pc = 0x16CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD58u;
        // 0x16cd5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD60u;
        goto label_16cd60;
    }
    ctx->pc = 0x16CD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CD60u);
        ctx->pc = 0x16CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD58u;
        // 0x16cd5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CD58u, 0x16CD60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CD60u;
label_16cd60:
    // 0x16cd60: 0x1000002a  b           . + 4 + (0x2A << 2)
label_16cd64:
    if (ctx->pc == 0x16CD64u) {
        ctx->pc = 0x16CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD60u;
        // 0x16cd64: 0x8e230230  lw          $v1, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD68u;
        goto label_16cd68;
    }
    ctx->pc = 0x16CD60u;
    {
        const bool branch_taken_0x16cd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD60u;
        // 0x16cd64: 0x8e230230  lw          $v1, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd60) {
            ctx->pc = 0x16CE0Cu;
            goto label_16ce0c;
        }
    }
    ctx->pc = 0x16CD68u;
label_16cd68:
    // 0x16cd68: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cd6c:
    // 0x16cd6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cd70:
    // 0x16cd70: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cd70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16cd74:
    // 0x16cd74: 0x320f809  jalr        $t9
label_16cd78:
    if (ctx->pc == 0x16CD78u) {
        ctx->pc = 0x16CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD74u;
        // 0x16cd78: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD7Cu;
        goto label_16cd7c;
    }
    ctx->pc = 0x16CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CD7Cu);
        ctx->pc = 0x16CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD74u;
        // 0x16cd78: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CD74u, 0x16CD7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CD7Cu;
label_16cd7c:
    // 0x16cd7c: 0x10000022  b           . + 4 + (0x22 << 2)
label_16cd80:
    if (ctx->pc == 0x16CD80u) {
        ctx->pc = 0x16CD84u;
        goto label_16cd84;
    }
    ctx->pc = 0x16CD7Cu;
    {
        const bool branch_taken_0x16cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd7c) {
            ctx->pc = 0x16CE08u;
            goto label_16ce08;
        }
    }
    ctx->pc = 0x16CD84u;
label_16cd84:
    // 0x16cd84: 0xc621022c  lwc1        $f1, 0x22C($s1)
    ctx->pc = 0x16cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cd88:
    // 0x16cd88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16cd88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cd8c:
    // 0x16cd8c: 0x0  nop
    ctx->pc = 0x16cd8cu;
    // NOP
label_16cd90:
    // 0x16cd90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16cd90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16cd94:
    // 0x16cd94: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16cd94u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16cd98:
    // 0x16cd98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16cd9c:
    // 0x16cd9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16cd9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cda0:
    // 0x16cda0: 0x0  nop
    ctx->pc = 0x16cda0u;
    // NOP
label_16cda4:
    // 0x16cda4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16cda4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cda8:
    // 0x16cda8: 0x0  nop
    ctx->pc = 0x16cda8u;
    // NOP
label_16cdac:
    // 0x16cdac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_16cdb0:
    if (ctx->pc == 0x16CDB0u) {
        ctx->pc = 0x16CDB4u;
        goto label_16cdb4;
    }
    ctx->pc = 0x16CDACu;
    {
        const bool branch_taken_0x16cdac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cdac) {
            ctx->pc = 0x16CDBCu;
            goto label_16cdbc;
        }
    }
    ctx->pc = 0x16CDB4u;
label_16cdb4:
    // 0x16cdb4: 0x10000003  b           . + 4 + (0x3 << 2)
label_16cdb8:
    if (ctx->pc == 0x16CDB8u) {
        ctx->pc = 0x16CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDB4u;
        // 0x16cdb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDBCu;
        goto label_16cdbc;
    }
    ctx->pc = 0x16CDB4u;
    {
        const bool branch_taken_0x16cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDB4u;
        // 0x16cdb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdb4) {
            ctx->pc = 0x16CDC4u;
            goto label_16cdc4;
        }
    }
    ctx->pc = 0x16CDBCu;
label_16cdbc:
    // 0x16cdbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16cdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cdc0:
    // 0x16cdc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cdc4:
    // 0x16cdc4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_16cdc8:
    if (ctx->pc == 0x16CDC8u) {
        ctx->pc = 0x16CDCCu;
        goto label_16cdcc;
    }
    ctx->pc = 0x16CDC4u;
    {
        const bool branch_taken_0x16cdc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16cdc4) {
            ctx->pc = 0x16CE08u;
            goto label_16ce08;
        }
    }
    ctx->pc = 0x16CDCCu;
label_16cdcc:
    // 0x16cdcc: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16cdd0:
    // 0x16cdd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16cdd4:
    if (ctx->pc == 0x16CDD4u) {
        ctx->pc = 0x16CDD8u;
        goto label_16cdd8;
    }
    ctx->pc = 0x16CDD0u;
    {
        const bool branch_taken_0x16cdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cdd0) {
            ctx->pc = 0x16CDF4u;
            goto label_16cdf4;
        }
    }
    ctx->pc = 0x16CDD8u;
label_16cdd8:
    // 0x16cdd8: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cdd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cddc:
    // 0x16cddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cde0:
    // 0x16cde0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cde0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16cde4:
    // 0x16cde4: 0x320f809  jalr        $t9
label_16cde8:
    if (ctx->pc == 0x16CDE8u) {
        ctx->pc = 0x16CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDE4u;
        // 0x16cde8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDECu;
        goto label_16cdec;
    }
    ctx->pc = 0x16CDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CDECu);
        ctx->pc = 0x16CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDE4u;
        // 0x16cde8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CDE4u, 0x16CDECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CDECu;
label_16cdec:
    // 0x16cdec: 0x10000006  b           . + 4 + (0x6 << 2)
label_16cdf0:
    if (ctx->pc == 0x16CDF0u) {
        ctx->pc = 0x16CDF4u;
        goto label_16cdf4;
    }
    ctx->pc = 0x16CDECu;
    {
        const bool branch_taken_0x16cdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cdec) {
            ctx->pc = 0x16CE08u;
            goto label_16ce08;
        }
    }
    ctx->pc = 0x16CDF4u;
label_16cdf4:
    // 0x16cdf4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cdf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cdf8:
    // 0x16cdf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cdfc:
    // 0x16cdfc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cdfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16ce00:
    // 0x16ce00: 0x320f809  jalr        $t9
label_16ce04:
    if (ctx->pc == 0x16CE04u) {
        ctx->pc = 0x16CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE00u;
        // 0x16ce04: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE08u;
        goto label_16ce08;
    }
    ctx->pc = 0x16CE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CE08u);
        ctx->pc = 0x16CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE00u;
        // 0x16ce04: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CE00u, 0x16CE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CE08u;
label_16ce08:
    // 0x16ce08: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x16ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16ce0c:
    // 0x16ce0c: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
label_16ce10:
    if (ctx->pc == 0x16CE10u) {
        ctx->pc = 0x16CE14u;
        goto label_16ce14;
    }
    ctx->pc = 0x16CE0Cu;
    {
        const bool branch_taken_0x16ce0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce0c) {
            ctx->pc = 0x16D048u;
            goto label_16d048;
        }
    }
    ctx->pc = 0x16CE14u;
label_16ce14:
    // 0x16ce14: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x16ce14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_16ce18:
    // 0x16ce18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ce1c:
    // 0x16ce1c: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_16ce20:
    if (ctx->pc == 0x16CE20u) {
        ctx->pc = 0x16CE24u;
        goto label_16ce24;
    }
    ctx->pc = 0x16CE1Cu;
    {
        const bool branch_taken_0x16ce1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ce1c) {
            ctx->pc = 0x16CE3Cu;
            goto label_16ce3c;
        }
    }
    ctx->pc = 0x16CE24u;
label_16ce24:
    // 0x16ce24: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16ce24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16ce28:
    // 0x16ce28: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x16ce28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_16ce2c:
    // 0x16ce2c: 0x320f809  jalr        $t9
label_16ce30:
    if (ctx->pc == 0x16CE30u) {
        ctx->pc = 0x16CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE2Cu;
        // 0x16ce30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE34u;
        goto label_16ce34;
    }
    ctx->pc = 0x16CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CE34u);
        ctx->pc = 0x16CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE2Cu;
        // 0x16ce30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CE2Cu, 0x16CE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CE34u;
label_16ce34:
    // 0x16ce34: 0x100000dc  b           . + 4 + (0xDC << 2)
label_16ce38:
    if (ctx->pc == 0x16CE38u) {
        ctx->pc = 0x16CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE34u;
        // 0x16ce38: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE3Cu;
        goto label_16ce3c;
    }
    ctx->pc = 0x16CE34u;
    {
        const bool branch_taken_0x16ce34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE34u;
        // 0x16ce38: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce34) {
            ctx->pc = 0x16D1A8u;
            goto label_16d1a8;
        }
    }
    ctx->pc = 0x16CE3Cu;
label_16ce3c:
    // 0x16ce3c: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x16ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ce40:
    // 0x16ce40: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
label_16ce44:
    // 0x16ce44: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16ce44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_16ce48:
    // 0x16ce48: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x16ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_16ce4c:
    // 0x16ce4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16ce4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16ce50:
    // 0x16ce50: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_16ce54:
    // 0x16ce54: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16ce54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_16ce58:
    // 0x16ce58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16ce58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_16ce5c:
    // 0x16ce5c: 0xaf848604  sw          $a0, -0x79FC($gp)
    ctx->pc = 0x16ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 4));
label_16ce60:
    // 0x16ce60: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x16ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ce64:
    // 0x16ce64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ce64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ce68:
    // 0x16ce68: 0x0  nop
    ctx->pc = 0x16ce68u;
    // NOP
label_16ce6c:
    // 0x16ce6c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16ce6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_16ce70:
    // 0x16ce70: 0xe6210224  swc1        $f1, 0x224($s1)
    ctx->pc = 0x16ce70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
label_16ce74:
    // 0x16ce74: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16ce78:
    // 0x16ce78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16ce78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ce7c:
    // 0x16ce7c: 0x0  nop
    ctx->pc = 0x16ce7cu;
    // NOP
label_16ce80:
    // 0x16ce80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16ce84:
    if (ctx->pc == 0x16CE84u) {
        ctx->pc = 0x16CE88u;
        goto label_16ce88;
    }
    ctx->pc = 0x16CE80u;
    {
        const bool branch_taken_0x16ce80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ce80) {
            ctx->pc = 0x16CE90u;
            goto label_16ce90;
        }
    }
    ctx->pc = 0x16CE88u;
label_16ce88:
    // 0x16ce88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16ce88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16ce8c:
    // 0x16ce8c: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x16ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
label_16ce90:
    // 0x16ce90: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16ce94:
    // 0x16ce94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16ce98:
    // 0x16ce98: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
label_16ce9c:
    if (ctx->pc == 0x16CE9Cu) {
        ctx->pc = 0x16CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE98u;
        // 0x16ce9c: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CEA0u;
        goto label_16cea0;
    }
    ctx->pc = 0x16CE98u;
    {
        const bool branch_taken_0x16ce98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE98u;
        // 0x16ce9c: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce98) {
            ctx->pc = 0x16D048u;
            goto label_16d048;
        }
    }
    ctx->pc = 0x16CEA0u;
label_16cea0:
    // 0x16cea0: 0xc6210224  lwc1        $f1, 0x224($s1)
    ctx->pc = 0x16cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cea4:
    // 0x16cea4: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
label_16cea8:
    // 0x16cea8: 0xc6220228  lwc1        $f2, 0x228($s1)
    ctx->pc = 0x16cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ceac:
    // 0x16ceac: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16ceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_16ceb0:
    // 0x16ceb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ceb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ceb4:
    // 0x16ceb4: 0xc7848020  lwc1        $f4, -0x7FE0($gp)
    ctx->pc = 0x16ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16ceb8:
    // 0x16ceb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16cebc:
    // 0x16cebc: 0x460208c3  div.s       $f3, $f1, $f2
    ctx->pc = 0x16cebcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_16cec0:
    // 0x16cec0: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16cec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16cec4:
    // 0x16cec4: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x16cec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_16cec8:
    // 0x16cec8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x16cec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_16cecc:
    // 0x16cecc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16ceccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16ced0:
    // 0x16ced0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x16ced0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_16ced4:
    // 0x16ced4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16ced4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_16ced8:
    // 0x16ced8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16ced8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cedc:
    // 0x16cedc: 0x0  nop
    ctx->pc = 0x16cedcu;
    // NOP
label_16cee0:
    // 0x16cee0: 0x45010059  bc1t        . + 4 + (0x59 << 2)
label_16cee4:
    if (ctx->pc == 0x16CEE4u) {
        ctx->pc = 0x16CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEE0u;
        // 0x16cee4: 0x80640023  lb          $a0, 0x23($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CEE8u;
        goto label_16cee8;
    }
    ctx->pc = 0x16CEE0u;
    {
        const bool branch_taken_0x16cee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEE0u;
        // 0x16cee4: 0x80640023  lb          $a0, 0x23($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cee0) {
            ctx->pc = 0x16D048u;
            goto label_16d048;
        }
    }
    ctx->pc = 0x16CEE8u;
label_16cee8:
    // 0x16cee8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_16ceec:
    if (ctx->pc == 0x16CEECu) {
        ctx->pc = 0x16CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEE8u;
        // 0x16ceec: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CEF0u;
        goto label_16cef0;
    }
    ctx->pc = 0x16CEE8u;
    {
        const bool branch_taken_0x16cee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEE8u;
        // 0x16ceec: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cee8) {
            ctx->pc = 0x16CEF8u;
            goto label_16cef8;
        }
    }
    ctx->pc = 0x16CEF0u;
label_16cef0:
    // 0x16cef0: 0x14640055  bne         $v1, $a0, . + 4 + (0x55 << 2)
label_16cef4:
    if (ctx->pc == 0x16CEF4u) {
        ctx->pc = 0x16CEF8u;
        goto label_16cef8;
    }
    ctx->pc = 0x16CEF0u;
    {
        const bool branch_taken_0x16cef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16cef0) {
            ctx->pc = 0x16D048u;
            goto label_16d048;
        }
    }
    ctx->pc = 0x16CEF8u;
label_16cef8:
    // 0x16cef8: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cefc:
    // 0x16cefc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cf00:
    // 0x16cf00: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cf00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16cf04:
    // 0x16cf04: 0x320f809  jalr        $t9
label_16cf08:
    if (ctx->pc == 0x16CF08u) {
        ctx->pc = 0x16CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF04u;
        // 0x16cf08: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF0Cu;
        goto label_16cf0c;
    }
    ctx->pc = 0x16CF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CF0Cu);
        ctx->pc = 0x16CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF04u;
        // 0x16cf08: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CF04u, 0x16CF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CF0Cu;
label_16cf0c:
    // 0x16cf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cf10:
    // 0x16cf10: 0xc042118  jal         func_108460
label_16cf14:
    if (ctx->pc == 0x16CF14u) {
        ctx->pc = 0x16CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF10u;
        // 0x16cf14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF18u;
        goto label_16cf18;
    }
    ctx->pc = 0x16CF10u;
    SET_GPR_U32(ctx, 31, 0x16CF18u);
    ctx->pc = 0x16CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF10u;
    // 0x16cf14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16CF10u, 0x16CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF18u;
label_16cf18:
    // 0x16cf18: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cf18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cf1c:
    // 0x16cf1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cf20:
    // 0x16cf20: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16cf20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16cf24:
    // 0x16cf24: 0x320f809  jalr        $t9
label_16cf28:
    if (ctx->pc == 0x16CF28u) {
        ctx->pc = 0x16CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF24u;
        // 0x16cf28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF2Cu;
        goto label_16cf2c;
    }
    ctx->pc = 0x16CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CF2Cu);
        ctx->pc = 0x16CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF24u;
        // 0x16cf28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CF24u, 0x16CF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CF2Cu;
label_16cf2c:
    // 0x16cf2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16cf30:
    // 0x16cf30: 0xc4550054  lwc1        $f21, 0x54($v0)
    ctx->pc = 0x16cf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16cf34:
    // 0x16cf34: 0xc055c40  jal         func_157100
label_16cf38:
    if (ctx->pc == 0x16CF38u) {
        ctx->pc = 0x16CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF34u;
        // 0x16cf38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF3Cu;
        goto label_16cf3c;
    }
    ctx->pc = 0x16CF34u;
    SET_GPR_U32(ctx, 31, 0x16CF3Cu);
    ctx->pc = 0x16CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF34u;
    // 0x16cf38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16CF34u, 0x16CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF3Cu;
label_16cf3c:
    // 0x16cf3c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x16cf3cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cf40:
    // 0x16cf40: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x16cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cf44:
    // 0x16cf44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16cf44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16cf48:
    // 0x16cf48: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x16cf48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16cf4c:
    // 0x16cf4c: 0xc0548a8  jal         func_1522A0
label_16cf50:
    if (ctx->pc == 0x16CF50u) {
        ctx->pc = 0x16CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF4Cu;
        // 0x16cf50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF54u;
        goto label_16cf54;
    }
    ctx->pc = 0x16CF4Cu;
    SET_GPR_U32(ctx, 31, 0x16CF54u);
    ctx->pc = 0x16CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF4Cu;
    // 0x16cf50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16CF4Cu, 0x16CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF54u;
label_16cf54:
    // 0x16cf54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16cf54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16cf58:
    // 0x16cf58: 0xc07edc4  jal         func_1FB710
label_16cf5c:
    if (ctx->pc == 0x16CF5Cu) {
        ctx->pc = 0x16CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF58u;
        // 0x16cf5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF60u;
        goto label_16cf60;
    }
    ctx->pc = 0x16CF58u;
    SET_GPR_U32(ctx, 31, 0x16CF60u);
    ctx->pc = 0x16CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF58u;
    // 0x16cf5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16CF58u, 0x16CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF60u;
label_16cf60:
    // 0x16cf60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16cf64:
    // 0x16cf64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cf64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cf68:
    // 0x16cf68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16cf68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16cf6c:
    // 0x16cf6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16cf6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16cf70:
    // 0x16cf70: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x16cf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_16cf74:
    // 0x16cf74: 0xc07eea2  jal         func_1FBA88
label_16cf78:
    if (ctx->pc == 0x16CF78u) {
        ctx->pc = 0x16CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF74u;
        // 0x16cf78: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF7Cu;
        goto label_16cf7c;
    }
    ctx->pc = 0x16CF74u;
    SET_GPR_U32(ctx, 31, 0x16CF7Cu);
    ctx->pc = 0x16CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF74u;
    // 0x16cf78: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16CF74u, 0x16CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF7Cu;
label_16cf7c:
    // 0x16cf7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16cf80:
    // 0x16cf80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cf84:
    // 0x16cf84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cf88:
    // 0x16cf88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16cf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16cf8c:
    // 0x16cf8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16cf8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16cf90:
    // 0x16cf90: 0xe6000298  swc1        $f0, 0x298($s0)
    ctx->pc = 0x16cf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
label_16cf94:
    // 0x16cf94: 0xe61502a0  swc1        $f21, 0x2A0($s0)
    ctx->pc = 0x16cf94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
label_16cf98:
    // 0x16cf98: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cf98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cf9c:
    // 0x16cf9c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16cf9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16cfa0:
    // 0x16cfa0: 0x320f809  jalr        $t9
label_16cfa4:
    if (ctx->pc == 0x16CFA4u) {
        ctx->pc = 0x16CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFA0u;
        // 0x16cfa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFA8u;
        goto label_16cfa8;
    }
    ctx->pc = 0x16CFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CFA8u);
        ctx->pc = 0x16CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFA0u;
        // 0x16cfa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CFA0u, 0x16CFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CFA8u;
label_16cfa8:
    // 0x16cfa8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16cfac:
    // 0x16cfac: 0x80420022  lb          $v0, 0x22($v0)
    ctx->pc = 0x16cfacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_16cfb0:
    // 0x16cfb0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_16cfb4:
    if (ctx->pc == 0x16CFB4u) {
        ctx->pc = 0x16CFB8u;
        goto label_16cfb8;
    }
    ctx->pc = 0x16CFB0u;
    {
        const bool branch_taken_0x16cfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cfb0) {
            ctx->pc = 0x16D020u;
            goto label_16d020;
        }
    }
    ctx->pc = 0x16CFB8u;
label_16cfb8:
    // 0x16cfb8: 0xc621022c  lwc1        $f1, 0x22C($s1)
    ctx->pc = 0x16cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cfbc:
    // 0x16cfbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16cfbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cfc0:
    // 0x16cfc0: 0x0  nop
    ctx->pc = 0x16cfc0u;
    // NOP
label_16cfc4:
    // 0x16cfc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16cfc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16cfc8:
    // 0x16cfc8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16cfc8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16cfcc:
    // 0x16cfcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16cfd0:
    // 0x16cfd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cfd4:
    // 0x16cfd4: 0x0  nop
    ctx->pc = 0x16cfd4u;
    // NOP
label_16cfd8:
    // 0x16cfd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16cfd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cfdc:
    // 0x16cfdc: 0x0  nop
    ctx->pc = 0x16cfdcu;
    // NOP
label_16cfe0:
    // 0x16cfe0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16cfe4:
    if (ctx->pc == 0x16CFE4u) {
        ctx->pc = 0x16CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFE0u;
        // 0x16cfe4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFE8u;
        goto label_16cfe8;
    }
    ctx->pc = 0x16CFE0u;
    {
        const bool branch_taken_0x16cfe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFE0u;
        // 0x16cfe4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfe0) {
            ctx->pc = 0x16CFECu;
            goto label_16cfec;
        }
    }
    ctx->pc = 0x16CFE8u;
label_16cfe8:
    // 0x16cfe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cfec:
    // 0x16cfec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cff0:
    // 0x16cff0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_16cff4:
    if (ctx->pc == 0x16CFF4u) {
        ctx->pc = 0x16CFF8u;
        goto label_16cff8;
    }
    ctx->pc = 0x16CFF0u;
    {
        const bool branch_taken_0x16cff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16cff0) {
            ctx->pc = 0x16D020u;
            goto label_16d020;
        }
    }
    ctx->pc = 0x16CFF8u;
label_16cff8:
    // 0x16cff8: 0xc600026c  lwc1        $f0, 0x26C($s0)
    ctx->pc = 0x16cff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cffc:
    // 0x16cffc: 0x3c023d1e  lui         $v0, 0x3D1E
    ctx->pc = 0x16cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15646 << 16));
label_16d000:
    // 0x16d000: 0x3442611c  ori         $v0, $v0, 0x611C
    ctx->pc = 0x16d000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
label_16d004:
    // 0x16d004: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16d004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16d008:
    // 0x16d008: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x16d008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16d00c:
    // 0x16d00c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16d00cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16d010:
    // 0x16d010: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16d010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_16d014:
    // 0x16d014: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x16d014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_16d018:
    // 0x16d018: 0x10000003  b           . + 4 + (0x3 << 2)
label_16d01c:
    if (ctx->pc == 0x16D01Cu) {
        ctx->pc = 0x16D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D018u;
        // 0x16d01c: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D020u;
        goto label_16d020;
    }
    ctx->pc = 0x16D018u;
    {
        const bool branch_taken_0x16d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D018u;
        // 0x16d01c: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d018) {
            ctx->pc = 0x16D028u;
            goto label_16d028;
        }
    }
    ctx->pc = 0x16D020u;
label_16d020:
    // 0x16d020: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x16d020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_16d024:
    // 0x16d024: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x16d024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
label_16d028:
    // 0x16d028: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16d028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16d02c:
    // 0x16d02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d030:
    // 0x16d030: 0xa44001e8  sh          $zero, 0x1E8($v0)
    ctx->pc = 0x16d030u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 488), (uint16_t)GPR_U32(ctx, 0));
label_16d034:
    // 0x16d034: 0xae200230  sw          $zero, 0x230($s1)
    ctx->pc = 0x16d034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
label_16d038:
    // 0x16d038: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16d038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16d03c:
    // 0x16d03c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16d03cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16d040:
    // 0x16d040: 0x320f809  jalr        $t9
label_16d044:
    if (ctx->pc == 0x16D044u) {
        ctx->pc = 0x16D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D040u;
        // 0x16d044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D048u;
        goto label_16d048;
    }
    ctx->pc = 0x16D040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D048u);
        ctx->pc = 0x16D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D040u;
        // 0x16d044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D040u, 0x16D048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D048u;
label_16d048:
    // 0x16d048: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16d04c:
    // 0x16d04c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_16d050:
    // 0x16d050: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
label_16d054:
    if (ctx->pc == 0x16D054u) {
        ctx->pc = 0x16D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D050u;
        // 0x16d054: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D058u;
        goto label_16d058;
    }
    ctx->pc = 0x16D050u;
    {
        const bool branch_taken_0x16d050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D050u;
        // 0x16d054: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d050) {
            ctx->pc = 0x16D0ECu;
            goto label_16d0ec;
        }
    }
    ctx->pc = 0x16D058u;
label_16d058:
    // 0x16d058: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_16d05c:
    if (ctx->pc == 0x16D05Cu) {
        ctx->pc = 0x16D060u;
        goto label_16d060;
    }
    ctx->pc = 0x16D058u;
    {
        const bool branch_taken_0x16d058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d058) {
            ctx->pc = 0x16D0B8u;
            goto label_16d0b8;
        }
    }
    ctx->pc = 0x16D060u;
label_16d060:
    // 0x16d060: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_16d064:
    // 0x16d064: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_16d068:
    if (ctx->pc == 0x16D068u) {
        ctx->pc = 0x16D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D064u;
        // 0x16d068: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D06Cu;
        goto label_16d06c;
    }
    ctx->pc = 0x16D064u;
    {
        const bool branch_taken_0x16d064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D064u;
        // 0x16d068: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d064) {
            ctx->pc = 0x16D0B8u;
            goto label_16d0b8;
        }
    }
    ctx->pc = 0x16D06Cu;
label_16d06c:
    // 0x16d06c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_16d070:
    if (ctx->pc == 0x16D070u) {
        ctx->pc = 0x16D074u;
        goto label_16d074;
    }
    ctx->pc = 0x16D06Cu;
    {
        const bool branch_taken_0x16d06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d06c) {
            ctx->pc = 0x16D088u;
            goto label_16d088;
        }
    }
    ctx->pc = 0x16D074u;
label_16d074:
    // 0x16d074: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x16d074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_16d078:
    // 0x16d078: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_16d07c:
    if (ctx->pc == 0x16D07Cu) {
        ctx->pc = 0x16D080u;
        goto label_16d080;
    }
    ctx->pc = 0x16D078u;
    {
        const bool branch_taken_0x16d078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d078) {
            ctx->pc = 0x16D088u;
            goto label_16d088;
        }
    }
    ctx->pc = 0x16D080u;
label_16d080:
    // 0x16d080: 0x1000001d  b           . + 4 + (0x1D << 2)
label_16d084:
    if (ctx->pc == 0x16D084u) {
        ctx->pc = 0x16D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D080u;
        // 0x16d084: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D088u;
        goto label_16d088;
    }
    ctx->pc = 0x16D080u;
    {
        const bool branch_taken_0x16d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D080u;
        // 0x16d084: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d080) {
            ctx->pc = 0x16D0F8u;
            goto label_16d0f8;
        }
    }
    ctx->pc = 0x16D088u;
label_16d088:
    // 0x16d088: 0xc6220210  lwc1        $f2, 0x210($s1)
    ctx->pc = 0x16d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16d08c:
    // 0x16d08c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_16d090:
    // 0x16d090: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d094:
    // 0x16d094: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16d094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_16d098:
    // 0x16d098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16d098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d09c:
    // 0x16d09c: 0x0  nop
    ctx->pc = 0x16d09cu;
    // NOP
label_16d0a0:
    // 0x16d0a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16d0a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_16d0a4:
    // 0x16d0a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16d0a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_16d0a8:
    // 0x16d0a8: 0x0  nop
    ctx->pc = 0x16d0a8u;
    // NOP
label_16d0ac:
    // 0x16d0ac: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x16d0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
label_16d0b0:
    // 0x16d0b0: 0x10000010  b           . + 4 + (0x10 << 2)
label_16d0b4:
    if (ctx->pc == 0x16D0B4u) {
        ctx->pc = 0x16D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0B0u;
        // 0x16d0b4: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0B8u;
        goto label_16d0b8;
    }
    ctx->pc = 0x16D0B0u;
    {
        const bool branch_taken_0x16d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0B0u;
        // 0x16d0b4: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0b0) {
            ctx->pc = 0x16D0F4u;
            goto label_16d0f4;
        }
    }
    ctx->pc = 0x16D0B8u;
label_16d0b8:
    // 0x16d0b8: 0xc6220240  lwc1        $f2, 0x240($s1)
    ctx->pc = 0x16d0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16d0bc:
    // 0x16d0bc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_16d0c0:
    // 0x16d0c0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x16d0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_16d0c4:
    // 0x16d0c4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x16d0c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16d0c8:
    // 0x16d0c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16d0cc:
    // 0x16d0cc: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d0d0:
    // 0x16d0d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16d0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16d0d4:
    // 0x16d0d4: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x16d0d4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_16d0d8:
    // 0x16d0d8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x16d0d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_16d0dc:
    // 0x16d0dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16d0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16d0e0:
    // 0x16d0e0: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x16d0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
label_16d0e4:
    // 0x16d0e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_16d0e8:
    if (ctx->pc == 0x16D0E8u) {
        ctx->pc = 0x16D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0E4u;
        // 0x16d0e8: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0ECu;
        goto label_16d0ec;
    }
    ctx->pc = 0x16D0E4u;
    {
        const bool branch_taken_0x16d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0E4u;
        // 0x16d0e8: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0e4) {
            ctx->pc = 0x16D0F4u;
            goto label_16d0f4;
        }
    }
    ctx->pc = 0x16D0ECu;
label_16d0ec:
    // 0x16d0ec: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16d0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d0f0:
    // 0x16d0f0: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x16d0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_16d0f4:
    // 0x16d0f4: 0x8e300230  lw          $s0, 0x230($s1)
    ctx->pc = 0x16d0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16d0f8:
    // 0x16d0f8: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_16d0fc:
    if (ctx->pc == 0x16D0FCu) {
        ctx->pc = 0x16D100u;
        goto label_16d100;
    }
    ctx->pc = 0x16D0F8u;
    {
        const bool branch_taken_0x16d0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0f8) {
            ctx->pc = 0x16D1A4u;
            goto label_16d1a4;
        }
    }
    ctx->pc = 0x16D100u;
label_16d100:
    // 0x16d100: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16d104:
    // 0x16d104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d108:
    // 0x16d108: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_16d10c:
    if (ctx->pc == 0x16D10Cu) {
        ctx->pc = 0x16D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D108u;
        // 0x16d10c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D110u;
        goto label_16d110;
    }
    ctx->pc = 0x16D108u;
    {
        const bool branch_taken_0x16d108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D108u;
        // 0x16d10c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d108) {
            ctx->pc = 0x16D12Cu;
            goto label_16d12c;
        }
    }
    ctx->pc = 0x16D110u;
label_16d110:
    // 0x16d110: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_16d114:
    if (ctx->pc == 0x16D114u) {
        ctx->pc = 0x16D118u;
        goto label_16d118;
    }
    ctx->pc = 0x16D110u;
    {
        const bool branch_taken_0x16d110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d110) {
            ctx->pc = 0x16D12Cu;
            goto label_16d12c;
        }
    }
    ctx->pc = 0x16D118u;
label_16d118:
    // 0x16d118: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16d118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16d11c:
    // 0x16d11c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_16d120:
    if (ctx->pc == 0x16D120u) {
        ctx->pc = 0x16D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D11Cu;
        // 0x16d120: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D124u;
        goto label_16d124;
    }
    ctx->pc = 0x16D11Cu;
    {
        const bool branch_taken_0x16d11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D11Cu;
        // 0x16d120: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d11c) {
            ctx->pc = 0x16D12Cu;
            goto label_16d12c;
        }
    }
    ctx->pc = 0x16D124u;
label_16d124:
    // 0x16d124: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_16d128:
    if (ctx->pc == 0x16D128u) {
        ctx->pc = 0x16D12Cu;
        goto label_16d12c;
    }
    ctx->pc = 0x16D124u;
    {
        const bool branch_taken_0x16d124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d124) {
            ctx->pc = 0x16D1A4u;
            goto label_16d1a4;
        }
    }
    ctx->pc = 0x16D12Cu;
label_16d12c:
    // 0x16d12c: 0xc055c40  jal         func_157100
label_16d130:
    if (ctx->pc == 0x16D130u) {
        ctx->pc = 0x16D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D12Cu;
        // 0x16d130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D134u;
        goto label_16d134;
    }
    ctx->pc = 0x16D12Cu;
    SET_GPR_U32(ctx, 31, 0x16D134u);
    ctx->pc = 0x16D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D12Cu;
    // 0x16d130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16D12Cu, 0x16D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D134u;
label_16d134:
    // 0x16d134: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16d138:
    // 0x16d138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d13c:
    // 0x16d13c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16d13cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16d140:
    // 0x16d140: 0x320f809  jalr        $t9
label_16d144:
    if (ctx->pc == 0x16D144u) {
        ctx->pc = 0x16D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D140u;
        // 0x16d144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D148u;
        goto label_16d148;
    }
    ctx->pc = 0x16D140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D148u);
        ctx->pc = 0x16D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D140u;
        // 0x16d144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D140u, 0x16D148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D148u;
label_16d148:
    // 0x16d148: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x16d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d14c:
    // 0x16d14c: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x16d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d150:
    // 0x16d150: 0xc6340224  lwc1        $f20, 0x224($s1)
    ctx->pc = 0x16d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16d154:
    // 0x16d154: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x16d154u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16d158:
    // 0x16d158: 0xc0548a8  jal         func_1522A0
label_16d15c:
    if (ctx->pc == 0x16D15Cu) {
        ctx->pc = 0x16D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D158u;
        // 0x16d15c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D160u;
        goto label_16d160;
    }
    ctx->pc = 0x16D158u;
    SET_GPR_U32(ctx, 31, 0x16D160u);
    ctx->pc = 0x16D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D158u;
    // 0x16d15c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16D158u, 0x16D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D160u;
label_16d160:
    // 0x16d160: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16d160u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16d164:
    // 0x16d164: 0xc07edc4  jal         func_1FB710
label_16d168:
    if (ctx->pc == 0x16D168u) {
        ctx->pc = 0x16D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D164u;
        // 0x16d168: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D16Cu;
        goto label_16d16c;
    }
    ctx->pc = 0x16D164u;
    SET_GPR_U32(ctx, 31, 0x16D16Cu);
    ctx->pc = 0x16D168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D164u;
    // 0x16d168: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16D164u, 0x16D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D16Cu;
label_16d16c:
    // 0x16d16c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16d170:
    // 0x16d170: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16d170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16d174:
    // 0x16d174: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16d174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16d178:
    // 0x16d178: 0xc07eea2  jal         func_1FBA88
label_16d17c:
    if (ctx->pc == 0x16D17Cu) {
        ctx->pc = 0x16D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D178u;
        // 0x16d17c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D180u;
        goto label_16d180;
    }
    ctx->pc = 0x16D178u;
    SET_GPR_U32(ctx, 31, 0x16D180u);
    ctx->pc = 0x16D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D178u;
    // 0x16d17c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16D178u, 0x16D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D180u;
label_16d180:
    // 0x16d180: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16d184:
    // 0x16d184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d188:
    // 0x16d188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d18c:
    // 0x16d18c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x16d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_16d190:
    // 0x16d190: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16d190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_16d194:
    // 0x16d194: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16d194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16d198:
    // 0x16d198: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16d198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16d19c:
    // 0x16d19c: 0x320f809  jalr        $t9
label_16d1a0:
    if (ctx->pc == 0x16D1A0u) {
        ctx->pc = 0x16D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D19Cu;
        // 0x16d1a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1A4u;
        goto label_16d1a4;
    }
    ctx->pc = 0x16D19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D1A4u);
        ctx->pc = 0x16D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D19Cu;
        // 0x16d1a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D19Cu, 0x16D1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D1A4u;
label_16d1a4:
    // 0x16d1a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16d1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16d1a8:
    // 0x16d1a8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16d1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16d1ac:
    // 0x16d1ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16d1acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16d1b0:
    // 0x16d1b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16d1b4:
    // 0x16d1b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16d1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16d1b8:
    // 0x16d1b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16d1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d1bc:
    // 0x16d1bc: 0x3e00008  jr          $ra
label_16d1c0:
    if (ctx->pc == 0x16D1C0u) {
        ctx->pc = 0x16D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1BCu;
        // 0x16d1c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1C4u;
        goto label_fallthrough_0x16d1bc;
    }
    ctx->pc = 0x16D1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1BCu;
        // 0x16d1c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16d1bc:
    ctx->pc = 0x16D1C4u;
}
