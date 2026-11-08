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

// Function: entry_001801e4
// Address: 0x1801e4 - 0x1801f4
void entry_001801e4_0x1801e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001801e4_0x1801e4");
#endif

    ctx->pc = 0x1801e4u;

    // 0x1801e4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1801e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1801e8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1801e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1801ec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1801ECu;
    {
        const bool branch_taken_0x1801ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801ECu;
        // 0x1801f0: 0xaf83865c  sw          $v1, -0x79A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801ec) {
            ctx->pc = 0x180308u;
            return;
        }
    }
    ctx->pc = 0x1801F4u;
}
