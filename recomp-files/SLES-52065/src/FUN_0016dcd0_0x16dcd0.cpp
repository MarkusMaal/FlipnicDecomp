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

// Function: FUN_0016dcd0
// Address: 0x16dcd0 - 0x16e0ec
void FUN_0016dcd0_0x16dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016dcd0_0x16dcd0");
#endif

    switch (ctx->pc) {
        case 0x16dcd0u: goto label_16dcd0;
        case 0x16dcd4u: goto label_16dcd4;
        case 0x16dcd8u: goto label_16dcd8;
        case 0x16dcdcu: goto label_16dcdc;
        case 0x16dce0u: goto label_16dce0;
        case 0x16dce4u: goto label_16dce4;
        case 0x16dce8u: goto label_16dce8;
        case 0x16dcecu: goto label_16dcec;
        case 0x16dcf0u: goto label_16dcf0;
        case 0x16dcf4u: goto label_16dcf4;
        case 0x16dcf8u: goto label_16dcf8;
        case 0x16dcfcu: goto label_16dcfc;
        case 0x16dd00u: goto label_16dd00;
        case 0x16dd04u: goto label_16dd04;
        case 0x16dd08u: goto label_16dd08;
        case 0x16dd0cu: goto label_16dd0c;
        case 0x16dd10u: goto label_16dd10;
        case 0x16dd14u: goto label_16dd14;
        case 0x16dd18u: goto label_16dd18;
        case 0x16dd1cu: goto label_16dd1c;
        case 0x16dd20u: goto label_16dd20;
        case 0x16dd24u: goto label_16dd24;
        case 0x16dd28u: goto label_16dd28;
        case 0x16dd2cu: goto label_16dd2c;
        case 0x16dd30u: goto label_16dd30;
        case 0x16dd34u: goto label_16dd34;
        case 0x16dd38u: goto label_16dd38;
        case 0x16dd3cu: goto label_16dd3c;
        case 0x16dd40u: goto label_16dd40;
        case 0x16dd44u: goto label_16dd44;
        case 0x16dd48u: goto label_16dd48;
        case 0x16dd4cu: goto label_16dd4c;
        case 0x16dd50u: goto label_16dd50;
        case 0x16dd54u: goto label_16dd54;
        case 0x16dd58u: goto label_16dd58;
        case 0x16dd5cu: goto label_16dd5c;
        case 0x16dd60u: goto label_16dd60;
        case 0x16dd64u: goto label_16dd64;
        case 0x16dd68u: goto label_16dd68;
        case 0x16dd6cu: goto label_16dd6c;
        case 0x16dd70u: goto label_16dd70;
        case 0x16dd74u: goto label_16dd74;
        case 0x16dd78u: goto label_16dd78;
        case 0x16dd7cu: goto label_16dd7c;
        case 0x16dd80u: goto label_16dd80;
        case 0x16dd84u: goto label_16dd84;
        case 0x16dd88u: goto label_16dd88;
        case 0x16dd8cu: goto label_16dd8c;
        case 0x16dd90u: goto label_16dd90;
        case 0x16dd94u: goto label_16dd94;
        case 0x16dd98u: goto label_16dd98;
        case 0x16dd9cu: goto label_16dd9c;
        case 0x16dda0u: goto label_16dda0;
        case 0x16dda4u: goto label_16dda4;
        case 0x16dda8u: goto label_16dda8;
        case 0x16ddacu: goto label_16ddac;
        case 0x16ddb0u: goto label_16ddb0;
        case 0x16ddb4u: goto label_16ddb4;
        case 0x16ddb8u: goto label_16ddb8;
        case 0x16ddbcu: goto label_16ddbc;
        case 0x16ddc0u: goto label_16ddc0;
        case 0x16ddc4u: goto label_16ddc4;
        case 0x16ddc8u: goto label_16ddc8;
        case 0x16ddccu: goto label_16ddcc;
        case 0x16ddd0u: goto label_16ddd0;
        case 0x16ddd4u: goto label_16ddd4;
        case 0x16ddd8u: goto label_16ddd8;
        case 0x16dddcu: goto label_16dddc;
        case 0x16dde0u: goto label_16dde0;
        case 0x16dde4u: goto label_16dde4;
        case 0x16dde8u: goto label_16dde8;
        case 0x16ddecu: goto label_16ddec;
        case 0x16ddf0u: goto label_16ddf0;
        case 0x16ddf4u: goto label_16ddf4;
        case 0x16ddf8u: goto label_16ddf8;
        case 0x16ddfcu: goto label_16ddfc;
        case 0x16de00u: goto label_16de00;
        case 0x16de04u: goto label_16de04;
        case 0x16de08u: goto label_16de08;
        case 0x16de0cu: goto label_16de0c;
        case 0x16de10u: goto label_16de10;
        case 0x16de14u: goto label_16de14;
        case 0x16de18u: goto label_16de18;
        case 0x16de1cu: goto label_16de1c;
        case 0x16de20u: goto label_16de20;
        case 0x16de24u: goto label_16de24;
        case 0x16de28u: goto label_16de28;
        case 0x16de2cu: goto label_16de2c;
        case 0x16de30u: goto label_16de30;
        case 0x16de34u: goto label_16de34;
        case 0x16de38u: goto label_16de38;
        case 0x16de3cu: goto label_16de3c;
        case 0x16de40u: goto label_16de40;
        case 0x16de44u: goto label_16de44;
        case 0x16de48u: goto label_16de48;
        case 0x16de4cu: goto label_16de4c;
        case 0x16de50u: goto label_16de50;
        case 0x16de54u: goto label_16de54;
        case 0x16de58u: goto label_16de58;
        case 0x16de5cu: goto label_16de5c;
        case 0x16de60u: goto label_16de60;
        case 0x16de64u: goto label_16de64;
        case 0x16de68u: goto label_16de68;
        case 0x16de6cu: goto label_16de6c;
        case 0x16de70u: goto label_16de70;
        case 0x16de74u: goto label_16de74;
        case 0x16de78u: goto label_16de78;
        case 0x16de7cu: goto label_16de7c;
        case 0x16de80u: goto label_16de80;
        case 0x16de84u: goto label_16de84;
        case 0x16de88u: goto label_16de88;
        case 0x16de8cu: goto label_16de8c;
        case 0x16de90u: goto label_16de90;
        case 0x16de94u: goto label_16de94;
        case 0x16de98u: goto label_16de98;
        case 0x16de9cu: goto label_16de9c;
        case 0x16dea0u: goto label_16dea0;
        case 0x16dea4u: goto label_16dea4;
        case 0x16dea8u: goto label_16dea8;
        case 0x16deacu: goto label_16deac;
        case 0x16deb0u: goto label_16deb0;
        case 0x16deb4u: goto label_16deb4;
        case 0x16deb8u: goto label_16deb8;
        case 0x16debcu: goto label_16debc;
        case 0x16dec0u: goto label_16dec0;
        case 0x16dec4u: goto label_16dec4;
        case 0x16dec8u: goto label_16dec8;
        case 0x16deccu: goto label_16decc;
        case 0x16ded0u: goto label_16ded0;
        case 0x16ded4u: goto label_16ded4;
        case 0x16ded8u: goto label_16ded8;
        case 0x16dedcu: goto label_16dedc;
        case 0x16dee0u: goto label_16dee0;
        case 0x16dee4u: goto label_16dee4;
        case 0x16dee8u: goto label_16dee8;
        case 0x16deecu: goto label_16deec;
        case 0x16def0u: goto label_16def0;
        case 0x16def4u: goto label_16def4;
        case 0x16def8u: goto label_16def8;
        case 0x16defcu: goto label_16defc;
        case 0x16df00u: goto label_16df00;
        case 0x16df04u: goto label_16df04;
        case 0x16df08u: goto label_16df08;
        case 0x16df0cu: goto label_16df0c;
        case 0x16df10u: goto label_16df10;
        case 0x16df14u: goto label_16df14;
        case 0x16df18u: goto label_16df18;
        case 0x16df1cu: goto label_16df1c;
        case 0x16df20u: goto label_16df20;
        case 0x16df24u: goto label_16df24;
        case 0x16df28u: goto label_16df28;
        case 0x16df2cu: goto label_16df2c;
        case 0x16df30u: goto label_16df30;
        case 0x16df34u: goto label_16df34;
        case 0x16df38u: goto label_16df38;
        case 0x16df3cu: goto label_16df3c;
        case 0x16df40u: goto label_16df40;
        case 0x16df44u: goto label_16df44;
        case 0x16df48u: goto label_16df48;
        case 0x16df4cu: goto label_16df4c;
        case 0x16df50u: goto label_16df50;
        case 0x16df54u: goto label_16df54;
        case 0x16df58u: goto label_16df58;
        case 0x16df5cu: goto label_16df5c;
        case 0x16df60u: goto label_16df60;
        case 0x16df64u: goto label_16df64;
        case 0x16df68u: goto label_16df68;
        case 0x16df6cu: goto label_16df6c;
        case 0x16df70u: goto label_16df70;
        case 0x16df74u: goto label_16df74;
        case 0x16df78u: goto label_16df78;
        case 0x16df7cu: goto label_16df7c;
        case 0x16df80u: goto label_16df80;
        case 0x16df84u: goto label_16df84;
        case 0x16df88u: goto label_16df88;
        case 0x16df8cu: goto label_16df8c;
        case 0x16df90u: goto label_16df90;
        case 0x16df94u: goto label_16df94;
        case 0x16df98u: goto label_16df98;
        case 0x16df9cu: goto label_16df9c;
        case 0x16dfa0u: goto label_16dfa0;
        case 0x16dfa4u: goto label_16dfa4;
        case 0x16dfa8u: goto label_16dfa8;
        case 0x16dfacu: goto label_16dfac;
        case 0x16dfb0u: goto label_16dfb0;
        case 0x16dfb4u: goto label_16dfb4;
        case 0x16dfb8u: goto label_16dfb8;
        case 0x16dfbcu: goto label_16dfbc;
        case 0x16dfc0u: goto label_16dfc0;
        case 0x16dfc4u: goto label_16dfc4;
        case 0x16dfc8u: goto label_16dfc8;
        case 0x16dfccu: goto label_16dfcc;
        case 0x16dfd0u: goto label_16dfd0;
        case 0x16dfd4u: goto label_16dfd4;
        case 0x16dfd8u: goto label_16dfd8;
        case 0x16dfdcu: goto label_16dfdc;
        case 0x16dfe0u: goto label_16dfe0;
        case 0x16dfe4u: goto label_16dfe4;
        case 0x16dfe8u: goto label_16dfe8;
        case 0x16dfecu: goto label_16dfec;
        case 0x16dff0u: goto label_16dff0;
        case 0x16dff4u: goto label_16dff4;
        case 0x16dff8u: goto label_16dff8;
        case 0x16dffcu: goto label_16dffc;
        case 0x16e000u: goto label_16e000;
        case 0x16e004u: goto label_16e004;
        case 0x16e008u: goto label_16e008;
        case 0x16e00cu: goto label_16e00c;
        case 0x16e010u: goto label_16e010;
        case 0x16e014u: goto label_16e014;
        case 0x16e018u: goto label_16e018;
        case 0x16e01cu: goto label_16e01c;
        case 0x16e020u: goto label_16e020;
        case 0x16e024u: goto label_16e024;
        case 0x16e028u: goto label_16e028;
        case 0x16e02cu: goto label_16e02c;
        case 0x16e030u: goto label_16e030;
        case 0x16e034u: goto label_16e034;
        case 0x16e038u: goto label_16e038;
        case 0x16e03cu: goto label_16e03c;
        case 0x16e040u: goto label_16e040;
        case 0x16e044u: goto label_16e044;
        case 0x16e048u: goto label_16e048;
        case 0x16e04cu: goto label_16e04c;
        case 0x16e050u: goto label_16e050;
        case 0x16e054u: goto label_16e054;
        case 0x16e058u: goto label_16e058;
        case 0x16e05cu: goto label_16e05c;
        case 0x16e060u: goto label_16e060;
        case 0x16e064u: goto label_16e064;
        case 0x16e068u: goto label_16e068;
        case 0x16e06cu: goto label_16e06c;
        case 0x16e070u: goto label_16e070;
        case 0x16e074u: goto label_16e074;
        case 0x16e078u: goto label_16e078;
        case 0x16e07cu: goto label_16e07c;
        case 0x16e080u: goto label_16e080;
        case 0x16e084u: goto label_16e084;
        case 0x16e088u: goto label_16e088;
        case 0x16e08cu: goto label_16e08c;
        case 0x16e090u: goto label_16e090;
        case 0x16e094u: goto label_16e094;
        case 0x16e098u: goto label_16e098;
        case 0x16e09cu: goto label_16e09c;
        case 0x16e0a0u: goto label_16e0a0;
        case 0x16e0a4u: goto label_16e0a4;
        case 0x16e0a8u: goto label_16e0a8;
        case 0x16e0acu: goto label_16e0ac;
        case 0x16e0b0u: goto label_16e0b0;
        case 0x16e0b4u: goto label_16e0b4;
        case 0x16e0b8u: goto label_16e0b8;
        case 0x16e0bcu: goto label_16e0bc;
        case 0x16e0c0u: goto label_16e0c0;
        case 0x16e0c4u: goto label_16e0c4;
        case 0x16e0c8u: goto label_16e0c8;
        case 0x16e0ccu: goto label_16e0cc;
        case 0x16e0d0u: goto label_16e0d0;
        case 0x16e0d4u: goto label_16e0d4;
        case 0x16e0d8u: goto label_16e0d8;
        case 0x16e0dcu: goto label_16e0dc;
        case 0x16e0e0u: goto label_16e0e0;
        case 0x16e0e4u: goto label_16e0e4;
        case 0x16e0e8u: goto label_16e0e8;
        default: break;
    }

    ctx->pc = 0x16dcd0u;

label_16dcd0:
    // 0x16dcd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16dcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_16dcd4:
    // 0x16dcd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16dcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16dcd8:
    // 0x16dcd8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16dcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_16dcdc:
    // 0x16dcdc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16dcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_16dce0:
    // 0x16dce0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16dce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16dce4:
    // 0x16dce4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16dce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16dce8:
    // 0x16dce8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16dcec:
    // 0x16dcec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16dcecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16dcf0:
    // 0x16dcf0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16dcf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16dcf4:
    // 0x16dcf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16dcf8:
    // 0x16dcf8: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16dcf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16dcfc:
    // 0x16dcfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16dd00:
    if (ctx->pc == 0x16DD00u) {
        ctx->pc = 0x16DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCFCu;
        // 0x16dd00: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD04u;
        goto label_16dd04;
    }
    ctx->pc = 0x16DCFCu;
    {
        const bool branch_taken_0x16dcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCFCu;
        // 0x16dd00: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcfc) {
            ctx->pc = 0x16DD0Cu;
            goto label_16dd0c;
        }
    }
    ctx->pc = 0x16DD04u;
label_16dd04:
    // 0x16dd04: 0x10000003  b           . + 4 + (0x3 << 2)
label_16dd08:
    if (ctx->pc == 0x16DD08u) {
        ctx->pc = 0x16DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD04u;
        // 0x16dd08: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD0Cu;
        goto label_16dd0c;
    }
    ctx->pc = 0x16DD04u;
    {
        const bool branch_taken_0x16dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD04u;
        // 0x16dd08: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd04) {
            ctx->pc = 0x16DD14u;
            goto label_16dd14;
        }
    }
    ctx->pc = 0x16DD0Cu;
label_16dd0c:
    // 0x16dd0c: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16dd0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16dd10:
    // 0x16dd10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_16dd14:
    // 0x16dd14: 0xa6620218  sh          $v0, 0x218($s3)
    ctx->pc = 0x16dd14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 536), (uint16_t)GPR_U32(ctx, 2));
label_16dd18:
    // 0x16dd18: 0xa6600216  sh          $zero, 0x216($s3)
    ctx->pc = 0x16dd18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 534), (uint16_t)GPR_U32(ctx, 0));
label_16dd1c:
    // 0x16dd1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16dd20:
    // 0x16dd20: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x16dd20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16dd24:
    // 0x16dd24: 0x82320022  lb          $s2, 0x22($s1)
    ctx->pc = 0x16dd24u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_16dd28:
    // 0x16dd28: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_16dd2c:
    if (ctx->pc == 0x16DD2Cu) {
        ctx->pc = 0x16DD30u;
        goto label_16dd30;
    }
    ctx->pc = 0x16DD28u;
    {
        const bool branch_taken_0x16dd28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16dd28) {
            ctx->pc = 0x16DD40u;
            goto label_16dd40;
        }
    }
    ctx->pc = 0x16DD30u;
label_16dd30:
    // 0x16dd30: 0xc05b708  jal         func_16DC20
label_16dd34:
    if (ctx->pc == 0x16DD34u) {
        ctx->pc = 0x16DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD30u;
        // 0x16dd34: 0x86240030  lh          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD38u;
        goto label_16dd38;
    }
    ctx->pc = 0x16DD30u;
    SET_GPR_U32(ctx, 31, 0x16DD38u);
    ctx->pc = 0x16DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD30u;
    // 0x16dd34: 0x86240030  lh          $a0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DC20u, 0x16DD30u, 0x16DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD38u;
label_16dd38:
    // 0x16dd38: 0x1000000b  b           . + 4 + (0xB << 2)
label_16dd3c:
    if (ctx->pc == 0x16DD3Cu) {
        ctx->pc = 0x16DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD38u;
        // 0x16dd3c: 0xe660021c  swc1        $f0, 0x21C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 540), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD40u;
        goto label_16dd40;
    }
    ctx->pc = 0x16DD38u;
    {
        const bool branch_taken_0x16dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD38u;
        // 0x16dd3c: 0xe660021c  swc1        $f0, 0x21C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd38) {
            ctx->pc = 0x16DD68u;
            goto label_16dd68;
        }
    }
    ctx->pc = 0x16DD40u;
label_16dd40:
    // 0x16dd40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16dd44:
    // 0x16dd44: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
label_16dd48:
    if (ctx->pc == 0x16DD48u) {
        ctx->pc = 0x16DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD44u;
        // 0x16dd48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD4Cu;
        goto label_16dd4c;
    }
    ctx->pc = 0x16DD44u;
    {
        const bool branch_taken_0x16dd44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x16DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD44u;
        // 0x16dd48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd44) {
            ctx->pc = 0x16DD6Cu;
            goto label_16dd6c;
        }
    }
    ctx->pc = 0x16DD4Cu;
label_16dd4c:
    // 0x16dd4c: 0xc05fe4c  jal         func_17F930
label_16dd50:
    if (ctx->pc == 0x16DD50u) {
        ctx->pc = 0x16DD54u;
        goto label_16dd54;
    }
    ctx->pc = 0x16DD4Cu;
    SET_GPR_U32(ctx, 31, 0x16DD54u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x16DD4Cu, 0x16DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD54u;
label_16dd54:
    // 0x16dd54: 0x86250030  lh          $a1, 0x30($s1)
    ctx->pc = 0x16dd54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_16dd58:
    // 0x16dd58: 0xc05fec0  jal         func_17FB00
label_16dd5c:
    if (ctx->pc == 0x16DD5Cu) {
        ctx->pc = 0x16DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD58u;
        // 0x16dd5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD60u;
        goto label_16dd60;
    }
    ctx->pc = 0x16DD58u;
    SET_GPR_U32(ctx, 31, 0x16DD60u);
    ctx->pc = 0x16DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD58u;
    // 0x16dd5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x16DD58u, 0x16DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD60u;
label_16dd60:
    // 0x16dd60: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x16dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_16dd64:
    // 0x16dd64: 0xae620224  sw          $v0, 0x224($s3)
    ctx->pc = 0x16dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 548), GPR_U32(ctx, 2));
label_16dd68:
    // 0x16dd68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16dd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dd6c:
    // 0x16dd6c: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_16dd70:
    if (ctx->pc == 0x16DD70u) {
        ctx->pc = 0x16DD74u;
        goto label_16dd74;
    }
    ctx->pc = 0x16DD6Cu;
    {
        const bool branch_taken_0x16dd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd6c) {
            ctx->pc = 0x16E048u;
            goto label_16e048;
        }
    }
    ctx->pc = 0x16DD74u;
label_16dd74:
    // 0x16dd74: 0x8e640210  lw          $a0, 0x210($s3)
    ctx->pc = 0x16dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16dd78:
    // 0x16dd78: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16dd7c:
    // 0x16dd7c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16dd80:
    // 0x16dd80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16dd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16dd84:
    // 0x16dd84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16dd88:
    // 0x16dd88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16dd8c:
    // 0x16dd8c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x16dd8cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16dd90:
    // 0x16dd90: 0x0  nop
    ctx->pc = 0x16dd90u;
    // NOP
label_16dd94:
    // 0x16dd94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16dd94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16dd98:
    // 0x16dd98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16dd9c:
    // 0x16dd9c: 0xa4650082  sh          $a1, 0x82($v1)
    ctx->pc = 0x16dd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 5));
label_16dda0:
    // 0x16dda0: 0x86630214  lh          $v1, 0x214($s3)
    ctx->pc = 0x16dda0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 532)));
label_16dda4:
    // 0x16dda4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_16dda8:
    // 0x16dda8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16dda8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16ddac:
    // 0x16ddac: 0x0  nop
    ctx->pc = 0x16ddacu;
    // NOP
label_16ddb0:
    // 0x16ddb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16ddb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16ddb4:
    // 0x16ddb4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x16ddb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16ddb8:
    // 0x16ddb8: 0x0  nop
    ctx->pc = 0x16ddb8u;
    // NOP
label_16ddbc:
    // 0x16ddbc: 0x0  nop
    ctx->pc = 0x16ddbcu;
    // NOP
label_16ddc0:
    // 0x16ddc0: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_16ddc4:
    if (ctx->pc == 0x16DDC4u) {
        ctx->pc = 0x16DDC8u;
        goto label_16ddc8;
    }
    ctx->pc = 0x16DDC0u;
    {
        const bool branch_taken_0x16ddc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ddc0) {
            ctx->pc = 0x16DDD0u;
            goto label_16ddd0;
        }
    }
    ctx->pc = 0x16DDC8u;
label_16ddc8:
    // 0x16ddc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16ddcc:
    // 0x16ddcc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x16ddccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16ddd0:
    // 0x16ddd0: 0x8e630210  lw          $v1, 0x210($s3)
    ctx->pc = 0x16ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16ddd4:
    // 0x16ddd4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x16ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16ddd8:
    // 0x16ddd8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_16dddc:
    // 0x16dddc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_16dde0:
    // 0x16dde0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16dde4:
    // 0x16dde4: 0x84420080  lh          $v0, 0x80($v0)
    ctx->pc = 0x16dde4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_16dde8:
    // 0x16dde8: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
label_16ddec:
    if (ctx->pc == 0x16DDECu) {
        ctx->pc = 0x16DDF0u;
        goto label_16ddf0;
    }
    ctx->pc = 0x16DDE8u;
    {
        const bool branch_taken_0x16dde8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16dde8) {
            ctx->pc = 0x16DE24u;
            goto label_16de24;
        }
    }
    ctx->pc = 0x16DDF0u;
label_16ddf0:
    // 0x16ddf0: 0x8f838608  lw          $v1, -0x79F8($gp)
    ctx->pc = 0x16ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16ddf4:
    // 0x16ddf4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x16ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16ddf8:
    // 0x16ddf8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16ddfc:
    // 0x16ddfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ddfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16de00:
    // 0x16de00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16de00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16de04:
    // 0x16de04: 0xc0465f0  jal         func_1197C0
label_16de08:
    if (ctx->pc == 0x16DE08u) {
        ctx->pc = 0x16DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE04u;
        // 0x16de08: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE0Cu;
        goto label_16de0c;
    }
    ctx->pc = 0x16DE04u;
    SET_GPR_U32(ctx, 31, 0x16DE0Cu);
    ctx->pc = 0x16DE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE04u;
    // 0x16de08: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x16DE04u, 0x16DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE0Cu;
label_16de0c:
    // 0x16de0c: 0x8e640210  lw          $a0, 0x210($s3)
    ctx->pc = 0x16de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16de10:
    // 0x16de10: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16de10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16de14:
    // 0x16de14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16de14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16de18:
    // 0x16de18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16de18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16de1c:
    // 0x16de1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16de20:
    // 0x16de20: 0xa4620080  sh          $v0, 0x80($v1)
    ctx->pc = 0x16de20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 2));
label_16de24:
    // 0x16de24: 0x0  nop
    ctx->pc = 0x16de24u;
    // NOP
label_16de28:
    // 0x16de28: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x16de28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16de2c:
    // 0x16de2c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x16de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_16de30:
    // 0x16de30: 0x8f838608  lw          $v1, -0x79F8($gp)
    ctx->pc = 0x16de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16de34:
    // 0x16de34: 0x8e670210  lw          $a3, 0x210($s3)
    ctx->pc = 0x16de34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16de38:
    // 0x16de38: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16de38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16de3c:
    // 0x16de3c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16de40:
    // 0x16de40: 0x86250030  lh          $a1, 0x30($s1)
    ctx->pc = 0x16de40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_16de44:
    // 0x16de44: 0x86260032  lh          $a2, 0x32($s1)
    ctx->pc = 0x16de44u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_16de48:
    // 0x16de48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16de48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16de4c:
    // 0x16de4c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x16de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_16de50:
    // 0x16de50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16de54:
    // 0x16de54: 0x84840080  lh          $a0, 0x80($a0)
    ctx->pc = 0x16de54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
label_16de58:
    // 0x16de58: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16de5c:
    // 0x16de5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16de60:
    // 0x16de60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16de64:
    // 0x16de64: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16de64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16de68:
    // 0x16de68: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16de68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16de6c:
    // 0x16de6c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x16de6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_16de70:
    // 0x16de70: 0x320f809  jalr        $t9
label_16de74:
    if (ctx->pc == 0x16DE74u) {
        ctx->pc = 0x16DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE70u;
        // 0x16de74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE78u;
        goto label_16de78;
    }
    ctx->pc = 0x16DE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DE78u);
        ctx->pc = 0x16DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE70u;
        // 0x16de74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DE70u, 0x16DE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DE78u;
label_16de78:
    // 0x16de78: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16de78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16de7c:
    // 0x16de7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16de7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16de80:
    // 0x16de80: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x16de80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_16de84:
    // 0x16de84: 0x320f809  jalr        $t9
label_16de88:
    if (ctx->pc == 0x16DE88u) {
        ctx->pc = 0x16DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE84u;
        // 0x16de88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE8Cu;
        goto label_16de8c;
    }
    ctx->pc = 0x16DE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DE8Cu);
        ctx->pc = 0x16DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE84u;
        // 0x16de88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DE84u, 0x16DE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DE8Cu;
label_16de8c:
    // 0x16de8c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16de8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16de90:
    // 0x16de90: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x16de90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_16de94:
    // 0x16de94: 0x320f809  jalr        $t9
label_16de98:
    if (ctx->pc == 0x16DE98u) {
        ctx->pc = 0x16DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE94u;
        // 0x16de98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE9Cu;
        goto label_16de9c;
    }
    ctx->pc = 0x16DE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DE9Cu);
        ctx->pc = 0x16DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE94u;
        // 0x16de98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DE94u, 0x16DE9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DE9Cu;
label_16de9c:
    // 0x16de9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16de9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16dea0:
    // 0x16dea0: 0xc04c6dc  jal         func_131B70
label_16dea4:
    if (ctx->pc == 0x16DEA4u) {
        ctx->pc = 0x16DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEA0u;
        // 0x16dea4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEA8u;
        goto label_16dea8;
    }
    ctx->pc = 0x16DEA0u;
    SET_GPR_U32(ctx, 31, 0x16DEA8u);
    ctx->pc = 0x16DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEA0u;
    // 0x16dea4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x16DEA0u, 0x16DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEA8u;
label_16dea8:
    // 0x16dea8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16dea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16deac:
    // 0x16deac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16deacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16deb0:
    // 0x16deb0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x16deb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_16deb4:
    // 0x16deb4: 0x320f809  jalr        $t9
label_16deb8:
    if (ctx->pc == 0x16DEB8u) {
        ctx->pc = 0x16DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEB4u;
        // 0x16deb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEBCu;
        goto label_16debc;
    }
    ctx->pc = 0x16DEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16DEBCu);
        ctx->pc = 0x16DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEB4u;
        // 0x16deb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DEB4u, 0x16DEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DEBCu;
label_16debc:
    // 0x16debc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16debcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16dec0:
    // 0x16dec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16dec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16dec4:
    // 0x16dec4: 0xc04c72c  jal         func_131CB0
label_16dec8:
    if (ctx->pc == 0x16DEC8u) {
        ctx->pc = 0x16DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEC4u;
        // 0x16dec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DECCu;
        goto label_16decc;
    }
    ctx->pc = 0x16DEC4u;
    SET_GPR_U32(ctx, 31, 0x16DECCu);
    ctx->pc = 0x16DEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEC4u;
    // 0x16dec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x16DEC4u, 0x16DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DECCu;
label_16decc:
    // 0x16decc: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
label_16ded0:
    if (ctx->pc == 0x16DED0u) {
        ctx->pc = 0x16DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DECCu;
        // 0x16ded0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DED4u;
        goto label_16ded4;
    }
    ctx->pc = 0x16DECCu;
    {
        const bool branch_taken_0x16decc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DECCu;
        // 0x16ded0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16decc) {
            ctx->pc = 0x16DFECu;
            goto label_16dfec;
        }
    }
    ctx->pc = 0x16DED4u;
label_16ded4:
    // 0x16ded4: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
label_16ded8:
    if (ctx->pc == 0x16DED8u) {
        ctx->pc = 0x16DEDCu;
        goto label_16dedc;
    }
    ctx->pc = 0x16DED4u;
    {
        const bool branch_taken_0x16ded4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ded4) {
            ctx->pc = 0x16DF00u;
            goto label_16df00;
        }
    }
    ctx->pc = 0x16DEDCu;
label_16dedc:
    // 0x16dedc: 0xc66d021c  lwc1        $f13, 0x21C($s3)
    ctx->pc = 0x16dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16dee0:
    // 0x16dee0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x16dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_16dee4:
    // 0x16dee4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16dee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16dee8:
    // 0x16dee8: 0xc05be24  jal         func_16F890
label_16deec:
    if (ctx->pc == 0x16DEECu) {
        ctx->pc = 0x16DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEE8u;
        // 0x16deec: 0x460da382  mul.s       $f14, $f20, $f13 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEF0u;
        goto label_16def0;
    }
    ctx->pc = 0x16DEE8u;
    SET_GPR_U32(ctx, 31, 0x16DEF0u);
    ctx->pc = 0x16DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEE8u;
    // 0x16deec: 0x460da382  mul.s       $f14, $f20, $f13 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F890u, 0x16DEE8u, 0x16DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEF0u;
label_16def0:
    // 0x16def0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x16def0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16def4:
    // 0x16def4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16def4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16def8:
    // 0x16def8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_16defc:
    if (ctx->pc == 0x16DEFCu) {
        ctx->pc = 0x16DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEF8u;
        // 0x16defc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF00u;
        goto label_16df00;
    }
    ctx->pc = 0x16DEF8u;
    {
        const bool branch_taken_0x16def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEF8u;
        // 0x16defc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16def8) {
            ctx->pc = 0x16DFECu;
            goto label_16dfec;
        }
    }
    ctx->pc = 0x16DF00u;
label_16df00:
    // 0x16df00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16df04:
    // 0x16df04: 0x16420039  bne         $s2, $v0, . + 4 + (0x39 << 2)
label_16df08:
    if (ctx->pc == 0x16DF08u) {
        ctx->pc = 0x16DF0Cu;
        goto label_16df0c;
    }
    ctx->pc = 0x16DF04u;
    {
        const bool branch_taken_0x16df04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16df04) {
            ctx->pc = 0x16DFECu;
            goto label_16dfec;
        }
    }
    ctx->pc = 0x16DF0Cu;
label_16df0c:
    // 0x16df0c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x16df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16df10:
    // 0x16df10: 0xc0802aa  jal         func_200AA8
label_16df14:
    if (ctx->pc == 0x16DF14u) {
        ctx->pc = 0x16DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF10u;
        // 0x16df14: 0xc4550058  lwc1        $f21, 0x58($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF18u;
        goto label_16df18;
    }
    ctx->pc = 0x16DF10u;
    SET_GPR_U32(ctx, 31, 0x16DF18u);
    ctx->pc = 0x16DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF10u;
    // 0x16df14: 0xc4550058  lwc1        $f21, 0x58($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16DF10u, 0x16DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF18u;
label_16df18:
    // 0x16df18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16df18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16df1c:
    // 0x16df1c: 0x0  nop
    ctx->pc = 0x16df1cu;
    // NOP
label_16df20:
    // 0x16df20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16df20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16df24:
    // 0x16df24: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x16df24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
label_16df28:
    // 0x16df28: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x16df28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_16df2c:
    // 0x16df2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16df2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16df30:
    // 0x16df30: 0x0  nop
    ctx->pc = 0x16df30u;
    // NOP
label_16df34:
    // 0x16df34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16df34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_16df38:
    // 0x16df38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x16df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16df3c:
    // 0x16df3c: 0xc4540058  lwc1        $f20, 0x58($v0)
    ctx->pc = 0x16df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16df40:
    // 0x16df40: 0x0  nop
    ctx->pc = 0x16df40u;
    // NOP
label_16df44:
    // 0x16df44: 0x0  nop
    ctx->pc = 0x16df44u;
    // NOP
label_16df48:
    // 0x16df48: 0xc0802aa  jal         func_200AA8
label_16df4c:
    if (ctx->pc == 0x16DF4Cu) {
        ctx->pc = 0x16DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF48u;
        // 0x16df4c: 0x46150541  sub.s       $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF50u;
        goto label_16df50;
    }
    ctx->pc = 0x16DF48u;
    SET_GPR_U32(ctx, 31, 0x16DF50u);
    ctx->pc = 0x16DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF48u;
    // 0x16df4c: 0x46150541  sub.s       $f21, $f0, $f21 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16DF48u, 0x16DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF50u;
label_16df50:
    // 0x16df50: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16df50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16df54:
    // 0x16df54: 0x8e630210  lw          $v1, 0x210($s3)
    ctx->pc = 0x16df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16df58:
    // 0x16df58: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16df5c:
    // 0x16df5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16df5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_16df60:
    // 0x16df60: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x16df60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
label_16df64:
    // 0x16df64: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x16df64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_16df68:
    // 0x16df68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16df68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16df6c:
    // 0x16df6c: 0x0  nop
    ctx->pc = 0x16df6cu;
    // NOP
label_16df70:
    // 0x16df70: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x16df70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_16df74:
    // 0x16df74: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x16df74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16df78:
    // 0x16df78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_16df7c:
    // 0x16df7c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x16df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_16df80:
    // 0x16df80: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x16df80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_16df84:
    // 0x16df84: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x16df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16df88:
    // 0x16df88: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x16df88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_16df8c:
    // 0x16df8c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x16df8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_16df90:
    // 0x16df90: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x16df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16df94:
    // 0x16df94: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16df98:
    // 0x16df98: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x16df98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_16df9c:
    // 0x16df9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_16dfa0:
    // 0x16dfa0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x16dfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_16dfa4:
    // 0x16dfa4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x16dfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_16dfa8:
    // 0x16dfa8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x16dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16dfac:
    // 0x16dfac: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x16dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16dfb0:
    // 0x16dfb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16dfb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16dfb4:
    // 0x16dfb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_16dfb8:
    // 0x16dfb8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x16dfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_16dfbc:
    // 0x16dfbc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x16dfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_16dfc0:
    // 0x16dfc0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16dfc4:
    // 0x16dfc4: 0x8e630210  lw          $v1, 0x210($s3)
    ctx->pc = 0x16dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16dfc8:
    // 0x16dfc8: 0x8e620224  lw          $v0, 0x224($s3)
    ctx->pc = 0x16dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
label_16dfcc:
    // 0x16dfcc: 0xc4ae0054  lwc1        $f14, 0x54($a1)
    ctx->pc = 0x16dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_16dfd0:
    // 0x16dfd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16dfd4:
    // 0x16dfd4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x16dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16dfd8:
    // 0x16dfd8: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x16dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_16dfdc:
    // 0x16dfdc: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x16dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16dfe0:
    // 0x16dfe0: 0xc4ad004c  lwc1        $f13, 0x4C($a1)
    ctx->pc = 0x16dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16dfe4:
    // 0x16dfe4: 0xc05bb04  jal         func_16EC10
label_16dfe8:
    if (ctx->pc == 0x16DFE8u) {
        ctx->pc = 0x16DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFE4u;
        // 0x16dfe8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DFECu;
        goto label_16dfec;
    }
    ctx->pc = 0x16DFE4u;
    SET_GPR_U32(ctx, 31, 0x16DFECu);
    ctx->pc = 0x16DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFE4u;
    // 0x16dfe8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EC10u, 0x16DFE4u, 0x16DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFECu;
label_16dfec:
    // 0x16dfec: 0x0  nop
    ctx->pc = 0x16dfecu;
    // NOP
label_16dff0:
    // 0x16dff0: 0x8f858608  lw          $a1, -0x79F8($gp)
    ctx->pc = 0x16dff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16dff4:
    // 0x16dff4: 0x8f8483a8  lw          $a0, -0x7C58($gp)
    ctx->pc = 0x16dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16dff8:
    // 0x16dff8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x16dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16dffc:
    // 0x16dffc: 0x8e630210  lw          $v1, 0x210($s3)
    ctx->pc = 0x16dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16e000:
    // 0x16e000: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_16e004:
    // 0x16e004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16e004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_16e008:
    // 0x16e008: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x16e008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16e00c:
    // 0x16e00c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16e00cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_16e010:
    // 0x16e010: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16e010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_16e014:
    // 0x16e014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e018:
    // 0x16e018: 0x84450080  lh          $a1, 0x80($v0)
    ctx->pc = 0x16e018u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_16e01c:
    // 0x16e01c: 0xc0466c4  jal         func_119B10
label_16e020:
    if (ctx->pc == 0x16E020u) {
        ctx->pc = 0x16E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E01Cu;
        // 0x16e020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E024u;
        goto label_16e024;
    }
    ctx->pc = 0x16E01Cu;
    SET_GPR_U32(ctx, 31, 0x16E024u);
    ctx->pc = 0x16E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E01Cu;
    // 0x16e020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B10u, 0x16E01Cu, 0x16E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E024u;
label_16e024:
    // 0x16e024: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x16e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16e028:
    // 0x16e028: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16e02c:
    // 0x16e02c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16e030:
    // 0x16e030: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16e034:
    // 0x16e034: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e038:
    // 0x16e038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e03c:
    // 0x16e03c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x16e03cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16e040:
    // 0x16e040: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x16e040u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_16e044:
    // 0x16e044: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16e048:
    // 0x16e048: 0x86620214  lh          $v0, 0x214($s3)
    ctx->pc = 0x16e048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 532)));
label_16e04c:
    // 0x16e04c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x16e04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16e050:
    // 0x16e050: 0x1440ff48  bnez        $v0, . + 4 + (-0xB8 << 2)
label_16e054:
    if (ctx->pc == 0x16E054u) {
        ctx->pc = 0x16E058u;
        goto label_16e058;
    }
    ctx->pc = 0x16E050u;
    {
        const bool branch_taken_0x16e050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e050) {
            ctx->pc = 0x16DD74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dd74;
        }
    }
    ctx->pc = 0x16E058u;
label_16e058:
    // 0x16e058: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x16e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16e05c:
    // 0x16e05c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e060:
    // 0x16e060: 0x80420022  lb          $v0, 0x22($v0)
    ctx->pc = 0x16e060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_16e064:
    // 0x16e064: 0x1445000e  bne         $v0, $a1, . + 4 + (0xE << 2)
label_16e068:
    if (ctx->pc == 0x16E068u) {
        ctx->pc = 0x16E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E064u;
        // 0x16e068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E06Cu;
        goto label_16e06c;
    }
    ctx->pc = 0x16E064u;
    {
        const bool branch_taken_0x16e064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x16E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E064u;
        // 0x16e068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e064) {
            ctx->pc = 0x16E0A0u;
            goto label_16e0a0;
        }
    }
    ctx->pc = 0x16E06Cu;
label_16e06c:
    // 0x16e06c: 0xc042118  jal         func_108460
label_16e070:
    if (ctx->pc == 0x16E070u) {
        ctx->pc = 0x16E074u;
        goto label_16e074;
    }
    ctx->pc = 0x16E06Cu;
    SET_GPR_U32(ctx, 31, 0x16E074u);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16E06Cu, 0x16E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E074u;
label_16e074:
    // 0x16e074: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x16e074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16e078:
    // 0x16e078: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16e078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16e07c:
    // 0x16e07c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16e080:
    if (ctx->pc == 0x16E080u) {
        ctx->pc = 0x16E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E07Cu;
        // 0x16e080: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E084u;
        goto label_16e084;
    }
    ctx->pc = 0x16E07Cu;
    {
        const bool branch_taken_0x16e07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E07Cu;
        // 0x16e080: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e07c) {
            ctx->pc = 0x16E08Cu;
            goto label_16e08c;
        }
    }
    ctx->pc = 0x16E084u;
label_16e084:
    // 0x16e084: 0x10000004  b           . + 4 + (0x4 << 2)
label_16e088:
    if (ctx->pc == 0x16E088u) {
        ctx->pc = 0x16E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E084u;
        // 0x16e088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E08Cu;
        goto label_16e08c;
    }
    ctx->pc = 0x16E084u;
    {
        const bool branch_taken_0x16e084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E084u;
        // 0x16e088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e084) {
            ctx->pc = 0x16E098u;
            goto label_16e098;
        }
    }
    ctx->pc = 0x16E08Cu;
label_16e08c:
    // 0x16e08c: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16e08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16e090:
    // 0x16e090: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x16e090u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_16e094:
    // 0x16e094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16e094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16e098:
    // 0x16e098: 0xc05ba10  jal         func_16E840
label_16e09c:
    if (ctx->pc == 0x16E09Cu) {
        ctx->pc = 0x16E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E098u;
        // 0x16e09c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0A0u;
        goto label_16e0a0;
    }
    ctx->pc = 0x16E098u;
    SET_GPR_U32(ctx, 31, 0x16E0A0u);
    ctx->pc = 0x16E09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E098u;
    // 0x16e09c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E840u, 0x16E098u, 0x16E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0A0u;
label_16e0a0:
    // 0x16e0a0: 0x86660214  lh          $a2, 0x214($s3)
    ctx->pc = 0x16e0a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 532)));
label_16e0a4:
    // 0x16e0a4: 0x266401e0  addiu       $a0, $s3, 0x1E0
    ctx->pc = 0x16e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
label_16e0a8:
    // 0x16e0a8: 0x8e650210  lw          $a1, 0x210($s3)
    ctx->pc = 0x16e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_16e0ac:
    // 0x16e0ac: 0xc054980  jal         func_152600
label_16e0b0:
    if (ctx->pc == 0x16E0B0u) {
        ctx->pc = 0x16E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0ACu;
        // 0x16e0b0: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0B4u;
        goto label_16e0b4;
    }
    ctx->pc = 0x16E0ACu;
    SET_GPR_U32(ctx, 31, 0x16E0B4u);
    ctx->pc = 0x16E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0ACu;
    // 0x16e0b0: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152600u, 0x16E0ACu, 0x16E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0B4u;
label_16e0b4:
    // 0x16e0b4: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x16e0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e0b8:
    // 0x16e0b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16e0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16e0bc:
    // 0x16e0bc: 0xe6600200  swc1        $f0, 0x200($s3)
    ctx->pc = 0x16e0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
label_16e0c0:
    // 0x16e0c0: 0xa26001d3  sb          $zero, 0x1D3($s3)
    ctx->pc = 0x16e0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 467), (uint8_t)GPR_U32(ctx, 0));
label_16e0c4:
    // 0x16e0c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16e0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16e0c8:
    // 0x16e0c8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16e0cc:
    // 0x16e0cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16e0ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16e0d0:
    // 0x16e0d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16e0d4:
    // 0x16e0d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16e0d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16e0d8:
    // 0x16e0d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16e0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16e0dc:
    // 0x16e0dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16e0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16e0e0:
    // 0x16e0e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16e0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16e0e4:
    // 0x16e0e4: 0x3e00008  jr          $ra
label_16e0e8:
    if (ctx->pc == 0x16E0E8u) {
        ctx->pc = 0x16E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0E4u;
        // 0x16e0e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0ECu;
        goto label_fallthrough_0x16e0e4;
    }
    ctx->pc = 0x16E0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0E4u;
        // 0x16e0e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16e0e4:
    ctx->pc = 0x16E0ECu;
}
