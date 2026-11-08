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

// Function: entry_001c32b4
// Address: 0x1c32b4 - 0x1c32d8
void entry_001c32b4_0x1c32b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c32b4_0x1c32b4");
#endif

    switch (ctx->pc) {
        case 0x1c32bcu: goto label_1c32bc;
        case 0x1c32ccu: goto label_1c32cc;
        default: break;
    }

    ctx->pc = 0x1c32b4u;

    // 0x1c32b4: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C32B4u;
    SET_GPR_U32(ctx, 31, 0x1C32BCu);
    ctx->pc = 0x1C32B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32B4u;
    // 0x1c32b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C32B4u, 0x1C32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32BCu;
label_1c32bc:
    // 0x1c32bc: 0x10400452  beqz        $v0, . + 4 + (0x452 << 2)
    ctx->pc = 0x1C32BCu;
    {
        const bool branch_taken_0x1c32bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32BCu;
        // 0x1c32c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32bc) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C32C4u;
    // 0x1c32c4: 0xc0711c8  jal         func_1C4720
    ctx->pc = 0x1C32C4u;
    SET_GPR_U32(ctx, 31, 0x1C32CCu);
    ctx->pc = 0x1C32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32C4u;
    // 0x1c32c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4720u, 0x1C32C4u, 0x1C32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32CCu;
label_1c32cc:
    // 0x1c32cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c32d0: 0x1000044d  b           . + 4 + (0x44D << 2)
    ctx->pc = 0x1C32D0u;
    {
        const bool branch_taken_0x1c32d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32D0u;
        // 0x1c32d4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32d0) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C32D8u;
}
