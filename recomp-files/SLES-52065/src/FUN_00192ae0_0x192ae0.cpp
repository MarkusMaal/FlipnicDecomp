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

// Function: FUN_00192ae0
// Address: 0x192ae0 - 0x192c18
void FUN_00192ae0_0x192ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192ae0_0x192ae0");
#endif

    switch (ctx->pc) {
        case 0x192b00u: goto label_192b00;
        case 0x192b98u: goto label_192b98;
        default: break;
    }

    ctx->pc = 0x192ae0u;

    // 0x192ae0: 0x8f8d8714  lw          $t5, -0x78EC($gp)
    ctx->pc = 0x192ae0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x192ae4: 0x91a3282c  lbu         $v1, 0x282C($t5)
    ctx->pc = 0x192ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10284)));
    // 0x192ae8: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x192AE8u;
    {
        const bool branch_taken_0x192ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AE8u;
        // 0x192aec: 0x25a810c8  addiu       $t0, $t5, 0x10C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 4296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ae8) {
            ctx->pc = 0x192C10u;
            goto label_192c10;
        }
    }
    ctx->pc = 0x192AF0u;
    // 0x192af0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x192af0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192af4: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x192af4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x192af8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x192AF8u;
    {
        const bool branch_taken_0x192af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AF8u;
        // 0x192afc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192af8) {
            ctx->pc = 0x192B18u;
            goto label_192b18;
        }
    }
    ctx->pc = 0x192B00u;
label_192b00:
    // 0x192b00: 0x85a92828  lh          $t1, 0x2828($t5)
    ctx->pc = 0x192b00u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 10280)));
    // 0x192b04: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x192b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x192b08: 0x10890006  beq         $a0, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x192B08u;
    {
        const bool branch_taken_0x192b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x192b08) {
            ctx->pc = 0x192B24u;
            goto label_192b24;
        }
    }
    ctx->pc = 0x192B10u;
    // 0x192b10: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x192b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x192b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_192b18:
    // 0x192b18: 0x6b202a  slt         $a0, $v1, $t3
    ctx->pc = 0x192b18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x192b1c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x192B1Cu;
    {
        const bool branch_taken_0x192b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x192B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B1Cu;
        // 0x192b20: 0x10a2021  addu        $a0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b1c) {
            ctx->pc = 0x192B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192b00;
        }
    }
    ctx->pc = 0x192B24u;
label_192b24:
    // 0x192b24: 0x0  nop
    ctx->pc = 0x192b24u;
    // NOP
    // 0x192b28: 0x106b0039  beq         $v1, $t3, . + 4 + (0x39 << 2)
    ctx->pc = 0x192B28u;
    {
        const bool branch_taken_0x192b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x192B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B28u;
        // 0x192b2c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b28) {
            ctx->pc = 0x192C10u;
            goto label_192c10;
        }
    }
    ctx->pc = 0x192B30u;
    // 0x192b30: 0x14a40012  bne         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x192B30u;
    {
        const bool branch_taken_0x192b30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x192B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B30u;
        // 0x192b34: 0x351c0  sll         $t2, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b30) {
            ctx->pc = 0x192B7Cu;
            goto label_192b7c;
        }
    }
    ctx->pc = 0x192B38u;
    // 0x192b38: 0x91a4282b  lbu         $a0, 0x282B($t5)
    ctx->pc = 0x192b38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10283)));
    // 0x192b3c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x192B3Cu;
    {
        const bool branch_taken_0x192b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x192B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B3Cu;
        // 0x192b40: 0x682821  addu        $a1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b3c) {
            ctx->pc = 0x192B68u;
            goto label_192b68;
        }
    }
    ctx->pc = 0x192B44u;
    // 0x192b44: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x192b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x192b48: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x192b48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192b4c: 0x90a41684  lbu         $a0, 0x1684($a1)
    ctx->pc = 0x192b4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5764)));
    // 0x192b50: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x192b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x192b54: 0xa0a41684  sb          $a0, 0x1684($a1)
    ctx->pc = 0x192b54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5764), (uint8_t)GPR_U32(ctx, 4));
    // 0x192b58: 0x80a41694  lb          $a0, 0x1694($a1)
    ctx->pc = 0x192b58u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5780)));
    // 0x192b5c: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x192b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x192b60: 0xa0a41694  sb          $a0, 0x1694($a1)
    ctx->pc = 0x192b60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5780), (uint8_t)GPR_U32(ctx, 4));
    // 0x192b64: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x192b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_192b68:
    // 0x192b68: 0x80a416a4  lb          $a0, 0x16A4($a1)
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5796)));
    // 0x192b6c: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x192b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192b70: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x192b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x192b74: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x192B74u;
    {
        const bool branch_taken_0x192b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B74u;
        // 0x192b78: 0xa0a316a4  sb          $v1, 0x16A4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5796), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b74) {
            ctx->pc = 0x192C0Cu;
            goto label_192c0c;
        }
    }
    ctx->pc = 0x192B7Cu;
label_192b7c:
    // 0x192b7c: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x192b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192b80: 0x10a5821  addu        $t3, $t0, $t2
    ctx->pc = 0x192b80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x192b84: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x192b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x192b88: 0x8d2a0044  lw          $t2, 0x44($t1)
    ctx->pc = 0x192b88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x192b8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b90: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x192B90u;
    {
        const bool branch_taken_0x192b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B90u;
        // 0x192b94: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b90) {
            ctx->pc = 0x192BFCu;
            goto label_192bfc;
        }
    }
    ctx->pc = 0x192B98u;
label_192b98:
    // 0x192b98: 0x8d290084  lw          $t1, 0x84($t1)
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
    // 0x192b9c: 0x15250015  bne         $t1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x192B9Cu;
    {
        const bool branch_taken_0x192b9c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 5));
        if (branch_taken_0x192b9c) {
            ctx->pc = 0x192BF4u;
            goto label_192bf4;
        }
    }
    ctx->pc = 0x192BA4u;
    // 0x192ba4: 0x91a5282b  lbu         $a1, 0x282B($t5)
    ctx->pc = 0x192ba4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10283)));
    // 0x192ba8: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x192BA8u;
    {
        const bool branch_taken_0x192ba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x192BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BA8u;
        // 0x192bac: 0x32940  sll         $a1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ba8) {
            ctx->pc = 0x192BD4u;
            goto label_192bd4;
        }
    }
    ctx->pc = 0x192BB0u;
    // 0x192bb0: 0xc75025  or          $t2, $a2, $a3
    ctx->pc = 0x192bb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192bb4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x192bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x192bb8: 0x854821  addu        $t1, $a0, $a1
    ctx->pc = 0x192bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x192bbc: 0x91251084  lbu         $a1, 0x1084($t1)
    ctx->pc = 0x192bbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4228)));
    // 0x192bc0: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x192bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x192bc4: 0xa1251084  sb          $a1, 0x1084($t1)
    ctx->pc = 0x192bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4228), (uint8_t)GPR_U32(ctx, 5));
    // 0x192bc8: 0x81251284  lb          $a1, 0x1284($t1)
    ctx->pc = 0x192bc8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 4740)));
    // 0x192bcc: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x192bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x192bd0: 0xa1251284  sb          $a1, 0x1284($t1)
    ctx->pc = 0x192bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4740), (uint8_t)GPR_U32(ctx, 5));
label_192bd4:
    // 0x192bd4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x192bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x192bd8: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x192bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192bdc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x192bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x192be0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x192be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x192be4: 0x80831484  lb          $v1, 0x1484($a0)
    ctx->pc = 0x192be4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5252)));
    // 0x192be8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x192be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x192bec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x192BECu;
    {
        const bool branch_taken_0x192bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BECu;
        // 0x192bf0: 0xa0831484  sb          $v1, 0x1484($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5252), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192bec) {
            ctx->pc = 0x192C0Cu;
            goto label_192c0c;
        }
    }
    ctx->pc = 0x192BF4u;
label_192bf4:
    // 0x192bf4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x192bf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x192bf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x192bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_192bfc:
    // 0x192bfc: 0x0  nop
    ctx->pc = 0x192bfcu;
    // NOP
    // 0x192c00: 0x8a482a  slt         $t1, $a0, $t2
    ctx->pc = 0x192c00u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x192c04: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x192C04u;
    {
        const bool branch_taken_0x192c04 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x192C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C04u;
        // 0x192c08: 0x16c4821  addu        $t1, $t3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c04) {
            ctx->pc = 0x192B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192b98;
        }
    }
    ctx->pc = 0x192C0Cu;
label_192c0c:
    // 0x192c0c: 0x0  nop
    ctx->pc = 0x192c0cu;
    // NOP
label_192c10:
    // 0x192c10: 0x3e00008  jr          $ra
    ctx->pc = 0x192C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192C18u;
}
