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

// Function: entry_001348a4
// Address: 0x1348a4 - 0x1348ac
void entry_001348a4_0x1348a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001348a4_0x1348a4");
#endif

    ctx->pc = 0x1348a4u;

    // 0x1348a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1348A4u;
    {
        const bool branch_taken_0x1348a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1348a4) {
            ctx->pc = 0x134920u;
            return;
        }
    }
    ctx->pc = 0x1348ACu;
}
