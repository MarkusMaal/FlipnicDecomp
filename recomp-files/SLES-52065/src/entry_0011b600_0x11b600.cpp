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

// Function: entry_0011b600
// Address: 0x11b600 - 0x11b610
void entry_0011b600_0x11b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b600_0x11b600");
#endif

    ctx->pc = 0x11b600u;

    // 0x11b600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b604: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x11b604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b608: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11B608u;
    {
        const bool branch_taken_0x11b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B608u;
        // 0x11b60c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b608) {
            ctx->pc = 0x11B630u;
            return;
        }
    }
    ctx->pc = 0x11B610u;
}
