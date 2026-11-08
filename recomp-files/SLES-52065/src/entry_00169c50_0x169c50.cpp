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

// Function: entry_00169c50
// Address: 0x169c50 - 0x169c58
void entry_00169c50_0x169c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169c50_0x169c50");
#endif

    ctx->pc = 0x169c50u;

    // 0x169c50: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x169C50u;
    {
        const bool branch_taken_0x169c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c50) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
    ctx->pc = 0x169C58u;
}
