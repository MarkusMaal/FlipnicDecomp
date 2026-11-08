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

// Function: entry_001f78d8
// Address: 0x1f78d8 - 0x1f78e0
void entry_001f78d8_0x1f78d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f78d8_0x1f78d8");
#endif

    ctx->pc = 0x1f78d8u;

    // 0x1f78d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F78D8u;
    {
        const bool branch_taken_0x1f78d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78D8u;
        // 0x1f78dc: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78d8) {
            ctx->pc = 0x1F78E8u;
            return;
        }
    }
    ctx->pc = 0x1F78E0u;
}
