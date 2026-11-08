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

// Function: entry_001de76c
// Address: 0x1de76c - 0x1de77c
void entry_001de76c_0x1de76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de76c_0x1de76c");
#endif

    ctx->pc = 0x1de76cu;

    // 0x1de76c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1de76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1de770: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1de770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1de774: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE774u;
    {
        const bool branch_taken_0x1de774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1de774) {
            ctx->pc = 0x1DE778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE774u;
            // 0x1de778: 0xae030070  sw          $v1, 0x70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE77Cu;
            return;
        }
    }
    ctx->pc = 0x1DE77Cu;
}
