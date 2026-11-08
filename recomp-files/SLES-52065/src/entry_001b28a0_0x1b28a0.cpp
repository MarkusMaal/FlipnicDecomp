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

// Function: entry_001b28a0
// Address: 0x1b28a0 - 0x1b28b8
void entry_001b28a0_0x1b28a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b28a0_0x1b28a0");
#endif

    ctx->pc = 0x1b28a0u;

    // 0x1b28a0: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1b28a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1b28a4: 0x2861000f  slti        $at, $v1, 0xF
    ctx->pc = 0x1b28a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b28a8: 0x142000ab  bnez        $at, . + 4 + (0xAB << 2)
    ctx->pc = 0x1B28A8u;
    {
        const bool branch_taken_0x1b28a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28a8) {
            ctx->pc = 0x1B2B58u;
            return;
        }
    }
    ctx->pc = 0x1B28B0u;
    // 0x1b28b0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1B28B0u;
    {
        const bool branch_taken_0x1b28b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28B0u;
        // 0x1b28b4: 0xae800014  sw          $zero, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28b0) {
            ctx->pc = 0x1B2B58u;
            return;
        }
    }
    ctx->pc = 0x1B28B8u;
}
