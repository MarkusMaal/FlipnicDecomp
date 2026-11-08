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

// Function: entry_001608d8
// Address: 0x1608d8 - 0x1608e8
void entry_001608d8_0x1608d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001608d8_0x1608d8");
#endif

    ctx->pc = 0x1608d8u;

    // 0x1608d8: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1608d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1608dc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1608DCu;
    {
        const bool branch_taken_0x1608dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1608E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608DCu;
        // 0x1608e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608dc) {
            ctx->pc = 0x16097Cu;
            return;
        }
    }
    ctx->pc = 0x1608E4u;
    // 0x1608e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1608e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1608e8u;
}
