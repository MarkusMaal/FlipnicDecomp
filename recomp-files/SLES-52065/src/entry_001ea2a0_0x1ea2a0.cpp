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

// Function: entry_001ea2a0
// Address: 0x1ea2a0 - 0x1ea2a8
void entry_001ea2a0_0x1ea2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea2a0_0x1ea2a0");
#endif

    ctx->pc = 0x1ea2a0u;

    // 0x1ea2a0: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x1EA2A0u;
    {
        const bool branch_taken_0x1ea2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2A0u;
        // 0x1ea2a4: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2a0) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
    ctx->pc = 0x1EA2A8u;
}
