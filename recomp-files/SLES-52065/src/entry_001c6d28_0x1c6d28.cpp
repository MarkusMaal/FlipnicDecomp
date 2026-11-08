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

// Function: entry_001c6d28
// Address: 0x1c6d28 - 0x1c6d30
void entry_001c6d28_0x1c6d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6d28_0x1c6d28");
#endif

    ctx->pc = 0x1c6d28u;

    // 0x1c6d28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6D28u;
    {
        const bool branch_taken_0x1c6d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D28u;
        // 0x1c6d2c: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d28) {
            ctx->pc = 0x1C6D48u;
            return;
        }
    }
    ctx->pc = 0x1C6D30u;
}
