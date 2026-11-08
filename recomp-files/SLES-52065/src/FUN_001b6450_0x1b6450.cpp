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

// Function: FUN_001b6450
// Address: 0x1b6450 - 0x1b6844
void FUN_001b6450_0x1b6450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6450_0x1b6450");
#endif

    switch (ctx->pc) {
        case 0x1b6488u: goto label_1b6488;
        case 0x1b6498u: goto label_1b6498;
        case 0x1b64a8u: goto label_1b64a8;
        case 0x1b64b8u: goto label_1b64b8;
        case 0x1b64c8u: goto label_1b64c8;
        case 0x1b64d8u: goto label_1b64d8;
        case 0x1b64e8u: goto label_1b64e8;
        case 0x1b64f8u: goto label_1b64f8;
        case 0x1b6508u: goto label_1b6508;
        case 0x1b6518u: goto label_1b6518;
        case 0x1b6528u: goto label_1b6528;
        case 0x1b6538u: goto label_1b6538;
        case 0x1b6548u: goto label_1b6548;
        case 0x1b6558u: goto label_1b6558;
        case 0x1b6568u: goto label_1b6568;
        case 0x1b6578u: goto label_1b6578;
        case 0x1b6588u: goto label_1b6588;
        case 0x1b6598u: goto label_1b6598;
        case 0x1b65a8u: goto label_1b65a8;
        case 0x1b65b8u: goto label_1b65b8;
        case 0x1b65c8u: goto label_1b65c8;
        case 0x1b65d8u: goto label_1b65d8;
        case 0x1b65e8u: goto label_1b65e8;
        case 0x1b65f8u: goto label_1b65f8;
        case 0x1b6608u: goto label_1b6608;
        case 0x1b6618u: goto label_1b6618;
        case 0x1b6628u: goto label_1b6628;
        case 0x1b6638u: goto label_1b6638;
        case 0x1b6648u: goto label_1b6648;
        case 0x1b6658u: goto label_1b6658;
        case 0x1b6668u: goto label_1b6668;
        case 0x1b6678u: goto label_1b6678;
        case 0x1b6688u: goto label_1b6688;
        case 0x1b6698u: goto label_1b6698;
        case 0x1b66a8u: goto label_1b66a8;
        case 0x1b66b8u: goto label_1b66b8;
        case 0x1b66c8u: goto label_1b66c8;
        case 0x1b66d8u: goto label_1b66d8;
        case 0x1b66e8u: goto label_1b66e8;
        case 0x1b66f8u: goto label_1b66f8;
        case 0x1b6708u: goto label_1b6708;
        case 0x1b6718u: goto label_1b6718;
        case 0x1b6728u: goto label_1b6728;
        case 0x1b6738u: goto label_1b6738;
        case 0x1b6748u: goto label_1b6748;
        case 0x1b6758u: goto label_1b6758;
        case 0x1b6768u: goto label_1b6768;
        case 0x1b6778u: goto label_1b6778;
        case 0x1b6788u: goto label_1b6788;
        case 0x1b6798u: goto label_1b6798;
        case 0x1b67a8u: goto label_1b67a8;
        case 0x1b67b8u: goto label_1b67b8;
        case 0x1b67c8u: goto label_1b67c8;
        case 0x1b67d8u: goto label_1b67d8;
        case 0x1b67e8u: goto label_1b67e8;
        case 0x1b67f8u: goto label_1b67f8;
        case 0x1b6808u: goto label_1b6808;
        case 0x1b6818u: goto label_1b6818;
        case 0x1b6828u: goto label_1b6828;
        case 0x1b6838u: goto label_1b6838;
        case 0x1b683cu: goto label_1b683c;
        default: break;
    }

    ctx->pc = 0x1b6450u;

    // 0x1b6450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6454: 0x2ca1001f  sltiu       $at, $a1, 0x1F
    ctx->pc = 0x1b6454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1b6458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b645c: 0x102000f6  beqz        $at, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1B645Cu;
    {
        const bool branch_taken_0x1b645c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B645Cu;
        // 0x1b6460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b645c) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6464u;
    // 0x1b6464: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1b6464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1b6468: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b6468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b646c: 0x24840f20  addiu       $a0, $a0, 0xF20
    ctx->pc = 0x1b646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3872));
    // 0x1b6470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b6470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b6474: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b6474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6478: 0x600008  jr          $v1
    ctx->pc = 0x1B6478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B6480u: goto label_1b6480;
            case 0x1B64A0u: goto label_1b64a0;
            case 0x1B64C0u: goto label_1b64c0;
            case 0x1B64E0u: goto label_1b64e0;
            case 0x1B6500u: goto label_1b6500;
            case 0x1B6520u: goto label_1b6520;
            case 0x1B6540u: goto label_1b6540;
            case 0x1B6560u: goto label_1b6560;
            case 0x1B6580u: goto label_1b6580;
            case 0x1B65A0u: goto label_1b65a0;
            case 0x1B65C0u: goto label_1b65c0;
            case 0x1B65E0u: goto label_1b65e0;
            case 0x1B6600u: goto label_1b6600;
            case 0x1B6620u: goto label_1b6620;
            case 0x1B6640u: goto label_1b6640;
            case 0x1B6660u: goto label_1b6660;
            case 0x1B6680u: goto label_1b6680;
            case 0x1B66A0u: goto label_1b66a0;
            case 0x1B66C0u: goto label_1b66c0;
            case 0x1B66E0u: goto label_1b66e0;
            case 0x1B6700u: goto label_1b6700;
            case 0x1B6720u: goto label_1b6720;
            case 0x1B6740u: goto label_1b6740;
            case 0x1B6760u: goto label_1b6760;
            case 0x1B6780u: goto label_1b6780;
            case 0x1B67A0u: goto label_1b67a0;
            case 0x1B67C0u: goto label_1b67c0;
            case 0x1B67E0u: goto label_1b67e0;
            case 0x1B6800u: goto label_1b6800;
            case 0x1B6820u: goto label_1b6820;
            case 0x1B6838u: goto label_1b6838;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6478u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B6480u;
label_1b6480:
    // 0x1b6480: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6480u;
    SET_GPR_U32(ctx, 31, 0x1B6488u);
    ctx->pc = 0x1B6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6480u;
    // 0x1b6484: 0x24040258  addiu       $a0, $zero, 0x258 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6480u, 0x1B6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6488u;
label_1b6488:
    // 0x1b6488: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1B6488u;
    {
        const bool branch_taken_0x1b6488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6488) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6490u;
    // 0x1b6490: 0xc070834  jal         func_1C20D0
    ctx->pc = 0x1B6490u;
    SET_GPR_U32(ctx, 31, 0x1B6498u);
    ctx->pc = 0x1B6494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6490u;
    // 0x1b6494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1B6490u, 0x1B6498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6498u;
label_1b6498:
    // 0x1b6498: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x1B6498u;
    {
        const bool branch_taken_0x1b6498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6498u;
        // 0x1b649c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6498) {
            ctx->pc = 0x1B683Cu;
            goto label_1b683c;
        }
    }
    ctx->pc = 0x1B64A0u;
label_1b64a0:
    // 0x1b64a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B64A0u;
    SET_GPR_U32(ctx, 31, 0x1B64A8u);
    ctx->pc = 0x1B64A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64A0u;
    // 0x1b64a4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B64A0u, 0x1B64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64A8u;
label_1b64a8:
    // 0x1b64a8: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1B64A8u;
    {
        const bool branch_taken_0x1b64a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64a8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B64B0u;
    // 0x1b64b0: 0xc06f0c4  jal         func_1BC310
    ctx->pc = 0x1B64B0u;
    SET_GPR_U32(ctx, 31, 0x1B64B8u);
    ctx->pc = 0x1B64B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64B0u;
    // 0x1b64b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC310u, 0x1B64B0u, 0x1B64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64B8u;
label_1b64b8:
    // 0x1b64b8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1B64B8u;
    {
        const bool branch_taken_0x1b64b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64b8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B64C0u;
label_1b64c0:
    // 0x1b64c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B64C0u;
    SET_GPR_U32(ctx, 31, 0x1B64C8u);
    ctx->pc = 0x1B64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64C0u;
    // 0x1b64c4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B64C0u, 0x1B64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64C8u;
label_1b64c8:
    // 0x1b64c8: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x1B64C8u;
    {
        const bool branch_taken_0x1b64c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64c8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B64D0u;
    // 0x1b64d0: 0xc06f0c4  jal         func_1BC310
    ctx->pc = 0x1B64D0u;
    SET_GPR_U32(ctx, 31, 0x1B64D8u);
    ctx->pc = 0x1B64D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64D0u;
    // 0x1b64d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC310u, 0x1B64D0u, 0x1B64D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64D8u;
label_1b64d8:
    // 0x1b64d8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x1B64D8u;
    {
        const bool branch_taken_0x1b64d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64d8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B64E0u;
label_1b64e0:
    // 0x1b64e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B64E0u;
    SET_GPR_U32(ctx, 31, 0x1B64E8u);
    ctx->pc = 0x1B64E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64E0u;
    // 0x1b64e4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B64E0u, 0x1B64E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64E8u;
label_1b64e8:
    // 0x1b64e8: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x1B64E8u;
    {
        const bool branch_taken_0x1b64e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64e8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B64F0u;
    // 0x1b64f0: 0xc06f144  jal         func_1BC510
    ctx->pc = 0x1B64F0u;
    SET_GPR_U32(ctx, 31, 0x1B64F8u);
    ctx->pc = 0x1B64F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64F0u;
    // 0x1b64f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC510u, 0x1B64F0u, 0x1B64F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64F8u;
label_1b64f8:
    // 0x1b64f8: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1B64F8u;
    {
        const bool branch_taken_0x1b64f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64f8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6500u;
label_1b6500:
    // 0x1b6500: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6500u;
    SET_GPR_U32(ctx, 31, 0x1B6508u);
    ctx->pc = 0x1B6504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6500u;
    // 0x1b6504: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6500u, 0x1B6508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6508u;
label_1b6508:
    // 0x1b6508: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1B6508u;
    {
        const bool branch_taken_0x1b6508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6508) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6510u;
    // 0x1b6510: 0xc06f1b4  jal         func_1BC6D0
    ctx->pc = 0x1B6510u;
    SET_GPR_U32(ctx, 31, 0x1B6518u);
    ctx->pc = 0x1B6514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6510u;
    // 0x1b6514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC6D0u, 0x1B6510u, 0x1B6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6518u;
label_1b6518:
    // 0x1b6518: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x1B6518u;
    {
        const bool branch_taken_0x1b6518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6518) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6520u;
label_1b6520:
    // 0x1b6520: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6520u;
    SET_GPR_U32(ctx, 31, 0x1B6528u);
    ctx->pc = 0x1B6524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6520u;
    // 0x1b6524: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6520u, 0x1B6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6528u;
label_1b6528:
    // 0x1b6528: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1B6528u;
    {
        const bool branch_taken_0x1b6528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6528) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6530u;
    // 0x1b6530: 0xc06fa60  jal         func_1BE980
    ctx->pc = 0x1B6530u;
    SET_GPR_U32(ctx, 31, 0x1B6538u);
    ctx->pc = 0x1B6534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6530u;
    // 0x1b6534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE980u, 0x1B6530u, 0x1B6538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6538u;
label_1b6538:
    // 0x1b6538: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1B6538u;
    {
        const bool branch_taken_0x1b6538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6538) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6540u;
label_1b6540:
    // 0x1b6540: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6540u;
    SET_GPR_U32(ctx, 31, 0x1B6548u);
    ctx->pc = 0x1B6544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6540u;
    // 0x1b6544: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6540u, 0x1B6548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6548u;
label_1b6548:
    // 0x1b6548: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x1B6548u;
    {
        const bool branch_taken_0x1b6548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6548) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6550u;
    // 0x1b6550: 0xc06fd68  jal         func_1BF5A0
    ctx->pc = 0x1B6550u;
    SET_GPR_U32(ctx, 31, 0x1B6558u);
    ctx->pc = 0x1B6554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6550u;
    // 0x1b6554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF5A0u, 0x1B6550u, 0x1B6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6558u;
label_1b6558:
    // 0x1b6558: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1B6558u;
    {
        const bool branch_taken_0x1b6558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6558) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6560u;
label_1b6560:
    // 0x1b6560: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6560u;
    SET_GPR_U32(ctx, 31, 0x1B6568u);
    ctx->pc = 0x1B6564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6560u;
    // 0x1b6564: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6560u, 0x1B6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6568u;
label_1b6568:
    // 0x1b6568: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1B6568u;
    {
        const bool branch_taken_0x1b6568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6568) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6570u;
    // 0x1b6570: 0xc0704e4  jal         func_1C1390
    ctx->pc = 0x1B6570u;
    SET_GPR_U32(ctx, 31, 0x1B6578u);
    ctx->pc = 0x1B6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6570u;
    // 0x1b6574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1390u, 0x1B6570u, 0x1B6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6578u;
label_1b6578:
    // 0x1b6578: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1B6578u;
    {
        const bool branch_taken_0x1b6578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6578) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6580u;
label_1b6580:
    // 0x1b6580: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6580u;
    SET_GPR_U32(ctx, 31, 0x1B6588u);
    ctx->pc = 0x1B6584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6580u;
    // 0x1b6584: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6580u, 0x1B6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6588u;
label_1b6588:
    // 0x1b6588: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1B6588u;
    {
        const bool branch_taken_0x1b6588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6588) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6590u;
    // 0x1b6590: 0xc0700c4  jal         func_1C0310
    ctx->pc = 0x1B6590u;
    SET_GPR_U32(ctx, 31, 0x1B6598u);
    ctx->pc = 0x1B6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6590u;
    // 0x1b6594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0310u, 0x1B6590u, 0x1B6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6598u;
label_1b6598:
    // 0x1b6598: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1B6598u;
    {
        const bool branch_taken_0x1b6598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6598) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B65A0u;
label_1b65a0:
    // 0x1b65a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B65A0u;
    SET_GPR_U32(ctx, 31, 0x1B65A8u);
    ctx->pc = 0x1B65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65A0u;
    // 0x1b65a4: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B65A0u, 0x1B65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65A8u;
label_1b65a8:
    // 0x1b65a8: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1B65A8u;
    {
        const bool branch_taken_0x1b65a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65a8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B65B0u;
    // 0x1b65b0: 0xc0711e0  jal         func_1C4780
    ctx->pc = 0x1B65B0u;
    SET_GPR_U32(ctx, 31, 0x1B65B8u);
    ctx->pc = 0x1B65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65B0u;
    // 0x1b65b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4780u, 0x1B65B0u, 0x1B65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65B8u;
label_1b65b8:
    // 0x1b65b8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1B65B8u;
    {
        const bool branch_taken_0x1b65b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65b8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B65C0u;
label_1b65c0:
    // 0x1b65c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B65C0u;
    SET_GPR_U32(ctx, 31, 0x1B65C8u);
    ctx->pc = 0x1B65C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65C0u;
    // 0x1b65c4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B65C0u, 0x1B65C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65C8u;
label_1b65c8:
    // 0x1b65c8: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1B65C8u;
    {
        const bool branch_taken_0x1b65c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65c8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B65D0u;
    // 0x1b65d0: 0xc071948  jal         func_1C6520
    ctx->pc = 0x1B65D0u;
    SET_GPR_U32(ctx, 31, 0x1B65D8u);
    ctx->pc = 0x1B65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65D0u;
    // 0x1b65d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6520u, 0x1B65D0u, 0x1B65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65D8u;
label_1b65d8:
    // 0x1b65d8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1B65D8u;
    {
        const bool branch_taken_0x1b65d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65d8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B65E0u;
label_1b65e0:
    // 0x1b65e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B65E0u;
    SET_GPR_U32(ctx, 31, 0x1B65E8u);
    ctx->pc = 0x1B65E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65E0u;
    // 0x1b65e4: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B65E0u, 0x1B65E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65E8u;
label_1b65e8:
    // 0x1b65e8: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x1B65E8u;
    {
        const bool branch_taken_0x1b65e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65e8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B65F0u;
    // 0x1b65f0: 0xc0719e8  jal         func_1C67A0
    ctx->pc = 0x1B65F0u;
    SET_GPR_U32(ctx, 31, 0x1B65F8u);
    ctx->pc = 0x1B65F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65F0u;
    // 0x1b65f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C67A0u, 0x1B65F0u, 0x1B65F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65F8u;
label_1b65f8:
    // 0x1b65f8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1B65F8u;
    {
        const bool branch_taken_0x1b65f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65f8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6600u;
label_1b6600:
    // 0x1b6600: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6600u;
    SET_GPR_U32(ctx, 31, 0x1B6608u);
    ctx->pc = 0x1B6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6600u;
    // 0x1b6604: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6600u, 0x1B6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6608u;
label_1b6608:
    // 0x1b6608: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1B6608u;
    {
        const bool branch_taken_0x1b6608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6608) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6610u;
    // 0x1b6610: 0xc0719c0  jal         func_1C6700
    ctx->pc = 0x1B6610u;
    SET_GPR_U32(ctx, 31, 0x1B6618u);
    ctx->pc = 0x1B6614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6610u;
    // 0x1b6614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6700u, 0x1B6610u, 0x1B6618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6618u;
label_1b6618:
    // 0x1b6618: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1B6618u;
    {
        const bool branch_taken_0x1b6618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6618) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6620u;
label_1b6620:
    // 0x1b6620: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6620u;
    SET_GPR_U32(ctx, 31, 0x1B6628u);
    ctx->pc = 0x1B6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6620u;
    // 0x1b6624: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6620u, 0x1B6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6628u;
label_1b6628:
    // 0x1b6628: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x1B6628u;
    {
        const bool branch_taken_0x1b6628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6628) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6630u;
    // 0x1b6630: 0xc072950  jal         func_1CA540
    ctx->pc = 0x1B6630u;
    SET_GPR_U32(ctx, 31, 0x1B6638u);
    ctx->pc = 0x1B6634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6630u;
    // 0x1b6634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA540u, 0x1B6630u, 0x1B6638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6638u;
label_1b6638:
    // 0x1b6638: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1B6638u;
    {
        const bool branch_taken_0x1b6638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6638) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6640u;
label_1b6640:
    // 0x1b6640: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6640u;
    SET_GPR_U32(ctx, 31, 0x1B6648u);
    ctx->pc = 0x1B6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6640u;
    // 0x1b6644: 0x2404009c  addiu       $a0, $zero, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6640u, 0x1B6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6648u;
label_1b6648:
    // 0x1b6648: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1B6648u;
    {
        const bool branch_taken_0x1b6648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6648) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6650u;
    // 0x1b6650: 0xc072b14  jal         func_1CAC50
    ctx->pc = 0x1B6650u;
    SET_GPR_U32(ctx, 31, 0x1B6658u);
    ctx->pc = 0x1B6654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6650u;
    // 0x1b6654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAC50u, 0x1B6650u, 0x1B6658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6658u;
label_1b6658:
    // 0x1b6658: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1B6658u;
    {
        const bool branch_taken_0x1b6658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6658) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6660u;
label_1b6660:
    // 0x1b6660: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6660u;
    SET_GPR_U32(ctx, 31, 0x1B6668u);
    ctx->pc = 0x1B6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6660u;
    // 0x1b6664: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6660u, 0x1B6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6668u;
label_1b6668:
    // 0x1b6668: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1B6668u;
    {
        const bool branch_taken_0x1b6668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6668) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6670u;
    // 0x1b6670: 0xc071e7c  jal         func_1C79F0
    ctx->pc = 0x1B6670u;
    SET_GPR_U32(ctx, 31, 0x1B6678u);
    ctx->pc = 0x1B6674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6670u;
    // 0x1b6674: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C79F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C79F0u, 0x1B6670u, 0x1B6678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6678u;
label_1b6678:
    // 0x1b6678: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1B6678u;
    {
        const bool branch_taken_0x1b6678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6678) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6680u;
label_1b6680:
    // 0x1b6680: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6680u;
    SET_GPR_U32(ctx, 31, 0x1B6688u);
    ctx->pc = 0x1B6684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6680u;
    // 0x1b6684: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6680u, 0x1B6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6688u;
label_1b6688:
    // 0x1b6688: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1B6688u;
    {
        const bool branch_taken_0x1b6688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6688) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6690u;
    // 0x1b6690: 0xc072200  jal         func_1C8800
    ctx->pc = 0x1B6690u;
    SET_GPR_U32(ctx, 31, 0x1B6698u);
    ctx->pc = 0x1B6694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6690u;
    // 0x1b6694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8800u, 0x1B6690u, 0x1B6698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6698u;
label_1b6698:
    // 0x1b6698: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1B6698u;
    {
        const bool branch_taken_0x1b6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6698) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B66A0u;
label_1b66a0:
    // 0x1b66a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B66A0u;
    SET_GPR_U32(ctx, 31, 0x1B66A8u);
    ctx->pc = 0x1B66A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66A0u;
    // 0x1b66a4: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B66A0u, 0x1B66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66A8u;
label_1b66a8:
    // 0x1b66a8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1B66A8u;
    {
        const bool branch_taken_0x1b66a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66a8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B66B0u;
    // 0x1b66b0: 0xc072544  jal         func_1C9510
    ctx->pc = 0x1B66B0u;
    SET_GPR_U32(ctx, 31, 0x1B66B8u);
    ctx->pc = 0x1B66B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66B0u;
    // 0x1b66b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9510u, 0x1B66B0u, 0x1B66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66B8u;
label_1b66b8:
    // 0x1b66b8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1B66B8u;
    {
        const bool branch_taken_0x1b66b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66b8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B66C0u;
label_1b66c0:
    // 0x1b66c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B66C0u;
    SET_GPR_U32(ctx, 31, 0x1B66C8u);
    ctx->pc = 0x1B66C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66C0u;
    // 0x1b66c4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B66C0u, 0x1B66C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66C8u;
label_1b66c8:
    // 0x1b66c8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1B66C8u;
    {
        const bool branch_taken_0x1b66c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66c8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B66D0u;
    // 0x1b66d0: 0xc072de4  jal         func_1CB790
    ctx->pc = 0x1B66D0u;
    SET_GPR_U32(ctx, 31, 0x1B66D8u);
    ctx->pc = 0x1B66D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66D0u;
    // 0x1b66d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB790u, 0x1B66D0u, 0x1B66D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66D8u;
label_1b66d8:
    // 0x1b66d8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1B66D8u;
    {
        const bool branch_taken_0x1b66d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66d8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B66E0u;
label_1b66e0:
    // 0x1b66e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B66E0u;
    SET_GPR_U32(ctx, 31, 0x1B66E8u);
    ctx->pc = 0x1B66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66E0u;
    // 0x1b66e4: 0x24040268  addiu       $a0, $zero, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B66E0u, 0x1B66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66E8u;
label_1b66e8:
    // 0x1b66e8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1B66E8u;
    {
        const bool branch_taken_0x1b66e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66e8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B66F0u;
    // 0x1b66f0: 0xc070b68  jal         func_1C2DA0
    ctx->pc = 0x1B66F0u;
    SET_GPR_U32(ctx, 31, 0x1B66F8u);
    ctx->pc = 0x1B66F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66F0u;
    // 0x1b66f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2DA0u, 0x1B66F0u, 0x1B66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66F8u;
label_1b66f8:
    // 0x1b66f8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1B66F8u;
    {
        const bool branch_taken_0x1b66f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66f8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6700u;
label_1b6700:
    // 0x1b6700: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6700u;
    SET_GPR_U32(ctx, 31, 0x1B6708u);
    ctx->pc = 0x1B6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6700u;
    // 0x1b6704: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6700u, 0x1B6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6708u;
label_1b6708:
    // 0x1b6708: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B6708u;
    {
        const bool branch_taken_0x1b6708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6708) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6710u;
    // 0x1b6710: 0xc0731c8  jal         func_1CC720
    ctx->pc = 0x1B6710u;
    SET_GPR_U32(ctx, 31, 0x1B6718u);
    ctx->pc = 0x1B6714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6710u;
    // 0x1b6714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC720u, 0x1B6710u, 0x1B6718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6718u;
label_1b6718:
    // 0x1b6718: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1B6718u;
    {
        const bool branch_taken_0x1b6718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6718) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6720u;
label_1b6720:
    // 0x1b6720: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6720u;
    SET_GPR_U32(ctx, 31, 0x1B6728u);
    ctx->pc = 0x1B6724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6720u;
    // 0x1b6724: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6720u, 0x1B6728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6728u;
label_1b6728:
    // 0x1b6728: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1B6728u;
    {
        const bool branch_taken_0x1b6728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6728) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6730u;
    // 0x1b6730: 0xc074540  jal         func_1D1500
    ctx->pc = 0x1B6730u;
    SET_GPR_U32(ctx, 31, 0x1B6738u);
    ctx->pc = 0x1B6734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6730u;
    // 0x1b6734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1500u, 0x1B6730u, 0x1B6738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6738u;
label_1b6738:
    // 0x1b6738: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1B6738u;
    {
        const bool branch_taken_0x1b6738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6738) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6740u;
label_1b6740:
    // 0x1b6740: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6740u;
    SET_GPR_U32(ctx, 31, 0x1B6748u);
    ctx->pc = 0x1B6744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6740u;
    // 0x1b6744: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6740u, 0x1B6748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6748u;
label_1b6748:
    // 0x1b6748: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1B6748u;
    {
        const bool branch_taken_0x1b6748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6748) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6750u;
    // 0x1b6750: 0xc073230  jal         func_1CC8C0
    ctx->pc = 0x1B6750u;
    SET_GPR_U32(ctx, 31, 0x1B6758u);
    ctx->pc = 0x1B6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6750u;
    // 0x1b6754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC8C0u, 0x1B6750u, 0x1B6758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6758u;
label_1b6758:
    // 0x1b6758: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1B6758u;
    {
        const bool branch_taken_0x1b6758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6758) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6760u;
label_1b6760:
    // 0x1b6760: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6760u;
    SET_GPR_U32(ctx, 31, 0x1B6768u);
    ctx->pc = 0x1B6764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6760u;
    // 0x1b6764: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6760u, 0x1B6768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6768u;
label_1b6768:
    // 0x1b6768: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1B6768u;
    {
        const bool branch_taken_0x1b6768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6768) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6770u;
    // 0x1b6770: 0xc07334c  jal         func_1CCD30
    ctx->pc = 0x1B6770u;
    SET_GPR_U32(ctx, 31, 0x1B6778u);
    ctx->pc = 0x1B6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6770u;
    // 0x1b6774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD30u, 0x1B6770u, 0x1B6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6778u;
label_1b6778:
    // 0x1b6778: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1B6778u;
    {
        const bool branch_taken_0x1b6778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6778) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6780u;
label_1b6780:
    // 0x1b6780: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6780u;
    SET_GPR_U32(ctx, 31, 0x1B6788u);
    ctx->pc = 0x1B6784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6780u;
    // 0x1b6784: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6780u, 0x1B6788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6788u;
label_1b6788:
    // 0x1b6788: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B6788u;
    {
        const bool branch_taken_0x1b6788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6788) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6790u;
    // 0x1b6790: 0xc0736c0  jal         func_1CDB00
    ctx->pc = 0x1B6790u;
    SET_GPR_U32(ctx, 31, 0x1B6798u);
    ctx->pc = 0x1B6794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6790u;
    // 0x1b6794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB00u, 0x1B6790u, 0x1B6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6798u;
label_1b6798:
    // 0x1b6798: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1B6798u;
    {
        const bool branch_taken_0x1b6798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6798) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B67A0u;
label_1b67a0:
    // 0x1b67a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B67A0u;
    SET_GPR_U32(ctx, 31, 0x1B67A8u);
    ctx->pc = 0x1B67A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67A0u;
    // 0x1b67a4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B67A0u, 0x1B67A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67A8u;
label_1b67a8:
    // 0x1b67a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B67A8u;
    {
        const bool branch_taken_0x1b67a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67a8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B67B0u;
    // 0x1b67b0: 0xc07396c  jal         func_1CE5B0
    ctx->pc = 0x1B67B0u;
    SET_GPR_U32(ctx, 31, 0x1B67B8u);
    ctx->pc = 0x1B67B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67B0u;
    // 0x1b67b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE5B0u, 0x1B67B0u, 0x1B67B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67B8u;
label_1b67b8:
    // 0x1b67b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B67B8u;
    {
        const bool branch_taken_0x1b67b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67b8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B67C0u;
label_1b67c0:
    // 0x1b67c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B67C0u;
    SET_GPR_U32(ctx, 31, 0x1B67C8u);
    ctx->pc = 0x1B67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67C0u;
    // 0x1b67c4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B67C0u, 0x1B67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67C8u;
label_1b67c8:
    // 0x1b67c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B67C8u;
    {
        const bool branch_taken_0x1b67c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67c8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B67D0u;
    // 0x1b67d0: 0xc073ac8  jal         func_1CEB20
    ctx->pc = 0x1B67D0u;
    SET_GPR_U32(ctx, 31, 0x1B67D8u);
    ctx->pc = 0x1B67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67D0u;
    // 0x1b67d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB20u, 0x1B67D0u, 0x1B67D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67D8u;
label_1b67d8:
    // 0x1b67d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B67D8u;
    {
        const bool branch_taken_0x1b67d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67d8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B67E0u;
label_1b67e0:
    // 0x1b67e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B67E0u;
    SET_GPR_U32(ctx, 31, 0x1B67E8u);
    ctx->pc = 0x1B67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67E0u;
    // 0x1b67e4: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B67E0u, 0x1B67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67E8u;
label_1b67e8:
    // 0x1b67e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B67E8u;
    {
        const bool branch_taken_0x1b67e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67e8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B67F0u;
    // 0x1b67f0: 0xc073b38  jal         func_1CECE0
    ctx->pc = 0x1B67F0u;
    SET_GPR_U32(ctx, 31, 0x1B67F8u);
    ctx->pc = 0x1B67F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67F0u;
    // 0x1b67f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECE0u, 0x1B67F0u, 0x1B67F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67F8u;
label_1b67f8:
    // 0x1b67f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B67F8u;
    {
        const bool branch_taken_0x1b67f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67f8) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6800u;
label_1b6800:
    // 0x1b6800: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6800u;
    SET_GPR_U32(ctx, 31, 0x1B6808u);
    ctx->pc = 0x1B6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6800u;
    // 0x1b6804: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6800u, 0x1B6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6808u;
label_1b6808:
    // 0x1b6808: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6808u;
    {
        const bool branch_taken_0x1b6808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6808) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6810u;
    // 0x1b6810: 0xc073ec0  jal         func_1CFB00
    ctx->pc = 0x1B6810u;
    SET_GPR_U32(ctx, 31, 0x1B6818u);
    ctx->pc = 0x1B6814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6810u;
    // 0x1b6814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFB00u, 0x1B6810u, 0x1B6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6818u;
label_1b6818:
    // 0x1b6818: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6818u;
    {
        const bool branch_taken_0x1b6818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6818) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6820u;
label_1b6820:
    // 0x1b6820: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6820u;
    SET_GPR_U32(ctx, 31, 0x1B6828u);
    ctx->pc = 0x1B6824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6820u;
    // 0x1b6824: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6820u, 0x1B6828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6828u;
label_1b6828:
    // 0x1b6828: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6828u;
    {
        const bool branch_taken_0x1b6828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6828) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6830u;
    // 0x1b6830: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1B6830u;
    SET_GPR_U32(ctx, 31, 0x1B6838u);
    ctx->pc = 0x1B6834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6830u;
    // 0x1b6834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1B6830u, 0x1B6838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6838u;
label_1b6838:
    // 0x1b6838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b683c:
    // 0x1b683c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B683Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B683Cu;
        // 0x1b6840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B683Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6844u;
}
