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

// Function: entry_00144178
// Address: 0x144178 - 0x144184
void entry_00144178_0x144178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144178_0x144178");
#endif

    ctx->pc = 0x144178u;

    // 0x144178: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x144178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14417c: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x14417Cu;
    {
        const bool branch_taken_0x14417c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14417c) {
            ctx->pc = 0x1441ECu;
            return;
        }
    }
    ctx->pc = 0x144184u;
}
