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

// Function: FUN_00187a80
// Address: 0x187a80 - 0x187ea0
void FUN_00187a80_0x187a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187a80_0x187a80");
#endif

    switch (ctx->pc) {
        case 0x187ab0u: goto label_187ab0;
        case 0x187af4u: goto label_187af4;
        case 0x187b08u: goto label_187b08;
        case 0x187b70u: goto label_187b70;
        case 0x187b80u: goto label_187b80;
        case 0x187bf8u: goto label_187bf8;
        case 0x187c08u: goto label_187c08;
        case 0x187d78u: goto label_187d78;
        case 0x187dbcu: goto label_187dbc;
        case 0x187decu: goto label_187dec;
        case 0x187dfcu: goto label_187dfc;
        default: break;
    }

    ctx->pc = 0x187a80u;

    // 0x187a80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x187a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x187a84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x187a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x187a88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x187a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x187a8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x187a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187a90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187a94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x187a94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187a9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x187a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187aa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187aa4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x187aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187aa8: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x187AA8u;
    {
        const bool branch_taken_0x187aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AA8u;
        // 0x187aac: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187aa8) {
            ctx->pc = 0x187E58u;
            goto label_187e58;
        }
    }
    ctx->pc = 0x187AB0u;
label_187ab0:
    // 0x187ab0: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x187ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x187ab4: 0x144300e4  bne         $v0, $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x187AB4u;
    {
        const bool branch_taken_0x187ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x187ab4) {
            ctx->pc = 0x187E48u;
            goto label_187e48;
        }
    }
    ctx->pc = 0x187ABCu;
    // 0x187abc: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x187abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x187ac0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187AC0u;
    {
        const bool branch_taken_0x187ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x187ac0) {
            ctx->pc = 0x187ADCu;
            goto label_187adc;
        }
    }
    ctx->pc = 0x187AC8u;
    // 0x187ac8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x187ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x187acc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x187accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x187ad0: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x187ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x187ad4: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x187AD4u;
    {
        const bool branch_taken_0x187ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AD4u;
        // 0x187ad8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ad4) {
            ctx->pc = 0x187E58u;
            goto label_187e58;
        }
    }
    ctx->pc = 0x187ADCu;
label_187adc:
    // 0x187adc: 0x0  nop
    ctx->pc = 0x187adcu;
    // NOP
    // 0x187ae0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x187ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ae4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x187ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x187ae8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x187ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187aec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x187AECu;
    {
        const bool branch_taken_0x187aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AECu;
        // 0x187af0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187aec) {
            ctx->pc = 0x187B38u;
            goto label_187b38;
        }
    }
    ctx->pc = 0x187AF4u;
label_187af4:
    // 0x187af4: 0x0  nop
    ctx->pc = 0x187af4u;
    // NOP
    // 0x187af8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x187af8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x187afc: 0x24c6f9e0  addiu       $a2, $a2, -0x620
    ctx->pc = 0x187afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965728));
    // 0x187b00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x187B00u;
    {
        const bool branch_taken_0x187b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B00u;
        // 0x187b04: 0x30e400ff  andi        $a0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b00) {
            ctx->pc = 0x187B18u;
            goto label_187b18;
        }
    }
    ctx->pc = 0x187B08u;
label_187b08:
    // 0x187b08: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x187b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x187b0c: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187B0Cu;
    {
        const bool branch_taken_0x187b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187b0c) {
            ctx->pc = 0x187B24u;
            goto label_187b24;
        }
    }
    ctx->pc = 0x187B14u;
    // 0x187b14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x187b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_187b18:
    // 0x187b18: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x187b18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187b1c: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187B1Cu;
    {
        const bool branch_taken_0x187b1c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x187b1c) {
            ctx->pc = 0x187B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187b08;
        }
    }
    ctx->pc = 0x187B24u;
label_187b24:
    // 0x187b24: 0x0  nop
    ctx->pc = 0x187b24u;
    // NOP
    // 0x187b28: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x187b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x187b2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187B2Cu;
    {
        const bool branch_taken_0x187b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b2c) {
            ctx->pc = 0x187B44u;
            goto label_187b44;
        }
    }
    ctx->pc = 0x187B34u;
    // 0x187b34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187b34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_187b38:
    // 0x187b38: 0x92470000  lbu         $a3, 0x0($s2)
    ctx->pc = 0x187b38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187b3c: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x187B3Cu;
    {
        const bool branch_taken_0x187b3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x187b3c) {
            ctx->pc = 0x187AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187af4;
        }
    }
    ctx->pc = 0x187B44u;
label_187b44:
    // 0x187b44: 0x0  nop
    ctx->pc = 0x187b44u;
    // NOP
    // 0x187b48: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x187b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x187b4c: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x187b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x187b50: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187B50u;
    {
        const bool branch_taken_0x187b50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x187b50) {
            ctx->pc = 0x187B64u;
            goto label_187b64;
        }
    }
    ctx->pc = 0x187B58u;
    // 0x187b58: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x187b58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x187b5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x187B5Cu;
    {
        const bool branch_taken_0x187b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B5Cu;
        // 0x187b60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b5c) {
            ctx->pc = 0x187BC0u;
            goto label_187bc0;
        }
    }
    ctx->pc = 0x187B64u;
label_187b64:
    // 0x187b64: 0x0  nop
    ctx->pc = 0x187b64u;
    // NOP
    // 0x187b68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x187B68u;
    {
        const bool branch_taken_0x187b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b68) {
            ctx->pc = 0x187BB0u;
            goto label_187bb0;
        }
    }
    ctx->pc = 0x187B70u;
label_187b70:
    // 0x187b70: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x187b70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x187b74: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x187b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x187b78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x187B78u;
    {
        const bool branch_taken_0x187b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B78u;
        // 0x187b7c: 0x24c6f9e8  addiu       $a2, $a2, -0x618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b78) {
            ctx->pc = 0x187B90u;
            goto label_187b90;
        }
    }
    ctx->pc = 0x187B80u;
label_187b80:
    // 0x187b80: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x187b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x187b84: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187B84u;
    {
        const bool branch_taken_0x187b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187b84) {
            ctx->pc = 0x187B9Cu;
            goto label_187b9c;
        }
    }
    ctx->pc = 0x187B8Cu;
    // 0x187b8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x187b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_187b90:
    // 0x187b90: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x187b90u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187b94: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187B94u;
    {
        const bool branch_taken_0x187b94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x187b94) {
            ctx->pc = 0x187B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187b80;
        }
    }
    ctx->pc = 0x187B9Cu;
label_187b9c:
    // 0x187b9c: 0x0  nop
    ctx->pc = 0x187b9cu;
    // NOP
    // 0x187ba0: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x187ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x187ba4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187BA4u;
    {
        const bool branch_taken_0x187ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ba4) {
            ctx->pc = 0x187BBCu;
            goto label_187bbc;
        }
    }
    ctx->pc = 0x187BACu;
    // 0x187bac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_187bb0:
    // 0x187bb0: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x187bb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187bb4: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x187BB4u;
    {
        const bool branch_taken_0x187bb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x187bb4) {
            ctx->pc = 0x187B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187b70;
        }
    }
    ctx->pc = 0x187BBCu;
label_187bbc:
    // 0x187bbc: 0x0  nop
    ctx->pc = 0x187bbcu;
    // NOP
label_187bc0:
    // 0x187bc0: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x187bc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187bc4: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x187bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x187bc8: 0x14a4001f  bne         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x187BC8u;
    {
        const bool branch_taken_0x187bc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x187bc8) {
            ctx->pc = 0x187C48u;
            goto label_187c48;
        }
    }
    ctx->pc = 0x187BD0u;
    // 0x187bd0: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x187bd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x187bd4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x187bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x187bd8: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187BD8u;
    {
        const bool branch_taken_0x187bd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x187bd8) {
            ctx->pc = 0x187BECu;
            goto label_187bec;
        }
    }
    ctx->pc = 0x187BE0u;
    // 0x187be0: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x187be0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x187be4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x187BE4u;
    {
        const bool branch_taken_0x187be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BE4u;
        // 0x187be8: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187be4) {
            ctx->pc = 0x187C48u;
            goto label_187c48;
        }
    }
    ctx->pc = 0x187BECu;
label_187bec:
    // 0x187bec: 0x0  nop
    ctx->pc = 0x187becu;
    // NOP
    // 0x187bf0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x187BF0u;
    {
        const bool branch_taken_0x187bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BF0u;
        // 0x187bf4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bf0) {
            ctx->pc = 0x187C38u;
            goto label_187c38;
        }
    }
    ctx->pc = 0x187BF8u;
label_187bf8:
    // 0x187bf8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x187bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x187bfc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x187bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x187c00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x187C00u;
    {
        const bool branch_taken_0x187c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C00u;
        // 0x187c04: 0x24c6f9e8  addiu       $a2, $a2, -0x618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c00) {
            ctx->pc = 0x187C18u;
            goto label_187c18;
        }
    }
    ctx->pc = 0x187C08u;
label_187c08:
    // 0x187c08: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x187c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x187c0c: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187C0Cu;
    {
        const bool branch_taken_0x187c0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187c0c) {
            ctx->pc = 0x187C24u;
            goto label_187c24;
        }
    }
    ctx->pc = 0x187C14u;
    // 0x187c14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x187c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_187c18:
    // 0x187c18: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x187c18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187c1c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187C1Cu;
    {
        const bool branch_taken_0x187c1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x187c1c) {
            ctx->pc = 0x187C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187c08;
        }
    }
    ctx->pc = 0x187C24u;
label_187c24:
    // 0x187c24: 0x0  nop
    ctx->pc = 0x187c24u;
    // NOP
    // 0x187c28: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x187c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x187c2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187C2Cu;
    {
        const bool branch_taken_0x187c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c2c) {
            ctx->pc = 0x187C44u;
            goto label_187c44;
        }
    }
    ctx->pc = 0x187C34u;
    // 0x187c34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_187c38:
    // 0x187c38: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x187c38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187c3c: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x187C3Cu;
    {
        const bool branch_taken_0x187c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x187c3c) {
            ctx->pc = 0x187BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187bf8;
        }
    }
    ctx->pc = 0x187C44u;
label_187c44:
    // 0x187c44: 0x0  nop
    ctx->pc = 0x187c44u;
    // NOP
label_187c48:
    // 0x187c48: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x187c48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187c4c: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x187c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x187c50: 0x10a4000c  beq         $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x187C50u;
    {
        const bool branch_taken_0x187c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C50u;
        // 0x187c54: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c50) {
            ctx->pc = 0x187C84u;
            goto label_187c84;
        }
    }
    ctx->pc = 0x187C58u;
    // 0x187c58: 0x10a4000a  beq         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x187C58u;
    {
        const bool branch_taken_0x187c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187c58) {
            ctx->pc = 0x187C84u;
            goto label_187c84;
        }
    }
    ctx->pc = 0x187C60u;
    // 0x187c60: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x187c64: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187C64u;
    {
        const bool branch_taken_0x187c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187c64) {
            ctx->pc = 0x187C74u;
            goto label_187c74;
        }
    }
    ctx->pc = 0x187C6Cu;
    // 0x187c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x187C6Cu;
    {
        const bool branch_taken_0x187c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c6c) {
            ctx->pc = 0x187C90u;
            goto label_187c90;
        }
    }
    ctx->pc = 0x187C74u;
label_187c74:
    // 0x187c74: 0x0  nop
    ctx->pc = 0x187c74u;
    // NOP
    // 0x187c78: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x187c78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x187c7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x187C7Cu;
    {
        const bool branch_taken_0x187c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C7Cu;
        // 0x187c80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c7c) {
            ctx->pc = 0x187C90u;
            goto label_187c90;
        }
    }
    ctx->pc = 0x187C84u;
label_187c84:
    // 0x187c84: 0x0  nop
    ctx->pc = 0x187c84u;
    // NOP
    // 0x187c88: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x187c88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x187c8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187c8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_187c90:
    // 0x187c90: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x187c90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187c94: 0x24040073  addiu       $a0, $zero, 0x73
    ctx->pc = 0x187c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x187c98: 0x10a40029  beq         $a1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x187C98u;
    {
        const bool branch_taken_0x187c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C98u;
        // 0x187c9c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c98) {
            ctx->pc = 0x187D40u;
            goto label_187d40;
        }
    }
    ctx->pc = 0x187CA0u;
    // 0x187ca0: 0x10a40024  beq         $a1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x187CA0u;
    {
        const bool branch_taken_0x187ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187ca0) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187CA8u;
    // 0x187ca8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x187ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x187cac: 0x10a40021  beq         $a1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x187CACu;
    {
        const bool branch_taken_0x187cac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CACu;
        // 0x187cb0: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cac) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187CB4u;
    // 0x187cb4: 0x10a4001f  beq         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x187CB4u;
    {
        const bool branch_taken_0x187cb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187cb4) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187CBCu;
    // 0x187cbc: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x187cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x187cc0: 0x10a4001c  beq         $a1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x187CC0u;
    {
        const bool branch_taken_0x187cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CC0u;
        // 0x187cc4: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cc0) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187CC8u;
    // 0x187cc8: 0x10a4001a  beq         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x187CC8u;
    {
        const bool branch_taken_0x187cc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187cc8) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187CD0u;
    // 0x187cd0: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x187cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x187cd4: 0x10a40017  beq         $a1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x187CD4u;
    {
        const bool branch_taken_0x187cd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CD4u;
        // 0x187cd8: 0x24040065  addiu       $a0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cd4) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187CDCu;
    // 0x187cdc: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x187CDCu;
    {
        const bool branch_taken_0x187cdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187cdc) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187CE4u;
    // 0x187ce4: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x187ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x187ce8: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x187CE8u;
    {
        const bool branch_taken_0x187ce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CE8u;
        // 0x187cec: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ce8) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187CF0u;
    // 0x187cf0: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x187CF0u;
    {
        const bool branch_taken_0x187cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187cf0) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187CF8u;
    // 0x187cf8: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x187cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x187cfc: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x187CFCu;
    {
        const bool branch_taken_0x187cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CFCu;
        // 0x187d00: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cfc) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187D04u;
    // 0x187d04: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x187D04u;
    {
        const bool branch_taken_0x187d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187d04) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187D0Cu;
    // 0x187d0c: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x187d10: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187D10u;
    {
        const bool branch_taken_0x187d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D10u;
        // 0x187d14: 0x24040069  addiu       $a0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d10) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187D18u;
    // 0x187d18: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187D18u;
    {
        const bool branch_taken_0x187d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187d18) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187D20u;
    // 0x187d20: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x187d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x187d24: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187D24u;
    {
        const bool branch_taken_0x187d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187d24) {
            ctx->pc = 0x187D34u;
            goto label_187d34;
        }
    }
    ctx->pc = 0x187D2Cu;
    // 0x187d2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x187D2Cu;
    {
        const bool branch_taken_0x187d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d2c) {
            ctx->pc = 0x187D4Cu;
            goto label_187d4c;
        }
    }
    ctx->pc = 0x187D34u;
label_187d34:
    // 0x187d34: 0x0  nop
    ctx->pc = 0x187d34u;
    // NOP
    // 0x187d38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x187D38u;
    {
        const bool branch_taken_0x187d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D38u;
        // 0x187d3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d38) {
            ctx->pc = 0x187D54u;
            goto label_187d54;
        }
    }
    ctx->pc = 0x187D40u;
label_187d40:
    // 0x187d40: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x187d40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x187d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187D44u;
    {
        const bool branch_taken_0x187d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D44u;
        // 0x187d48: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d44) {
            ctx->pc = 0x187D54u;
            goto label_187d54;
        }
    }
    ctx->pc = 0x187D4Cu;
label_187d4c:
    // 0x187d4c: 0x0  nop
    ctx->pc = 0x187d4cu;
    // NOP
    // 0x187d50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_187d54:
    // 0x187d54: 0x0  nop
    ctx->pc = 0x187d54u;
    // NOP
    // 0x187d58: 0x32040008  andi        $a0, $s0, 0x8
    ctx->pc = 0x187d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x187d5c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x187D5Cu;
    {
        const bool branch_taken_0x187d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D5Cu;
        // 0x187d60: 0x32040010  andi        $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d5c) {
            ctx->pc = 0x187DB0u;
            goto label_187db0;
        }
    }
    ctx->pc = 0x187D64u;
    // 0x187d64: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x187D64u;
    {
        const bool branch_taken_0x187d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d64) {
            ctx->pc = 0x187DB0u;
            goto label_187db0;
        }
    }
    ctx->pc = 0x187D6Cu;
    // 0x187d6c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x187d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x187d70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x187D70u;
    {
        const bool branch_taken_0x187d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D70u;
        // 0x187d74: 0x8e23fff8  lw          $v1, -0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d70) {
            ctx->pc = 0x187D8Cu;
            goto label_187d8c;
        }
    }
    ctx->pc = 0x187D78u;
label_187d78:
    // 0x187d78: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x187d78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x187d7c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x187d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x187d80: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x187d80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x187d84: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x187d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x187d88: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x187d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_187d8c:
    // 0x187d8c: 0x0  nop
    ctx->pc = 0x187d8cu;
    // NOP
    // 0x187d90: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x187d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187d94: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x187D94u;
    {
        const bool branch_taken_0x187d94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x187d94) {
            ctx->pc = 0x187D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187d78;
        }
    }
    ctx->pc = 0x187D9Cu;
    // 0x187d9c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x187d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x187da0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x187DA0u;
    {
        const bool branch_taken_0x187da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187da0) {
            ctx->pc = 0x187D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187d78;
        }
    }
    ctx->pc = 0x187DA8u;
    // 0x187da8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x187DA8u;
    {
        const bool branch_taken_0x187da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187da8) {
            ctx->pc = 0x187E58u;
            goto label_187e58;
        }
    }
    ctx->pc = 0x187DB0u;
label_187db0:
    // 0x187db0: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x187db0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x187db4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x187DB4u;
    {
        const bool branch_taken_0x187db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187db4) {
            ctx->pc = 0x187DD8u;
            goto label_187dd8;
        }
    }
    ctx->pc = 0x187DBCu;
label_187dbc:
    // 0x187dbc: 0x0  nop
    ctx->pc = 0x187dbcu;
    // NOP
    // 0x187dc0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x187dc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187dc4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x187dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x187dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x187dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x187dcc: 0x72202b  sltu        $a0, $v1, $s2
    ctx->pc = 0x187dccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x187dd0: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187DD0u;
    {
        const bool branch_taken_0x187dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DD0u;
        // 0x187dd4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187dd0) {
            ctx->pc = 0x187DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187dbc;
        }
    }
    ctx->pc = 0x187DD8u;
label_187dd8:
    // 0x187dd8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x187dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x187ddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187de0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x187de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x187de4: 0xc081798  jal         func_205E60
    ctx->pc = 0x187DE4u;
    SET_GPR_U32(ctx, 31, 0x187DECu);
    ctx->pc = 0x187DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DE4u;
    // 0x187de8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205E60u, 0x187DE4u, 0x187DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187DECu;
label_187dec:
    // 0x187dec: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x187decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x187df0: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x187df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x187df4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187DF4u;
    {
        const bool branch_taken_0x187df4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x187DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DF4u;
        // 0x187df8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187df4) {
            ctx->pc = 0x187E20u;
            goto label_187e20;
        }
    }
    ctx->pc = 0x187DFCu;
label_187dfc:
    // 0x187dfc: 0x0  nop
    ctx->pc = 0x187dfcu;
    // NOP
    // 0x187e00: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x187e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x187e04: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x187e04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x187e08: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x187e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x187e0c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x187e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x187e10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x187e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x187e14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x187e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x187e18: 0x1c40fff8  bgtz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x187E18u;
    {
        const bool branch_taken_0x187e18 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x187E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E18u;
        // 0x187e1c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e18) {
            ctx->pc = 0x187DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187dfc;
        }
    }
    ctx->pc = 0x187E20u;
label_187e20:
    // 0x187e20: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x187e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x187e24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x187E24u;
    {
        const bool branch_taken_0x187e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e24) {
            ctx->pc = 0x187E30u;
            goto label_187e30;
        }
    }
    ctx->pc = 0x187E2Cu;
    // 0x187e2c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x187e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_187e30:
    // 0x187e30: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x187e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x187e34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x187E34u;
    {
        const bool branch_taken_0x187e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e34) {
            ctx->pc = 0x187E40u;
            goto label_187e40;
        }
    }
    ctx->pc = 0x187E3Cu;
    // 0x187e3c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x187e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_187e40:
    // 0x187e40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x187E40u;
    {
        const bool branch_taken_0x187e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E40u;
        // 0x187e44: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e40) {
            ctx->pc = 0x187E58u;
            goto label_187e58;
        }
    }
    ctx->pc = 0x187E48u;
label_187e48:
    // 0x187e48: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x187e48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x187e4c: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x187e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x187e50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x187e54: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x187e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_187e58:
    // 0x187e58: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x187e58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187e5c: 0x1480ff14  bnez        $a0, . + 4 + (-0xEC << 2)
    ctx->pc = 0x187E5Cu;
    {
        const bool branch_taken_0x187e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E5Cu;
        // 0x187e60: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e5c) {
            ctx->pc = 0x187AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187ab0;
        }
    }
    ctx->pc = 0x187E64u;
    // 0x187e64: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x187e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x187e68: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x187e68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x187e6c: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x187e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x187e70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187E70u;
    {
        const bool branch_taken_0x187e70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x187E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E70u;
        // 0x187e74: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e70) {
            ctx->pc = 0x187E80u;
            goto label_187e80;
        }
    }
    ctx->pc = 0x187E78u;
    // 0x187e78: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x187e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x187e7c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x187e7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_187e80:
    // 0x187e80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x187e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187e84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x187e84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187e88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x187e88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187e8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187e98: 0x3e00008  jr          $ra
    ctx->pc = 0x187E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E98u;
        // 0x187e9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187EA0u;
}
