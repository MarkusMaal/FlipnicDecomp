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

// Function: entry_001f1f44
// Address: 0x1f1f44 - 0x1f1f5c
void entry_001f1f44_0x1f1f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1f44_0x1f1f44");
#endif

    switch (ctx->pc) {
        case 0x1f1f54u: goto label_1f1f54;
        default: break;
    }

    ctx->pc = 0x1f1f44u;

    // 0x1f1f44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1F44u;
    {
        const bool branch_taken_0x1f1f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f44) {
            ctx->pc = 0x1F1F5Cu;
            return;
        }
    }
    ctx->pc = 0x1F1F4Cu;
    // 0x1f1f4c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1F4Cu;
    SET_GPR_U32(ctx, 31, 0x1F1F54u);
    ctx->pc = 0x1F1F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F4Cu;
    // 0x1f1f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1F4Cu, 0x1F1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F54u;
label_1f1f54:
    // 0x1f1f54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1F54u;
    {
        const bool branch_taken_0x1f1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F54u;
        // 0x1f1f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f54) {
            ctx->pc = 0x1F1F70u;
            return;
        }
    }
    ctx->pc = 0x1F1F5Cu;
}
