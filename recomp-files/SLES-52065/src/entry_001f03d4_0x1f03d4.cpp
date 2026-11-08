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

// Function: entry_001f03d4
// Address: 0x1f03d4 - 0x1f03e4
void entry_001f03d4_0x1f03d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f03d4_0x1f03d4");
#endif

    ctx->pc = 0x1f03d4u;

    // 0x1f03d4: 0x1222002c  beq         $s1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F03D4u;
    {
        const bool branch_taken_0x1f03d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03D4u;
        // 0x1f03d8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03d4) {
            ctx->pc = 0x1F0488u;
            return;
        }
    }
    ctx->pc = 0x1F03DCu;
    // 0x1f03dc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1F03DCu;
    {
        const bool branch_taken_0x1f03dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03DCu;
        // 0x1f03e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03dc) {
            ctx->pc = 0x1F04C0u;
            return;
        }
    }
    ctx->pc = 0x1F03E4u;
}
