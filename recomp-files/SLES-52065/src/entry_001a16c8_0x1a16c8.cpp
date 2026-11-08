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

// Function: entry_001a16c8
// Address: 0x1a16c8 - 0x1a1734
void entry_001a16c8_0x1a16c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a16c8_0x1a16c8");
#endif

    switch (ctx->pc) {
        case 0x1a16dcu: goto label_1a16dc;
        case 0x1a1708u: goto label_1a1708;
        default: break;
    }

    ctx->pc = 0x1a16c8u;

label_1a16c8:
    // 0x1a16c8: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_1a16cc:
    if (ctx->pc == 0x1A16CCu) {
        ctx->pc = 0x1A16D0u;
        goto label_1a16d0;
    }
    ctx->pc = 0x1A16C8u;
    {
        const bool branch_taken_0x1a16c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16c8) {
            ctx->pc = 0x1A1734u;
            return;
        }
    }
    ctx->pc = 0x1A16D0u;
label_1a16d0:
    // 0x1a16d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a16d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a16d4:
    // 0x1a16d4: 0xc064ee0  jal         func_193B80
label_1a16d8:
    if (ctx->pc == 0x1A16D8u) {
        ctx->pc = 0x1A16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16D4u;
        // 0x1a16d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16DCu;
        goto label_1a16dc;
    }
    ctx->pc = 0x1A16D4u;
    SET_GPR_U32(ctx, 31, 0x1A16DCu);
    ctx->pc = 0x1A16D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16D4u;
    // 0x1a16d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A16D4u, 0x1A16DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16DCu;
label_1a16dc:
    // 0x1a16dc: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a16e0:
    // 0x1a16e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a16e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a16e4:
    // 0x1a16e4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a16e8:
    // 0x1a16e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a16ec:
    // 0x1a16ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a16f0:
    // 0x1a16f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a16f4:
    // 0x1a16f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a16f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a16f8:
    // 0x1a16f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a16f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a16fc:
    // 0x1a16fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a16fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a1700:
    // 0x1a1700: 0x320f809  jalr        $t9
label_1a1704:
    if (ctx->pc == 0x1A1704u) {
        ctx->pc = 0x1A1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1700u;
        // 0x1a1704: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1708u;
        goto label_1a1708;
    }
    ctx->pc = 0x1A1700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1708u);
        ctx->pc = 0x1A1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1700u;
        // 0x1a1704: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1700u, 0x1A1708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1708u;
label_1a1708:
    // 0x1a1708: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a1708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a170c:
    // 0x1a170c: 0xae830c7c  sw          $v1, 0xC7C($s4)
    ctx->pc = 0x1a170cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
label_1a1710:
    // 0x1a1710: 0x8e830694  lw          $v1, 0x694($s4)
    ctx->pc = 0x1a1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_1a1714:
    // 0x1a1714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a1718:
    // 0x1a1718: 0xae830694  sw          $v1, 0x694($s4)
    ctx->pc = 0x1a1718u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 3));
label_1a171c:
    // 0x1a171c: 0x8e830694  lw          $v1, 0x694($s4)
    ctx->pc = 0x1a171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_1a1720:
    // 0x1a1720: 0x28630063  slti        $v1, $v1, 0x63
    ctx->pc = 0x1a1720u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)99) ? 1 : 0);
label_1a1724:
    // 0x1a1724: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a1728:
    if (ctx->pc == 0x1A1728u) {
        ctx->pc = 0x1A172Cu;
        goto label_1a172c;
    }
    ctx->pc = 0x1A1724u;
    {
        const bool branch_taken_0x1a1724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1724) {
            ctx->pc = 0x1A1734u;
            return;
        }
    }
    ctx->pc = 0x1A172Cu;
label_1a172c:
    // 0x1a172c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1a172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1a1730:
    // 0x1a1730: 0xae830694  sw          $v1, 0x694($s4)
    ctx->pc = 0x1a1730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 3));
    ctx->pc = 0x1a1734u;
}
