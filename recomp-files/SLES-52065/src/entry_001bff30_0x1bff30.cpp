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

// Function: entry_001bff30
// Address: 0x1bff30 - 0x1bff38
void entry_001bff30_0x1bff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bff30_0x1bff30");
#endif

    ctx->pc = 0x1bff30u;

    // 0x1bff30: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1BFF30u;
    {
        const bool branch_taken_0x1bff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF30u;
        // 0x1bff34: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff30) {
            ctx->pc = 0x1C0030u;
            return;
        }
    }
    ctx->pc = 0x1BFF38u;
}
