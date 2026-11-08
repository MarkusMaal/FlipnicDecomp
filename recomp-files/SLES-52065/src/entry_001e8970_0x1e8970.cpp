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

// Function: entry_001e8970
// Address: 0x1e8970 - 0x1e8980
void entry_001e8970_0x1e8970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8970_0x1e8970");
#endif

    ctx->pc = 0x1e8970u;

    // 0x1e8970: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8970u;
    {
        const bool branch_taken_0x1e8970 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8970u;
        // 0x1e8974: 0x83843  sra         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8970) {
            ctx->pc = 0x1E8980u;
            return;
        }
    }
    ctx->pc = 0x1E8978u;
    // 0x1e8978: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1e8978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e897c: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x1e897cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1e8980u;
}
