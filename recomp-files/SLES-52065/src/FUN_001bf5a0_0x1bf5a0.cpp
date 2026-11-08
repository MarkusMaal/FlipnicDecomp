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

// Function: FUN_001bf5a0
// Address: 0x1bf5a0 - 0x1bf788
void FUN_001bf5a0_0x1bf5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bf5a0_0x1bf5a0");
#endif

    switch (ctx->pc) {
        case 0x1bf5b4u: goto label_1bf5b4;
        case 0x1bf5d8u: goto label_1bf5d8;
        case 0x1bf5e4u: goto label_1bf5e4;
        case 0x1bf5f0u: goto label_1bf5f0;
        case 0x1bf604u: goto label_1bf604;
        case 0x1bf610u: goto label_1bf610;
        case 0x1bf61cu: goto label_1bf61c;
        case 0x1bf630u: goto label_1bf630;
        case 0x1bf63cu: goto label_1bf63c;
        case 0x1bf648u: goto label_1bf648;
        case 0x1bf65cu: goto label_1bf65c;
        case 0x1bf668u: goto label_1bf668;
        case 0x1bf674u: goto label_1bf674;
        case 0x1bf688u: goto label_1bf688;
        case 0x1bf694u: goto label_1bf694;
        case 0x1bf6a0u: goto label_1bf6a0;
        case 0x1bf6b4u: goto label_1bf6b4;
        case 0x1bf6c0u: goto label_1bf6c0;
        case 0x1bf6ccu: goto label_1bf6cc;
        case 0x1bf6e0u: goto label_1bf6e0;
        case 0x1bf6ecu: goto label_1bf6ec;
        case 0x1bf6f8u: goto label_1bf6f8;
        case 0x1bf70cu: goto label_1bf70c;
        case 0x1bf718u: goto label_1bf718;
        case 0x1bf724u: goto label_1bf724;
        case 0x1bf754u: goto label_1bf754;
        case 0x1bf770u: goto label_1bf770;
        default: break;
    }

    ctx->pc = 0x1bf5a0u;

    // 0x1bf5a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bf5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bf5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf5a8: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1bf5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1bf5ac: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1BF5ACu;
    SET_GPR_U32(ctx, 31, 0x1BF5B4u);
    ctx->pc = 0x1BF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5ACu;
    // 0x1bf5b0: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1BF5ACu, 0x1BF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5B4u;
label_1bf5b4:
    // 0x1bf5b4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1bf5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf5b8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1bf5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1bf5bc: 0x2463ba70  addiu       $v1, $v1, -0x4590
    ctx->pc = 0x1bf5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949488));
    // 0x1bf5c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bf5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bf5c4: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1bf5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1bf5c8: 0x24a51480  addiu       $a1, $a1, 0x1480
    ctx->pc = 0x1bf5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5248));
    // 0x1bf5cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1bf5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bf5d0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BF5D0u;
    SET_GPR_U32(ctx, 31, 0x1BF5D8u);
    ctx->pc = 0x1BF5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5D0u;
    // 0x1bf5d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BF5D0u, 0x1BF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5D8u;
label_1bf5d8:
    // 0x1bf5d8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1bf5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf5dc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BF5DCu;
    SET_GPR_U32(ctx, 31, 0x1BF5E4u);
    ctx->pc = 0x1BF5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5DCu;
    // 0x1bf5e0: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BF5DCu, 0x1BF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5E4u;
label_1bf5e4:
    // 0x1bf5e4: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1bf5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1bf5e8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BF5E8u;
    SET_GPR_U32(ctx, 31, 0x1BF5F0u);
    ctx->pc = 0x1BF5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5E8u;
    // 0x1bf5ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BF5E8u, 0x1BF5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5F0u;
label_1bf5f0:
    // 0x1bf5f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bf5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bf5f4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1bf5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1bf5f8: 0x24a514a0  addiu       $a1, $a1, 0x14A0
    ctx->pc = 0x1bf5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5280));
    // 0x1bf5fc: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BF5FCu;
    SET_GPR_U32(ctx, 31, 0x1BF604u);
    ctx->pc = 0x1BF600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5FCu;
    // 0x1bf600: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BF5FCu, 0x1BF604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF604u;
label_1bf604:
    // 0x1bf604: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1bf604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf608: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BF608u;
    SET_GPR_U32(ctx, 31, 0x1BF610u);
    ctx->pc = 0x1BF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF608u;
    // 0x1bf60c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BF608u, 0x1BF610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF610u;
label_1bf610:
    // 0x1bf610: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1bf610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1bf614: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BF614u;
    SET_GPR_U32(ctx, 31, 0x1BF61Cu);
    ctx->pc = 0x1BF618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF614u;
    // 0x1bf618: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BF614u, 0x1BF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF61Cu;
label_1bf61c:
    // 0x1bf61c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bf61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bf620: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1bf620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1bf624: 0x24a514c0  addiu       $a1, $a1, 0x14C0
    ctx->pc = 0x1bf624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5312));
    // 0x1bf628: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BF628u;
    SET_GPR_U32(ctx, 31, 0x1BF630u);
    ctx->pc = 0x1BF62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF628u;
    // 0x1bf62c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BF628u, 0x1BF630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF630u;
label_1bf630:
    // 0x1bf630: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1bf630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf634: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BF634u;
    SET_GPR_U32(ctx, 31, 0x1BF63Cu);
    ctx->pc = 0x1BF638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF634u;
    // 0x1bf638: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BF634u, 0x1BF63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF63Cu;
label_1bf63c:
    // 0x1bf63c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1bf63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1bf640: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BF640u;
    SET_GPR_U32(ctx, 31, 0x1BF648u);
    ctx->pc = 0x1BF644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF640u;
    // 0x1bf644: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BF640u, 0x1BF648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF648u;
label_1bf648:
    // 0x1bf648: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bf648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bf64c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1bf64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1bf650: 0x24a514e0  addiu       $a1, $a1, 0x14E0
    ctx->pc = 0x1bf650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5344));
    // 0x1bf654: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BF654u;
    SET_GPR_U32(ctx, 31, 0x1BF65Cu);
    ctx->pc = 0x1BF658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF654u;
    // 0x1bf658: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BF654u, 0x1BF65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF65Cu;
label_1bf65c:
    // 0x1bf65c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1bf65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf660: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BF660u;
    SET_GPR_U32(ctx, 31, 0x1BF668u);
    ctx->pc = 0x1BF664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF660u;
    // 0x1bf664: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BF660u, 0x1BF668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF668u;
label_1bf668:
    // 0x1bf668: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1bf668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1bf66c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BF66Cu;
    SET_GPR_U32(ctx, 31, 0x1BF674u);
    ctx->pc = 0x1BF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF66Cu;
    // 0x1bf670: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BF66Cu, 0x1BF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF674u;
label_1bf674:
    // 0x1bf674: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bf674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bf678: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1bf678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1bf67c: 0x24a51500  addiu       $a1, $a1, 0x1500
    ctx->pc = 0x1bf67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5376));
    // 0x1bf680: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BF680u;
    SET_GPR_U32(ctx, 31, 0x1BF688u);
    ctx->pc = 0x1BF684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF680u;
    // 0x1bf684: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BF680u, 0x1BF688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF688u;
label_1bf688:
    // 0x1bf688: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1bf688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf68c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BF68Cu;
    SET_GPR_U32(ctx, 31, 0x1BF694u);
    ctx->pc = 0x1BF690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF68Cu;
    // 0x1bf690: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BF68Cu, 0x1BF694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF694u;
label_1bf694:
    // 0x1bf694: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1bf694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1bf698: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BF698u;
    SET_GPR_U32(ctx, 31, 0x1BF6A0u);
    ctx->pc = 0x1BF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF698u;
    // 0x1bf69c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BF698u, 0x1BF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6A0u;
label_1bf6a0:
    // 0x1bf6a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bf6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bf6a4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1bf6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1bf6a8: 0x24a51520  addiu       $a1, $a1, 0x1520
    ctx->pc = 0x1bf6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5408));
    // 0x1bf6ac: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BF6ACu;
    SET_GPR_U32(ctx, 31, 0x1BF6B4u);
    ctx->pc = 0x1BF6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6ACu;
    // 0x1bf6b0: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BF6ACu, 0x1BF6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6B4u;
label_1bf6b4:
    // 0x1bf6b4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1bf6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf6b8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BF6B8u;
    SET_GPR_U32(ctx, 31, 0x1BF6C0u);
    ctx->pc = 0x1BF6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6B8u;
    // 0x1bf6bc: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BF6B8u, 0x1BF6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6C0u;
label_1bf6c0:
    // 0x1bf6c0: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1bf6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1bf6c4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BF6C4u;
    SET_GPR_U32(ctx, 31, 0x1BF6CCu);
    ctx->pc = 0x1BF6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6C4u;
    // 0x1bf6c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BF6C4u, 0x1BF6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6CCu;
label_1bf6cc:
    // 0x1bf6cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bf6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bf6d0: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1bf6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1bf6d4: 0x24a51540  addiu       $a1, $a1, 0x1540
    ctx->pc = 0x1bf6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5440));
    // 0x1bf6d8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BF6D8u;
    SET_GPR_U32(ctx, 31, 0x1BF6E0u);
    ctx->pc = 0x1BF6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6D8u;
    // 0x1bf6dc: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BF6D8u, 0x1BF6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6E0u;
label_1bf6e0:
    // 0x1bf6e0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1bf6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf6e4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BF6E4u;
    SET_GPR_U32(ctx, 31, 0x1BF6ECu);
    ctx->pc = 0x1BF6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6E4u;
    // 0x1bf6e8: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BF6E4u, 0x1BF6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6ECu;
label_1bf6ec:
    // 0x1bf6ec: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1bf6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1bf6f0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BF6F0u;
    SET_GPR_U32(ctx, 31, 0x1BF6F8u);
    ctx->pc = 0x1BF6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6F0u;
    // 0x1bf6f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BF6F0u, 0x1BF6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6F8u;
label_1bf6f8:
    // 0x1bf6f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bf6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bf6fc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1bf6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bf700: 0x24a51560  addiu       $a1, $a1, 0x1560
    ctx->pc = 0x1bf700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5472));
    // 0x1bf704: 0xc04889c  jal         func_122270
    ctx->pc = 0x1BF704u;
    SET_GPR_U32(ctx, 31, 0x1BF70Cu);
    ctx->pc = 0x1BF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF704u;
    // 0x1bf708: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1BF704u, 0x1BF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF70Cu;
label_1bf70c:
    // 0x1bf70c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1bf70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf710: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1BF710u;
    SET_GPR_U32(ctx, 31, 0x1BF718u);
    ctx->pc = 0x1BF714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF710u;
    // 0x1bf714: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1BF710u, 0x1BF718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF718u;
label_1bf718:
    // 0x1bf718: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1bf718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bf71c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BF71Cu;
    SET_GPR_U32(ctx, 31, 0x1BF724u);
    ctx->pc = 0x1BF720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF71Cu;
    // 0x1bf720: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BF71Cu, 0x1BF724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF724u;
label_1bf724:
    // 0x1bf724: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1bf724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf728: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf72c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf730: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1bf730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1bf734: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x1bf734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
    // 0x1bf738: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1bf738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf73c: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1bf73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1bf740: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1bf740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf744: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x1bf744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x1bf748: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1bf748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf74c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BF74Cu;
    SET_GPR_U32(ctx, 31, 0x1BF754u);
    ctx->pc = 0x1BF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF74Cu;
    // 0x1bf750: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BF74Cu, 0x1BF754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF754u;
label_1bf754:
    // 0x1bf754: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF754u;
    {
        const bool branch_taken_0x1bf754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF754u;
        // 0x1bf758: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf754) {
            ctx->pc = 0x1BF770u;
            goto label_1bf770;
        }
    }
    ctx->pc = 0x1BF75Cu;
    // 0x1bf75c: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1bf75cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1bf760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf764: 0x24a5c6a4  addiu       $a1, $a1, -0x395C
    ctx->pc = 0x1bf764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    // 0x1bf768: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1BF768u;
    SET_GPR_U32(ctx, 31, 0x1BF770u);
    ctx->pc = 0x1BF76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF768u;
    // 0x1bf76c: 0x24c6c6c0  addiu       $a2, $a2, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1BF768u, 0x1BF770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF770u;
label_1bf770:
    // 0x1bf770: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1bf770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf774: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x1bf774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    // 0x1bf778: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1bf778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1bf77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf780: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF780u;
        // 0x1bf784: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF788u;
}
