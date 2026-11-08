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

// Function: entry_0011f250
// Address: 0x11f250 - 0x11f258
void entry_0011f250_0x11f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f250_0x11f250");
#endif

    ctx->pc = 0x11f250u;

    // 0x11f250: 0x1000ff67  b           . + 4 + (-0x99 << 2)
    ctx->pc = 0x11F250u;
    {
        const bool branch_taken_0x11f250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F250u;
        // 0x11f254: 0xae600098  sw          $zero, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f250) {
            ctx->pc = 0x11EFF0u;
            return;
        }
    }
    ctx->pc = 0x11F258u;
}
