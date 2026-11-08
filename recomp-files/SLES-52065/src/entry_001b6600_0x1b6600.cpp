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

// Function: entry_001b6600
// Address: 0x1b6600 - 0x1b6620
void entry_001b6600_0x1b6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6600_0x1b6600");
#endif

    switch (ctx->pc) {
        case 0x1b6608u: goto label_1b6608;
        case 0x1b6618u: goto label_1b6618;
        default: break;
    }

    ctx->pc = 0x1b6600u;

    // 0x1b6600: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6600u;
    SET_GPR_U32(ctx, 31, 0x1B6608u);
    ctx->pc = 0x1B6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6600u;
    // 0x1b6604: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6600u, 0x1B6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6608u;
label_1b6608:
    // 0x1b6608: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1B6608u;
    {
        const bool branch_taken_0x1b6608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6608) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6610u;
    // 0x1b6610: 0xc0719c0  jal         func_1C6700
    ctx->pc = 0x1B6610u;
    SET_GPR_U32(ctx, 31, 0x1B6618u);
    ctx->pc = 0x1B6614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6610u;
    // 0x1b6614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6700u, 0x1B6610u, 0x1B6618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6618u;
label_1b6618:
    // 0x1b6618: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1B6618u;
    {
        const bool branch_taken_0x1b6618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6618) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6620u;
}
