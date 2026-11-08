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

// Function: caseD_4
// Address: 0x1cd320 - 0x1cd3ac
void caseD_4_0x1cd320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1cd320");
#endif

    switch (ctx->pc) {
        case 0x1cd32cu: goto label_1cd32c;
        case 0x1cd340u: goto label_1cd340;
        case 0x1cd348u: goto label_1cd348;
        case 0x1cd358u: goto label_1cd358;
        case 0x1cd360u: goto label_1cd360;
        case 0x1cd370u: goto label_1cd370;
        case 0x1cd378u: goto label_1cd378;
        case 0x1cd388u: goto label_1cd388;
        case 0x1cd390u: goto label_1cd390;
        case 0x1cd39cu: goto label_1cd39c;
        case 0x1cd3a4u: goto label_1cd3a4;
        default: break;
    }

    ctx->pc = 0x1cd320u;

    // 0x1cd320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd324: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CD324u;
    SET_GPR_U32(ctx, 31, 0x1CD32Cu);
    ctx->pc = 0x1CD328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD324u;
    // 0x1cd328: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CD324u, 0x1CD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD32Cu;
label_1cd32c:
    // 0x1cd32c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CD32Cu;
    {
        const bool branch_taken_0x1cd32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD32Cu;
        // 0x1cd330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd32c) {
            ctx->pc = 0x1CD3C8u;
            return;
        }
    }
    ctx->pc = 0x1CD334u;
    // 0x1cd334: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cd334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd338: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD338u;
    SET_GPR_U32(ctx, 31, 0x1CD340u);
    ctx->pc = 0x1CD33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD338u;
    // 0x1cd33c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD338u, 0x1CD340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD340u;
label_1cd340:
    // 0x1cd340: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD340u;
    SET_GPR_U32(ctx, 31, 0x1CD348u);
    ctx->pc = 0x1CD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD340u;
    // 0x1cd344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD340u, 0x1CD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD348u;
label_1cd348:
    // 0x1cd348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd34c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cd34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd350: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD350u;
    SET_GPR_U32(ctx, 31, 0x1CD358u);
    ctx->pc = 0x1CD354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD350u;
    // 0x1cd354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD350u, 0x1CD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD358u;
label_1cd358:
    // 0x1cd358: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD358u;
    SET_GPR_U32(ctx, 31, 0x1CD360u);
    ctx->pc = 0x1CD35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD358u;
    // 0x1cd35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD358u, 0x1CD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD360u;
label_1cd360:
    // 0x1cd360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd364: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cd364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd368: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD368u;
    SET_GPR_U32(ctx, 31, 0x1CD370u);
    ctx->pc = 0x1CD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD368u;
    // 0x1cd36c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD368u, 0x1CD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD370u;
label_1cd370:
    // 0x1cd370: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD370u;
    SET_GPR_U32(ctx, 31, 0x1CD378u);
    ctx->pc = 0x1CD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD370u;
    // 0x1cd374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD370u, 0x1CD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD378u;
label_1cd378:
    // 0x1cd378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd37c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd380: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD380u;
    SET_GPR_U32(ctx, 31, 0x1CD388u);
    ctx->pc = 0x1CD384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD380u;
    // 0x1cd384: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD380u, 0x1CD388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD388u;
label_1cd388:
    // 0x1cd388: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD388u;
    SET_GPR_U32(ctx, 31, 0x1CD390u);
    ctx->pc = 0x1CD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD388u;
    // 0x1cd38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD388u, 0x1CD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD390u;
label_1cd390:
    // 0x1cd390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd394: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1CD394u;
    SET_GPR_U32(ctx, 31, 0x1CD39Cu);
    ctx->pc = 0x1CD398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD394u;
    // 0x1cd398: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1CD394u, 0x1CD39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD39Cu;
label_1cd39c:
    // 0x1cd39c: 0xc073504  jal         func_1CD410
    ctx->pc = 0x1CD39Cu;
    SET_GPR_U32(ctx, 31, 0x1CD3A4u);
    ctx->pc = 0x1CD3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD39Cu;
    // 0x1cd3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD410u, 0x1CD39Cu, 0x1CD3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3A4u;
label_1cd3a4:
    // 0x1cd3a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD3A4u;
    {
        const bool branch_taken_0x1cd3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3a4) {
            ctx->pc = 0x1CD3C8u;
            return;
        }
    }
    ctx->pc = 0x1CD3ACu;
}
