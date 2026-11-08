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

// Function: entry_001098b0
// Address: 0x1098b0 - 0x1098b8
void entry_001098b0_0x1098b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001098b0_0x1098b0");
#endif

    ctx->pc = 0x1098b0u;

    // 0x1098b0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1098B0u;
    {
        const bool branch_taken_0x1098b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098B0u;
        // 0x1098b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098b0) {
            ctx->pc = 0x1099F8u;
            return;
        }
    }
    ctx->pc = 0x1098B8u;
}
