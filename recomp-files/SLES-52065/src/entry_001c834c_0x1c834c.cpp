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

// Function: entry_001c834c
// Address: 0x1c834c - 0x1c83d0
void entry_001c834c_0x1c834c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c834c_0x1c834c");
#endif

    switch (ctx->pc) {
        case 0x1c8364u: goto label_1c8364;
        case 0x1c8370u: goto label_1c8370;
        case 0x1c8384u: goto label_1c8384;
        case 0x1c838cu: goto label_1c838c;
        case 0x1c839cu: goto label_1c839c;
        case 0x1c83a4u: goto label_1c83a4;
        case 0x1c83b0u: goto label_1c83b0;
        default: break;
    }

    ctx->pc = 0x1c834cu;

    // 0x1c834c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c834cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c8350: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c8350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c8354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8358: 0x260a0068  addiu       $t2, $s0, 0x68
    ctx->pc = 0x1c8358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1c835c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C835Cu;
    SET_GPR_U32(ctx, 31, 0x1C8364u);
    ctx->pc = 0x1C8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C835Cu;
    // 0x1c8360: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C835Cu, 0x1C8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8364u;
label_1c8364:
    // 0x1c8364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8368: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C8368u;
    SET_GPR_U32(ctx, 31, 0x1C8370u);
    ctx->pc = 0x1C836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8368u;
    // 0x1c836c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C8368u, 0x1C8370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8370u;
label_1c8370:
    // 0x1c8370: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C8370u;
    {
        const bool branch_taken_0x1c8370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8370u;
        // 0x1c8374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8370) {
            ctx->pc = 0x1C83D0u;
            return;
        }
    }
    ctx->pc = 0x1C8378u;
    // 0x1c8378: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c8378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c837c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C837Cu;
    SET_GPR_U32(ctx, 31, 0x1C8384u);
    ctx->pc = 0x1C8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C837Cu;
    // 0x1c8380: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C837Cu, 0x1C8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8384u;
label_1c8384:
    // 0x1c8384: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C8384u;
    SET_GPR_U32(ctx, 31, 0x1C838Cu);
    ctx->pc = 0x1C8388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8384u;
    // 0x1c8388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C8384u, 0x1C838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C838Cu;
label_1c838c:
    // 0x1c838c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c838cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8390: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c8390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8394: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8394u;
    SET_GPR_U32(ctx, 31, 0x1C839Cu);
    ctx->pc = 0x1C8398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8394u;
    // 0x1c8398: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8394u, 0x1C839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C839Cu;
label_1c839c:
    // 0x1c839c: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C839Cu;
    SET_GPR_U32(ctx, 31, 0x1C83A4u);
    ctx->pc = 0x1C83A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C839Cu;
    // 0x1c83a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C839Cu, 0x1C83A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83A4u;
label_1c83a4:
    // 0x1c83a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c83a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83a8: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C83A8u;
    SET_GPR_U32(ctx, 31, 0x1C83B0u);
    ctx->pc = 0x1C83ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83A8u;
    // 0x1c83ac: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C83A8u, 0x1C83B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83B0u;
label_1c83b0:
    // 0x1c83b0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c83b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c83b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c83b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c83bc: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x1c83bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x1c83c0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c83c4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C83C4u;
    {
        const bool branch_taken_0x1c83c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c83c4) {
            ctx->pc = 0x1C83D0u;
            return;
        }
    }
    ctx->pc = 0x1C83CCu;
    // 0x1c83cc: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1c83ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    ctx->pc = 0x1c83d0u;
}
