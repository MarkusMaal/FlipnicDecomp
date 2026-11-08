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

// Function: entry_0014d5ac
// Address: 0x14d5ac - 0x14d5b8
void entry_0014d5ac_0x14d5ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d5ac_0x14d5ac");
#endif

    ctx->pc = 0x14d5acu;

    // 0x14d5ac: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x14d5acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14d5b0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x14D5B0u;
    {
        const bool branch_taken_0x14d5b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5b0) {
            ctx->pc = 0x14D5E4u;
            return;
        }
    }
    ctx->pc = 0x14D5B8u;
}
