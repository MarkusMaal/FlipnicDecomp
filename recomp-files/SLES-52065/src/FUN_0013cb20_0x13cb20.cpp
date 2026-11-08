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

// Function: FUN_0013cb20
// Address: 0x13cb20 - 0x13cd04
void FUN_0013cb20_0x13cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013cb20_0x13cb20");
#endif

    switch (ctx->pc) {
        case 0x13cb20u: goto label_13cb20;
        case 0x13cb24u: goto label_13cb24;
        case 0x13cb28u: goto label_13cb28;
        case 0x13cb2cu: goto label_13cb2c;
        case 0x13cb30u: goto label_13cb30;
        case 0x13cb34u: goto label_13cb34;
        case 0x13cb38u: goto label_13cb38;
        case 0x13cb3cu: goto label_13cb3c;
        case 0x13cb40u: goto label_13cb40;
        case 0x13cb44u: goto label_13cb44;
        case 0x13cb48u: goto label_13cb48;
        case 0x13cb4cu: goto label_13cb4c;
        case 0x13cb50u: goto label_13cb50;
        case 0x13cb54u: goto label_13cb54;
        case 0x13cb58u: goto label_13cb58;
        case 0x13cb5cu: goto label_13cb5c;
        case 0x13cb60u: goto label_13cb60;
        case 0x13cb64u: goto label_13cb64;
        case 0x13cb68u: goto label_13cb68;
        case 0x13cb6cu: goto label_13cb6c;
        case 0x13cb70u: goto label_13cb70;
        case 0x13cb74u: goto label_13cb74;
        case 0x13cb78u: goto label_13cb78;
        case 0x13cb7cu: goto label_13cb7c;
        case 0x13cb80u: goto label_13cb80;
        case 0x13cb84u: goto label_13cb84;
        case 0x13cb88u: goto label_13cb88;
        case 0x13cb8cu: goto label_13cb8c;
        case 0x13cb90u: goto label_13cb90;
        case 0x13cb94u: goto label_13cb94;
        case 0x13cb98u: goto label_13cb98;
        case 0x13cb9cu: goto label_13cb9c;
        case 0x13cba0u: goto label_13cba0;
        case 0x13cba4u: goto label_13cba4;
        case 0x13cba8u: goto label_13cba8;
        case 0x13cbacu: goto label_13cbac;
        case 0x13cbb0u: goto label_13cbb0;
        case 0x13cbb4u: goto label_13cbb4;
        case 0x13cbb8u: goto label_13cbb8;
        case 0x13cbbcu: goto label_13cbbc;
        case 0x13cbc0u: goto label_13cbc0;
        case 0x13cbc4u: goto label_13cbc4;
        case 0x13cbc8u: goto label_13cbc8;
        case 0x13cbccu: goto label_13cbcc;
        case 0x13cbd0u: goto label_13cbd0;
        case 0x13cbd4u: goto label_13cbd4;
        case 0x13cbd8u: goto label_13cbd8;
        case 0x13cbdcu: goto label_13cbdc;
        case 0x13cbe0u: goto label_13cbe0;
        case 0x13cbe4u: goto label_13cbe4;
        case 0x13cbe8u: goto label_13cbe8;
        case 0x13cbecu: goto label_13cbec;
        case 0x13cbf0u: goto label_13cbf0;
        case 0x13cbf4u: goto label_13cbf4;
        case 0x13cbf8u: goto label_13cbf8;
        case 0x13cbfcu: goto label_13cbfc;
        case 0x13cc00u: goto label_13cc00;
        case 0x13cc04u: goto label_13cc04;
        case 0x13cc08u: goto label_13cc08;
        case 0x13cc0cu: goto label_13cc0c;
        case 0x13cc10u: goto label_13cc10;
        case 0x13cc14u: goto label_13cc14;
        case 0x13cc18u: goto label_13cc18;
        case 0x13cc1cu: goto label_13cc1c;
        case 0x13cc20u: goto label_13cc20;
        case 0x13cc24u: goto label_13cc24;
        case 0x13cc28u: goto label_13cc28;
        case 0x13cc2cu: goto label_13cc2c;
        case 0x13cc30u: goto label_13cc30;
        case 0x13cc34u: goto label_13cc34;
        case 0x13cc38u: goto label_13cc38;
        case 0x13cc3cu: goto label_13cc3c;
        case 0x13cc40u: goto label_13cc40;
        case 0x13cc44u: goto label_13cc44;
        case 0x13cc48u: goto label_13cc48;
        case 0x13cc4cu: goto label_13cc4c;
        case 0x13cc50u: goto label_13cc50;
        case 0x13cc54u: goto label_13cc54;
        case 0x13cc58u: goto label_13cc58;
        case 0x13cc5cu: goto label_13cc5c;
        case 0x13cc60u: goto label_13cc60;
        case 0x13cc64u: goto label_13cc64;
        case 0x13cc68u: goto label_13cc68;
        case 0x13cc6cu: goto label_13cc6c;
        case 0x13cc70u: goto label_13cc70;
        case 0x13cc74u: goto label_13cc74;
        case 0x13cc78u: goto label_13cc78;
        case 0x13cc7cu: goto label_13cc7c;
        case 0x13cc80u: goto label_13cc80;
        case 0x13cc84u: goto label_13cc84;
        case 0x13cc88u: goto label_13cc88;
        case 0x13cc8cu: goto label_13cc8c;
        case 0x13cc90u: goto label_13cc90;
        case 0x13cc94u: goto label_13cc94;
        case 0x13cc98u: goto label_13cc98;
        case 0x13cc9cu: goto label_13cc9c;
        case 0x13cca0u: goto label_13cca0;
        case 0x13cca4u: goto label_13cca4;
        case 0x13cca8u: goto label_13cca8;
        case 0x13ccacu: goto label_13ccac;
        case 0x13ccb0u: goto label_13ccb0;
        case 0x13ccb4u: goto label_13ccb4;
        case 0x13ccb8u: goto label_13ccb8;
        case 0x13ccbcu: goto label_13ccbc;
        case 0x13ccc0u: goto label_13ccc0;
        case 0x13ccc4u: goto label_13ccc4;
        case 0x13ccc8u: goto label_13ccc8;
        case 0x13ccccu: goto label_13cccc;
        case 0x13ccd0u: goto label_13ccd0;
        case 0x13ccd4u: goto label_13ccd4;
        case 0x13ccd8u: goto label_13ccd8;
        case 0x13ccdcu: goto label_13ccdc;
        case 0x13cce0u: goto label_13cce0;
        case 0x13cce4u: goto label_13cce4;
        case 0x13cce8u: goto label_13cce8;
        case 0x13ccecu: goto label_13ccec;
        case 0x13ccf0u: goto label_13ccf0;
        case 0x13ccf4u: goto label_13ccf4;
        case 0x13ccf8u: goto label_13ccf8;
        case 0x13ccfcu: goto label_13ccfc;
        case 0x13cd00u: goto label_13cd00;
        default: break;
    }

    ctx->pc = 0x13cb20u;

label_13cb20:
    // 0x13cb20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_13cb24:
    // 0x13cb24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_13cb28:
    // 0x13cb28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13cb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13cb2c:
    // 0x13cb2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13cb30:
    // 0x13cb30: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13cb30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13cb34:
    // 0x13cb34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13cb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13cb38:
    // 0x13cb38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13cb38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13cb3c:
    // 0x13cb3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13cb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13cb40:
    // 0x13cb40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13cb44:
    // 0x13cb44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13cb48:
    // 0x13cb48: 0xa08000db  sb          $zero, 0xDB($a0)
    ctx->pc = 0x13cb48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 219), (uint8_t)GPR_U32(ctx, 0));
label_13cb4c:
    // 0x13cb4c: 0x90830189  lbu         $v1, 0x189($a0)
    ctx->pc = 0x13cb4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 393)));
label_13cb50:
    // 0x13cb50: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13cb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_13cb54:
    // 0x13cb54: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_13cb58:
    if (ctx->pc == 0x13CB58u) {
        ctx->pc = 0x13CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB54u;
        // 0x13cb58: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB5Cu;
        goto label_13cb5c;
    }
    ctx->pc = 0x13CB54u;
    {
        const bool branch_taken_0x13cb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB54u;
        // 0x13cb58: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb54) {
            ctx->pc = 0x13CB9Cu;
            goto label_13cb9c;
        }
    }
    ctx->pc = 0x13CB5Cu;
label_13cb5c:
    // 0x13cb5c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x13cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_13cb60:
    // 0x13cb60: 0x1282000d  beq         $s4, $v0, . + 4 + (0xD << 2)
label_13cb64:
    if (ctx->pc == 0x13CB64u) {
        ctx->pc = 0x13CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB60u;
        // 0x13cb64: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB68u;
        goto label_13cb68;
    }
    ctx->pc = 0x13CB60u;
    {
        const bool branch_taken_0x13cb60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x13CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB60u;
        // 0x13cb64: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb60) {
            ctx->pc = 0x13CB98u;
            goto label_13cb98;
        }
    }
    ctx->pc = 0x13CB68u;
label_13cb68:
    // 0x13cb68: 0x1282000b  beq         $s4, $v0, . + 4 + (0xB << 2)
label_13cb6c:
    if (ctx->pc == 0x13CB6Cu) {
        ctx->pc = 0x13CB70u;
        goto label_13cb70;
    }
    ctx->pc = 0x13CB68u;
    {
        const bool branch_taken_0x13cb68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x13cb68) {
            ctx->pc = 0x13CB98u;
            goto label_13cb98;
        }
    }
    ctx->pc = 0x13CB70u;
label_13cb70:
    // 0x13cb70: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x13cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13cb74:
    // 0x13cb74: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
label_13cb78:
    if (ctx->pc == 0x13CB78u) {
        ctx->pc = 0x13CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB74u;
        // 0x13cb78: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB7Cu;
        goto label_13cb7c;
    }
    ctx->pc = 0x13CB74u;
    {
        const bool branch_taken_0x13cb74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x13CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB74u;
        // 0x13cb78: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb74) {
            ctx->pc = 0x13CB98u;
            goto label_13cb98;
        }
    }
    ctx->pc = 0x13CB7Cu;
label_13cb7c:
    // 0x13cb7c: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
label_13cb80:
    if (ctx->pc == 0x13CB80u) {
        ctx->pc = 0x13CB84u;
        goto label_13cb84;
    }
    ctx->pc = 0x13CB7Cu;
    {
        const bool branch_taken_0x13cb7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x13cb7c) {
            ctx->pc = 0x13CB98u;
            goto label_13cb98;
        }
    }
    ctx->pc = 0x13CB84u;
label_13cb84:
    // 0x13cb84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x13cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_13cb88:
    // 0x13cb88: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
label_13cb8c:
    if (ctx->pc == 0x13CB8Cu) {
        ctx->pc = 0x13CB90u;
        goto label_13cb90;
    }
    ctx->pc = 0x13CB88u;
    {
        const bool branch_taken_0x13cb88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x13cb88) {
            ctx->pc = 0x13CB98u;
            goto label_13cb98;
        }
    }
    ctx->pc = 0x13CB90u;
label_13cb90:
    // 0x13cb90: 0x10000003  b           . + 4 + (0x3 << 2)
label_13cb94:
    if (ctx->pc == 0x13CB94u) {
        ctx->pc = 0x13CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB90u;
        // 0x13cb94: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB98u;
        goto label_13cb98;
    }
    ctx->pc = 0x13CB90u;
    {
        const bool branch_taken_0x13cb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB90u;
        // 0x13cb94: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb90) {
            ctx->pc = 0x13CBA0u;
            goto label_13cba0;
        }
    }
    ctx->pc = 0x13CB98u;
label_13cb98:
    // 0x13cb98: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x13cb98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_13cb9c:
    // 0x13cb9c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x13cb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_13cba0:
    // 0x13cba0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13cba4:
    if (ctx->pc == 0x13CBA4u) {
        ctx->pc = 0x13CBA8u;
        goto label_13cba8;
    }
    ctx->pc = 0x13CBA0u;
    {
        const bool branch_taken_0x13cba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cba0) {
            ctx->pc = 0x13CBACu;
            goto label_13cbac;
        }
    }
    ctx->pc = 0x13CBA8u;
label_13cba8:
    // 0x13cba8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13cba8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13cbac:
    // 0x13cbac: 0x92a20188  lbu         $v0, 0x188($s5)
    ctx->pc = 0x13cbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 392)));
label_13cbb0:
    // 0x13cbb0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_13cbb4:
    if (ctx->pc == 0x13CBB4u) {
        ctx->pc = 0x13CBB8u;
        goto label_13cbb8;
    }
    ctx->pc = 0x13CBB0u;
    {
        const bool branch_taken_0x13cbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cbb0) {
            ctx->pc = 0x13CC0Cu;
            goto label_13cc0c;
        }
    }
    ctx->pc = 0x13CBB8u;
label_13cbb8:
    // 0x13cbb8: 0x8ea2011c  lw          $v0, 0x11C($s5)
    ctx->pc = 0x13cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 284)));
label_13cbbc:
    // 0x13cbbc: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x13cbbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13cbc0:
    // 0x13cbc0: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x13cbc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_13cbc4:
    // 0x13cbc4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_13cbc8:
    if (ctx->pc == 0x13CBC8u) {
        ctx->pc = 0x13CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBC4u;
        // 0x13cbc8: 0x11082b  sltu        $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBCCu;
        goto label_13cbcc;
    }
    ctx->pc = 0x13CBC4u;
    {
        const bool branch_taken_0x13cbc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBC4u;
        // 0x13cbc8: 0x11082b  sltu        $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbc4) {
            ctx->pc = 0x13CC0Cu;
            goto label_13cc0c;
        }
    }
    ctx->pc = 0x13CBCCu;
label_13cbcc:
    // 0x13cbcc: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_13cbd0:
    if (ctx->pc == 0x13CBD0u) {
        ctx->pc = 0x13CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBCCu;
        // 0x13cbd0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBD4u;
        goto label_13cbd4;
    }
    ctx->pc = 0x13CBCCu;
    {
        const bool branch_taken_0x13cbcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBCCu;
        // 0x13cbd0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbcc) {
            ctx->pc = 0x13CC0Cu;
            goto label_13cc0c;
        }
    }
    ctx->pc = 0x13CBD4u;
label_13cbd4:
    // 0x13cbd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13cbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13cbd8:
    // 0x13cbd8: 0x8ea2011c  lw          $v0, 0x11C($s5)
    ctx->pc = 0x13cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 284)));
label_13cbdc:
    // 0x13cbdc: 0x2142826  xor         $a1, $s0, $s4
    ctx->pc = 0x13cbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 20));
label_13cbe0:
    // 0x13cbe0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x13cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13cbe4:
    // 0x13cbe4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_13cbe8:
    // 0x13cbe8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13cbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cbec:
    // 0x13cbec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13cbecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13cbf0:
    // 0x13cbf0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13cbf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13cbf4:
    // 0x13cbf4: 0x320f809  jalr        $t9
label_13cbf8:
    if (ctx->pc == 0x13CBF8u) {
        ctx->pc = 0x13CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBF4u;
        // 0x13cbf8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CBFCu;
        goto label_13cbfc;
    }
    ctx->pc = 0x13CBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13CBFCu);
        ctx->pc = 0x13CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBF4u;
        // 0x13cbf8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CBF4u, 0x13CBFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CBFCu;
label_13cbfc:
    // 0x13cbfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13cbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13cc00:
    // 0x13cc00: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x13cc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_13cc04:
    // 0x13cc04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_13cc08:
    if (ctx->pc == 0x13CC08u) {
        ctx->pc = 0x13CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC04u;
        // 0x13cc08: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC0Cu;
        goto label_13cc0c;
    }
    ctx->pc = 0x13CC04u;
    {
        const bool branch_taken_0x13cc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC04u;
        // 0x13cc08: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc04) {
            ctx->pc = 0x13CBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cbd8;
        }
    }
    ctx->pc = 0x13CC0Cu;
label_13cc0c:
    // 0x13cc0c: 0x0  nop
    ctx->pc = 0x13cc0cu;
    // NOP
label_13cc10:
    // 0x13cc10: 0xc04f7a4  jal         func_13DE90
label_13cc14:
    if (ctx->pc == 0x13CC14u) {
        ctx->pc = 0x13CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC10u;
        // 0x13cc14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC18u;
        goto label_13cc18;
    }
    ctx->pc = 0x13CC10u;
    SET_GPR_U32(ctx, 31, 0x13CC18u);
    ctx->pc = 0x13CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC10u;
    // 0x13cc14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE90u, 0x13CC10u, 0x13CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC18u;
label_13cc18:
    // 0x13cc18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13cc1c:
    // 0x13cc1c: 0xa2a30055  sb          $v1, 0x55($s5)
    ctx->pc = 0x13cc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
label_13cc20:
    // 0x13cc20: 0x10000004  b           . + 4 + (0x4 << 2)
label_13cc24:
    if (ctx->pc == 0x13CC24u) {
        ctx->pc = 0x13CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC20u;
        // 0x13cc24: 0x8eb001d0  lw          $s0, 0x1D0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC28u;
        goto label_13cc28;
    }
    ctx->pc = 0x13CC20u;
    {
        const bool branch_taken_0x13cc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC20u;
        // 0x13cc24: 0x8eb001d0  lw          $s0, 0x1D0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc20) {
            ctx->pc = 0x13CC34u;
            goto label_13cc34;
        }
    }
    ctx->pc = 0x13CC28u;
label_13cc28:
    // 0x13cc28: 0xc0540f0  jal         func_1503C0
label_13cc2c:
    if (ctx->pc == 0x13CC2Cu) {
        ctx->pc = 0x13CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC28u;
        // 0x13cc2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC30u;
        goto label_13cc30;
    }
    ctx->pc = 0x13CC28u;
    SET_GPR_U32(ctx, 31, 0x13CC30u);
    ctx->pc = 0x13CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC28u;
    // 0x13cc2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1503C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1503C0u, 0x13CC28u, 0x13CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC30u;
label_13cc30:
    // 0x13cc30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13cc30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_13cc34:
    // 0x13cc34: 0x0  nop
    ctx->pc = 0x13cc34u;
    // NOP
label_13cc38:
    // 0x13cc38: 0x8ea401cc  lw          $a0, 0x1CC($s5)
    ctx->pc = 0x13cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 460)));
label_13cc3c:
    // 0x13cc3c: 0x8ea301d0  lw          $v1, 0x1D0($s5)
    ctx->pc = 0x13cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 464)));
label_13cc40:
    // 0x13cc40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_13cc44:
    // 0x13cc44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_13cc48:
    // 0x13cc48: 0x1603fff7  bne         $s0, $v1, . + 4 + (-0x9 << 2)
label_13cc4c:
    if (ctx->pc == 0x13CC4Cu) {
        ctx->pc = 0x13CC50u;
        goto label_13cc50;
    }
    ctx->pc = 0x13CC48u;
    {
        const bool branch_taken_0x13cc48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x13cc48) {
            ctx->pc = 0x13CC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cc28;
        }
    }
    ctx->pc = 0x13CC50u;
label_13cc50:
    // 0x13cc50: 0x92a3018a  lbu         $v1, 0x18A($s5)
    ctx->pc = 0x13cc50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 394)));
label_13cc54:
    // 0x13cc54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_13cc58:
    if (ctx->pc == 0x13CC58u) {
        ctx->pc = 0x13CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC54u;
        // 0x13cc58: 0x26a400b0  addiu       $a0, $s5, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC5Cu;
        goto label_13cc5c;
    }
    ctx->pc = 0x13CC54u;
    {
        const bool branch_taken_0x13cc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC54u;
        // 0x13cc58: 0x26a400b0  addiu       $a0, $s5, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc54) {
            ctx->pc = 0x13CC64u;
            goto label_13cc64;
        }
    }
    ctx->pc = 0x13CC5Cu;
label_13cc5c:
    // 0x13cc5c: 0x10000005  b           . + 4 + (0x5 << 2)
label_13cc60:
    if (ctx->pc == 0x13CC60u) {
        ctx->pc = 0x13CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC5Cu;
        // 0x13cc60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC64u;
        goto label_13cc64;
    }
    ctx->pc = 0x13CC5Cu;
    {
        const bool branch_taken_0x13cc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC5Cu;
        // 0x13cc60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc5c) {
            ctx->pc = 0x13CC74u;
            goto label_13cc74;
        }
    }
    ctx->pc = 0x13CC64u;
label_13cc64:
    // 0x13cc64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13cc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13cc68:
    // 0x13cc68: 0xc0509cc  jal         func_142730
label_13cc6c:
    if (ctx->pc == 0x13CC6Cu) {
        ctx->pc = 0x13CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC68u;
        // 0x13cc6c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC70u;
        goto label_13cc70;
    }
    ctx->pc = 0x13CC68u;
    SET_GPR_U32(ctx, 31, 0x13CC70u);
    ctx->pc = 0x13CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC68u;
    // 0x13cc6c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142730u, 0x13CC68u, 0x13CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC70u;
label_13cc70:
    // 0x13cc70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cc74:
    // 0x13cc74: 0x8ea301b8  lw          $v1, 0x1B8($s5)
    ctx->pc = 0x13cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 440)));
label_13cc78:
    // 0x13cc78: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_13cc7c:
    if (ctx->pc == 0x13CC7Cu) {
        ctx->pc = 0x13CC80u;
        goto label_13cc80;
    }
    ctx->pc = 0x13CC78u;
    {
        const bool branch_taken_0x13cc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc78) {
            ctx->pc = 0x13CC9Cu;
            goto label_13cc9c;
        }
    }
    ctx->pc = 0x13CC80u;
label_13cc80:
    // 0x13cc80: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x13cc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_13cc84:
    // 0x13cc84: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13cc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13cc88:
    // 0x13cc88: 0x320f809  jalr        $t9
label_13cc8c:
    if (ctx->pc == 0x13CC8Cu) {
        ctx->pc = 0x13CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC88u;
        // 0x13cc8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC90u;
        goto label_13cc90;
    }
    ctx->pc = 0x13CC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13CC90u);
        ctx->pc = 0x13CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC88u;
        // 0x13cc8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC88u, 0x13CC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CC90u;
label_13cc90:
    // 0x13cc90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13cc94:
    if (ctx->pc == 0x13CC94u) {
        ctx->pc = 0x13CC98u;
        goto label_13cc98;
    }
    ctx->pc = 0x13CC90u;
    {
        const bool branch_taken_0x13cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc90) {
            ctx->pc = 0x13CC9Cu;
            goto label_13cc9c;
        }
    }
    ctx->pc = 0x13CC98u;
label_13cc98:
    // 0x13cc98: 0xa2a00055  sb          $zero, 0x55($s5)
    ctx->pc = 0x13cc98u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
label_13cc9c:
    // 0x13cc9c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_13cca0:
    if (ctx->pc == 0x13CCA0u) {
        ctx->pc = 0x13CCA4u;
        goto label_13cca4;
    }
    ctx->pc = 0x13CC9Cu;
    {
        const bool branch_taken_0x13cc9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc9c) {
            ctx->pc = 0x13CCE0u;
            goto label_13cce0;
        }
    }
    ctx->pc = 0x13CCA4u;
label_13cca4:
    // 0x13cca4: 0x8ea30114  lw          $v1, 0x114($s5)
    ctx->pc = 0x13cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_13cca8:
    // 0x13cca8: 0x8eb10118  lw          $s1, 0x118($s5)
    ctx->pc = 0x13cca8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
label_13ccac:
    // 0x13ccac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13ccb0:
    // 0x13ccb0: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x13ccb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_13ccb4:
    // 0x13ccb4: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
label_13ccb8:
    if (ctx->pc == 0x13CCB8u) {
        ctx->pc = 0x13CCBCu;
        goto label_13ccbc;
    }
    ctx->pc = 0x13CCB4u;
    {
        const bool branch_taken_0x13ccb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x13ccb4) {
            ctx->pc = 0x13CCE0u;
            goto label_13cce0;
        }
    }
    ctx->pc = 0x13CCBCu;
label_13ccbc:
    // 0x13ccbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13ccc0:
    // 0x13ccc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13ccc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13ccc4:
    // 0x13ccc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13ccc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ccc8:
    // 0x13ccc8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13ccc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13cccc:
    // 0x13cccc: 0x320f809  jalr        $t9
label_13ccd0:
    if (ctx->pc == 0x13CCD0u) {
        ctx->pc = 0x13CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCCCu;
        // 0x13ccd0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CCD4u;
        goto label_13ccd4;
    }
    ctx->pc = 0x13CCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13CCD4u);
        ctx->pc = 0x13CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCCCu;
        // 0x13ccd0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CCCCu, 0x13CCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CCD4u;
label_13ccd4:
    // 0x13ccd4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x13ccd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_13ccd8:
    // 0x13ccd8: 0x1630fff8  bne         $s1, $s0, . + 4 + (-0x8 << 2)
label_13ccdc:
    if (ctx->pc == 0x13CCDCu) {
        ctx->pc = 0x13CCE0u;
        goto label_13cce0;
    }
    ctx->pc = 0x13CCD8u;
    {
        const bool branch_taken_0x13ccd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x13ccd8) {
            ctx->pc = 0x13CCBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ccbc;
        }
    }
    ctx->pc = 0x13CCE0u;
label_13cce0:
    // 0x13cce0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13cce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_13cce4:
    // 0x13cce4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13cce4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13cce8:
    // 0x13cce8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13cce8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13ccec:
    // 0x13ccec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13ccecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13ccf0:
    // 0x13ccf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ccf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13ccf4:
    // 0x13ccf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ccf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13ccf8:
    // 0x13ccf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ccf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13ccfc:
    // 0x13ccfc: 0x3e00008  jr          $ra
label_13cd00:
    if (ctx->pc == 0x13CD00u) {
        ctx->pc = 0x13CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCFCu;
        // 0x13cd00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD04u;
        goto label_fallthrough_0x13ccfc;
    }
    ctx->pc = 0x13CCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCFCu;
        // 0x13cd00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13ccfc:
    ctx->pc = 0x13CD04u;
}
