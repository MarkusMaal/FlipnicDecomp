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

// Function: entry_0013b888
// Address: 0x13b888 - 0x13b890
void entry_0013b888_0x13b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b888_0x13b888");
#endif

    ctx->pc = 0x13b888u;

    // 0x13b888: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13B888u;
    {
        const bool branch_taken_0x13b888 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b888) {
            ctx->pc = 0x13B864u;
            return;
        }
    }
    ctx->pc = 0x13B890u;
}
