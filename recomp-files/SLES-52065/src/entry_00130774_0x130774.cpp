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

// Function: entry_00130774
// Address: 0x130774 - 0x130780
void entry_00130774_0x130774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130774_0x130774");
#endif

    ctx->pc = 0x130774u;

    // 0x130774: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x130774u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x130778: 0x1613ffce  bne         $s0, $s3, . + 4 + (-0x32 << 2)
    ctx->pc = 0x130778u;
    {
        const bool branch_taken_0x130778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x13077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130778u;
        // 0x13077c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130778) {
            ctx->pc = 0x1306B4u;
            return;
        }
    }
    ctx->pc = 0x130780u;
}
