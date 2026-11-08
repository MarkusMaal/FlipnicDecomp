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

// Function: entry_001aaf30
// Address: 0x1aaf30 - 0x1aaf40
void entry_001aaf30_0x1aaf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf30_0x1aaf30");
#endif

    ctx->pc = 0x1aaf30u;

    // 0x1aaf30: 0x8e8206e8  lw          $v0, 0x6E8($s4)
    ctx->pc = 0x1aaf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1768)));
    // 0x1aaf34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AAF34u;
    {
        const bool branch_taken_0x1aaf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF34u;
        // 0x1aaf38: 0x26020024  addiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf34) {
            ctx->pc = 0x1AAF40u;
            return;
        }
    }
    ctx->pc = 0x1AAF3Cu;
    // 0x1aaf3c: 0xae8206e8  sw          $v0, 0x6E8($s4)
    ctx->pc = 0x1aaf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1768), GPR_U32(ctx, 2));
    ctx->pc = 0x1aaf40u;
}
