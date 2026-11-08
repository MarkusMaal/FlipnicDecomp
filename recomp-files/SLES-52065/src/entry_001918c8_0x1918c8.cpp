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

// Function: entry_001918c8
// Address: 0x1918c8 - 0x1918d0
void entry_001918c8_0x1918c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001918c8_0x1918c8");
#endif

    ctx->pc = 0x1918c8u;

    // 0x1918c8: 0x10000296  b           . + 4 + (0x296 << 2)
    ctx->pc = 0x1918C8u;
    {
        const bool branch_taken_0x1918c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918C8u;
        // 0x1918cc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918c8) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1918D0u;
}
