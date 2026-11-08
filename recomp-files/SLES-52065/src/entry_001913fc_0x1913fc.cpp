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

// Function: entry_001913fc
// Address: 0x1913fc - 0x19140c
void entry_001913fc_0x1913fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001913fc_0x1913fc");
#endif

    ctx->pc = 0x1913fcu;

    // 0x1913fc: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x1913FCu;
    {
        const bool branch_taken_0x1913fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1913fc) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191404u;
    // 0x191404: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x191404u;
    {
        const bool branch_taken_0x191404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191404u;
        // 0x191408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191404) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x19140Cu;
}
