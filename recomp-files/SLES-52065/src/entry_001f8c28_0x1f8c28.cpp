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

// Function: entry_001f8c28
// Address: 0x1f8c28 - 0x1f8c44
void entry_001f8c28_0x1f8c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8c28_0x1f8c28");
#endif

    ctx->pc = 0x1f8c28u;

    // 0x1f8c28: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f8c2c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1f8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1f8c30: 0x8c451628  lw          $a1, 0x1628($v0)
    ctx->pc = 0x1f8c30u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x391628u));
    // 0x1f8c34: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8C34u;
    {
        const bool branch_taken_0x1f8c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C34u;
        // 0x1f8c38: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c34) {
            ctx->pc = 0x1F8C44u;
            return;
        }
    }
    ctx->pc = 0x1F8C3Cu;
    // 0x1f8c3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f8c40: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f8c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1f8c44u;
}
