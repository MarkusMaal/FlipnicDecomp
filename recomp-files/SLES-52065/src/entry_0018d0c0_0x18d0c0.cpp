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

// Function: entry_0018d0c0
// Address: 0x18d0c0 - 0x18d0c8
void entry_0018d0c0_0x18d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d0c0_0x18d0c0");
#endif

    ctx->pc = 0x18d0c0u;

    // 0x18d0c0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x18D0C0u;
    {
        const bool branch_taken_0x18d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0C0u;
        // 0x18d0c4: 0xae40048c  sw          $zero, 0x48C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0c0) {
            ctx->pc = 0x18D338u;
            return;
        }
    }
    ctx->pc = 0x18D0C8u;
}
