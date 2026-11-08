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

// Function: entry_001b8054
// Address: 0x1b8054 - 0x1b8064
void entry_001b8054_0x1b8054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8054_0x1b8054");
#endif

    ctx->pc = 0x1b8054u;

    // 0x1b8054: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8054u;
    {
        const bool branch_taken_0x1b8054 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1B8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8054u;
        // 0x1b8058: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8054) {
            ctx->pc = 0x1B8064u;
            return;
        }
    }
    ctx->pc = 0x1B805Cu;
    // 0x1b805c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B805Cu;
    {
        const bool branch_taken_0x1b805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B805Cu;
        // 0x1b8060: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b805c) {
            ctx->pc = 0x1B8084u;
            return;
        }
    }
    ctx->pc = 0x1B8064u;
}
