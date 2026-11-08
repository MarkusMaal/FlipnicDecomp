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

// Function: entry_0014dcc0
// Address: 0x14dcc0 - 0x14dccc
void entry_0014dcc0_0x14dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dcc0_0x14dcc0");
#endif

    ctx->pc = 0x14dcc0u;

    // 0x14dcc0: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x14dcc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14dcc4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DCC4u;
    {
        const bool branch_taken_0x14dcc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dcc4) {
            ctx->pc = 0x14DCFCu;
            return;
        }
    }
    ctx->pc = 0x14DCCCu;
}
