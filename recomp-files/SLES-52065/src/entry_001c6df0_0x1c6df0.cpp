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

// Function: entry_001c6df0
// Address: 0x1c6df0 - 0x1c6df8
void entry_001c6df0_0x1c6df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6df0_0x1c6df0");
#endif

    ctx->pc = 0x1c6df0u;

    // 0x1c6df0: 0x10000264  b           . + 4 + (0x264 << 2)
    ctx->pc = 0x1C6DF0u;
    {
        const bool branch_taken_0x1c6df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DF0u;
        // 0x1c6df4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6df0) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6DF8u;
}
