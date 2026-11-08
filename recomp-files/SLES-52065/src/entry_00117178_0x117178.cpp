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

// Function: entry_00117178
// Address: 0x117178 - 0x117180
void entry_00117178_0x117178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117178_0x117178");
#endif

    ctx->pc = 0x117178u;

    // 0x117178: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x117178u;
    {
        const bool branch_taken_0x117178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117178) {
            ctx->pc = 0x1171FCu;
            return;
        }
    }
    ctx->pc = 0x117180u;
}
