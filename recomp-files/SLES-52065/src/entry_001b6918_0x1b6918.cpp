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

// Function: entry_001b6918
// Address: 0x1b6918 - 0x1b6920
void entry_001b6918_0x1b6918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6918_0x1b6918");
#endif

    ctx->pc = 0x1b6918u;

    // 0x1b6918: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B6918u;
    {
        const bool branch_taken_0x1b6918 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6918) {
            ctx->pc = 0x1B68F4u;
            return;
        }
    }
    ctx->pc = 0x1B6920u;
}
