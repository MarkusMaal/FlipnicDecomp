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

// Function: entry_0013ade4
// Address: 0x13ade4 - 0x13adf0
void entry_0013ade4_0x13ade4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ade4_0x13ade4");
#endif

    ctx->pc = 0x13ade4u;

    // 0x13ade4: 0x0  nop
    ctx->pc = 0x13ade4u;
    // NOP
    // 0x13ade8: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13ADE8u;
    {
        const bool branch_taken_0x13ade8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ade8) {
            ctx->pc = 0x13ADA0u;
            return;
        }
    }
    ctx->pc = 0x13ADF0u;
}
