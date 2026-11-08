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

// Function: entry_001c6140
// Address: 0x1c6140 - 0x1c6150
void entry_001c6140_0x1c6140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6140_0x1c6140");
#endif

    ctx->pc = 0x1c6140u;

    // 0x1c6140: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6140u;
    {
        const bool branch_taken_0x1c6140 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6140u;
        // 0x1c6144: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6140) {
            ctx->pc = 0x1C6150u;
            return;
        }
    }
    ctx->pc = 0x1C6148u;
    // 0x1c6148: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6148u;
    {
        const bool branch_taken_0x1c6148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6148u;
        // 0x1c614c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6148) {
            ctx->pc = 0x1C6170u;
            return;
        }
    }
    ctx->pc = 0x1C6150u;
}
