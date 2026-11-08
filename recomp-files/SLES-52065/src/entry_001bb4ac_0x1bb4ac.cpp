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

// Function: entry_001bb4ac
// Address: 0x1bb4ac - 0x1bb4b8
void entry_001bb4ac_0x1bb4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb4ac_0x1bb4ac");
#endif

    ctx->pc = 0x1bb4acu;

    // 0x1bb4ac: 0x0  nop
    ctx->pc = 0x1bb4acu;
    // NOP
    // 0x1bb4b0: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1BB4B0u;
    {
        const bool branch_taken_0x1bb4b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb4b0) {
            ctx->pc = 0x1BB480u;
            return;
        }
    }
    ctx->pc = 0x1BB4B8u;
}
