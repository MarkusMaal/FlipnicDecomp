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

// Function: entry_00155a34
// Address: 0x155a34 - 0x155a3c
void entry_00155a34_0x155a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155a34_0x155a34");
#endif

    ctx->pc = 0x155a34u;

    // 0x155a34: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x155A34u;
    {
        const bool branch_taken_0x155a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155a34) {
            ctx->pc = 0x155B80u;
            return;
        }
    }
    ctx->pc = 0x155A3Cu;
}
