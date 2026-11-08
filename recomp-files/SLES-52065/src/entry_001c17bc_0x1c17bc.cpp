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

// Function: entry_001c17bc
// Address: 0x1c17bc - 0x1c180c
void entry_001c17bc_0x1c17bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c17bc_0x1c17bc");
#endif

    switch (ctx->pc) {
        case 0x1c17ccu: goto label_1c17cc;
        case 0x1c17e4u: goto label_1c17e4;
        case 0x1c17ecu: goto label_1c17ec;
        case 0x1c17fcu: goto label_1c17fc;
        case 0x1c1804u: goto label_1c1804;
        default: break;
    }

    ctx->pc = 0x1c17bcu;

    // 0x1c17bc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c17bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c17c0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c17c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c17c4: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C17C4u;
    SET_GPR_U32(ctx, 31, 0x1C17CCu);
    ctx->pc = 0x1C17C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17C4u;
    // 0x1c17c8: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C17C4u, 0x1C17CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17CCu;
label_1c17cc:
    // 0x1c17cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C17CCu;
    {
        const bool branch_taken_0x1c17cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17CCu;
        // 0x1c17d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17cc) {
            ctx->pc = 0x1C180Cu;
            return;
        }
    }
    ctx->pc = 0x1C17D4u;
    // 0x1c17d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c17d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c17d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c17dc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C17DCu;
    SET_GPR_U32(ctx, 31, 0x1C17E4u);
    ctx->pc = 0x1C17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17DCu;
    // 0x1c17e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C17DCu, 0x1C17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17E4u;
label_1c17e4:
    // 0x1c17e4: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C17E4u;
    SET_GPR_U32(ctx, 31, 0x1C17ECu);
    ctx->pc = 0x1C17E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17E4u;
    // 0x1c17e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C17E4u, 0x1C17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17ECu;
label_1c17ec:
    // 0x1c17ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c17ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c17f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c17f4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C17F4u;
    SET_GPR_U32(ctx, 31, 0x1C17FCu);
    ctx->pc = 0x1C17F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17F4u;
    // 0x1c17f8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C17F4u, 0x1C17FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17FCu;
label_1c17fc:
    // 0x1c17fc: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C17FCu;
    SET_GPR_U32(ctx, 31, 0x1C1804u);
    ctx->pc = 0x1C1800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17FCu;
    // 0x1c1800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C17FCu, 0x1C1804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1804u;
label_1c1804:
    // 0x1c1804: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C1804u;
    {
        const bool branch_taken_0x1c1804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1804) {
            ctx->pc = 0x1C1850u;
            return;
        }
    }
    ctx->pc = 0x1C180Cu;
}
