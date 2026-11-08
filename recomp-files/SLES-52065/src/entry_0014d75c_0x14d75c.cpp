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

// Function: entry_0014d75c
// Address: 0x14d75c - 0x14d76c
void entry_0014d75c_0x14d75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d75c_0x14d75c");
#endif

    ctx->pc = 0x14d75cu;

    // 0x14d75c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D75Cu;
    {
        const bool branch_taken_0x14d75c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D75Cu;
        // 0x14d760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d75c) {
            ctx->pc = 0x14D76Cu;
            return;
        }
    }
    ctx->pc = 0x14D764u;
    // 0x14d764: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D764u;
    SET_GPR_U32(ctx, 31, 0x14D76Cu);
    ctx->pc = 0x14D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D764u;
    // 0x14d768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D764u, 0x14D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D76Cu;
}
