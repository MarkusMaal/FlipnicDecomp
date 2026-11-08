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

// Function: entry_00190f58
// Address: 0x190f58 - 0x190f60
void entry_00190f58_0x190f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190f58_0x190f58");
#endif

    ctx->pc = 0x190f58u;

    // 0x190f58: 0x100001d0  b           . + 4 + (0x1D0 << 2)
    ctx->pc = 0x190F58u;
    {
        const bool branch_taken_0x190f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f58) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190F60u;
}
