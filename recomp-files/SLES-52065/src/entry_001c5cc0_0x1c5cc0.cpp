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

// Function: entry_001c5cc0
// Address: 0x1c5cc0 - 0x1c5ce0
void entry_001c5cc0_0x1c5cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5cc0_0x1c5cc0");
#endif

    ctx->pc = 0x1c5cc0u;

    // 0x1c5cc0: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1C5CC0u;
    {
        const bool branch_taken_0x1c5cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cc0) {
            ctx->pc = 0x1C5EC0u;
            return;
        }
    }
    ctx->pc = 0x1C5CC8u;
    // 0x1c5cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ccc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c5cd0: 0xa243006d  sb          $v1, 0x6D($s2)
    ctx->pc = 0x1c5cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 109), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5cd4: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x1c5cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x1c5cd8: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1C5CD8u;
    {
        const bool branch_taken_0x1c5cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CD8u;
        // 0x1c5cdc: 0xae400074  sw          $zero, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cd8) {
            ctx->pc = 0x1C5EC0u;
            return;
        }
    }
    ctx->pc = 0x1C5CE0u;
}
