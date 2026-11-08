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

// Function: FUN_00111cb0
// Address: 0x111cb0 - 0x111e40
void FUN_00111cb0_0x111cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00111cb0_0x111cb0");
#endif

    switch (ctx->pc) {
        case 0x111cb0u: goto label_111cb0;
        case 0x111cb4u: goto label_111cb4;
        case 0x111cb8u: goto label_111cb8;
        case 0x111cbcu: goto label_111cbc;
        case 0x111cc0u: goto label_111cc0;
        case 0x111cc4u: goto label_111cc4;
        case 0x111cc8u: goto label_111cc8;
        case 0x111cccu: goto label_111ccc;
        case 0x111cd0u: goto label_111cd0;
        case 0x111cd4u: goto label_111cd4;
        case 0x111cd8u: goto label_111cd8;
        case 0x111cdcu: goto label_111cdc;
        case 0x111ce0u: goto label_111ce0;
        case 0x111ce4u: goto label_111ce4;
        case 0x111ce8u: goto label_111ce8;
        case 0x111cecu: goto label_111cec;
        case 0x111cf0u: goto label_111cf0;
        case 0x111cf4u: goto label_111cf4;
        case 0x111cf8u: goto label_111cf8;
        case 0x111cfcu: goto label_111cfc;
        case 0x111d00u: goto label_111d00;
        case 0x111d04u: goto label_111d04;
        case 0x111d08u: goto label_111d08;
        case 0x111d0cu: goto label_111d0c;
        case 0x111d10u: goto label_111d10;
        case 0x111d14u: goto label_111d14;
        case 0x111d18u: goto label_111d18;
        case 0x111d1cu: goto label_111d1c;
        case 0x111d20u: goto label_111d20;
        case 0x111d24u: goto label_111d24;
        case 0x111d28u: goto label_111d28;
        case 0x111d2cu: goto label_111d2c;
        case 0x111d30u: goto label_111d30;
        case 0x111d34u: goto label_111d34;
        case 0x111d38u: goto label_111d38;
        case 0x111d3cu: goto label_111d3c;
        case 0x111d40u: goto label_111d40;
        case 0x111d44u: goto label_111d44;
        case 0x111d48u: goto label_111d48;
        case 0x111d4cu: goto label_111d4c;
        case 0x111d50u: goto label_111d50;
        case 0x111d54u: goto label_111d54;
        case 0x111d58u: goto label_111d58;
        case 0x111d5cu: goto label_111d5c;
        case 0x111d60u: goto label_111d60;
        case 0x111d64u: goto label_111d64;
        case 0x111d68u: goto label_111d68;
        case 0x111d6cu: goto label_111d6c;
        case 0x111d70u: goto label_111d70;
        case 0x111d74u: goto label_111d74;
        case 0x111d78u: goto label_111d78;
        case 0x111d7cu: goto label_111d7c;
        case 0x111d80u: goto label_111d80;
        case 0x111d84u: goto label_111d84;
        case 0x111d88u: goto label_111d88;
        case 0x111d8cu: goto label_111d8c;
        case 0x111d90u: goto label_111d90;
        case 0x111d94u: goto label_111d94;
        case 0x111d98u: goto label_111d98;
        case 0x111d9cu: goto label_111d9c;
        case 0x111da0u: goto label_111da0;
        case 0x111da4u: goto label_111da4;
        case 0x111da8u: goto label_111da8;
        case 0x111dacu: goto label_111dac;
        case 0x111db0u: goto label_111db0;
        case 0x111db4u: goto label_111db4;
        case 0x111db8u: goto label_111db8;
        case 0x111dbcu: goto label_111dbc;
        case 0x111dc0u: goto label_111dc0;
        case 0x111dc4u: goto label_111dc4;
        case 0x111dc8u: goto label_111dc8;
        case 0x111dccu: goto label_111dcc;
        case 0x111dd0u: goto label_111dd0;
        case 0x111dd4u: goto label_111dd4;
        case 0x111dd8u: goto label_111dd8;
        case 0x111ddcu: goto label_111ddc;
        case 0x111de0u: goto label_111de0;
        case 0x111de4u: goto label_111de4;
        case 0x111de8u: goto label_111de8;
        case 0x111decu: goto label_111dec;
        case 0x111df0u: goto label_111df0;
        case 0x111df4u: goto label_111df4;
        case 0x111df8u: goto label_111df8;
        case 0x111dfcu: goto label_111dfc;
        case 0x111e00u: goto label_111e00;
        case 0x111e04u: goto label_111e04;
        case 0x111e08u: goto label_111e08;
        case 0x111e0cu: goto label_111e0c;
        case 0x111e10u: goto label_111e10;
        case 0x111e14u: goto label_111e14;
        case 0x111e18u: goto label_111e18;
        case 0x111e1cu: goto label_111e1c;
        case 0x111e20u: goto label_111e20;
        case 0x111e24u: goto label_111e24;
        case 0x111e28u: goto label_111e28;
        case 0x111e2cu: goto label_111e2c;
        case 0x111e30u: goto label_111e30;
        case 0x111e34u: goto label_111e34;
        case 0x111e38u: goto label_111e38;
        case 0x111e3cu: goto label_111e3c;
        default: break;
    }

    ctx->pc = 0x111cb0u;

label_111cb0:
    // 0x111cb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_111cb4:
    // 0x111cb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x111cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_111cb8:
    // 0x111cb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x111cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_111cbc:
    // 0x111cbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x111cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_111cc0:
    // 0x111cc0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x111cc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_111cc4:
    // 0x111cc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_111cc8:
    // 0x111cc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111ccc:
    // 0x111ccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x111cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_111cd0:
    // 0x111cd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x111cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_111cd4:
    // 0x111cd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x111cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_111cd8:
    // 0x111cd8: 0x1000000e  b           . + 4 + (0xE << 2)
label_111cdc:
    if (ctx->pc == 0x111CDCu) {
        ctx->pc = 0x111CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CD8u;
        // 0x111cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111CE0u;
        goto label_111ce0;
    }
    ctx->pc = 0x111CD8u;
    {
        const bool branch_taken_0x111cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CD8u;
        // 0x111cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cd8) {
            ctx->pc = 0x111D14u;
            goto label_111d14;
        }
    }
    ctx->pc = 0x111CE0u;
label_111ce0:
    // 0x111ce0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x111ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_111ce4:
    // 0x111ce4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x111ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_111ce8:
    // 0x111ce8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x111ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111cec:
    // 0x111cec: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x111cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_111cf0:
    // 0x111cf0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x111cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_111cf4:
    // 0x111cf4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x111cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_111cf8:
    // 0x111cf8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x111cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_111cfc:
    // 0x111cfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x111cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_111d00:
    // 0x111d00: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x111d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_111d04:
    // 0x111d04: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x111d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
label_111d08:
    // 0x111d08: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x111d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_111d0c:
    // 0x111d0c: 0x3463002c  ori         $v1, $v1, 0x2C
    ctx->pc = 0x111d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44);
label_111d10:
    // 0x111d10: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x111d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
label_111d14:
    // 0x111d14: 0x0  nop
    ctx->pc = 0x111d14u;
    // NOP
label_111d18:
    // 0x111d18: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x111d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_111d1c:
    // 0x111d1c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x111d1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_111d20:
    // 0x111d20: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_111d24:
    if (ctx->pc == 0x111D24u) {
        ctx->pc = 0x111D28u;
        goto label_111d28;
    }
    ctx->pc = 0x111D20u;
    {
        const bool branch_taken_0x111d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111d20) {
            ctx->pc = 0x111CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111ce0;
        }
    }
    ctx->pc = 0x111D28u;
label_111d28:
    // 0x111d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111d2c:
    // 0x111d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111d30:
    // 0x111d30: 0x1000000d  b           . + 4 + (0xD << 2)
label_111d34:
    if (ctx->pc == 0x111D34u) {
        ctx->pc = 0x111D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D30u;
        // 0x111d34: 0x2404ffdf  addiu       $a0, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D38u;
        goto label_111d38;
    }
    ctx->pc = 0x111D30u;
    {
        const bool branch_taken_0x111d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D30u;
        // 0x111d34: 0x2404ffdf  addiu       $a0, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d30) {
            ctx->pc = 0x111D68u;
            goto label_111d68;
        }
    }
    ctx->pc = 0x111D38u;
label_111d38:
    // 0x111d38: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x111d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_111d3c:
    // 0x111d3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_111d40:
    // 0x111d40: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x111d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111d44:
    // 0x111d44: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x111d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_111d48:
    // 0x111d48: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x111d48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_111d4c:
    // 0x111d4c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x111d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_111d50:
    // 0x111d50: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x111d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_111d54:
    // 0x111d54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x111d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_111d58:
    // 0x111d58: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x111d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_111d5c:
    // 0x111d5c: 0x8ca30224  lw          $v1, 0x224($a1)
    ctx->pc = 0x111d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
label_111d60:
    // 0x111d60: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x111d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_111d64:
    // 0x111d64: 0xaca30224  sw          $v1, 0x224($a1)
    ctx->pc = 0x111d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 548), GPR_U32(ctx, 3));
label_111d68:
    // 0x111d68: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x111d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_111d6c:
    // 0x111d6c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x111d6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_111d70:
    // 0x111d70: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_111d74:
    if (ctx->pc == 0x111D74u) {
        ctx->pc = 0x111D78u;
        goto label_111d78;
    }
    ctx->pc = 0x111D70u;
    {
        const bool branch_taken_0x111d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111d70) {
            ctx->pc = 0x111D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111d38;
        }
    }
    ctx->pc = 0x111D78u;
label_111d78:
    // 0x111d78: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x111d78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_111d7c:
    // 0x111d7c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x111d7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_111d80:
    // 0x111d80: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_111d84:
    if (ctx->pc == 0x111D84u) {
        ctx->pc = 0x111D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D80u;
        // 0x111d84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D88u;
        goto label_111d88;
    }
    ctx->pc = 0x111D80u;
    {
        const bool branch_taken_0x111d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D80u;
        // 0x111d84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d80) {
            ctx->pc = 0x111DD0u;
            goto label_111dd0;
        }
    }
    ctx->pc = 0x111D88u;
label_111d88:
    // 0x111d88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x111d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111d8c:
    // 0x111d8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x111d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_111d90:
    // 0x111d90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x111d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_111d94:
    // 0x111d94: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111d98:
    // 0x111d98: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x111d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_111d9c:
    // 0x111d9c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111d9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_111da0:
    // 0x111da0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_111da4:
    // 0x111da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_111da8:
    // 0x111da8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x111da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_111dac:
    // 0x111dac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x111dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_111db0:
    // 0x111db0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x111db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_111db4:
    // 0x111db4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x111db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_111db8:
    // 0x111db8: 0x320f809  jalr        $t9
label_111dbc:
    if (ctx->pc == 0x111DBCu) {
        ctx->pc = 0x111DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DB8u;
        // 0x111dbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111DC0u;
        goto label_111dc0;
    }
    ctx->pc = 0x111DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x111DC0u);
        ctx->pc = 0x111DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DB8u;
        // 0x111dbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111DB8u, 0x111DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111DC0u;
label_111dc0:
    // 0x111dc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x111dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_111dc4:
    // 0x111dc4: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x111dc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_111dc8:
    // 0x111dc8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_111dcc:
    if (ctx->pc == 0x111DCCu) {
        ctx->pc = 0x111DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DC8u;
        // 0x111dcc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111DD0u;
        goto label_111dd0;
    }
    ctx->pc = 0x111DC8u;
    {
        const bool branch_taken_0x111dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DC8u;
        // 0x111dcc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111dc8) {
            ctx->pc = 0x111D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111d8c;
        }
    }
    ctx->pc = 0x111DD0u;
label_111dd0:
    // 0x111dd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x111dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111dd4:
    // 0x111dd4: 0x1000000d  b           . + 4 + (0xD << 2)
label_111dd8:
    if (ctx->pc == 0x111DD8u) {
        ctx->pc = 0x111DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DD4u;
        // 0x111dd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111DDCu;
        goto label_111ddc;
    }
    ctx->pc = 0x111DD4u;
    {
        const bool branch_taken_0x111dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DD4u;
        // 0x111dd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111dd4) {
            ctx->pc = 0x111E0Cu;
            goto label_111e0c;
        }
    }
    ctx->pc = 0x111DDCu;
label_111ddc:
    // 0x111ddc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x111ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_111de0:
    // 0x111de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111de4:
    // 0x111de4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111de8:
    // 0x111de8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x111de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_111dec:
    // 0x111dec: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111decu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_111df0:
    // 0x111df0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_111df4:
    // 0x111df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_111df8:
    // 0x111df8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x111df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_111dfc:
    // 0x111dfc: 0xc043da0  jal         func_10F680
label_111e00:
    if (ctx->pc == 0x111E00u) {
        ctx->pc = 0x111E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DFCu;
        // 0x111e00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111E04u;
        goto label_111e04;
    }
    ctx->pc = 0x111DFCu;
    SET_GPR_U32(ctx, 31, 0x111E04u);
    ctx->pc = 0x111E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111DFCu;
    // 0x111e00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x111DFCu, 0x111E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E04u;
label_111e04:
    // 0x111e04: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x111e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_111e08:
    // 0x111e08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x111e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_111e0c:
    // 0x111e0c: 0x0  nop
    ctx->pc = 0x111e0cu;
    // NOP
label_111e10:
    // 0x111e10: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x111e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_111e14:
    // 0x111e14: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x111e14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_111e18:
    // 0x111e18: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_111e1c:
    if (ctx->pc == 0x111E1Cu) {
        ctx->pc = 0x111E20u;
        goto label_111e20;
    }
    ctx->pc = 0x111E18u;
    {
        const bool branch_taken_0x111e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111e18) {
            ctx->pc = 0x111DDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111ddc;
        }
    }
    ctx->pc = 0x111E20u;
label_111e20:
    // 0x111e20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x111e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_111e24:
    // 0x111e24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x111e24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_111e28:
    // 0x111e28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111e28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_111e2c:
    // 0x111e2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x111e2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_111e30:
    // 0x111e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_111e34:
    // 0x111e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_111e38:
    // 0x111e38: 0x3e00008  jr          $ra
label_111e3c:
    if (ctx->pc == 0x111E3Cu) {
        ctx->pc = 0x111E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E38u;
        // 0x111e3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111E40u;
        goto label_fallthrough_0x111e38;
    }
    ctx->pc = 0x111E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E38u;
        // 0x111e3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x111e38:
    ctx->pc = 0x111E40u;
}
