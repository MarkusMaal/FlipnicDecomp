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

// Function: entry_00195c8c
// Address: 0x195c8c - 0x195c98
void entry_00195c8c_0x195c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195c8c_0x195c8c");
#endif

    ctx->pc = 0x195c8cu;

    // 0x195c8c: 0x0  nop
    ctx->pc = 0x195c8cu;
    // NOP
    // 0x195c90: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x195C90u;
    {
        const bool branch_taken_0x195c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c90) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195C98u;
}
