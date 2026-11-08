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

// Function: entry_0018886c
// Address: 0x18886c - 0x188878
void entry_0018886c_0x18886c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018886c_0x18886c");
#endif

    ctx->pc = 0x18886cu;

    // 0x18886c: 0x0  nop
    ctx->pc = 0x18886cu;
    // NOP
    // 0x188870: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x188870u;
    {
        const bool branch_taken_0x188870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188870) {
            ctx->pc = 0x1888E4u;
            return;
        }
    }
    ctx->pc = 0x188878u;
}
