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

// Function: entry_001c8d48
// Address: 0x1c8d48 - 0x1c8d68
void entry_001c8d48_0x1c8d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8d48_0x1c8d48");
#endif

    switch (ctx->pc) {
        case 0x1c8d50u: goto label_1c8d50;
        case 0x1c8d64u: goto label_1c8d64;
        default: break;
    }

    ctx->pc = 0x1c8d48u;

    // 0x1c8d48: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C8D48u;
    SET_GPR_U32(ctx, 31, 0x1C8D50u);
    ctx->pc = 0x1C8D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8D48u;
    // 0x1c8d4c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C8D48u, 0x1C8D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D50u;
label_1c8d50:
    // 0x1c8d50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8D50u;
    {
        const bool branch_taken_0x1c8d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D50u;
        // 0x1c8d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d50) {
            ctx->pc = 0x1C8D68u;
            return;
        }
    }
    ctx->pc = 0x1C8D58u;
    // 0x1c8d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d5c: 0xc072364  jal         func_1C8D90
    ctx->pc = 0x1C8D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C8D64u);
    ctx->pc = 0x1C8D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8D5Cu;
    // 0x1c8d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8D90u, 0x1C8D5Cu, 0x1C8D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D64u;
label_1c8d64:
    // 0x1c8d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c8d68u;
}
