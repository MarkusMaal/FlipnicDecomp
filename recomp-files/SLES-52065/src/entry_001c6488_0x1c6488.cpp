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

// Function: entry_001c6488
// Address: 0x1c6488 - 0x1c64d8
void entry_001c6488_0x1c6488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6488_0x1c6488");
#endif

    switch (ctx->pc) {
        case 0x1c6490u: goto label_1c6490;
        case 0x1c64b8u: goto label_1c64b8;
        case 0x1c64c4u: goto label_1c64c4;
        case 0x1c64d4u: goto label_1c64d4;
        default: break;
    }

    ctx->pc = 0x1c6488u;

label_1c6488:
    // 0x1c6488: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C6488u;
    SET_GPR_U32(ctx, 31, 0x1C6490u);
    ctx->pc = 0x1C648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6488u;
    // 0x1c648c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C6488u, 0x1C6490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6490u;
label_1c6490:
    // 0x1c6490: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c6490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c6494: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c6494u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c6498: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1c6498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c649c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C649Cu;
    {
        const bool branch_taken_0x1c649c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C649Cu;
        // 0x1c64a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c649c) {
            ctx->pc = 0x1C6488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6488;
        }
    }
    ctx->pc = 0x1C64A4u;
    // 0x1c64a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c64a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c64a8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c64a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c64ac: 0x24a51ff0  addiu       $a1, $a1, 0x1FF0
    ctx->pc = 0x1c64acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8176));
    // 0x1c64b0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C64B0u;
    SET_GPR_U32(ctx, 31, 0x1C64B8u);
    ctx->pc = 0x1C64B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64B0u;
    // 0x1c64b4: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C64B0u, 0x1C64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64B8u;
label_1c64b8:
    // 0x1c64b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c64b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64bc: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C64BCu;
    SET_GPR_U32(ctx, 31, 0x1C64C4u);
    ctx->pc = 0x1C64C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64BCu;
    // 0x1c64c0: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C64BCu, 0x1C64C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64C4u;
label_1c64c4:
    // 0x1c64c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c64c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64c8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c64c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c64cc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C64CCu;
    SET_GPR_U32(ctx, 31, 0x1C64D4u);
    ctx->pc = 0x1C64D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64CCu;
    // 0x1c64d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C64CCu, 0x1C64D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64D4u;
label_1c64d4:
    // 0x1c64d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c64d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c64d8u;
}
