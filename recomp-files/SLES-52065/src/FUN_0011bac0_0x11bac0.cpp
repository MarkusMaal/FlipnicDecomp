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

// Function: FUN_0011bac0
// Address: 0x11bac0 - 0x11bbf0
void FUN_0011bac0_0x11bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011bac0_0x11bac0");
#endif

    switch (ctx->pc) {
        case 0x11bad8u: goto label_11bad8;
        case 0x11bae4u: goto label_11bae4;
        case 0x11baf0u: goto label_11baf0;
        case 0x11baf4u: goto label_11baf4;
        case 0x11bafcu: goto label_11bafc;
        case 0x11bb38u: goto label_11bb38;
        case 0x11bb44u: goto label_11bb44;
        case 0x11bb5cu: goto label_11bb5c;
        case 0x11bb70u: goto label_11bb70;
        case 0x11bb94u: goto label_11bb94;
        case 0x11bba4u: goto label_11bba4;
        case 0x11bbb4u: goto label_11bbb4;
        case 0x11bbc4u: goto label_11bbc4;
        case 0x11bbd8u: goto label_11bbd8;
        default: break;
    }

    ctx->pc = 0x11bac0u;

    // 0x11bac0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x11bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x11bac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11bac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11bacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11baccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11bad0: 0xc046efc  jal         func_11BBF0
    ctx->pc = 0x11BAD0u;
    SET_GPR_U32(ctx, 31, 0x11BAD8u);
    ctx->pc = 0x11BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAD0u;
    // 0x11bad4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BBF0u, 0x11BAD0u, 0x11BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAD8u;
label_11bad8:
    // 0x11bad8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11badc: 0xc080702  jal         func_201C08
    ctx->pc = 0x11BADCu;
    SET_GPR_U32(ctx, 31, 0x11BAE4u);
    ctx->pc = 0x11BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BADCu;
    // 0x11bae0: 0x26050104  addiu       $a1, $s0, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11BADCu, 0x11BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAE4u;
label_11bae4:
    // 0x11bae4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11bae8: 0xc080664  jal         func_201990
    ctx->pc = 0x11BAE8u;
    SET_GPR_U32(ctx, 31, 0x11BAF0u);
    ctx->pc = 0x11BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAE8u;
    // 0x11baec: 0x26050264  addiu       $a1, $s0, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11BAE8u, 0x11BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAF0u;
label_11baf0:
    // 0x11baf0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11baf4:
    // 0x11baf4: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11BAF4u;
    SET_GPR_U32(ctx, 31, 0x11BAFCu);
    ctx->pc = 0x11BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAF4u;
    // 0x11baf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11BAF4u, 0x11BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAFCu;
label_11bafc:
    // 0x11bafc: 0xae020530  sw          $v0, 0x530($s0)
    ctx->pc = 0x11bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 2));
    // 0x11bb00: 0x8e030530  lw          $v1, 0x530($s0)
    ctx->pc = 0x11bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x11bb04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x11bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x11bb08: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x11bb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x11bb0c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BB0Cu;
    {
        const bool branch_taken_0x11bb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11bb0c) {
            ctx->pc = 0x11BB20u;
            goto label_11bb20;
        }
    }
    ctx->pc = 0x11BB14u;
    // 0x11bb14: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x11bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x11bb18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB18u;
    {
        const bool branch_taken_0x11bb18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11bb18) {
            ctx->pc = 0x11BB28u;
            goto label_11bb28;
        }
    }
    ctx->pc = 0x11BB20u;
label_11bb20:
    // 0x11bb20: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11BB20u;
    {
        const bool branch_taken_0x11bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB20u;
        // 0x11bb24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb20) {
            ctx->pc = 0x11BBDCu;
            goto label_11bbdc;
        }
    }
    ctx->pc = 0x11BB28u;
label_11bb28:
    // 0x11bb28: 0x460fff2  bltz        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11BB28u;
    {
        const bool branch_taken_0x11bb28 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x11BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB28u;
        // 0x11bb2c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb28) {
            ctx->pc = 0x11BAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11baf4;
        }
    }
    ctx->pc = 0x11BB30u;
    // 0x11bb30: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11BB30u;
    SET_GPR_U32(ctx, 31, 0x11BB38u);
    ctx->pc = 0x11BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB30u;
    // 0x11bb34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11BB30u, 0x11BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB38u;
label_11bb38:
    // 0x11bb38: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bb3c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11BB3Cu;
    SET_GPR_U32(ctx, 31, 0x11BB44u);
    ctx->pc = 0x11BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB3Cu;
    // 0x11bb40: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11BB3Cu, 0x11BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB44u;
label_11bb44:
    // 0x11bb44: 0xae020524  sw          $v0, 0x524($s0)
    ctx->pc = 0x11bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 2));
    // 0x11bb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb4c: 0x8e060524  lw          $a2, 0x524($s0)
    ctx->pc = 0x11bb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x11bb50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb54: 0xc047948  jal         func_11E520
    ctx->pc = 0x11BB54u;
    SET_GPR_U32(ctx, 31, 0x11BB5Cu);
    ctx->pc = 0x11BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB54u;
    // 0x11bb58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E520u, 0x11BB54u, 0x11BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB5Cu;
label_11bb5c:
    // 0x11bb5c: 0x8e050524  lw          $a1, 0x524($s0)
    ctx->pc = 0x11bb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x11bb60: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11bb60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11bb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb68: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11BB68u;
    SET_GPR_U32(ctx, 31, 0x11BB70u);
    ctx->pc = 0x11BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB68u;
    // 0x11bb6c: 0x24c6e750  addiu       $a2, $a2, -0x18B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11BB68u, 0x11BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB70u;
label_11bb70:
    // 0x11bb70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bb74: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB74u;
    {
        const bool branch_taken_0x11bb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11bb74) {
            ctx->pc = 0x11BB84u;
            goto label_11bb84;
        }
    }
    ctx->pc = 0x11BB7Cu;
    // 0x11bb7c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11BB7Cu;
    {
        const bool branch_taken_0x11bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB7Cu;
        // 0x11bb80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb7c) {
            ctx->pc = 0x11BBDCu;
            goto label_11bbdc;
        }
    }
    ctx->pc = 0x11BB84u;
label_11bb84:
    // 0x11bb84: 0x8e020524  lw          $v0, 0x524($s0)
    ctx->pc = 0x11bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x11bb88: 0x8c51003c  lw          $s1, 0x3C($v0)
    ctx->pc = 0x11bb88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11bb8c: 0xc046efc  jal         func_11BBF0
    ctx->pc = 0x11BB8Cu;
    SET_GPR_U32(ctx, 31, 0x11BB94u);
    ctx->pc = 0x11BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB8Cu;
    // 0x11bb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BBF0u, 0x11BB8Cu, 0x11BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB94u;
label_11bb94:
    // 0x11bb94: 0x1112c0  sll         $v0, $s1, 11
    ctx->pc = 0x11bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x11bb98: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bb9c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11BB9Cu;
    SET_GPR_U32(ctx, 31, 0x11BBA4u);
    ctx->pc = 0x11BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB9Cu;
    // 0x11bba0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11BB9Cu, 0x11BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBA4u;
label_11bba4:
    // 0x11bba4: 0xae020524  sw          $v0, 0x524($s0)
    ctx->pc = 0x11bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 2));
    // 0x11bba8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11bbac: 0xc080702  jal         func_201C08
    ctx->pc = 0x11BBACu;
    SET_GPR_U32(ctx, 31, 0x11BBB4u);
    ctx->pc = 0x11BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBACu;
    // 0x11bbb0: 0x26050264  addiu       $a1, $s0, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11BBACu, 0x11BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBB4u;
label_11bbb4:
    // 0x11bbb4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11bbb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11bbbc: 0xc080664  jal         func_201990
    ctx->pc = 0x11BBBCu;
    SET_GPR_U32(ctx, 31, 0x11BBC4u);
    ctx->pc = 0x11BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBBCu;
    // 0x11bbc0: 0x24a5e760  addiu       $a1, $a1, -0x18A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11BBBCu, 0x11BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBC4u;
label_11bbc4:
    // 0x11bbc4: 0x8e060524  lw          $a2, 0x524($s0)
    ctx->pc = 0x11bbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x11bbc8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11bbc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbd0: 0xc047948  jal         func_11E520
    ctx->pc = 0x11BBD0u;
    SET_GPR_U32(ctx, 31, 0x11BBD8u);
    ctx->pc = 0x11BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBD0u;
    // 0x11bbd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E520u, 0x11BBD0u, 0x11BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBD8u;
label_11bbd8:
    // 0x11bbd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11bbdc:
    // 0x11bbdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11bbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bbe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11bbe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bbe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11bbe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x11BBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBE8u;
        // 0x11bbec: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BBF0u;
}
