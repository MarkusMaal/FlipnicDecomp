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

// Function: FUN_0018a3d0
// Address: 0x18a3d0 - 0x18a4b4
void FUN_0018a3d0_0x18a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a3d0_0x18a3d0");
#endif

    switch (ctx->pc) {
        case 0x18a3e0u: goto label_18a3e0;
        case 0x18a3e8u: goto label_18a3e8;
        case 0x18a3f0u: goto label_18a3f0;
        case 0x18a3f8u: goto label_18a3f8;
        case 0x18a400u: goto label_18a400;
        case 0x18a408u: goto label_18a408;
        case 0x18a410u: goto label_18a410;
        case 0x18a418u: goto label_18a418;
        case 0x18a420u: goto label_18a420;
        case 0x18a428u: goto label_18a428;
        case 0x18a430u: goto label_18a430;
        case 0x18a438u: goto label_18a438;
        case 0x18a440u: goto label_18a440;
        case 0x18a450u: goto label_18a450;
        case 0x18a460u: goto label_18a460;
        case 0x18a46cu: goto label_18a46c;
        case 0x18a478u: goto label_18a478;
        case 0x18a484u: goto label_18a484;
        case 0x18a490u: goto label_18a490;
        case 0x18a498u: goto label_18a498;
        case 0x18a4a0u: goto label_18a4a0;
        case 0x18a4a8u: goto label_18a4a8;
        default: break;
    }

    ctx->pc = 0x18a3d0u;

    // 0x18a3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a3d8: 0xc074c5a  jal         func_1D3168
    ctx->pc = 0x18A3D8u;
    SET_GPR_U32(ctx, 31, 0x18A3E0u);
    ctx->pc = 0x18A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3D8u;
    // 0x18a3dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3168u, 0x18A3D8u, 0x18A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3E0u;
label_18a3e0:
    // 0x18a3e0: 0xc0763ba  jal         func_1D8EE8
    ctx->pc = 0x18A3E0u;
    SET_GPR_U32(ctx, 31, 0x18A3E8u);
    ctx->pc = 0x18A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3E0u;
    // 0x18a3e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EE8u, 0x18A3E0u, 0x18A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3E8u;
label_18a3e8:
    // 0x18a3e8: 0xc074bac  jal         func_1D2EB0
    ctx->pc = 0x18A3E8u;
    SET_GPR_U32(ctx, 31, 0x18A3F0u);
    ctx->pc = 0x18A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3E8u;
    // 0x18a3ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2EB0u, 0x18A3E8u, 0x18A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3F0u;
label_18a3f0:
    // 0x18a3f0: 0xc074c46  jal         func_1D3118
    ctx->pc = 0x18A3F0u;
    SET_GPR_U32(ctx, 31, 0x18A3F8u);
    ctx->pc = 0x18A3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3F0u;
    // 0x18a3f4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3118u, 0x18A3F0u, 0x18A3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3F8u;
label_18a3f8:
    // 0x18a3f8: 0xc074dca  jal         func_1D3728
    ctx->pc = 0x18A3F8u;
    SET_GPR_U32(ctx, 31, 0x18A400u);
    ctx->pc = 0x1D3728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3728u, 0x18A3F8u, 0x18A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A400u;
label_18a400:
    // 0x18a400: 0xc074dba  jal         func_1D36E8
    ctx->pc = 0x18A400u;
    SET_GPR_U32(ctx, 31, 0x18A408u);
    ctx->pc = 0x18A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A400u;
    // 0x18a404: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D36E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E8u, 0x18A400u, 0x18A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A408u;
label_18a408:
    // 0x18a408: 0xc075890  jal         func_1D6240
    ctx->pc = 0x18A408u;
    SET_GPR_U32(ctx, 31, 0x18A410u);
    ctx->pc = 0x18A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A408u;
    // 0x18a40c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6240u, 0x18A408u, 0x18A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A410u;
label_18a410:
    // 0x18a410: 0xc076724  jal         func_1D9C90
    ctx->pc = 0x18A410u;
    SET_GPR_U32(ctx, 31, 0x18A418u);
    ctx->pc = 0x18A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A410u;
    // 0x18a414: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C90u, 0x18A410u, 0x18A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A418u;
label_18a418:
    // 0x18a418: 0xc077fb0  jal         func_1DFEC0
    ctx->pc = 0x18A418u;
    SET_GPR_U32(ctx, 31, 0x18A420u);
    ctx->pc = 0x18A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A418u;
    // 0x18a41c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFEC0u, 0x18A418u, 0x18A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A420u;
label_18a420:
    // 0x18a420: 0xc077b14  jal         func_1DEC50
    ctx->pc = 0x18A420u;
    SET_GPR_U32(ctx, 31, 0x18A428u);
    ctx->pc = 0x18A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A420u;
    // 0x18a424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEC50u, 0x18A420u, 0x18A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A428u;
label_18a428:
    // 0x18a428: 0xc074c82  jal         func_1D3208
    ctx->pc = 0x18A428u;
    SET_GPR_U32(ctx, 31, 0x18A430u);
    ctx->pc = 0x18A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A428u;
    // 0x18a42c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3208u, 0x18A428u, 0x18A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A430u;
label_18a430:
    // 0x18a430: 0xc078502  jal         func_1E1408
    ctx->pc = 0x18A430u;
    SET_GPR_U32(ctx, 31, 0x18A438u);
    ctx->pc = 0x18A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A430u;
    // 0x18a434: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1408u, 0x18A430u, 0x18A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A438u;
label_18a438:
    // 0x18a438: 0xc074ba0  jal         func_1D2E80
    ctx->pc = 0x18A438u;
    SET_GPR_U32(ctx, 31, 0x18A440u);
    ctx->pc = 0x18A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A438u;
    // 0x18a43c: 0x24040880  addiu       $a0, $zero, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2E80u, 0x18A438u, 0x18A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A440u;
label_18a440:
    // 0x18a440: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x18a440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x18a444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a448: 0xc074c84  jal         func_1D3210
    ctx->pc = 0x18A448u;
    SET_GPR_U32(ctx, 31, 0x18A450u);
    ctx->pc = 0x18A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A448u;
    // 0x18a44c: 0x3445ffff  ori         $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3210u, 0x18A448u, 0x18A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A450u;
label_18a450:
    // 0x18a450: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x18a450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x18a454: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a458: 0xc074c84  jal         func_1D3210
    ctx->pc = 0x18A458u;
    SET_GPR_U32(ctx, 31, 0x18A460u);
    ctx->pc = 0x18A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A458u;
    // 0x18a45c: 0x3445ffff  ori         $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3210u, 0x18A458u, 0x18A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A460u;
label_18a460:
    // 0x18a460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a464: 0xc074c9e  jal         func_1D3278
    ctx->pc = 0x18A464u;
    SET_GPR_U32(ctx, 31, 0x18A46Cu);
    ctx->pc = 0x18A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A464u;
    // 0x18a468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3278u, 0x18A464u, 0x18A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A46Cu;
label_18a46c:
    // 0x18a46c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a470: 0xc074c9e  jal         func_1D3278
    ctx->pc = 0x18A470u;
    SET_GPR_U32(ctx, 31, 0x18A478u);
    ctx->pc = 0x18A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A470u;
    // 0x18a474: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3278u, 0x18A470u, 0x18A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A478u;
label_18a478:
    // 0x18a478: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a47c: 0xc074cb8  jal         func_1D32E0
    ctx->pc = 0x18A47Cu;
    SET_GPR_U32(ctx, 31, 0x18A484u);
    ctx->pc = 0x18A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A47Cu;
    // 0x18a480: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D32E0u, 0x18A47Cu, 0x18A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A484u;
label_18a484:
    // 0x18a484: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a488: 0xc074cb8  jal         func_1D32E0
    ctx->pc = 0x18A488u;
    SET_GPR_U32(ctx, 31, 0x18A490u);
    ctx->pc = 0x18A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A488u;
    // 0x18a48c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D32E0u, 0x18A488u, 0x18A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A490u;
label_18a490:
    // 0x18a490: 0xc074d20  jal         func_1D3480
    ctx->pc = 0x18A490u;
    SET_GPR_U32(ctx, 31, 0x18A498u);
    ctx->pc = 0x18A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A490u;
    // 0x18a494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3480u, 0x18A490u, 0x18A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A498u;
label_18a498:
    // 0x18a498: 0xc074d20  jal         func_1D3480
    ctx->pc = 0x18A498u;
    SET_GPR_U32(ctx, 31, 0x18A4A0u);
    ctx->pc = 0x18A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A498u;
    // 0x18a49c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3480u, 0x18A498u, 0x18A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4A0u;
label_18a4a0:
    // 0x18a4a0: 0xc074da6  jal         func_1D3698
    ctx->pc = 0x18A4A0u;
    SET_GPR_U32(ctx, 31, 0x18A4A8u);
    ctx->pc = 0x1D3698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3698u, 0x18A4A0u, 0x18A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4A8u;
label_18a4a8:
    // 0x18a4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18A4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4ACu;
        // 0x18a4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A4B4u;
}
