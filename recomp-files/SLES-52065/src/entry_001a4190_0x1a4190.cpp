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

// Function: entry_001a4190
// Address: 0x1a4190 - 0x1a4198
void entry_001a4190_0x1a4190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4190_0x1a4190");
#endif

    ctx->pc = 0x1a4190u;

    // 0x1a4190: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1A4190u;
    {
        const bool branch_taken_0x1a4190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4190u;
        // 0x1a4194: 0xae340678  sw          $s4, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4190) {
            ctx->pc = 0x1A431Cu;
            return;
        }
    }
    ctx->pc = 0x1A4198u;
}
