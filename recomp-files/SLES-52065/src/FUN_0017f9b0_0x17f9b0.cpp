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

// Function: FUN_0017f9b0
// Address: 0x17f9b0 - 0x17fb00
void FUN_0017f9b0_0x17f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f9b0_0x17f9b0");
#endif

    switch (ctx->pc) {
        case 0x17f9d8u: goto label_17f9d8;
        case 0x17f9e0u: goto label_17f9e0;
        case 0x17f9ecu: goto label_17f9ec;
        case 0x17f9fcu: goto label_17f9fc;
        case 0x17fa04u: goto label_17fa04;
        case 0x17fa14u: goto label_17fa14;
        case 0x17fa1cu: goto label_17fa1c;
        case 0x17fa30u: goto label_17fa30;
        case 0x17fa3cu: goto label_17fa3c;
        case 0x17fa44u: goto label_17fa44;
        case 0x17fa4cu: goto label_17fa4c;
        case 0x17faa0u: goto label_17faa0;
        case 0x17fac0u: goto label_17fac0;
        case 0x17fad4u: goto label_17fad4;
        case 0x17fae4u: goto label_17fae4;
        default: break;
    }

    ctx->pc = 0x17f9b0u;

    // 0x17f9b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17f9b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17f9b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f9bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f9c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17f9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f9c8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x17f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x17f9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9d0: 0xc048920  jal         func_122480
    ctx->pc = 0x17F9D0u;
    SET_GPR_U32(ctx, 31, 0x17F9D8u);
    ctx->pc = 0x17F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9D0u;
    // 0x17f9d4: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x17F9D0u, 0x17F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9D8u;
label_17f9d8:
    // 0x17f9d8: 0xc04c268  jal         func_1309A0
    ctx->pc = 0x17F9D8u;
    SET_GPR_U32(ctx, 31, 0x17F9E0u);
    ctx->pc = 0x1309A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1309A0u, 0x17F9D8u, 0x17F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9E0u;
label_17f9e0:
    // 0x17f9e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17f9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9e4: 0xc080748  jal         func_201D20
    ctx->pc = 0x17F9E4u;
    SET_GPR_U32(ctx, 31, 0x17F9ECu);
    ctx->pc = 0x17F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9E4u;
    // 0x17f9e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x17F9E4u, 0x17F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9ECu;
label_17f9ec:
    // 0x17f9ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17f9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9f4: 0xc048884  jal         func_122210
    ctx->pc = 0x17F9F4u;
    SET_GPR_U32(ctx, 31, 0x17F9FCu);
    ctx->pc = 0x17F9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9F4u;
    // 0x17f9f8: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x17F9F4u, 0x17F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9FCu;
label_17f9fc:
    // 0x17f9fc: 0xc080748  jal         func_201D20
    ctx->pc = 0x17F9FCu;
    SET_GPR_U32(ctx, 31, 0x17FA04u);
    ctx->pc = 0x17FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9FCu;
    // 0x17fa00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x17F9FCu, 0x17FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA04u;
label_17fa04:
    // 0x17fa04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17fa04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17fa08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa0c: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x17FA0Cu;
    SET_GPR_U32(ctx, 31, 0x17FA14u);
    ctx->pc = 0x17FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA0Cu;
    // 0x17fa10: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x17FA0Cu, 0x17FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA14u;
label_17fa14:
    // 0x17fa14: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x17FA14u;
    SET_GPR_U32(ctx, 31, 0x17FA1Cu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x17FA14u, 0x17FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA1Cu;
label_17fa1c:
    // 0x17fa1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17fa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa20: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x17fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x17fa24: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17fa28: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x17FA28u;
    SET_GPR_U32(ctx, 31, 0x17FA30u);
    ctx->pc = 0x17FA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA28u;
    // 0x17fa2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x17FA28u, 0x17FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA30u;
label_17fa30:
    // 0x17fa30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17fa30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa34: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x17FA34u;
    SET_GPR_U32(ctx, 31, 0x17FA3Cu);
    ctx->pc = 0x17FA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA34u;
    // 0x17fa38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x17FA34u, 0x17FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA3Cu;
label_17fa3c:
    // 0x17fa3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FA3Cu;
    {
        const bool branch_taken_0x17fa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fa3c) {
            ctx->pc = 0x17FA60u;
            goto label_17fa60;
        }
    }
    ctx->pc = 0x17FA44u;
label_17fa44:
    // 0x17fa44: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x17FA44u;
    SET_GPR_U32(ctx, 31, 0x17FA4Cu);
    ctx->pc = 0x17FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA44u;
    // 0x17fa48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x17FA44u, 0x17FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA4Cu;
label_17fa4c:
    // 0x17fa4c: 0x0  nop
    ctx->pc = 0x17fa4cu;
    // NOP
    // 0x17fa50: 0x0  nop
    ctx->pc = 0x17fa50u;
    // NOP
    // 0x17fa54: 0x0  nop
    ctx->pc = 0x17fa54u;
    // NOP
    // 0x17fa58: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FA58u;
    {
        const bool branch_taken_0x17fa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fa58) {
            ctx->pc = 0x17FA44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fa44;
        }
    }
    ctx->pc = 0x17FA60u;
label_17fa60:
    // 0x17fa60: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x17FA60u;
    {
        const bool branch_taken_0x17fa60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA60u;
        // 0x17fa64: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa60) {
            ctx->pc = 0x17FADCu;
            goto label_17fadc;
        }
    }
    ctx->pc = 0x17FA68u;
    // 0x17fa68: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x17fa68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fa6c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17fa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17fa70: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FA70u;
    {
        const bool branch_taken_0x17fa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17fa70) {
            ctx->pc = 0x17FA88u;
            goto label_17fa88;
        }
    }
    ctx->pc = 0x17FA78u;
    // 0x17fa78: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x17fa78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17fa7c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FA7Cu;
    {
        const bool branch_taken_0x17fa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17fa7c) {
            ctx->pc = 0x17FA88u;
            goto label_17fa88;
        }
    }
    ctx->pc = 0x17FA84u;
    // 0x17fa84: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x17fa84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_17fa88:
    // 0x17fa88: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x17fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
    // 0x17fa8c: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x17fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x17fa90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fa94: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x17fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17fa98: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x17FA98u;
    SET_GPR_U32(ctx, 31, 0x17FAA0u);
    ctx->pc = 0x17FA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA98u;
    // 0x17fa9c: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x17FA98u, 0x17FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAA0u;
label_17faa0:
    // 0x17faa0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17faa4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x17faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17faa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17faac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17faacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fab0: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x17fab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x17fab4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17fab8: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x17FAB8u;
    SET_GPR_U32(ctx, 31, 0x17FAC0u);
    ctx->pc = 0x17FABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAB8u;
    // 0x17fabc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x17FAB8u, 0x17FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAC0u;
label_17fac0:
    // 0x17fac0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17fac4: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x17fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x17fac8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17facc: 0xc04619c  jal         func_118670
    ctx->pc = 0x17FACCu;
    SET_GPR_U32(ctx, 31, 0x17FAD4u);
    ctx->pc = 0x17FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FACCu;
    // 0x17fad0: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17FACCu, 0x17FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAD4u;
label_17fad4:
    // 0x17fad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17FAD4u;
    {
        const bool branch_taken_0x17fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAD4u;
        // 0x17fad8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fad4) {
            ctx->pc = 0x17FAE8u;
            goto label_17fae8;
        }
    }
    ctx->pc = 0x17FADCu;
label_17fadc:
    // 0x17fadc: 0xc04619c  jal         func_118670
    ctx->pc = 0x17FADCu;
    SET_GPR_U32(ctx, 31, 0x17FAE4u);
    ctx->pc = 0x17FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FADCu;
    // 0x17fae0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17FADCu, 0x17FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAE4u;
label_17fae4:
    // 0x17fae4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17fae8:
    // 0x17fae8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17fae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17faec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17faecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17faf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17faf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17faf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17faf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17faf8: 0x3e00008  jr          $ra
    ctx->pc = 0x17FAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAF8u;
        // 0x17fafc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FB00u;
}
