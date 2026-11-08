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

// Function: entry_0011483c
// Address: 0x11483c - 0x114848
void entry_0011483c_0x11483c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011483c_0x11483c");
#endif

    ctx->pc = 0x11483cu;

    // 0x11483c: 0x0  nop
    ctx->pc = 0x11483cu;
    // NOP
    // 0x114840: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114840u;
    {
        const bool branch_taken_0x114840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114840) {
            ctx->pc = 0x11485Cu;
            return;
        }
    }
    ctx->pc = 0x114848u;
}
