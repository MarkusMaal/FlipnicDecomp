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

// Function: FUN_0012c9f0
// Address: 0x12c9f0 - 0x12cde0
void FUN_0012c9f0_0x12c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012c9f0_0x12c9f0");
#endif

    switch (ctx->pc) {
        case 0x12c9f0u: goto label_12c9f0;
        case 0x12c9f4u: goto label_12c9f4;
        case 0x12c9f8u: goto label_12c9f8;
        case 0x12c9fcu: goto label_12c9fc;
        case 0x12ca00u: goto label_12ca00;
        case 0x12ca04u: goto label_12ca04;
        case 0x12ca08u: goto label_12ca08;
        case 0x12ca0cu: goto label_12ca0c;
        case 0x12ca10u: goto label_12ca10;
        case 0x12ca14u: goto label_12ca14;
        case 0x12ca18u: goto label_12ca18;
        case 0x12ca1cu: goto label_12ca1c;
        case 0x12ca20u: goto label_12ca20;
        case 0x12ca24u: goto label_12ca24;
        case 0x12ca28u: goto label_12ca28;
        case 0x12ca2cu: goto label_12ca2c;
        case 0x12ca30u: goto label_12ca30;
        case 0x12ca34u: goto label_12ca34;
        case 0x12ca38u: goto label_12ca38;
        case 0x12ca3cu: goto label_12ca3c;
        case 0x12ca40u: goto label_12ca40;
        case 0x12ca44u: goto label_12ca44;
        case 0x12ca48u: goto label_12ca48;
        case 0x12ca4cu: goto label_12ca4c;
        case 0x12ca50u: goto label_12ca50;
        case 0x12ca54u: goto label_12ca54;
        case 0x12ca58u: goto label_12ca58;
        case 0x12ca5cu: goto label_12ca5c;
        case 0x12ca60u: goto label_12ca60;
        case 0x12ca64u: goto label_12ca64;
        case 0x12ca68u: goto label_12ca68;
        case 0x12ca6cu: goto label_12ca6c;
        case 0x12ca70u: goto label_12ca70;
        case 0x12ca74u: goto label_12ca74;
        case 0x12ca78u: goto label_12ca78;
        case 0x12ca7cu: goto label_12ca7c;
        case 0x12ca80u: goto label_12ca80;
        case 0x12ca84u: goto label_12ca84;
        case 0x12ca88u: goto label_12ca88;
        case 0x12ca8cu: goto label_12ca8c;
        case 0x12ca90u: goto label_12ca90;
        case 0x12ca94u: goto label_12ca94;
        case 0x12ca98u: goto label_12ca98;
        case 0x12ca9cu: goto label_12ca9c;
        case 0x12caa0u: goto label_12caa0;
        case 0x12caa4u: goto label_12caa4;
        case 0x12caa8u: goto label_12caa8;
        case 0x12caacu: goto label_12caac;
        case 0x12cab0u: goto label_12cab0;
        case 0x12cab4u: goto label_12cab4;
        case 0x12cab8u: goto label_12cab8;
        case 0x12cabcu: goto label_12cabc;
        case 0x12cac0u: goto label_12cac0;
        case 0x12cac4u: goto label_12cac4;
        case 0x12cac8u: goto label_12cac8;
        case 0x12caccu: goto label_12cacc;
        case 0x12cad0u: goto label_12cad0;
        case 0x12cad4u: goto label_12cad4;
        case 0x12cad8u: goto label_12cad8;
        case 0x12cadcu: goto label_12cadc;
        case 0x12cae0u: goto label_12cae0;
        case 0x12cae4u: goto label_12cae4;
        case 0x12cae8u: goto label_12cae8;
        case 0x12caecu: goto label_12caec;
        case 0x12caf0u: goto label_12caf0;
        case 0x12caf4u: goto label_12caf4;
        case 0x12caf8u: goto label_12caf8;
        case 0x12cafcu: goto label_12cafc;
        case 0x12cb00u: goto label_12cb00;
        case 0x12cb04u: goto label_12cb04;
        case 0x12cb08u: goto label_12cb08;
        case 0x12cb0cu: goto label_12cb0c;
        case 0x12cb10u: goto label_12cb10;
        case 0x12cb14u: goto label_12cb14;
        case 0x12cb18u: goto label_12cb18;
        case 0x12cb1cu: goto label_12cb1c;
        case 0x12cb20u: goto label_12cb20;
        case 0x12cb24u: goto label_12cb24;
        case 0x12cb28u: goto label_12cb28;
        case 0x12cb2cu: goto label_12cb2c;
        case 0x12cb30u: goto label_12cb30;
        case 0x12cb34u: goto label_12cb34;
        case 0x12cb38u: goto label_12cb38;
        case 0x12cb3cu: goto label_12cb3c;
        case 0x12cb40u: goto label_12cb40;
        case 0x12cb44u: goto label_12cb44;
        case 0x12cb48u: goto label_12cb48;
        case 0x12cb4cu: goto label_12cb4c;
        case 0x12cb50u: goto label_12cb50;
        case 0x12cb54u: goto label_12cb54;
        case 0x12cb58u: goto label_12cb58;
        case 0x12cb5cu: goto label_12cb5c;
        case 0x12cb60u: goto label_12cb60;
        case 0x12cb64u: goto label_12cb64;
        case 0x12cb68u: goto label_12cb68;
        case 0x12cb6cu: goto label_12cb6c;
        case 0x12cb70u: goto label_12cb70;
        case 0x12cb74u: goto label_12cb74;
        case 0x12cb78u: goto label_12cb78;
        case 0x12cb7cu: goto label_12cb7c;
        case 0x12cb80u: goto label_12cb80;
        case 0x12cb84u: goto label_12cb84;
        case 0x12cb88u: goto label_12cb88;
        case 0x12cb8cu: goto label_12cb8c;
        case 0x12cb90u: goto label_12cb90;
        case 0x12cb94u: goto label_12cb94;
        case 0x12cb98u: goto label_12cb98;
        case 0x12cb9cu: goto label_12cb9c;
        case 0x12cba0u: goto label_12cba0;
        case 0x12cba4u: goto label_12cba4;
        case 0x12cba8u: goto label_12cba8;
        case 0x12cbacu: goto label_12cbac;
        case 0x12cbb0u: goto label_12cbb0;
        case 0x12cbb4u: goto label_12cbb4;
        case 0x12cbb8u: goto label_12cbb8;
        case 0x12cbbcu: goto label_12cbbc;
        case 0x12cbc0u: goto label_12cbc0;
        case 0x12cbc4u: goto label_12cbc4;
        case 0x12cbc8u: goto label_12cbc8;
        case 0x12cbccu: goto label_12cbcc;
        case 0x12cbd0u: goto label_12cbd0;
        case 0x12cbd4u: goto label_12cbd4;
        case 0x12cbd8u: goto label_12cbd8;
        case 0x12cbdcu: goto label_12cbdc;
        case 0x12cbe0u: goto label_12cbe0;
        case 0x12cbe4u: goto label_12cbe4;
        case 0x12cbe8u: goto label_12cbe8;
        case 0x12cbecu: goto label_12cbec;
        case 0x12cbf0u: goto label_12cbf0;
        case 0x12cbf4u: goto label_12cbf4;
        case 0x12cbf8u: goto label_12cbf8;
        case 0x12cbfcu: goto label_12cbfc;
        case 0x12cc00u: goto label_12cc00;
        case 0x12cc04u: goto label_12cc04;
        case 0x12cc08u: goto label_12cc08;
        case 0x12cc0cu: goto label_12cc0c;
        case 0x12cc10u: goto label_12cc10;
        case 0x12cc14u: goto label_12cc14;
        case 0x12cc18u: goto label_12cc18;
        case 0x12cc1cu: goto label_12cc1c;
        case 0x12cc20u: goto label_12cc20;
        case 0x12cc24u: goto label_12cc24;
        case 0x12cc28u: goto label_12cc28;
        case 0x12cc2cu: goto label_12cc2c;
        case 0x12cc30u: goto label_12cc30;
        case 0x12cc34u: goto label_12cc34;
        case 0x12cc38u: goto label_12cc38;
        case 0x12cc3cu: goto label_12cc3c;
        case 0x12cc40u: goto label_12cc40;
        case 0x12cc44u: goto label_12cc44;
        case 0x12cc48u: goto label_12cc48;
        case 0x12cc4cu: goto label_12cc4c;
        case 0x12cc50u: goto label_12cc50;
        case 0x12cc54u: goto label_12cc54;
        case 0x12cc58u: goto label_12cc58;
        case 0x12cc5cu: goto label_12cc5c;
        case 0x12cc60u: goto label_12cc60;
        case 0x12cc64u: goto label_12cc64;
        case 0x12cc68u: goto label_12cc68;
        case 0x12cc6cu: goto label_12cc6c;
        case 0x12cc70u: goto label_12cc70;
        case 0x12cc74u: goto label_12cc74;
        case 0x12cc78u: goto label_12cc78;
        case 0x12cc7cu: goto label_12cc7c;
        case 0x12cc80u: goto label_12cc80;
        case 0x12cc84u: goto label_12cc84;
        case 0x12cc88u: goto label_12cc88;
        case 0x12cc8cu: goto label_12cc8c;
        case 0x12cc90u: goto label_12cc90;
        case 0x12cc94u: goto label_12cc94;
        case 0x12cc98u: goto label_12cc98;
        case 0x12cc9cu: goto label_12cc9c;
        case 0x12cca0u: goto label_12cca0;
        case 0x12cca4u: goto label_12cca4;
        case 0x12cca8u: goto label_12cca8;
        case 0x12ccacu: goto label_12ccac;
        case 0x12ccb0u: goto label_12ccb0;
        case 0x12ccb4u: goto label_12ccb4;
        case 0x12ccb8u: goto label_12ccb8;
        case 0x12ccbcu: goto label_12ccbc;
        case 0x12ccc0u: goto label_12ccc0;
        case 0x12ccc4u: goto label_12ccc4;
        case 0x12ccc8u: goto label_12ccc8;
        case 0x12ccccu: goto label_12cccc;
        case 0x12ccd0u: goto label_12ccd0;
        case 0x12ccd4u: goto label_12ccd4;
        case 0x12ccd8u: goto label_12ccd8;
        case 0x12ccdcu: goto label_12ccdc;
        case 0x12cce0u: goto label_12cce0;
        case 0x12cce4u: goto label_12cce4;
        case 0x12cce8u: goto label_12cce8;
        case 0x12ccecu: goto label_12ccec;
        case 0x12ccf0u: goto label_12ccf0;
        case 0x12ccf4u: goto label_12ccf4;
        case 0x12ccf8u: goto label_12ccf8;
        case 0x12ccfcu: goto label_12ccfc;
        case 0x12cd00u: goto label_12cd00;
        case 0x12cd04u: goto label_12cd04;
        case 0x12cd08u: goto label_12cd08;
        case 0x12cd0cu: goto label_12cd0c;
        case 0x12cd10u: goto label_12cd10;
        case 0x12cd14u: goto label_12cd14;
        case 0x12cd18u: goto label_12cd18;
        case 0x12cd1cu: goto label_12cd1c;
        case 0x12cd20u: goto label_12cd20;
        case 0x12cd24u: goto label_12cd24;
        case 0x12cd28u: goto label_12cd28;
        case 0x12cd2cu: goto label_12cd2c;
        case 0x12cd30u: goto label_12cd30;
        case 0x12cd34u: goto label_12cd34;
        case 0x12cd38u: goto label_12cd38;
        case 0x12cd3cu: goto label_12cd3c;
        case 0x12cd40u: goto label_12cd40;
        case 0x12cd44u: goto label_12cd44;
        case 0x12cd48u: goto label_12cd48;
        case 0x12cd4cu: goto label_12cd4c;
        case 0x12cd50u: goto label_12cd50;
        case 0x12cd54u: goto label_12cd54;
        case 0x12cd58u: goto label_12cd58;
        case 0x12cd5cu: goto label_12cd5c;
        case 0x12cd60u: goto label_12cd60;
        case 0x12cd64u: goto label_12cd64;
        case 0x12cd68u: goto label_12cd68;
        case 0x12cd6cu: goto label_12cd6c;
        case 0x12cd70u: goto label_12cd70;
        case 0x12cd74u: goto label_12cd74;
        case 0x12cd78u: goto label_12cd78;
        case 0x12cd7cu: goto label_12cd7c;
        case 0x12cd80u: goto label_12cd80;
        case 0x12cd84u: goto label_12cd84;
        case 0x12cd88u: goto label_12cd88;
        case 0x12cd8cu: goto label_12cd8c;
        case 0x12cd90u: goto label_12cd90;
        case 0x12cd94u: goto label_12cd94;
        case 0x12cd98u: goto label_12cd98;
        case 0x12cd9cu: goto label_12cd9c;
        case 0x12cda0u: goto label_12cda0;
        case 0x12cda4u: goto label_12cda4;
        case 0x12cda8u: goto label_12cda8;
        case 0x12cdacu: goto label_12cdac;
        case 0x12cdb0u: goto label_12cdb0;
        case 0x12cdb4u: goto label_12cdb4;
        case 0x12cdb8u: goto label_12cdb8;
        case 0x12cdbcu: goto label_12cdbc;
        case 0x12cdc0u: goto label_12cdc0;
        case 0x12cdc4u: goto label_12cdc4;
        case 0x12cdc8u: goto label_12cdc8;
        case 0x12cdccu: goto label_12cdcc;
        case 0x12cdd0u: goto label_12cdd0;
        case 0x12cdd4u: goto label_12cdd4;
        case 0x12cdd8u: goto label_12cdd8;
        case 0x12cddcu: goto label_12cddc;
        default: break;
    }

    ctx->pc = 0x12c9f0u;

label_12c9f0:
    // 0x12c9f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12c9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_12c9f4:
    // 0x12c9f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_12c9f8:
    // 0x12c9f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12c9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_12c9fc:
    // 0x12c9fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12c9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_12ca00:
    // 0x12ca00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12ca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_12ca04:
    // 0x12ca04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12ca04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_12ca08:
    // 0x12ca08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_12ca0c:
    // 0x12ca0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12ca10:
    // 0x12ca10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12ca14:
    // 0x12ca14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12ca14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ca18:
    // 0x12ca18: 0x8f828068  lw          $v0, -0x7F98($gp)
    ctx->pc = 0x12ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934632)));
label_12ca1c:
    // 0x12ca1c: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
label_12ca20:
    if (ctx->pc == 0x12CA20u) {
        ctx->pc = 0x12CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA1Cu;
        // 0x12ca20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CA24u;
        goto label_12ca24;
    }
    ctx->pc = 0x12CA1Cu;
    {
        const bool branch_taken_0x12ca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA1Cu;
        // 0x12ca20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca1c) {
            ctx->pc = 0x12CD58u;
            goto label_12cd58;
        }
    }
    ctx->pc = 0x12CA24u;
label_12ca24:
    // 0x12ca24: 0x83828498  lb          $v0, -0x7B68($gp)
    ctx->pc = 0x12ca24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935704)));
label_12ca28:
    // 0x12ca28: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
label_12ca2c:
    if (ctx->pc == 0x12CA2Cu) {
        ctx->pc = 0x12CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA28u;
        // 0x12ca2c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CA30u;
        goto label_12ca30;
    }
    ctx->pc = 0x12CA28u;
    {
        const bool branch_taken_0x12ca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA28u;
        // 0x12ca2c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca28) {
            ctx->pc = 0x12CC80u;
            goto label_12cc80;
        }
    }
    ctx->pc = 0x12CA30u;
label_12ca30:
    // 0x12ca30: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12ca30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12ca34:
    // 0x12ca34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12ca34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_12ca38:
    // 0x12ca38: 0xfc202f28  sd          $zero, 0x2F28($at)
    ctx->pc = 0x12ca38u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 12072), GPR_U64(ctx, 0));
label_12ca3c:
    // 0x12ca3c: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x12ca3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
label_12ca40:
    // 0x12ca40: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12ca40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12ca44:
    // 0x12ca44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12ca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_12ca48:
    // 0x12ca48: 0x240bffbf  addiu       $t3, $zero, -0x41
    ctx->pc = 0x12ca48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_12ca4c:
    // 0x12ca4c: 0xfc222f10  sd          $v0, 0x2F10($at)
    ctx->pc = 0x12ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 12048), GPR_U64(ctx, 2));
label_12ca50:
    // 0x12ca50: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x12ca50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_12ca54:
    // 0x12ca54: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12ca54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12ca58:
    // 0x12ca58: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x12ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_12ca5c:
    // 0x12ca5c: 0xfc232f18  sd          $v1, 0x2F18($at)
    ctx->pc = 0x12ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 12056), GPR_U64(ctx, 3));
label_12ca60:
    // 0x12ca60: 0x640c0040  daddiu      $t4, $zero, 0x40
    ctx->pc = 0x12ca60u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_12ca64:
    // 0x12ca64: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12ca64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12ca68:
    // 0x12ca68: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x12ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_12ca6c:
    // 0x12ca6c: 0xfc222f38  sd          $v0, 0x2F38($at)
    ctx->pc = 0x12ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 12088), GPR_U64(ctx, 2));
label_12ca70:
    // 0x12ca70: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x12ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_12ca74:
    // 0x12ca74: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12ca74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12ca78:
    // 0x12ca78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ca7c:
    // 0x12ca7c: 0xfc232f48  sd          $v1, 0x2F48($at)
    ctx->pc = 0x12ca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 12104), GPR_U64(ctx, 3));
label_12ca80:
    // 0x12ca80: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x12ca80u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_12ca84:
    // 0x12ca84: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12ca84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12ca88:
    // 0x12ca88: 0x240dfff8  addiu       $t5, $zero, -0x8
    ctx->pc = 0x12ca88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_12ca8c:
    // 0x12ca8c: 0xfc222f58  sd          $v0, 0x2F58($at)
    ctx->pc = 0x12ca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 12120), GPR_U64(ctx, 2));
label_12ca90:
    // 0x12ca90: 0x640e0006  daddiu      $t6, $zero, 0x6
    ctx->pc = 0x12ca90u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_12ca94:
    // 0x12ca94: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12ca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12ca98:
    // 0x12ca98: 0x2406fff1  addiu       $a2, $zero, -0xF
    ctx->pc = 0x12ca98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_12ca9c:
    // 0x12ca9c: 0x90272f20  lbu         $a3, 0x2F20($at)
    ctx->pc = 0x12ca9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12064)));
label_12caa0:
    // 0x12caa0: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x12caa0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_12caa4:
    // 0x12caa4: 0x30150001  andi        $s5, $zero, 0x1
    ctx->pc = 0x12caa4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_12caa8:
    // 0x12caa8: 0x2418fffc  addiu       $t8, $zero, -0x4
    ctx->pc = 0x12caa8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_12caac:
    // 0x12caac: 0x30190003  andi        $t9, $zero, 0x3
    ctx->pc = 0x12caacu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_12cab0:
    // 0x12cab0: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x12cab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_12cab4:
    // 0x12cab4: 0x640a0010  daddiu      $t2, $zero, 0x10
    ctx->pc = 0x12cab4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_12cab8:
    // 0x12cab8: 0x64080140  daddiu      $t0, $zero, 0x140
    ctx->pc = 0x12cab8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
label_12cabc:
    // 0x12cabc: 0x2413fff9  addiu       $s3, $zero, -0x7
    ctx->pc = 0x12cabcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_12cac0:
    // 0x12cac0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cac4:
    // 0x12cac4: 0xeb7824  and         $t7, $a3, $t3
    ctx->pc = 0x12cac4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
label_12cac8:
    // 0x12cac8: 0x90232f21  lbu         $v1, 0x2F21($at)
    ctx->pc = 0x12cac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12065)));
label_12cacc:
    // 0x12cacc: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x12caccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
label_12cad0:
    // 0x12cad0: 0x2407f00f  addiu       $a3, $zero, -0xFF1
    ctx->pc = 0x12cad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
label_12cad4:
    // 0x12cad4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cad8:
    // 0x12cad8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12cad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_12cadc:
    // 0x12cadc: 0x90222f30  lbu         $v0, 0x2F30($at)
    ctx->pc = 0x12cadcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12080)));
label_12cae0:
    // 0x12cae0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x12cae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_12cae4:
    // 0x12cae4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cae8:
    // 0x12cae8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x12cae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_12caec:
    // 0x12caec: 0xa02f2f20  sb          $t7, 0x2F20($at)
    ctx->pc = 0x12caecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12064), (uint8_t)GPR_U32(ctx, 15));
label_12caf0:
    // 0x12caf0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x12caf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_12caf4:
    // 0x12caf4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12caf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12caf8:
    // 0x12caf8: 0xa0232f21  sb          $v1, 0x2F21($at)
    ctx->pc = 0x12caf8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12065), (uint8_t)GPR_U32(ctx, 3));
label_12cafc:
    // 0x12cafc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cb00:
    // 0x12cb00: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x12cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_12cb04:
    // 0x12cb04: 0x902f2f20  lbu         $t7, 0x2F20($at)
    ctx->pc = 0x12cb04u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12064)));
label_12cb08:
    // 0x12cb08: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cb0c:
    // 0x12cb0c: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x12cb0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
label_12cb10:
    // 0x12cb10: 0xa0222f30  sb          $v0, 0x2F30($at)
    ctx->pc = 0x12cb10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12080), (uint8_t)GPR_U32(ctx, 2));
label_12cb14:
    // 0x12cb14: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x12cb14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
label_12cb18:
    // 0x12cb18: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cb1c:
    // 0x12cb1c: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x12cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_12cb20:
    // 0x12cb20: 0x90362f30  lbu         $s6, 0x2F30($at)
    ctx->pc = 0x12cb20u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12080)));
label_12cb24:
    // 0x12cb24: 0x240ffff3  addiu       $t7, $zero, -0xD
    ctx->pc = 0x12cb24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_12cb28:
    // 0x12cb28: 0x197100  sll         $t6, $t9, 4
    ctx->pc = 0x12cb28u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
label_12cb2c:
    // 0x12cb2c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cb30:
    // 0x12cb30: 0x2c6b024  and         $s6, $s6, $a2
    ctx->pc = 0x12cb30u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 6));
label_12cb34:
    // 0x12cb34: 0x90342f32  lbu         $s4, 0x2F32($at)
    ctx->pc = 0x12cb34u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12082)));
label_12cb38:
    // 0x12cb38: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cb3c:
    // 0x12cb3c: 0x284a024  and         $s4, $s4, $a0
    ctx->pc = 0x12cb3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
label_12cb40:
    // 0x12cb40: 0x90322f40  lbu         $s2, 0x2F40($at)
    ctx->pc = 0x12cb40u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12096)));
label_12cb44:
    // 0x12cb44: 0x2c92025  or          $a0, $s6, $t1
    ctx->pc = 0x12cb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | GPR_U64(ctx, 9));
label_12cb48:
    // 0x12cb48: 0x295a825  or          $s5, $s4, $s5
    ctx->pc = 0x12cb48u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) | GPR_U64(ctx, 21));
label_12cb4c:
    // 0x12cb4c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cb50:
    // 0x12cb50: 0x2589024  and         $s2, $s2, $t8
    ctx->pc = 0x12cb50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 24));
label_12cb54:
    // 0x12cb54: 0xa02d2f20  sb          $t5, 0x2F20($at)
    ctx->pc = 0x12cb54u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12064), (uint8_t)GPR_U32(ctx, 13));
label_12cb58:
    // 0x12cb58: 0x259a025  or          $s4, $s2, $t9
    ctx->pc = 0x12cb58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) | GPR_U64(ctx, 25));
label_12cb5c:
    // 0x12cb5c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cb60:
    // 0x12cb60: 0x2412007f  addiu       $s2, $zero, 0x7F
    ctx->pc = 0x12cb60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_12cb64:
    // 0x12cb64: 0x90262f20  lbu         $a2, 0x2F20($at)
    ctx->pc = 0x12cb64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12064)));
label_12cb68:
    // 0x12cb68: 0x240dff3f  addiu       $t5, $zero, -0xC1
    ctx->pc = 0x12cb68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_12cb6c:
    // 0x12cb6c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cb70:
    // 0x12cb70: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x12cb70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_12cb74:
    // 0x12cb74: 0xa0242f30  sb          $a0, 0x2F30($at)
    ctx->pc = 0x12cb74u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12080), (uint8_t)GPR_U32(ctx, 4));
label_12cb78:
    // 0x12cb78: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x12cb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
label_12cb7c:
    // 0x12cb7c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cb80:
    // 0x12cb80: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_12cb84:
    // 0x12cb84: 0xa0352f32  sb          $s5, 0x2F32($at)
    ctx->pc = 0x12cb84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12082), (uint8_t)GPR_U32(ctx, 21));
label_12cb88:
    // 0x12cb88: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x12cb88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
label_12cb8c:
    // 0x12cb8c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cb90:
    // 0x12cb90: 0x24842f10  addiu       $a0, $a0, 0x2F10
    ctx->pc = 0x12cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12048));
label_12cb94:
    // 0x12cb94: 0xa0342f40  sb          $s4, 0x2F40($at)
    ctx->pc = 0x12cb94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12096), (uint8_t)GPR_U32(ctx, 20));
label_12cb98:
    // 0x12cb98: 0x24c62f00  addiu       $a2, $a2, 0x2F00
    ctx->pc = 0x12cb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12032));
label_12cb9c:
    // 0x12cb9c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cba0:
    // 0x12cba0: 0xa0322f50  sb          $s2, 0x2F50($at)
    ctx->pc = 0x12cba0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12112), (uint8_t)GPR_U32(ctx, 18));
label_12cba4:
    // 0x12cba4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cba8:
    // 0x12cba8: 0xa0322f51  sb          $s2, 0x2F51($at)
    ctx->pc = 0x12cba8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12113), (uint8_t)GPR_U32(ctx, 18));
label_12cbac:
    // 0x12cbac: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cbb0:
    // 0x12cbb0: 0xa0252f20  sb          $a1, 0x2F20($at)
    ctx->pc = 0x12cbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12064), (uint8_t)GPR_U32(ctx, 5));
label_12cbb4:
    // 0x12cbb4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cbb8:
    // 0x12cbb8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
label_12cbbc:
    // 0x12cbbc: 0xa0322f52  sb          $s2, 0x2F52($at)
    ctx->pc = 0x12cbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12114), (uint8_t)GPR_U32(ctx, 18));
label_12cbc0:
    // 0x12cbc0: 0x24a5cde0  addiu       $a1, $a1, -0x3220
    ctx->pc = 0x12cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954464));
label_12cbc4:
    // 0x12cbc4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cbc8:
    // 0x12cbc8: 0xa0322f53  sb          $s2, 0x2F53($at)
    ctx->pc = 0x12cbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12115), (uint8_t)GPR_U32(ctx, 18));
label_12cbcc:
    // 0x12cbcc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cbd0:
    // 0x12cbd0: 0x94352f30  lhu         $s5, 0x2F30($at)
    ctx->pc = 0x12cbd0u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 12080)));
label_12cbd4:
    // 0x12cbd4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cbd8:
    // 0x12cbd8: 0x2a73824  and         $a3, $s5, $a3
    ctx->pc = 0x12cbd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & GPR_U64(ctx, 7));
label_12cbdc:
    // 0x12cbdc: 0x90342f32  lbu         $s4, 0x2F32($at)
    ctx->pc = 0x12cbdcu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12082)));
label_12cbe0:
    // 0x12cbe0: 0xe8a825  or          $s5, $a3, $t0
    ctx->pc = 0x12cbe0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_12cbe4:
    // 0x12cbe4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cbe8:
    // 0x12cbe8: 0x2934024  and         $t0, $s4, $s3
    ctx->pc = 0x12cbe8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) & GPR_U64(ctx, 19));
label_12cbec:
    // 0x12cbec: 0x90322f40  lbu         $s2, 0x2F40($at)
    ctx->pc = 0x12cbecu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12096)));
label_12cbf0:
    // 0x12cbf0: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x12cbf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_12cbf4:
    // 0x12cbf4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cbf8:
    // 0x12cbf8: 0x24f3824  and         $a3, $s2, $t7
    ctx->pc = 0x12cbf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & GPR_U64(ctx, 15));
label_12cbfc:
    // 0x12cbfc: 0xa4352f30  sh          $s5, 0x2F30($at)
    ctx->pc = 0x12cbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12080), (uint16_t)GPR_U32(ctx, 21));
label_12cc00:
    // 0x12cc00: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x12cc00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
label_12cc04:
    // 0x12cc04: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cc08:
    // 0x12cc08: 0xa0282f32  sb          $t0, 0x2F32($at)
    ctx->pc = 0x12cc08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12082), (uint8_t)GPR_U32(ctx, 8));
label_12cc0c:
    // 0x12cc0c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cc10:
    // 0x12cc10: 0xa0272f40  sb          $a3, 0x2F40($at)
    ctx->pc = 0x12cc10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12096), (uint8_t)GPR_U32(ctx, 7));
label_12cc14:
    // 0x12cc14: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cc18:
    // 0x12cc18: 0x90282f31  lbu         $t0, 0x2F31($at)
    ctx->pc = 0x12cc18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12081)));
label_12cc1c:
    // 0x12cc1c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cc20:
    // 0x12cc20: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x12cc20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_12cc24:
    // 0x12cc24: 0x90272f40  lbu         $a3, 0x2F40($at)
    ctx->pc = 0x12cc24u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12096)));
label_12cc28:
    // 0x12cc28: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x12cc28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
label_12cc2c:
    // 0x12cc2c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cc30:
    // 0x12cc30: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x12cc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_12cc34:
    // 0x12cc34: 0xa0282f31  sb          $t0, 0x2F31($at)
    ctx->pc = 0x12cc34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12081), (uint8_t)GPR_U32(ctx, 8));
label_12cc38:
    // 0x12cc38: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x12cc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
label_12cc3c:
    // 0x12cc3c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cc40:
    // 0x12cc40: 0xa0232f40  sb          $v1, 0x2F40($at)
    ctx->pc = 0x12cc40u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12096), (uint8_t)GPR_U32(ctx, 3));
label_12cc44:
    // 0x12cc44: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cc48:
    // 0x12cc48: 0x90272f31  lbu         $a3, 0x2F31($at)
    ctx->pc = 0x12cc48u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12081)));
label_12cc4c:
    // 0x12cc4c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cc50:
    // 0x12cc50: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x12cc50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
label_12cc54:
    // 0x12cc54: 0x90232f40  lbu         $v1, 0x2F40($at)
    ctx->pc = 0x12cc54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12096)));
label_12cc58:
    // 0x12cc58: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x12cc58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_12cc5c:
    // 0x12cc5c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cc60:
    // 0x12cc60: 0x6d1024  and         $v0, $v1, $t5
    ctx->pc = 0x12cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
label_12cc64:
    // 0x12cc64: 0xa0272f31  sb          $a3, 0x2F31($at)
    ctx->pc = 0x12cc64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 12081), (uint8_t)GPR_U32(ctx, 7));
label_12cc68:
    // 0x12cc68: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x12cc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
label_12cc6c:
    // 0x12cc6c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12cc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_12cc70:
    // 0x12cc70: 0xc07a540  jal         func_1E9500
label_12cc74:
    if (ctx->pc == 0x12CC74u) {
        ctx->pc = 0x12CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC70u;
        // 0x12cc74: 0xa0222f40  sb          $v0, 0x2F40($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 12096), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CC78u;
        goto label_12cc78;
    }
    ctx->pc = 0x12CC70u;
    SET_GPR_U32(ctx, 31, 0x12CC78u);
    ctx->pc = 0x12CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC70u;
    // 0x12cc74: 0xa0222f40  sb          $v0, 0x2F40($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 12096), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x12CC70u, 0x12CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC78u;
label_12cc78:
    // 0x12cc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cc7c:
    // 0x12cc7c: 0xa3828498  sb          $v0, -0x7B68($gp)
    ctx->pc = 0x12cc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935704), (uint8_t)GPR_U32(ctx, 2));
label_12cc80:
    // 0x12cc80: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x12cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_12cc84:
    // 0x12cc84: 0xc0485c8  jal         func_121720
label_12cc88:
    if (ctx->pc == 0x12CC88u) {
        ctx->pc = 0x12CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC84u;
        // 0x12cc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CC8Cu;
        goto label_12cc8c;
    }
    ctx->pc = 0x12CC84u;
    SET_GPR_U32(ctx, 31, 0x12CC8Cu);
    ctx->pc = 0x12CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC84u;
    // 0x12cc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121720u, 0x12CC84u, 0x12CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC8Cu;
label_12cc8c:
    // 0x12cc8c: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_12cc90:
    // 0x12cc90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12cc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12cc94:
    // 0x12cc94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12cc94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12cc98:
    // 0x12cc98: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x12cc98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_12cc9c:
    // 0x12cc9c: 0x320f809  jalr        $t9
label_12cca0:
    if (ctx->pc == 0x12CCA0u) {
        ctx->pc = 0x12CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC9Cu;
        // 0x12cca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CCA4u;
        goto label_12cca4;
    }
    ctx->pc = 0x12CC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12CCA4u);
        ctx->pc = 0x12CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC9Cu;
        // 0x12cca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CC9Cu, 0x12CCA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12CCA4u;
label_12cca4:
    // 0x12cca4: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x12cca4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12cca8:
    // 0x12cca8: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x12cca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12ccac:
    // 0x12ccac: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
label_12ccb0:
    // 0x12ccb0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_12ccb4:
    // 0x12ccb4: 0x34430005  ori         $v1, $v0, 0x5
    ctx->pc = 0x12ccb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
label_12ccb8:
    // 0x12ccb8: 0x24e72f10  addiu       $a3, $a3, 0x2F10
    ctx->pc = 0x12ccb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12048));
label_12ccbc:
    // 0x12ccbc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_12ccc0:
    // 0x12ccc0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x12ccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_12ccc4:
    // 0x12ccc4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x12ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_12ccc8:
    // 0x12ccc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ccc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12cccc:
    // 0x12cccc: 0xa1280003  sb          $t0, 0x3($t1)
    ctx->pc = 0x12ccccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 8));
label_12ccd0:
    // 0x12ccd0: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x12ccd0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
label_12ccd4:
    // 0x12ccd4: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x12ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_12ccd8:
    // 0x12ccd8: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x12ccd8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
label_12ccdc:
    // 0x12ccdc: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x12ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
label_12cce0:
    // 0x12cce0: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x12cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_12cce4:
    // 0x12cce4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12cce8:
    // 0x12cce8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_12ccec:
    // 0x12ccec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_12ccf0:
    // 0x12ccf0: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x12ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_12ccf4:
    // 0x12ccf4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x12ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12ccf8:
    // 0x12ccf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12ccfc:
    // 0x12ccfc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x12ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_12cd00:
    // 0x12cd00: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x12cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_12cd04:
    // 0x12cd04: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12cd04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_12cd08:
    // 0x12cd08: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x12cd08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_12cd0c:
    // 0x12cd0c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x12cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_12cd10:
    // 0x12cd10: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x12cd10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_12cd14:
    // 0x12cd14: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x12cd14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_12cd18:
    // 0x12cd18: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x12cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_12cd1c:
    // 0x12cd1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12cd20:
    // 0x12cd20: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_12cd24:
    // 0x12cd24: 0xc04b67c  jal         func_12D9F0
label_12cd28:
    if (ctx->pc == 0x12CD28u) {
        ctx->pc = 0x12CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD24u;
        // 0x12cd28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CD2Cu;
        goto label_12cd2c;
    }
    ctx->pc = 0x12CD24u;
    SET_GPR_U32(ctx, 31, 0x12CD2Cu);
    ctx->pc = 0x12CD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD24u;
    // 0x12cd28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F0u, 0x12CD24u, 0x12CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD2Cu;
label_12cd2c:
    // 0x12cd2c: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x12cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_12cd30:
    // 0x12cd30: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x12cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_12cd34:
    // 0x12cd34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12cd34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12cd38:
    // 0x12cd38: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x12cd38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_12cd3c:
    // 0x12cd3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12cd40:
    // 0x12cd40: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x12cd40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_12cd44:
    // 0x12cd44: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_12cd48:
    // 0x12cd48: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_12cd4c:
    // 0x12cd4c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_12cd50:
    // 0x12cd50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_12cd54:
    // 0x12cd54: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x12cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_12cd58:
    // 0x12cd58: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x12cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_12cd5c:
    // 0x12cd5c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x12cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_12cd60:
    // 0x12cd60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12cd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12cd64:
    // 0x12cd64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12cd68:
    // 0x12cd68: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x12cd68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_12cd6c:
    // 0x12cd6c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x12cd6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_12cd70:
    // 0x12cd70: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x12cd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_12cd74:
    // 0x12cd74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12cd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12cd78:
    // 0x12cd78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12cd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12cd7c:
    // 0x12cd7c: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x12cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_12cd80:
    // 0x12cd80: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x12cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_12cd84:
    // 0x12cd84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_12cd88:
    // 0x12cd88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_12cd8c:
    // 0x12cd8c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x12cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_12cd90:
    // 0x12cd90: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x12cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_12cd94:
    // 0x12cd94: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x12cd94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_12cd98:
    // 0x12cd98: 0xc04b60c  jal         func_12D830
label_12cd9c:
    if (ctx->pc == 0x12CD9Cu) {
        ctx->pc = 0x12CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD98u;
        // 0x12cd9c: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CDA0u;
        goto label_12cda0;
    }
    ctx->pc = 0x12CD98u;
    SET_GPR_U32(ctx, 31, 0x12CDA0u);
    ctx->pc = 0x12CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD98u;
    // 0x12cd9c: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D830u, 0x12CD98u, 0x12CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDA0u;
label_12cda0:
    // 0x12cda0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x12cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_12cda4:
    // 0x12cda4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12cda8:
    // 0x12cda8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x12cda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_12cdac:
    // 0x12cdac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12cdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12cdb0:
    // 0x12cdb0: 0xc04b5fc  jal         func_12D7F0
label_12cdb4:
    if (ctx->pc == 0x12CDB4u) {
        ctx->pc = 0x12CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDB0u;
        // 0x12cdb4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CDB8u;
        goto label_12cdb8;
    }
    ctx->pc = 0x12CDB0u;
    SET_GPR_U32(ctx, 31, 0x12CDB8u);
    ctx->pc = 0x12CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CDB0u;
    // 0x12cdb4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7F0u, 0x12CDB0u, 0x12CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDB8u;
label_12cdb8:
    // 0x12cdb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12cdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_12cdbc:
    // 0x12cdbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12cdbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12cdc0:
    // 0x12cdc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12cdc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12cdc4:
    // 0x12cdc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12cdc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12cdc8:
    // 0x12cdc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12cdc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12cdcc:
    // 0x12cdcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12cdccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12cdd0:
    // 0x12cdd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12cdd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12cdd4:
    // 0x12cdd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12cdd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12cdd8:
    // 0x12cdd8: 0x3e00008  jr          $ra
label_12cddc:
    if (ctx->pc == 0x12CDDCu) {
        ctx->pc = 0x12CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDD8u;
        // 0x12cddc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12CDE0u;
        goto label_fallthrough_0x12cdd8;
    }
    ctx->pc = 0x12CDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDD8u;
        // 0x12cddc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12cdd8:
    ctx->pc = 0x12CDE0u;
}
