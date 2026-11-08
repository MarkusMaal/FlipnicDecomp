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

// Function: entry_00136340
// Address: 0x136340 - 0x136348
void entry_00136340_0x136340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136340_0x136340");
#endif

    ctx->pc = 0x136340u;

    // 0x136340: 0x12600075  beqz        $s3, . + 4 + (0x75 << 2)
    ctx->pc = 0x136340u;
    {
        const bool branch_taken_0x136340 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x136340) {
            ctx->pc = 0x136518u;
            return;
        }
    }
    ctx->pc = 0x136348u;
}
