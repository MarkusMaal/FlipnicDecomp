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

// Function: entry_001c6018
// Address: 0x1c6018 - 0x1c6028
void entry_001c6018_0x1c6018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6018_0x1c6018");
#endif

    ctx->pc = 0x1c6018u;

    // 0x1c6018: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6018u;
    {
        const bool branch_taken_0x1c6018 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6018u;
        // 0x1c601c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6018) {
            ctx->pc = 0x1C6028u;
            return;
        }
    }
    ctx->pc = 0x1C6020u;
    // 0x1c6020: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6020u;
    {
        const bool branch_taken_0x1c6020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6020u;
        // 0x1c6024: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6020) {
            ctx->pc = 0x1C6048u;
            return;
        }
    }
    ctx->pc = 0x1C6028u;
}
