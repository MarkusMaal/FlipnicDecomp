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

// Function: entry_001c5ef0
// Address: 0x1c5ef0 - 0x1c5f00
void entry_001c5ef0_0x1c5ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5ef0_0x1c5ef0");
#endif

    ctx->pc = 0x1c5ef0u;

    // 0x1c5ef0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5EF0u;
    {
        const bool branch_taken_0x1c5ef0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF0u;
        // 0x1c5ef4: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ef0) {
            ctx->pc = 0x1C5F00u;
            return;
        }
    }
    ctx->pc = 0x1C5EF8u;
    // 0x1c5ef8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5EF8u;
    {
        const bool branch_taken_0x1c5ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF8u;
        // 0x1c5efc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ef8) {
            ctx->pc = 0x1C5F20u;
            return;
        }
    }
    ctx->pc = 0x1C5F00u;
}
