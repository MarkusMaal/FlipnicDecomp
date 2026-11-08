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

// Function: entry_001433e8
// Address: 0x1433e8 - 0x143400
void entry_001433e8_0x1433e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001433e8_0x1433e8");
#endif

    ctx->pc = 0x1433e8u;

    // 0x1433e8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1433e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1433ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1433ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1433f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1433F0u;
    {
        const bool branch_taken_0x1433f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1433f0) {
            ctx->pc = 0x143400u;
            return;
        }
    }
    ctx->pc = 0x1433F8u;
    // 0x1433f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1433F8u;
    {
        const bool branch_taken_0x1433f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433F8u;
        // 0x1433fc: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433f8) {
            ctx->pc = 0x143414u;
            return;
        }
    }
    ctx->pc = 0x143400u;
}
