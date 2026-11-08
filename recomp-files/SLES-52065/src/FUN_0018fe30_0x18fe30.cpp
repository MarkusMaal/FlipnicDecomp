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

// Function: FUN_0018fe30
// Address: 0x18fe30 - 0x18ffa0
void FUN_0018fe30_0x18fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018fe30_0x18fe30");
#endif

    switch (ctx->pc) {
        case 0x18fe30u: goto label_18fe30;
        case 0x18fe34u: goto label_18fe34;
        case 0x18fe38u: goto label_18fe38;
        case 0x18fe3cu: goto label_18fe3c;
        case 0x18fe40u: goto label_18fe40;
        case 0x18fe44u: goto label_18fe44;
        case 0x18fe48u: goto label_18fe48;
        case 0x18fe4cu: goto label_18fe4c;
        case 0x18fe50u: goto label_18fe50;
        case 0x18fe54u: goto label_18fe54;
        case 0x18fe58u: goto label_18fe58;
        case 0x18fe5cu: goto label_18fe5c;
        case 0x18fe60u: goto label_18fe60;
        case 0x18fe64u: goto label_18fe64;
        case 0x18fe68u: goto label_18fe68;
        case 0x18fe6cu: goto label_18fe6c;
        case 0x18fe70u: goto label_18fe70;
        case 0x18fe74u: goto label_18fe74;
        case 0x18fe78u: goto label_18fe78;
        case 0x18fe7cu: goto label_18fe7c;
        case 0x18fe80u: goto label_18fe80;
        case 0x18fe84u: goto label_18fe84;
        case 0x18fe88u: goto label_18fe88;
        case 0x18fe8cu: goto label_18fe8c;
        case 0x18fe90u: goto label_18fe90;
        case 0x18fe94u: goto label_18fe94;
        case 0x18fe98u: goto label_18fe98;
        case 0x18fe9cu: goto label_18fe9c;
        case 0x18fea0u: goto label_18fea0;
        case 0x18fea4u: goto label_18fea4;
        case 0x18fea8u: goto label_18fea8;
        case 0x18feacu: goto label_18feac;
        case 0x18feb0u: goto label_18feb0;
        case 0x18feb4u: goto label_18feb4;
        case 0x18feb8u: goto label_18feb8;
        case 0x18febcu: goto label_18febc;
        case 0x18fec0u: goto label_18fec0;
        case 0x18fec4u: goto label_18fec4;
        case 0x18fec8u: goto label_18fec8;
        case 0x18feccu: goto label_18fecc;
        case 0x18fed0u: goto label_18fed0;
        case 0x18fed4u: goto label_18fed4;
        case 0x18fed8u: goto label_18fed8;
        case 0x18fedcu: goto label_18fedc;
        case 0x18fee0u: goto label_18fee0;
        case 0x18fee4u: goto label_18fee4;
        case 0x18fee8u: goto label_18fee8;
        case 0x18feecu: goto label_18feec;
        case 0x18fef0u: goto label_18fef0;
        case 0x18fef4u: goto label_18fef4;
        case 0x18fef8u: goto label_18fef8;
        case 0x18fefcu: goto label_18fefc;
        case 0x18ff00u: goto label_18ff00;
        case 0x18ff04u: goto label_18ff04;
        case 0x18ff08u: goto label_18ff08;
        case 0x18ff0cu: goto label_18ff0c;
        case 0x18ff10u: goto label_18ff10;
        case 0x18ff14u: goto label_18ff14;
        case 0x18ff18u: goto label_18ff18;
        case 0x18ff1cu: goto label_18ff1c;
        case 0x18ff20u: goto label_18ff20;
        case 0x18ff24u: goto label_18ff24;
        case 0x18ff28u: goto label_18ff28;
        case 0x18ff2cu: goto label_18ff2c;
        case 0x18ff30u: goto label_18ff30;
        case 0x18ff34u: goto label_18ff34;
        case 0x18ff38u: goto label_18ff38;
        case 0x18ff3cu: goto label_18ff3c;
        case 0x18ff40u: goto label_18ff40;
        case 0x18ff44u: goto label_18ff44;
        case 0x18ff48u: goto label_18ff48;
        case 0x18ff4cu: goto label_18ff4c;
        case 0x18ff50u: goto label_18ff50;
        case 0x18ff54u: goto label_18ff54;
        case 0x18ff58u: goto label_18ff58;
        case 0x18ff5cu: goto label_18ff5c;
        case 0x18ff60u: goto label_18ff60;
        case 0x18ff64u: goto label_18ff64;
        case 0x18ff68u: goto label_18ff68;
        case 0x18ff6cu: goto label_18ff6c;
        case 0x18ff70u: goto label_18ff70;
        case 0x18ff74u: goto label_18ff74;
        case 0x18ff78u: goto label_18ff78;
        case 0x18ff7cu: goto label_18ff7c;
        case 0x18ff80u: goto label_18ff80;
        case 0x18ff84u: goto label_18ff84;
        case 0x18ff88u: goto label_18ff88;
        case 0x18ff8cu: goto label_18ff8c;
        case 0x18ff90u: goto label_18ff90;
        case 0x18ff94u: goto label_18ff94;
        case 0x18ff98u: goto label_18ff98;
        case 0x18ff9cu: goto label_18ff9c;
        default: break;
    }

    ctx->pc = 0x18fe30u;

label_18fe30:
    // 0x18fe30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18fe34:
    // 0x18fe34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18fe38:
    // 0x18fe38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18fe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18fe3c:
    // 0x18fe3c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x18fe3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18fe40:
    // 0x18fe40: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
label_18fe44:
    if (ctx->pc == 0x18FE44u) {
        ctx->pc = 0x18FE48u;
        goto label_18fe48;
    }
    ctx->pc = 0x18FE40u;
    {
        const bool branch_taken_0x18fe40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe40) {
            ctx->pc = 0x18FF90u;
            goto label_18ff90;
        }
    }
    ctx->pc = 0x18FE48u;
label_18fe48:
    // 0x18fe48: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x18fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18fe4c:
    // 0x18fe4c: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
label_18fe50:
    if (ctx->pc == 0x18FE50u) {
        ctx->pc = 0x18FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE4Cu;
        // 0x18fe50: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FE54u;
        goto label_18fe54;
    }
    ctx->pc = 0x18FE4Cu;
    {
        const bool branch_taken_0x18fe4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE4Cu;
        // 0x18fe50: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe4c) {
            ctx->pc = 0x18FF84u;
            goto label_18ff84;
        }
    }
    ctx->pc = 0x18FE54u;
label_18fe54:
    // 0x18fe54: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x18fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_18fe58:
    // 0x18fe58: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x18fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18fe5c:
    // 0x18fe5c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_18fe60:
    // 0x18fe60: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_18fe64:
    // 0x18fe64: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x18fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_18fe68:
    // 0x18fe68: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_18fe6c:
    // 0x18fe6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18fe70:
    // 0x18fe70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18fe74:
    // 0x18fe74: 0x24640154  addiu       $a0, $v1, 0x154
    ctx->pc = 0x18fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
label_18fe78:
    // 0x18fe78: 0x8c630154  lw          $v1, 0x154($v1)
    ctx->pc = 0x18fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_18fe7c:
    // 0x18fe7c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_18fe80:
    if (ctx->pc == 0x18FE80u) {
        ctx->pc = 0x18FE84u;
        goto label_18fe84;
    }
    ctx->pc = 0x18FE7Cu;
    {
        const bool branch_taken_0x18fe7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe7c) {
            ctx->pc = 0x18FEC8u;
            goto label_18fec8;
        }
    }
    ctx->pc = 0x18FE84u;
label_18fe84:
    // 0x18fe84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18fe88:
    // 0x18fe88: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_18fe8c:
    if (ctx->pc == 0x18FE8Cu) {
        ctx->pc = 0x18FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE88u;
        // 0x18fe8c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FE90u;
        goto label_18fe90;
    }
    ctx->pc = 0x18FE88u;
    {
        const bool branch_taken_0x18fe88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE88u;
        // 0x18fe8c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe88) {
            ctx->pc = 0x18FEC8u;
            goto label_18fec8;
        }
    }
    ctx->pc = 0x18FE90u;
label_18fe90:
    // 0x18fe90: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x18fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_18fe94:
    // 0x18fe94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18fe98:
    // 0x18fe98: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x18fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_18fe9c:
    // 0x18fe9c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x18fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_18fea0:
    // 0x18fea0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18fea4:
    // 0x18fea4: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x18fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_18fea8:
    // 0x18fea8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x18fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_18feac:
    // 0x18feac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18feacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18feb0:
    // 0x18feb0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_18feb4:
    // 0x18feb4: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x18feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_18feb8:
    // 0x18feb8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x18feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18febc:
    // 0x18febc: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_18fec0:
    if (ctx->pc == 0x18FEC0u) {
        ctx->pc = 0x18FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEBCu;
        // 0x18fec0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FEC4u;
        goto label_18fec4;
    }
    ctx->pc = 0x18FEBCu;
    {
        const bool branch_taken_0x18febc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEBCu;
        // 0x18fec0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18febc) {
            ctx->pc = 0x18FEC8u;
            goto label_18fec8;
        }
    }
    ctx->pc = 0x18FEC4u;
label_18fec4:
    // 0x18fec4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_18fec8:
    // 0x18fec8: 0x8ca80030  lw          $t0, 0x30($a1)
    ctx->pc = 0x18fec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_18fecc:
    // 0x18fecc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18feccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_18fed0:
    // 0x18fed0: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x18fed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_18fed4:
    // 0x18fed4: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x18fed4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_18fed8:
    // 0x18fed8: 0x83140  sll         $a2, $t0, 5
    ctx->pc = 0x18fed8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_18fedc:
    // 0x18fedc: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_18fee0:
    // 0x18fee0: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x18fee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_18fee4:
    // 0x18fee4: 0x8d270034  lw          $a3, 0x34($t1)
    ctx->pc = 0x18fee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_18fee8:
    // 0x18fee8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18fee8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_18feec:
    // 0x18feec: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x18feecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_18fef0:
    // 0x18fef0: 0x8cc60054  lw          $a2, 0x54($a2)
    ctx->pc = 0x18fef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_18fef4:
    // 0x18fef4: 0x10c40023  beq         $a2, $a0, . + 4 + (0x23 << 2)
label_18fef8:
    if (ctx->pc == 0x18FEF8u) {
        ctx->pc = 0x18FEFCu;
        goto label_18fefc;
    }
    ctx->pc = 0x18FEF4u;
    {
        const bool branch_taken_0x18fef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x18fef4) {
            ctx->pc = 0x18FF84u;
            goto label_18ff84;
        }
    }
    ctx->pc = 0x18FEFCu;
label_18fefc:
    // 0x18fefc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x18fefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_18ff00:
    // 0x18ff00: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
label_18ff04:
    if (ctx->pc == 0x18FF04u) {
        ctx->pc = 0x18FF08u;
        goto label_18ff08;
    }
    ctx->pc = 0x18FF00u;
    {
        const bool branch_taken_0x18ff00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ff00) {
            ctx->pc = 0x18FF28u;
            goto label_18ff28;
        }
    }
    ctx->pc = 0x18FF08u;
label_18ff08:
    // 0x18ff08: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
label_18ff0c:
    if (ctx->pc == 0x18FF0Cu) {
        ctx->pc = 0x18FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF08u;
        // 0x18ff0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF10u;
        goto label_18ff10;
    }
    ctx->pc = 0x18FF08u;
    {
        const bool branch_taken_0x18ff08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF08u;
        // 0x18ff0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff08) {
            ctx->pc = 0x18FF84u;
            goto label_18ff84;
        }
    }
    ctx->pc = 0x18FF10u;
label_18ff10:
    // 0x18ff10: 0x8c99031c  lw          $t9, 0x31C($a0)
    ctx->pc = 0x18ff10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
label_18ff14:
    // 0x18ff14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x18ff14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_18ff18:
    // 0x18ff18: 0x320f809  jalr        $t9
label_18ff1c:
    if (ctx->pc == 0x18FF1Cu) {
        ctx->pc = 0x18FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF18u;
        // 0x18ff1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF20u;
        goto label_18ff20;
    }
    ctx->pc = 0x18FF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FF20u);
        ctx->pc = 0x18FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF18u;
        // 0x18ff1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FF18u, 0x18FF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FF20u;
label_18ff20:
    // 0x18ff20: 0x10000018  b           . + 4 + (0x18 << 2)
label_18ff24:
    if (ctx->pc == 0x18FF24u) {
        ctx->pc = 0x18FF28u;
        goto label_18ff28;
    }
    ctx->pc = 0x18FF20u;
    {
        const bool branch_taken_0x18ff20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff20) {
            ctx->pc = 0x18FF84u;
            goto label_18ff84;
        }
    }
    ctx->pc = 0x18FF28u;
label_18ff28:
    // 0x18ff28: 0x8d240254  lw          $a0, 0x254($t1)
    ctx->pc = 0x18ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 596)));
label_18ff2c:
    // 0x18ff2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18ff30:
    // 0x18ff30: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_18ff34:
    if (ctx->pc == 0x18FF34u) {
        ctx->pc = 0x18FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF30u;
        // 0x18ff34: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF38u;
        goto label_18ff38;
    }
    ctx->pc = 0x18FF30u;
    {
        const bool branch_taken_0x18ff30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF30u;
        // 0x18ff34: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff30) {
            ctx->pc = 0x18FF84u;
            goto label_18ff84;
        }
    }
    ctx->pc = 0x18FF38u;
label_18ff38:
    // 0x18ff38: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_18ff3c:
    if (ctx->pc == 0x18FF3Cu) {
        ctx->pc = 0x18FF40u;
        goto label_18ff40;
    }
    ctx->pc = 0x18FF38u;
    {
        const bool branch_taken_0x18ff38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ff38) {
            ctx->pc = 0x18FF6Cu;
            goto label_18ff6c;
        }
    }
    ctx->pc = 0x18FF40u;
label_18ff40:
    // 0x18ff40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_18ff44:
    if (ctx->pc == 0x18FF44u) {
        ctx->pc = 0x18FF48u;
        goto label_18ff48;
    }
    ctx->pc = 0x18FF40u;
    {
        const bool branch_taken_0x18ff40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff40) {
            ctx->pc = 0x18FF50u;
            goto label_18ff50;
        }
    }
    ctx->pc = 0x18FF48u;
label_18ff48:
    // 0x18ff48: 0x1000000e  b           . + 4 + (0xE << 2)
label_18ff4c:
    if (ctx->pc == 0x18FF4Cu) {
        ctx->pc = 0x18FF50u;
        goto label_18ff50;
    }
    ctx->pc = 0x18FF48u;
    {
        const bool branch_taken_0x18ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff48) {
            ctx->pc = 0x18FF84u;
            goto label_18ff84;
        }
    }
    ctx->pc = 0x18FF50u;
label_18ff50:
    // 0x18ff50: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x18ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_18ff54:
    // 0x18ff54: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18ff58:
    // 0x18ff58: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x18ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_18ff5c:
    // 0x18ff5c: 0x40f809  jalr        $v0
label_18ff60:
    if (ctx->pc == 0x18FF60u) {
        ctx->pc = 0x18FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF5Cu;
        // 0x18ff60: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF64u;
        goto label_18ff64;
    }
    ctx->pc = 0x18FF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FF64u);
        ctx->pc = 0x18FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF5Cu;
        // 0x18ff60: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FF5Cu, 0x18FF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FF64u;
label_18ff64:
    // 0x18ff64: 0x10000007  b           . + 4 + (0x7 << 2)
label_18ff68:
    if (ctx->pc == 0x18FF68u) {
        ctx->pc = 0x18FF6Cu;
        goto label_18ff6c;
    }
    ctx->pc = 0x18FF64u;
    {
        const bool branch_taken_0x18ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff64) {
            ctx->pc = 0x18FF84u;
            goto label_18ff84;
        }
    }
    ctx->pc = 0x18FF6Cu;
label_18ff6c:
    // 0x18ff6c: 0x0  nop
    ctx->pc = 0x18ff6cu;
    // NOP
label_18ff70:
    // 0x18ff70: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x18ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_18ff74:
    // 0x18ff74: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18ff78:
    // 0x18ff78: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x18ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
label_18ff7c:
    // 0x18ff7c: 0xc07a564  jal         func_1E9590
label_18ff80:
    if (ctx->pc == 0x18FF80u) {
        ctx->pc = 0x18FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF7Cu;
        // 0x18ff80: 0x24590274  addiu       $t9, $v0, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF84u;
        goto label_18ff84;
    }
    ctx->pc = 0x18FF7Cu;
    SET_GPR_U32(ctx, 31, 0x18FF84u);
    ctx->pc = 0x18FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF7Cu;
    // 0x18ff80: 0x24590274  addiu       $t9, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9590u, 0x18FF7Cu, 0x18FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF84u;
label_18ff84:
    // 0x18ff84: 0x0  nop
    ctx->pc = 0x18ff84u;
    // NOP
label_18ff88:
    // 0x18ff88: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
label_18ff8c:
    if (ctx->pc == 0x18FF8Cu) {
        ctx->pc = 0x18FF90u;
        goto label_18ff90;
    }
    ctx->pc = 0x18FF88u;
    {
        const bool branch_taken_0x18ff88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ff88) {
            ctx->pc = 0x18FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fe48;
        }
    }
    ctx->pc = 0x18FF90u;
label_18ff90:
    // 0x18ff90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ff90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18ff94:
    // 0x18ff94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ff94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18ff98:
    // 0x18ff98: 0x3e00008  jr          $ra
label_18ff9c:
    if (ctx->pc == 0x18FF9Cu) {
        ctx->pc = 0x18FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF98u;
        // 0x18ff9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FFA0u;
        goto label_fallthrough_0x18ff98;
    }
    ctx->pc = 0x18FF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF98u;
        // 0x18ff9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18ff98:
    ctx->pc = 0x18FFA0u;
}
