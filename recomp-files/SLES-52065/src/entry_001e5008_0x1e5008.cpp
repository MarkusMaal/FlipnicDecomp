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

// Function: entry_001e5008
// Address: 0x1e5008 - 0x1e5020
void entry_001e5008_0x1e5008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5008_0x1e5008");
#endif

    ctx->pc = 0x1e5008u;

    // 0x1e5008: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x1e5008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e500c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e5010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5010u;
    {
        const bool branch_taken_0x1e5010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5010u;
        // 0x1e5014: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5010) {
            ctx->pc = 0x1E5020u;
            return;
        }
    }
    ctx->pc = 0x1E5018u;
    // 0x1e5018: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E5018u;
    {
        const bool branch_taken_0x1e5018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5018) {
            ctx->pc = 0x1E50BCu;
            return;
        }
    }
    ctx->pc = 0x1E5020u;
}
