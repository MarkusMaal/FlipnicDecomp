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

// Function: entry_00187db0
// Address: 0x187db0 - 0x187dbc
void entry_00187db0_0x187db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187db0_0x187db0");
#endif

    ctx->pc = 0x187db0u;

    // 0x187db0: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x187db0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x187db4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x187DB4u;
    {
        const bool branch_taken_0x187db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187db4) {
            ctx->pc = 0x187DD8u;
            return;
        }
    }
    ctx->pc = 0x187DBCu;
}
