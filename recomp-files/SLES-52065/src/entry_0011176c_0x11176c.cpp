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

// Function: entry_0011176c
// Address: 0x11176c - 0x11177c
void entry_0011176c_0x11176c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011176c_0x11176c");
#endif

    ctx->pc = 0x11176cu;

    // 0x11176c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111774: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x111774u;
    {
        const bool branch_taken_0x111774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111774u;
        // 0x111778: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111774) {
            ctx->pc = 0x1119D4u;
            return;
        }
    }
    ctx->pc = 0x11177Cu;
}
