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

// Function: entry_001e7e24
// Address: 0x1e7e24 - 0x1e7e30
void entry_001e7e24_0x1e7e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7e24_0x1e7e24");
#endif

    ctx->pc = 0x1e7e24u;

    // 0x1e7e24: 0x0  nop
    ctx->pc = 0x1e7e24u;
    // NOP
    // 0x1e7e28: 0x1220009b  beqz        $s1, . + 4 + (0x9B << 2)
    ctx->pc = 0x1E7E28u;
    {
        const bool branch_taken_0x1e7e28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7e28) {
            ctx->pc = 0x1E8098u;
            return;
        }
    }
    ctx->pc = 0x1E7E30u;
}
