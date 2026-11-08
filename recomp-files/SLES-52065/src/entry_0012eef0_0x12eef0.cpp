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

// Function: entry_0012eef0
// Address: 0x12eef0 - 0x12eef8
void entry_0012eef0_0x12eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eef0_0x12eef0");
#endif

    ctx->pc = 0x12eef0u;

    // 0x12eef0: 0x1540fff4  bnez        $t2, . + 4 + (-0xC << 2)
    ctx->pc = 0x12EEF0u;
    {
        const bool branch_taken_0x12eef0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eef0) {
            ctx->pc = 0x12EEC4u;
            return;
        }
    }
    ctx->pc = 0x12EEF8u;
}
