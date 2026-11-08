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

// Function: FUN_001ce5b0
// Address: 0x1ce5b0 - 0x1ce724
void FUN_001ce5b0_0x1ce5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ce5b0_0x1ce5b0");
#endif

    switch (ctx->pc) {
        case 0x1ce5c4u: goto label_1ce5c4;
        case 0x1ce5e8u: goto label_1ce5e8;
        case 0x1ce5f4u: goto label_1ce5f4;
        case 0x1ce600u: goto label_1ce600;
        case 0x1ce614u: goto label_1ce614;
        case 0x1ce620u: goto label_1ce620;
        case 0x1ce62cu: goto label_1ce62c;
        case 0x1ce640u: goto label_1ce640;
        case 0x1ce64cu: goto label_1ce64c;
        case 0x1ce658u: goto label_1ce658;
        case 0x1ce66cu: goto label_1ce66c;
        case 0x1ce678u: goto label_1ce678;
        case 0x1ce684u: goto label_1ce684;
        case 0x1ce698u: goto label_1ce698;
        case 0x1ce6a4u: goto label_1ce6a4;
        case 0x1ce6b0u: goto label_1ce6b0;
        case 0x1ce6c4u: goto label_1ce6c4;
        case 0x1ce6d0u: goto label_1ce6d0;
        case 0x1ce6dcu: goto label_1ce6dc;
        case 0x1ce6f0u: goto label_1ce6f0;
        case 0x1ce6fcu: goto label_1ce6fc;
        case 0x1ce708u: goto label_1ce708;
        default: break;
    }

    ctx->pc = 0x1ce5b0u;

    // 0x1ce5b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ce5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ce5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce5b8: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1ce5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1ce5bc: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CE5BCu;
    SET_GPR_U32(ctx, 31, 0x1CE5C4u);
    ctx->pc = 0x1CE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5BCu;
    // 0x1ce5c0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CE5BCu, 0x1CE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5C4u;
label_1ce5c4:
    // 0x1ce5c4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ce5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ce5c8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1ce5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1ce5cc: 0x2463be60  addiu       $v1, $v1, -0x41A0
    ctx->pc = 0x1ce5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950496));
    // 0x1ce5d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce5d4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1ce5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ce5d8: 0x24a52ed0  addiu       $a1, $a1, 0x2ED0
    ctx->pc = 0x1ce5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11984));
    // 0x1ce5dc: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1ce5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1ce5e0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CE5E0u;
    SET_GPR_U32(ctx, 31, 0x1CE5E8u);
    ctx->pc = 0x1CE5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5E0u;
    // 0x1ce5e4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CE5E0u, 0x1CE5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5E8u;
label_1ce5e8:
    // 0x1ce5e8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ce5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ce5ec: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CE5ECu;
    SET_GPR_U32(ctx, 31, 0x1CE5F4u);
    ctx->pc = 0x1CE5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5ECu;
    // 0x1ce5f0: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CE5ECu, 0x1CE5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5F4u;
label_1ce5f4:
    // 0x1ce5f4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1ce5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ce5f8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CE5F8u;
    SET_GPR_U32(ctx, 31, 0x1CE600u);
    ctx->pc = 0x1CE5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5F8u;
    // 0x1ce5fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CE5F8u, 0x1CE600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE600u;
label_1ce600:
    // 0x1ce600: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce604: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1ce604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1ce608: 0x24a52ef0  addiu       $a1, $a1, 0x2EF0
    ctx->pc = 0x1ce608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12016));
    // 0x1ce60c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CE60Cu;
    SET_GPR_U32(ctx, 31, 0x1CE614u);
    ctx->pc = 0x1CE610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE60Cu;
    // 0x1ce610: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CE60Cu, 0x1CE614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE614u;
label_1ce614:
    // 0x1ce614: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ce614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ce618: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CE618u;
    SET_GPR_U32(ctx, 31, 0x1CE620u);
    ctx->pc = 0x1CE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE618u;
    // 0x1ce61c: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CE618u, 0x1CE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE620u;
label_1ce620:
    // 0x1ce620: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1ce620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1ce624: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CE624u;
    SET_GPR_U32(ctx, 31, 0x1CE62Cu);
    ctx->pc = 0x1CE628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE624u;
    // 0x1ce628: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CE624u, 0x1CE62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE62Cu;
label_1ce62c:
    // 0x1ce62c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce630: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1ce630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1ce634: 0x24a52f10  addiu       $a1, $a1, 0x2F10
    ctx->pc = 0x1ce634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12048));
    // 0x1ce638: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CE638u;
    SET_GPR_U32(ctx, 31, 0x1CE640u);
    ctx->pc = 0x1CE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE638u;
    // 0x1ce63c: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CE638u, 0x1CE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE640u;
label_1ce640:
    // 0x1ce640: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ce640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ce644: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CE644u;
    SET_GPR_U32(ctx, 31, 0x1CE64Cu);
    ctx->pc = 0x1CE648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE644u;
    // 0x1ce648: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CE644u, 0x1CE64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE64Cu;
label_1ce64c:
    // 0x1ce64c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1ce64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1ce650: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CE650u;
    SET_GPR_U32(ctx, 31, 0x1CE658u);
    ctx->pc = 0x1CE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE650u;
    // 0x1ce654: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CE650u, 0x1CE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE658u;
label_1ce658:
    // 0x1ce658: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce65c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1ce65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1ce660: 0x24a52f30  addiu       $a1, $a1, 0x2F30
    ctx->pc = 0x1ce660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12080));
    // 0x1ce664: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CE664u;
    SET_GPR_U32(ctx, 31, 0x1CE66Cu);
    ctx->pc = 0x1CE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE664u;
    // 0x1ce668: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CE664u, 0x1CE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE66Cu;
label_1ce66c:
    // 0x1ce66c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ce66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ce670: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CE670u;
    SET_GPR_U32(ctx, 31, 0x1CE678u);
    ctx->pc = 0x1CE674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE670u;
    // 0x1ce674: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CE670u, 0x1CE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE678u;
label_1ce678:
    // 0x1ce678: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1ce678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1ce67c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CE67Cu;
    SET_GPR_U32(ctx, 31, 0x1CE684u);
    ctx->pc = 0x1CE680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE67Cu;
    // 0x1ce680: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CE67Cu, 0x1CE684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE684u;
label_1ce684:
    // 0x1ce684: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce688: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1ce688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1ce68c: 0x24a52f50  addiu       $a1, $a1, 0x2F50
    ctx->pc = 0x1ce68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12112));
    // 0x1ce690: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CE690u;
    SET_GPR_U32(ctx, 31, 0x1CE698u);
    ctx->pc = 0x1CE694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE690u;
    // 0x1ce694: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CE690u, 0x1CE698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE698u;
label_1ce698:
    // 0x1ce698: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ce698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ce69c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CE69Cu;
    SET_GPR_U32(ctx, 31, 0x1CE6A4u);
    ctx->pc = 0x1CE6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE69Cu;
    // 0x1ce6a0: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CE69Cu, 0x1CE6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6A4u;
label_1ce6a4:
    // 0x1ce6a4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1ce6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1ce6a8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CE6A8u;
    SET_GPR_U32(ctx, 31, 0x1CE6B0u);
    ctx->pc = 0x1CE6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6A8u;
    // 0x1ce6ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CE6A8u, 0x1CE6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6B0u;
label_1ce6b0:
    // 0x1ce6b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce6b4: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1ce6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1ce6b8: 0x24a52f60  addiu       $a1, $a1, 0x2F60
    ctx->pc = 0x1ce6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12128));
    // 0x1ce6bc: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CE6BCu;
    SET_GPR_U32(ctx, 31, 0x1CE6C4u);
    ctx->pc = 0x1CE6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6BCu;
    // 0x1ce6c0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CE6BCu, 0x1CE6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6C4u;
label_1ce6c4:
    // 0x1ce6c4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ce6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ce6c8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CE6C8u;
    SET_GPR_U32(ctx, 31, 0x1CE6D0u);
    ctx->pc = 0x1CE6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6C8u;
    // 0x1ce6cc: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CE6C8u, 0x1CE6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6D0u;
label_1ce6d0:
    // 0x1ce6d0: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1ce6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1ce6d4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CE6D4u;
    SET_GPR_U32(ctx, 31, 0x1CE6DCu);
    ctx->pc = 0x1CE6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6D4u;
    // 0x1ce6d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CE6D4u, 0x1CE6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6DCu;
label_1ce6dc:
    // 0x1ce6dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce6e0: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1ce6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1ce6e4: 0x24a52f80  addiu       $a1, $a1, 0x2F80
    ctx->pc = 0x1ce6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12160));
    // 0x1ce6e8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CE6E8u;
    SET_GPR_U32(ctx, 31, 0x1CE6F0u);
    ctx->pc = 0x1CE6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6E8u;
    // 0x1ce6ec: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CE6E8u, 0x1CE6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6F0u;
label_1ce6f0:
    // 0x1ce6f0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ce6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ce6f4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CE6F4u;
    SET_GPR_U32(ctx, 31, 0x1CE6FCu);
    ctx->pc = 0x1CE6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6F4u;
    // 0x1ce6f8: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CE6F4u, 0x1CE6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6FCu;
label_1ce6fc:
    // 0x1ce6fc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1ce6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1ce700: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CE700u;
    SET_GPR_U32(ctx, 31, 0x1CE708u);
    ctx->pc = 0x1CE704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE700u;
    // 0x1ce704: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CE700u, 0x1CE708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE708u;
label_1ce708:
    // 0x1ce708: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ce708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ce70c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce710: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1ce710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1ce714: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ce714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ce718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce71c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE71Cu;
        // 0x1ce720: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE724u;
}
