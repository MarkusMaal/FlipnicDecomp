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

// Function: entry_0013b624
// Address: 0x13b624 - 0x13b630
void entry_0013b624_0x13b624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b624_0x13b624");
#endif

    ctx->pc = 0x13b624u;

    // 0x13b624: 0x0  nop
    ctx->pc = 0x13b624u;
    // NOP
    // 0x13b628: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x13B628u;
    {
        const bool branch_taken_0x13b628 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b628) {
            ctx->pc = 0x13B680u;
            return;
        }
    }
    ctx->pc = 0x13B630u;
}
