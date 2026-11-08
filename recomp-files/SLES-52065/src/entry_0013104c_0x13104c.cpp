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

// Function: entry_0013104c
// Address: 0x13104c - 0x13106c
void entry_0013104c_0x13104c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013104c_0x13104c");
#endif

    ctx->pc = 0x13104cu;

    // 0x13104c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x13104cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131050: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x131050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131054: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x131054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x131058: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x131058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x13105c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131060: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x131060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x131064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131064u;
    {
        const bool branch_taken_0x131064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131064u;
        // 0x131068: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131064) {
            ctx->pc = 0x131084u;
            return;
        }
    }
    ctx->pc = 0x13106Cu;
}
