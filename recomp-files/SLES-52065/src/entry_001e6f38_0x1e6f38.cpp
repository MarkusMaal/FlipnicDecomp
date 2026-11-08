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

// Function: entry_001e6f38
// Address: 0x1e6f38 - 0x1e6f5c
void entry_001e6f38_0x1e6f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6f38_0x1e6f38");
#endif

    ctx->pc = 0x1e6f38u;

    // 0x1e6f38: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1e6f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1e6f3c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6F3Cu;
    {
        const bool branch_taken_0x1e6f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f3c) {
            ctx->pc = 0x1E6F5Cu;
            return;
        }
    }
    ctx->pc = 0x1E6F44u;
    // 0x1e6f44: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6F44u;
    {
        const bool branch_taken_0x1e6f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f44) {
            ctx->pc = 0x1E6F5Cu;
            return;
        }
    }
    ctx->pc = 0x1E6F4Cu;
    // 0x1e6f4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6F4Cu;
    {
        const bool branch_taken_0x1e6f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F4Cu;
        // 0x1e6f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f4c) {
            ctx->pc = 0x1E6F5Cu;
            return;
        }
    }
    ctx->pc = 0x1E6F54u;
    // 0x1e6f54: 0xc079d0c  jal         func_1E7430
    ctx->pc = 0x1E6F54u;
    SET_GPR_U32(ctx, 31, 0x1E6F5Cu);
    ctx->pc = 0x1E7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7430u, 0x1E6F54u, 0x1E6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F5Cu;
}
