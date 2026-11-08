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

// Function: FUN_0014cc80
// Address: 0x14cc80 - 0x14ce58
void FUN_0014cc80_0x14cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014cc80_0x14cc80");
#endif

    switch (ctx->pc) {
        case 0x14cc80u: goto label_14cc80;
        case 0x14cc84u: goto label_14cc84;
        case 0x14cc88u: goto label_14cc88;
        case 0x14cc8cu: goto label_14cc8c;
        case 0x14cc90u: goto label_14cc90;
        case 0x14cc94u: goto label_14cc94;
        case 0x14cc98u: goto label_14cc98;
        case 0x14cc9cu: goto label_14cc9c;
        case 0x14cca0u: goto label_14cca0;
        case 0x14cca4u: goto label_14cca4;
        case 0x14cca8u: goto label_14cca8;
        case 0x14ccacu: goto label_14ccac;
        case 0x14ccb0u: goto label_14ccb0;
        case 0x14ccb4u: goto label_14ccb4;
        case 0x14ccb8u: goto label_14ccb8;
        case 0x14ccbcu: goto label_14ccbc;
        case 0x14ccc0u: goto label_14ccc0;
        case 0x14ccc4u: goto label_14ccc4;
        case 0x14ccc8u: goto label_14ccc8;
        case 0x14ccccu: goto label_14cccc;
        case 0x14ccd0u: goto label_14ccd0;
        case 0x14ccd4u: goto label_14ccd4;
        case 0x14ccd8u: goto label_14ccd8;
        case 0x14ccdcu: goto label_14ccdc;
        case 0x14cce0u: goto label_14cce0;
        case 0x14cce4u: goto label_14cce4;
        case 0x14cce8u: goto label_14cce8;
        case 0x14ccecu: goto label_14ccec;
        case 0x14ccf0u: goto label_14ccf0;
        case 0x14ccf4u: goto label_14ccf4;
        case 0x14ccf8u: goto label_14ccf8;
        case 0x14ccfcu: goto label_14ccfc;
        case 0x14cd00u: goto label_14cd00;
        case 0x14cd04u: goto label_14cd04;
        case 0x14cd08u: goto label_14cd08;
        case 0x14cd0cu: goto label_14cd0c;
        case 0x14cd10u: goto label_14cd10;
        case 0x14cd14u: goto label_14cd14;
        case 0x14cd18u: goto label_14cd18;
        case 0x14cd1cu: goto label_14cd1c;
        case 0x14cd20u: goto label_14cd20;
        case 0x14cd24u: goto label_14cd24;
        case 0x14cd28u: goto label_14cd28;
        case 0x14cd2cu: goto label_14cd2c;
        case 0x14cd30u: goto label_14cd30;
        case 0x14cd34u: goto label_14cd34;
        case 0x14cd38u: goto label_14cd38;
        case 0x14cd3cu: goto label_14cd3c;
        case 0x14cd40u: goto label_14cd40;
        case 0x14cd44u: goto label_14cd44;
        case 0x14cd48u: goto label_14cd48;
        case 0x14cd4cu: goto label_14cd4c;
        case 0x14cd50u: goto label_14cd50;
        case 0x14cd54u: goto label_14cd54;
        case 0x14cd58u: goto label_14cd58;
        case 0x14cd5cu: goto label_14cd5c;
        case 0x14cd60u: goto label_14cd60;
        case 0x14cd64u: goto label_14cd64;
        case 0x14cd68u: goto label_14cd68;
        case 0x14cd6cu: goto label_14cd6c;
        case 0x14cd70u: goto label_14cd70;
        case 0x14cd74u: goto label_14cd74;
        case 0x14cd78u: goto label_14cd78;
        case 0x14cd7cu: goto label_14cd7c;
        case 0x14cd80u: goto label_14cd80;
        case 0x14cd84u: goto label_14cd84;
        case 0x14cd88u: goto label_14cd88;
        case 0x14cd8cu: goto label_14cd8c;
        case 0x14cd90u: goto label_14cd90;
        case 0x14cd94u: goto label_14cd94;
        case 0x14cd98u: goto label_14cd98;
        case 0x14cd9cu: goto label_14cd9c;
        case 0x14cda0u: goto label_14cda0;
        case 0x14cda4u: goto label_14cda4;
        case 0x14cda8u: goto label_14cda8;
        case 0x14cdacu: goto label_14cdac;
        case 0x14cdb0u: goto label_14cdb0;
        case 0x14cdb4u: goto label_14cdb4;
        case 0x14cdb8u: goto label_14cdb8;
        case 0x14cdbcu: goto label_14cdbc;
        case 0x14cdc0u: goto label_14cdc0;
        case 0x14cdc4u: goto label_14cdc4;
        case 0x14cdc8u: goto label_14cdc8;
        case 0x14cdccu: goto label_14cdcc;
        case 0x14cdd0u: goto label_14cdd0;
        case 0x14cdd4u: goto label_14cdd4;
        case 0x14cdd8u: goto label_14cdd8;
        case 0x14cddcu: goto label_14cddc;
        case 0x14cde0u: goto label_14cde0;
        case 0x14cde4u: goto label_14cde4;
        case 0x14cde8u: goto label_14cde8;
        case 0x14cdecu: goto label_14cdec;
        case 0x14cdf0u: goto label_14cdf0;
        case 0x14cdf4u: goto label_14cdf4;
        case 0x14cdf8u: goto label_14cdf8;
        case 0x14cdfcu: goto label_14cdfc;
        case 0x14ce00u: goto label_14ce00;
        case 0x14ce04u: goto label_14ce04;
        case 0x14ce08u: goto label_14ce08;
        case 0x14ce0cu: goto label_14ce0c;
        case 0x14ce10u: goto label_14ce10;
        case 0x14ce14u: goto label_14ce14;
        case 0x14ce18u: goto label_14ce18;
        case 0x14ce1cu: goto label_14ce1c;
        case 0x14ce20u: goto label_14ce20;
        case 0x14ce24u: goto label_14ce24;
        case 0x14ce28u: goto label_14ce28;
        case 0x14ce2cu: goto label_14ce2c;
        case 0x14ce30u: goto label_14ce30;
        case 0x14ce34u: goto label_14ce34;
        case 0x14ce38u: goto label_14ce38;
        case 0x14ce3cu: goto label_14ce3c;
        case 0x14ce40u: goto label_14ce40;
        case 0x14ce44u: goto label_14ce44;
        case 0x14ce48u: goto label_14ce48;
        case 0x14ce4cu: goto label_14ce4c;
        case 0x14ce50u: goto label_14ce50;
        case 0x14ce54u: goto label_14ce54;
        default: break;
    }

    ctx->pc = 0x14cc80u;

label_14cc80:
    // 0x14cc80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14cc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_14cc84:
    // 0x14cc84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14cc88:
    // 0x14cc88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14cc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_14cc8c:
    // 0x14cc8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14cc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_14cc90:
    // 0x14cc90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14cc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14cc94:
    // 0x14cc94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14cc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14cc98:
    // 0x14cc98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14cc9c:
    // 0x14cc9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14cc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14cca0:
    // 0x14cca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14cca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14cca4:
    // 0x14cca4: 0x10c30012  beq         $a2, $v1, . + 4 + (0x12 << 2)
label_14cca8:
    if (ctx->pc == 0x14CCA8u) {
        ctx->pc = 0x14CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCA4u;
        // 0x14cca8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CCACu;
        goto label_14ccac;
    }
    ctx->pc = 0x14CCA4u;
    {
        const bool branch_taken_0x14cca4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x14CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCA4u;
        // 0x14cca8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cca4) {
            ctx->pc = 0x14CCF0u;
            goto label_14ccf0;
        }
    }
    ctx->pc = 0x14CCACu;
label_14ccac:
    // 0x14ccac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ccb0:
    // 0x14ccb0: 0x10c3000a  beq         $a2, $v1, . + 4 + (0xA << 2)
label_14ccb4:
    if (ctx->pc == 0x14CCB4u) {
        ctx->pc = 0x14CCB8u;
        goto label_14ccb8;
    }
    ctx->pc = 0x14CCB0u;
    {
        const bool branch_taken_0x14ccb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x14ccb0) {
            ctx->pc = 0x14CCDCu;
            goto label_14ccdc;
        }
    }
    ctx->pc = 0x14CCB8u;
label_14ccb8:
    // 0x14ccb8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_14ccbc:
    if (ctx->pc == 0x14CCBCu) {
        ctx->pc = 0x14CCC0u;
        goto label_14ccc0;
    }
    ctx->pc = 0x14CCB8u;
    {
        const bool branch_taken_0x14ccb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccb8) {
            ctx->pc = 0x14CCC8u;
            goto label_14ccc8;
        }
    }
    ctx->pc = 0x14CCC0u;
label_14ccc0:
    // 0x14ccc0: 0x1000005c  b           . + 4 + (0x5C << 2)
label_14ccc4:
    if (ctx->pc == 0x14CCC4u) {
        ctx->pc = 0x14CCC8u;
        goto label_14ccc8;
    }
    ctx->pc = 0x14CCC0u;
    {
        const bool branch_taken_0x14ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccc0) {
            ctx->pc = 0x14CE34u;
            goto label_14ce34;
        }
    }
    ctx->pc = 0x14CCC8u;
label_14ccc8:
    // 0x14ccc8: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x14ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14cccc:
    // 0x14cccc: 0xc0522d4  jal         func_148B50
label_14ccd0:
    if (ctx->pc == 0x14CCD0u) {
        ctx->pc = 0x14CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCCCu;
        // 0x14ccd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CCD4u;
        goto label_14ccd4;
    }
    ctx->pc = 0x14CCCCu;
    SET_GPR_U32(ctx, 31, 0x14CCD4u);
    ctx->pc = 0x14CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCCCu;
    // 0x14ccd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148B50u, 0x14CCCCu, 0x14CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCD4u;
label_14ccd4:
    // 0x14ccd4: 0x10000057  b           . + 4 + (0x57 << 2)
label_14ccd8:
    if (ctx->pc == 0x14CCD8u) {
        ctx->pc = 0x14CCDCu;
        goto label_14ccdc;
    }
    ctx->pc = 0x14CCD4u;
    {
        const bool branch_taken_0x14ccd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccd4) {
            ctx->pc = 0x14CE34u;
            goto label_14ce34;
        }
    }
    ctx->pc = 0x14CCDCu;
label_14ccdc:
    // 0x14ccdc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x14ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14cce0:
    // 0x14cce0: 0xc0522d4  jal         func_148B50
label_14cce4:
    if (ctx->pc == 0x14CCE4u) {
        ctx->pc = 0x14CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCE0u;
        // 0x14cce4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CCE8u;
        goto label_14cce8;
    }
    ctx->pc = 0x14CCE0u;
    SET_GPR_U32(ctx, 31, 0x14CCE8u);
    ctx->pc = 0x14CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCE0u;
    // 0x14cce4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148B50u, 0x14CCE0u, 0x14CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCE8u;
label_14cce8:
    // 0x14cce8: 0x10000052  b           . + 4 + (0x52 << 2)
label_14ccec:
    if (ctx->pc == 0x14CCECu) {
        ctx->pc = 0x14CCF0u;
        goto label_14ccf0;
    }
    ctx->pc = 0x14CCE8u;
    {
        const bool branch_taken_0x14cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cce8) {
            ctx->pc = 0x14CE34u;
            goto label_14ce34;
        }
    }
    ctx->pc = 0x14CCF0u;
label_14ccf0:
    // 0x14ccf0: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_14ccf4:
    // 0x14ccf4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x14ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_14ccf8:
    // 0x14ccf8: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14ccf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14ccfc:
    // 0x14ccfc: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_14cd00:
    if (ctx->pc == 0x14CD00u) {
        ctx->pc = 0x14CD04u;
        goto label_14cd04;
    }
    ctx->pc = 0x14CCFCu;
    {
        const bool branch_taken_0x14ccfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccfc) {
            ctx->pc = 0x14CD7Cu;
            goto label_14cd7c;
        }
    }
    ctx->pc = 0x14CD04u;
label_14cd04:
    // 0x14cd04: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_14cd08:
    // 0x14cd08: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_14cd0c:
    // 0x14cd0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14cd10:
    // 0x14cd10: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14cd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14cd14:
    // 0x14cd14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14cd18:
    // 0x14cd18: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x14cd18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14cd1c:
    // 0x14cd1c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14cd20:
    // 0x14cd20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14cd24:
    // 0x14cd24: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x14cd24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_14cd28:
    // 0x14cd28: 0x12920014  beq         $s4, $s2, . + 4 + (0x14 << 2)
label_14cd2c:
    if (ctx->pc == 0x14CD2Cu) {
        ctx->pc = 0x14CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD28u;
        // 0x14cd2c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD30u;
        goto label_14cd30;
    }
    ctx->pc = 0x14CD28u;
    {
        const bool branch_taken_0x14cd28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x14CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD28u;
        // 0x14cd2c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd28) {
            ctx->pc = 0x14CD7Cu;
            goto label_14cd7c;
        }
    }
    ctx->pc = 0x14CD30u;
label_14cd30:
    // 0x14cd30: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x14cd30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_14cd34:
    // 0x14cd34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14cd38:
    // 0x14cd38: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x14cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_14cd3c:
    // 0x14cd3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14cd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14cd40:
    // 0x14cd40: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x14cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_14cd44:
    // 0x14cd44: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_14cd48:
    // 0x14cd48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14cd4c:
    // 0x14cd4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14cd50:
    // 0x14cd50: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_14cd54:
    // 0x14cd54: 0xc07d376  jal         func_1F4DD8
label_14cd58:
    if (ctx->pc == 0x14CD58u) {
        ctx->pc = 0x14CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD54u;
        // 0x14cd58: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD5Cu;
        goto label_14cd5c;
    }
    ctx->pc = 0x14CD54u;
    SET_GPR_U32(ctx, 31, 0x14CD5Cu);
    ctx->pc = 0x14CD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD54u;
    // 0x14cd58: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x14CD54u, 0x14CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD5Cu;
label_14cd5c:
    // 0x14cd5c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14cd60:
    // 0x14cd60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14cd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cd64:
    // 0x14cd64: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x14cd64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_14cd68:
    // 0x14cd68: 0x320f809  jalr        $t9
label_14cd6c:
    if (ctx->pc == 0x14CD6Cu) {
        ctx->pc = 0x14CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD68u;
        // 0x14cd6c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD70u;
        goto label_14cd70;
    }
    ctx->pc = 0x14CD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CD70u);
        ctx->pc = 0x14CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD68u;
        // 0x14cd6c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CD68u, 0x14CD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CD70u;
label_14cd70:
    // 0x14cd70: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x14cd70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_14cd74:
    // 0x14cd74: 0x1692ffee  bne         $s4, $s2, . + 4 + (-0x12 << 2)
label_14cd78:
    if (ctx->pc == 0x14CD78u) {
        ctx->pc = 0x14CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD74u;
        // 0x14cd78: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CD7Cu;
        goto label_14cd7c;
    }
    ctx->pc = 0x14CD74u;
    {
        const bool branch_taken_0x14cd74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 18));
        ctx->pc = 0x14CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD74u;
        // 0x14cd78: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd74) {
            ctx->pc = 0x14CD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cd30;
        }
    }
    ctx->pc = 0x14CD7Cu;
label_14cd7c:
    // 0x14cd7c: 0x0  nop
    ctx->pc = 0x14cd7cu;
    // NOP
label_14cd80:
    // 0x14cd80: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_14cd84:
    // 0x14cd84: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x14cd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_14cd88:
    // 0x14cd88: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14cd88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14cd8c:
    // 0x14cd8c: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_14cd90:
    if (ctx->pc == 0x14CD90u) {
        ctx->pc = 0x14CD94u;
        goto label_14cd94;
    }
    ctx->pc = 0x14CD8Cu;
    {
        const bool branch_taken_0x14cd8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd8c) {
            ctx->pc = 0x14CE34u;
            goto label_14ce34;
        }
    }
    ctx->pc = 0x14CD94u;
label_14cd94:
    // 0x14cd94: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_14cd98:
    // 0x14cd98: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_14cd9c:
    // 0x14cd9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14cda0:
    // 0x14cda0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14cda4:
    // 0x14cda4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14cda8:
    // 0x14cda8: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x14cda8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14cdac:
    // 0x14cdac: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14cdb0:
    // 0x14cdb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14cdb4:
    // 0x14cdb4: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x14cdb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_14cdb8:
    // 0x14cdb8: 0x1292001e  beq         $s4, $s2, . + 4 + (0x1E << 2)
label_14cdbc:
    if (ctx->pc == 0x14CDBCu) {
        ctx->pc = 0x14CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDB8u;
        // 0x14cdbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CDC0u;
        goto label_14cdc0;
    }
    ctx->pc = 0x14CDB8u;
    {
        const bool branch_taken_0x14cdb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x14CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDB8u;
        // 0x14cdbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cdb8) {
            ctx->pc = 0x14CE34u;
            goto label_14ce34;
        }
    }
    ctx->pc = 0x14CDC0u;
label_14cdc0:
    // 0x14cdc0: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x14cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_14cdc4:
    // 0x14cdc4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14cdc8:
    // 0x14cdc8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x14cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_14cdcc:
    // 0x14cdcc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_14cdd0:
    // 0x14cdd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14cdd4:
    // 0x14cdd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14cdd8:
    // 0x14cdd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14cddc:
    // 0x14cddc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_14cde0:
    // 0x14cde0: 0xc07d38e  jal         func_1F4E38
label_14cde4:
    if (ctx->pc == 0x14CDE4u) {
        ctx->pc = 0x14CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDE0u;
        // 0x14cde4: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CDE8u;
        goto label_14cde8;
    }
    ctx->pc = 0x14CDE0u;
    SET_GPR_U32(ctx, 31, 0x14CDE8u);
    ctx->pc = 0x14CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDE0u;
    // 0x14cde4: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14CDE0u, 0x14CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDE8u;
label_14cde8:
    // 0x14cde8: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x14cde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_14cdec:
    // 0x14cdec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_14cdf0:
    // 0x14cdf0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x14cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_14cdf4:
    // 0x14cdf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14cdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14cdf8:
    // 0x14cdf8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x14cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_14cdfc:
    // 0x14cdfc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_14ce00:
    // 0x14ce00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14ce04:
    // 0x14ce04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ce08:
    // 0x14ce08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_14ce0c:
    // 0x14ce0c: 0xc07d376  jal         func_1F4DD8
label_14ce10:
    if (ctx->pc == 0x14CE10u) {
        ctx->pc = 0x14CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE0Cu;
        // 0x14ce10: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE14u;
        goto label_14ce14;
    }
    ctx->pc = 0x14CE0Cu;
    SET_GPR_U32(ctx, 31, 0x14CE14u);
    ctx->pc = 0x14CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE0Cu;
    // 0x14ce10: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x14CE0Cu, 0x14CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE14u;
label_14ce14:
    // 0x14ce14: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14ce18:
    // 0x14ce18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14ce18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14ce1c:
    // 0x14ce1c: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x14ce1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_14ce20:
    // 0x14ce20: 0x320f809  jalr        $t9
label_14ce24:
    if (ctx->pc == 0x14CE24u) {
        ctx->pc = 0x14CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE20u;
        // 0x14ce24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE28u;
        goto label_14ce28;
    }
    ctx->pc = 0x14CE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CE28u);
        ctx->pc = 0x14CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE20u;
        // 0x14ce24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CE20u, 0x14CE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CE28u;
label_14ce28:
    // 0x14ce28: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x14ce28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_14ce2c:
    // 0x14ce2c: 0x1692ffe4  bne         $s4, $s2, . + 4 + (-0x1C << 2)
label_14ce30:
    if (ctx->pc == 0x14CE30u) {
        ctx->pc = 0x14CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE2Cu;
        // 0x14ce30: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE34u;
        goto label_14ce34;
    }
    ctx->pc = 0x14CE2Cu;
    {
        const bool branch_taken_0x14ce2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 18));
        ctx->pc = 0x14CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE2Cu;
        // 0x14ce30: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce2c) {
            ctx->pc = 0x14CDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cdc0;
        }
    }
    ctx->pc = 0x14CE34u;
label_14ce34:
    // 0x14ce34: 0x0  nop
    ctx->pc = 0x14ce34u;
    // NOP
label_14ce38:
    // 0x14ce38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14ce38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_14ce3c:
    // 0x14ce3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14ce3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14ce40:
    // 0x14ce40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14ce40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14ce44:
    // 0x14ce44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ce44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14ce48:
    // 0x14ce48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ce48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14ce4c:
    // 0x14ce4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ce4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14ce50:
    // 0x14ce50: 0x3e00008  jr          $ra
label_14ce54:
    if (ctx->pc == 0x14CE54u) {
        ctx->pc = 0x14CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE50u;
        // 0x14ce54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE58u;
        goto label_fallthrough_0x14ce50;
    }
    ctx->pc = 0x14CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE50u;
        // 0x14ce54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14ce50:
    ctx->pc = 0x14CE58u;
}
