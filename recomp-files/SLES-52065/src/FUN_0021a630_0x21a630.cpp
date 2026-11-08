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

// Function: FUN_0021a630
// Address: 0x21a630 - 0x21a760
void FUN_0021a630_0x21a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021a630_0x21a630");
#endif

    switch (ctx->pc) {
        case 0x21a67cu: goto label_21a67c;
        default: break;
    }

    ctx->pc = 0x21a630u;

    // 0x21a630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a634: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21a638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a63c: 0x32020fff  andi        $v0, $s0, 0xFFF
    ctx->pc = 0x21a63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
    // 0x21a640: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A640u;
    {
        const bool branch_taken_0x21a640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A640u;
        // 0x21a644: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a640) {
            ctx->pc = 0x21A660u;
            goto label_21a660;
        }
    }
    ctx->pc = 0x21A648u;
    // 0x21a648: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x21a648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x21a64c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x21a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x21a650: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x21a650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x21a654: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x21a654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21a658: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A658u;
    {
        const bool branch_taken_0x21a658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A658u;
        // 0x21a65c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a658) {
            ctx->pc = 0x21A668u;
            goto label_21a668;
        }
    }
    ctx->pc = 0x21A660u;
label_21a660:
    // 0x21a660: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x21A660u;
    {
        const bool branch_taken_0x21a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A660u;
        // 0x21a664: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a660) {
            ctx->pc = 0x21A750u;
            goto label_21a750;
        }
    }
    ctx->pc = 0x21A668u;
label_21a668:
    // 0x21a668: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21a668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a66c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x21a66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x21a670: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x21a670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x21a674: 0xc01d456  jal         func_075158
    ctx->pc = 0x21A674u;
    SET_GPR_U32(ctx, 31, 0x21A67Cu);
    ctx->pc = 0x21A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A674u;
    // 0x21a678: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x75158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x75158u, 0x21A674u, 0x21A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A67Cu;
label_21a67c:
    // 0x21a67c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a680: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A680u;
    {
        const bool branch_taken_0x21a680 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x21a680) {
            ctx->pc = 0x21A6A8u;
            goto label_21a6a8;
        }
    }
    ctx->pc = 0x21A688u;
    // 0x21a688: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x21A688u;
    {
        const bool branch_taken_0x21a688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A688u;
        // 0x21a68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a688) {
            ctx->pc = 0x21A750u;
            goto label_21a750;
        }
    }
    ctx->pc = 0x21A690u;
    // 0x21a690: 0x40053000  mfc0        $a1, Wired
    ctx->pc = 0x21a690u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_wired);
    // 0x21a694: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x21a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21a698: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x21a698u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
    // 0x21a69c: 0x40f  sync.p
    ctx->pc = 0x21a69cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a6a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21A6A0u;
    {
        const bool branch_taken_0x21a6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a6a0) {
            ctx->pc = 0x21A6F0u;
            goto label_21a6f0;
        }
    }
    ctx->pc = 0x21A6A8u;
label_21a6a8:
    // 0x21a6a8: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21A6A8u;
    {
        const bool branch_taken_0x21a6a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6A8u;
        // 0x21a6ac: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6a8) {
            ctx->pc = 0x21A6F0u;
            goto label_21a6f0;
        }
    }
    ctx->pc = 0x21A6B0u;
    // 0x21a6b0: 0x3c03e001  lui         $v1, 0xE001
    ctx->pc = 0x21a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57345 << 16));
    // 0x21a6b4: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x21a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x21a6b8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x21a6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a6bc: 0x40023000  mfc0        $v0, Wired
    ctx->pc = 0x21a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_wired);
    // 0x21a6c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21a6c4: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x21a6c4u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
    // 0x21a6c8: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x21a6c8u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
    // 0x21a6cc: 0x40802800  mtc0        $zero, PageMask
    ctx->pc = 0x21a6ccu;
    ctx->cop0_pagemask = GPR_U32(ctx, 0) & 0x01FFE000;
    // 0x21a6d0: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x21a6d0u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
    // 0x21a6d4: 0x40801000  mtc0        $zero, EntryLo0
    ctx->pc = 0x21a6d4u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
    // 0x21a6d8: 0x40801800  mtc0        $zero, EntryLo1
    ctx->pc = 0x21a6d8u;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
    // 0x21a6dc: 0x40f  sync.p
    ctx->pc = 0x21a6dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a6e0: 0x42000002  tlbwi
    ctx->pc = 0x21a6e0u;
    runtime->handleTLBWI(rdram, ctx);
    // 0x21a6e4: 0x40f  sync.p
    ctx->pc = 0x21a6e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a6e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x21A6E8u;
    {
        const bool branch_taken_0x21a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6E8u;
        // 0x21a6ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6e8) {
            ctx->pc = 0x21A750u;
            goto label_21a750;
        }
    }
    ctx->pc = 0x21A6F0u;
label_21a6f0:
    // 0x21a6f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21a6f4: 0x26041000  addiu       $a0, $s0, 0x1000
    ctx->pc = 0x21a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
    // 0x21a6f8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x21a6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x21a6fc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x21a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x21a700: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x21a700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x21a704: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21a704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21a708: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x21a708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x21a70c: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x21a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x21a710: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x21a710u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x21a714: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x21a714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x21a718: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x21a718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x21a71c: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x21a71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x21a720: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x21a720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x21a724: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x21a724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x21a728: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x21a728u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
    // 0x21a72c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21a72cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a730: 0x40832800  mtc0        $v1, PageMask
    ctx->pc = 0x21a730u;
    ctx->cop0_pagemask = GPR_U32(ctx, 3) & 0x01FFE000;
    // 0x21a734: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x21a734u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
    // 0x21a738: 0x40821000  mtc0        $v0, EntryLo0
    ctx->pc = 0x21a738u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 2) & 0x3FFFFFFF;
    // 0x21a73c: 0x40841800  mtc0        $a0, EntryLo1
    ctx->pc = 0x21a73cu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 4) & 0x3FFFFFFF;
    // 0x21a740: 0x40f  sync.p
    ctx->pc = 0x21a740u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a744: 0x42000002  tlbwi
    ctx->pc = 0x21a744u;
    runtime->handleTLBWI(rdram, ctx);
    // 0x21a748: 0x40f  sync.p
    ctx->pc = 0x21a748u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a74c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21a74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21a750:
    // 0x21a750: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21a750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a754: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21a754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a758: 0x3e00008  jr          $ra
    ctx->pc = 0x21A758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A758u;
        // 0x21a75c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A760u;
}
