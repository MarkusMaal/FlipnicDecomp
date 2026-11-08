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

// Function: FUN_001cece0
// Address: 0x1cece0 - 0x1cee78
void FUN_001cece0_0x1cece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cece0_0x1cece0");
#endif

    switch (ctx->pc) {
        case 0x1cecf8u: goto label_1cecf8;
        case 0x1ced0cu: goto label_1ced0c;
        case 0x1ced1cu: goto label_1ced1c;
        case 0x1ced30u: goto label_1ced30;
        case 0x1ced44u: goto label_1ced44;
        case 0x1ced50u: goto label_1ced50;
        case 0x1ced5cu: goto label_1ced5c;
        case 0x1ced70u: goto label_1ced70;
        case 0x1ced7cu: goto label_1ced7c;
        case 0x1ced88u: goto label_1ced88;
        case 0x1ced9cu: goto label_1ced9c;
        case 0x1ceda8u: goto label_1ceda8;
        case 0x1cedb4u: goto label_1cedb4;
        case 0x1cedc8u: goto label_1cedc8;
        case 0x1cedd4u: goto label_1cedd4;
        case 0x1cede0u: goto label_1cede0;
        case 0x1cede4u: goto label_1cede4;
        case 0x1cedecu: goto label_1cedec;
        case 0x1cedfcu: goto label_1cedfc;
        case 0x1cee18u: goto label_1cee18;
        case 0x1cee28u: goto label_1cee28;
        case 0x1cee40u: goto label_1cee40;
        case 0x1cee5cu: goto label_1cee5c;
        default: break;
    }

    ctx->pc = 0x1cece0u;

    // 0x1cece0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cece4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cece8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cecec: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1cececu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x1cecf0: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CECF0u;
    SET_GPR_U32(ctx, 31, 0x1CECF8u);
    ctx->pc = 0x1CECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CECF0u;
    // 0x1cecf4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CECF0u, 0x1CECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CECF8u;
label_1cecf8:
    // 0x1cecf8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cecfc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1cecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1ced00: 0x2463bec0  addiu       $v1, $v1, -0x4140
    ctx->pc = 0x1ced00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950592));
    // 0x1ced04: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1CED04u;
    SET_GPR_U32(ctx, 31, 0x1CED0Cu);
    ctx->pc = 0x1CED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED04u;
    // 0x1ced08: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1CED04u, 0x1CED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED0Cu;
label_1ced0c:
    // 0x1ced0c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ced0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ced10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ced10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced14: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1CED14u;
    SET_GPR_U32(ctx, 31, 0x1CED1Cu);
    ctx->pc = 0x1CED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED14u;
    // 0x1ced18: 0x24a59470  addiu       $a1, $a1, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1CED14u, 0x1CED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED1Cu;
label_1ced1c:
    // 0x1ced1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ced1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ced20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ced20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced24: 0x24a59480  addiu       $a1, $a1, -0x6B80
    ctx->pc = 0x1ced24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939776));
    // 0x1ced28: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CED28u;
    SET_GPR_U32(ctx, 31, 0x1CED30u);
    ctx->pc = 0x1CED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED28u;
    // 0x1ced2c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CED28u, 0x1CED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED30u;
label_1ced30:
    // 0x1ced30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ced34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ced34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ced38: 0x24a53100  addiu       $a1, $a1, 0x3100
    ctx->pc = 0x1ced38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12544));
    // 0x1ced3c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CED3Cu;
    SET_GPR_U32(ctx, 31, 0x1CED44u);
    ctx->pc = 0x1CED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED3Cu;
    // 0x1ced40: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CED3Cu, 0x1CED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED44u;
label_1ced44:
    // 0x1ced44: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ced44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ced48: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CED48u;
    SET_GPR_U32(ctx, 31, 0x1CED50u);
    ctx->pc = 0x1CED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED48u;
    // 0x1ced4c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CED48u, 0x1CED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED50u;
label_1ced50:
    // 0x1ced50: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ced50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ced54: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CED54u;
    SET_GPR_U32(ctx, 31, 0x1CED5Cu);
    ctx->pc = 0x1CED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED54u;
    // 0x1ced58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CED54u, 0x1CED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED5Cu;
label_1ced5c:
    // 0x1ced5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ced5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ced60: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1ced60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ced64: 0x24a53118  addiu       $a1, $a1, 0x3118
    ctx->pc = 0x1ced64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12568));
    // 0x1ced68: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CED68u;
    SET_GPR_U32(ctx, 31, 0x1CED70u);
    ctx->pc = 0x1CED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED68u;
    // 0x1ced6c: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CED68u, 0x1CED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED70u;
label_1ced70:
    // 0x1ced70: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ced74: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CED74u;
    SET_GPR_U32(ctx, 31, 0x1CED7Cu);
    ctx->pc = 0x1CED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED74u;
    // 0x1ced78: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CED74u, 0x1CED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED7Cu;
label_1ced7c:
    // 0x1ced7c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1ced7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ced80: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CED80u;
    SET_GPR_U32(ctx, 31, 0x1CED88u);
    ctx->pc = 0x1CED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED80u;
    // 0x1ced84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CED80u, 0x1CED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED88u;
label_1ced88:
    // 0x1ced88: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ced88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ced8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ced8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ced90: 0x24a53130  addiu       $a1, $a1, 0x3130
    ctx->pc = 0x1ced90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12592));
    // 0x1ced94: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CED94u;
    SET_GPR_U32(ctx, 31, 0x1CED9Cu);
    ctx->pc = 0x1CED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED94u;
    // 0x1ced98: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CED94u, 0x1CED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED9Cu;
label_1ced9c:
    // 0x1ced9c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ced9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ceda0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CEDA0u;
    SET_GPR_U32(ctx, 31, 0x1CEDA8u);
    ctx->pc = 0x1CEDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDA0u;
    // 0x1ceda4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CEDA0u, 0x1CEDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDA8u;
label_1ceda8:
    // 0x1ceda8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ceda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cedac: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CEDACu;
    SET_GPR_U32(ctx, 31, 0x1CEDB4u);
    ctx->pc = 0x1CEDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDACu;
    // 0x1cedb0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CEDACu, 0x1CEDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDB4u;
label_1cedb4:
    // 0x1cedb4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cedb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cedb8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1cedb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1cedbc: 0x24a53150  addiu       $a1, $a1, 0x3150
    ctx->pc = 0x1cedbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12624));
    // 0x1cedc0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CEDC0u;
    SET_GPR_U32(ctx, 31, 0x1CEDC8u);
    ctx->pc = 0x1CEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDC0u;
    // 0x1cedc4: 0x27a60054  addiu       $a2, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CEDC0u, 0x1CEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDC8u;
label_1cedc8:
    // 0x1cedc8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cedc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cedcc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CEDCCu;
    SET_GPR_U32(ctx, 31, 0x1CEDD4u);
    ctx->pc = 0x1CEDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDCCu;
    // 0x1cedd0: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CEDCCu, 0x1CEDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDD4u;
label_1cedd4:
    // 0x1cedd4: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1cedd8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CEDD8u;
    SET_GPR_U32(ctx, 31, 0x1CEDE0u);
    ctx->pc = 0x1CEDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDD8u;
    // 0x1ceddc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CEDD8u, 0x1CEDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDE0u;
label_1cede0:
    // 0x1cede0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cede0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cede4:
    // 0x1cede4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1CEDE4u;
    SET_GPR_U32(ctx, 31, 0x1CEDECu);
    ctx->pc = 0x1CEDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDE4u;
    // 0x1cede8: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1CEDE4u, 0x1CEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDECu;
label_1cedec:
    // 0x1cedec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEDECu;
    {
        const bool branch_taken_0x1cedec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDECu;
        // 0x1cedf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cedec) {
            ctx->pc = 0x1CEDFCu;
            goto label_1cedfc;
        }
    }
    ctx->pc = 0x1CEDF4u;
    // 0x1cedf4: 0xc06e244  jal         func_1B8910
    ctx->pc = 0x1CEDF4u;
    SET_GPR_U32(ctx, 31, 0x1CEDFCu);
    ctx->pc = 0x1B8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8910u, 0x1CEDF4u, 0x1CEDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDFCu;
label_1cedfc:
    // 0x1cedfc: 0x0  nop
    ctx->pc = 0x1cedfcu;
    // NOP
    // 0x1cee00: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cee00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cee04: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cee08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cee08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cee0c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1cee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1cee10: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CEE10u;
    SET_GPR_U32(ctx, 31, 0x1CEE18u);
    ctx->pc = 0x1CEE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE10u;
    // 0x1cee14: 0xafb00030  sw          $s0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CEE10u, 0x1CEE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE18u;
label_1cee18:
    // 0x1cee18: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1cee18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cee1c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1cee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1cee20: 0xc06ed14  jal         func_1BB450
    ctx->pc = 0x1CEE20u;
    SET_GPR_U32(ctx, 31, 0x1CEE28u);
    ctx->pc = 0x1CEE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE20u;
    // 0x1cee24: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB450u, 0x1CEE20u, 0x1CEE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE28u;
label_1cee28:
    // 0x1cee28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cee28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cee2c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x1cee2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cee30: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1CEE30u;
    {
        const bool branch_taken_0x1cee30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE30u;
        // 0x1cee34: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee30) {
            ctx->pc = 0x1CEDE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cede4;
        }
    }
    ctx->pc = 0x1CEE38u;
    // 0x1cee38: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1CEE38u;
    SET_GPR_U32(ctx, 31, 0x1CEE40u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1CEE38u, 0x1CEE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE40u;
label_1cee40:
    // 0x1cee40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CEE40u;
    {
        const bool branch_taken_0x1cee40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE40u;
        // 0x1cee44: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee40) {
            ctx->pc = 0x1CEE5Cu;
            goto label_1cee5c;
        }
    }
    ctx->pc = 0x1CEE48u;
    // 0x1cee48: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1cee48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1cee4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cee4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee50: 0x24a5c6a4  addiu       $a1, $a1, -0x395C
    ctx->pc = 0x1cee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    // 0x1cee54: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1CEE54u;
    SET_GPR_U32(ctx, 31, 0x1CEE5Cu);
    ctx->pc = 0x1CEE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE54u;
    // 0x1cee58: 0x24c6c6c0  addiu       $a2, $a2, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1CEE54u, 0x1CEE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE5Cu;
label_1cee5c:
    // 0x1cee5c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cee60: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1cee60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1cee64: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cee68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cee6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cee6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cee70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE70u;
        // 0x1cee74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEE78u;
}
