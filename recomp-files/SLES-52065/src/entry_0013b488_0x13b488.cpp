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

// Function: entry_0013b488
// Address: 0x13b488 - 0x13b490
void entry_0013b488_0x13b488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b488_0x13b488");
#endif

    ctx->pc = 0x13b488u;

    // 0x13b488: 0x126000ab  beqz        $s3, . + 4 + (0xAB << 2)
    ctx->pc = 0x13B488u;
    {
        const bool branch_taken_0x13b488 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b488) {
            ctx->pc = 0x13B738u;
            return;
        }
    }
    ctx->pc = 0x13B490u;
}
