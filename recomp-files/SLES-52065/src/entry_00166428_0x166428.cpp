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

// Function: entry_00166428
// Address: 0x166428 - 0x166430
void entry_00166428_0x166428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166428_0x166428");
#endif

    ctx->pc = 0x166428u;

    // 0x166428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166428u;
    {
        const bool branch_taken_0x166428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166428) {
            ctx->pc = 0x166434u;
            return;
        }
    }
    ctx->pc = 0x166430u;
}
