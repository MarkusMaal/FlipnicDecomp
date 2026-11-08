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

// Function: FUN_0018aee0
// Address: 0x18aee0 - 0x18b034
void FUN_0018aee0_0x18aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018aee0_0x18aee0");
#endif

    switch (ctx->pc) {
        case 0x18af24u: goto label_18af24;
        case 0x18af3cu: goto label_18af3c;
        case 0x18af50u: goto label_18af50;
        case 0x18af5cu: goto label_18af5c;
        case 0x18af7cu: goto label_18af7c;
        case 0x18afa4u: goto label_18afa4;
        case 0x18afd0u: goto label_18afd0;
        case 0x18aff0u: goto label_18aff0;
        default: break;
    }

    ctx->pc = 0x18aee0u;

    // 0x18aee0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18aee4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18aee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aee8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18aee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18aeec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18aef0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18aef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18aef4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18aef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18aef8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18aef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aefc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18aefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18af00: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18af00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18af04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18af08: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18af08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18af0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18af10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18af10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18af14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18af18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18af18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af1c: 0x141240  sll         $v0, $s4, 9
    ctx->pc = 0x18af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 9));
    // 0x18af20: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x18af20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_18af24:
    // 0x18af24: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x18af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18af28: 0x80420acc  lb          $v0, 0xACC($v0)
    ctx->pc = 0x18af28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2764)));
    // 0x18af2c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x18AF2Cu;
    {
        const bool branch_taken_0x18af2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF2Cu;
        // 0x18af30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af2c) {
            ctx->pc = 0x18AFF8u;
            goto label_18aff8;
        }
    }
    ctx->pc = 0x18AF34u;
    // 0x18af34: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x18AF34u;
    SET_GPR_U32(ctx, 31, 0x18AF3Cu);
    ctx->pc = 0x18AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF34u;
    // 0x18af38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x18AF34u, 0x18AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF3Cu;
label_18af3c:
    // 0x18af3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18af3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af40: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AF40u;
    {
        const bool branch_taken_0x18af40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF40u;
        // 0x18af44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af40) {
            ctx->pc = 0x18AF54u;
            goto label_18af54;
        }
    }
    ctx->pc = 0x18AF48u;
    // 0x18af48: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18AF48u;
    {
        const bool branch_taken_0x18af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF48u;
        // 0x18af4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af48) {
            ctx->pc = 0x18B00Cu;
            goto label_18b00c;
        }
    }
    ctx->pc = 0x18AF50u;
label_18af50:
    // 0x18af50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18af50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18af54:
    // 0x18af54: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x18AF54u;
    SET_GPR_U32(ctx, 31, 0x18AF5Cu);
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x18AF54u, 0x18AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF5Cu;
label_18af5c:
    // 0x18af5c: 0x0  nop
    ctx->pc = 0x18af5cu;
    // NOP
    // 0x18af60: 0x0  nop
    ctx->pc = 0x18af60u;
    // NOP
    // 0x18af64: 0x0  nop
    ctx->pc = 0x18af64u;
    // NOP
    // 0x18af68: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18AF68u;
    {
        const bool branch_taken_0x18af68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af68) {
            ctx->pc = 0x18AF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18af50;
        }
    }
    ctx->pc = 0x18AF70u;
    // 0x18af70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af74: 0xc047988  jal         func_11E620
    ctx->pc = 0x18AF74u;
    SET_GPR_U32(ctx, 31, 0x18AF7Cu);
    ctx->pc = 0x18AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF74u;
    // 0x18af78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x18AF74u, 0x18AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF7Cu;
label_18af7c:
    // 0x18af7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AF7Cu;
    {
        const bool branch_taken_0x18af7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af7c) {
            ctx->pc = 0x18AF8Cu;
            goto label_18af8c;
        }
    }
    ctx->pc = 0x18AF84u;
    // 0x18af84: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18AF84u;
    {
        const bool branch_taken_0x18af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF84u;
        // 0x18af88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af84) {
            ctx->pc = 0x18B00Cu;
            goto label_18b00c;
        }
    }
    ctx->pc = 0x18AF8Cu;
label_18af8c:
    // 0x18af8c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x18af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x18af90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18af90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af94: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x18af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18af98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18af98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18af9c: 0xc077c22  jal         func_1DF088
    ctx->pc = 0x18AF9Cu;
    SET_GPR_U32(ctx, 31, 0x18AFA4u);
    ctx->pc = 0x18AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF9Cu;
    // 0x18afa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF088u, 0x18AF9Cu, 0x18AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFA4u;
label_18afa4:
    // 0x18afa4: 0x14a140  sll         $s4, $s4, 5
    ctx->pc = 0x18afa4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x18afa8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18afa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afac: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x18afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x18afb0: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x18afb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18afb4: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x18afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x18afb8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x18afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x18afbc: 0xac822acc  sw          $v0, 0x2ACC($a0)
    ctx->pc = 0x18afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10956), GPR_U32(ctx, 2));
    // 0x18afc0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18afc4: 0x24902acc  addiu       $s0, $a0, 0x2ACC
    ctx->pc = 0x18afc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 10956));
    // 0x18afc8: 0xc080702  jal         func_201C08
    ctx->pc = 0x18AFC8u;
    SET_GPR_U32(ctx, 31, 0x18AFD0u);
    ctx->pc = 0x18AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFC8u;
    // 0x18afcc: 0x24640acc  addiu       $a0, $v1, 0xACC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2764));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x18AFC8u, 0x18AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFD0u;
label_18afd0:
    // 0x18afd0: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x18afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x18afd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18afd8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x18afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18afdc: 0xac5308cc  sw          $s3, 0x8CC($v0)
    ctx->pc = 0x18afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2252), GPR_U32(ctx, 19));
    // 0x18afe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18afe4: 0x8f8680d8  lw          $a2, -0x7F28($gp)
    ctx->pc = 0x18afe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934744)));
    // 0x18afe8: 0xc077dd8  jal         func_1DF760
    ctx->pc = 0x18AFE8u;
    SET_GPR_U32(ctx, 31, 0x18AFF0u);
    ctx->pc = 0x18AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFE8u;
    // 0x18afec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF760u, 0x18AFE8u, 0x18AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFF0u;
label_18aff0:
    // 0x18aff0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18AFF0u;
    {
        const bool branch_taken_0x18aff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFF0u;
        // 0x18aff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aff0) {
            ctx->pc = 0x18B00Cu;
            goto label_18b00c;
        }
    }
    ctx->pc = 0x18AFF8u;
label_18aff8:
    // 0x18aff8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18aff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18affc: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x18affcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b000: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x18B000u;
    {
        const bool branch_taken_0x18b000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B000u;
        // 0x18b004: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b000) {
            ctx->pc = 0x18AF24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18af24;
        }
    }
    ctx->pc = 0x18B008u;
    // 0x18b008: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b00c:
    // 0x18b00c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18b00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b010: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18b010u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b014: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b018: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b018u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b01c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b01cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b020: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b02c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B02Cu;
        // 0x18b030: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B034u;
}
