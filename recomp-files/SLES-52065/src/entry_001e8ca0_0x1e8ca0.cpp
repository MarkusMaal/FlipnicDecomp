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

// Function: entry_001e8ca0
// Address: 0x1e8ca0 - 0x1e8cac
void entry_001e8ca0_0x1e8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8ca0_0x1e8ca0");
#endif

    ctx->pc = 0x1e8ca0u;

    // 0x1e8ca0: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x1e8ca0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1e8ca4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8CA4u;
    {
        const bool branch_taken_0x1e8ca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ca4) {
            ctx->pc = 0x1E8CD0u;
            return;
        }
    }
    ctx->pc = 0x1E8CACu;
}
