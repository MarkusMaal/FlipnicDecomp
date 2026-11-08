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

// Function: entry_0014d5e4
// Address: 0x14d5e4 - 0x14d5f0
void entry_0014d5e4_0x14d5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d5e4_0x14d5e4");
#endif

    ctx->pc = 0x14d5e4u;

    // 0x14d5e4: 0x0  nop
    ctx->pc = 0x14d5e4u;
    // NOP
    // 0x14d5e8: 0x1260007d  beqz        $s3, . + 4 + (0x7D << 2)
    ctx->pc = 0x14D5E8u;
    {
        const bool branch_taken_0x14d5e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5e8) {
            ctx->pc = 0x14D7E0u;
            return;
        }
    }
    ctx->pc = 0x14D5F0u;
}
