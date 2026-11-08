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

// Function: entry_001699e4
// Address: 0x1699e4 - 0x1699f4
void entry_001699e4_0x1699e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001699e4_0x1699e4");
#endif

    ctx->pc = 0x1699e4u;

    // 0x1699e4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1699E4u;
    {
        const bool branch_taken_0x1699e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1699e4) {
            ctx->pc = 0x1699F4u;
            return;
        }
    }
    ctx->pc = 0x1699ECu;
    // 0x1699ec: 0x14e60002  bne         $a3, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1699ECu;
    {
        const bool branch_taken_0x1699ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1699ec) {
            ctx->pc = 0x1699F8u;
            return;
        }
    }
    ctx->pc = 0x1699F4u;
}
