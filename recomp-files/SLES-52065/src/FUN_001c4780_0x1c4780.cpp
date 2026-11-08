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

// Function: FUN_001c4780
// Address: 0x1c4780 - 0x1c4a6c
void FUN_001c4780_0x1c4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4780_0x1c4780");
#endif

    switch (ctx->pc) {
        case 0x1c47a0u: goto label_1c47a0;
        case 0x1c47c4u: goto label_1c47c4;
        case 0x1c47d0u: goto label_1c47d0;
        case 0x1c47dcu: goto label_1c47dc;
        case 0x1c47f0u: goto label_1c47f0;
        case 0x1c47fcu: goto label_1c47fc;
        case 0x1c4808u: goto label_1c4808;
        case 0x1c481cu: goto label_1c481c;
        case 0x1c4828u: goto label_1c4828;
        case 0x1c4834u: goto label_1c4834;
        case 0x1c4848u: goto label_1c4848;
        case 0x1c4854u: goto label_1c4854;
        case 0x1c4860u: goto label_1c4860;
        case 0x1c4874u: goto label_1c4874;
        case 0x1c4880u: goto label_1c4880;
        case 0x1c488cu: goto label_1c488c;
        case 0x1c48a0u: goto label_1c48a0;
        case 0x1c48acu: goto label_1c48ac;
        case 0x1c48b8u: goto label_1c48b8;
        case 0x1c48ccu: goto label_1c48cc;
        case 0x1c48d8u: goto label_1c48d8;
        case 0x1c48e4u: goto label_1c48e4;
        case 0x1c48f8u: goto label_1c48f8;
        case 0x1c4904u: goto label_1c4904;
        case 0x1c4910u: goto label_1c4910;
        case 0x1c4924u: goto label_1c4924;
        case 0x1c4930u: goto label_1c4930;
        case 0x1c493cu: goto label_1c493c;
        case 0x1c4950u: goto label_1c4950;
        case 0x1c495cu: goto label_1c495c;
        case 0x1c4968u: goto label_1c4968;
        case 0x1c4970u: goto label_1c4970;
        case 0x1c49b0u: goto label_1c49b0;
        case 0x1c49c0u: goto label_1c49c0;
        case 0x1c49dcu: goto label_1c49dc;
        case 0x1c49ecu: goto label_1c49ec;
        case 0x1c4a08u: goto label_1c4a08;
        case 0x1c4a14u: goto label_1c4a14;
        case 0x1c4a2cu: goto label_1c4a2c;
        case 0x1c4a48u: goto label_1c4a48;
        default: break;
    }

    ctx->pc = 0x1c4780u;

    // 0x1c4780: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c4784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c4784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c4788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c478c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4794: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x1c4794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x1c4798: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1C4798u;
    SET_GPR_U32(ctx, 31, 0x1C47A0u);
    ctx->pc = 0x1C479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4798u;
    // 0x1c479c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1C4798u, 0x1C47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47A0u;
label_1c47a0:
    // 0x1c47a0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c47a4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c47a8: 0x2463bb60  addiu       $v1, $v1, -0x44A0
    ctx->pc = 0x1c47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949728));
    // 0x1c47ac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c47acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c47b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c47b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c47b4: 0x24a51da0  addiu       $a1, $a1, 0x1DA0
    ctx->pc = 0x1c47b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7584));
    // 0x1c47b8: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x1c47b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c47bc: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C47BCu;
    SET_GPR_U32(ctx, 31, 0x1C47C4u);
    ctx->pc = 0x1C47C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47BCu;
    // 0x1c47c0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C47BCu, 0x1C47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47C4u;
label_1c47c4:
    // 0x1c47c4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c47c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c47c8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C47C8u;
    SET_GPR_U32(ctx, 31, 0x1C47D0u);
    ctx->pc = 0x1C47CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47C8u;
    // 0x1c47cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C47C8u, 0x1C47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47D0u;
label_1c47d0:
    // 0x1c47d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c47d4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C47D4u;
    SET_GPR_U32(ctx, 31, 0x1C47DCu);
    ctx->pc = 0x1C47D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47D4u;
    // 0x1c47d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C47D4u, 0x1C47DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47DCu;
label_1c47dc:
    // 0x1c47dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c47dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c47e0: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1c47e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1c47e4: 0x24a51dc0  addiu       $a1, $a1, 0x1DC0
    ctx->pc = 0x1c47e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7616));
    // 0x1c47e8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C47E8u;
    SET_GPR_U32(ctx, 31, 0x1C47F0u);
    ctx->pc = 0x1C47ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47E8u;
    // 0x1c47ec: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C47E8u, 0x1C47F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47F0u;
label_1c47f0:
    // 0x1c47f0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c47f4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C47F4u;
    SET_GPR_U32(ctx, 31, 0x1C47FCu);
    ctx->pc = 0x1C47F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47F4u;
    // 0x1c47f8: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C47F4u, 0x1C47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47FCu;
label_1c47fc:
    // 0x1c47fc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1c47fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1c4800: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C4800u;
    SET_GPR_U32(ctx, 31, 0x1C4808u);
    ctx->pc = 0x1C4804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4800u;
    // 0x1c4804: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C4800u, 0x1C4808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4808u;
label_1c4808:
    // 0x1c4808: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c480c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4810: 0x24a51de0  addiu       $a1, $a1, 0x1DE0
    ctx->pc = 0x1c4810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7648));
    // 0x1c4814: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C4814u;
    SET_GPR_U32(ctx, 31, 0x1C481Cu);
    ctx->pc = 0x1C4818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4814u;
    // 0x1c4818: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C4814u, 0x1C481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C481Cu;
label_1c481c:
    // 0x1c481c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4820: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C4820u;
    SET_GPR_U32(ctx, 31, 0x1C4828u);
    ctx->pc = 0x1C4824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4820u;
    // 0x1c4824: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C4820u, 0x1C4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4828u;
label_1c4828:
    // 0x1c4828: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c4828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c482c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C482Cu;
    SET_GPR_U32(ctx, 31, 0x1C4834u);
    ctx->pc = 0x1C4830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C482Cu;
    // 0x1c4830: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C482Cu, 0x1C4834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4834u;
label_1c4834:
    // 0x1c4834: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4838: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1c4838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1c483c: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1c483cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
    // 0x1c4840: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C4840u;
    SET_GPR_U32(ctx, 31, 0x1C4848u);
    ctx->pc = 0x1C4844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4840u;
    // 0x1c4844: 0x27a60074  addiu       $a2, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C4840u, 0x1C4848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4848u;
label_1c4848:
    // 0x1c4848: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c4848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c484c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C484Cu;
    SET_GPR_U32(ctx, 31, 0x1C4854u);
    ctx->pc = 0x1C4850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C484Cu;
    // 0x1c4850: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C484Cu, 0x1C4854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4854u;
label_1c4854:
    // 0x1c4854: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1c4854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1c4858: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C4858u;
    SET_GPR_U32(ctx, 31, 0x1C4860u);
    ctx->pc = 0x1C485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4858u;
    // 0x1c485c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C4858u, 0x1C4860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4860u;
label_1c4860:
    // 0x1c4860: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4864: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c4864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c4868: 0x24a51e20  addiu       $a1, $a1, 0x1E20
    ctx->pc = 0x1c4868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7712));
    // 0x1c486c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C486Cu;
    SET_GPR_U32(ctx, 31, 0x1C4874u);
    ctx->pc = 0x1C4870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C486Cu;
    // 0x1c4870: 0x27a6007c  addiu       $a2, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C486Cu, 0x1C4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4874u;
label_1c4874:
    // 0x1c4874: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c4874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4878: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C4878u;
    SET_GPR_U32(ctx, 31, 0x1C4880u);
    ctx->pc = 0x1C487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4878u;
    // 0x1c487c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C4878u, 0x1C4880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4880u;
label_1c4880:
    // 0x1c4880: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c4880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c4884: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C4884u;
    SET_GPR_U32(ctx, 31, 0x1C488Cu);
    ctx->pc = 0x1C4888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4884u;
    // 0x1c4888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C4884u, 0x1C488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C488Cu;
label_1c488c:
    // 0x1c488c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c488cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4890: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1c4890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1c4894: 0x24a51e40  addiu       $a1, $a1, 0x1E40
    ctx->pc = 0x1c4894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7744));
    // 0x1c4898: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C4898u;
    SET_GPR_U32(ctx, 31, 0x1C48A0u);
    ctx->pc = 0x1C489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4898u;
    // 0x1c489c: 0x27a60084  addiu       $a2, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C4898u, 0x1C48A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48A0u;
label_1c48a0:
    // 0x1c48a0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c48a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c48a4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C48A4u;
    SET_GPR_U32(ctx, 31, 0x1C48ACu);
    ctx->pc = 0x1C48A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48A4u;
    // 0x1c48a8: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C48A4u, 0x1C48ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48ACu;
label_1c48ac:
    // 0x1c48ac: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1c48acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1c48b0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C48B0u;
    SET_GPR_U32(ctx, 31, 0x1C48B8u);
    ctx->pc = 0x1C48B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48B0u;
    // 0x1c48b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C48B0u, 0x1C48B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48B8u;
label_1c48b8:
    // 0x1c48b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c48b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c48bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c48bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c48c0: 0x24a51e60  addiu       $a1, $a1, 0x1E60
    ctx->pc = 0x1c48c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7776));
    // 0x1c48c4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C48C4u;
    SET_GPR_U32(ctx, 31, 0x1C48CCu);
    ctx->pc = 0x1C48C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48C4u;
    // 0x1c48c8: 0x27a6008c  addiu       $a2, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C48C4u, 0x1C48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48CCu;
label_1c48cc:
    // 0x1c48cc: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c48d0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C48D0u;
    SET_GPR_U32(ctx, 31, 0x1C48D8u);
    ctx->pc = 0x1C48D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48D0u;
    // 0x1c48d4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C48D0u, 0x1C48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48D8u;
label_1c48d8:
    // 0x1c48d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c48d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c48dc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C48DCu;
    SET_GPR_U32(ctx, 31, 0x1C48E4u);
    ctx->pc = 0x1C48E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48DCu;
    // 0x1c48e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C48DCu, 0x1C48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48E4u;
label_1c48e4:
    // 0x1c48e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c48e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c48e8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1c48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1c48ec: 0x24a51e80  addiu       $a1, $a1, 0x1E80
    ctx->pc = 0x1c48ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7808));
    // 0x1c48f0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C48F0u;
    SET_GPR_U32(ctx, 31, 0x1C48F8u);
    ctx->pc = 0x1C48F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48F0u;
    // 0x1c48f4: 0x27a60094  addiu       $a2, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C48F0u, 0x1C48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48F8u;
label_1c48f8:
    // 0x1c48f8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c48f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c48fc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C48FCu;
    SET_GPR_U32(ctx, 31, 0x1C4904u);
    ctx->pc = 0x1C4900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48FCu;
    // 0x1c4900: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C48FCu, 0x1C4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4904u;
label_1c4904:
    // 0x1c4904: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1c4904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1c4908: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C4908u;
    SET_GPR_U32(ctx, 31, 0x1C4910u);
    ctx->pc = 0x1C490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4908u;
    // 0x1c490c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C4908u, 0x1C4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4910u;
label_1c4910:
    // 0x1c4910: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4914: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c4914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c4918: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0
    ctx->pc = 0x1c4918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
    // 0x1c491c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C491Cu;
    SET_GPR_U32(ctx, 31, 0x1C4924u);
    ctx->pc = 0x1C4920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C491Cu;
    // 0x1c4920: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C491Cu, 0x1C4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4924u;
label_1c4924:
    // 0x1c4924: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c4924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4928: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C4928u;
    SET_GPR_U32(ctx, 31, 0x1C4930u);
    ctx->pc = 0x1C492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4928u;
    // 0x1c492c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C4928u, 0x1C4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4930u;
label_1c4930:
    // 0x1c4930: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c4930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c4934: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C4934u;
    SET_GPR_U32(ctx, 31, 0x1C493Cu);
    ctx->pc = 0x1C4938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4934u;
    // 0x1c4938: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C4934u, 0x1C493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C493Cu;
label_1c493c:
    // 0x1c493c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c493cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4940: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1c4940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1c4944: 0x24a51ec0  addiu       $a1, $a1, 0x1EC0
    ctx->pc = 0x1c4944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7872));
    // 0x1c4948: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C4948u;
    SET_GPR_U32(ctx, 31, 0x1C4950u);
    ctx->pc = 0x1C494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4948u;
    // 0x1c494c: 0x27a600a4  addiu       $a2, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C4948u, 0x1C4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4950u;
label_1c4950:
    // 0x1c4950: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c4950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4954: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C4954u;
    SET_GPR_U32(ctx, 31, 0x1C495Cu);
    ctx->pc = 0x1C4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4954u;
    // 0x1c4958: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C4954u, 0x1C495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C495Cu;
label_1c495c:
    // 0x1c495c: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1c495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1c4960: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C4960u;
    SET_GPR_U32(ctx, 31, 0x1C4968u);
    ctx->pc = 0x1C4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4960u;
    // 0x1c4964: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C4960u, 0x1C4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4968u;
label_1c4968:
    // 0x1c4968: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c4968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c496c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c496cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4970:
    // 0x1c4970: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c4970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1c4974: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x1c4974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1c4978: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x1c497c: 0x24040077  addiu       $a0, $zero, 0x77
    ctx->pc = 0x1c497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x1c4980: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c4980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c4984: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x1c4984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x1c4988: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1c4988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c498c: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1c498cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x1c4990: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1c4990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x1c4994: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1c4994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c4998: 0xae440044  sw          $a0, 0x44($s2)
    ctx->pc = 0x1c4998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 4));
    // 0x1c499c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1c499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c49a0: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x1c49a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x1c49a4: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x1c49a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c49a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1C49A8u;
    SET_GPR_U32(ctx, 31, 0x1C49B0u);
    ctx->pc = 0x1C49ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49A8u;
    // 0x1c49ac: 0xae42004c  sw          $v0, 0x4C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1C49A8u, 0x1C49B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49B0u;
label_1c49b0:
    // 0x1c49b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C49B0u;
    {
        const bool branch_taken_0x1c49b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C49B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49B0u;
        // 0x1c49b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49b0) {
            ctx->pc = 0x1C49C0u;
            goto label_1c49c0;
        }
    }
    ctx->pc = 0x1C49B8u;
    // 0x1c49b8: 0xc06e244  jal         func_1B8910
    ctx->pc = 0x1C49B8u;
    SET_GPR_U32(ctx, 31, 0x1C49C0u);
    ctx->pc = 0x1B8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8910u, 0x1C49B8u, 0x1C49C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49C0u;
label_1c49c0:
    // 0x1c49c0: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c49c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c49c4: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x1c49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x1c49c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c49c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c49cc: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c49d0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1c49d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1c49d4: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C49D4u;
    SET_GPR_U32(ctx, 31, 0x1C49DCu);
    ctx->pc = 0x1C49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49D4u;
    // 0x1c49d8: 0xafb00050  sw          $s0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C49D4u, 0x1C49DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49DCu;
label_1c49dc:
    // 0x1c49dc: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1c49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c49e0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x1c49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1c49e4: 0xc06ed14  jal         func_1BB450
    ctx->pc = 0x1C49E4u;
    SET_GPR_U32(ctx, 31, 0x1C49ECu);
    ctx->pc = 0x1C49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49E4u;
    // 0x1c49e8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB450u, 0x1C49E4u, 0x1C49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49ECu;
label_1c49ec:
    // 0x1c49ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c49ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c49f0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1c49f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c49f4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C49F4u;
    {
        const bool branch_taken_0x1c49f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49F4u;
        // 0x1c49f8: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49f4) {
            ctx->pc = 0x1C4970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4970;
        }
    }
    ctx->pc = 0x1C49FCu;
    // 0x1c49fc: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4a00: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C4A00u;
    SET_GPR_U32(ctx, 31, 0x1C4A08u);
    ctx->pc = 0x1C4A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A00u;
    // 0x1c4a04: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C4A00u, 0x1C4A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A08u;
label_1c4a08:
    // 0x1c4a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a0c: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C4A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C4A14u);
    ctx->pc = 0x1C4A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A0Cu;
    // 0x1c4a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C4A0Cu, 0x1C4A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A14u;
label_1c4a14:
    // 0x1c4a14: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4a18: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1c4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c4a1c: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x1c4a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4a20: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4a24: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1C4A24u;
    SET_GPR_U32(ctx, 31, 0x1C4A2Cu);
    ctx->pc = 0x1C4A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A24u;
    // 0x1c4a28: 0xa040000c  sb          $zero, 0xC($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1C4A24u, 0x1C4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A2Cu;
label_1c4a2c:
    // 0x1c4a2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4A2Cu;
    {
        const bool branch_taken_0x1c4a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A2Cu;
        // 0x1c4a30: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a2c) {
            ctx->pc = 0x1C4A48u;
            goto label_1c4a48;
        }
    }
    ctx->pc = 0x1C4A34u;
    // 0x1c4a34: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1c4a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1c4a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a3c: 0x24a5c6a4  addiu       $a1, $a1, -0x395C
    ctx->pc = 0x1c4a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    // 0x1c4a40: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1C4A40u;
    SET_GPR_U32(ctx, 31, 0x1C4A48u);
    ctx->pc = 0x1C4A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A40u;
    // 0x1c4a44: 0x24c6c6c0  addiu       $a2, $a2, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1C4A40u, 0x1C4A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A48u;
label_1c4a48:
    // 0x1c4a48: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4a4c: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x1c4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x1c4a50: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4a54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c4a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4a64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A64u;
        // 0x1c4a68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4A6Cu;
}
