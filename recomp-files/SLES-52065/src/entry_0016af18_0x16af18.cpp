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

// Function: entry_0016af18
// Address: 0x16af18 - 0x16af28
void entry_0016af18_0x16af18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016af18_0x16af18");
#endif

    ctx->pc = 0x16af18u;

    // 0x16af18: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AF18u;
    {
        const bool branch_taken_0x16af18 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF18u;
        // 0x16af1c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af18) {
            ctx->pc = 0x16AF28u;
            return;
        }
    }
    ctx->pc = 0x16AF20u;
    // 0x16af20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16AF20u;
    {
        const bool branch_taken_0x16af20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF20u;
        // 0x16af24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af20) {
            ctx->pc = 0x16AF48u;
            return;
        }
    }
    ctx->pc = 0x16AF28u;
}
