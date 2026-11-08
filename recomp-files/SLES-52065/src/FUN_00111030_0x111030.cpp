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

// Function: FUN_00111030
// Address: 0x111030 - 0x111280
void FUN_00111030_0x111030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00111030_0x111030");
#endif

    switch (ctx->pc) {
        case 0x111030u: goto label_111030;
        case 0x111034u: goto label_111034;
        case 0x111038u: goto label_111038;
        case 0x11103cu: goto label_11103c;
        case 0x111040u: goto label_111040;
        case 0x111044u: goto label_111044;
        case 0x111048u: goto label_111048;
        case 0x11104cu: goto label_11104c;
        case 0x111050u: goto label_111050;
        case 0x111054u: goto label_111054;
        case 0x111058u: goto label_111058;
        case 0x11105cu: goto label_11105c;
        case 0x111060u: goto label_111060;
        case 0x111064u: goto label_111064;
        case 0x111068u: goto label_111068;
        case 0x11106cu: goto label_11106c;
        case 0x111070u: goto label_111070;
        case 0x111074u: goto label_111074;
        case 0x111078u: goto label_111078;
        case 0x11107cu: goto label_11107c;
        case 0x111080u: goto label_111080;
        case 0x111084u: goto label_111084;
        case 0x111088u: goto label_111088;
        case 0x11108cu: goto label_11108c;
        case 0x111090u: goto label_111090;
        case 0x111094u: goto label_111094;
        case 0x111098u: goto label_111098;
        case 0x11109cu: goto label_11109c;
        case 0x1110a0u: goto label_1110a0;
        case 0x1110a4u: goto label_1110a4;
        case 0x1110a8u: goto label_1110a8;
        case 0x1110acu: goto label_1110ac;
        case 0x1110b0u: goto label_1110b0;
        case 0x1110b4u: goto label_1110b4;
        case 0x1110b8u: goto label_1110b8;
        case 0x1110bcu: goto label_1110bc;
        case 0x1110c0u: goto label_1110c0;
        case 0x1110c4u: goto label_1110c4;
        case 0x1110c8u: goto label_1110c8;
        case 0x1110ccu: goto label_1110cc;
        case 0x1110d0u: goto label_1110d0;
        case 0x1110d4u: goto label_1110d4;
        case 0x1110d8u: goto label_1110d8;
        case 0x1110dcu: goto label_1110dc;
        case 0x1110e0u: goto label_1110e0;
        case 0x1110e4u: goto label_1110e4;
        case 0x1110e8u: goto label_1110e8;
        case 0x1110ecu: goto label_1110ec;
        case 0x1110f0u: goto label_1110f0;
        case 0x1110f4u: goto label_1110f4;
        case 0x1110f8u: goto label_1110f8;
        case 0x1110fcu: goto label_1110fc;
        case 0x111100u: goto label_111100;
        case 0x111104u: goto label_111104;
        case 0x111108u: goto label_111108;
        case 0x11110cu: goto label_11110c;
        case 0x111110u: goto label_111110;
        case 0x111114u: goto label_111114;
        case 0x111118u: goto label_111118;
        case 0x11111cu: goto label_11111c;
        case 0x111120u: goto label_111120;
        case 0x111124u: goto label_111124;
        case 0x111128u: goto label_111128;
        case 0x11112cu: goto label_11112c;
        case 0x111130u: goto label_111130;
        case 0x111134u: goto label_111134;
        case 0x111138u: goto label_111138;
        case 0x11113cu: goto label_11113c;
        case 0x111140u: goto label_111140;
        case 0x111144u: goto label_111144;
        case 0x111148u: goto label_111148;
        case 0x11114cu: goto label_11114c;
        case 0x111150u: goto label_111150;
        case 0x111154u: goto label_111154;
        case 0x111158u: goto label_111158;
        case 0x11115cu: goto label_11115c;
        case 0x111160u: goto label_111160;
        case 0x111164u: goto label_111164;
        case 0x111168u: goto label_111168;
        case 0x11116cu: goto label_11116c;
        case 0x111170u: goto label_111170;
        case 0x111174u: goto label_111174;
        case 0x111178u: goto label_111178;
        case 0x11117cu: goto label_11117c;
        case 0x111180u: goto label_111180;
        case 0x111184u: goto label_111184;
        case 0x111188u: goto label_111188;
        case 0x11118cu: goto label_11118c;
        case 0x111190u: goto label_111190;
        case 0x111194u: goto label_111194;
        case 0x111198u: goto label_111198;
        case 0x11119cu: goto label_11119c;
        case 0x1111a0u: goto label_1111a0;
        case 0x1111a4u: goto label_1111a4;
        case 0x1111a8u: goto label_1111a8;
        case 0x1111acu: goto label_1111ac;
        case 0x1111b0u: goto label_1111b0;
        case 0x1111b4u: goto label_1111b4;
        case 0x1111b8u: goto label_1111b8;
        case 0x1111bcu: goto label_1111bc;
        case 0x1111c0u: goto label_1111c0;
        case 0x1111c4u: goto label_1111c4;
        case 0x1111c8u: goto label_1111c8;
        case 0x1111ccu: goto label_1111cc;
        case 0x1111d0u: goto label_1111d0;
        case 0x1111d4u: goto label_1111d4;
        case 0x1111d8u: goto label_1111d8;
        case 0x1111dcu: goto label_1111dc;
        case 0x1111e0u: goto label_1111e0;
        case 0x1111e4u: goto label_1111e4;
        case 0x1111e8u: goto label_1111e8;
        case 0x1111ecu: goto label_1111ec;
        case 0x1111f0u: goto label_1111f0;
        case 0x1111f4u: goto label_1111f4;
        case 0x1111f8u: goto label_1111f8;
        case 0x1111fcu: goto label_1111fc;
        case 0x111200u: goto label_111200;
        case 0x111204u: goto label_111204;
        case 0x111208u: goto label_111208;
        case 0x11120cu: goto label_11120c;
        case 0x111210u: goto label_111210;
        case 0x111214u: goto label_111214;
        case 0x111218u: goto label_111218;
        case 0x11121cu: goto label_11121c;
        case 0x111220u: goto label_111220;
        case 0x111224u: goto label_111224;
        case 0x111228u: goto label_111228;
        case 0x11122cu: goto label_11122c;
        case 0x111230u: goto label_111230;
        case 0x111234u: goto label_111234;
        case 0x111238u: goto label_111238;
        case 0x11123cu: goto label_11123c;
        case 0x111240u: goto label_111240;
        case 0x111244u: goto label_111244;
        case 0x111248u: goto label_111248;
        case 0x11124cu: goto label_11124c;
        case 0x111250u: goto label_111250;
        case 0x111254u: goto label_111254;
        case 0x111258u: goto label_111258;
        case 0x11125cu: goto label_11125c;
        case 0x111260u: goto label_111260;
        case 0x111264u: goto label_111264;
        case 0x111268u: goto label_111268;
        case 0x11126cu: goto label_11126c;
        case 0x111270u: goto label_111270;
        case 0x111274u: goto label_111274;
        case 0x111278u: goto label_111278;
        case 0x11127cu: goto label_11127c;
        default: break;
    }

    ctx->pc = 0x111030u;

label_111030:
    // 0x111030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_111034:
    // 0x111034: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x111034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_111038:
    // 0x111038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x111038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11103c:
    // 0x11103c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_111040:
    // 0x111040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_111044:
    // 0x111044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x111044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_111048:
    // 0x111048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x111048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11104c:
    // 0x11104c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11104cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_111050:
    // 0x111050: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x111050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_111054:
    // 0x111054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111058:
    // 0x111058: 0x1000000e  b           . + 4 + (0xE << 2)
label_11105c:
    if (ctx->pc == 0x11105Cu) {
        ctx->pc = 0x11105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111058u;
        // 0x11105c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111060u;
        goto label_111060;
    }
    ctx->pc = 0x111058u;
    {
        const bool branch_taken_0x111058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111058u;
        // 0x11105c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111058) {
            ctx->pc = 0x111094u;
            goto label_111094;
        }
    }
    ctx->pc = 0x111060u;
label_111060:
    // 0x111060: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x111060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_111064:
    // 0x111064: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x111064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_111068:
    // 0x111068: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x111068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_11106c:
    // 0x11106c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_111070:
    // 0x111070: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x111070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_111074:
    // 0x111074: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x111074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_111078:
    // 0x111078: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x111078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11107c:
    // 0x11107c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11107cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_111080:
    // 0x111080: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x111080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_111084:
    // 0x111084: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x111084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
label_111088:
    // 0x111088: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x111088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_11108c:
    // 0x11108c: 0x3463002c  ori         $v1, $v1, 0x2C
    ctx->pc = 0x11108cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44);
label_111090:
    // 0x111090: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x111090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
label_111094:
    // 0x111094: 0x0  nop
    ctx->pc = 0x111094u;
    // NOP
label_111098:
    // 0x111098: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x111098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_11109c:
    // 0x11109c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x11109cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1110a0:
    // 0x1110a0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1110a4:
    if (ctx->pc == 0x1110A4u) {
        ctx->pc = 0x1110A8u;
        goto label_1110a8;
    }
    ctx->pc = 0x1110A0u;
    {
        const bool branch_taken_0x1110a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1110a0) {
            ctx->pc = 0x111060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111060;
        }
    }
    ctx->pc = 0x1110A8u;
label_1110a8:
    // 0x1110a8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1110a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1110ac:
    // 0x1110ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1110acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1110b0:
    // 0x1110b0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1110b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1110b4:
    // 0x1110b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1110b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1110b8:
    // 0x1110b8: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x1110b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1110bc:
    // 0x1110bc: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x1110bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1110c0:
    // 0x1110c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1110c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1110c4:
    // 0x1110c4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1110c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1110c8:
    // 0x1110c8: 0x8c862cd8  lw          $a2, 0x2CD8($a0)
    ctx->pc = 0x1110c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_1110cc:
    // 0x1110cc: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x1110ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
label_1110d0:
    // 0x1110d0: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x1110d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_1110d4:
    // 0x1110d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1110d8:
    if (ctx->pc == 0x1110D8u) {
        ctx->pc = 0x1110D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110D4u;
        // 0x1110d8: 0xacc40224  sw          $a0, 0x224($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1110DCu;
        goto label_1110dc;
    }
    ctx->pc = 0x1110D4u;
    {
        const bool branch_taken_0x1110d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110D4u;
        // 0x1110d8: 0xacc40224  sw          $a0, 0x224($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110d4) {
            ctx->pc = 0x11110Cu;
            goto label_11110c;
        }
    }
    ctx->pc = 0x1110DCu;
label_1110dc:
    // 0x1110dc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1110dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1110e0:
    // 0x1110e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1110e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1110e4:
    // 0x1110e4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1110e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1110e8:
    // 0x1110e8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1110e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1110ec:
    // 0x1110ec: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x1110ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1110f0:
    // 0x1110f0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1110f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1110f4:
    // 0x1110f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1110f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1110f8:
    // 0x1110f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1110f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1110fc:
    // 0x1110fc: 0x8c862cd8  lw          $a2, 0x2CD8($a0)
    ctx->pc = 0x1110fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_111100:
    // 0x111100: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x111100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
label_111104:
    // 0x111104: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x111104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_111108:
    // 0x111108: 0xacc40224  sw          $a0, 0x224($a2)
    ctx->pc = 0x111108u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
label_11110c:
    // 0x11110c: 0x0  nop
    ctx->pc = 0x11110cu;
    // NOP
label_111110:
    // 0x111110: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x111110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_111114:
    // 0x111114: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x111114u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_111118:
    // 0x111118: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
label_11111c:
    if (ctx->pc == 0x11111Cu) {
        ctx->pc = 0x111120u;
        goto label_111120;
    }
    ctx->pc = 0x111118u;
    {
        const bool branch_taken_0x111118 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x111118) {
            ctx->pc = 0x1110DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1110dc;
        }
    }
    ctx->pc = 0x111120u;
label_111120:
    // 0x111120: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x111120u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111124:
    // 0x111124: 0x10000020  b           . + 4 + (0x20 << 2)
label_111128:
    if (ctx->pc == 0x111128u) {
        ctx->pc = 0x111128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111124u;
        // 0x111128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11112Cu;
        goto label_11112c;
    }
    ctx->pc = 0x111124u;
    {
        const bool branch_taken_0x111124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111124u;
        // 0x111128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111124) {
            ctx->pc = 0x1111A8u;
            goto label_1111a8;
        }
    }
    ctx->pc = 0x11112Cu;
label_11112c:
    // 0x11112c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x11112cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_111130:
    // 0x111130: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x111130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111134:
    // 0x111134: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x111134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_111138:
    // 0x111138: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x111138u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_11113c:
    // 0x11113c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x11113cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_111140:
    // 0x111140: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x111140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_111144:
    // 0x111144: 0x8ca72cd8  lw          $a3, 0x2CD8($a1)
    ctx->pc = 0x111144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
label_111148:
    // 0x111148: 0x90e60224  lbu         $a2, 0x224($a3)
    ctx->pc = 0x111148u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 548)));
label_11114c:
    // 0x11114c: 0x62efc  dsll32      $a1, $a2, 27
    ctx->pc = 0x11114cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 27));
label_111150:
    // 0x111150: 0x52ffe  dsrl32      $a1, $a1, 31
    ctx->pc = 0x111150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 31));
label_111154:
    // 0x111154: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
label_111158:
    if (ctx->pc == 0x111158u) {
        ctx->pc = 0x111158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111154u;
        // 0x111158: 0x62ebc  dsll32      $a1, $a2, 26 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11115Cu;
        goto label_11115c;
    }
    ctx->pc = 0x111154u;
    {
        const bool branch_taken_0x111154 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x111158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111154u;
        // 0x111158: 0x62ebc  dsll32      $a1, $a2, 26 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111154) {
            ctx->pc = 0x11119Cu;
            goto label_11119c;
        }
    }
    ctx->pc = 0x11115Cu;
label_11115c:
    // 0x11115c: 0x52ffe  dsrl32      $a1, $a1, 31
    ctx->pc = 0x11115cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 31));
label_111160:
    // 0x111160: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_111164:
    if (ctx->pc == 0x111164u) {
        ctx->pc = 0x111168u;
        goto label_111168;
    }
    ctx->pc = 0x111160u;
    {
        const bool branch_taken_0x111160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x111160) {
            ctx->pc = 0x11117Cu;
            goto label_11117c;
        }
    }
    ctx->pc = 0x111168u;
label_111168:
    // 0x111168: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x111168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
label_11116c:
    // 0x11116c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11116cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_111170:
    // 0x111170: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x111170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_111174:
    // 0x111174: 0x10000009  b           . + 4 + (0x9 << 2)
label_111178:
    if (ctx->pc == 0x111178u) {
        ctx->pc = 0x111178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111174u;
        // 0x111178: 0xace50224  sw          $a1, 0x224($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11117Cu;
        goto label_11117c;
    }
    ctx->pc = 0x111174u;
    {
        const bool branch_taken_0x111174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111174u;
        // 0x111178: 0xace50224  sw          $a1, 0x224($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111174) {
            ctx->pc = 0x11119Cu;
            goto label_11119c;
        }
    }
    ctx->pc = 0x11117Cu;
label_11117c:
    // 0x11117c: 0x0  nop
    ctx->pc = 0x11117cu;
    // NOP
label_111180:
    // 0x111180: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x111180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
label_111184:
    // 0x111184: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x111184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_111188:
    // 0x111188: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x111188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_11118c:
    // 0x11118c: 0xace50224  sw          $a1, 0x224($a3)
    ctx->pc = 0x11118cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
label_111190:
    // 0x111190: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x111190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
label_111194:
    // 0x111194: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x111194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
label_111198:
    // 0x111198: 0xace50224  sw          $a1, 0x224($a3)
    ctx->pc = 0x111198u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
label_11119c:
    // 0x11119c: 0x0  nop
    ctx->pc = 0x11119cu;
    // NOP
label_1111a0:
    // 0x1111a0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1111a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_1111a4:
    // 0x1111a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1111a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1111a8:
    // 0x1111a8: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x1111a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1111ac:
    // 0x1111ac: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x1111acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1111b0:
    // 0x1111b0: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
label_1111b4:
    if (ctx->pc == 0x1111B4u) {
        ctx->pc = 0x1111B8u;
        goto label_1111b8;
    }
    ctx->pc = 0x1111B0u;
    {
        const bool branch_taken_0x1111b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1111b0) {
            ctx->pc = 0x11112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11112c;
        }
    }
    ctx->pc = 0x1111B8u;
label_1111b8:
    // 0x1111b8: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x1111b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1111bc:
    // 0x1111bc: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1111bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1111c0:
    // 0x1111c0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1111c4:
    if (ctx->pc == 0x1111C4u) {
        ctx->pc = 0x1111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111C0u;
        // 0x1111c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1111C8u;
        goto label_1111c8;
    }
    ctx->pc = 0x1111C0u;
    {
        const bool branch_taken_0x1111c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111C0u;
        // 0x1111c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111c0) {
            ctx->pc = 0x111210u;
            goto label_111210;
        }
    }
    ctx->pc = 0x1111C8u;
label_1111c8:
    // 0x1111c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1111c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1111cc:
    // 0x1111cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1111ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1111d0:
    // 0x1111d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1111d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1111d4:
    // 0x1111d4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1111d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1111d8:
    // 0x1111d8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1111d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1111dc:
    // 0x1111dc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1111dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1111e0:
    // 0x1111e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1111e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1111e4:
    // 0x1111e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1111e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1111e8:
    // 0x1111e8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1111e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1111ec:
    // 0x1111ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1111ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1111f0:
    // 0x1111f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1111f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1111f4:
    // 0x1111f4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1111f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1111f8:
    // 0x1111f8: 0x320f809  jalr        $t9
label_1111fc:
    if (ctx->pc == 0x1111FCu) {
        ctx->pc = 0x1111FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111F8u;
        // 0x1111fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111200u;
        goto label_111200;
    }
    ctx->pc = 0x1111F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x111200u);
        ctx->pc = 0x1111FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111F8u;
        // 0x1111fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1111F8u, 0x111200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111200u;
label_111200:
    // 0x111200: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x111200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_111204:
    // 0x111204: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x111204u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_111208:
    // 0x111208: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_11120c:
    if (ctx->pc == 0x11120Cu) {
        ctx->pc = 0x11120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111208u;
        // 0x11120c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111210u;
        goto label_111210;
    }
    ctx->pc = 0x111208u;
    {
        const bool branch_taken_0x111208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111208u;
        // 0x11120c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111208) {
            ctx->pc = 0x1111CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1111cc;
        }
    }
    ctx->pc = 0x111210u;
label_111210:
    // 0x111210: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x111210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111214:
    // 0x111214: 0x1000000d  b           . + 4 + (0xD << 2)
label_111218:
    if (ctx->pc == 0x111218u) {
        ctx->pc = 0x111218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111214u;
        // 0x111218: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11121Cu;
        goto label_11121c;
    }
    ctx->pc = 0x111214u;
    {
        const bool branch_taken_0x111214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111214u;
        // 0x111218: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111214) {
            ctx->pc = 0x11124Cu;
            goto label_11124c;
        }
    }
    ctx->pc = 0x11121Cu;
label_11121c:
    // 0x11121c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_111220:
    // 0x111220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111224:
    // 0x111224: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111228:
    // 0x111228: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x111228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_11122c:
    // 0x11122c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11122cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_111230:
    // 0x111230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_111234:
    // 0x111234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_111238:
    // 0x111238: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x111238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_11123c:
    // 0x11123c: 0xc043da0  jal         func_10F680
label_111240:
    if (ctx->pc == 0x111240u) {
        ctx->pc = 0x111240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11123Cu;
        // 0x111240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111244u;
        goto label_111244;
    }
    ctx->pc = 0x11123Cu;
    SET_GPR_U32(ctx, 31, 0x111244u);
    ctx->pc = 0x111240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11123Cu;
    // 0x111240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x11123Cu, 0x111244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111244u;
label_111244:
    // 0x111244: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x111244u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_111248:
    // 0x111248: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x111248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11124c:
    // 0x11124c: 0x0  nop
    ctx->pc = 0x11124cu;
    // NOP
label_111250:
    // 0x111250: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x111250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_111254:
    // 0x111254: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x111254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_111258:
    // 0x111258: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_11125c:
    if (ctx->pc == 0x11125Cu) {
        ctx->pc = 0x111260u;
        goto label_111260;
    }
    ctx->pc = 0x111258u;
    {
        const bool branch_taken_0x111258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111258) {
            ctx->pc = 0x11121Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11121c;
        }
    }
    ctx->pc = 0x111260u;
label_111260:
    // 0x111260: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x111260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_111264:
    // 0x111264: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x111264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_111268:
    // 0x111268: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11126c:
    // 0x11126c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11126cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_111270:
    // 0x111270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_111274:
    // 0x111274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_111278:
    // 0x111278: 0x3e00008  jr          $ra
label_11127c:
    if (ctx->pc == 0x11127Cu) {
        ctx->pc = 0x11127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111278u;
        // 0x11127c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111280u;
        goto label_fallthrough_0x111278;
    }
    ctx->pc = 0x111278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111278u;
        // 0x11127c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x111278:
    ctx->pc = 0x111280u;
}
