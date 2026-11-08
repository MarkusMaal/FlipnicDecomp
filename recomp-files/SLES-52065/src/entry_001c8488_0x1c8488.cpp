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

// Function: entry_001c8488
// Address: 0x1c8488 - 0x1c857c
void entry_001c8488_0x1c8488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8488_0x1c8488");
#endif

    switch (ctx->pc) {
        case 0x1c849cu: goto label_1c849c;
        case 0x1c84b0u: goto label_1c84b0;
        case 0x1c84c0u: goto label_1c84c0;
        case 0x1c84d0u: goto label_1c84d0;
        case 0x1c84e0u: goto label_1c84e0;
        case 0x1c84f0u: goto label_1c84f0;
        case 0x1c8500u: goto label_1c8500;
        case 0x1c8508u: goto label_1c8508;
        case 0x1c851cu: goto label_1c851c;
        case 0x1c8530u: goto label_1c8530;
        case 0x1c8548u: goto label_1c8548;
        case 0x1c8558u: goto label_1c8558;
        case 0x1c856cu: goto label_1c856c;
        default: break;
    }

    ctx->pc = 0x1c8488u;

    // 0x1c8488: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c8488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c848c: 0x1046003b  beq         $v0, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x1C848Cu;
    {
        const bool branch_taken_0x1c848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C848Cu;
        // 0x1c8490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c848c) {
            ctx->pc = 0x1C857Cu;
            return;
        }
    }
    ctx->pc = 0x1C8494u;
    // 0x1c8494: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8494u;
    SET_GPR_U32(ctx, 31, 0x1C849Cu);
    ctx->pc = 0x1C8498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8494u;
    // 0x1c8498: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8494u, 0x1C849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C849Cu;
label_1c849c:
    // 0x1c849c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c84a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c84a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84a8: 0xc06ea38  jal         func_1BA8E0
    ctx->pc = 0x1C84A8u;
    SET_GPR_U32(ctx, 31, 0x1C84B0u);
    ctx->pc = 0x1C84ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84A8u;
    // 0x1c84ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA8E0u, 0x1C84A8u, 0x1C84B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84B0u;
label_1c84b0:
    // 0x1c84b0: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c84b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c84b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c84b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84b8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C84B8u;
    SET_GPR_U32(ctx, 31, 0x1C84C0u);
    ctx->pc = 0x1C84BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84B8u;
    // 0x1c84bc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C84B8u, 0x1C84C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84C0u;
label_1c84c0:
    // 0x1c84c0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c84c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c84c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c84c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84c8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C84C8u;
    SET_GPR_U32(ctx, 31, 0x1C84D0u);
    ctx->pc = 0x1C84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84C8u;
    // 0x1c84cc: 0x24a559e0  addiu       $a1, $a1, 0x59E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C84C8u, 0x1C84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84D0u;
label_1c84d0:
    // 0x1c84d0: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c84d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c84d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84d8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C84D8u;
    SET_GPR_U32(ctx, 31, 0x1C84E0u);
    ctx->pc = 0x1C84DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84D8u;
    // 0x1c84dc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C84D8u, 0x1C84E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84E0u;
label_1c84e0:
    // 0x1c84e0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c84e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c84e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c84e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84e8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C84E8u;
    SET_GPR_U32(ctx, 31, 0x1C84F0u);
    ctx->pc = 0x1C84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84E8u;
    // 0x1c84ec: 0x24a559d0  addiu       $a1, $a1, 0x59D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C84E8u, 0x1C84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84F0u;
label_1c84f0:
    // 0x1c84f0: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c84f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c84f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c84f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84f8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C84F8u;
    SET_GPR_U32(ctx, 31, 0x1C8500u);
    ctx->pc = 0x1C84FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84F8u;
    // 0x1c84fc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C84F8u, 0x1C8500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8500u;
label_1c8500:
    // 0x1c8500: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1C8500u;
    SET_GPR_U32(ctx, 31, 0x1C8508u);
    ctx->pc = 0x1C8504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8500u;
    // 0x1c8504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1C8500u, 0x1C8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8508u;
label_1c8508:
    // 0x1c8508: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c8508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c850c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8510: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c8510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c8514: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8514u;
    SET_GPR_U32(ctx, 31, 0x1C851Cu);
    ctx->pc = 0x1C8518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8514u;
    // 0x1c8518: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8514u, 0x1C851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C851Cu;
label_1c851c:
    // 0x1c851c: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c851cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c8520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8524: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c8524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c8528: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8528u;
    SET_GPR_U32(ctx, 31, 0x1C8530u);
    ctx->pc = 0x1C852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8528u;
    // 0x1c852c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8528u, 0x1C8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8530u;
label_1c8530:
    // 0x1c8530: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c8530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8538: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c8538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c853c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8540: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8540u;
    SET_GPR_U32(ctx, 31, 0x1C8548u);
    ctx->pc = 0x1C8544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8540u;
    // 0x1c8544: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8540u, 0x1C8548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8548u;
label_1c8548:
    // 0x1c8548: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c854c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8550: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C8550u;
    SET_GPR_U32(ctx, 31, 0x1C8558u);
    ctx->pc = 0x1C8554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8550u;
    // 0x1c8554: 0x24a559e0  addiu       $a1, $a1, 0x59E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C8550u, 0x1C8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8558u;
label_1c8558:
    // 0x1c8558: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c8558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c855c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8560: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c8560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8564: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8564u;
    SET_GPR_U32(ctx, 31, 0x1C856Cu);
    ctx->pc = 0x1C8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8564u;
    // 0x1c8568: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8564u, 0x1C856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C856Cu;
label_1c856c:
    // 0x1c856c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c856cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8574: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C8574u;
    SET_GPR_U32(ctx, 31, 0x1C857Cu);
    ctx->pc = 0x1C8578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8574u;
    // 0x1c8578: 0x24a559d0  addiu       $a1, $a1, 0x59D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C8574u, 0x1C857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C857Cu;
}
