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

// Function: entry_001915fc
// Address: 0x1915fc - 0x191610
void entry_001915fc_0x1915fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001915fc_0x1915fc");
#endif

    ctx->pc = 0x1915fcu;

    // 0x1915fc: 0x0  nop
    ctx->pc = 0x1915fcu;
    // NOP
    // 0x191600: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191600u;
    {
        const bool branch_taken_0x191600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191600) {
            ctx->pc = 0x191610u;
            return;
        }
    }
    ctx->pc = 0x191608u;
    // 0x191608: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x191608u;
    {
        const bool branch_taken_0x191608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191608u;
        // 0x19160c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191608) {
            ctx->pc = 0x191624u;
            return;
        }
    }
    ctx->pc = 0x191610u;
}
