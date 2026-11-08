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

// Function: entry_0021a4ac
// Address: 0x21a4ac - 0x21a630
void entry_0021a4ac_0x21a4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a4ac_0x21a4ac");
#endif

    ctx->pc = 0x21a4acu;

    // 0x21a4ac: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x21a4acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x21a4b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21A4B0u;
    {
        const bool branch_taken_0x21a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4B0u;
        // 0x21a4b4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4b0) {
            ctx->pc = 0x21A498u;
            return;
        }
    }
    ctx->pc = 0x21A4B8u;
    // 0x21a4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x21A4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4B8u;
        // 0x21a4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A4C0u;
    // 0x21a4c0: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x21a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x21a4c4: 0x304300f0  andi        $v1, $v0, 0xF0
    ctx->pc = 0x21a4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x21a4c8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x21a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x21a4cc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21A4CCu;
    {
        const bool branch_taken_0x21a4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4CCu;
        // 0x21a4d0: 0x2c620031  sltiu       $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4cc) {
            ctx->pc = 0x21A520u;
            goto label_21a520;
        }
    }
    ctx->pc = 0x21A4D4u;
    // 0x21a4d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A4D4u;
    {
        const bool branch_taken_0x21a4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4D4u;
        // 0x21a4d8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4d4) {
            ctx->pc = 0x21A4FCu;
            goto label_21a4fc;
        }
    }
    ctx->pc = 0x21A4DCu;
    // 0x21a4dc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21A4DCu;
    {
        const bool branch_taken_0x21a4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4DCu;
        // 0x21a4e0: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4dc) {
            ctx->pc = 0x21A518u;
            goto label_21a518;
        }
    }
    ctx->pc = 0x21A4E4u;
    // 0x21a4e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21A4E4u;
    {
        const bool branch_taken_0x21a4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4E4u;
        // 0x21a4e8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4e4) {
            ctx->pc = 0x21A510u;
            goto label_21a510;
        }
    }
    ctx->pc = 0x21A4ECu;
    // 0x21a4ec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21A4ECu;
    {
        const bool branch_taken_0x21a4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4ECu;
        // 0x21a4f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4ec) {
            ctx->pc = 0x21A520u;
            goto label_21a520;
        }
    }
    ctx->pc = 0x21A4F4u;
    // 0x21a4f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21A4F4u;
    {
        const bool branch_taken_0x21a4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4f4) {
            ctx->pc = 0x21A548u;
            goto label_21a548;
        }
    }
    ctx->pc = 0x21A4FCu;
label_21a4fc:
    // 0x21a4fc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x21a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x21a500: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A500u;
    {
        const bool branch_taken_0x21a500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A500u;
        // 0x21a504: 0x2c620051  sltiu       $v0, $v1, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a500) {
            ctx->pc = 0x21A518u;
            goto label_21a518;
        }
    }
    ctx->pc = 0x21A508u;
    // 0x21a508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A508u;
    {
        const bool branch_taken_0x21a508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A508u;
        // 0x21a50c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a508) {
            ctx->pc = 0x21A518u;
            goto label_21a518;
        }
    }
    ctx->pc = 0x21A510u;
label_21a510:
    // 0x21a510: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A510u;
    {
        const bool branch_taken_0x21a510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21a510) {
            ctx->pc = 0x21A520u;
            goto label_21a520;
        }
    }
    ctx->pc = 0x21A518u;
label_21a518:
    // 0x21a518: 0x3e00008  jr          $ra
    ctx->pc = 0x21A518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A518u;
        // 0x21a51c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A520u;
label_21a520:
    // 0x21a520: 0x40842800  mtc0        $a0, PageMask
    ctx->pc = 0x21a520u;
    ctx->cop0_pagemask = GPR_U32(ctx, 4) & 0x01FFE000;
    // 0x21a524: 0x40855000  mtc0        $a1, EntryHi
    ctx->pc = 0x21a524u;
    ctx->cop0_entryhi = GPR_U32(ctx, 5) & 0xC00000FF;
    // 0x21a528: 0x40861000  mtc0        $a2, EntryLo0
    ctx->pc = 0x21a528u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 6) & 0x3FFFFFFF;
    // 0x21a52c: 0x40871800  mtc0        $a3, EntryLo1
    ctx->pc = 0x21a52cu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 7) & 0x3FFFFFFF;
    // 0x21a530: 0x40f  sync.p
    ctx->pc = 0x21a530u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a534: 0x42000006  tlbwr
    ctx->pc = 0x21a534u;
    runtime->handleTLBWR(rdram, ctx);
    // 0x21a538: 0x40f  sync.p
    ctx->pc = 0x21a538u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a53c: 0x42000008  tlbp
    ctx->pc = 0x21a53cu;
    runtime->handleTLBP(rdram, ctx);
    // 0x21a540: 0x40f  sync.p
    ctx->pc = 0x21a540u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a544: 0x40020000  mfc0        $v0, Index
    ctx->pc = 0x21a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_index);
label_21a548:
    // 0x21a548: 0x3e00008  jr          $ra
    ctx->pc = 0x21A548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A550u;
    // 0x21a550: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x21a550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x21a554: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21A554u;
    {
        const bool branch_taken_0x21a554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A554u;
        // 0x21a558: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a554) {
            ctx->pc = 0x21A584u;
            goto label_21a584;
        }
    }
    ctx->pc = 0x21A55Cu;
    // 0x21a55c: 0x40840000  mtc0        $a0, Index
    ctx->pc = 0x21a55cu;
    ctx->cop0_index = GPR_U32(ctx, 4) & 0x3F;
    // 0x21a560: 0x40852800  mtc0        $a1, PageMask
    ctx->pc = 0x21a560u;
    ctx->cop0_pagemask = GPR_U32(ctx, 5) & 0x01FFE000;
    // 0x21a564: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x21a564u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
    // 0x21a568: 0x40871000  mtc0        $a3, EntryLo0
    ctx->pc = 0x21a568u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 7) & 0x3FFFFFFF;
    // 0x21a56c: 0x40881800  mtc0        $t0, EntryLo1
    ctx->pc = 0x21a56cu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 8) & 0x3FFFFFFF;
    // 0x21a570: 0x40f  sync.p
    ctx->pc = 0x21a570u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a574: 0x42000002  tlbwi
    ctx->pc = 0x21a574u;
    runtime->handleTLBWI(rdram, ctx);
    // 0x21a578: 0x40f  sync.p
    ctx->pc = 0x21a578u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a57c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A57Cu;
        // 0x21a580: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A584u;
label_21a584:
    // 0x21a584: 0x3e00008  jr          $ra
    ctx->pc = 0x21A584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A58Cu;
    // 0x21a58c: 0x0  nop
    ctx->pc = 0x21a58cu;
    // NOP
    // 0x21a590: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x21a590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x21a594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A594u;
    {
        const bool branch_taken_0x21a594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a594) {
            ctx->pc = 0x21A5A4u;
            goto label_21a5a4;
        }
    }
    ctx->pc = 0x21A59Cu;
    // 0x21a59c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A59Cu;
        // 0x21a5a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A5A4u;
label_21a5a4:
    // 0x21a5a4: 0x40840000  mtc0        $a0, Index
    ctx->pc = 0x21a5a4u;
    ctx->cop0_index = GPR_U32(ctx, 4) & 0x3F;
    // 0x21a5a8: 0x40f  sync.p
    ctx->pc = 0x21a5a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a5ac: 0x42000001  tlbr
    ctx->pc = 0x21a5acu;
    runtime->handleTLBR(rdram, ctx);
    // 0x21a5b0: 0x40f  sync.p
    ctx->pc = 0x21a5b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a5b4: 0x40022800  mfc0        $v0, PageMask
    ctx->pc = 0x21a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_pagemask);
    // 0x21a5b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x21a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x21a5bc: 0x40035000  mfc0        $v1, EntryHi
    ctx->pc = 0x21a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_entryhi);
    // 0x21a5c0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x21a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x21a5c4: 0x40021000  mfc0        $v0, EntryLo0
    ctx->pc = 0x21a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_entrylo0);
    // 0x21a5c8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x21a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x21a5cc: 0x40031800  mfc0        $v1, EntryLo1
    ctx->pc = 0x21a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_entrylo1);
    // 0x21a5d0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x21a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x21a5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5D4u;
        // 0x21a5d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A5DCu;
    // 0x21a5dc: 0x0  nop
    ctx->pc = 0x21a5dcu;
    // NOP
    // 0x21a5e0: 0x40845000  mtc0        $a0, EntryHi
    ctx->pc = 0x21a5e0u;
    ctx->cop0_entryhi = GPR_U32(ctx, 4) & 0xC00000FF;
    // 0x21a5e4: 0x40f  sync.p
    ctx->pc = 0x21a5e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a5e8: 0x42000008  tlbp
    ctx->pc = 0x21a5e8u;
    runtime->handleTLBP(rdram, ctx);
    // 0x21a5ec: 0x40f  sync.p
    ctx->pc = 0x21a5ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a5f0: 0x40040000  mfc0        $a0, Index
    ctx->pc = 0x21a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_index);
    // 0x21a5f4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A5F4u;
    {
        const bool branch_taken_0x21a5f4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x21a5f4) {
            ctx->pc = 0x21A604u;
            goto label_21a604;
        }
    }
    ctx->pc = 0x21A5FCu;
    // 0x21a5fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21A5FCu;
    {
        const bool branch_taken_0x21a5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5FCu;
        // 0x21a600: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5fc) {
            ctx->pc = 0x21A624u;
            goto label_21a624;
        }
    }
    ctx->pc = 0x21A604u;
label_21a604:
    // 0x21a604: 0x42000001  tlbr
    ctx->pc = 0x21a604u;
    runtime->handleTLBR(rdram, ctx);
    // 0x21a608: 0x40f  sync.p
    ctx->pc = 0x21a608u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a60c: 0x40022800  mfc0        $v0, PageMask
    ctx->pc = 0x21a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_pagemask);
    // 0x21a610: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x21a610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x21a614: 0x40031000  mfc0        $v1, EntryLo0
    ctx->pc = 0x21a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_entrylo0);
    // 0x21a618: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x21a618u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x21a61c: 0x40021800  mfc0        $v0, EntryLo1
    ctx->pc = 0x21a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_entrylo1);
    // 0x21a620: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x21a620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_21a624:
    // 0x21a624: 0x3e00008  jr          $ra
    ctx->pc = 0x21A624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A624u;
        // 0x21a628: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A62Cu;
    // 0x21a62c: 0x0  nop
    ctx->pc = 0x21a62cu;
    // NOP
    ctx->pc = 0x21a630u;
}
