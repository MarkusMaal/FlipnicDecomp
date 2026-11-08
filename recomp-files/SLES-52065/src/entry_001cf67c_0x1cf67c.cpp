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

// Function: entry_001cf67c
// Address: 0x1cf67c - 0x1cf6f8
void entry_001cf67c_0x1cf67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf67c_0x1cf67c");
#endif

    switch (ctx->pc) {
        case 0x1cf6a0u: goto label_1cf6a0;
        case 0x1cf6c4u: goto label_1cf6c4;
        case 0x1cf6d4u: goto label_1cf6d4;
        case 0x1cf6e8u: goto label_1cf6e8;
        case 0x1cf6f0u: goto label_1cf6f0;
        default: break;
    }

    ctx->pc = 0x1cf67cu;

    // 0x1cf67c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf680: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cf680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cf684: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1cf684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cf688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf68c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1cf68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf690: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cf690u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf694: 0x26aa0078  addiu       $t2, $s5, 0x78
    ctx->pc = 0x1cf694u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 120));
    // 0x1cf698: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CF698u;
    SET_GPR_U32(ctx, 31, 0x1CF6A0u);
    ctx->pc = 0x1CF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF698u;
    // 0x1cf69c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CF698u, 0x1CF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6A0u;
label_1cf6a0:
    // 0x1cf6a0: 0x8ea50078  lw          $a1, 0x78($s5)
    ctx->pc = 0x1cf6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf6a4: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1cf6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf6a8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1cf6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cf6ac: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x1cf6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x1cf6b0: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x1cf6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1cf6b4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CF6B4u;
    {
        const bool branch_taken_0x1cf6b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6B4u;
        // 0x1cf6b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6b4) {
            ctx->pc = 0x1CF6F8u;
            return;
        }
    }
    ctx->pc = 0x1CF6BCu;
    // 0x1cf6bc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CF6BCu;
    SET_GPR_U32(ctx, 31, 0x1CF6C4u);
    ctx->pc = 0x1CF6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6BCu;
    // 0x1cf6c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CF6BCu, 0x1CF6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6C4u;
label_1cf6c4:
    // 0x1cf6c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CF6C4u;
    {
        const bool branch_taken_0x1cf6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6C4u;
        // 0x1cf6c8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6c4) {
            ctx->pc = 0x1CF720u;
            return;
        }
    }
    ctx->pc = 0x1CF6CCu;
    // 0x1cf6cc: 0xc073178  jal         func_1CC5E0
    ctx->pc = 0x1CF6CCu;
    SET_GPR_U32(ctx, 31, 0x1CF6D4u);
    ctx->pc = 0x1CF6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6CCu;
    // 0x1cf6d0: 0xa020fb48  sb          $zero, -0x4B8($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966088), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E0u, 0x1CF6CCu, 0x1CF6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6D4u;
label_1cf6d4:
    // 0x1cf6d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf6dc: 0x8c25fb50  lw          $a1, -0x4B0($at)
    ctx->pc = 0x1cf6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FB50u));
    // 0x1cf6e0: 0xc072fcc  jal         func_1CBF30
    ctx->pc = 0x1CF6E0u;
    SET_GPR_U32(ctx, 31, 0x1CF6E8u);
    ctx->pc = 0x1CF6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6E0u;
    // 0x1cf6e4: 0x27a6008c  addiu       $a2, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF30u, 0x1CF6E0u, 0x1CF6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6E8u;
label_1cf6e8:
    // 0x1cf6e8: 0xc073dd4  jal         func_1CF750
    ctx->pc = 0x1CF6E8u;
    SET_GPR_U32(ctx, 31, 0x1CF6F0u);
    ctx->pc = 0x1CF6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6E8u;
    // 0x1cf6ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF750u, 0x1CF6E8u, 0x1CF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6F0u;
label_1cf6f0:
    // 0x1cf6f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CF6F0u;
    {
        const bool branch_taken_0x1cf6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6F0u;
        // 0x1cf6f4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6f0) {
            ctx->pc = 0x1CF724u;
            return;
        }
    }
    ctx->pc = 0x1CF6F8u;
}
