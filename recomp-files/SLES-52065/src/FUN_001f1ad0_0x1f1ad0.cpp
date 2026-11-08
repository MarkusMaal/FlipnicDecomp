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

// Function: FUN_001f1ad0
// Address: 0x1f1ad0 - 0x1f1d3c
void FUN_001f1ad0_0x1f1ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1ad0_0x1f1ad0");
#endif

    switch (ctx->pc) {
        case 0x1f1b20u: goto label_1f1b20;
        case 0x1f1b38u: goto label_1f1b38;
        case 0x1f1b58u: goto label_1f1b58;
        case 0x1f1bb0u: goto label_1f1bb0;
        case 0x1f1bf0u: goto label_1f1bf0;
        case 0x1f1c10u: goto label_1f1c10;
        case 0x1f1c6cu: goto label_1f1c6c;
        case 0x1f1c8cu: goto label_1f1c8c;
        case 0x1f1cb4u: goto label_1f1cb4;
        case 0x1f1cc4u: goto label_1f1cc4;
        case 0x1f1cccu: goto label_1f1ccc;
        case 0x1f1ce0u: goto label_1f1ce0;
        case 0x1f1cf0u: goto label_1f1cf0;
        case 0x1f1d00u: goto label_1f1d00;
        case 0x1f1d08u: goto label_1f1d08;
        default: break;
    }

    ctx->pc = 0x1f1ad0u;

    // 0x1f1ad0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f1ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1f1ad4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f1ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f1ad8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1f1ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1f1adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ae0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f1ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f1ae4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1f1ae4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ae8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f1ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f1aec: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f1aecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1af0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f1af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f1af4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f1af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1af8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1f1af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1f1afc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1f1afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b00: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f1b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f1b04: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1f1b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f1b08: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1f1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1f1b0c: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f1b0cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1f1b10: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f1b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f1b14: 0x27d2e200  addiu       $s2, $fp, -0x1E00
    ctx->pc = 0x1f1b14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959616));
    // 0x1f1b18: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F1B18u;
    SET_GPR_U32(ctx, 31, 0x1F1B20u);
    ctx->pc = 0x1F1B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B18u;
    // 0x1f1b1c: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F1B18u, 0x1F1B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B20u;
label_1f1b20:
    // 0x1f1b20: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f1b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f1b24: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1f1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f1b28: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1B28u;
    {
        const bool branch_taken_0x1f1b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1b28) {
            ctx->pc = 0x1F1B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1B28u;
            // 0x1f1b2c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B3Cu;
            goto label_1f1b3c;
        }
    }
    ctx->pc = 0x1F1B30u;
    // 0x1f1b30: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F1B30u;
    SET_GPR_U32(ctx, 31, 0x1F1B38u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F1B30u, 0x1F1B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B38u;
label_1f1b38:
    // 0x1f1b38: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f1b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1f1b3c:
    // 0x1f1b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b40: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f1b44: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1B44u;
    {
        const bool branch_taken_0x1f1b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B44u;
        // 0x1f1b48: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b44) {
            ctx->pc = 0x1F1B84u;
            goto label_1f1b84;
        }
    }
    ctx->pc = 0x1F1B4Cu;
    // 0x1f1b4c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1f1b4cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1f1b50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f1b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f1b54: 0x0  nop
    ctx->pc = 0x1f1b54u;
    // NOP
label_1f1b58:
    // 0x1f1b58: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f1b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f1b5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1B5Cu;
    {
        const bool branch_taken_0x1f1b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B5Cu;
        // 0x1f1b60: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b5c) {
            ctx->pc = 0x1F1B88u;
            goto label_1f1b88;
        }
    }
    ctx->pc = 0x1F1B64u;
    // 0x1f1b64: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1f1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f1b68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f1b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1b6c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1f1b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1b70: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f1b74: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F1B74u;
    {
        const bool branch_taken_0x1f1b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1b74) {
            ctx->pc = 0x1F1B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1B74u;
            // 0x1f1b78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1b58;
        }
    }
    ctx->pc = 0x1F1B7Cu;
    // 0x1f1b7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1B7Cu;
    {
        const bool branch_taken_0x1f1b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B7Cu;
        // 0x1f1b80: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b7c) {
            ctx->pc = 0x1F1B8Cu;
            goto label_1f1b8c;
        }
    }
    ctx->pc = 0x1F1B84u;
label_1f1b84:
    // 0x1f1b84: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1f1b84u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1f1b88:
    // 0x1f1b88: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f1b8c:
    // 0x1f1b8c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1B8Cu;
    {
        const bool branch_taken_0x1f1b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1b8c) {
            ctx->pc = 0x1F1B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1B8Cu;
            // 0x1f1b90: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B94u;
            goto label_1f1b94;
        }
    }
    ctx->pc = 0x1F1B94u;
label_1f1b94:
    // 0x1f1b94: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x1f1b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f1b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b9c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f1b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f1ba0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1BA0u;
    {
        const bool branch_taken_0x1f1ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BA0u;
        // 0x1f1ba4: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ba0) {
            ctx->pc = 0x1F1BD4u;
            goto label_1f1bd4;
        }
    }
    ctx->pc = 0x1F1BA8u;
    // 0x1f1ba8: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1f1ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1f1bac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f1bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f1bb0:
    // 0x1f1bb0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f1bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f1bb4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1BB4u;
    {
        const bool branch_taken_0x1f1bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BB4u;
        // 0x1f1bb8: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bb4) {
            ctx->pc = 0x1F1BD4u;
            goto label_1f1bd4;
        }
    }
    ctx->pc = 0x1F1BBCu;
    // 0x1f1bbc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f1bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f1bc0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f1bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1bc4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f1bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1bc8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f1bcc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F1BCCu;
    {
        const bool branch_taken_0x1f1bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1bcc) {
            ctx->pc = 0x1F1BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1BCCu;
            // 0x1f1bd0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1bb0;
        }
    }
    ctx->pc = 0x1F1BD4u;
label_1f1bd4:
    // 0x1f1bd4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1f1bd8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1BD8u;
    {
        const bool branch_taken_0x1f1bd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1bd8) {
            ctx->pc = 0x1F1BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1BD8u;
            // 0x1f1bdc: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1BE0u;
            goto label_1f1be0;
        }
    }
    ctx->pc = 0x1F1BE0u;
label_1f1be0:
    // 0x1f1be0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1BE0u;
    {
        const bool branch_taken_0x1f1be0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1be0) {
            ctx->pc = 0x1F1BF8u;
            goto label_1f1bf8;
        }
    }
    ctx->pc = 0x1F1BE8u;
    // 0x1f1be8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1BE8u;
    SET_GPR_U32(ctx, 31, 0x1F1BF0u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1BE8u, 0x1F1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BF0u;
label_1f1bf0:
    // 0x1f1bf0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1F1BF0u;
    {
        const bool branch_taken_0x1f1bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BF0u;
        // 0x1f1bf4: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bf0) {
            ctx->pc = 0x1F1D0Cu;
            goto label_1f1d0c;
        }
    }
    ctx->pc = 0x1F1BF8u;
label_1f1bf8:
    // 0x1f1bf8: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1BF8u;
    {
        const bool branch_taken_0x1f1bf8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1F1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BF8u;
        // 0x1f1bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bf8) {
            ctx->pc = 0x1F1C38u;
            goto label_1f1c38;
        }
    }
    ctx->pc = 0x1F1C00u;
    // 0x1f1c00: 0x2646080c  addiu       $a2, $s2, 0x80C
    ctx->pc = 0x1f1c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2060));
    // 0x1f1c04: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f1c04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1c08: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1c08u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f1c0c: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f1c0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_1f1c10:
    // 0x1f1c10: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x1f1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x1f1c14: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f1c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f1c18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f1c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1c1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f1c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f1c20: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1f1c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f1c24: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f1c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1c28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F1C28u;
    {
        const bool branch_taken_0x1f1c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c28) {
            ctx->pc = 0x1F1C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1c10;
        }
    }
    ctx->pc = 0x1F1C30u;
    // 0x1f1c30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1C30u;
    {
        const bool branch_taken_0x1f1c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C30u;
        // 0x1f1c34: 0xae510c10  sw          $s1, 0xC10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c30) {
            ctx->pc = 0x1F1C48u;
            goto label_1f1c48;
        }
    }
    ctx->pc = 0x1F1C38u;
label_1f1c38:
    // 0x1f1c38: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f1c38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1c3c: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1c3cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f1c40: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f1c40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f1c44: 0xae510c10  sw          $s1, 0xC10($s2)
    ctx->pc = 0x1f1c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
label_1f1c48:
    // 0x1f1c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1c4c: 0xae570c0c  sw          $s7, 0xC0C($s2)
    ctx->pc = 0x1f1c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
    // 0x1f1c50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1c54: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f1c58: 0x27d0e200  addiu       $s0, $fp, -0x1E00
    ctx->pc = 0x1f1c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959616));
    // 0x1f1c5c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1c60: 0x2694ee40  addiu       $s4, $s4, -0x11C0
    ctx->pc = 0x1f1c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1f1c64: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1C64u;
    SET_GPR_U32(ctx, 31, 0x1F1C6Cu);
    ctx->pc = 0x1F1C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C64u;
    // 0x1f1c68: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1C64u, 0x1F1C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C6Cu;
label_1f1c6c:
    // 0x1f1c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1c78: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f1c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f1c7c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f1c80: 0x24050c14  addiu       $a1, $zero, 0xC14
    ctx->pc = 0x1f1c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x1f1c84: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F1C84u;
    SET_GPR_U32(ctx, 31, 0x1F1C8Cu);
    ctx->pc = 0x1F1C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C84u;
    // 0x1f1c88: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F1C84u, 0x1F1C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C8Cu;
label_1f1c8c:
    // 0x1f1c8c: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f1c90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f1c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c94: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1c98: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1f1c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f1c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ca0: 0x24080c14  addiu       $t0, $zero, 0xC14
    ctx->pc = 0x1f1ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x1f1ca4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f1ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ca8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f1ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1cac: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1CACu;
    SET_GPR_U32(ctx, 31, 0x1F1CB4u);
    ctx->pc = 0x1F1CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CACu;
    // 0x1f1cb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1CACu, 0x1F1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CB4u;
label_1f1cb4:
    // 0x1f1cb4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1CB4u;
    {
        const bool branch_taken_0x1f1cb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CB4u;
        // 0x1f1cb8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cb4) {
            ctx->pc = 0x1F1CD4u;
            goto label_1f1cd4;
        }
    }
    ctx->pc = 0x1F1CBCu;
    // 0x1f1cbc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1CBCu;
    SET_GPR_U32(ctx, 31, 0x1F1CC4u);
    ctx->pc = 0x1F1CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CBCu;
    // 0x1f1cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1CBCu, 0x1F1CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CC4u;
label_1f1cc4:
    // 0x1f1cc4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1CC4u;
    SET_GPR_U32(ctx, 31, 0x1F1CCCu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1CC4u, 0x1F1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CCCu;
label_1f1ccc:
    // 0x1f1ccc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F1CCCu;
    {
        const bool branch_taken_0x1f1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CCCu;
        // 0x1f1cd0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ccc) {
            ctx->pc = 0x1F1D0Cu;
            goto label_1f1d0c;
        }
    }
    ctx->pc = 0x1F1CD4u;
label_1f1cd4:
    // 0x1f1cd4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f1cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f1cd8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1CD8u;
    SET_GPR_U32(ctx, 31, 0x1F1CE0u);
    ctx->pc = 0x1F1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CD8u;
    // 0x1f1cdc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1CD8u, 0x1F1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CE0u;
label_1f1ce0:
    // 0x1f1ce0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1CE0u;
    {
        const bool branch_taken_0x1f1ce0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ce0) {
            ctx->pc = 0x1F1CF8u;
            goto label_1f1cf8;
        }
    }
    ctx->pc = 0x1F1CE8u;
    // 0x1f1ce8: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1CE8u;
    SET_GPR_U32(ctx, 31, 0x1F1CF0u);
    ctx->pc = 0x1F1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CE8u;
    // 0x1f1cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1CE8u, 0x1F1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CF0u;
label_1f1cf0:
    // 0x1f1cf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1CF0u;
    {
        const bool branch_taken_0x1f1cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CF0u;
        // 0x1f1cf4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cf0) {
            ctx->pc = 0x1F1D0Cu;
            goto label_1f1d0c;
        }
    }
    ctx->pc = 0x1F1CF8u;
label_1f1cf8:
    // 0x1f1cf8: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1CF8u;
    SET_GPR_U32(ctx, 31, 0x1F1D00u);
    ctx->pc = 0x1F1CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CF8u;
    // 0x1f1cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1CF8u, 0x1F1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D00u;
label_1f1d00:
    // 0x1f1d00: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1D00u;
    SET_GPR_U32(ctx, 31, 0x1F1D08u);
    ctx->pc = 0x1F1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D00u;
    // 0x1f1d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1D00u, 0x1F1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D08u;
label_1f1d08:
    // 0x1f1d08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1d0c:
    // 0x1f1d0c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1f1d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f1d10: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1f1d10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f1d14: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f1d14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f1d18: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f1d18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1d1c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f1d1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f1d20: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f1d20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f1d24: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f1d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f1d28: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f1d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f1d2c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f1d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f1d30: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f1d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1d34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D34u;
        // 0x1f1d38: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1D3Cu;
}
