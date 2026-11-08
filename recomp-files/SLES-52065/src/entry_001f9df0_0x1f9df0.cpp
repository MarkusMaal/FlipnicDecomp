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

// Function: entry_001f9df0
// Address: 0x1f9df0 - 0x1f9df8
void entry_001f9df0_0x1f9df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9df0_0x1f9df0");
#endif

    ctx->pc = 0x1f9df0u;

    // 0x1f9df0: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9DF0u;
    {
        const bool branch_taken_0x1f9df0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DF0u;
        // 0x1f9df4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9df0) {
            ctx->pc = 0x1F9E20u;
            return;
        }
    }
    ctx->pc = 0x1F9DF8u;
}
