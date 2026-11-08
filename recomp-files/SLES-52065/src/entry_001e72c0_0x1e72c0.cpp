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

// Function: entry_001e72c0
// Address: 0x1e72c0 - 0x1e72cc
void entry_001e72c0_0x1e72c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e72c0_0x1e72c0");
#endif

    ctx->pc = 0x1e72c0u;

    // 0x1e72c0: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x1e72c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1e72c4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E72C4u;
    {
        const bool branch_taken_0x1e72c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e72c4) {
            ctx->pc = 0x1E72ECu;
            return;
        }
    }
    ctx->pc = 0x1E72CCu;
}
