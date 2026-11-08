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

// Function: FUN_001fdd38
// Address: 0x1fdd38 - 0x1fe1c4
void FUN_001fdd38_0x1fdd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fdd38_0x1fdd38");
#endif

    switch (ctx->pc) {
        case 0x1fdd38u: goto label_1fdd38;
        case 0x1fdd3cu: goto label_1fdd3c;
        case 0x1fdd40u: goto label_1fdd40;
        case 0x1fdd44u: goto label_1fdd44;
        case 0x1fdd48u: goto label_1fdd48;
        case 0x1fdd4cu: goto label_1fdd4c;
        case 0x1fdd50u: goto label_1fdd50;
        case 0x1fdd54u: goto label_1fdd54;
        case 0x1fdd58u: goto label_1fdd58;
        case 0x1fdd5cu: goto label_1fdd5c;
        case 0x1fdd60u: goto label_1fdd60;
        case 0x1fdd64u: goto label_1fdd64;
        case 0x1fdd68u: goto label_1fdd68;
        case 0x1fdd6cu: goto label_1fdd6c;
        case 0x1fdd70u: goto label_1fdd70;
        case 0x1fdd74u: goto label_1fdd74;
        case 0x1fdd78u: goto label_1fdd78;
        case 0x1fdd7cu: goto label_1fdd7c;
        case 0x1fdd80u: goto label_1fdd80;
        case 0x1fdd84u: goto label_1fdd84;
        case 0x1fdd88u: goto label_1fdd88;
        case 0x1fdd8cu: goto label_1fdd8c;
        case 0x1fdd90u: goto label_1fdd90;
        case 0x1fdd94u: goto label_1fdd94;
        case 0x1fdd98u: goto label_1fdd98;
        case 0x1fdd9cu: goto label_1fdd9c;
        case 0x1fdda0u: goto label_1fdda0;
        case 0x1fdda4u: goto label_1fdda4;
        case 0x1fdda8u: goto label_1fdda8;
        case 0x1fddacu: goto label_1fddac;
        case 0x1fddb0u: goto label_1fddb0;
        case 0x1fddb4u: goto label_1fddb4;
        case 0x1fddb8u: goto label_1fddb8;
        case 0x1fddbcu: goto label_1fddbc;
        case 0x1fddc0u: goto label_1fddc0;
        case 0x1fddc4u: goto label_1fddc4;
        case 0x1fddc8u: goto label_1fddc8;
        case 0x1fddccu: goto label_1fddcc;
        case 0x1fddd0u: goto label_1fddd0;
        case 0x1fddd4u: goto label_1fddd4;
        case 0x1fddd8u: goto label_1fddd8;
        case 0x1fdddcu: goto label_1fdddc;
        case 0x1fdde0u: goto label_1fdde0;
        case 0x1fdde4u: goto label_1fdde4;
        case 0x1fdde8u: goto label_1fdde8;
        case 0x1fddecu: goto label_1fddec;
        case 0x1fddf0u: goto label_1fddf0;
        case 0x1fddf4u: goto label_1fddf4;
        case 0x1fddf8u: goto label_1fddf8;
        case 0x1fddfcu: goto label_1fddfc;
        case 0x1fde00u: goto label_1fde00;
        case 0x1fde04u: goto label_1fde04;
        case 0x1fde08u: goto label_1fde08;
        case 0x1fde0cu: goto label_1fde0c;
        case 0x1fde10u: goto label_1fde10;
        case 0x1fde14u: goto label_1fde14;
        case 0x1fde18u: goto label_1fde18;
        case 0x1fde1cu: goto label_1fde1c;
        case 0x1fde20u: goto label_1fde20;
        case 0x1fde24u: goto label_1fde24;
        case 0x1fde28u: goto label_1fde28;
        case 0x1fde2cu: goto label_1fde2c;
        case 0x1fde30u: goto label_1fde30;
        case 0x1fde34u: goto label_1fde34;
        case 0x1fde38u: goto label_1fde38;
        case 0x1fde3cu: goto label_1fde3c;
        case 0x1fde40u: goto label_1fde40;
        case 0x1fde44u: goto label_1fde44;
        case 0x1fde48u: goto label_1fde48;
        case 0x1fde4cu: goto label_1fde4c;
        case 0x1fde50u: goto label_1fde50;
        case 0x1fde54u: goto label_1fde54;
        case 0x1fde58u: goto label_1fde58;
        case 0x1fde5cu: goto label_1fde5c;
        case 0x1fde60u: goto label_1fde60;
        case 0x1fde64u: goto label_1fde64;
        case 0x1fde68u: goto label_1fde68;
        case 0x1fde6cu: goto label_1fde6c;
        case 0x1fde70u: goto label_1fde70;
        case 0x1fde74u: goto label_1fde74;
        case 0x1fde78u: goto label_1fde78;
        case 0x1fde7cu: goto label_1fde7c;
        case 0x1fde80u: goto label_1fde80;
        case 0x1fde84u: goto label_1fde84;
        case 0x1fde88u: goto label_1fde88;
        case 0x1fde8cu: goto label_1fde8c;
        case 0x1fde90u: goto label_1fde90;
        case 0x1fde94u: goto label_1fde94;
        case 0x1fde98u: goto label_1fde98;
        case 0x1fde9cu: goto label_1fde9c;
        case 0x1fdea0u: goto label_1fdea0;
        case 0x1fdea4u: goto label_1fdea4;
        case 0x1fdea8u: goto label_1fdea8;
        case 0x1fdeacu: goto label_1fdeac;
        case 0x1fdeb0u: goto label_1fdeb0;
        case 0x1fdeb4u: goto label_1fdeb4;
        case 0x1fdeb8u: goto label_1fdeb8;
        case 0x1fdebcu: goto label_1fdebc;
        case 0x1fdec0u: goto label_1fdec0;
        case 0x1fdec4u: goto label_1fdec4;
        case 0x1fdec8u: goto label_1fdec8;
        case 0x1fdeccu: goto label_1fdecc;
        case 0x1fded0u: goto label_1fded0;
        case 0x1fded4u: goto label_1fded4;
        case 0x1fded8u: goto label_1fded8;
        case 0x1fdedcu: goto label_1fdedc;
        case 0x1fdee0u: goto label_1fdee0;
        case 0x1fdee4u: goto label_1fdee4;
        case 0x1fdee8u: goto label_1fdee8;
        case 0x1fdeecu: goto label_1fdeec;
        case 0x1fdef0u: goto label_1fdef0;
        case 0x1fdef4u: goto label_1fdef4;
        case 0x1fdef8u: goto label_1fdef8;
        case 0x1fdefcu: goto label_1fdefc;
        case 0x1fdf00u: goto label_1fdf00;
        case 0x1fdf04u: goto label_1fdf04;
        case 0x1fdf08u: goto label_1fdf08;
        case 0x1fdf0cu: goto label_1fdf0c;
        case 0x1fdf10u: goto label_1fdf10;
        case 0x1fdf14u: goto label_1fdf14;
        case 0x1fdf18u: goto label_1fdf18;
        case 0x1fdf1cu: goto label_1fdf1c;
        case 0x1fdf20u: goto label_1fdf20;
        case 0x1fdf24u: goto label_1fdf24;
        case 0x1fdf28u: goto label_1fdf28;
        case 0x1fdf2cu: goto label_1fdf2c;
        case 0x1fdf30u: goto label_1fdf30;
        case 0x1fdf34u: goto label_1fdf34;
        case 0x1fdf38u: goto label_1fdf38;
        case 0x1fdf3cu: goto label_1fdf3c;
        case 0x1fdf40u: goto label_1fdf40;
        case 0x1fdf44u: goto label_1fdf44;
        case 0x1fdf48u: goto label_1fdf48;
        case 0x1fdf4cu: goto label_1fdf4c;
        case 0x1fdf50u: goto label_1fdf50;
        case 0x1fdf54u: goto label_1fdf54;
        case 0x1fdf58u: goto label_1fdf58;
        case 0x1fdf5cu: goto label_1fdf5c;
        case 0x1fdf60u: goto label_1fdf60;
        case 0x1fdf64u: goto label_1fdf64;
        case 0x1fdf68u: goto label_1fdf68;
        case 0x1fdf6cu: goto label_1fdf6c;
        case 0x1fdf70u: goto label_1fdf70;
        case 0x1fdf74u: goto label_1fdf74;
        case 0x1fdf78u: goto label_1fdf78;
        case 0x1fdf7cu: goto label_1fdf7c;
        case 0x1fdf80u: goto label_1fdf80;
        case 0x1fdf84u: goto label_1fdf84;
        case 0x1fdf88u: goto label_1fdf88;
        case 0x1fdf8cu: goto label_1fdf8c;
        case 0x1fdf90u: goto label_1fdf90;
        case 0x1fdf94u: goto label_1fdf94;
        case 0x1fdf98u: goto label_1fdf98;
        case 0x1fdf9cu: goto label_1fdf9c;
        case 0x1fdfa0u: goto label_1fdfa0;
        case 0x1fdfa4u: goto label_1fdfa4;
        case 0x1fdfa8u: goto label_1fdfa8;
        case 0x1fdfacu: goto label_1fdfac;
        case 0x1fdfb0u: goto label_1fdfb0;
        case 0x1fdfb4u: goto label_1fdfb4;
        case 0x1fdfb8u: goto label_1fdfb8;
        case 0x1fdfbcu: goto label_1fdfbc;
        case 0x1fdfc0u: goto label_1fdfc0;
        case 0x1fdfc4u: goto label_1fdfc4;
        case 0x1fdfc8u: goto label_1fdfc8;
        case 0x1fdfccu: goto label_1fdfcc;
        case 0x1fdfd0u: goto label_1fdfd0;
        case 0x1fdfd4u: goto label_1fdfd4;
        case 0x1fdfd8u: goto label_1fdfd8;
        case 0x1fdfdcu: goto label_1fdfdc;
        case 0x1fdfe0u: goto label_1fdfe0;
        case 0x1fdfe4u: goto label_1fdfe4;
        case 0x1fdfe8u: goto label_1fdfe8;
        case 0x1fdfecu: goto label_1fdfec;
        case 0x1fdff0u: goto label_1fdff0;
        case 0x1fdff4u: goto label_1fdff4;
        case 0x1fdff8u: goto label_1fdff8;
        case 0x1fdffcu: goto label_1fdffc;
        case 0x1fe000u: goto label_1fe000;
        case 0x1fe004u: goto label_1fe004;
        case 0x1fe008u: goto label_1fe008;
        case 0x1fe00cu: goto label_1fe00c;
        case 0x1fe010u: goto label_1fe010;
        case 0x1fe014u: goto label_1fe014;
        case 0x1fe018u: goto label_1fe018;
        case 0x1fe01cu: goto label_1fe01c;
        case 0x1fe020u: goto label_1fe020;
        case 0x1fe024u: goto label_1fe024;
        case 0x1fe028u: goto label_1fe028;
        case 0x1fe02cu: goto label_1fe02c;
        case 0x1fe030u: goto label_1fe030;
        case 0x1fe034u: goto label_1fe034;
        case 0x1fe038u: goto label_1fe038;
        case 0x1fe03cu: goto label_1fe03c;
        case 0x1fe040u: goto label_1fe040;
        case 0x1fe044u: goto label_1fe044;
        case 0x1fe048u: goto label_1fe048;
        case 0x1fe04cu: goto label_1fe04c;
        case 0x1fe050u: goto label_1fe050;
        case 0x1fe054u: goto label_1fe054;
        case 0x1fe058u: goto label_1fe058;
        case 0x1fe05cu: goto label_1fe05c;
        case 0x1fe060u: goto label_1fe060;
        case 0x1fe064u: goto label_1fe064;
        case 0x1fe068u: goto label_1fe068;
        case 0x1fe06cu: goto label_1fe06c;
        case 0x1fe070u: goto label_1fe070;
        case 0x1fe074u: goto label_1fe074;
        case 0x1fe078u: goto label_1fe078;
        case 0x1fe07cu: goto label_1fe07c;
        case 0x1fe080u: goto label_1fe080;
        case 0x1fe084u: goto label_1fe084;
        case 0x1fe088u: goto label_1fe088;
        case 0x1fe08cu: goto label_1fe08c;
        case 0x1fe090u: goto label_1fe090;
        case 0x1fe094u: goto label_1fe094;
        case 0x1fe098u: goto label_1fe098;
        case 0x1fe09cu: goto label_1fe09c;
        case 0x1fe0a0u: goto label_1fe0a0;
        case 0x1fe0a4u: goto label_1fe0a4;
        case 0x1fe0a8u: goto label_1fe0a8;
        case 0x1fe0acu: goto label_1fe0ac;
        case 0x1fe0b0u: goto label_1fe0b0;
        case 0x1fe0b4u: goto label_1fe0b4;
        case 0x1fe0b8u: goto label_1fe0b8;
        case 0x1fe0bcu: goto label_1fe0bc;
        case 0x1fe0c0u: goto label_1fe0c0;
        case 0x1fe0c4u: goto label_1fe0c4;
        case 0x1fe0c8u: goto label_1fe0c8;
        case 0x1fe0ccu: goto label_1fe0cc;
        case 0x1fe0d0u: goto label_1fe0d0;
        case 0x1fe0d4u: goto label_1fe0d4;
        case 0x1fe0d8u: goto label_1fe0d8;
        case 0x1fe0dcu: goto label_1fe0dc;
        case 0x1fe0e0u: goto label_1fe0e0;
        case 0x1fe0e4u: goto label_1fe0e4;
        case 0x1fe0e8u: goto label_1fe0e8;
        case 0x1fe0ecu: goto label_1fe0ec;
        case 0x1fe0f0u: goto label_1fe0f0;
        case 0x1fe0f4u: goto label_1fe0f4;
        case 0x1fe0f8u: goto label_1fe0f8;
        case 0x1fe0fcu: goto label_1fe0fc;
        case 0x1fe100u: goto label_1fe100;
        case 0x1fe104u: goto label_1fe104;
        case 0x1fe108u: goto label_1fe108;
        case 0x1fe10cu: goto label_1fe10c;
        case 0x1fe110u: goto label_1fe110;
        case 0x1fe114u: goto label_1fe114;
        case 0x1fe118u: goto label_1fe118;
        case 0x1fe11cu: goto label_1fe11c;
        case 0x1fe120u: goto label_1fe120;
        case 0x1fe124u: goto label_1fe124;
        case 0x1fe128u: goto label_1fe128;
        case 0x1fe12cu: goto label_1fe12c;
        case 0x1fe130u: goto label_1fe130;
        case 0x1fe134u: goto label_1fe134;
        case 0x1fe138u: goto label_1fe138;
        case 0x1fe13cu: goto label_1fe13c;
        case 0x1fe140u: goto label_1fe140;
        case 0x1fe144u: goto label_1fe144;
        case 0x1fe148u: goto label_1fe148;
        case 0x1fe14cu: goto label_1fe14c;
        case 0x1fe150u: goto label_1fe150;
        case 0x1fe154u: goto label_1fe154;
        case 0x1fe158u: goto label_1fe158;
        case 0x1fe15cu: goto label_1fe15c;
        case 0x1fe160u: goto label_1fe160;
        case 0x1fe164u: goto label_1fe164;
        case 0x1fe168u: goto label_1fe168;
        case 0x1fe16cu: goto label_1fe16c;
        case 0x1fe170u: goto label_1fe170;
        case 0x1fe174u: goto label_1fe174;
        case 0x1fe178u: goto label_1fe178;
        case 0x1fe17cu: goto label_1fe17c;
        case 0x1fe180u: goto label_1fe180;
        case 0x1fe184u: goto label_1fe184;
        case 0x1fe188u: goto label_1fe188;
        case 0x1fe18cu: goto label_1fe18c;
        case 0x1fe190u: goto label_1fe190;
        case 0x1fe194u: goto label_1fe194;
        case 0x1fe198u: goto label_1fe198;
        case 0x1fe19cu: goto label_1fe19c;
        case 0x1fe1a0u: goto label_1fe1a0;
        case 0x1fe1a4u: goto label_1fe1a4;
        case 0x1fe1a8u: goto label_1fe1a8;
        case 0x1fe1acu: goto label_1fe1ac;
        case 0x1fe1b0u: goto label_1fe1b0;
        case 0x1fe1b4u: goto label_1fe1b4;
        case 0x1fe1b8u: goto label_1fe1b8;
        case 0x1fe1bcu: goto label_1fe1bc;
        case 0x1fe1c0u: goto label_1fe1c0;
        default: break;
    }

    ctx->pc = 0x1fdd38u;

label_1fdd38:
    // 0x1fdd38: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1fdd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1fdd3c:
    // 0x1fdd3c: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x1fdd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
label_1fdd40:
    // 0x1fdd40: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1fdd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_1fdd44:
    // 0x1fdd44: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1fdd44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fdd48:
    // 0x1fdd48: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1fdd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_1fdd4c:
    // 0x1fdd4c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1fdd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_1fdd50:
    // 0x1fdd50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdd54:
    // 0x1fdd54: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x1fdd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
label_1fdd58:
    // 0x1fdd58: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x1fdd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
label_1fdd5c:
    // 0x1fdd5c: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x1fdd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
label_1fdd60:
    // 0x1fdd60: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1fdd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_1fdd64:
    // 0x1fdd64: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x1fdd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_1fdd68:
    // 0x1fdd68: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x1fdd68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1fdd6c:
    // 0x1fdd6c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1fdd70:
    if (ctx->pc == 0x1FDD70u) {
        ctx->pc = 0x1FDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD6Cu;
        // 0x1fdd70: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDD74u;
        goto label_1fdd74;
    }
    ctx->pc = 0x1FDD6Cu;
    {
        const bool branch_taken_0x1fdd6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD6Cu;
        // 0x1fdd70: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd6c) {
            ctx->pc = 0x1FDD88u;
            goto label_1fdd88;
        }
    }
    ctx->pc = 0x1FDD74u;
label_1fdd74:
    // 0x1fdd74: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fdd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1fdd78:
    // 0x1fdd78: 0x8c43d9ac  lw          $v1, -0x2654($v0)
    ctx->pc = 0x1fdd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957484)));
label_1fdd7c:
    // 0x1fdd7c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1fdd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_1fdd80:
    // 0x1fdd80: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1fdd80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fdd84:
    // 0x1fdd84: 0x0  nop
    ctx->pc = 0x1fdd84u;
    // NOP
label_1fdd88:
    // 0x1fdd88: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1fdd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1fdd8c:
    // 0x1fdd8c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1fdd90:
    if (ctx->pc == 0x1FDD90u) {
        ctx->pc = 0x1FDD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD8Cu;
        // 0x1fdd90: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDD94u;
        goto label_1fdd94;
    }
    ctx->pc = 0x1FDD8Cu;
    {
        const bool branch_taken_0x1fdd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd8c) {
            ctx->pc = 0x1FDD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDD8Cu;
            // 0x1fdd90: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDDA4u;
            goto label_1fdda4;
        }
    }
    ctx->pc = 0x1FDD94u;
label_1fdd94:
    // 0x1fdd94: 0xc07f5b0  jal         func_1FD6C0
label_1fdd98:
    if (ctx->pc == 0x1FDD98u) {
        ctx->pc = 0x1FDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD94u;
        // 0x1fdd98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDD9Cu;
        goto label_1fdd9c;
    }
    ctx->pc = 0x1FDD94u;
    SET_GPR_U32(ctx, 31, 0x1FDD9Cu);
    ctx->pc = 0x1FDD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD94u;
    // 0x1fdd98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x1FDD94u, 0x1FDD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD9Cu;
label_1fdd9c:
    // 0x1fdd9c: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x1fdd9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1fdda0:
    // 0x1fdda0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fdda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1fdda4:
    // 0x1fdda4: 0x24030108  addiu       $v1, $zero, 0x108
    ctx->pc = 0x1fdda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_1fdda8:
    // 0x1fdda8: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x1fdda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
label_1fddac:
    // 0x1fddac: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_1fddb0:
    if (ctx->pc == 0x1FDDB0u) {
        ctx->pc = 0x1FDDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDACu;
        // 0x1fddb0: 0x8e150028  lw          $s5, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDB4u;
        goto label_1fddb4;
    }
    ctx->pc = 0x1FDDACu;
    {
        const bool branch_taken_0x1fddac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fddac) {
            ctx->pc = 0x1FDDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDDACu;
            // 0x1fddb0: 0x8e150028  lw          $s5, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDDC0u;
            goto label_1fddc0;
        }
    }
    ctx->pc = 0x1FDDB4u;
label_1fddb4:
    // 0x1fddb4: 0xc07f4fc  jal         func_1FD3F0
label_1fddb8:
    if (ctx->pc == 0x1FDDB8u) {
        ctx->pc = 0x1FDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDB4u;
        // 0x1fddb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDBCu;
        goto label_1fddbc;
    }
    ctx->pc = 0x1FDDB4u;
    SET_GPR_U32(ctx, 31, 0x1FDDBCu);
    ctx->pc = 0x1FDDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDDB4u;
    // 0x1fddb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FDDB4u, 0x1FDDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDDBCu;
label_1fddbc:
    // 0x1fddbc: 0x8e150028  lw          $s5, 0x28($s0)
    ctx->pc = 0x1fddbcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1fddc0:
    // 0x1fddc0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_1fddc4:
    if (ctx->pc == 0x1FDDC4u) {
        ctx->pc = 0x1FDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDC0u;
        // 0x1fddc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDC8u;
        goto label_1fddc8;
    }
    ctx->pc = 0x1FDDC0u;
    {
        const bool branch_taken_0x1fddc0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDC0u;
        // 0x1fddc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddc0) {
            ctx->pc = 0x1FDDD0u;
            goto label_1fddd0;
        }
    }
    ctx->pc = 0x1FDDC8u;
label_1fddc8:
    // 0x1fddc8: 0x10000038  b           . + 4 + (0x38 << 2)
label_1fddcc:
    if (ctx->pc == 0x1FDDCCu) {
        ctx->pc = 0x1FDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDC8u;
        // 0x1fddcc: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDD0u;
        goto label_1fddd0;
    }
    ctx->pc = 0x1FDDC8u;
    {
        const bool branch_taken_0x1fddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDC8u;
        // 0x1fddcc: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddc8) {
            ctx->pc = 0x1FDEACu;
            goto label_1fdeac;
        }
    }
    ctx->pc = 0x1FDDD0u;
label_1fddd0:
    // 0x1fddd0: 0x1282000b  beq         $s4, $v0, . + 4 + (0xB << 2)
label_1fddd4:
    if (ctx->pc == 0x1FDDD4u) {
        ctx->pc = 0x1FDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDD0u;
        // 0x1fddd4: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDD8u;
        goto label_1fddd8;
    }
    ctx->pc = 0x1FDDD0u;
    {
        const bool branch_taken_0x1fddd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDD0u;
        // 0x1fddd4: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddd0) {
            ctx->pc = 0x1FDE00u;
            goto label_1fde00;
        }
    }
    ctx->pc = 0x1FDDD8u;
label_1fddd8:
    // 0x1fddd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1fdddc:
    if (ctx->pc == 0x1FDDDCu) {
        ctx->pc = 0x1FDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDD8u;
        // 0x1fdddc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDE0u;
        goto label_1fdde0;
    }
    ctx->pc = 0x1FDDD8u;
    {
        const bool branch_taken_0x1fddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDD8u;
        // 0x1fdddc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddd8) {
            ctx->pc = 0x1FDDF0u;
            goto label_1fddf0;
        }
    }
    ctx->pc = 0x1FDDE0u;
label_1fdde0:
    // 0x1fdde0: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
label_1fdde4:
    if (ctx->pc == 0x1FDDE4u) {
        ctx->pc = 0x1FDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDE0u;
        // 0x1fdde4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDE8u;
        goto label_1fdde8;
    }
    ctx->pc = 0x1FDDE0u;
    {
        const bool branch_taken_0x1fdde0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDE0u;
        // 0x1fdde4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdde0) {
            ctx->pc = 0x1FDEA0u;
            goto label_1fdea0;
        }
    }
    ctx->pc = 0x1FDDE8u;
label_1fdde8:
    // 0x1fdde8: 0x10000031  b           . + 4 + (0x31 << 2)
label_1fddec:
    if (ctx->pc == 0x1FDDECu) {
        ctx->pc = 0x1FDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDE8u;
        // 0x1fddec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDF0u;
        goto label_1fddf0;
    }
    ctx->pc = 0x1FDDE8u;
    {
        const bool branch_taken_0x1fdde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDE8u;
        // 0x1fddec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdde8) {
            ctx->pc = 0x1FDEB0u;
            goto label_1fdeb0;
        }
    }
    ctx->pc = 0x1FDDF0u;
label_1fddf0:
    // 0x1fddf0: 0x1282002b  beq         $s4, $v0, . + 4 + (0x2B << 2)
label_1fddf4:
    if (ctx->pc == 0x1FDDF4u) {
        ctx->pc = 0x1FDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF0u;
        // 0x1fddf4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDF8u;
        goto label_1fddf8;
    }
    ctx->pc = 0x1FDDF0u;
    {
        const bool branch_taken_0x1fddf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF0u;
        // 0x1fddf4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddf0) {
            ctx->pc = 0x1FDEA0u;
            goto label_1fdea0;
        }
    }
    ctx->pc = 0x1FDDF8u;
label_1fddf8:
    // 0x1fddf8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1fddfc:
    if (ctx->pc == 0x1FDDFCu) {
        ctx->pc = 0x1FDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF8u;
        // 0x1fddfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE00u;
        goto label_1fde00;
    }
    ctx->pc = 0x1FDDF8u;
    {
        const bool branch_taken_0x1fddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF8u;
        // 0x1fddfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddf8) {
            ctx->pc = 0x1FDEB0u;
            goto label_1fdeb0;
        }
    }
    ctx->pc = 0x1FDE00u;
label_1fde00:
    // 0x1fde00: 0xc07f4fc  jal         func_1FD3F0
label_1fde04:
    if (ctx->pc == 0x1FDE04u) {
        ctx->pc = 0x1FDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE00u;
        // 0x1fde04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE08u;
        goto label_1fde08;
    }
    ctx->pc = 0x1FDE00u;
    SET_GPR_U32(ctx, 31, 0x1FDE08u);
    ctx->pc = 0x1FDE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE00u;
    // 0x1fde04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FDE00u, 0x1FDE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE08u;
label_1fde08:
    // 0x1fde08: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x1fde08u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fde0c:
    // 0x1fde0c: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x1fde0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
label_1fde10:
    // 0x1fde10: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1fde14:
    if (ctx->pc == 0x1FDE14u) {
        ctx->pc = 0x1FDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE10u;
        // 0x1fde14: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE18u;
        goto label_1fde18;
    }
    ctx->pc = 0x1FDE10u;
    {
        const bool branch_taken_0x1fde10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fde10) {
            ctx->pc = 0x1FDE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDE10u;
            // 0x1fde14: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDE40u;
            goto label_1fde40;
        }
    }
    ctx->pc = 0x1FDE18u;
label_1fde18:
    // 0x1fde18: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1fde18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1fde1c:
    // 0x1fde1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fde1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fde20:
    // 0x1fde20: 0x2a0f809  jalr        $s5
label_1fde24:
    if (ctx->pc == 0x1FDE24u) {
        ctx->pc = 0x1FDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE20u;
        // 0x1fde24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE28u;
        goto label_1fde28;
    }
    ctx->pc = 0x1FDE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1FDE28u);
        ctx->pc = 0x1FDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE20u;
        // 0x1fde24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDE20u, 0x1FDE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDE28u;
label_1fde28:
    // 0x1fde28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fde28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fde2c:
    // 0x1fde2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fde30:
    // 0x1fde30: 0x56420003  bnel        $s2, $v0, . + 4 + (0x3 << 2)
label_1fde34:
    if (ctx->pc == 0x1FDE34u) {
        ctx->pc = 0x1FDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE30u;
        // 0x1fde34: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE38u;
        goto label_1fde38;
    }
    ctx->pc = 0x1FDE30u;
    {
        const bool branch_taken_0x1fde30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fde30) {
            ctx->pc = 0x1FDE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDE30u;
            // 0x1fde34: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDE40u;
            goto label_1fde40;
        }
    }
    ctx->pc = 0x1FDE38u;
label_1fde38:
    // 0x1fde38: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_1fde3c:
    if (ctx->pc == 0x1FDE3Cu) {
        ctx->pc = 0x1FDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE38u;
        // 0x1fde3c: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE40u;
        goto label_1fde40;
    }
    ctx->pc = 0x1FDE38u;
    {
        const bool branch_taken_0x1fde38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE38u;
        // 0x1fde3c: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde38) {
            ctx->pc = 0x1FE19Cu;
            goto label_1fe19c;
        }
    }
    ctx->pc = 0x1FDE40u;
label_1fde40:
    // 0x1fde40: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x1fde40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_1fde44:
    // 0x1fde44: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1fde48:
    if (ctx->pc == 0x1FDE48u) {
        ctx->pc = 0x1FDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE44u;
        // 0x1fde48: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE4Cu;
        goto label_1fde4c;
    }
    ctx->pc = 0x1FDE44u;
    {
        const bool branch_taken_0x1fde44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE44u;
        // 0x1fde48: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde44) {
            ctx->pc = 0x1FDE6Cu;
            goto label_1fde6c;
        }
    }
    ctx->pc = 0x1FDE4Cu;
label_1fde4c:
    // 0x1fde4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fde50:
    // 0x1fde50: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1fde50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fde54:
    // 0x1fde54: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_1fde58:
    if (ctx->pc == 0x1FDE58u) {
        ctx->pc = 0x1FDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE54u;
        // 0x1fde58: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE5Cu;
        goto label_1fde5c;
    }
    ctx->pc = 0x1FDE54u;
    {
        const bool branch_taken_0x1fde54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE54u;
        // 0x1fde58: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde54) {
            ctx->pc = 0x1FDE8Cu;
            goto label_1fde8c;
        }
    }
    ctx->pc = 0x1FDE5Cu;
label_1fde5c:
    // 0x1fde5c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1fde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1fde60:
    // 0x1fde60: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1fde60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1fde64:
    // 0x1fde64: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fde68:
    if (ctx->pc == 0x1FDE68u) {
        ctx->pc = 0x1FDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE64u;
        // 0x1fde68: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE6Cu;
        goto label_1fde6c;
    }
    ctx->pc = 0x1FDE64u;
    {
        const bool branch_taken_0x1fde64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE64u;
        // 0x1fde68: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde64) {
            ctx->pc = 0x1FDE90u;
            goto label_1fde90;
        }
    }
    ctx->pc = 0x1FDE6Cu;
label_1fde6c:
    // 0x1fde6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1fde70:
    if (ctx->pc == 0x1FDE70u) {
        ctx->pc = 0x1FDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE6Cu;
        // 0x1fde70: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE74u;
        goto label_1fde74;
    }
    ctx->pc = 0x1FDE6Cu;
    {
        const bool branch_taken_0x1fde6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE6Cu;
        // 0x1fde70: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde6c) {
            ctx->pc = 0x1FDE90u;
            goto label_1fde90;
        }
    }
    ctx->pc = 0x1FDE74u;
label_1fde74:
    // 0x1fde74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fde74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fde78:
    // 0x1fde78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1fde7c:
    if (ctx->pc == 0x1FDE7Cu) {
        ctx->pc = 0x1FDE80u;
        goto label_1fde80;
    }
    ctx->pc = 0x1FDE78u;
    {
        const bool branch_taken_0x1fde78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde78) {
            ctx->pc = 0x1FDE90u;
            goto label_1fde90;
        }
    }
    ctx->pc = 0x1FDE80u;
label_1fde80:
    // 0x1fde80: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1fde80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fde84:
    // 0x1fde84: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fde88:
    if (ctx->pc == 0x1FDE88u) {
        ctx->pc = 0x1FDE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE84u;
        // 0x1fde88: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE8Cu;
        goto label_1fde8c;
    }
    ctx->pc = 0x1FDE84u;
    {
        const bool branch_taken_0x1fde84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE84u;
        // 0x1fde88: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde84) {
            ctx->pc = 0x1FDE90u;
            goto label_1fde90;
        }
    }
    ctx->pc = 0x1FDE8Cu;
label_1fde8c:
    // 0x1fde8c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1fde8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1fde90:
    // 0x1fde90: 0x2d2b02d  daddu       $s6, $s6, $s2
    ctx->pc = 0x1fde90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 18));
label_1fde94:
    // 0x1fde94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fde94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fde98:
    // 0x1fde98: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fde9c:
    if (ctx->pc == 0x1FDE9Cu) {
        ctx->pc = 0x1FDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE98u;
        // 0x1fde9c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEA0u;
        goto label_1fdea0;
    }
    ctx->pc = 0x1FDE98u;
    {
        const bool branch_taken_0x1fde98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE98u;
        // 0x1fde9c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde98) {
            ctx->pc = 0x1FDEB8u;
            goto label_1fdeb8;
        }
    }
    ctx->pc = 0x1FDEA0u;
label_1fdea0:
    // 0x1fdea0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1fdea0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdea4:
    // 0x1fdea4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fdea8:
    if (ctx->pc == 0x1FDEA8u) {
        ctx->pc = 0x1FDEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEA4u;
        // 0x1fdea8: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEACu;
        goto label_1fdeac;
    }
    ctx->pc = 0x1FDEA4u;
    {
        const bool branch_taken_0x1fdea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEA4u;
        // 0x1fdea8: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdea4) {
            ctx->pc = 0x1FDEB8u;
            goto label_1fdeb8;
        }
    }
    ctx->pc = 0x1FDEACu;
label_1fdeac:
    // 0x1fdeac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fdeb0:
    // 0x1fdeb0: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_1fdeb4:
    if (ctx->pc == 0x1FDEB4u) {
        ctx->pc = 0x1FDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEB0u;
        // 0x1fdeb4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEB8u;
        goto label_1fdeb8;
    }
    ctx->pc = 0x1FDEB0u;
    {
        const bool branch_taken_0x1fdeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEB0u;
        // 0x1fdeb4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdeb0) {
            ctx->pc = 0x1FE198u;
            goto label_1fe198;
        }
    }
    ctx->pc = 0x1FDEB8u;
label_1fdeb8:
    // 0x1fdeb8: 0x54e00004  bnel        $a3, $zero, . + 4 + (0x4 << 2)
label_1fdebc:
    if (ctx->pc == 0x1FDEBCu) {
        ctx->pc = 0x1FDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEB8u;
        // 0x1fdebc: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEC0u;
        goto label_1fdec0;
    }
    ctx->pc = 0x1FDEB8u;
    {
        const bool branch_taken_0x1fdeb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdeb8) {
            ctx->pc = 0x1FDEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDEB8u;
            // 0x1fdebc: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDECCu;
            goto label_1fdecc;
        }
    }
    ctx->pc = 0x1FDEC0u;
label_1fdec0:
    // 0x1fdec0: 0xc07fa3a  jal         func_1FE8E8
label_1fdec4:
    if (ctx->pc == 0x1FDEC4u) {
        ctx->pc = 0x1FDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEC0u;
        // 0x1fdec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEC8u;
        goto label_1fdec8;
    }
    ctx->pc = 0x1FDEC0u;
    SET_GPR_U32(ctx, 31, 0x1FDEC8u);
    ctx->pc = 0x1FDEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEC0u;
    // 0x1fdec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8E8u, 0x1FDEC0u, 0x1FDEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEC8u;
label_1fdec8:
    // 0x1fdec8: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x1fdec8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fdecc:
    // 0x1fdecc: 0x30c2081a  andi        $v0, $a2, 0x81A
    ctx->pc = 0x1fdeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2074);
label_1fded0:
    // 0x1fded0: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
label_1fded4:
    if (ctx->pc == 0x1FDED4u) {
        ctx->pc = 0x1FDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDED0u;
        // 0x1fded4: 0x30c20400  andi        $v0, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDED8u;
        goto label_1fded8;
    }
    ctx->pc = 0x1FDED0u;
    {
        const bool branch_taken_0x1fded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDED0u;
        // 0x1fded4: 0x30c20400  andi        $v0, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fded0) {
            ctx->pc = 0x1FE12Cu;
            goto label_1fe12c;
        }
    }
    ctx->pc = 0x1FDED8u;
label_1fded8:
    // 0x1fded8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1fdedc:
    if (ctx->pc == 0x1FDEDCu) {
        ctx->pc = 0x1FDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDED8u;
        // 0x1fdedc: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEE0u;
        goto label_1fdee0;
    }
    ctx->pc = 0x1FDED8u;
    {
        const bool branch_taken_0x1fded8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDED8u;
        // 0x1fdedc: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fded8) {
            ctx->pc = 0x1FDF3Cu;
            goto label_1fdf3c;
        }
    }
    ctx->pc = 0x1FDEE0u;
label_1fdee0:
    // 0x1fdee0: 0x24421908  addiu       $v0, $v0, 0x1908
    ctx->pc = 0x1fdee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6408));
label_1fdee4:
    // 0x1fdee4: 0x16a2000f  bne         $s5, $v0, . + 4 + (0xF << 2)
label_1fdee8:
    if (ctx->pc == 0x1FDEE8u) {
        ctx->pc = 0x1FDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEE4u;
        // 0x1fdee8: 0x34c20800  ori         $v0, $a2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEECu;
        goto label_1fdeec;
    }
    ctx->pc = 0x1FDEE4u;
    {
        const bool branch_taken_0x1fdee4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEE4u;
        // 0x1fdee8: 0x34c20800  ori         $v0, $a2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdee4) {
            ctx->pc = 0x1FDF24u;
            goto label_1fdf24;
        }
    }
    ctx->pc = 0x1FDEECu;
label_1fdeec:
    // 0x1fdeec: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1fdeecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_1fdef0:
    // 0x1fdef0: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1fdef4:
    if (ctx->pc == 0x1FDEF4u) {
        ctx->pc = 0x1FDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEF0u;
        // 0x1fdef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEF8u;
        goto label_1fdef8;
    }
    ctx->pc = 0x1FDEF0u;
    {
        const bool branch_taken_0x1fdef0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEF0u;
        // 0x1fdef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdef0) {
            ctx->pc = 0x1FDF24u;
            goto label_1fdf24;
        }
    }
    ctx->pc = 0x1FDEF8u;
label_1fdef8:
    // 0x1fdef8: 0xc07f872  jal         func_1FE1C8
label_1fdefc:
    if (ctx->pc == 0x1FDEFCu) {
        ctx->pc = 0x1FDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEF8u;
        // 0x1fdefc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF00u;
        goto label_1fdf00;
    }
    ctx->pc = 0x1FDEF8u;
    SET_GPR_U32(ctx, 31, 0x1FDF00u);
    ctx->pc = 0x1FDEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEF8u;
    // 0x1fdefc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1C8u, 0x1FDEF8u, 0x1FDF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF00u;
label_1fdf00:
    // 0x1fdf00: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1fdf04:
    if (ctx->pc == 0x1FDF04u) {
        ctx->pc = 0x1FDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF00u;
        // 0x1fdf04: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF08u;
        goto label_1fdf08;
    }
    ctx->pc = 0x1FDF00u;
    {
        const bool branch_taken_0x1fdf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf00) {
            ctx->pc = 0x1FDF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF00u;
            // 0x1fdf04: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF20u;
            goto label_1fdf20;
        }
    }
    ctx->pc = 0x1FDF08u;
label_1fdf08:
    // 0x1fdf08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1fdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1fdf0c:
    // 0x1fdf0c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fdf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1fdf10:
    // 0x1fdf10: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x1fdf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_1fdf14:
    // 0x1fdf14: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
label_1fdf18:
    if (ctx->pc == 0x1FDF18u) {
        ctx->pc = 0x1FDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF14u;
        // 0x1fdf18: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF1Cu;
        goto label_1fdf1c;
    }
    ctx->pc = 0x1FDF14u;
    {
        const bool branch_taken_0x1fdf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fdf14) {
            ctx->pc = 0x1FDF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF14u;
            // 0x1fdf18: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF2Cu;
            goto label_1fdf2c;
        }
    }
    ctx->pc = 0x1FDF1Cu;
label_1fdf1c:
    // 0x1fdf1c: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x1fdf1cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fdf20:
    // 0x1fdf20: 0x34c20800  ori         $v0, $a2, 0x800
    ctx->pc = 0x1fdf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
label_1fdf24:
    // 0x1fdf24: 0x10000081  b           . + 4 + (0x81 << 2)
label_1fdf28:
    if (ctx->pc == 0x1FDF28u) {
        ctx->pc = 0x1FDF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF24u;
        // 0x1fdf28: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF2Cu;
        goto label_1fdf2c;
    }
    ctx->pc = 0x1FDF24u;
    {
        const bool branch_taken_0x1fdf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF24u;
        // 0x1fdf28: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf24) {
            ctx->pc = 0x1FE12Cu;
            goto label_1fe12c;
        }
    }
    ctx->pc = 0x1FDF2Cu;
label_1fdf2c:
    // 0x1fdf2c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1fdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1fdf30:
    // 0x1fdf30: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1fdf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_1fdf34:
    // 0x1fdf34: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1fdf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_1fdf38:
    // 0x1fdf38: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fdf38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1fdf3c:
    // 0x1fdf3c: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
label_1fdf40:
    if (ctx->pc == 0x1FDF40u) {
        ctx->pc = 0x1FDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF3Cu;
        // 0x1fdf40: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF44u;
        goto label_1fdf44;
    }
    ctx->pc = 0x1FDF3Cu;
    {
        const bool branch_taken_0x1fdf3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf3c) {
            ctx->pc = 0x1FDF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF3Cu;
            // 0x1fdf40: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF4Cu;
            goto label_1fdf4c;
        }
    }
    ctx->pc = 0x1FDF44u;
label_1fdf44:
    // 0x1fdf44: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fdf48:
    if (ctx->pc == 0x1FDF48u) {
        ctx->pc = 0x1FDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF44u;
        // 0x1fdf48: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF4Cu;
        goto label_1fdf4c;
    }
    ctx->pc = 0x1FDF44u;
    {
        const bool branch_taken_0x1fdf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF44u;
        // 0x1fdf48: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf44) {
            ctx->pc = 0x1FDF64u;
            goto label_1fdf64;
        }
    }
    ctx->pc = 0x1FDF4Cu;
label_1fdf4c:
    // 0x1fdf4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf50:
    // 0x1fdf50: 0xc07f872  jal         func_1FE1C8
label_1fdf54:
    if (ctx->pc == 0x1FDF54u) {
        ctx->pc = 0x1FDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF50u;
        // 0x1fdf54: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF58u;
        goto label_1fdf58;
    }
    ctx->pc = 0x1FDF50u;
    SET_GPR_U32(ctx, 31, 0x1FDF58u);
    ctx->pc = 0x1FDF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF50u;
    // 0x1fdf54: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1C8u, 0x1FDF50u, 0x1FDF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF58u;
label_1fdf58:
    // 0x1fdf58: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
label_1fdf5c:
    if (ctx->pc == 0x1FDF5Cu) {
        ctx->pc = 0x1FDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF58u;
        // 0x1fdf5c: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF60u;
        goto label_1fdf60;
    }
    ctx->pc = 0x1FDF58u;
    {
        const bool branch_taken_0x1fdf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF58u;
        // 0x1fdf5c: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf58) {
            ctx->pc = 0x1FE12Cu;
            goto label_1fe12c;
        }
    }
    ctx->pc = 0x1FDF60u;
label_1fdf60:
    // 0x1fdf60: 0x56982d  daddu       $s3, $v0, $s6
    ctx->pc = 0x1fdf60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 22));
label_1fdf64:
    // 0x1fdf64: 0x16e00015  bnez        $s7, . + 4 + (0x15 << 2)
label_1fdf68:
    if (ctx->pc == 0x1FDF68u) {
        ctx->pc = 0x1FDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF64u;
        // 0x1fdf68: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF6Cu;
        goto label_1fdf6c;
    }
    ctx->pc = 0x1FDF64u;
    {
        const bool branch_taken_0x1fdf64 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF64u;
        // 0x1fdf68: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf64) {
            ctx->pc = 0x1FDFBCu;
            goto label_1fdfbc;
        }
    }
    ctx->pc = 0x1FDF6Cu;
label_1fdf6c:
    // 0x1fdf6c: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x1fdf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
label_1fdf70:
    // 0x1fdf70: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1fdf74:
    if (ctx->pc == 0x1FDF74u) {
        ctx->pc = 0x1FDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF70u;
        // 0x1fdf74: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF78u;
        goto label_1fdf78;
    }
    ctx->pc = 0x1FDF70u;
    {
        const bool branch_taken_0x1fdf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf70) {
            ctx->pc = 0x1FDF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF70u;
            // 0x1fdf74: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF80u;
            goto label_1fdf80;
        }
    }
    ctx->pc = 0x1FDF78u;
label_1fdf78:
    // 0x1fdf78: 0x10000009  b           . + 4 + (0x9 << 2)
label_1fdf7c:
    if (ctx->pc == 0x1FDF7Cu) {
        ctx->pc = 0x1FDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF78u;
        // 0x1fdf7c: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF80u;
        goto label_1fdf80;
    }
    ctx->pc = 0x1FDF78u;
    {
        const bool branch_taken_0x1fdf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF78u;
        // 0x1fdf7c: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf78) {
            ctx->pc = 0x1FDFA0u;
            goto label_1fdfa0;
        }
    }
    ctx->pc = 0x1FDF80u;
label_1fdf80:
    // 0x1fdf80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf84:
    // 0x1fdf84: 0x2a0f809  jalr        $s5
label_1fdf88:
    if (ctx->pc == 0x1FDF88u) {
        ctx->pc = 0x1FDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF84u;
        // 0x1fdf88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF8Cu;
        goto label_1fdf8c;
    }
    ctx->pc = 0x1FDF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1FDF8Cu);
        ctx->pc = 0x1FDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF84u;
        // 0x1fdf88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDF84u, 0x1FDF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDF8Cu;
label_1fdf8c:
    // 0x1fdf8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fdf8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf90:
    // 0x1fdf90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fdf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fdf94:
    // 0x1fdf94: 0x12420065  beq         $s2, $v0, . + 4 + (0x65 << 2)
label_1fdf98:
    if (ctx->pc == 0x1FDF98u) {
        ctx->pc = 0x1FDF9Cu;
        goto label_1fdf9c;
    }
    ctx->pc = 0x1FDF94u;
    {
        const bool branch_taken_0x1fdf94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fdf94) {
            ctx->pc = 0x1FE12Cu;
            goto label_1fe12c;
        }
    }
    ctx->pc = 0x1FDF9Cu;
label_1fdf9c:
    // 0x1fdf9c: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x1fdf9cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fdfa0:
    // 0x1fdfa0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fdfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fdfa4:
    // 0x1fdfa4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1fdfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fdfa8:
    // 0x1fdfa8: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_1fdfac:
    if (ctx->pc == 0x1FDFACu) {
        ctx->pc = 0x1FDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFA8u;
        // 0x1fdfac: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFB0u;
        goto label_1fdfb0;
    }
    ctx->pc = 0x1FDFA8u;
    {
        const bool branch_taken_0x1fdfa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFA8u;
        // 0x1fdfac: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfa8) {
            ctx->pc = 0x1FDFF4u;
            goto label_1fdff4;
        }
    }
    ctx->pc = 0x1FDFB0u;
label_1fdfb0:
    // 0x1fdfb0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1fdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1fdfb4:
    // 0x1fdfb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fdfb8:
    if (ctx->pc == 0x1FDFB8u) {
        ctx->pc = 0x1FDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFB4u;
        // 0x1fdfb8: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFBCu;
        goto label_1fdfbc;
    }
    ctx->pc = 0x1FDFB4u;
    {
        const bool branch_taken_0x1fdfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFB4u;
        // 0x1fdfb8: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfb4) {
            ctx->pc = 0x1FDFC0u;
            goto label_1fdfc0;
        }
    }
    ctx->pc = 0x1FDFBCu;
label_1fdfbc:
    // 0x1fdfbc: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1fdfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fdfc0:
    // 0x1fdfc0: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
label_1fdfc4:
    if (ctx->pc == 0x1FDFC4u) {
        ctx->pc = 0x1FDFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFC0u;
        // 0x1fdfc4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFC8u;
        goto label_1fdfc8;
    }
    ctx->pc = 0x1FDFC0u;
    {
        const bool branch_taken_0x1fdfc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfc0) {
            ctx->pc = 0x1FDFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDFC0u;
            // 0x1fdfc4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDFF8u;
            goto label_1fdff8;
        }
    }
    ctx->pc = 0x1FDFC8u;
label_1fdfc8:
    // 0x1fdfc8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1fdfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1fdfcc:
    // 0x1fdfcc: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1fdfccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1fdfd0:
    // 0x1fdfd0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fdfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fdfd4:
    // 0x1fdfd4: 0x478823  subu        $s1, $v0, $a3
    ctx->pc = 0x1fdfd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fdfd8:
    // 0x1fdfd8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1fdfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1fdfdc:
    // 0x1fdfdc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1fdfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_1fdfe0:
    // 0x1fdfe0: 0x243902d  daddu       $s2, $s2, $v1
    ctx->pc = 0x1fdfe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 3));
label_1fdfe4:
    // 0x1fdfe4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fdfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1fdfe8:
    // 0x1fdfe8: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1fdfe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1fdfec:
    // 0x1fdfec: 0x10000009  b           . + 4 + (0x9 << 2)
label_1fdff0:
    if (ctx->pc == 0x1FDFF0u) {
        ctx->pc = 0x1FDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFECu;
        // 0x1fdff0: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFF4u;
        goto label_1fdff4;
    }
    ctx->pc = 0x1FDFECu;
    {
        const bool branch_taken_0x1fdfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFECu;
        // 0x1fdff0: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfec) {
            ctx->pc = 0x1FE014u;
            goto label_1fe014;
        }
    }
    ctx->pc = 0x1FDFF4u;
label_1fdff4:
    // 0x1fdff4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fdff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fdff8:
    // 0x1fdff8: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1fdff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1fdffc:
    // 0x1fdffc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1fdffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe000:
    // 0x1fe000: 0x478823  subu        $s1, $v0, $a3
    ctx->pc = 0x1fe000u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fe004:
    // 0x1fe004: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1fe004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_1fe008:
    // 0x1fe008: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fe008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1fe00c:
    // 0x1fe00c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1fe00cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1fe010:
    // 0x1fe010: 0x243902f  dsubu       $s2, $s2, $v1
    ctx->pc = 0x1fe010u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 3));
label_1fe014:
    // 0x1fe014: 0x30c22000  andi        $v0, $a2, 0x2000
    ctx->pc = 0x1fe014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
label_1fe018:
    // 0x1fe018: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_1fe01c:
    if (ctx->pc == 0x1FE01Cu) {
        ctx->pc = 0x1FE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE018u;
        // 0x1fe01c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE020u;
        goto label_1fe020;
    }
    ctx->pc = 0x1FE018u;
    {
        const bool branch_taken_0x1fe018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe018) {
            ctx->pc = 0x1FE01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE018u;
            // 0x1fe01c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE090u;
            goto label_1fe090;
        }
    }
    ctx->pc = 0x1FE020u;
label_1fe020:
    // 0x1fe020: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1fe020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1fe024:
    // 0x1fe024: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1fe028:
    if (ctx->pc == 0x1FE028u) {
        ctx->pc = 0x1FE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE024u;
        // 0x1fe028: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE02Cu;
        goto label_1fe02c;
    }
    ctx->pc = 0x1FE024u;
    {
        const bool branch_taken_0x1fe024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe024) {
            ctx->pc = 0x1FE028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE024u;
            // 0x1fe028: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE090u;
            goto label_1fe090;
        }
    }
    ctx->pc = 0x1FE02Cu;
label_1fe02c:
    // 0x1fe02c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1fe02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_1fe030:
    // 0x1fe030: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fe030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1fe034:
    // 0x1fe034: 0x242102d  daddu       $v0, $s2, $v0
    ctx->pc = 0x1fe034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_1fe038:
    // 0x1fe038: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1fe038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1fe03c:
    // 0x1fe03c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1fe040:
    if (ctx->pc == 0x1FE040u) {
        ctx->pc = 0x1FE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE03Cu;
        // 0x1fe040: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE044u;
        goto label_1fe044;
    }
    ctx->pc = 0x1FE03Cu;
    {
        const bool branch_taken_0x1fe03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE03Cu;
        // 0x1fe040: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe03c) {
            ctx->pc = 0x1FE08Cu;
            goto label_1fe08c;
        }
    }
    ctx->pc = 0x1FE044u;
label_1fe044:
    // 0x1fe044: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fe044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1fe048:
    // 0x1fe048: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fe048u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1fe04c:
    // 0x1fe04c: 0x2221823  subu        $v1, $s1, $v0
    ctx->pc = 0x1fe04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1fe050:
    // 0x1fe050: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fe050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1fe054:
    // 0x1fe054: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1fe054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1fe058:
    // 0x1fe058: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1fe05c:
    if (ctx->pc == 0x1FE05Cu) {
        ctx->pc = 0x1FE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE058u;
        // 0x1fe05c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE060u;
        goto label_1fe060;
    }
    ctx->pc = 0x1FE058u;
    {
        const bool branch_taken_0x1fe058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE058u;
        // 0x1fe05c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe058) {
            ctx->pc = 0x1FE07Cu;
            goto label_1fe07c;
        }
    }
    ctx->pc = 0x1FE060u;
label_1fe060:
    // 0x1fe060: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1fe060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1fe064:
    // 0x1fe064: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
label_1fe068:
    if (ctx->pc == 0x1FE068u) {
        ctx->pc = 0x1FE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE064u;
        // 0x1fe068: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE06Cu;
        goto label_1fe06c;
    }
    ctx->pc = 0x1FE064u;
    {
        const bool branch_taken_0x1fe064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fe064) {
            ctx->pc = 0x1FE068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE064u;
            // 0x1fe068: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE07Cu;
            goto label_1fe07c;
        }
    }
    ctx->pc = 0x1FE06Cu;
label_1fe06c:
    // 0x1fe06c: 0xc07f62a  jal         func_1FD8A8
label_1fe070:
    if (ctx->pc == 0x1FE070u) {
        ctx->pc = 0x1FE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE06Cu;
        // 0x1fe070: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE074u;
        goto label_1fe074;
    }
    ctx->pc = 0x1FE06Cu;
    SET_GPR_U32(ctx, 31, 0x1FE074u);
    ctx->pc = 0x1FE070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE06Cu;
    // 0x1fe070: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FE06Cu, 0x1FE074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE074u;
label_1fe074:
    // 0x1fe074: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x1fe074u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fe078:
    // 0x1fe078: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fe078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1fe07c:
    // 0x1fe07c: 0x30c3ffdf  andi        $v1, $a2, 0xFFDF
    ctx->pc = 0x1fe07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65503);
label_1fe080:
    // 0x1fe080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe084:
    // 0x1fe084: 0x10000044  b           . + 4 + (0x44 << 2)
label_1fe088:
    if (ctx->pc == 0x1FE088u) {
        ctx->pc = 0x1FE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE084u;
        // 0x1fe088: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE08Cu;
        goto label_1fe08c;
    }
    ctx->pc = 0x1FE084u;
    {
        const bool branch_taken_0x1fe084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE084u;
        // 0x1fe088: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe084) {
            ctx->pc = 0x1FE198u;
            goto label_1fe198;
        }
    }
    ctx->pc = 0x1FE08Cu;
label_1fe08c:
    // 0x1fe08c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1fe08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1fe090:
    // 0x1fe090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe094:
    // 0x1fe094: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1fe094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1fe098:
    // 0x1fe098: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1fe098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1fe09c:
    // 0x1fe09c: 0x539024  and         $s2, $v0, $s3
    ctx->pc = 0x1fe09cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_1fe0a0:
    // 0x1fe0a0: 0x2a0f809  jalr        $s5
label_1fe0a4:
    if (ctx->pc == 0x1FE0A4u) {
        ctx->pc = 0x1FE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0A0u;
        // 0x1fe0a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0A8u;
        goto label_1fe0a8;
    }
    ctx->pc = 0x1FE0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1FE0A8u);
        ctx->pc = 0x1FE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0A0u;
        // 0x1fe0a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE0A0u, 0x1FE0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE0A8u;
label_1fe0a8:
    // 0x1fe0a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fe0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe0ac:
    // 0x1fe0ac: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
label_1fe0b0:
    if (ctx->pc == 0x1FE0B0u) {
        ctx->pc = 0x1FE0B4u;
        goto label_1fe0b4;
    }
    ctx->pc = 0x1FE0ACu;
    {
        const bool branch_taken_0x1fe0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe0ac) {
            ctx->pc = 0x1FE12Cu;
            goto label_1fe12c;
        }
    }
    ctx->pc = 0x1FE0B4u;
label_1fe0b4:
    // 0x1fe0b4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1fe0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fe0b8:
    // 0x1fe0b8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1fe0bc:
    if (ctx->pc == 0x1FE0BCu) {
        ctx->pc = 0x1FE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0B8u;
        // 0x1fe0bc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0C0u;
        goto label_1fe0c0;
    }
    ctx->pc = 0x1FE0B8u;
    {
        const bool branch_taken_0x1fe0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0B8u;
        // 0x1fe0bc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0b8) {
            ctx->pc = 0x1FE0D8u;
            goto label_1fe0d8;
        }
    }
    ctx->pc = 0x1FE0C0u;
label_1fe0c0:
    // 0x1fe0c0: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1fe0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1fe0c4:
    // 0x1fe0c4: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
label_1fe0c8:
    if (ctx->pc == 0x1FE0C8u) {
        ctx->pc = 0x1FE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0C4u;
        // 0x1fe0c8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0CCu;
        goto label_1fe0cc;
    }
    ctx->pc = 0x1FE0C4u;
    {
        const bool branch_taken_0x1fe0c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fe0c4) {
            ctx->pc = 0x1FE0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE0C4u;
            // 0x1fe0c8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE0D8u;
            goto label_1fe0d8;
        }
    }
    ctx->pc = 0x1FE0CCu;
label_1fe0cc:
    // 0x1fe0cc: 0xc07f62a  jal         func_1FD8A8
label_1fe0d0:
    if (ctx->pc == 0x1FE0D0u) {
        ctx->pc = 0x1FE0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0CCu;
        // 0x1fe0d0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0D4u;
        goto label_1fe0d4;
    }
    ctx->pc = 0x1FE0CCu;
    SET_GPR_U32(ctx, 31, 0x1FE0D4u);
    ctx->pc = 0x1FE0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0CCu;
    // 0x1fe0d0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FE0CCu, 0x1FE0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0D4u;
label_1fe0d4:
    // 0x1fe0d4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fe0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1fe0d8:
    // 0x1fe0d8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1fe0d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fe0dc:
    // 0x1fe0dc: 0x272182f  dsubu       $v1, $s3, $s2
    ctx->pc = 0x1fe0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
label_1fe0e0:
    // 0x1fe0e0: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x1fe0e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
label_1fe0e4:
    // 0x1fe0e4: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x1fe0e4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_1fe0e8:
    // 0x1fe0e8: 0x3042ffdf  andi        $v0, $v0, 0xFFDF
    ctx->pc = 0x1fe0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
label_1fe0ec:
    // 0x1fe0ec: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_1fe0f0:
    if (ctx->pc == 0x1FE0F0u) {
        ctx->pc = 0x1FE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0ECu;
        // 0x1fe0f0: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0F4u;
        goto label_1fe0f4;
    }
    ctx->pc = 0x1FE0ECu;
    {
        const bool branch_taken_0x1fe0ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0ECu;
        // 0x1fe0f0: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0ec) {
            ctx->pc = 0x1FE124u;
            goto label_1fe124;
        }
    }
    ctx->pc = 0x1FE0F4u;
label_1fe0f4:
    // 0x1fe0f4: 0xc080432  jal         func_2010C8
label_1fe0f8:
    if (ctx->pc == 0x1FE0F8u) {
        ctx->pc = 0x1FE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0F4u;
        // 0x1fe0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0FCu;
        goto label_1fe0fc;
    }
    ctx->pc = 0x1FE0F4u;
    SET_GPR_U32(ctx, 31, 0x1FE0FCu);
    ctx->pc = 0x1FE0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0F4u;
    // 0x1fe0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x1FE0F4u, 0x1FE0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0FCu;
label_1fe0fc:
    // 0x1fe0fc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1fe100:
    if (ctx->pc == 0x1FE100u) {
        ctx->pc = 0x1FE104u;
        goto label_1fe104;
    }
    ctx->pc = 0x1FE0FCu;
    {
        const bool branch_taken_0x1fe0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0fc) {
            ctx->pc = 0x1FE12Cu;
            goto label_1fe12c;
        }
    }
    ctx->pc = 0x1FE104u;
label_1fe104:
    // 0x1fe104: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fe104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe108:
    // 0x1fe108: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1fe108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1fe10c:
    // 0x1fe10c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1fe110:
    if (ctx->pc == 0x1FE110u) {
        ctx->pc = 0x1FE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE10Cu;
        // 0x1fe110: 0x711823  subu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE114u;
        goto label_1fe114;
    }
    ctx->pc = 0x1FE10Cu;
    {
        const bool branch_taken_0x1fe10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE10Cu;
        // 0x1fe110: 0x711823  subu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe10c) {
            ctx->pc = 0x1FE12Cu;
            goto label_1fe12c;
        }
    }
    ctx->pc = 0x1FE114u;
label_1fe114:
    // 0x1fe114: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fe114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fe118:
    // 0x1fe118: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1fe118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1fe11c:
    // 0x1fe11c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fe11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1fe120:
    // 0x1fe120: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fe120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fe124:
    // 0x1fe124: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1fe128:
    if (ctx->pc == 0x1FE128u) {
        ctx->pc = 0x1FE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE124u;
        // 0x1fe128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE12Cu;
        goto label_1fe12c;
    }
    ctx->pc = 0x1FE124u;
    {
        const bool branch_taken_0x1fe124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE124u;
        // 0x1fe128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe124) {
            ctx->pc = 0x1FE198u;
            goto label_1fe198;
        }
    }
    ctx->pc = 0x1FE12Cu;
label_1fe12c:
    // 0x1fe12c: 0xc07f4fc  jal         func_1FD3F0
label_1fe130:
    if (ctx->pc == 0x1FE130u) {
        ctx->pc = 0x1FE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE12Cu;
        // 0x1fe130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE134u;
        goto label_1fe134;
    }
    ctx->pc = 0x1FE12Cu;
    SET_GPR_U32(ctx, 31, 0x1FE134u);
    ctx->pc = 0x1FE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE12Cu;
    // 0x1fe130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FE12Cu, 0x1FE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE134u;
label_1fe134:
    // 0x1fe134: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1fe138:
    if (ctx->pc == 0x1FE138u) {
        ctx->pc = 0x1FE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE134u;
        // 0x1fe138: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE13Cu;
        goto label_1fe13c;
    }
    ctx->pc = 0x1FE134u;
    {
        const bool branch_taken_0x1fe134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE134u;
        // 0x1fe138: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe134) {
            ctx->pc = 0x1FE198u;
            goto label_1fe198;
        }
    }
    ctx->pc = 0x1FE13Cu;
label_1fe13c:
    // 0x1fe13c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1fe13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1fe140:
    // 0x1fe140: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fe140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fe144:
    // 0x1fe144: 0x2a0f809  jalr        $s5
label_1fe148:
    if (ctx->pc == 0x1FE148u) {
        ctx->pc = 0x1FE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE144u;
        // 0x1fe148: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE14Cu;
        goto label_1fe14c;
    }
    ctx->pc = 0x1FE144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1FE14Cu);
        ctx->pc = 0x1FE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE144u;
        // 0x1fe148: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE144u, 0x1FE14Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE14Cu;
label_1fe14c:
    // 0x1fe14c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fe14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe150:
    // 0x1fe150: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_1fe154:
    if (ctx->pc == 0x1FE154u) {
        ctx->pc = 0x1FE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE150u;
        // 0x1fe154: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE158u;
        goto label_1fe158;
    }
    ctx->pc = 0x1FE150u;
    {
        const bool branch_taken_0x1fe150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fe150) {
            ctx->pc = 0x1FE154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE150u;
            // 0x1fe154: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE160u;
            goto label_1fe160;
        }
    }
    ctx->pc = 0x1FE158u;
label_1fe158:
    // 0x1fe158: 0x1000000f  b           . + 4 + (0xF << 2)
label_1fe15c:
    if (ctx->pc == 0x1FE15Cu) {
        ctx->pc = 0x1FE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE158u;
        // 0x1fe15c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE160u;
        goto label_1fe160;
    }
    ctx->pc = 0x1FE158u;
    {
        const bool branch_taken_0x1fe158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE158u;
        // 0x1fe15c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe158) {
            ctx->pc = 0x1FE198u;
            goto label_1fe198;
        }
    }
    ctx->pc = 0x1FE160u;
label_1fe160:
    // 0x1fe160: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1fe164:
    if (ctx->pc == 0x1FE164u) {
        ctx->pc = 0x1FE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE160u;
        // 0x1fe164: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE168u;
        goto label_1fe168;
    }
    ctx->pc = 0x1FE160u;
    {
        const bool branch_taken_0x1fe160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE160u;
        // 0x1fe164: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe160) {
            ctx->pc = 0x1FE17Cu;
            goto label_1fe17c;
        }
    }
    ctx->pc = 0x1FE168u;
label_1fe168:
    // 0x1fe168: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
label_1fe16c:
    if (ctx->pc == 0x1FE16Cu) {
        ctx->pc = 0x1FE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE168u;
        // 0x1fe16c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE170u;
        goto label_1fe170;
    }
    ctx->pc = 0x1FE168u;
    {
        const bool branch_taken_0x1fe168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fe168) {
            ctx->pc = 0x1FE16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE168u;
            // 0x1fe16c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE17Cu;
            goto label_1fe17c;
        }
    }
    ctx->pc = 0x1FE170u;
label_1fe170:
    // 0x1fe170: 0xc07f62a  jal         func_1FD8A8
label_1fe174:
    if (ctx->pc == 0x1FE174u) {
        ctx->pc = 0x1FE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE170u;
        // 0x1fe174: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE178u;
        goto label_1fe178;
    }
    ctx->pc = 0x1FE170u;
    SET_GPR_U32(ctx, 31, 0x1FE178u);
    ctx->pc = 0x1FE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE170u;
    // 0x1fe174: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FE170u, 0x1FE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE178u;
label_1fe178:
    // 0x1fe178: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fe178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1fe17c:
    // 0x1fe17c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1fe17cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fe180:
    // 0x1fe180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe184:
    // 0x1fe184: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1fe184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1fe188:
    // 0x1fe188: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x1fe188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_1fe18c:
    // 0x1fe18c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1fe18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1fe190:
    // 0x1fe190: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x1fe190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_1fe194:
    // 0x1fe194: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1fe194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_1fe198:
    // 0x1fe198: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1fe198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1fe19c:
    // 0x1fe19c: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x1fe19cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1fe1a0:
    // 0x1fe1a0: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x1fe1a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1fe1a4:
    // 0x1fe1a4: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x1fe1a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1fe1a8:
    // 0x1fe1a8: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1fe1a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1fe1ac:
    // 0x1fe1ac: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x1fe1acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1fe1b0:
    // 0x1fe1b0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1fe1b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1fe1b4:
    // 0x1fe1b4: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x1fe1b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1fe1b8:
    // 0x1fe1b8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1fe1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1fe1bc:
    // 0x1fe1bc: 0x3e00008  jr          $ra
label_1fe1c0:
    if (ctx->pc == 0x1FE1C0u) {
        ctx->pc = 0x1FE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1BCu;
        // 0x1fe1c0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE1C4u;
        goto label_fallthrough_0x1fe1bc;
    }
    ctx->pc = 0x1FE1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1BCu;
        // 0x1fe1c0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe1bc:
    ctx->pc = 0x1FE1C4u;
}
