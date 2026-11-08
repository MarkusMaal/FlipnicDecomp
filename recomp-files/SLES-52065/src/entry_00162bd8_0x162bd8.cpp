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

// Function: entry_00162bd8
// Address: 0x162bd8 - 0x162be0
void entry_00162bd8_0x162bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162bd8_0x162bd8");
#endif

    ctx->pc = 0x162bd8u;

    // 0x162bd8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x162BD8u;
    {
        const bool branch_taken_0x162bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162bd8) {
            ctx->pc = 0x162DFCu;
            return;
        }
    }
    ctx->pc = 0x162BE0u;
}
