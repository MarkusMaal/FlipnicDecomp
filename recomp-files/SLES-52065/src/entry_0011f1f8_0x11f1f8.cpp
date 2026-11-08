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

// Function: entry_0011f1f8
// Address: 0x11f1f8 - 0x11f208
void entry_0011f1f8_0x11f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f1f8_0x11f1f8");
#endif

    ctx->pc = 0x11f1f8u;

    // 0x11f1f8: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x11f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x11f1fc: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x11F1FCu;
    {
        const bool branch_taken_0x11f1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1FCu;
        // 0x11f200: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1fc) {
            ctx->pc = 0x11EFF0u;
            return;
        }
    }
    ctx->pc = 0x11F204u;
    // 0x11f204: 0xae620098  sw          $v0, 0x98($s3)
    ctx->pc = 0x11f204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
    ctx->pc = 0x11f208u;
}
