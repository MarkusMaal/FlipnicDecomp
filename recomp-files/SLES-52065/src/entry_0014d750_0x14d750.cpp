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

// Function: entry_0014d750
// Address: 0x14d750 - 0x14d75c
void entry_0014d750_0x14d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d750_0x14d750");
#endif

    ctx->pc = 0x14d750u;

    // 0x14d750: 0x237082b  sltu        $at, $s1, $s7
    ctx->pc = 0x14d750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x14d754: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14D754u;
    {
        const bool branch_taken_0x14d754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d754) {
            ctx->pc = 0x14D78Cu;
            return;
        }
    }
    ctx->pc = 0x14D75Cu;
}
