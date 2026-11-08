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

// Function: entry_001e6f5c
// Address: 0x1e6f5c - 0x1e6f80
void entry_001e6f5c_0x1e6f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6f5c_0x1e6f5c");
#endif

    ctx->pc = 0x1e6f5cu;

    // 0x1e6f5c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1e6f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1e6f60: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6F60u;
    {
        const bool branch_taken_0x1e6f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f60) {
            ctx->pc = 0x1E6F80u;
            return;
        }
    }
    ctx->pc = 0x1E6F68u;
    // 0x1e6f68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6F68u;
    {
        const bool branch_taken_0x1e6f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f68) {
            ctx->pc = 0x1E6F80u;
            return;
        }
    }
    ctx->pc = 0x1E6F70u;
    // 0x1e6f70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6F70u;
    {
        const bool branch_taken_0x1e6f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F70u;
        // 0x1e6f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f70) {
            ctx->pc = 0x1E6F80u;
            return;
        }
    }
    ctx->pc = 0x1E6F78u;
    // 0x1e6f78: 0xc079cf0  jal         func_1E73C0
    ctx->pc = 0x1E6F78u;
    SET_GPR_U32(ctx, 31, 0x1E6F80u);
    ctx->pc = 0x1E73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73C0u, 0x1E6F78u, 0x1E6F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F80u;
}
