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

// Function: entry_0010b848
// Address: 0x10b848 - 0x10b85c
void entry_0010b848_0x10b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b848_0x10b848");
#endif

    ctx->pc = 0x10b848u;

    // 0x10b848: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x10b848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x10b84c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x10B84Cu;
    {
        const bool branch_taken_0x10b84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b84c) {
            ctx->pc = 0x10B820u;
            return;
        }
    }
    ctx->pc = 0x10B854u;
    // 0x10b854: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x10B854u;
    {
        const bool branch_taken_0x10b854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B854u;
        // 0x10b858: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b854) {
            ctx->pc = 0x10B9B4u;
            return;
        }
    }
    ctx->pc = 0x10B85Cu;
}
