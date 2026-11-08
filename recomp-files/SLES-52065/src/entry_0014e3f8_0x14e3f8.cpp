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

// Function: entry_0014e3f8
// Address: 0x14e3f8 - 0x14e404
void entry_0014e3f8_0x14e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e3f8_0x14e3f8");
#endif

    ctx->pc = 0x14e3f8u;

    // 0x14e3f8: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x14e3f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14e3fc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E3FCu;
    {
        const bool branch_taken_0x14e3fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e3fc) {
            ctx->pc = 0x14E424u;
            return;
        }
    }
    ctx->pc = 0x14E404u;
}
