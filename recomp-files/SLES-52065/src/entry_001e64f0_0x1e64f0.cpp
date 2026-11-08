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

// Function: entry_001e64f0
// Address: 0x1e64f0 - 0x1e64f8
void entry_001e64f0_0x1e64f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e64f0_0x1e64f0");
#endif

    ctx->pc = 0x1e64f0u;

    // 0x1e64f0: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E64F0u;
    {
        const bool branch_taken_0x1e64f0 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1e64f0) {
            ctx->pc = 0x1E64C4u;
            return;
        }
    }
    ctx->pc = 0x1E64F8u;
}
