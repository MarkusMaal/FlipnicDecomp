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

// Function: entry_001ce4b8
// Address: 0x1ce4b8 - 0x1ce4e4
void entry_001ce4b8_0x1ce4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce4b8_0x1ce4b8");
#endif

    switch (ctx->pc) {
        case 0x1ce4c8u: goto label_1ce4c8;
        case 0x1ce4dcu: goto label_1ce4dc;
        default: break;
    }

    ctx->pc = 0x1ce4b8u;

    // 0x1ce4b8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ce4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ce4bc: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ce4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ce4c0: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1CE4C0u;
    SET_GPR_U32(ctx, 31, 0x1CE4C8u);
    ctx->pc = 0x1CE4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4C0u;
    // 0x1ce4c4: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1CE4C0u, 0x1CE4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4C8u;
label_1ce4c8:
    // 0x1ce4c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE4C8u;
    {
        const bool branch_taken_0x1ce4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4C8u;
        // 0x1ce4cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4c8) {
            ctx->pc = 0x1CE4E4u;
            return;
        }
    }
    ctx->pc = 0x1CE4D0u;
    // 0x1ce4d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ce4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce4d4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE4D4u;
    SET_GPR_U32(ctx, 31, 0x1CE4DCu);
    ctx->pc = 0x1CE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4D4u;
    // 0x1ce4d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE4D4u, 0x1CE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4DCu;
label_1ce4dc:
    // 0x1ce4dc: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CE4DCu;
    SET_GPR_U32(ctx, 31, 0x1CE4E4u);
    ctx->pc = 0x1CE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4DCu;
    // 0x1ce4e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CE4DCu, 0x1CE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4E4u;
}
