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

// Function: caseD_2c
// Address: 0x1c40a4 - 0x1c40e4
void caseD_2c_0x1c40a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2c_0x1c40a4");
#endif

    switch (ctx->pc) {
        case 0x1c40b0u: goto label_1c40b0;
        case 0x1c40bcu: goto label_1c40bc;
        case 0x1c40c8u: goto label_1c40c8;
        default: break;
    }

    ctx->pc = 0x1c40a4u;

    // 0x1c40a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40a8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C40A8u;
    SET_GPR_U32(ctx, 31, 0x1C40B0u);
    ctx->pc = 0x1C40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40A8u;
    // 0x1c40ac: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C40A8u, 0x1C40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40B0u;
label_1c40b0:
    // 0x1c40b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40b4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C40B4u;
    SET_GPR_U32(ctx, 31, 0x1C40BCu);
    ctx->pc = 0x1C40B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40B4u;
    // 0x1c40b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C40B4u, 0x1C40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40BCu;
label_1c40bc:
    // 0x1c40bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40c0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C40C0u;
    SET_GPR_U32(ctx, 31, 0x1C40C8u);
    ctx->pc = 0x1C40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40C0u;
    // 0x1c40c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C40C0u, 0x1C40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40C8u;
label_1c40c8:
    // 0x1c40c8: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1c40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c40cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c40d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C40D0u;
    {
        const bool branch_taken_0x1c40d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40D0u;
        // 0x1c40d4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40d0) {
            ctx->pc = 0x1C40E4u;
            return;
        }
    }
    ctx->pc = 0x1C40D8u;
    // 0x1c40d8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1c40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c40dc: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x1C40DCu;
    {
        const bool branch_taken_0x1c40dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40DCu;
        // 0x1c40e0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40dc) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C40E4u;
}
