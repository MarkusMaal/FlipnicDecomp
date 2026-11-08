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

// Function: entry_00116098
// Address: 0x116098 - 0x1160f0
void entry_00116098_0x116098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116098_0x116098");
#endif

    switch (ctx->pc) {
        case 0x1160a0u: goto label_1160a0;
        case 0x1160b0u: goto label_1160b0;
        case 0x1160c0u: goto label_1160c0;
        case 0x1160c8u: goto label_1160c8;
        case 0x1160d0u: goto label_1160d0;
        case 0x1160e0u: goto label_1160e0;
        default: break;
    }

    ctx->pc = 0x116098u;

    // 0x116098: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x116098u;
    SET_GPR_U32(ctx, 31, 0x1160A0u);
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x116098u, 0x1160A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160A0u;
label_1160a0:
    // 0x1160a0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1160A0u;
    {
        const bool branch_taken_0x1160a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160A0u;
        // 0x1160a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160a0) {
            ctx->pc = 0x1161B8u;
            return;
        }
    }
    ctx->pc = 0x1160A8u;
    // 0x1160a8: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x1160A8u;
    SET_GPR_U32(ctx, 31, 0x1160B0u);
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x1160A8u, 0x1160B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160B0u;
label_1160b0:
    // 0x1160b0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1160B0u;
    {
        const bool branch_taken_0x1160b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1160b0) {
            ctx->pc = 0x1161B8u;
            return;
        }
    }
    ctx->pc = 0x1160B8u;
    // 0x1160b8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1160B8u;
    SET_GPR_U32(ctx, 31, 0x1160C0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1160B8u, 0x1160C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160C0u;
label_1160c0:
    // 0x1160c0: 0xc062b80  jal         func_18AE00
    ctx->pc = 0x1160C0u;
    SET_GPR_U32(ctx, 31, 0x1160C8u);
    ctx->pc = 0x1160C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160C0u;
    // 0x1160c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE00u, 0x1160C0u, 0x1160C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160C8u;
label_1160c8:
    // 0x1160c8: 0xc064228  jal         func_1908A0
    ctx->pc = 0x1160C8u;
    SET_GPR_U32(ctx, 31, 0x1160D0u);
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x1160C8u, 0x1160D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160D0u;
label_1160d0:
    // 0x1160d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1160d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1160d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1160d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160d8: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x1160D8u;
    SET_GPR_U32(ctx, 31, 0x1160E0u);
    ctx->pc = 0x1160DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160D8u;
    // 0x1160dc: 0x24a5e560  addiu       $a1, $a1, -0x1AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x1160D8u, 0x1160E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160E0u;
label_1160e0:
    // 0x1160e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1160E0u;
    {
        const bool branch_taken_0x1160e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160E0u;
        // 0x1160e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160e0) {
            ctx->pc = 0x1160F0u;
            return;
        }
    }
    ctx->pc = 0x1160E8u;
    // 0x1160e8: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x1160E8u;
    SET_GPR_U32(ctx, 31, 0x1160F0u);
    ctx->pc = 0x193FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FB0u, 0x1160E8u, 0x1160F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160F0u;
}
