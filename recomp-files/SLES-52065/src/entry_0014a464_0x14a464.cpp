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

// Function: entry_0014a464
// Address: 0x14a464 - 0x14a55c
void entry_0014a464_0x14a464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a464_0x14a464");
#endif

    switch (ctx->pc) {
        case 0x14a47cu: goto label_14a47c;
        case 0x14a4ccu: goto label_14a4cc;
        case 0x14a4d8u: goto label_14a4d8;
        case 0x14a4e8u: goto label_14a4e8;
        default: break;
    }

    ctx->pc = 0x14a464u;

    // 0x14a464: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x14a464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14a468: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x14a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x14a46c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x14a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14a470: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14a470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a474: 0xc052340  jal         func_148D00
    ctx->pc = 0x14A474u;
    SET_GPR_U32(ctx, 31, 0x14A47Cu);
    ctx->pc = 0x14A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A474u;
    // 0x14a478: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14A474u, 0x14A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A47Cu;
label_14a47c:
    // 0x14a47c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x14a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x14a480: 0x27be01a8  addiu       $fp, $sp, 0x1A8
    ctx->pc = 0x14a480u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x14a484: 0x8fa30324  lw          $v1, 0x324($sp)
    ctx->pc = 0x14a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
    // 0x14a488: 0x27b701ac  addiu       $s7, $sp, 0x1AC
    ctx->pc = 0x14a488u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x14a48c: 0x27b601b0  addiu       $s6, $sp, 0x1B0
    ctx->pc = 0x14a48cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x14a490: 0x27b001b4  addiu       $s0, $sp, 0x1B4
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x14a494: 0x27a40800  addiu       $a0, $sp, 0x800
    ctx->pc = 0x14a494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x14a498: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x14a498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14a49c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x14a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x14a4a0: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x14a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x14a4a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14a4a8: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x14a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
    // 0x14a4ac: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x14a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x14a4b0: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x14a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x14a4b4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x14a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x14a4b8: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x14a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x14a4bc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x14a4c0: 0x8fa20334  lw          $v0, 0x334($sp)
    ctx->pc = 0x14a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
    // 0x14a4c4: 0xc052bf8  jal         func_14AFE0
    ctx->pc = 0x14A4C4u;
    SET_GPR_U32(ctx, 31, 0x14A4CCu);
    ctx->pc = 0x14A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4C4u;
    // 0x14a4c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFE0u, 0x14A4C4u, 0x14A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4CCu;
label_14a4cc:
    // 0x14a4cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14a4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4d0: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x14A4D0u;
    SET_GPR_U32(ctx, 31, 0x14A4D8u);
    ctx->pc = 0x14A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4D0u;
    // 0x14a4d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABD0u, 0x14A4D0u, 0x14A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4D8u;
label_14a4d8:
    // 0x14a4d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4dc: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x14a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x14a4e0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A4E0u;
    SET_GPR_U32(ctx, 31, 0x14A4E8u);
    ctx->pc = 0x14A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4E0u;
    // 0x14a4e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A4E0u, 0x14A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4E8u;
label_14a4e8:
    // 0x14a4e8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14a4ec: 0x27a5034c  addiu       $a1, $sp, 0x34C
    ctx->pc = 0x14a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 844));
    // 0x14a4f0: 0x27a60350  addiu       $a2, $sp, 0x350
    ctx->pc = 0x14a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x14a4f4: 0x27a20354  addiu       $v0, $sp, 0x354
    ctx->pc = 0x14a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 852));
    // 0x14a4f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x14a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14a4fc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14a500: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x14a500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x14a504: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x14a504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14a508: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14a508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14a50c: 0x8fa30340  lw          $v1, 0x340($sp)
    ctx->pc = 0x14a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x14a510: 0x8fa40344  lw          $a0, 0x344($sp)
    ctx->pc = 0x14a510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
    // 0x14a514: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x14a514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x14a518: 0x27a301c4  addiu       $v1, $sp, 0x1C4
    ctx->pc = 0x14a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x14a51c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14a520: 0x8fa40348  lw          $a0, 0x348($sp)
    ctx->pc = 0x14a520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x14a524: 0x27a301c8  addiu       $v1, $sp, 0x1C8
    ctx->pc = 0x14a524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14a528: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14a528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14a52c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a530: 0x27a301cc  addiu       $v1, $sp, 0x1CC
    ctx->pc = 0x14a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x14a534: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14a534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14a538: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x14a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14a53c: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x14a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x14a540: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14a540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14a544: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a548: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x14a548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x14a54c: 0x16340003  bne         $s1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A54Cu;
    {
        const bool branch_taken_0x14a54c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x14A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A54Cu;
        // 0x14a550: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a54c) {
            ctx->pc = 0x14A55Cu;
            return;
        }
    }
    ctx->pc = 0x14A554u;
    // 0x14a554: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14A554u;
    {
        const bool branch_taken_0x14a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A554u;
        // 0x14a558: 0x27a201c0  addiu       $v0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a554) {
            ctx->pc = 0x14A5B8u;
            return;
        }
    }
    ctx->pc = 0x14A55Cu;
}
