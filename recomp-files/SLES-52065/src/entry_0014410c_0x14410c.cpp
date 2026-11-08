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

// Function: entry_0014410c
// Address: 0x14410c - 0x144118
void entry_0014410c_0x14410c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014410c_0x14410c");
#endif

    ctx->pc = 0x14410cu;

    // 0x14410c: 0x0  nop
    ctx->pc = 0x14410cu;
    // NOP
    // 0x144110: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x144110u;
    {
        const bool branch_taken_0x144110 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x144110) {
            ctx->pc = 0x144178u;
            return;
        }
    }
    ctx->pc = 0x144118u;
}
