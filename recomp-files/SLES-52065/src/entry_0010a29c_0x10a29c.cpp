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

// Function: entry_0010a29c
// Address: 0x10a29c - 0x10a2a8
void entry_0010a29c_0x10a29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a29c_0x10a29c");
#endif

    ctx->pc = 0x10a29cu;

    // 0x10a29c: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x10a29cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x10a2a0: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x10A2A0u;
    {
        const bool branch_taken_0x10a2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2A0u;
        // 0x10a2a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2a0) {
            ctx->pc = 0x10A3E0u;
            return;
        }
    }
    ctx->pc = 0x10A2A8u;
}
