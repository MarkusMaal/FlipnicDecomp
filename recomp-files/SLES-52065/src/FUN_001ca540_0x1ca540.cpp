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

// Function: FUN_001ca540
// Address: 0x1ca540 - 0x1ca6a8
void FUN_001ca540_0x1ca540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ca540_0x1ca540");
#endif

    switch (ctx->pc) {
        case 0x1ca554u: goto label_1ca554;
        case 0x1ca578u: goto label_1ca578;
        case 0x1ca584u: goto label_1ca584;
        case 0x1ca590u: goto label_1ca590;
        case 0x1ca5a4u: goto label_1ca5a4;
        case 0x1ca5b0u: goto label_1ca5b0;
        case 0x1ca5bcu: goto label_1ca5bc;
        case 0x1ca5d0u: goto label_1ca5d0;
        case 0x1ca5dcu: goto label_1ca5dc;
        case 0x1ca5e8u: goto label_1ca5e8;
        case 0x1ca5fcu: goto label_1ca5fc;
        case 0x1ca608u: goto label_1ca608;
        case 0x1ca614u: goto label_1ca614;
        case 0x1ca628u: goto label_1ca628;
        case 0x1ca634u: goto label_1ca634;
        case 0x1ca640u: goto label_1ca640;
        case 0x1ca654u: goto label_1ca654;
        case 0x1ca660u: goto label_1ca660;
        case 0x1ca66cu: goto label_1ca66c;
        default: break;
    }

    ctx->pc = 0x1ca540u;

    // 0x1ca540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ca540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ca544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca548: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1ca548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1ca54c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CA54Cu;
    SET_GPR_U32(ctx, 31, 0x1CA554u);
    ctx->pc = 0x1CA550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA54Cu;
    // 0x1ca550: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CA54Cu, 0x1CA554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA554u;
label_1ca554:
    // 0x1ca554: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1ca554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca558: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1ca558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1ca55c: 0x2463bd10  addiu       $v1, $v1, -0x42F0
    ctx->pc = 0x1ca55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950160));
    // 0x1ca560: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ca560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ca564: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1ca564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1ca568: 0x24a52750  addiu       $a1, $a1, 0x2750
    ctx->pc = 0x1ca568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10064));
    // 0x1ca56c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1ca56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca570: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CA570u;
    SET_GPR_U32(ctx, 31, 0x1CA578u);
    ctx->pc = 0x1CA574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA570u;
    // 0x1ca574: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CA570u, 0x1CA578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA578u;
label_1ca578:
    // 0x1ca578: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1ca578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca57c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CA57Cu;
    SET_GPR_U32(ctx, 31, 0x1CA584u);
    ctx->pc = 0x1CA580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA57Cu;
    // 0x1ca580: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CA57Cu, 0x1CA584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA584u;
label_1ca584:
    // 0x1ca584: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1ca584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1ca588: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CA588u;
    SET_GPR_U32(ctx, 31, 0x1CA590u);
    ctx->pc = 0x1CA58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA588u;
    // 0x1ca58c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CA588u, 0x1CA590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA590u;
label_1ca590:
    // 0x1ca590: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ca590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ca594: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1ca594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1ca598: 0x24a52770  addiu       $a1, $a1, 0x2770
    ctx->pc = 0x1ca598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10096));
    // 0x1ca59c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CA59Cu;
    SET_GPR_U32(ctx, 31, 0x1CA5A4u);
    ctx->pc = 0x1CA5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA59Cu;
    // 0x1ca5a0: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CA59Cu, 0x1CA5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5A4u;
label_1ca5a4:
    // 0x1ca5a4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1ca5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca5a8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CA5A8u;
    SET_GPR_U32(ctx, 31, 0x1CA5B0u);
    ctx->pc = 0x1CA5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5A8u;
    // 0x1ca5ac: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CA5A8u, 0x1CA5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5B0u;
label_1ca5b0:
    // 0x1ca5b0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1ca5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1ca5b4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CA5B4u;
    SET_GPR_U32(ctx, 31, 0x1CA5BCu);
    ctx->pc = 0x1CA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5B4u;
    // 0x1ca5b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CA5B4u, 0x1CA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5BCu;
label_1ca5bc:
    // 0x1ca5bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ca5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ca5c0: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1ca5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1ca5c4: 0x24a52790  addiu       $a1, $a1, 0x2790
    ctx->pc = 0x1ca5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10128));
    // 0x1ca5c8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CA5C8u;
    SET_GPR_U32(ctx, 31, 0x1CA5D0u);
    ctx->pc = 0x1CA5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5C8u;
    // 0x1ca5cc: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CA5C8u, 0x1CA5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5D0u;
label_1ca5d0:
    // 0x1ca5d0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1ca5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca5d4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CA5D4u;
    SET_GPR_U32(ctx, 31, 0x1CA5DCu);
    ctx->pc = 0x1CA5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5D4u;
    // 0x1ca5d8: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CA5D4u, 0x1CA5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5DCu;
label_1ca5dc:
    // 0x1ca5dc: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1ca5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1ca5e0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CA5E0u;
    SET_GPR_U32(ctx, 31, 0x1CA5E8u);
    ctx->pc = 0x1CA5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5E0u;
    // 0x1ca5e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CA5E0u, 0x1CA5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5E8u;
label_1ca5e8:
    // 0x1ca5e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ca5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ca5ec: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1ca5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1ca5f0: 0x24a527b0  addiu       $a1, $a1, 0x27B0
    ctx->pc = 0x1ca5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10160));
    // 0x1ca5f4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CA5F4u;
    SET_GPR_U32(ctx, 31, 0x1CA5FCu);
    ctx->pc = 0x1CA5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5F4u;
    // 0x1ca5f8: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CA5F4u, 0x1CA5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5FCu;
label_1ca5fc:
    // 0x1ca5fc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1ca5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca600: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CA600u;
    SET_GPR_U32(ctx, 31, 0x1CA608u);
    ctx->pc = 0x1CA604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA600u;
    // 0x1ca604: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CA600u, 0x1CA608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA608u;
label_1ca608:
    // 0x1ca608: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1ca608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1ca60c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CA60Cu;
    SET_GPR_U32(ctx, 31, 0x1CA614u);
    ctx->pc = 0x1CA610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA60Cu;
    // 0x1ca610: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CA60Cu, 0x1CA614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA614u;
label_1ca614:
    // 0x1ca614: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ca614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ca618: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1ca618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1ca61c: 0x24a527d0  addiu       $a1, $a1, 0x27D0
    ctx->pc = 0x1ca61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10192));
    // 0x1ca620: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CA620u;
    SET_GPR_U32(ctx, 31, 0x1CA628u);
    ctx->pc = 0x1CA624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA620u;
    // 0x1ca624: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CA620u, 0x1CA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA628u;
label_1ca628:
    // 0x1ca628: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1ca628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca62c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CA62Cu;
    SET_GPR_U32(ctx, 31, 0x1CA634u);
    ctx->pc = 0x1CA630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA62Cu;
    // 0x1ca630: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CA62Cu, 0x1CA634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA634u;
label_1ca634:
    // 0x1ca634: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1ca634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1ca638: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CA638u;
    SET_GPR_U32(ctx, 31, 0x1CA640u);
    ctx->pc = 0x1CA63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA638u;
    // 0x1ca63c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CA638u, 0x1CA640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA640u;
label_1ca640:
    // 0x1ca640: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ca640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ca644: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1ca644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1ca648: 0x24a527f0  addiu       $a1, $a1, 0x27F0
    ctx->pc = 0x1ca648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10224));
    // 0x1ca64c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CA64Cu;
    SET_GPR_U32(ctx, 31, 0x1CA654u);
    ctx->pc = 0x1CA650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA64Cu;
    // 0x1ca650: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CA64Cu, 0x1CA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA654u;
label_1ca654:
    // 0x1ca654: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1ca654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca658: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CA658u;
    SET_GPR_U32(ctx, 31, 0x1CA660u);
    ctx->pc = 0x1CA65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA658u;
    // 0x1ca65c: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CA658u, 0x1CA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA660u;
label_1ca660:
    // 0x1ca660: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1ca660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1ca664: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CA664u;
    SET_GPR_U32(ctx, 31, 0x1CA66Cu);
    ctx->pc = 0x1CA668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA664u;
    // 0x1ca668: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CA664u, 0x1CA66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA66Cu;
label_1ca66c:
    // 0x1ca66c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1ca66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca674: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1ca674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1ca678: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1ca678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca67c: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x1ca67cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x1ca680: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1ca680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca684: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1ca684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1ca688: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1ca688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca68c: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x1ca68cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x1ca690: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1ca690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca694: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1ca694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1ca698: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1ca698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ca69c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6A0u;
        // 0x1ca6a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA6A8u;
}
