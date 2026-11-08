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

// Function: entry_001e7fa8
// Address: 0x1e7fa8 - 0x1e7fb4
void entry_001e7fa8_0x1e7fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7fa8_0x1e7fa8");
#endif

    ctx->pc = 0x1e7fa8u;

    // 0x1e7fa8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x1e7fa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e7fac: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7FACu;
    {
        const bool branch_taken_0x1e7fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fac) {
            ctx->pc = 0x1E7FFCu;
            return;
        }
    }
    ctx->pc = 0x1E7FB4u;
}
