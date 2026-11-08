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

// Function: entry_0019f358
// Address: 0x19f358 - 0x19f364
void entry_0019f358_0x19f358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f358_0x19f358");
#endif

    ctx->pc = 0x19f358u;

    // 0x19f358: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F358u;
    {
        const bool branch_taken_0x19f358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f358) {
            ctx->pc = 0x19F364u;
            return;
        }
    }
    ctx->pc = 0x19F360u;
    // 0x19f360: 0xac800320  sw          $zero, 0x320($a0)
    ctx->pc = 0x19f360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 0));
    ctx->pc = 0x19f364u;
}
