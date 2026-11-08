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

// Function: entry_0019a464
// Address: 0x19a464 - 0x19a47c
void entry_0019a464_0x19a464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a464_0x19a464");
#endif

    switch (ctx->pc) {
        case 0x19a46cu: goto label_19a46c;
        case 0x19a474u: goto label_19a474;
        default: break;
    }

    ctx->pc = 0x19a464u;

    // 0x19a464: 0xc0667bc  jal         func_199EF0
    ctx->pc = 0x19A464u;
    SET_GPR_U32(ctx, 31, 0x19A46Cu);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19A464u, 0x19A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A46Cu;
label_19a46c:
    // 0x19a46c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19A46Cu;
    SET_GPR_U32(ctx, 31, 0x19A474u);
    ctx->pc = 0x19A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A46Cu;
    // 0x19a470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19A46Cu, 0x19A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A474u;
label_19a474:
    // 0x19a474: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19A474u;
    {
        const bool branch_taken_0x19a474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a474) {
            ctx->pc = 0x19A4BCu;
            return;
        }
    }
    ctx->pc = 0x19A47Cu;
}
