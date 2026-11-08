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

// Function: entry_001878ec
// Address: 0x1878ec - 0x1878f8
void entry_001878ec_0x1878ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001878ec_0x1878ec");
#endif

    ctx->pc = 0x1878ecu;

    // 0x1878ec: 0x0  nop
    ctx->pc = 0x1878ecu;
    // NOP
    // 0x1878f0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1878F0u;
    {
        const bool branch_taken_0x1878f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1878f0) {
            ctx->pc = 0x1878C0u;
            return;
        }
    }
    ctx->pc = 0x1878F8u;
}
