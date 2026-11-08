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

// Function: entry_001214e4
// Address: 0x1214e4 - 0x1214f8
void entry_001214e4_0x1214e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001214e4_0x1214e4");
#endif

    ctx->pc = 0x1214e4u;

    // 0x1214e4: 0x0  nop
    ctx->pc = 0x1214e4u;
    // NOP
    // 0x1214e8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1214e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1214ec: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1214ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1214f0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1214F0u;
    {
        const bool branch_taken_0x1214f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214F0u;
        // 0x1214f4: 0xaec30004  sw          $v1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214f0) {
            ctx->pc = 0x121658u;
            return;
        }
    }
    ctx->pc = 0x1214F8u;
}
