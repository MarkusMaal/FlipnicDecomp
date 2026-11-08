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

// Function: entry_001b7fa4
// Address: 0x1b7fa4 - 0x1b7fb4
void entry_001b7fa4_0x1b7fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7fa4_0x1b7fa4");
#endif

    ctx->pc = 0x1b7fa4u;

    // 0x1b7fa4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7FA4u;
    {
        const bool branch_taken_0x1b7fa4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1B7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FA4u;
        // 0x1b7fa8: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fa4) {
            ctx->pc = 0x1B7FB4u;
            return;
        }
    }
    ctx->pc = 0x1B7FACu;
    // 0x1b7fac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B7FACu;
    {
        const bool branch_taken_0x1b7fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FACu;
        // 0x1b7fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fac) {
            ctx->pc = 0x1B8008u;
            return;
        }
    }
    ctx->pc = 0x1B7FB4u;
}
