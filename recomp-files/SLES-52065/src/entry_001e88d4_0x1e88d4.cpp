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

// Function: entry_001e88d4
// Address: 0x1e88d4 - 0x1e88e0
void entry_001e88d4_0x1e88d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e88d4_0x1e88d4");
#endif

    ctx->pc = 0x1e88d4u;

    // 0x1e88d4: 0x19000016  blez        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E88D4u;
    {
        const bool branch_taken_0x1e88d4 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x1e88d4) {
            ctx->pc = 0x1E8930u;
            return;
        }
    }
    ctx->pc = 0x1E88DCu;
    // 0x1e88dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e88dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e88e0u;
}
