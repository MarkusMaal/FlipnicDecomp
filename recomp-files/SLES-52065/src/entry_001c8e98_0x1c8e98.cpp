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

// Function: entry_001c8e98
// Address: 0x1c8e98 - 0x1c8eac
void entry_001c8e98_0x1c8e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8e98_0x1c8e98");
#endif

    ctx->pc = 0x1c8e98u;

    // 0x1c8e98: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1c8e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c8e9c: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c8ea0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1c8ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8ea4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C8EA4u;
    {
        const bool branch_taken_0x1c8ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EA4u;
        // 0x1c8ea8: 0xa043282b  sb          $v1, 0x282B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10283), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ea4) {
            ctx->pc = 0x1C8F1Cu;
            return;
        }
    }
    ctx->pc = 0x1C8EACu;
}
