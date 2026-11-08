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

// Function: entry_0011c844
// Address: 0x11c844 - 0x11c904
void entry_0011c844_0x11c844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c844_0x11c844");
#endif

    switch (ctx->pc) {
        case 0x11c850u: goto label_11c850;
        case 0x11c860u: goto label_11c860;
        case 0x11c86cu: goto label_11c86c;
        case 0x11c874u: goto label_11c874;
        case 0x11c87cu: goto label_11c87c;
        case 0x11c884u: goto label_11c884;
        case 0x11c8a0u: goto label_11c8a0;
        case 0x11c8b4u: goto label_11c8b4;
        case 0x11c8f4u: goto label_11c8f4;
        default: break;
    }

    ctx->pc = 0x11c844u;

    // 0x11c844: 0x0  nop
    ctx->pc = 0x11c844u;
    // NOP
    // 0x11c848: 0xc047158  jal         func_11C560
    ctx->pc = 0x11C848u;
    SET_GPR_U32(ctx, 31, 0x11C850u);
    ctx->pc = 0x11C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C848u;
    // 0x11c84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C560u, 0x11C848u, 0x11C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C850u;
label_11c850:
    // 0x11c850: 0x1040024d  beqz        $v0, . + 4 + (0x24D << 2)
    ctx->pc = 0x11C850u;
    {
        const bool branch_taken_0x11c850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c850) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11C858u;
    // 0x11c858: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11C858u;
    SET_GPR_U32(ctx, 31, 0x11C860u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11C858u, 0x11C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C860u;
label_11c860:
    // 0x11c860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c864: 0xc046f94  jal         func_11BE50
    ctx->pc = 0x11C864u;
    SET_GPR_U32(ctx, 31, 0x11C86Cu);
    ctx->pc = 0x11C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C864u;
    // 0x11c868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BE50u, 0x11C864u, 0x11C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C86Cu;
label_11c86c:
    // 0x11c86c: 0xc047090  jal         func_11C240
    ctx->pc = 0x11C86Cu;
    SET_GPR_U32(ctx, 31, 0x11C874u);
    ctx->pc = 0x11C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C86Cu;
    // 0x11c870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C240u, 0x11C86Cu, 0x11C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C874u;
label_11c874:
    // 0x11c874: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11C874u;
    SET_GPR_U32(ctx, 31, 0x11C87Cu);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11C874u, 0x11C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C87Cu;
label_11c87c:
    // 0x11c87c: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11C87Cu;
    SET_GPR_U32(ctx, 31, 0x11C884u);
    ctx->pc = 0x11C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C87Cu;
    // 0x11c880: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11C87Cu, 0x11C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C884u;
label_11c884:
    // 0x11c884: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c888: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11c888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11c88c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x11c88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x11c890: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c894: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11c894u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x11c898: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C898u;
    SET_GPR_U32(ctx, 31, 0x11C8A0u);
    ctx->pc = 0x11C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C898u;
    // 0x11c89c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C898u, 0x11C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8A0u;
label_11c8a0:
    // 0x11c8a0: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c8a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8ac: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C8ACu;
    SET_GPR_U32(ctx, 31, 0x11C8B4u);
    ctx->pc = 0x11C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8ACu;
    // 0x11c8b0: 0xac202000  sw          $zero, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C8ACu, 0x11C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8B4u;
label_11c8b4:
    // 0x11c8b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c8b8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c8bc: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x11c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x11c8c0: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x11c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11c8c4: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11c8c8: 0x262400e4  addiu       $a0, $s1, 0xE4
    ctx->pc = 0x11c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x11c8cc: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x11c8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x11c8d0: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11c8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11c8d4: 0xac23b430  sw          $v1, -0x4BD0($at)
    ctx->pc = 0x11c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 3));
    // 0x11c8d8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c8dc: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x11c8dcu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x11c8e0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c8e4: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x11c8e4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x11c8e8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c8ec: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11C8ECu;
    SET_GPR_U32(ctx, 31, 0x11C8F4u);
    ctx->pc = 0x11C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8ECu;
    // 0x11c8f0: 0xac202010  sw          $zero, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11C8ECu, 0x11C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8F4u;
label_11c8f4:
    // 0x11c8f4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C8F4u;
    {
        const bool branch_taken_0x11c8f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c8f4) {
            ctx->pc = 0x11C904u;
            return;
        }
    }
    ctx->pc = 0x11C8FCu;
    // 0x11c8fc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11C8FCu;
    SET_GPR_U32(ctx, 31, 0x11C904u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11C8FCu, 0x11C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C904u;
}
