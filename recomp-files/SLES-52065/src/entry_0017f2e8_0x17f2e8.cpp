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

// Function: entry_0017f2e8
// Address: 0x17f2e8 - 0x17f2f0
void entry_0017f2e8_0x17f2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f2e8_0x17f2e8");
#endif

    ctx->pc = 0x17f2e8u;

    // 0x17f2e8: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17F2E8u;
    {
        const bool branch_taken_0x17f2e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f2e8) {
            ctx->pc = 0x17F2C4u;
            return;
        }
    }
    ctx->pc = 0x17F2F0u;
}
