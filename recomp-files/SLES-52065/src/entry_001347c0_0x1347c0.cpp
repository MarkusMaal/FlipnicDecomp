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

// Function: entry_001347c0
// Address: 0x1347c0 - 0x1347dc
void entry_001347c0_0x1347c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001347c0_0x1347c0");
#endif

    switch (ctx->pc) {
        case 0x1347c8u: goto label_1347c8;
        case 0x1347d8u: goto label_1347d8;
        default: break;
    }

    ctx->pc = 0x1347c0u;

    // 0x1347c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1347C0u;
    SET_GPR_U32(ctx, 31, 0x1347C8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1347C0u, 0x1347C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347C8u;
label_1347c8:
    // 0x1347c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1347C8u;
    {
        const bool branch_taken_0x1347c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347C8u;
        // 0x1347cc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347c8) {
            ctx->pc = 0x1347DCu;
            return;
        }
    }
    ctx->pc = 0x1347D0u;
    // 0x1347d0: 0xc053cd8  jal         func_14F360
    ctx->pc = 0x1347D0u;
    SET_GPR_U32(ctx, 31, 0x1347D8u);
    ctx->pc = 0x1347D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347D0u;
    // 0x1347d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F360u, 0x1347D0u, 0x1347D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347D8u;
label_1347d8:
    // 0x1347d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1347d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1347dcu;
}
