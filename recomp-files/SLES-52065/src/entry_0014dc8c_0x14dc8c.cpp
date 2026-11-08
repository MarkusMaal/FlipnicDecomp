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

// Function: entry_0014dc8c
// Address: 0x14dc8c - 0x14dc98
void entry_0014dc8c_0x14dc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc8c_0x14dc8c");
#endif

    ctx->pc = 0x14dc8cu;

    // 0x14dc8c: 0x0  nop
    ctx->pc = 0x14dc8cu;
    // NOP
    // 0x14dc90: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x14DC90u;
    {
        const bool branch_taken_0x14dc90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dc90) {
            ctx->pc = 0x14DCC0u;
            return;
        }
    }
    ctx->pc = 0x14DC98u;
}
