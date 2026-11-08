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

// Function: entry_001439a8
// Address: 0x1439a8 - 0x1439b4
void entry_001439a8_0x1439a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001439a8_0x1439a8");
#endif

    ctx->pc = 0x1439a8u;

    // 0x1439a8: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x1439a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1439ac: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1439ACu;
    {
        const bool branch_taken_0x1439ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1439ac) {
            ctx->pc = 0x1439FCu;
            return;
        }
    }
    ctx->pc = 0x1439B4u;
}
