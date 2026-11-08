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

// Function: FUN_001f0a40
// Address: 0x1f0a40 - 0x1f0bec
void FUN_001f0a40_0x1f0a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0a40_0x1f0a40");
#endif

    switch (ctx->pc) {
        case 0x1f0a80u: goto label_1f0a80;
        case 0x1f0a98u: goto label_1f0a98;
        case 0x1f0ac0u: goto label_1f0ac0;
        case 0x1f0b2cu: goto label_1f0b2c;
        case 0x1f0b68u: goto label_1f0b68;
        case 0x1f0b78u: goto label_1f0b78;
        case 0x1f0b80u: goto label_1f0b80;
        case 0x1f0b94u: goto label_1f0b94;
        case 0x1f0ba4u: goto label_1f0ba4;
        case 0x1f0bb4u: goto label_1f0bb4;
        case 0x1f0bbcu: goto label_1f0bbc;
        default: break;
    }

    ctx->pc = 0x1f0a40u;

    // 0x1f0a40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f0a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f0a44: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f0a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f0a48: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f0a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f0a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f0a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a50: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1f0a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1f0a54: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1f0a54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a58: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f0a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f0a5c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1f0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f0a60: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1f0a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1f0a64: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x1f0a64u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
    // 0x1f0a68: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f0a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f0a6c: 0x26f2e200  addiu       $s2, $s7, -0x1E00
    ctx->pc = 0x1f0a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f0a70: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f0a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f0a74: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f0a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f0a78: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F0A78u;
    SET_GPR_U32(ctx, 31, 0x1F0A80u);
    ctx->pc = 0x1F0A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A78u;
    // 0x1f0a7c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F0A78u, 0x1F0A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A80u;
label_1f0a80:
    // 0x1f0a80: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f0a84: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f0a84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f0a88: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0A88u;
    {
        const bool branch_taken_0x1f0a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0a88) {
            ctx->pc = 0x1F0A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0A88u;
            // 0x1f0a8c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0A9Cu;
            goto label_1f0a9c;
        }
    }
    ctx->pc = 0x1F0A90u;
    // 0x1f0a90: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F0A90u;
    SET_GPR_U32(ctx, 31, 0x1F0A98u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F0A90u, 0x1F0A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A98u;
label_1f0a98:
    // 0x1f0a98: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f0a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1f0a9c:
    // 0x1f0a9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0aa0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f0aa4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0AA4u;
    {
        const bool branch_taken_0x1f0aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AA4u;
        // 0x1f0aa8: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0aa4) {
            ctx->pc = 0x1F0AECu;
            goto label_1f0aec;
        }
    }
    ctx->pc = 0x1F0AACu;
    // 0x1f0aac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f0aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0ab0: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0ab0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f0ab4: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f0ab4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f0ab8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f0ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f0abc: 0x0  nop
    ctx->pc = 0x1f0abcu;
    // NOP
label_1f0ac0:
    // 0x1f0ac0: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1f0ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f0ac4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F0AC4u;
    {
        const bool branch_taken_0x1f0ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AC4u;
        // 0x1f0ac8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ac4) {
            ctx->pc = 0x1F0AF8u;
            goto label_1f0af8;
        }
    }
    ctx->pc = 0x1F0ACCu;
    // 0x1f0acc: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1f0accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f0ad0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0ad4: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x1f0ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0ad8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f0adc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0ADCu;
    {
        const bool branch_taken_0x1f0adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0adc) {
            ctx->pc = 0x1F0AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0ADCu;
            // 0x1f0ae0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0ac0;
        }
    }
    ctx->pc = 0x1F0AE4u;
    // 0x1f0ae4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0AE4u;
    {
        const bool branch_taken_0x1f0ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AE4u;
        // 0x1f0ae8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ae4) {
            ctx->pc = 0x1F0AFCu;
            goto label_1f0afc;
        }
    }
    ctx->pc = 0x1F0AECu;
label_1f0aec:
    // 0x1f0aec: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f0aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0af0: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0af0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f0af4: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f0af4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_1f0af8:
    // 0x1f0af8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f0afc:
    // 0x1f0afc: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0AFCu;
    {
        const bool branch_taken_0x1f0afc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0afc) {
            ctx->pc = 0x1F0B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0AFCu;
            // 0x1f0b00: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B10u;
            goto label_1f0b10;
        }
    }
    ctx->pc = 0x1F0B04u;
    // 0x1f0b04: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1f0b04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0b08: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1f0b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f0b0c: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1f0b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_1f0b10:
    // 0x1f0b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0b14: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f0b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f0b18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0b1c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f0b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f0b20: 0x2694ee40  addiu       $s4, $s4, -0x11C0
    ctx->pc = 0x1f0b20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1f0b24: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F0B24u;
    SET_GPR_U32(ctx, 31, 0x1F0B2Cu);
    ctx->pc = 0x1F0B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B24u;
    // 0x1f0b28: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F0B24u, 0x1F0B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B2Cu;
label_1f0b2c:
    // 0x1f0b2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b30: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f0b30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f0b34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0b38: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f0b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f0b3c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f0b40: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f0b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f0b44: 0x26e7e200  addiu       $a3, $s7, -0x1E00
    ctx->pc = 0x1f0b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f0b48: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1f0b48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x1f0b4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0b50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f0b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f0b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b58: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f0b58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b5c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f0b5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0b60: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F0B60u;
    SET_GPR_U32(ctx, 31, 0x1F0B68u);
    ctx->pc = 0x1F0B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B60u;
    // 0x1f0b64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F0B60u, 0x1F0B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B68u;
label_1f0b68:
    // 0x1f0b68: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0B68u;
    {
        const bool branch_taken_0x1f0b68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B68u;
        // 0x1f0b6c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b68) {
            ctx->pc = 0x1F0B88u;
            goto label_1f0b88;
        }
    }
    ctx->pc = 0x1F0B70u;
    // 0x1f0b70: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0B70u;
    SET_GPR_U32(ctx, 31, 0x1F0B78u);
    ctx->pc = 0x1F0B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B70u;
    // 0x1f0b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0B70u, 0x1F0B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B78u;
label_1f0b78:
    // 0x1f0b78: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0B78u;
    SET_GPR_U32(ctx, 31, 0x1F0B80u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0B78u, 0x1F0B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B80u;
label_1f0b80:
    // 0x1f0b80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F0B80u;
    {
        const bool branch_taken_0x1f0b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B80u;
        // 0x1f0b84: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b80) {
            ctx->pc = 0x1F0BC0u;
            goto label_1f0bc0;
        }
    }
    ctx->pc = 0x1F0B88u;
label_1f0b88:
    // 0x1f0b88: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f0b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f0b8c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F0B94u);
    ctx->pc = 0x1F0B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B8Cu;
    // 0x1f0b90: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0B8Cu, 0x1F0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B94u;
label_1f0b94:
    // 0x1f0b94: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0B94u;
    {
        const bool branch_taken_0x1f0b94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b94) {
            ctx->pc = 0x1F0BACu;
            goto label_1f0bac;
        }
    }
    ctx->pc = 0x1F0B9Cu;
    // 0x1f0b9c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0B9Cu;
    SET_GPR_U32(ctx, 31, 0x1F0BA4u);
    ctx->pc = 0x1F0BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B9Cu;
    // 0x1f0ba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0B9Cu, 0x1F0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BA4u;
label_1f0ba4:
    // 0x1f0ba4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0BA4u;
    {
        const bool branch_taken_0x1f0ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BA4u;
        // 0x1f0ba8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ba4) {
            ctx->pc = 0x1F0BC0u;
            goto label_1f0bc0;
        }
    }
    ctx->pc = 0x1F0BACu;
label_1f0bac:
    // 0x1f0bac: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F0BACu;
    SET_GPR_U32(ctx, 31, 0x1F0BB4u);
    ctx->pc = 0x1F0BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0BACu;
    // 0x1f0bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F0BACu, 0x1F0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BB4u;
label_1f0bb4:
    // 0x1f0bb4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0BB4u;
    SET_GPR_U32(ctx, 31, 0x1F0BBCu);
    ctx->pc = 0x1F0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0BB4u;
    // 0x1f0bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0BB4u, 0x1F0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BBCu;
label_1f0bbc:
    // 0x1f0bbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0bc0:
    // 0x1f0bc0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1f0bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f0bc4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f0bc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f0bc8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f0bc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0bcc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f0bccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0bd0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f0bd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0bd4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f0bd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0bd8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f0bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0bdc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f0bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0be0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0be4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BE4u;
        // 0x1f0be8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0BECu;
}
