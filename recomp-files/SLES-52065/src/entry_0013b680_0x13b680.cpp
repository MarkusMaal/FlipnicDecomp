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

// Function: entry_0013b680
// Address: 0x13b680 - 0x13b68c
void entry_0013b680_0x13b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b680_0x13b680");
#endif

    ctx->pc = 0x13b680u;

    // 0x13b680: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x13b680u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b684: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B684u;
    {
        const bool branch_taken_0x13b684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b684) {
            ctx->pc = 0x13B6E4u;
            return;
        }
    }
    ctx->pc = 0x13B68Cu;
}
