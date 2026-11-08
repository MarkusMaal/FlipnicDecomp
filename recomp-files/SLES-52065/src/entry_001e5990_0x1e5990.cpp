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

// Function: entry_001e5990
// Address: 0x1e5990 - 0x1e5998
void entry_001e5990_0x1e5990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5990_0x1e5990");
#endif

    ctx->pc = 0x1e5990u;

    // 0x1e5990: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E5990u;
    {
        const bool branch_taken_0x1e5990 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1e5990) {
            ctx->pc = 0x1E5964u;
            return;
        }
    }
    ctx->pc = 0x1E5998u;
}
