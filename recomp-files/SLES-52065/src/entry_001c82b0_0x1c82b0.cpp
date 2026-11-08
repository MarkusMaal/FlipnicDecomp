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

// Function: entry_001c82b0
// Address: 0x1c82b0 - 0x1c82f4
void entry_001c82b0_0x1c82b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c82b0_0x1c82b0");
#endif

    switch (ctx->pc) {
        case 0x1c82c0u: goto label_1c82c0;
        case 0x1c82d4u: goto label_1c82d4;
        case 0x1c82dcu: goto label_1c82dc;
        case 0x1c82ecu: goto label_1c82ec;
        default: break;
    }

    ctx->pc = 0x1c82b0u;

    // 0x1c82b0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c82b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c82b4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c82b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c82b8: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C82B8u;
    SET_GPR_U32(ctx, 31, 0x1C82C0u);
    ctx->pc = 0x1C82BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82B8u;
    // 0x1c82bc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C82B8u, 0x1C82C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C0u;
label_1c82c0:
    // 0x1c82c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C82C0u;
    {
        const bool branch_taken_0x1c82c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82C0u;
        // 0x1c82c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82c0) {
            ctx->pc = 0x1C82F4u;
            return;
        }
    }
    ctx->pc = 0x1C82C8u;
    // 0x1c82c8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c82c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c82cc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C82CCu;
    SET_GPR_U32(ctx, 31, 0x1C82D4u);
    ctx->pc = 0x1C82D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82CCu;
    // 0x1c82d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C82CCu, 0x1C82D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82D4u;
label_1c82d4:
    // 0x1c82d4: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C82D4u;
    SET_GPR_U32(ctx, 31, 0x1C82DCu);
    ctx->pc = 0x1C82D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82D4u;
    // 0x1c82d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C82D4u, 0x1C82DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82DCu;
label_1c82dc:
    // 0x1c82dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82e0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c82e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c82e4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C82E4u;
    SET_GPR_U32(ctx, 31, 0x1C82ECu);
    ctx->pc = 0x1C82E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82E4u;
    // 0x1c82e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C82E4u, 0x1C82ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82ECu;
label_1c82ec:
    // 0x1c82ec: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C82ECu;
    SET_GPR_U32(ctx, 31, 0x1C82F4u);
    ctx->pc = 0x1C82F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82ECu;
    // 0x1c82f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C82ECu, 0x1C82F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82F4u;
}
