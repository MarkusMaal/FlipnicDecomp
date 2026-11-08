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

// Function: entry_001920a4
// Address: 0x1920a4 - 0x1920b0
void entry_001920a4_0x1920a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001920a4_0x1920a4");
#endif

    ctx->pc = 0x1920a4u;

    // 0x1920a4: 0x0  nop
    ctx->pc = 0x1920a4u;
    // NOP
    // 0x1920a8: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x1920A8u;
    {
        const bool branch_taken_0x1920a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920A8u;
        // 0x1920ac: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920a8) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1920B0u;
}
