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

// Function: entry_0019a194
// Address: 0x19a194 - 0x19a1ac
void entry_0019a194_0x19a194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a194_0x19a194");
#endif

    switch (ctx->pc) {
        case 0x19a19cu: goto label_19a19c;
        case 0x19a1a4u: goto label_19a1a4;
        default: break;
    }

    ctx->pc = 0x19a194u;

    // 0x19a194: 0xc0667bc  jal         func_199EF0
    ctx->pc = 0x19A194u;
    SET_GPR_U32(ctx, 31, 0x19A19Cu);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19A194u, 0x19A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A19Cu;
label_19a19c:
    // 0x19a19c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19A19Cu;
    SET_GPR_U32(ctx, 31, 0x19A1A4u);
    ctx->pc = 0x19A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A19Cu;
    // 0x19a1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19A19Cu, 0x19A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1A4u;
label_19a1a4:
    // 0x19a1a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19A1A4u;
    {
        const bool branch_taken_0x19a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1a4) {
            ctx->pc = 0x19A1ECu;
            return;
        }
    }
    ctx->pc = 0x19A1ACu;
}
