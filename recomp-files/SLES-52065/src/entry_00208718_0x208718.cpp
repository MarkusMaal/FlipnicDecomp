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

// Function: entry_00208718
// Address: 0x208718 - 0x208720
void entry_00208718_0x208718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208718_0x208718");
#endif

    ctx->pc = 0x208718u;

    // 0x208718: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x208718u;
    {
        const bool branch_taken_0x208718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208718u;
        // 0x20871c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208718) {
            ctx->pc = 0x208770u;
            return;
        }
    }
    ctx->pc = 0x208720u;
}
