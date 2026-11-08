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

// Function: entry_001e5b40
// Address: 0x1e5b40 - 0x1e5b48
void entry_001e5b40_0x1e5b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5b40_0x1e5b40");
#endif

    ctx->pc = 0x1e5b40u;

    // 0x1e5b40: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E5B40u;
    {
        const bool branch_taken_0x1e5b40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b40) {
            ctx->pc = 0x1E5B14u;
            return;
        }
    }
    ctx->pc = 0x1E5B48u;
}
