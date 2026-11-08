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

// Function: entry_0016e478
// Address: 0x16e478 - 0x16e480
void entry_0016e478_0x16e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e478_0x16e478");
#endif

    ctx->pc = 0x16e478u;

    // 0x16e478: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16E478u;
    {
        const bool branch_taken_0x16e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E478u;
        // 0x16e47c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e478) {
            ctx->pc = 0x16E4D4u;
            return;
        }
    }
    ctx->pc = 0x16E480u;
}
