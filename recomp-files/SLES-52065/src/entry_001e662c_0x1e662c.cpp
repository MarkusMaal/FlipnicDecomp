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

// Function: entry_001e662c
// Address: 0x1e662c - 0x1e6638
void entry_001e662c_0x1e662c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e662c_0x1e662c");
#endif

    ctx->pc = 0x1e662cu;

    // 0x1e662c: 0x0  nop
    ctx->pc = 0x1e662cu;
    // NOP
    // 0x1e6630: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E6630u;
    {
        const bool branch_taken_0x1e6630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6630) {
            ctx->pc = 0x1E6664u;
            return;
        }
    }
    ctx->pc = 0x1E6638u;
}
