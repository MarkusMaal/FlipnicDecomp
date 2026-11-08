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

// Function: entry_001e62f0
// Address: 0x1e62f0 - 0x1e6300
void entry_001e62f0_0x1e62f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e62f0_0x1e62f0");
#endif

    ctx->pc = 0x1e62f0u;

    // 0x1e62f0: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1e62f4: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1e62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e62f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E62F8u;
    {
        const bool branch_taken_0x1e62f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62F8u;
        // 0x1e62fc: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62f8) {
            ctx->pc = 0x1E630Cu;
            return;
        }
    }
    ctx->pc = 0x1E6300u;
}
