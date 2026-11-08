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

// Function: entry_001913e8
// Address: 0x1913e8 - 0x1913f8
void entry_001913e8_0x1913e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001913e8_0x1913e8");
#endif

    ctx->pc = 0x1913e8u;

    // 0x1913e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1913E8u;
    {
        const bool branch_taken_0x1913e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1913e8) {
            ctx->pc = 0x1913F8u;
            return;
        }
    }
    ctx->pc = 0x1913F0u;
    // 0x1913f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1913F0u;
    {
        const bool branch_taken_0x1913f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913F0u;
        // 0x1913f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913f0) {
            ctx->pc = 0x1913FCu;
            return;
        }
    }
    ctx->pc = 0x1913F8u;
}
