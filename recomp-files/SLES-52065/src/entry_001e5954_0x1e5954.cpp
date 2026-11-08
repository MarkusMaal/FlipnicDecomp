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

// Function: entry_001e5954
// Address: 0x1e5954 - 0x1e5964
void entry_001e5954_0x1e5954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5954_0x1e5954");
#endif

    ctx->pc = 0x1e5954u;

    // 0x1e5954: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E5954u;
    {
        const bool branch_taken_0x1e5954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5954) {
            ctx->pc = 0x1E5998u;
            return;
        }
    }
    ctx->pc = 0x1E595Cu;
    // 0x1e595c: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1E595Cu;
    {
        const bool branch_taken_0x1e595c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1e595c) {
            ctx->pc = 0x1E5998u;
            return;
        }
    }
    ctx->pc = 0x1E5964u;
}
