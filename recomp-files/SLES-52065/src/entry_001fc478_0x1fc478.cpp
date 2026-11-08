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

// Function: entry_001fc478
// Address: 0x1fc478 - 0x1fc514
void entry_001fc478_0x1fc478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc478_0x1fc478");
#endif

    switch (ctx->pc) {
        case 0x1fc488u: goto label_1fc488;
        case 0x1fc498u: goto label_1fc498;
        case 0x1fc4a8u: goto label_1fc4a8;
        case 0x1fc4b4u: goto label_1fc4b4;
        case 0x1fc4c4u: goto label_1fc4c4;
        case 0x1fc4d0u: goto label_1fc4d0;
        case 0x1fc4dcu: goto label_1fc4dc;
        case 0x1fc4ecu: goto label_1fc4ec;
        case 0x1fc4fcu: goto label_1fc4fc;
        case 0x1fc508u: goto label_1fc508;
        default: break;
    }

    ctx->pc = 0x1fc478u;

    // 0x1fc478: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x1fc478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x1fc47c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1fc47cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1fc480: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC480u;
    SET_GPR_U32(ctx, 31, 0x1FC488u);
    ctx->pc = 0x1FC484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC480u;
    // 0x1fc484: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC480u, 0x1FC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC488u;
label_1fc488:
    // 0x1fc488: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1fc488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1fc48c: 0xdc254f00  ld          $a1, 0x4F00($at)
    ctx->pc = 0x1fc48cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x224F00u));
    // 0x1fc490: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC490u;
    SET_GPR_U32(ctx, 31, 0x1FC498u);
    ctx->pc = 0x1FC494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC490u;
    // 0x1fc494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC490u, 0x1FC498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC498u;
label_1fc498:
    // 0x1fc498: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1fc498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1fc49c: 0xdc254f08  ld          $a1, 0x4F08($at)
    ctx->pc = 0x1fc49cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x224F08u));
    // 0x1fc4a0: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FC4A0u;
    SET_GPR_U32(ctx, 31, 0x1FC4A8u);
    ctx->pc = 0x1FC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4A0u;
    // 0x1fc4a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FC4A0u, 0x1FC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4A8u;
label_1fc4a8:
    // 0x1fc4a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fc4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4ac: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FC4ACu;
    SET_GPR_U32(ctx, 31, 0x1FC4B4u);
    ctx->pc = 0x1FC4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4ACu;
    // 0x1fc4b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FC4ACu, 0x1FC4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4B4u;
label_1fc4b4:
    // 0x1fc4b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1fc4b8: 0xdc254f10  ld          $a1, 0x4F10($at)
    ctx->pc = 0x1fc4b8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x224F10u));
    // 0x1fc4bc: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC4BCu;
    SET_GPR_U32(ctx, 31, 0x1FC4C4u);
    ctx->pc = 0x1FC4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4BCu;
    // 0x1fc4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC4BCu, 0x1FC4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4C4u;
label_1fc4c4:
    // 0x1fc4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4c8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FC4C8u;
    SET_GPR_U32(ctx, 31, 0x1FC4D0u);
    ctx->pc = 0x1FC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4C8u;
    // 0x1fc4cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FC4C8u, 0x1FC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4D0u;
label_1fc4d0:
    // 0x1fc4d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4d4: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1FC4D4u;
    SET_GPR_U32(ctx, 31, 0x1FC4DCu);
    ctx->pc = 0x1FC4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4D4u;
    // 0x1fc4d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1FC4D4u, 0x1FC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4DCu;
label_1fc4dc:
    // 0x1fc4dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fc4dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4e4: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC4E4u;
    SET_GPR_U32(ctx, 31, 0x1FC4ECu);
    ctx->pc = 0x1FC4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4E4u;
    // 0x1fc4e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC4E4u, 0x1FC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4ECu;
label_1fc4ec:
    // 0x1fc4ec: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC4ECu;
    {
        const bool branch_taken_0x1fc4ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4ECu;
        // 0x1fc4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4ec) {
            ctx->pc = 0x1FC514u;
            return;
        }
    }
    ctx->pc = 0x1FC4F4u;
    // 0x1fc4f4: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FC4F4u;
    SET_GPR_U32(ctx, 31, 0x1FC4FCu);
    ctx->pc = 0x1FC4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4F4u;
    // 0x1fc4f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FC4F4u, 0x1FC4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4FCu;
label_1fc4fc:
    // 0x1fc4fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc500: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC500u;
    SET_GPR_U32(ctx, 31, 0x1FC508u);
    ctx->pc = 0x1FC504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC500u;
    // 0x1fc504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC500u, 0x1FC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC508u;
label_1fc508:
    // 0x1fc508: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1fc508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1fc50c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1fc50cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x1fc510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1fc514u;
}
