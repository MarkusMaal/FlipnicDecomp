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

// Function: entry_001a35f0
// Address: 0x1a35f0 - 0x1a35f8
void entry_001a35f0_0x1a35f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a35f0_0x1a35f0");
#endif

    ctx->pc = 0x1a35f0u;

    // 0x1a35f0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A35F0u;
    {
        const bool branch_taken_0x1a35f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35F0u;
        // 0x1a35f4: 0xae320684  sw          $s2, 0x684($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1668), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35f0) {
            ctx->pc = 0x1A366Cu;
            return;
        }
    }
    ctx->pc = 0x1A35F8u;
}
