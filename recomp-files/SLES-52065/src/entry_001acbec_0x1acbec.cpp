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

// Function: entry_001acbec
// Address: 0x1acbec - 0x1acbf4
void entry_001acbec_0x1acbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acbec_0x1acbec");
#endif

    ctx->pc = 0x1acbecu;

    // 0x1acbec: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1ACBECu;
    {
        const bool branch_taken_0x1acbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acbec) {
            ctx->pc = 0x1ACD3Cu;
            return;
        }
    }
    ctx->pc = 0x1ACBF4u;
}
