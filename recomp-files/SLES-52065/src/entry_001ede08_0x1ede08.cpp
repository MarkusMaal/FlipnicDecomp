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

// Function: entry_001ede08
// Address: 0x1ede08 - 0x1ede0c
void entry_001ede08_0x1ede08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ede08_0x1ede08");
#endif

    ctx->pc = 0x1ede08u;

    // 0x1ede08: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EDE08u;
    {
        const bool branch_taken_0x1ede08 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ede08) {
            ctx->pc = 0x1EDE5Cu;
            return;
        }
    }
    ctx->pc = 0x1EDE10u;
}
