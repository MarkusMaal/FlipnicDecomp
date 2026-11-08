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

// Function: entry_001e046c
// Address: 0x1e046c - 0x1e0488
void entry_001e046c_0x1e046c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e046c_0x1e046c");
#endif

    ctx->pc = 0x1e046cu;

    // 0x1e046c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E046Cu;
    {
        const bool branch_taken_0x1e046c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1e046c) {
            ctx->pc = 0x1E04A8u;
            return;
        }
    }
    ctx->pc = 0x1E0474u;
    // 0x1e0474: 0x92020069  lbu         $v0, 0x69($s0)
    ctx->pc = 0x1e0474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x1e0478: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1e0478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1e047c: 0xa2020068  sb          $v0, 0x68($s0)
    ctx->pc = 0x1e047cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e0480: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0480u;
    {
        const bool branch_taken_0x1e0480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0480u;
        // 0x1e0484: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0480) {
            ctx->pc = 0x1E04A8u;
            return;
        }
    }
    ctx->pc = 0x1E0488u;
}
