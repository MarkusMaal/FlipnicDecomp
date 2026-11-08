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

// Function: entry_001be7ec
// Address: 0x1be7ec - 0x1be7f8
void entry_001be7ec_0x1be7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be7ec_0x1be7ec");
#endif

    ctx->pc = 0x1be7ecu;

    // 0x1be7ec: 0x0  nop
    ctx->pc = 0x1be7ecu;
    // NOP
    // 0x1be7f0: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1BE7F0u;
    {
        const bool branch_taken_0x1be7f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be7f0) {
            ctx->pc = 0x1BE7C0u;
            return;
        }
    }
    ctx->pc = 0x1BE7F8u;
}
