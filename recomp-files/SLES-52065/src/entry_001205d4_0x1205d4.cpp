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

// Function: entry_001205d4
// Address: 0x1205d4 - 0x1205f4
void entry_001205d4_0x1205d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001205d4_0x1205d4");
#endif

    switch (ctx->pc) {
        case 0x1205dcu: goto label_1205dc;
        default: break;
    }

    ctx->pc = 0x1205d4u;

    // 0x1205d4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1205D4u;
    SET_GPR_U32(ctx, 31, 0x1205DCu);
    ctx->pc = 0x1205D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205D4u;
    // 0x1205d8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1205D4u, 0x1205DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205DCu;
label_1205dc:
    // 0x1205dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1205DCu;
    {
        const bool branch_taken_0x1205dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1205E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205DCu;
        // 0x1205e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1205dc) {
            ctx->pc = 0x1205F4u;
            return;
        }
    }
    ctx->pc = 0x1205E4u;
    // 0x1205e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1205e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1205e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205ec: 0xc07a2e4  jal         func_1E8B90
    ctx->pc = 0x1205ECu;
    SET_GPR_U32(ctx, 31, 0x1205F4u);
    ctx->pc = 0x1205F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205ECu;
    // 0x1205f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8B90u, 0x1205ECu, 0x1205F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205F4u;
}
