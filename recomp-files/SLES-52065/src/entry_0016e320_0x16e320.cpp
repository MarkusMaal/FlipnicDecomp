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

// Function: entry_0016e320
// Address: 0x16e320 - 0x16e328
void entry_0016e320_0x16e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e320_0x16e320");
#endif

    ctx->pc = 0x16e320u;

    // 0x16e320: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16E320u;
    {
        const bool branch_taken_0x16e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E320u;
        // 0x16e324: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e320) {
            ctx->pc = 0x16E378u;
            return;
        }
    }
    ctx->pc = 0x16E328u;
}
