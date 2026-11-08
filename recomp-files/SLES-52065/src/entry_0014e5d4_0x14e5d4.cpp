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

// Function: entry_0014e5d4
// Address: 0x14e5d4 - 0x14e5e0
void entry_0014e5d4_0x14e5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e5d4_0x14e5d4");
#endif

    ctx->pc = 0x14e5d4u;

    // 0x14e5d4: 0x0  nop
    ctx->pc = 0x14e5d4u;
    // NOP
    // 0x14e5d8: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x14E5D8u;
    {
        const bool branch_taken_0x14e5d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e5d8) {
            ctx->pc = 0x14E648u;
            return;
        }
    }
    ctx->pc = 0x14E5E0u;
}
