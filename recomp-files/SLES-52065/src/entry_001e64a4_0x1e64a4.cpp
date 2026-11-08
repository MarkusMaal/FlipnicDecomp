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

// Function: entry_001e64a4
// Address: 0x1e64a4 - 0x1e64ac
void entry_001e64a4_0x1e64a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e64a4_0x1e64a4");
#endif

    ctx->pc = 0x1e64a4u;

    // 0x1e64a4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E64A4u;
    {
        const bool branch_taken_0x1e64a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64A4u;
        // 0x1e64a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64a4) {
            ctx->pc = 0x1E6504u;
            return;
        }
    }
    ctx->pc = 0x1E64ACu;
}
