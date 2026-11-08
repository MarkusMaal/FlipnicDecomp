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

// Function: entry_0014d71c
// Address: 0x14d71c - 0x14d728
void entry_0014d71c_0x14d71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d71c_0x14d71c");
#endif

    ctx->pc = 0x14d71cu;

    // 0x14d71c: 0x0  nop
    ctx->pc = 0x14d71cu;
    // NOP
    // 0x14d720: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x14D720u;
    {
        const bool branch_taken_0x14d720 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d720) {
            ctx->pc = 0x14D750u;
            return;
        }
    }
    ctx->pc = 0x14D728u;
}
