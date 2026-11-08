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

// Function: entry_00168898
// Address: 0x168898 - 0x1688a0
void entry_00168898_0x168898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168898_0x168898");
#endif

    ctx->pc = 0x168898u;

    // 0x168898: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x168898u;
    {
        const bool branch_taken_0x168898 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x168898) {
            ctx->pc = 0x1688B4u;
            return;
        }
    }
    ctx->pc = 0x1688A0u;
}
