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

// Function: entry_0013c35c
// Address: 0x13c35c - 0x13c374
void entry_0013c35c_0x13c35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c35c_0x13c35c");
#endif

    ctx->pc = 0x13c35cu;

    // 0x13c35c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C35Cu;
    {
        const bool branch_taken_0x13c35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c35c) {
            ctx->pc = 0x13C374u;
            return;
        }
    }
    ctx->pc = 0x13C364u;
    // 0x13c364: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C364u;
    {
        const bool branch_taken_0x13c364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C364u;
        // 0x13c368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c364) {
            ctx->pc = 0x13C374u;
            return;
        }
    }
    ctx->pc = 0x13C36Cu;
    // 0x13c36c: 0xc048414  jal         func_121050
    ctx->pc = 0x13C36Cu;
    SET_GPR_U32(ctx, 31, 0x13C374u);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x13C36Cu, 0x13C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C374u;
}
