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

// Function: entry_001c83f0
// Address: 0x1c83f0 - 0x1c8440
void entry_001c83f0_0x1c83f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c83f0_0x1c83f0");
#endif

    switch (ctx->pc) {
        case 0x1c8400u: goto label_1c8400;
        case 0x1c8418u: goto label_1c8418;
        case 0x1c8420u: goto label_1c8420;
        case 0x1c8430u: goto label_1c8430;
        case 0x1c8438u: goto label_1c8438;
        default: break;
    }

    ctx->pc = 0x1c83f0u;

    // 0x1c83f0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c83f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c83f4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c83f8: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C83F8u;
    SET_GPR_U32(ctx, 31, 0x1C8400u);
    ctx->pc = 0x1C83FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83F8u;
    // 0x1c83fc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C83F8u, 0x1C8400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8400u;
label_1c8400:
    // 0x1c8400: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8400u;
    {
        const bool branch_taken_0x1c8400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8400u;
        // 0x1c8404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8400) {
            ctx->pc = 0x1C8440u;
            return;
        }
    }
    ctx->pc = 0x1C8408u;
    // 0x1c8408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c840c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8410: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8410u;
    SET_GPR_U32(ctx, 31, 0x1C8418u);
    ctx->pc = 0x1C8414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8410u;
    // 0x1c8414: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8410u, 0x1C8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8418u;
label_1c8418:
    // 0x1c8418: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C8418u;
    SET_GPR_U32(ctx, 31, 0x1C8420u);
    ctx->pc = 0x1C841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8418u;
    // 0x1c841c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C8418u, 0x1C8420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8420u;
label_1c8420:
    // 0x1c8420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8424: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c8424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8428: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8428u;
    SET_GPR_U32(ctx, 31, 0x1C8430u);
    ctx->pc = 0x1C842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8428u;
    // 0x1c842c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8428u, 0x1C8430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8430u;
label_1c8430:
    // 0x1c8430: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C8430u;
    SET_GPR_U32(ctx, 31, 0x1C8438u);
    ctx->pc = 0x1C8434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8430u;
    // 0x1c8434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C8430u, 0x1C8438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8438u;
label_1c8438:
    // 0x1c8438: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8438u;
    {
        const bool branch_taken_0x1c8438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8438) {
            ctx->pc = 0x1C8484u;
            return;
        }
    }
    ctx->pc = 0x1C8440u;
}
