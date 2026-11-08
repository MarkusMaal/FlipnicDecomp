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

// Function: caseD_27
// Address: 0x1c36c8 - 0x1c3708
void caseD_27_0x1c36c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_27_0x1c36c8");
#endif

    switch (ctx->pc) {
        case 0x1c36d4u: goto label_1c36d4;
        case 0x1c36e0u: goto label_1c36e0;
        case 0x1c36ecu: goto label_1c36ec;
        case 0x1c36f4u: goto label_1c36f4;
        default: break;
    }

    ctx->pc = 0x1c36c8u;

    // 0x1c36c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c36c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36cc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C36CCu;
    SET_GPR_U32(ctx, 31, 0x1C36D4u);
    ctx->pc = 0x1C36D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36CCu;
    // 0x1c36d0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C36CCu, 0x1C36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36D4u;
label_1c36d4:
    // 0x1c36d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c36d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36d8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C36D8u;
    SET_GPR_U32(ctx, 31, 0x1C36E0u);
    ctx->pc = 0x1C36DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36D8u;
    // 0x1c36dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C36D8u, 0x1C36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36E0u;
label_1c36e0:
    // 0x1c36e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c36e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36e4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C36E4u;
    SET_GPR_U32(ctx, 31, 0x1C36ECu);
    ctx->pc = 0x1C36E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36E4u;
    // 0x1c36e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C36E4u, 0x1C36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36ECu;
label_1c36ec:
    // 0x1c36ec: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C36ECu;
    SET_GPR_U32(ctx, 31, 0x1C36F4u);
    ctx->pc = 0x1C36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C36ECu;
    // 0x1c36f0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C36ECu, 0x1C36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36F4u;
label_1c36f4:
    // 0x1c36f4: 0x14400344  bnez        $v0, . + 4 + (0x344 << 2)
    ctx->pc = 0x1C36F4u;
    {
        const bool branch_taken_0x1c36f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c36f4) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C36FCu;
    // 0x1c36fc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1c36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c3700: 0x10000341  b           . + 4 + (0x341 << 2)
    ctx->pc = 0x1C3700u;
    {
        const bool branch_taken_0x1c3700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3700u;
        // 0x1c3704: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3700) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3708u;
}
