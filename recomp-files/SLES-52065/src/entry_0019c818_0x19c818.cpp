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

// Function: entry_0019c818
// Address: 0x19c818 - 0x19c828
void entry_0019c818_0x19c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c818_0x19c818");
#endif

    ctx->pc = 0x19c818u;

    // 0x19c818: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C818u;
    {
        const bool branch_taken_0x19c818 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C818u;
        // 0x19c81c: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c818) {
            ctx->pc = 0x19C828u;
            return;
        }
    }
    ctx->pc = 0x19C820u;
    // 0x19c820: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19C820u;
    {
        const bool branch_taken_0x19c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C820u;
        // 0x19c824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c820) {
            ctx->pc = 0x19C848u;
            return;
        }
    }
    ctx->pc = 0x19C828u;
}
