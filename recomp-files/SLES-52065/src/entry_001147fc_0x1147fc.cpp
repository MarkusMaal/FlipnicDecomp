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

// Function: entry_001147fc
// Address: 0x1147fc - 0x11480c
void entry_001147fc_0x1147fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001147fc_0x1147fc");
#endif

    ctx->pc = 0x1147fcu;

    // 0x1147fc: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1147fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x114800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x114804: 0x100004de  b           . + 4 + (0x4DE << 2)
    ctx->pc = 0x114804u;
    {
        const bool branch_taken_0x114804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114804u;
        // 0x114808: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114804) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x11480Cu;
}
