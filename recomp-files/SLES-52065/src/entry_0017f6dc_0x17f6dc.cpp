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

// Function: entry_0017f6dc
// Address: 0x17f6dc - 0x17f6e8
void entry_0017f6dc_0x17f6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f6dc_0x17f6dc");
#endif

    ctx->pc = 0x17f6dcu;

    // 0x17f6dc: 0x0  nop
    ctx->pc = 0x17f6dcu;
    // NOP
    // 0x17f6e0: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17F6E0u;
    {
        const bool branch_taken_0x17f6e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f6e0) {
            ctx->pc = 0x17F6B0u;
            return;
        }
    }
    ctx->pc = 0x17F6E8u;
}
