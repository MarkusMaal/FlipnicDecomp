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

// Function: entry_001d4758
// Address: 0x1d4758 - 0x1d4768
void entry_001d4758_0x1d4758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4758_0x1d4758");
#endif

    ctx->pc = 0x1d4758u;

    // 0x1d4758: 0x8e020240  lw          $v0, 0x240($s0)
    ctx->pc = 0x1d4758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1d475c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x1d475cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x1d4760: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D4760u;
    {
        const bool branch_taken_0x1d4760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4760u;
        // 0x1d4764: 0xae020248  sw          $v0, 0x248($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4760) {
            ctx->pc = 0x1D47E8u;
            return;
        }
    }
    ctx->pc = 0x1D4768u;
}
