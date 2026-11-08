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

// Function: entry_001b733c
// Address: 0x1b733c - 0x1b7348
void entry_001b733c_0x1b733c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b733c_0x1b733c");
#endif

    ctx->pc = 0x1b733cu;

    // 0x1b733c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B733Cu;
    {
        const bool branch_taken_0x1b733c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b733c) {
            ctx->pc = 0x1B7348u;
            return;
        }
    }
    ctx->pc = 0x1B7344u;
    // 0x1b7344: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x1b7344u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x1b7348u;
}
