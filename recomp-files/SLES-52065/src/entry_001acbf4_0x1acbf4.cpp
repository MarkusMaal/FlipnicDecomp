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

// Function: entry_001acbf4
// Address: 0x1acbf4 - 0x1acbfc
void entry_001acbf4_0x1acbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acbf4_0x1acbf4");
#endif

    ctx->pc = 0x1acbf4u;

    // 0x1acbf4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1ACBF4u;
    {
        const bool branch_taken_0x1acbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBF4u;
        // 0x1acbf8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbf4) {
            ctx->pc = 0x1ACD3Cu;
            return;
        }
    }
    ctx->pc = 0x1ACBFCu;
}
