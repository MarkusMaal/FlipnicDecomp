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

// Function: entry_0014e648
// Address: 0x14e648 - 0x14e654
void entry_0014e648_0x14e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e648_0x14e648");
#endif

    ctx->pc = 0x14e648u;

    // 0x14e648: 0x237082b  sltu        $at, $s1, $s7
    ctx->pc = 0x14e648u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x14e64c: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x14E64Cu;
    {
        const bool branch_taken_0x14e64c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e64c) {
            ctx->pc = 0x14E6C4u;
            return;
        }
    }
    ctx->pc = 0x14E654u;
}
