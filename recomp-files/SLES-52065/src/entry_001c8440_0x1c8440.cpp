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

// Function: entry_001c8440
// Address: 0x1c8440 - 0x1c8484
void entry_001c8440_0x1c8440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8440_0x1c8440");
#endif

    switch (ctx->pc) {
        case 0x1c8450u: goto label_1c8450;
        case 0x1c8464u: goto label_1c8464;
        case 0x1c846cu: goto label_1c846c;
        case 0x1c847cu: goto label_1c847c;
        default: break;
    }

    ctx->pc = 0x1c8440u;

    // 0x1c8440: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c8440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c8444: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c8444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c8448: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C8448u;
    SET_GPR_U32(ctx, 31, 0x1C8450u);
    ctx->pc = 0x1C844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8448u;
    // 0x1c844c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C8448u, 0x1C8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8450u;
label_1c8450:
    // 0x1c8450: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8450u;
    {
        const bool branch_taken_0x1c8450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8450u;
        // 0x1c8454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8450) {
            ctx->pc = 0x1C8484u;
            return;
        }
    }
    ctx->pc = 0x1C8458u;
    // 0x1c8458: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c8458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c845c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C845Cu;
    SET_GPR_U32(ctx, 31, 0x1C8464u);
    ctx->pc = 0x1C8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C845Cu;
    // 0x1c8460: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C845Cu, 0x1C8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8464u;
label_1c8464:
    // 0x1c8464: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C8464u;
    SET_GPR_U32(ctx, 31, 0x1C846Cu);
    ctx->pc = 0x1C8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8464u;
    // 0x1c8468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C8464u, 0x1C846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C846Cu;
label_1c846c:
    // 0x1c846c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8470: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c8470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8474: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8474u;
    SET_GPR_U32(ctx, 31, 0x1C847Cu);
    ctx->pc = 0x1C8478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8474u;
    // 0x1c8478: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8474u, 0x1C847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C847Cu;
label_1c847c:
    // 0x1c847c: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C847Cu;
    SET_GPR_U32(ctx, 31, 0x1C8484u);
    ctx->pc = 0x1C8480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C847Cu;
    // 0x1c8480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C847Cu, 0x1C8484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8484u;
}
