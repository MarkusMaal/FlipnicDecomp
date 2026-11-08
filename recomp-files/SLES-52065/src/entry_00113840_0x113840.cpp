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

// Function: entry_00113840
// Address: 0x113840 - 0x11384c
void entry_00113840_0x113840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113840_0x113840");
#endif

    ctx->pc = 0x113840u;

    // 0x113840: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x113840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113844: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x113844u;
    {
        const bool branch_taken_0x113844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113844u;
        // 0x113848: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113844) {
            ctx->pc = 0x11387Cu;
            return;
        }
    }
    ctx->pc = 0x11384Cu;
}
