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

// Function: entry_001b7630
// Address: 0x1b7630 - 0x1b763c
void entry_001b7630_0x1b7630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7630_0x1b7630");
#endif

    ctx->pc = 0x1b7630u;

    // 0x1b7630: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7630u;
    {
        const bool branch_taken_0x1b7630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7630) {
            ctx->pc = 0x1B763Cu;
            return;
        }
    }
    ctx->pc = 0x1B7638u;
    // 0x1b7638: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b7638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1b763cu;
}
