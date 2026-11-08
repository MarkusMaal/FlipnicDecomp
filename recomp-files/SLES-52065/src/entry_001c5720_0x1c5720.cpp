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

// Function: entry_001c5720
// Address: 0x1c5720 - 0x1c5898
void entry_001c5720_0x1c5720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5720_0x1c5720");
#endif

    switch (ctx->pc) {
        case 0x1c5728u: goto label_1c5728;
        case 0x1c5738u: goto label_1c5738;
        case 0x1c5744u: goto label_1c5744;
        case 0x1c574cu: goto label_1c574c;
        case 0x1c5768u: goto label_1c5768;
        case 0x1c5770u: goto label_1c5770;
        case 0x1c577cu: goto label_1c577c;
        case 0x1c57d0u: goto label_1c57d0;
        case 0x1c57ecu: goto label_1c57ec;
        case 0x1c57f8u: goto label_1c57f8;
        case 0x1c5808u: goto label_1c5808;
        case 0x1c5814u: goto label_1c5814;
        case 0x1c582cu: goto label_1c582c;
        case 0x1c5838u: goto label_1c5838;
        case 0x1c5848u: goto label_1c5848;
        case 0x1c5854u: goto label_1c5854;
        case 0x1c586cu: goto label_1c586c;
        case 0x1c5878u: goto label_1c5878;
        case 0x1c5888u: goto label_1c5888;
        case 0x1c5894u: goto label_1c5894;
        default: break;
    }

    ctx->pc = 0x1c5720u;

label_1c5720:
    // 0x1c5720: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C5720u;
    SET_GPR_U32(ctx, 31, 0x1C5728u);
    ctx->pc = 0x1C5724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5720u;
    // 0x1c5724: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C5720u, 0x1C5728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5728u;
label_1c5728:
    // 0x1c5728: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c5728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c572c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5730: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C5730u;
    SET_GPR_U32(ctx, 31, 0x1C5738u);
    ctx->pc = 0x1C5734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5730u;
    // 0x1c5734: 0x24a55940  addiu       $a1, $a1, 0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C5730u, 0x1C5738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5738u;
label_1c5738:
    // 0x1c5738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c573c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C573Cu;
    SET_GPR_U32(ctx, 31, 0x1C5744u);
    ctx->pc = 0x1C5740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C573Cu;
    // 0x1c5740: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C573Cu, 0x1C5744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5744u;
label_1c5744:
    // 0x1c5744: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C5744u;
    SET_GPR_U32(ctx, 31, 0x1C574Cu);
    ctx->pc = 0x1C5748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5744u;
    // 0x1c5748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C5744u, 0x1C574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C574Cu;
label_1c574c:
    // 0x1c574c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c574cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c5750: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1c5750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c5754: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C5754u;
    {
        const bool branch_taken_0x1c5754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5754u;
        // 0x1c5758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5754) {
            ctx->pc = 0x1C5720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5720;
        }
    }
    ctx->pc = 0x1C575Cu;
    // 0x1c575c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5760: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C5760u;
    SET_GPR_U32(ctx, 31, 0x1C5768u);
    ctx->pc = 0x1C5764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5760u;
    // 0x1c5764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C5760u, 0x1C5768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5768u;
label_1c5768:
    // 0x1c5768: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C5768u;
    SET_GPR_U32(ctx, 31, 0x1C5770u);
    ctx->pc = 0x1C576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5768u;
    // 0x1c576c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C5768u, 0x1C5770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5770u;
label_1c5770:
    // 0x1c5770: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c5770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5774: 0xc0718e4  jal         func_1C6390
    ctx->pc = 0x1C5774u;
    SET_GPR_U32(ctx, 31, 0x1C577Cu);
    ctx->pc = 0x1C5778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5774u;
    // 0x1c5778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6390u, 0x1C5774u, 0x1C577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C577Cu;
label_1c577c:
    // 0x1c577c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5784: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1c5784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1c5788: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x1c5788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x1c578c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5790: 0xac440068  sw          $a0, 0x68($v0)
    ctx->pc = 0x1c5790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 4));
    // 0x1c5794: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c5794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5798: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1c5798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1c579c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57a0: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1c57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1c57a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57a8: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x1c57a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x1c57ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c57acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57b0: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x1c57b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x1c57b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57b8: 0xa040006d  sb          $zero, 0x6D($v0)
    ctx->pc = 0x1c57b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 109), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c57bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57c0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1c57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1c57c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57c8: 0xc06d2f4  jal         func_1B4BD0
    ctx->pc = 0x1C57C8u;
    SET_GPR_U32(ctx, 31, 0x1C57D0u);
    ctx->pc = 0x1C57CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57C8u;
    // 0x1c57cc: 0xa040006c  sb          $zero, 0x6C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4BD0u, 0x1C57C8u, 0x1C57D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57D0u;
label_1c57d0:
    // 0x1c57d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c57d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c57d4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C57D4u;
    {
        const bool branch_taken_0x1c57d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57D4u;
        // 0x1c57d8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57d4) {
            ctx->pc = 0x1C5898u;
            return;
        }
    }
    ctx->pc = 0x1C57DCu;
    // 0x1c57dc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c57dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c57e0: 0x24a51f40  addiu       $a1, $a1, 0x1F40
    ctx->pc = 0x1c57e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8000));
    // 0x1c57e4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C57E4u;
    SET_GPR_U32(ctx, 31, 0x1C57ECu);
    ctx->pc = 0x1C57E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57E4u;
    // 0x1c57e8: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C57E4u, 0x1C57ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57ECu;
label_1c57ec:
    // 0x1c57ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c57ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57f0: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C57F0u;
    SET_GPR_U32(ctx, 31, 0x1C57F8u);
    ctx->pc = 0x1C57F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57F0u;
    // 0x1c57f4: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C57F0u, 0x1C57F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57F8u;
label_1c57f8:
    // 0x1c57f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c57f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57fc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c5800: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C5800u;
    SET_GPR_U32(ctx, 31, 0x1C5808u);
    ctx->pc = 0x1C5804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5800u;
    // 0x1c5804: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C5800u, 0x1C5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5808u;
label_1c5808:
    // 0x1c5808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c580c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C580Cu;
    SET_GPR_U32(ctx, 31, 0x1C5814u);
    ctx->pc = 0x1C5810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C580Cu;
    // 0x1c5810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C580Cu, 0x1C5814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5814u;
label_1c5814:
    // 0x1c5814: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c5814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c5818: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c5818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c581c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c5820: 0x24a51f20  addiu       $a1, $a1, 0x1F20
    ctx->pc = 0x1c5820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7968));
    // 0x1c5824: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C5824u;
    SET_GPR_U32(ctx, 31, 0x1C582Cu);
    ctx->pc = 0x1C5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5824u;
    // 0x1c5828: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C5824u, 0x1C582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C582Cu;
label_1c582c:
    // 0x1c582c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5830: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C5830u;
    SET_GPR_U32(ctx, 31, 0x1C5838u);
    ctx->pc = 0x1C5834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5830u;
    // 0x1c5834: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C5830u, 0x1C5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5838u;
label_1c5838:
    // 0x1c5838: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c5838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c583c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c5840: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C5840u;
    SET_GPR_U32(ctx, 31, 0x1C5848u);
    ctx->pc = 0x1C5844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5840u;
    // 0x1c5844: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C5840u, 0x1C5848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5848u;
label_1c5848:
    // 0x1c5848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c584c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C584Cu;
    SET_GPR_U32(ctx, 31, 0x1C5854u);
    ctx->pc = 0x1C5850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C584Cu;
    // 0x1c5850: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C584Cu, 0x1C5854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5854u;
label_1c5854:
    // 0x1c5854: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c5854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c5858: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c5858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c585c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c585cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c5860: 0x24a51f60  addiu       $a1, $a1, 0x1F60
    ctx->pc = 0x1c5860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8032));
    // 0x1c5864: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C5864u;
    SET_GPR_U32(ctx, 31, 0x1C586Cu);
    ctx->pc = 0x1C5868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5864u;
    // 0x1c5868: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C5864u, 0x1C586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C586Cu;
label_1c586c:
    // 0x1c586c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5870: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C5870u;
    SET_GPR_U32(ctx, 31, 0x1C5878u);
    ctx->pc = 0x1C5874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5870u;
    // 0x1c5874: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C5870u, 0x1C5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5878u;
label_1c5878:
    // 0x1c5878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c587c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c5880: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C5880u;
    SET_GPR_U32(ctx, 31, 0x1C5888u);
    ctx->pc = 0x1C5884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5880u;
    // 0x1c5884: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C5880u, 0x1C5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5888u;
label_1c5888:
    // 0x1c5888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c588c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C588Cu;
    SET_GPR_U32(ctx, 31, 0x1C5894u);
    ctx->pc = 0x1C5890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C588Cu;
    // 0x1c5890: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C588Cu, 0x1C5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5894u;
label_1c5894:
    // 0x1c5894: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c5894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c5898u;
}
