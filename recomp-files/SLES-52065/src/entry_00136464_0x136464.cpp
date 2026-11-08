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

// Function: entry_00136464
// Address: 0x136464 - 0x136470
void entry_00136464_0x136464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136464_0x136464");
#endif

    ctx->pc = 0x136464u;

    // 0x136464: 0x0  nop
    ctx->pc = 0x136464u;
    // NOP
    // 0x136468: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x136468u;
    {
        const bool branch_taken_0x136468 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x136468) {
            ctx->pc = 0x136498u;
            return;
        }
    }
    ctx->pc = 0x136470u;
}
