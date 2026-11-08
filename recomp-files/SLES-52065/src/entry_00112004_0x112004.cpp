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

// Function: entry_00112004
// Address: 0x112004 - 0x112014
void entry_00112004_0x112004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112004_0x112004");
#endif

    ctx->pc = 0x112004u;

    // 0x112004: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x112004u;
    {
        const bool branch_taken_0x112004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112004u;
        // 0x112008: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112004) {
            ctx->pc = 0x112334u;
            return;
        }
    }
    ctx->pc = 0x11200Cu;
    // 0x11200c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11200Cu;
    {
        const bool branch_taken_0x11200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11200c) {
            ctx->pc = 0x112020u;
            return;
        }
    }
    ctx->pc = 0x112014u;
}
