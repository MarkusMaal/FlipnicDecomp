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

// Function: entry_0019a6d4
// Address: 0x19a6d4 - 0x19a6ec
void entry_0019a6d4_0x19a6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a6d4_0x19a6d4");
#endif

    switch (ctx->pc) {
        case 0x19a6dcu: goto label_19a6dc;
        case 0x19a6e4u: goto label_19a6e4;
        default: break;
    }

    ctx->pc = 0x19a6d4u;

    // 0x19a6d4: 0xc0667bc  jal         func_199EF0
    ctx->pc = 0x19A6D4u;
    SET_GPR_U32(ctx, 31, 0x19A6DCu);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19A6D4u, 0x19A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6DCu;
label_19a6dc:
    // 0x19a6dc: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19A6DCu;
    SET_GPR_U32(ctx, 31, 0x19A6E4u);
    ctx->pc = 0x19A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6DCu;
    // 0x19a6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19A6DCu, 0x19A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6E4u;
label_19a6e4:
    // 0x19a6e4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19A6E4u;
    {
        const bool branch_taken_0x19a6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a6e4) {
            ctx->pc = 0x19A72Cu;
            return;
        }
    }
    ctx->pc = 0x19A6ECu;
}
