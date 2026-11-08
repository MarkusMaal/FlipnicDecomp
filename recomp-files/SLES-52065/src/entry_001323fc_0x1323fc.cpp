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

// Function: entry_001323fc
// Address: 0x1323fc - 0x13241c
void entry_001323fc_0x1323fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001323fc_0x1323fc");
#endif

    ctx->pc = 0x1323fcu;

    // 0x1323fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1323fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132400: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x132400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x132404: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x132404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x132408: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x132408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x13240c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13240cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x132410: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x132410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x132414: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x132414u;
    {
        const bool branch_taken_0x132414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132414u;
        // 0x132418: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132414) {
            ctx->pc = 0x132434u;
            return;
        }
    }
    ctx->pc = 0x13241Cu;
}
