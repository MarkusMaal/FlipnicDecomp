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

// Function: entry_0020ad7c
// Address: 0x20ad7c - 0x20ad84
void entry_0020ad7c_0x20ad7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ad7c_0x20ad7c");
#endif

    ctx->pc = 0x20ad7cu;

    // 0x20ad7c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x20AD7Cu;
    {
        const bool branch_taken_0x20ad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD7Cu;
        // 0x20ad80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad7c) {
            ctx->pc = 0x20AF30u;
            return;
        }
    }
    ctx->pc = 0x20AD84u;
}
