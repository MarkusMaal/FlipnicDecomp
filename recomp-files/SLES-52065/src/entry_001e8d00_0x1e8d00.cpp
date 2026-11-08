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

// Function: entry_001e8d00
// Address: 0x1e8d00 - 0x1e8d0c
void entry_001e8d00_0x1e8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8d00_0x1e8d00");
#endif

    ctx->pc = 0x1e8d00u;

    // 0x1e8d00: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x1e8d00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1e8d04: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8D04u;
    {
        const bool branch_taken_0x1e8d04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d04) {
            ctx->pc = 0x1E8D30u;
            return;
        }
    }
    ctx->pc = 0x1E8D0Cu;
}
