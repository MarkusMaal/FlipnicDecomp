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

// Function: entry_001e9368
// Address: 0x1e9368 - 0x1e9370
void entry_001e9368_0x1e9368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9368_0x1e9368");
#endif

    ctx->pc = 0x1e9368u;

    // 0x1e9368: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1E9368u;
    {
        const bool branch_taken_0x1e9368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9368u;
        // 0x1e936c: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9368) {
            ctx->pc = 0x1E92BCu;
            return;
        }
    }
    ctx->pc = 0x1E9370u;
}
