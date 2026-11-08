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

// Function: entry_0018ec04
// Address: 0x18ec04 - 0x18ec0c
void entry_0018ec04_0x18ec04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec04_0x18ec04");
#endif

    ctx->pc = 0x18ec04u;

    // 0x18ec04: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18EC04u;
    {
        const bool branch_taken_0x18ec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC04u;
        // 0x18ec08: 0xae232720  sw          $v1, 0x2720($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec04) {
            ctx->pc = 0x18EC94u;
            return;
        }
    }
    ctx->pc = 0x18EC0Cu;
}
