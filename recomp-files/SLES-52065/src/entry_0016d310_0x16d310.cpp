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

// Function: entry_0016d310
// Address: 0x16d310 - 0x16d31c
void entry_0016d310_0x16d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d310_0x16d310");
#endif

    ctx->pc = 0x16d310u;

    // 0x16d310: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D310u;
    {
        const bool branch_taken_0x16d310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d310) {
            ctx->pc = 0x16D31Cu;
            return;
        }
    }
    ctx->pc = 0x16D318u;
    // 0x16d318: 0xae20022c  sw          $zero, 0x22C($s1)
    ctx->pc = 0x16d318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 0));
    ctx->pc = 0x16d31cu;
}
