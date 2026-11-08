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

// Function: entry_001a70f4
// Address: 0x1a70f4 - 0x1a70fc
void entry_001a70f4_0x1a70f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a70f4_0x1a70f4");
#endif

    ctx->pc = 0x1a70f4u;

    // 0x1a70f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A70F4u;
    {
        const bool branch_taken_0x1a70f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a70f4) {
            ctx->pc = 0x1A7128u;
            return;
        }
    }
    ctx->pc = 0x1A70FCu;
}
