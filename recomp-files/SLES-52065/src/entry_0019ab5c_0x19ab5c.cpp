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

// Function: entry_0019ab5c
// Address: 0x19ab5c - 0x19ab74
void entry_0019ab5c_0x19ab5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ab5c_0x19ab5c");
#endif

    switch (ctx->pc) {
        case 0x19ab64u: goto label_19ab64;
        case 0x19ab6cu: goto label_19ab6c;
        default: break;
    }

    ctx->pc = 0x19ab5cu;

    // 0x19ab5c: 0xc0667bc  jal         func_199EF0
    ctx->pc = 0x19AB5Cu;
    SET_GPR_U32(ctx, 31, 0x19AB64u);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19AB5Cu, 0x19AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB64u;
label_19ab64:
    // 0x19ab64: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19AB64u;
    SET_GPR_U32(ctx, 31, 0x19AB6Cu);
    ctx->pc = 0x19AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB64u;
    // 0x19ab68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19AB64u, 0x19AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB6Cu;
label_19ab6c:
    // 0x19ab6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19AB6Cu;
    {
        const bool branch_taken_0x19ab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab6c) {
            ctx->pc = 0x19ABB4u;
            return;
        }
    }
    ctx->pc = 0x19AB74u;
}
