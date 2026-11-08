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

// Function: entry_001b5628
// Address: 0x1b5628 - 0x1b5abc
void entry_001b5628_0x1b5628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5628_0x1b5628");
#endif

    switch (ctx->pc) {
        case 0x1b5630u: goto label_1b5630;
        case 0x1b5658u: goto label_1b5658;
        case 0x1b5664u: goto label_1b5664;
        case 0x1b5670u: goto label_1b5670;
        case 0x1b5684u: goto label_1b5684;
        case 0x1b5690u: goto label_1b5690;
        case 0x1b569cu: goto label_1b569c;
        case 0x1b56b0u: goto label_1b56b0;
        case 0x1b56bcu: goto label_1b56bc;
        case 0x1b56c8u: goto label_1b56c8;
        case 0x1b56dcu: goto label_1b56dc;
        case 0x1b56e8u: goto label_1b56e8;
        case 0x1b56f4u: goto label_1b56f4;
        case 0x1b5708u: goto label_1b5708;
        case 0x1b5714u: goto label_1b5714;
        case 0x1b5720u: goto label_1b5720;
        case 0x1b5734u: goto label_1b5734;
        case 0x1b5740u: goto label_1b5740;
        case 0x1b574cu: goto label_1b574c;
        case 0x1b5760u: goto label_1b5760;
        case 0x1b576cu: goto label_1b576c;
        case 0x1b5778u: goto label_1b5778;
        case 0x1b578cu: goto label_1b578c;
        case 0x1b5798u: goto label_1b5798;
        case 0x1b57a4u: goto label_1b57a4;
        case 0x1b57b8u: goto label_1b57b8;
        case 0x1b57c4u: goto label_1b57c4;
        case 0x1b57d0u: goto label_1b57d0;
        case 0x1b57e4u: goto label_1b57e4;
        case 0x1b57f0u: goto label_1b57f0;
        case 0x1b57fcu: goto label_1b57fc;
        case 0x1b5810u: goto label_1b5810;
        case 0x1b581cu: goto label_1b581c;
        case 0x1b5828u: goto label_1b5828;
        case 0x1b583cu: goto label_1b583c;
        case 0x1b5848u: goto label_1b5848;
        case 0x1b5854u: goto label_1b5854;
        case 0x1b5868u: goto label_1b5868;
        case 0x1b5874u: goto label_1b5874;
        case 0x1b5880u: goto label_1b5880;
        case 0x1b5894u: goto label_1b5894;
        case 0x1b58a0u: goto label_1b58a0;
        case 0x1b58acu: goto label_1b58ac;
        case 0x1b58c0u: goto label_1b58c0;
        case 0x1b58ccu: goto label_1b58cc;
        case 0x1b58d8u: goto label_1b58d8;
        case 0x1b58ecu: goto label_1b58ec;
        case 0x1b58f8u: goto label_1b58f8;
        case 0x1b5904u: goto label_1b5904;
        case 0x1b5918u: goto label_1b5918;
        case 0x1b5924u: goto label_1b5924;
        case 0x1b5930u: goto label_1b5930;
        case 0x1b5944u: goto label_1b5944;
        case 0x1b5950u: goto label_1b5950;
        case 0x1b595cu: goto label_1b595c;
        case 0x1b5970u: goto label_1b5970;
        case 0x1b597cu: goto label_1b597c;
        case 0x1b5988u: goto label_1b5988;
        case 0x1b599cu: goto label_1b599c;
        case 0x1b59a8u: goto label_1b59a8;
        case 0x1b59b4u: goto label_1b59b4;
        case 0x1b59c8u: goto label_1b59c8;
        case 0x1b59d4u: goto label_1b59d4;
        case 0x1b59e0u: goto label_1b59e0;
        case 0x1b59f4u: goto label_1b59f4;
        case 0x1b5a00u: goto label_1b5a00;
        case 0x1b5a0cu: goto label_1b5a0c;
        case 0x1b5a20u: goto label_1b5a20;
        case 0x1b5a2cu: goto label_1b5a2c;
        case 0x1b5a38u: goto label_1b5a38;
        case 0x1b5a40u: goto label_1b5a40;
        case 0x1b5a64u: goto label_1b5a64;
        case 0x1b5a78u: goto label_1b5a78;
        case 0x1b5a98u: goto label_1b5a98;
        case 0x1b5ab4u: goto label_1b5ab4;
        default: break;
    }

    ctx->pc = 0x1b5628u;

    // 0x1b5628: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5628u;
    SET_GPR_U32(ctx, 31, 0x1B5630u);
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5628u, 0x1B5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5630u;
label_1b5630:
    // 0x1b5630: 0x0  nop
    ctx->pc = 0x1b5630u;
    // NOP
    // 0x1b5634: 0x0  nop
    ctx->pc = 0x1b5634u;
    // NOP
    // 0x1b5638: 0x0  nop
    ctx->pc = 0x1b5638u;
    // NOP
    // 0x1b563c: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B563Cu;
    {
        const bool branch_taken_0x1b563c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b563c) {
            ctx->pc = 0x1B5624u;
            return;
        }
    }
    ctx->pc = 0x1B5644u;
    // 0x1b5644: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5648: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1b5648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1b564c: 0x24a50d90  addiu       $a1, $a1, 0xD90
    ctx->pc = 0x1b564cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3472));
    // 0x1b5650: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5650u;
    SET_GPR_U32(ctx, 31, 0x1B5658u);
    ctx->pc = 0x1B5654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5650u;
    // 0x1b5654: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5650u, 0x1B5658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5658u;
label_1b5658:
    // 0x1b5658: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b565c: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B565Cu;
    SET_GPR_U32(ctx, 31, 0x1B5664u);
    ctx->pc = 0x1B5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B565Cu;
    // 0x1b5660: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B565Cu, 0x1B5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5664u;
label_1b5664:
    // 0x1b5664: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1b5664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1b5668: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5668u;
    SET_GPR_U32(ctx, 31, 0x1B5670u);
    ctx->pc = 0x1B566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5668u;
    // 0x1b566c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5668u, 0x1B5670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5670u;
label_1b5670:
    // 0x1b5670: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5674: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1b5674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1b5678: 0x24a50d98  addiu       $a1, $a1, 0xD98
    ctx->pc = 0x1b5678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3480));
    // 0x1b567c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B567Cu;
    SET_GPR_U32(ctx, 31, 0x1B5684u);
    ctx->pc = 0x1B5680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B567Cu;
    // 0x1b5680: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B567Cu, 0x1B5684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5684u;
label_1b5684:
    // 0x1b5684: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5688: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5688u;
    SET_GPR_U32(ctx, 31, 0x1B5690u);
    ctx->pc = 0x1B568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5688u;
    // 0x1b568c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5688u, 0x1B5690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5690u;
label_1b5690:
    // 0x1b5690: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1b5690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1b5694: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5694u;
    SET_GPR_U32(ctx, 31, 0x1B569Cu);
    ctx->pc = 0x1B5698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5694u;
    // 0x1b5698: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5694u, 0x1B569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B569Cu;
label_1b569c:
    // 0x1b569c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b569cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b56a0: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1b56a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b56a4: 0x24a50da8  addiu       $a1, $a1, 0xDA8
    ctx->pc = 0x1b56a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3496));
    // 0x1b56a8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B56A8u;
    SET_GPR_U32(ctx, 31, 0x1B56B0u);
    ctx->pc = 0x1B56ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56A8u;
    // 0x1b56ac: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B56A8u, 0x1B56B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56B0u;
label_1b56b0:
    // 0x1b56b0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b56b4: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B56B4u;
    SET_GPR_U32(ctx, 31, 0x1B56BCu);
    ctx->pc = 0x1B56B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56B4u;
    // 0x1b56b8: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B56B4u, 0x1B56BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56BCu;
label_1b56bc:
    // 0x1b56bc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1b56bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b56c0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B56C0u;
    SET_GPR_U32(ctx, 31, 0x1B56C8u);
    ctx->pc = 0x1B56C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56C0u;
    // 0x1b56c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B56C0u, 0x1B56C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56C8u;
label_1b56c8:
    // 0x1b56c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b56c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b56cc: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1b56ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1b56d0: 0x24a50db8  addiu       $a1, $a1, 0xDB8
    ctx->pc = 0x1b56d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3512));
    // 0x1b56d4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B56D4u;
    SET_GPR_U32(ctx, 31, 0x1B56DCu);
    ctx->pc = 0x1B56D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56D4u;
    // 0x1b56d8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B56D4u, 0x1B56DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56DCu;
label_1b56dc:
    // 0x1b56dc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b56dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b56e0: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B56E0u;
    SET_GPR_U32(ctx, 31, 0x1B56E8u);
    ctx->pc = 0x1B56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56E0u;
    // 0x1b56e4: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B56E0u, 0x1B56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56E8u;
label_1b56e8:
    // 0x1b56e8: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1b56e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1b56ec: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B56ECu;
    SET_GPR_U32(ctx, 31, 0x1B56F4u);
    ctx->pc = 0x1B56F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56ECu;
    // 0x1b56f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B56ECu, 0x1B56F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56F4u;
label_1b56f4:
    // 0x1b56f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b56f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b56f8: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1b56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1b56fc: 0x24a50dc8  addiu       $a1, $a1, 0xDC8
    ctx->pc = 0x1b56fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3528));
    // 0x1b5700: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5700u;
    SET_GPR_U32(ctx, 31, 0x1B5708u);
    ctx->pc = 0x1B5704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5700u;
    // 0x1b5704: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5700u, 0x1B5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5708u;
label_1b5708:
    // 0x1b5708: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b570c: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B570Cu;
    SET_GPR_U32(ctx, 31, 0x1B5714u);
    ctx->pc = 0x1B5710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B570Cu;
    // 0x1b5710: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B570Cu, 0x1B5714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5714u;
label_1b5714:
    // 0x1b5714: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1b5714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1b5718: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5718u;
    SET_GPR_U32(ctx, 31, 0x1B5720u);
    ctx->pc = 0x1B571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5718u;
    // 0x1b571c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5718u, 0x1B5720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5720u;
label_1b5720:
    // 0x1b5720: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5724: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1b5724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1b5728: 0x24a50dd8  addiu       $a1, $a1, 0xDD8
    ctx->pc = 0x1b5728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3544));
    // 0x1b572c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B572Cu;
    SET_GPR_U32(ctx, 31, 0x1B5734u);
    ctx->pc = 0x1B5730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B572Cu;
    // 0x1b5730: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B572Cu, 0x1B5734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5734u;
label_1b5734:
    // 0x1b5734: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5738: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5738u;
    SET_GPR_U32(ctx, 31, 0x1B5740u);
    ctx->pc = 0x1B573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5738u;
    // 0x1b573c: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5738u, 0x1B5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5740u;
label_1b5740:
    // 0x1b5740: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1b5740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1b5744: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5744u;
    SET_GPR_U32(ctx, 31, 0x1B574Cu);
    ctx->pc = 0x1B5748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5744u;
    // 0x1b5748: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5744u, 0x1B574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B574Cu;
label_1b574c:
    // 0x1b574c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b574cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5750: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1b5750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1b5754: 0x24a50de8  addiu       $a1, $a1, 0xDE8
    ctx->pc = 0x1b5754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3560));
    // 0x1b5758: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5758u;
    SET_GPR_U32(ctx, 31, 0x1B5760u);
    ctx->pc = 0x1B575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5758u;
    // 0x1b575c: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5758u, 0x1B5760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5760u;
label_1b5760:
    // 0x1b5760: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5764: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5764u;
    SET_GPR_U32(ctx, 31, 0x1B576Cu);
    ctx->pc = 0x1B5768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5764u;
    // 0x1b5768: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5764u, 0x1B576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B576Cu;
label_1b576c:
    // 0x1b576c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1b576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1b5770: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5770u;
    SET_GPR_U32(ctx, 31, 0x1B5778u);
    ctx->pc = 0x1B5774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5770u;
    // 0x1b5774: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5770u, 0x1B5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5778u;
label_1b5778:
    // 0x1b5778: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b577c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1b577cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1b5780: 0x24a50df8  addiu       $a1, $a1, 0xDF8
    ctx->pc = 0x1b5780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3576));
    // 0x1b5784: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5784u;
    SET_GPR_U32(ctx, 31, 0x1B578Cu);
    ctx->pc = 0x1B5788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5784u;
    // 0x1b5788: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5784u, 0x1B578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B578Cu;
label_1b578c:
    // 0x1b578c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b578cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5790: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5790u;
    SET_GPR_U32(ctx, 31, 0x1B5798u);
    ctx->pc = 0x1B5794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5790u;
    // 0x1b5794: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5790u, 0x1B5798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5798u;
label_1b5798:
    // 0x1b5798: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1b5798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1b579c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B579Cu;
    SET_GPR_U32(ctx, 31, 0x1B57A4u);
    ctx->pc = 0x1B57A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B579Cu;
    // 0x1b57a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B579Cu, 0x1B57A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57A4u;
label_1b57a4:
    // 0x1b57a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b57a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b57a8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1b57a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1b57ac: 0x24a50e08  addiu       $a1, $a1, 0xE08
    ctx->pc = 0x1b57acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3592));
    // 0x1b57b0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B57B0u;
    SET_GPR_U32(ctx, 31, 0x1B57B8u);
    ctx->pc = 0x1B57B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57B0u;
    // 0x1b57b4: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B57B0u, 0x1B57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57B8u;
label_1b57b8:
    // 0x1b57b8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b57b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b57bc: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B57BCu;
    SET_GPR_U32(ctx, 31, 0x1B57C4u);
    ctx->pc = 0x1B57C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57BCu;
    // 0x1b57c0: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B57BCu, 0x1B57C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57C4u;
label_1b57c4:
    // 0x1b57c4: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1b57c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1b57c8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B57C8u;
    SET_GPR_U32(ctx, 31, 0x1B57D0u);
    ctx->pc = 0x1B57CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57C8u;
    // 0x1b57cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B57C8u, 0x1B57D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57D0u;
label_1b57d0:
    // 0x1b57d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b57d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b57d4: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x1b57d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1b57d8: 0x24a50e18  addiu       $a1, $a1, 0xE18
    ctx->pc = 0x1b57d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3608));
    // 0x1b57dc: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B57DCu;
    SET_GPR_U32(ctx, 31, 0x1B57E4u);
    ctx->pc = 0x1B57E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57DCu;
    // 0x1b57e0: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B57DCu, 0x1B57E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57E4u;
label_1b57e4:
    // 0x1b57e4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b57e8: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B57E8u;
    SET_GPR_U32(ctx, 31, 0x1B57F0u);
    ctx->pc = 0x1B57ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57E8u;
    // 0x1b57ec: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B57E8u, 0x1B57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57F0u;
label_1b57f0:
    // 0x1b57f0: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x1b57f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1b57f4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B57F4u;
    SET_GPR_U32(ctx, 31, 0x1B57FCu);
    ctx->pc = 0x1B57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57F4u;
    // 0x1b57f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B57F4u, 0x1B57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57FCu;
label_1b57fc:
    // 0x1b57fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b57fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5800: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1b5800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1b5804: 0x24a50e28  addiu       $a1, $a1, 0xE28
    ctx->pc = 0x1b5804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3624));
    // 0x1b5808: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5808u;
    SET_GPR_U32(ctx, 31, 0x1B5810u);
    ctx->pc = 0x1B580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5808u;
    // 0x1b580c: 0x27a60088  addiu       $a2, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5808u, 0x1B5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5810u;
label_1b5810:
    // 0x1b5810: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5814: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5814u;
    SET_GPR_U32(ctx, 31, 0x1B581Cu);
    ctx->pc = 0x1B5818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5814u;
    // 0x1b5818: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5814u, 0x1B581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B581Cu;
label_1b581c:
    // 0x1b581c: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1b581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1b5820: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5820u;
    SET_GPR_U32(ctx, 31, 0x1B5828u);
    ctx->pc = 0x1B5824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5820u;
    // 0x1b5824: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5820u, 0x1B5828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5828u;
label_1b5828:
    // 0x1b5828: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b582c: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1b582cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1b5830: 0x24a50e38  addiu       $a1, $a1, 0xE38
    ctx->pc = 0x1b5830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3640));
    // 0x1b5834: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5834u;
    SET_GPR_U32(ctx, 31, 0x1B583Cu);
    ctx->pc = 0x1B5838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5834u;
    // 0x1b5838: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5834u, 0x1B583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B583Cu;
label_1b583c:
    // 0x1b583c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5840: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5840u;
    SET_GPR_U32(ctx, 31, 0x1B5848u);
    ctx->pc = 0x1B5844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5840u;
    // 0x1b5844: 0x27a50094  addiu       $a1, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5840u, 0x1B5848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5848u;
label_1b5848:
    // 0x1b5848: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1b5848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1b584c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B584Cu;
    SET_GPR_U32(ctx, 31, 0x1B5854u);
    ctx->pc = 0x1B5850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B584Cu;
    // 0x1b5850: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B584Cu, 0x1B5854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5854u;
label_1b5854:
    // 0x1b5854: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5858: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x1b5858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1b585c: 0x24a50e48  addiu       $a1, $a1, 0xE48
    ctx->pc = 0x1b585cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3656));
    // 0x1b5860: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5860u;
    SET_GPR_U32(ctx, 31, 0x1B5868u);
    ctx->pc = 0x1B5864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5860u;
    // 0x1b5864: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5860u, 0x1B5868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5868u;
label_1b5868:
    // 0x1b5868: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b586c: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B586Cu;
    SET_GPR_U32(ctx, 31, 0x1B5874u);
    ctx->pc = 0x1B5870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B586Cu;
    // 0x1b5870: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B586Cu, 0x1B5874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5874u;
label_1b5874:
    // 0x1b5874: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x1b5874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1b5878: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5878u;
    SET_GPR_U32(ctx, 31, 0x1B5880u);
    ctx->pc = 0x1B587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5878u;
    // 0x1b587c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5878u, 0x1B5880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5880u;
label_1b5880:
    // 0x1b5880: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5884: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x1b5884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1b5888: 0x24a50e58  addiu       $a1, $a1, 0xE58
    ctx->pc = 0x1b5888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3672));
    // 0x1b588c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B588Cu;
    SET_GPR_U32(ctx, 31, 0x1B5894u);
    ctx->pc = 0x1B5890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B588Cu;
    // 0x1b5890: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B588Cu, 0x1B5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5894u;
label_1b5894:
    // 0x1b5894: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5898: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5898u;
    SET_GPR_U32(ctx, 31, 0x1B58A0u);
    ctx->pc = 0x1B589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5898u;
    // 0x1b589c: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5898u, 0x1B58A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58A0u;
label_1b58a0:
    // 0x1b58a0: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x1b58a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1b58a4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B58A4u;
    SET_GPR_U32(ctx, 31, 0x1B58ACu);
    ctx->pc = 0x1B58A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58A4u;
    // 0x1b58a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B58A4u, 0x1B58ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58ACu;
label_1b58ac:
    // 0x1b58ac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b58acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b58b0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x1b58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1b58b4: 0x24a50e70  addiu       $a1, $a1, 0xE70
    ctx->pc = 0x1b58b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3696));
    // 0x1b58b8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B58B8u;
    SET_GPR_U32(ctx, 31, 0x1B58C0u);
    ctx->pc = 0x1B58BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58B8u;
    // 0x1b58bc: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B58B8u, 0x1B58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58C0u;
label_1b58c0:
    // 0x1b58c0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b58c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b58c4: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B58C4u;
    SET_GPR_U32(ctx, 31, 0x1B58CCu);
    ctx->pc = 0x1B58C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58C4u;
    // 0x1b58c8: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B58C4u, 0x1B58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58CCu;
label_1b58cc:
    // 0x1b58cc: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x1b58ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1b58d0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B58D0u;
    SET_GPR_U32(ctx, 31, 0x1B58D8u);
    ctx->pc = 0x1B58D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58D0u;
    // 0x1b58d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B58D0u, 0x1B58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58D8u;
label_1b58d8:
    // 0x1b58d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b58dc: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x1b58dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1b58e0: 0x24a50e88  addiu       $a1, $a1, 0xE88
    ctx->pc = 0x1b58e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3720));
    // 0x1b58e4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B58E4u;
    SET_GPR_U32(ctx, 31, 0x1B58ECu);
    ctx->pc = 0x1B58E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58E4u;
    // 0x1b58e8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B58E4u, 0x1B58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58ECu;
label_1b58ec:
    // 0x1b58ec: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b58f0: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B58F0u;
    SET_GPR_U32(ctx, 31, 0x1B58F8u);
    ctx->pc = 0x1B58F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58F0u;
    // 0x1b58f4: 0x27a500b4  addiu       $a1, $sp, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B58F0u, 0x1B58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58F8u;
label_1b58f8:
    // 0x1b58f8: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x1b58f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1b58fc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B58FCu;
    SET_GPR_U32(ctx, 31, 0x1B5904u);
    ctx->pc = 0x1B5900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58FCu;
    // 0x1b5900: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B58FCu, 0x1B5904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5904u;
label_1b5904:
    // 0x1b5904: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5908: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x1b5908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1b590c: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x1b590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
    // 0x1b5910: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5910u;
    SET_GPR_U32(ctx, 31, 0x1B5918u);
    ctx->pc = 0x1B5914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5910u;
    // 0x1b5914: 0x27a600b8  addiu       $a2, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5910u, 0x1B5918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5918u;
label_1b5918:
    // 0x1b5918: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b591c: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B591Cu;
    SET_GPR_U32(ctx, 31, 0x1B5924u);
    ctx->pc = 0x1B5920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B591Cu;
    // 0x1b5920: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B591Cu, 0x1B5924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5924u;
label_1b5924:
    // 0x1b5924: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x1b5924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1b5928: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5928u;
    SET_GPR_U32(ctx, 31, 0x1B5930u);
    ctx->pc = 0x1B592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5928u;
    // 0x1b592c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5928u, 0x1B5930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5930u;
label_1b5930:
    // 0x1b5930: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5934: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x1b5934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1b5938: 0x24a50ea8  addiu       $a1, $a1, 0xEA8
    ctx->pc = 0x1b5938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3752));
    // 0x1b593c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B593Cu;
    SET_GPR_U32(ctx, 31, 0x1B5944u);
    ctx->pc = 0x1B5940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B593Cu;
    // 0x1b5940: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B593Cu, 0x1B5944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5944u;
label_1b5944:
    // 0x1b5944: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5948: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5948u;
    SET_GPR_U32(ctx, 31, 0x1B5950u);
    ctx->pc = 0x1B594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5948u;
    // 0x1b594c: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5948u, 0x1B5950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5950u;
label_1b5950:
    // 0x1b5950: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x1b5950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1b5954: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5954u;
    SET_GPR_U32(ctx, 31, 0x1B595Cu);
    ctx->pc = 0x1B5958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5954u;
    // 0x1b5958: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5954u, 0x1B595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B595Cu;
label_1b595c:
    // 0x1b595c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b595cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5960: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x1b5960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x1b5964: 0x24a50eb8  addiu       $a1, $a1, 0xEB8
    ctx->pc = 0x1b5964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3768));
    // 0x1b5968: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5968u;
    SET_GPR_U32(ctx, 31, 0x1B5970u);
    ctx->pc = 0x1B596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5968u;
    // 0x1b596c: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5968u, 0x1B5970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5970u;
label_1b5970:
    // 0x1b5970: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5974: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5974u;
    SET_GPR_U32(ctx, 31, 0x1B597Cu);
    ctx->pc = 0x1B5978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5974u;
    // 0x1b5978: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5974u, 0x1B597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B597Cu;
label_1b597c:
    // 0x1b597c: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x1b597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x1b5980: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5980u;
    SET_GPR_U32(ctx, 31, 0x1B5988u);
    ctx->pc = 0x1B5984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5980u;
    // 0x1b5984: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5980u, 0x1B5988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5988u;
label_1b5988:
    // 0x1b5988: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b598c: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x1b598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1b5990: 0x24a50ec8  addiu       $a1, $a1, 0xEC8
    ctx->pc = 0x1b5990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3784));
    // 0x1b5994: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5994u;
    SET_GPR_U32(ctx, 31, 0x1B599Cu);
    ctx->pc = 0x1B5998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5994u;
    // 0x1b5998: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5994u, 0x1B599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B599Cu;
label_1b599c:
    // 0x1b599c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b59a0: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B59A0u;
    SET_GPR_U32(ctx, 31, 0x1B59A8u);
    ctx->pc = 0x1B59A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59A0u;
    // 0x1b59a4: 0x27a500d4  addiu       $a1, $sp, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B59A0u, 0x1B59A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59A8u;
label_1b59a8:
    // 0x1b59a8: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x1b59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1b59ac: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B59ACu;
    SET_GPR_U32(ctx, 31, 0x1B59B4u);
    ctx->pc = 0x1B59B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59ACu;
    // 0x1b59b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B59ACu, 0x1B59B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59B4u;
label_1b59b4:
    // 0x1b59b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b59b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b59b8: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x1b59b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1b59bc: 0x24a50ed8  addiu       $a1, $a1, 0xED8
    ctx->pc = 0x1b59bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3800));
    // 0x1b59c0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B59C0u;
    SET_GPR_U32(ctx, 31, 0x1B59C8u);
    ctx->pc = 0x1B59C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59C0u;
    // 0x1b59c4: 0x27a600d8  addiu       $a2, $sp, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B59C0u, 0x1B59C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59C8u;
label_1b59c8:
    // 0x1b59c8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b59c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b59cc: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B59CCu;
    SET_GPR_U32(ctx, 31, 0x1B59D4u);
    ctx->pc = 0x1B59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59CCu;
    // 0x1b59d0: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B59CCu, 0x1B59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59D4u;
label_1b59d4:
    // 0x1b59d4: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x1b59d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1b59d8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B59D8u;
    SET_GPR_U32(ctx, 31, 0x1B59E0u);
    ctx->pc = 0x1B59DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59D8u;
    // 0x1b59dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B59D8u, 0x1B59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59E0u;
label_1b59e0:
    // 0x1b59e0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b59e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b59e4: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x1b59e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1b59e8: 0x24a50ee8  addiu       $a1, $a1, 0xEE8
    ctx->pc = 0x1b59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3816));
    // 0x1b59ec: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B59ECu;
    SET_GPR_U32(ctx, 31, 0x1B59F4u);
    ctx->pc = 0x1B59F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59ECu;
    // 0x1b59f0: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B59ECu, 0x1B59F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59F4u;
label_1b59f4:
    // 0x1b59f4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b59f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b59f8: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B59F8u;
    SET_GPR_U32(ctx, 31, 0x1B5A00u);
    ctx->pc = 0x1B59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59F8u;
    // 0x1b59fc: 0x27a500e4  addiu       $a1, $sp, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B59F8u, 0x1B5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A00u;
label_1b5a00:
    // 0x1b5a00: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x1b5a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1b5a04: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5A04u;
    SET_GPR_U32(ctx, 31, 0x1B5A0Cu);
    ctx->pc = 0x1B5A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A04u;
    // 0x1b5a08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5A04u, 0x1B5A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A0Cu;
label_1b5a0c:
    // 0x1b5a0c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5a10: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x1b5a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1b5a14: 0x24a50ef8  addiu       $a1, $a1, 0xEF8
    ctx->pc = 0x1b5a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3832));
    // 0x1b5a18: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5A18u;
    SET_GPR_U32(ctx, 31, 0x1B5A20u);
    ctx->pc = 0x1B5A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A18u;
    // 0x1b5a1c: 0x27a600e8  addiu       $a2, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5A18u, 0x1B5A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A20u;
label_1b5a20:
    // 0x1b5a20: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5a24: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5A24u;
    SET_GPR_U32(ctx, 31, 0x1B5A2Cu);
    ctx->pc = 0x1B5A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A24u;
    // 0x1b5a28: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5A24u, 0x1B5A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A2Cu;
label_1b5a2c:
    // 0x1b5a2c: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x1b5a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1b5a30: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5A30u;
    SET_GPR_U32(ctx, 31, 0x1B5A38u);
    ctx->pc = 0x1B5A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A30u;
    // 0x1b5a34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5A30u, 0x1B5A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A38u;
label_1b5a38:
    // 0x1b5a38: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B5A38u;
    SET_GPR_U32(ctx, 31, 0x1B5A40u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B5A38u, 0x1B5A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A40u;
label_1b5a40:
    // 0x1b5a40: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b5a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b5a44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a48: 0x8c262e88  lw          $a2, 0x2E88($at)
    ctx->pc = 0x1b5a48u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x212E88u));
    // 0x1b5a4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5a50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a54: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b5a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b5a58: 0x8c272e90  lw          $a3, 0x2E90($at)
    ctx->pc = 0x1b5a58u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x212E90u));
    // 0x1b5a5c: 0xc062a44  jal         func_18A910
    ctx->pc = 0x1B5A5Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A64u);
    ctx->pc = 0x1B5A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A5Cu;
    // 0x1b5a60: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A910u, 0x1B5A5Cu, 0x1B5A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A64u;
label_1b5a64:
    // 0x1b5a64: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b5a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b5a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a6c: 0x8c262e98  lw          $a2, 0x2E98($at)
    ctx->pc = 0x1b5a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x212E98u));
    // 0x1b5a70: 0xc062ba4  jal         func_18AE90
    ctx->pc = 0x1B5A70u;
    SET_GPR_U32(ctx, 31, 0x1B5A78u);
    ctx->pc = 0x1B5A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A70u;
    // 0x1b5a74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE90u, 0x1B5A70u, 0x1B5A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A78u;
label_1b5a78:
    // 0x1b5a78: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b5a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b5a7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5a80: 0x8c262ea0  lw          $a2, 0x2EA0($at)
    ctx->pc = 0x1b5a80u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x212EA0u));
    // 0x1b5a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a88: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b5a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b5a8c: 0x8c272ea8  lw          $a3, 0x2EA8($at)
    ctx->pc = 0x1b5a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x212EA8u));
    // 0x1b5a90: 0xc062a44  jal         func_18A910
    ctx->pc = 0x1B5A90u;
    SET_GPR_U32(ctx, 31, 0x1B5A98u);
    ctx->pc = 0x1B5A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A90u;
    // 0x1b5a94: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A910u, 0x1B5A90u, 0x1B5A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A98u;
label_1b5a98:
    // 0x1b5a98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5a9c: 0x9022f258  lbu         $v0, -0xDA8($at)
    ctx->pc = 0x1b5a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36F258u));
    // 0x1b5aa0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5AA0u;
    {
        const bool branch_taken_0x1b5aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AA0u;
        // 0x1b5aa4: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5aa0) {
            ctx->pc = 0x1B5ABCu;
            return;
        }
    }
    ctx->pc = 0x1B5AA8u;
    // 0x1b5aa8: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1b5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1b5aac: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1B5AACu;
    SET_GPR_U32(ctx, 31, 0x1B5AB4u);
    ctx->pc = 0x1B5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5AACu;
    // 0x1b5ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1B5AACu, 0x1B5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AB4u;
label_1b5ab4:
    // 0x1b5ab4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5AB4u;
    {
        const bool branch_taken_0x1b5ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ab4) {
            ctx->pc = 0x1B5AC4u;
            return;
        }
    }
    ctx->pc = 0x1B5ABCu;
}
