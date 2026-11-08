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

// Function: entry_001917fc
// Address: 0x1917fc - 0x191808
void entry_001917fc_0x1917fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001917fc_0x1917fc");
#endif

    ctx->pc = 0x1917fcu;

    // 0x1917fc: 0x0  nop
    ctx->pc = 0x1917fcu;
    // NOP
    // 0x191800: 0x100002c8  b           . + 4 + (0x2C8 << 2)
    ctx->pc = 0x191800u;
    {
        const bool branch_taken_0x191800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191800u;
        // 0x191804: 0xac6004d0  sw          $zero, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191800) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191808u;
}
