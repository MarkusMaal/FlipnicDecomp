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

// Function: entry_001f3a8c
// Address: 0x1f3a8c - 0x1f3a98
void entry_001f3a8c_0x1f3a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3a8c_0x1f3a8c");
#endif

    ctx->pc = 0x1f3a8cu;

    // 0x1f3a8c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F3A8Cu;
    {
        const bool branch_taken_0x1f3a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3a8c) {
            ctx->pc = 0x1F3A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3A8Cu;
            // 0x1f3a90: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3AB8u;
            return;
        }
    }
    ctx->pc = 0x1F3A94u;
    // 0x1f3a94: 0x0  nop
    ctx->pc = 0x1f3a94u;
    // NOP
    ctx->pc = 0x1f3a98u;
}
