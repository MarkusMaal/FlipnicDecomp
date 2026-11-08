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

// Function: entry_001e0738
// Address: 0x1e0738 - 0x1e0748
void entry_001e0738_0x1e0738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0738_0x1e0738");
#endif

    ctx->pc = 0x1e0738u;

    // 0x1e0738: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1e0738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e073c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e073cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e0740: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1E0740u;
    {
        const bool branch_taken_0x1e0740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0740u;
        // 0x1e0744: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0740) {
            ctx->pc = 0x1E0944u;
            return;
        }
    }
    ctx->pc = 0x1E0748u;
}
