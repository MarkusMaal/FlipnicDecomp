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

// Function: entry_0019ef18
// Address: 0x19ef18 - 0x19ef28
void entry_0019ef18_0x19ef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef18_0x19ef18");
#endif

    switch (ctx->pc) {
        case 0x19ef20u: goto label_19ef20;
        default: break;
    }

    ctx->pc = 0x19ef18u;

    // 0x19ef18: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19EF18u;
    SET_GPR_U32(ctx, 31, 0x19EF20u);
    ctx->pc = 0x19EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF18u;
    // 0x19ef1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19EF18u, 0x19EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF20u;
label_19ef20:
    // 0x19ef20: 0x100002a8  b           . + 4 + (0x2A8 << 2)
    ctx->pc = 0x19EF20u;
    {
        const bool branch_taken_0x19ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef20) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19EF28u;
}
