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

// Function: entry_001c1718
// Address: 0x1c1718 - 0x1c179c
void entry_001c1718_0x1c1718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1718_0x1c1718");
#endif

    switch (ctx->pc) {
        case 0x1c1730u: goto label_1c1730;
        case 0x1c173cu: goto label_1c173c;
        case 0x1c1750u: goto label_1c1750;
        case 0x1c1758u: goto label_1c1758;
        case 0x1c1768u: goto label_1c1768;
        case 0x1c1770u: goto label_1c1770;
        case 0x1c177cu: goto label_1c177c;
        default: break;
    }

    ctx->pc = 0x1c1718u;

    // 0x1c1718: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c1718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c171c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c171cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c1720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1724: 0x260a0068  addiu       $t2, $s0, 0x68
    ctx->pc = 0x1c1724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1c1728: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C1728u;
    SET_GPR_U32(ctx, 31, 0x1C1730u);
    ctx->pc = 0x1C172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1728u;
    // 0x1c172c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C1728u, 0x1C1730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1730u;
label_1c1730:
    // 0x1c1730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1734: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C1734u;
    SET_GPR_U32(ctx, 31, 0x1C173Cu);
    ctx->pc = 0x1C1738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1734u;
    // 0x1c1738: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C1734u, 0x1C173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C173Cu;
label_1c173c:
    // 0x1c173c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C173Cu;
    {
        const bool branch_taken_0x1c173c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C173Cu;
        // 0x1c1740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c173c) {
            ctx->pc = 0x1C179Cu;
            return;
        }
    }
    ctx->pc = 0x1C1744u;
    // 0x1c1744: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1748: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1748u;
    SET_GPR_U32(ctx, 31, 0x1C1750u);
    ctx->pc = 0x1C174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1748u;
    // 0x1c174c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1748u, 0x1C1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1750u;
label_1c1750:
    // 0x1c1750: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C1750u;
    SET_GPR_U32(ctx, 31, 0x1C1758u);
    ctx->pc = 0x1C1754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1750u;
    // 0x1c1754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C1750u, 0x1C1758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1758u;
label_1c1758:
    // 0x1c1758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c175c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c175cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1760: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1760u;
    SET_GPR_U32(ctx, 31, 0x1C1768u);
    ctx->pc = 0x1C1764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1760u;
    // 0x1c1764: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1760u, 0x1C1768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1768u;
label_1c1768:
    // 0x1c1768: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C1768u;
    SET_GPR_U32(ctx, 31, 0x1C1770u);
    ctx->pc = 0x1C176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1768u;
    // 0x1c176c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C1768u, 0x1C1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1770u;
label_1c1770:
    // 0x1c1770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1774: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C1774u;
    SET_GPR_U32(ctx, 31, 0x1C177Cu);
    ctx->pc = 0x1C1778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1774u;
    // 0x1c1778: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C1774u, 0x1C177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C177Cu;
label_1c177c:
    // 0x1c177c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1780: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1784: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1788: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x1c1788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x1c178c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1790: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1790u;
    {
        const bool branch_taken_0x1c1790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1790) {
            ctx->pc = 0x1C179Cu;
            return;
        }
    }
    ctx->pc = 0x1C1798u;
    // 0x1c1798: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1c1798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    ctx->pc = 0x1c179cu;
}
