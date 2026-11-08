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

// Function: entry_0013ee68
// Address: 0x13ee68 - 0x13ee70
void entry_0013ee68_0x13ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ee68_0x13ee68");
#endif

    ctx->pc = 0x13ee68u;

    // 0x13ee68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13EE68u;
    {
        const bool branch_taken_0x13ee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE68u;
        // 0x13ee6c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee68) {
            ctx->pc = 0x13EE7Cu;
            return;
        }
    }
    ctx->pc = 0x13EE70u;
}
