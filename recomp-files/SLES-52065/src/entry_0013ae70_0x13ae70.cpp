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

// Function: entry_0013ae70
// Address: 0x13ae70 - 0x13ae78
void entry_0013ae70_0x13ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ae70_0x13ae70");
#endif

    ctx->pc = 0x13ae70u;

    // 0x13ae70: 0x1540fff4  bnez        $t2, . + 4 + (-0xC << 2)
    ctx->pc = 0x13AE70u;
    {
        const bool branch_taken_0x13ae70 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ae70) {
            ctx->pc = 0x13AE44u;
            return;
        }
    }
    ctx->pc = 0x13AE78u;
}
