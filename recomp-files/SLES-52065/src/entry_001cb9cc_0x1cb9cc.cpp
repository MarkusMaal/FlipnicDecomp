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

// Function: entry_001cb9cc
// Address: 0x1cb9cc - 0x1cb9d4
void entry_001cb9cc_0x1cb9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb9cc_0x1cb9cc");
#endif

    ctx->pc = 0x1cb9ccu;

    // 0x1cb9cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB9CCu;
    {
        const bool branch_taken_0x1cb9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9CCu;
        // 0x1cb9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9cc) {
            ctx->pc = 0x1CB9F4u;
            return;
        }
    }
    ctx->pc = 0x1CB9D4u;
}
