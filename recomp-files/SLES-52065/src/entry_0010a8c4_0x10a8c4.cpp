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

// Function: entry_0010a8c4
// Address: 0x10a8c4 - 0x10a8cc
void entry_0010a8c4_0x10a8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a8c4_0x10a8c4");
#endif

    ctx->pc = 0x10a8c4u;

    // 0x10a8c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10A8C4u;
    {
        const bool branch_taken_0x10a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a8c4) {
            ctx->pc = 0x10A90Cu;
            return;
        }
    }
    ctx->pc = 0x10A8CCu;
}
