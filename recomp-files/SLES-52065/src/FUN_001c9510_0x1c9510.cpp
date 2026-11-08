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

// Function: FUN_001c9510
// Address: 0x1c9510 - 0x1c9868
void FUN_001c9510_0x1c9510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c9510_0x1c9510");
#endif

    switch (ctx->pc) {
        case 0x1c9524u: goto label_1c9524;
        case 0x1c9548u: goto label_1c9548;
        case 0x1c9554u: goto label_1c9554;
        case 0x1c9560u: goto label_1c9560;
        case 0x1c9574u: goto label_1c9574;
        case 0x1c9580u: goto label_1c9580;
        case 0x1c958cu: goto label_1c958c;
        case 0x1c95a0u: goto label_1c95a0;
        case 0x1c95acu: goto label_1c95ac;
        case 0x1c95b8u: goto label_1c95b8;
        case 0x1c95ccu: goto label_1c95cc;
        case 0x1c95d8u: goto label_1c95d8;
        case 0x1c95e4u: goto label_1c95e4;
        case 0x1c95f8u: goto label_1c95f8;
        case 0x1c9604u: goto label_1c9604;
        case 0x1c9610u: goto label_1c9610;
        case 0x1c9624u: goto label_1c9624;
        case 0x1c9630u: goto label_1c9630;
        case 0x1c963cu: goto label_1c963c;
        case 0x1c9650u: goto label_1c9650;
        case 0x1c965cu: goto label_1c965c;
        case 0x1c9668u: goto label_1c9668;
        case 0x1c967cu: goto label_1c967c;
        case 0x1c9688u: goto label_1c9688;
        case 0x1c9694u: goto label_1c9694;
        case 0x1c96a8u: goto label_1c96a8;
        case 0x1c96b4u: goto label_1c96b4;
        case 0x1c96c0u: goto label_1c96c0;
        case 0x1c96d4u: goto label_1c96d4;
        case 0x1c96e0u: goto label_1c96e0;
        case 0x1c96ecu: goto label_1c96ec;
        case 0x1c9700u: goto label_1c9700;
        case 0x1c970cu: goto label_1c970c;
        case 0x1c9718u: goto label_1c9718;
        case 0x1c972cu: goto label_1c972c;
        case 0x1c9738u: goto label_1c9738;
        case 0x1c9744u: goto label_1c9744;
        case 0x1c9758u: goto label_1c9758;
        case 0x1c9764u: goto label_1c9764;
        case 0x1c9770u: goto label_1c9770;
        case 0x1c9784u: goto label_1c9784;
        case 0x1c9790u: goto label_1c9790;
        case 0x1c979cu: goto label_1c979c;
        case 0x1c97b0u: goto label_1c97b0;
        case 0x1c97bcu: goto label_1c97bc;
        case 0x1c97c8u: goto label_1c97c8;
        case 0x1c97dcu: goto label_1c97dc;
        case 0x1c97e8u: goto label_1c97e8;
        case 0x1c97f4u: goto label_1c97f4;
        case 0x1c982cu: goto label_1c982c;
        case 0x1c9848u: goto label_1c9848;
        default: break;
    }

    ctx->pc = 0x1c9510u;

    // 0x1c9510: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c9510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c9514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9518: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1c9518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1c951c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1C951Cu;
    SET_GPR_U32(ctx, 31, 0x1C9524u);
    ctx->pc = 0x1C9520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C951Cu;
    // 0x1c9520: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1C951Cu, 0x1C9524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9524u;
label_1c9524:
    // 0x1c9524: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c9524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9528: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c9528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c952c: 0x2463bce0  addiu       $v1, $v1, -0x4320
    ctx->pc = 0x1c952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950112));
    // 0x1c9530: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9534: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c9534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c9538: 0x24a52540  addiu       $a1, $a1, 0x2540
    ctx->pc = 0x1c9538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9536));
    // 0x1c953c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1c953cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9540: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C9540u;
    SET_GPR_U32(ctx, 31, 0x1C9548u);
    ctx->pc = 0x1C9544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9540u;
    // 0x1c9544: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C9540u, 0x1C9548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9548u;
label_1c9548:
    // 0x1c9548: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c9548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c954c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C954Cu;
    SET_GPR_U32(ctx, 31, 0x1C9554u);
    ctx->pc = 0x1C9550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C954Cu;
    // 0x1c9550: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C954Cu, 0x1C9554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9554u;
label_1c9554:
    // 0x1c9554: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c9554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c9558: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C9558u;
    SET_GPR_U32(ctx, 31, 0x1C9560u);
    ctx->pc = 0x1C955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9558u;
    // 0x1c955c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C9558u, 0x1C9560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9560u;
label_1c9560:
    // 0x1c9560: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9564: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c9564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c9568: 0x24a52560  addiu       $a1, $a1, 0x2560
    ctx->pc = 0x1c9568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9568));
    // 0x1c956c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C956Cu;
    SET_GPR_U32(ctx, 31, 0x1C9574u);
    ctx->pc = 0x1C9570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C956Cu;
    // 0x1c9570: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C956Cu, 0x1C9574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9574u;
label_1c9574:
    // 0x1c9574: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c9574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9578: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C9578u;
    SET_GPR_U32(ctx, 31, 0x1C9580u);
    ctx->pc = 0x1C957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9578u;
    // 0x1c957c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C9578u, 0x1C9580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9580u;
label_1c9580:
    // 0x1c9580: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c9580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c9584: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C9584u;
    SET_GPR_U32(ctx, 31, 0x1C958Cu);
    ctx->pc = 0x1C9588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9584u;
    // 0x1c9588: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C9584u, 0x1C958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C958Cu;
label_1c958c:
    // 0x1c958c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c958cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9590: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c9590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c9594: 0x24a52580  addiu       $a1, $a1, 0x2580
    ctx->pc = 0x1c9594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9600));
    // 0x1c9598: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C9598u;
    SET_GPR_U32(ctx, 31, 0x1C95A0u);
    ctx->pc = 0x1C959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9598u;
    // 0x1c959c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C9598u, 0x1C95A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C95A0u;
label_1c95a0:
    // 0x1c95a0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c95a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c95a4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C95A4u;
    SET_GPR_U32(ctx, 31, 0x1C95ACu);
    ctx->pc = 0x1C95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C95A4u;
    // 0x1c95a8: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C95A4u, 0x1C95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C95ACu;
label_1c95ac:
    // 0x1c95ac: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c95acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c95b0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C95B0u;
    SET_GPR_U32(ctx, 31, 0x1C95B8u);
    ctx->pc = 0x1C95B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C95B0u;
    // 0x1c95b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C95B0u, 0x1C95B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C95B8u;
label_1c95b8:
    // 0x1c95b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c95b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c95bc: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c95bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c95c0: 0x24a525a0  addiu       $a1, $a1, 0x25A0
    ctx->pc = 0x1c95c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9632));
    // 0x1c95c4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C95C4u;
    SET_GPR_U32(ctx, 31, 0x1C95CCu);
    ctx->pc = 0x1C95C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C95C4u;
    // 0x1c95c8: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C95C4u, 0x1C95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C95CCu;
label_1c95cc:
    // 0x1c95cc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c95ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c95d0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C95D0u;
    SET_GPR_U32(ctx, 31, 0x1C95D8u);
    ctx->pc = 0x1C95D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C95D0u;
    // 0x1c95d4: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C95D0u, 0x1C95D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C95D8u;
label_1c95d8:
    // 0x1c95d8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c95d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c95dc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C95DCu;
    SET_GPR_U32(ctx, 31, 0x1C95E4u);
    ctx->pc = 0x1C95E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C95DCu;
    // 0x1c95e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C95DCu, 0x1C95E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C95E4u;
label_1c95e4:
    // 0x1c95e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c95e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c95e8: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c95e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c95ec: 0x24a525c0  addiu       $a1, $a1, 0x25C0
    ctx->pc = 0x1c95ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9664));
    // 0x1c95f0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C95F0u;
    SET_GPR_U32(ctx, 31, 0x1C95F8u);
    ctx->pc = 0x1C95F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C95F0u;
    // 0x1c95f4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C95F0u, 0x1C95F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C95F8u;
label_1c95f8:
    // 0x1c95f8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c95f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c95fc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C95FCu;
    SET_GPR_U32(ctx, 31, 0x1C9604u);
    ctx->pc = 0x1C9600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C95FCu;
    // 0x1c9600: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C95FCu, 0x1C9604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9604u;
label_1c9604:
    // 0x1c9604: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c9604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c9608: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C9608u;
    SET_GPR_U32(ctx, 31, 0x1C9610u);
    ctx->pc = 0x1C960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9608u;
    // 0x1c960c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C9608u, 0x1C9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9610u;
label_1c9610:
    // 0x1c9610: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9614: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c9614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c9618: 0x24a525e0  addiu       $a1, $a1, 0x25E0
    ctx->pc = 0x1c9618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9696));
    // 0x1c961c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C961Cu;
    SET_GPR_U32(ctx, 31, 0x1C9624u);
    ctx->pc = 0x1C9620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C961Cu;
    // 0x1c9620: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C961Cu, 0x1C9624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9624u;
label_1c9624:
    // 0x1c9624: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c9624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9628: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C9628u;
    SET_GPR_U32(ctx, 31, 0x1C9630u);
    ctx->pc = 0x1C962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9628u;
    // 0x1c962c: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C9628u, 0x1C9630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9630u;
label_1c9630:
    // 0x1c9630: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c9630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c9634: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C9634u;
    SET_GPR_U32(ctx, 31, 0x1C963Cu);
    ctx->pc = 0x1C9638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9634u;
    // 0x1c9638: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C9634u, 0x1C963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C963Cu;
label_1c963c:
    // 0x1c963c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c963cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9640: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1c9640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c9644: 0x24a52600  addiu       $a1, $a1, 0x2600
    ctx->pc = 0x1c9644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    // 0x1c9648: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C9648u;
    SET_GPR_U32(ctx, 31, 0x1C9650u);
    ctx->pc = 0x1C964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9648u;
    // 0x1c964c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C9648u, 0x1C9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9650u;
label_1c9650:
    // 0x1c9650: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c9650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9654: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C9654u;
    SET_GPR_U32(ctx, 31, 0x1C965Cu);
    ctx->pc = 0x1C9658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9654u;
    // 0x1c9658: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C9654u, 0x1C965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C965Cu;
label_1c965c:
    // 0x1c965c: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1c965cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c9660: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C9660u;
    SET_GPR_U32(ctx, 31, 0x1C9668u);
    ctx->pc = 0x1C9664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9660u;
    // 0x1c9664: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C9660u, 0x1C9668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9668u;
label_1c9668:
    // 0x1c9668: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c966c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c9670: 0x24a52620  addiu       $a1, $a1, 0x2620
    ctx->pc = 0x1c9670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9760));
    // 0x1c9674: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C9674u;
    SET_GPR_U32(ctx, 31, 0x1C967Cu);
    ctx->pc = 0x1C9678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9674u;
    // 0x1c9678: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C9674u, 0x1C967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C967Cu;
label_1c967c:
    // 0x1c967c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c967cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9680: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C9680u;
    SET_GPR_U32(ctx, 31, 0x1C9688u);
    ctx->pc = 0x1C9684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9680u;
    // 0x1c9684: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C9680u, 0x1C9688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9688u;
label_1c9688:
    // 0x1c9688: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c9688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c968c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C968Cu;
    SET_GPR_U32(ctx, 31, 0x1C9694u);
    ctx->pc = 0x1C9690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C968Cu;
    // 0x1c9690: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C968Cu, 0x1C9694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9694u;
label_1c9694:
    // 0x1c9694: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9698: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c9698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c969c: 0x24a52640  addiu       $a1, $a1, 0x2640
    ctx->pc = 0x1c969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
    // 0x1c96a0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C96A0u;
    SET_GPR_U32(ctx, 31, 0x1C96A8u);
    ctx->pc = 0x1C96A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C96A0u;
    // 0x1c96a4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C96A0u, 0x1C96A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96A8u;
label_1c96a8:
    // 0x1c96a8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c96a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c96ac: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C96ACu;
    SET_GPR_U32(ctx, 31, 0x1C96B4u);
    ctx->pc = 0x1C96B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C96ACu;
    // 0x1c96b0: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C96ACu, 0x1C96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96B4u;
label_1c96b4:
    // 0x1c96b4: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c96b8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C96B8u;
    SET_GPR_U32(ctx, 31, 0x1C96C0u);
    ctx->pc = 0x1C96BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C96B8u;
    // 0x1c96bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C96B8u, 0x1C96C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96C0u;
label_1c96c0:
    // 0x1c96c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c96c4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c96c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c96c8: 0x24a52660  addiu       $a1, $a1, 0x2660
    ctx->pc = 0x1c96c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9824));
    // 0x1c96cc: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C96CCu;
    SET_GPR_U32(ctx, 31, 0x1C96D4u);
    ctx->pc = 0x1C96D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C96CCu;
    // 0x1c96d0: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C96CCu, 0x1C96D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96D4u;
label_1c96d4:
    // 0x1c96d4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c96d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c96d8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C96D8u;
    SET_GPR_U32(ctx, 31, 0x1C96E0u);
    ctx->pc = 0x1C96DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C96D8u;
    // 0x1c96dc: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C96D8u, 0x1C96E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96E0u;
label_1c96e0:
    // 0x1c96e0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c96e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c96e4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C96E4u;
    SET_GPR_U32(ctx, 31, 0x1C96ECu);
    ctx->pc = 0x1C96E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C96E4u;
    // 0x1c96e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C96E4u, 0x1C96ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96ECu;
label_1c96ec:
    // 0x1c96ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c96ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c96f0: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c96f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c96f4: 0x24a52680  addiu       $a1, $a1, 0x2680
    ctx->pc = 0x1c96f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9856));
    // 0x1c96f8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C96F8u;
    SET_GPR_U32(ctx, 31, 0x1C9700u);
    ctx->pc = 0x1C96FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C96F8u;
    // 0x1c96fc: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C96F8u, 0x1C9700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9700u;
label_1c9700:
    // 0x1c9700: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c9700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9704: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C9704u;
    SET_GPR_U32(ctx, 31, 0x1C970Cu);
    ctx->pc = 0x1C9708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9704u;
    // 0x1c9708: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C9704u, 0x1C970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C970Cu;
label_1c970c:
    // 0x1c970c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c9710: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C9710u;
    SET_GPR_U32(ctx, 31, 0x1C9718u);
    ctx->pc = 0x1C9714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9710u;
    // 0x1c9714: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C9710u, 0x1C9718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9718u;
label_1c9718:
    // 0x1c9718: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c971c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c9720: 0x24a526a0  addiu       $a1, $a1, 0x26A0
    ctx->pc = 0x1c9720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9888));
    // 0x1c9724: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C9724u;
    SET_GPR_U32(ctx, 31, 0x1C972Cu);
    ctx->pc = 0x1C9728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9724u;
    // 0x1c9728: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C9724u, 0x1C972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C972Cu;
label_1c972c:
    // 0x1c972c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c972cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9730: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C9730u;
    SET_GPR_U32(ctx, 31, 0x1C9738u);
    ctx->pc = 0x1C9734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9730u;
    // 0x1c9734: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C9730u, 0x1C9738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9738u;
label_1c9738:
    // 0x1c9738: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c9738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c973c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C973Cu;
    SET_GPR_U32(ctx, 31, 0x1C9744u);
    ctx->pc = 0x1C9740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C973Cu;
    // 0x1c9740: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C973Cu, 0x1C9744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9744u;
label_1c9744:
    // 0x1c9744: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9748: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x1c9748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1c974c: 0x24a526c0  addiu       $a1, $a1, 0x26C0
    ctx->pc = 0x1c974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9920));
    // 0x1c9750: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C9750u;
    SET_GPR_U32(ctx, 31, 0x1C9758u);
    ctx->pc = 0x1C9754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9750u;
    // 0x1c9754: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C9750u, 0x1C9758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9758u;
label_1c9758:
    // 0x1c9758: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c9758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c975c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C975Cu;
    SET_GPR_U32(ctx, 31, 0x1C9764u);
    ctx->pc = 0x1C9760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C975Cu;
    // 0x1c9760: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C975Cu, 0x1C9764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9764u;
label_1c9764:
    // 0x1c9764: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x1c9764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1c9768: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C9768u;
    SET_GPR_U32(ctx, 31, 0x1C9770u);
    ctx->pc = 0x1C976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9768u;
    // 0x1c976c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C9768u, 0x1C9770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9770u;
label_1c9770:
    // 0x1c9770: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9774: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1c9774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1c9778: 0x24a526e0  addiu       $a1, $a1, 0x26E0
    ctx->pc = 0x1c9778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9952));
    // 0x1c977c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C977Cu;
    SET_GPR_U32(ctx, 31, 0x1C9784u);
    ctx->pc = 0x1C9780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C977Cu;
    // 0x1c9780: 0x27a60088  addiu       $a2, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C977Cu, 0x1C9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9784u;
label_1c9784:
    // 0x1c9784: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c9784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9788: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C9788u;
    SET_GPR_U32(ctx, 31, 0x1C9790u);
    ctx->pc = 0x1C978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9788u;
    // 0x1c978c: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C9788u, 0x1C9790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9790u;
label_1c9790:
    // 0x1c9790: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1c9790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1c9794: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C9794u;
    SET_GPR_U32(ctx, 31, 0x1C979Cu);
    ctx->pc = 0x1C9798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9794u;
    // 0x1c9798: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C9794u, 0x1C979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C979Cu;
label_1c979c:
    // 0x1c979c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c979cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c97a0: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1c97a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1c97a4: 0x24a52700  addiu       $a1, $a1, 0x2700
    ctx->pc = 0x1c97a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9984));
    // 0x1c97a8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C97A8u;
    SET_GPR_U32(ctx, 31, 0x1C97B0u);
    ctx->pc = 0x1C97ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97A8u;
    // 0x1c97ac: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C97A8u, 0x1C97B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97B0u;
label_1c97b0:
    // 0x1c97b0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c97b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c97b4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C97B4u;
    SET_GPR_U32(ctx, 31, 0x1C97BCu);
    ctx->pc = 0x1C97B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97B4u;
    // 0x1c97b8: 0x27a50094  addiu       $a1, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C97B4u, 0x1C97BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97BCu;
label_1c97bc:
    // 0x1c97bc: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1c97bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1c97c0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C97C0u;
    SET_GPR_U32(ctx, 31, 0x1C97C8u);
    ctx->pc = 0x1C97C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97C0u;
    // 0x1c97c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C97C0u, 0x1C97C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97C8u;
label_1c97c8:
    // 0x1c97c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c97c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c97cc: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x1c97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1c97d0: 0x24a52720  addiu       $a1, $a1, 0x2720
    ctx->pc = 0x1c97d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10016));
    // 0x1c97d4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C97D4u;
    SET_GPR_U32(ctx, 31, 0x1C97DCu);
    ctx->pc = 0x1C97D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97D4u;
    // 0x1c97d8: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C97D4u, 0x1C97DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97DCu;
label_1c97dc:
    // 0x1c97dc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c97dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c97e0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C97E0u;
    SET_GPR_U32(ctx, 31, 0x1C97E8u);
    ctx->pc = 0x1C97E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97E0u;
    // 0x1c97e4: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C97E0u, 0x1C97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97E8u;
label_1c97e8:
    // 0x1c97e8: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x1c97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1c97ec: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C97ECu;
    SET_GPR_U32(ctx, 31, 0x1C97F4u);
    ctx->pc = 0x1C97F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97ECu;
    // 0x1c97f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C97ECu, 0x1C97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97F4u;
label_1c97f4:
    // 0x1c97f4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c97f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c97f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c97fc: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1c97fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c9800: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1c9800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1c9804: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c9804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9808: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1c9808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1c980c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1c980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9810: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1c9810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1c9814: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x1c9814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x1c9818: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c9818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c981c: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1c981cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1c9820: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c9820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9824: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1C9824u;
    SET_GPR_U32(ctx, 31, 0x1C982Cu);
    ctx->pc = 0x1C9828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9824u;
    // 0x1c9828: 0xac40006c  sw          $zero, 0x6C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1C9824u, 0x1C982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C982Cu;
label_1c982c:
    // 0x1c982c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C982Cu;
    {
        const bool branch_taken_0x1c982c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C982Cu;
        // 0x1c9830: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c982c) {
            ctx->pc = 0x1C9848u;
            goto label_1c9848;
        }
    }
    ctx->pc = 0x1C9834u;
    // 0x1c9834: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1c9834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1c9838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c983c: 0x24a5c6a4  addiu       $a1, $a1, -0x395C
    ctx->pc = 0x1c983cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    // 0x1c9840: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1C9840u;
    SET_GPR_U32(ctx, 31, 0x1C9848u);
    ctx->pc = 0x1C9844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9840u;
    // 0x1c9844: 0x24c6c6c0  addiu       $a2, $a2, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1C9840u, 0x1C9848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9848u;
label_1c9848:
    // 0x1c9848: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1c9848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c984c: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x1c984cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x1c9850: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c9850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9854: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x1c9854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9858: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c985c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c985cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9860: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9860u;
        // 0x1c9864: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9868u;
}
