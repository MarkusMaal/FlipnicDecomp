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

// Function: entry_001ca86c
// Address: 0x1ca86c - 0x1ca928
void entry_001ca86c_0x1ca86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca86c_0x1ca86c");
#endif

    switch (ctx->pc) {
        case 0x1ca884u: goto label_1ca884;
        case 0x1ca88cu: goto label_1ca88c;
        case 0x1ca89cu: goto label_1ca89c;
        case 0x1ca8a4u: goto label_1ca8a4;
        case 0x1ca8b4u: goto label_1ca8b4;
        case 0x1ca8c4u: goto label_1ca8c4;
        case 0x1ca8d4u: goto label_1ca8d4;
        case 0x1ca8dcu: goto label_1ca8dc;
        case 0x1ca8f0u: goto label_1ca8f0;
        case 0x1ca904u: goto label_1ca904;
        case 0x1ca90cu: goto label_1ca90c;
        case 0x1ca91cu: goto label_1ca91c;
        case 0x1ca924u: goto label_1ca924;
        default: break;
    }

    ctx->pc = 0x1ca86cu;

    // 0x1ca86c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1ca86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ca870: 0x10c2002d  beq         $a2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1CA870u;
    {
        const bool branch_taken_0x1ca870 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA870u;
        // 0x1ca874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca870) {
            ctx->pc = 0x1CA928u;
            return;
        }
    }
    ctx->pc = 0x1CA878u;
    // 0x1ca878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca87c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA87Cu;
    SET_GPR_U32(ctx, 31, 0x1CA884u);
    ctx->pc = 0x1CA880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA87Cu;
    // 0x1ca880: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA87Cu, 0x1CA884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA884u;
label_1ca884:
    // 0x1ca884: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA884u;
    SET_GPR_U32(ctx, 31, 0x1CA88Cu);
    ctx->pc = 0x1CA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA884u;
    // 0x1ca888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA884u, 0x1CA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA88Cu;
label_1ca88c:
    // 0x1ca88c: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1ca88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ca890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca894: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA894u;
    SET_GPR_U32(ctx, 31, 0x1CA89Cu);
    ctx->pc = 0x1CA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA894u;
    // 0x1ca898: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA894u, 0x1CA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA89Cu;
label_1ca89c:
    // 0x1ca89c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA89Cu;
    SET_GPR_U32(ctx, 31, 0x1CA8A4u);
    ctx->pc = 0x1CA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA89Cu;
    // 0x1ca8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA89Cu, 0x1CA8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8A4u;
label_1ca8a4:
    // 0x1ca8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ca8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca8ac: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CA8ACu;
    SET_GPR_U32(ctx, 31, 0x1CA8B4u);
    ctx->pc = 0x1CA8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8ACu;
    // 0x1ca8b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CA8ACu, 0x1CA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8B4u;
label_1ca8b4:
    // 0x1ca8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ca8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ca8bc: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CA8BCu;
    SET_GPR_U32(ctx, 31, 0x1CA8C4u);
    ctx->pc = 0x1CA8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8BCu;
    // 0x1ca8c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CA8BCu, 0x1CA8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8C4u;
label_1ca8c4:
    // 0x1ca8c4: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8cc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA8CCu;
    SET_GPR_U32(ctx, 31, 0x1CA8D4u);
    ctx->pc = 0x1CA8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8CCu;
    // 0x1ca8d0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA8CCu, 0x1CA8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8D4u;
label_1ca8d4:
    // 0x1ca8d4: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1CA8D4u;
    SET_GPR_U32(ctx, 31, 0x1CA8DCu);
    ctx->pc = 0x1CA8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8D4u;
    // 0x1ca8d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1CA8D4u, 0x1CA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8DCu;
label_1ca8dc:
    // 0x1ca8dc: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ca8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca8e8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA8E8u;
    SET_GPR_U32(ctx, 31, 0x1CA8F0u);
    ctx->pc = 0x1CA8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8E8u;
    // 0x1ca8ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA8E8u, 0x1CA8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8F0u;
label_1ca8f0:
    // 0x1ca8f0: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1ca8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1ca8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8f8: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ca8fc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA8FCu;
    SET_GPR_U32(ctx, 31, 0x1CA904u);
    ctx->pc = 0x1CA900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8FCu;
    // 0x1ca900: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA8FCu, 0x1CA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA904u;
label_1ca904:
    // 0x1ca904: 0xc06e47c  jal         func_1B91F0
    ctx->pc = 0x1CA904u;
    SET_GPR_U32(ctx, 31, 0x1CA90Cu);
    ctx->pc = 0x1CA908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA904u;
    // 0x1ca908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91F0u, 0x1CA904u, 0x1CA90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA90Cu;
label_1ca90c:
    // 0x1ca90c: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca914: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA914u;
    SET_GPR_U32(ctx, 31, 0x1CA91Cu);
    ctx->pc = 0x1CA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA914u;
    // 0x1ca918: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA914u, 0x1CA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA91Cu;
label_1ca91c:
    // 0x1ca91c: 0xc06e474  jal         func_1B91D0
    ctx->pc = 0x1CA91Cu;
    SET_GPR_U32(ctx, 31, 0x1CA924u);
    ctx->pc = 0x1CA920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA91Cu;
    // 0x1ca920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91D0u, 0x1CA91Cu, 0x1CA924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA924u;
label_1ca924:
    // 0x1ca924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ca928u;
}
