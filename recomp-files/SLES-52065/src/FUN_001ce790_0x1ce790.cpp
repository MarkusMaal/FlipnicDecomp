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

// Function: FUN_001ce790
// Address: 0x1ce790 - 0x1ce8b4
void FUN_001ce790_0x1ce790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ce790_0x1ce790");
#endif

    switch (ctx->pc) {
        case 0x1ce7c0u: goto label_1ce7c0;
        case 0x1ce7d0u: goto label_1ce7d0;
        case 0x1ce7d8u: goto label_1ce7d8;
        case 0x1ce7e8u: goto label_1ce7e8;
        case 0x1ce7f0u: goto label_1ce7f0;
        case 0x1ce80cu: goto label_1ce80c;
        case 0x1ce820u: goto label_1ce820;
        case 0x1ce830u: goto label_1ce830;
        case 0x1ce844u: goto label_1ce844;
        case 0x1ce858u: goto label_1ce858;
        case 0x1ce86cu: goto label_1ce86c;
        case 0x1ce880u: goto label_1ce880;
        case 0x1ce890u: goto label_1ce890;
        case 0x1ce8a0u: goto label_1ce8a0;
        default: break;
    }

    ctx->pc = 0x1ce790u;

    // 0x1ce790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce794: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1ce798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce79c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce7a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce7a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7b0: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x1ce7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x1ce7b4: 0x24c69020  addiu       $a2, $a2, -0x6FE0
    ctx->pc = 0x1ce7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938656));
    // 0x1ce7b8: 0xc06dfa0  jal         func_1B7E80
    ctx->pc = 0x1CE7B8u;
    SET_GPR_U32(ctx, 31, 0x1CE7C0u);
    ctx->pc = 0x1CE7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE7B8u;
    // 0x1ce7bc: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E80u, 0x1CE7B8u, 0x1CE7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7C0u;
label_1ce7c0:
    // 0x1ce7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ce7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce7c8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE7C8u;
    SET_GPR_U32(ctx, 31, 0x1CE7D0u);
    ctx->pc = 0x1CE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE7C8u;
    // 0x1ce7cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE7C8u, 0x1CE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7D0u;
label_1ce7d0:
    // 0x1ce7d0: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CE7D0u;
    SET_GPR_U32(ctx, 31, 0x1CE7D8u);
    ctx->pc = 0x1CE7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE7D0u;
    // 0x1ce7d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CE7D0u, 0x1CE7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7D8u;
label_1ce7d8:
    // 0x1ce7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ce7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce7e0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE7E0u;
    SET_GPR_U32(ctx, 31, 0x1CE7E8u);
    ctx->pc = 0x1CE7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE7E0u;
    // 0x1ce7e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE7E0u, 0x1CE7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7E8u;
label_1ce7e8:
    // 0x1ce7e8: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CE7E8u;
    SET_GPR_U32(ctx, 31, 0x1CE7F0u);
    ctx->pc = 0x1CE7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE7E8u;
    // 0x1ce7ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CE7E8u, 0x1CE7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7F0u;
label_1ce7f0:
    // 0x1ce7f0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1ce7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ce7f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7f8: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1ce7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x1ce7fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ce7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce804: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CE804u;
    SET_GPR_U32(ctx, 31, 0x1CE80Cu);
    ctx->pc = 0x1CE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE804u;
    // 0x1ce808: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CE804u, 0x1CE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE80Cu;
label_1ce80c:
    // 0x1ce80c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce810: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ce810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce818: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE818u;
    SET_GPR_U32(ctx, 31, 0x1CE820u);
    ctx->pc = 0x1CE81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE818u;
    // 0x1ce81c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE818u, 0x1CE820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE820u;
label_1ce820:
    // 0x1ce820: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1ce820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ce824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce828: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1CE828u;
    SET_GPR_U32(ctx, 31, 0x1CE830u);
    ctx->pc = 0x1CE82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE828u;
    // 0x1ce82c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1CE828u, 0x1CE830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE830u;
label_1ce830:
    // 0x1ce830: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce838: 0x24a59030  addiu       $a1, $a1, -0x6FD0
    ctx->pc = 0x1ce838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938672));
    // 0x1ce83c: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1CE83Cu;
    SET_GPR_U32(ctx, 31, 0x1CE844u);
    ctx->pc = 0x1CE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE83Cu;
    // 0x1ce840: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1CE83Cu, 0x1CE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE844u;
label_1ce844:
    // 0x1ce844: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce84c: 0x24a590b0  addiu       $a1, $a1, -0x6F50
    ctx->pc = 0x1ce84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938800));
    // 0x1ce850: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CE850u;
    SET_GPR_U32(ctx, 31, 0x1CE858u);
    ctx->pc = 0x1CE854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE850u;
    // 0x1ce854: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CE850u, 0x1CE858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE858u;
label_1ce858:
    // 0x1ce858: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce85c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce860: 0x24a591d0  addiu       $a1, $a1, -0x6E30
    ctx->pc = 0x1ce860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939088));
    // 0x1ce864: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CE864u;
    SET_GPR_U32(ctx, 31, 0x1CE86Cu);
    ctx->pc = 0x1CE868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE864u;
    // 0x1ce868: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CE864u, 0x1CE86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE86Cu;
label_1ce86c:
    // 0x1ce86c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce874: 0x24a59250  addiu       $a1, $a1, -0x6DB0
    ctx->pc = 0x1ce874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    // 0x1ce878: 0xc06dea4  jal         func_1B7A90
    ctx->pc = 0x1CE878u;
    SET_GPR_U32(ctx, 31, 0x1CE880u);
    ctx->pc = 0x1CE87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE878u;
    // 0x1ce87c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A90u, 0x1CE878u, 0x1CE880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE880u;
label_1ce880:
    // 0x1ce880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce884: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ce884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce888: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE888u;
    SET_GPR_U32(ctx, 31, 0x1CE890u);
    ctx->pc = 0x1CE88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE888u;
    // 0x1ce88c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE888u, 0x1CE890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE890u;
label_1ce890:
    // 0x1ce890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce894: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ce894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce898: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x1CE898u;
    SET_GPR_U32(ctx, 31, 0x1CE8A0u);
    ctx->pc = 0x1CE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE898u;
    // 0x1ce89c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D80u, 0x1CE898u, 0x1CE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8A0u;
label_1ce8a0:
    // 0x1ce8a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce8a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ce8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8ACu;
        // 0x1ce8b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE8B4u;
}
