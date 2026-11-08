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

// Function: entry_001a4738
// Address: 0x1a4738 - 0x1a4748
void entry_001a4738_0x1a4738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4738_0x1a4738");
#endif

    ctx->pc = 0x1a4738u;

    // 0x1a4738: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a4738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a473c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a4740: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A4740u;
    {
        const bool branch_taken_0x1a4740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4740u;
        // 0x1a4744: 0xae220320  sw          $v0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4740) {
            ctx->pc = 0x1A4794u;
            return;
        }
    }
    ctx->pc = 0x1A4748u;
}
