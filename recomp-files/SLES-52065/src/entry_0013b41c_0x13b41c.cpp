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

// Function: entry_0013b41c
// Address: 0x13b41c - 0x13b428
void entry_0013b41c_0x13b41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b41c_0x13b41c");
#endif

    ctx->pc = 0x13b41cu;

    // 0x13b41c: 0x289082b  sltu        $at, $s4, $t1
    ctx->pc = 0x13b41cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x13b420: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x13B420u;
    {
        const bool branch_taken_0x13b420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b420) {
            ctx->pc = 0x13B488u;
            return;
        }
    }
    ctx->pc = 0x13B428u;
}
