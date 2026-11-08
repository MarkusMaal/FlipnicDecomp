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

// Function: entry_001baf70
// Address: 0x1baf70 - 0x1baf78
void entry_001baf70_0x1baf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baf70_0x1baf70");
#endif

    ctx->pc = 0x1baf70u;

    // 0x1baf70: 0x16c0ffea  bnez        $s6, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1BAF70u;
    {
        const bool branch_taken_0x1baf70 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baf70) {
            ctx->pc = 0x1BAF1Cu;
            return;
        }
    }
    ctx->pc = 0x1BAF78u;
}
