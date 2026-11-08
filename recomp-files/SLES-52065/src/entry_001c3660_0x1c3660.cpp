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

// Function: entry_001c3660
// Address: 0x1c3660 - 0x1c3668
void entry_001c3660_0x1c3660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3660_0x1c3660");
#endif

    ctx->pc = 0x1c3660u;

    // 0x1c3660: 0x10000369  b           . + 4 + (0x369 << 2)
    ctx->pc = 0x1C3660u;
    {
        const bool branch_taken_0x1c3660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3660u;
        // 0x1c3664: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3660) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3668u;
}
