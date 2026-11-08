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

// Function: entry_001f8c44
// Address: 0x1f8c44 - 0x1f8c60
void entry_001f8c44_0x1f8c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8c44_0x1f8c44");
#endif

    ctx->pc = 0x1f8c44u;

    // 0x1f8c44: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f8c48: 0x8c43162c  lw          $v1, 0x162C($v0)
    ctx->pc = 0x1f8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39162Cu));
    // 0x1f8c4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8C4Cu;
    {
        const bool branch_taken_0x1f8c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C4Cu;
        // 0x1f8c50: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c4c) {
            ctx->pc = 0x1F8C60u;
            return;
        }
    }
    ctx->pc = 0x1F8C54u;
    // 0x1f8c54: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f8c58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f8c5c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f8c60u;
}
