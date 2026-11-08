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

// Function: entry_001f7e84
// Address: 0x1f7e84 - 0x1f7e94
void entry_001f7e84_0x1f7e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7e84_0x1f7e84");
#endif

    ctx->pc = 0x1f7e84u;

    // 0x1f7e84: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F7E84u;
    {
        const bool branch_taken_0x1f7e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E84u;
        // 0x1f7e88: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e84) {
            ctx->pc = 0x1F7DF8u;
            return;
        }
    }
    ctx->pc = 0x1F7E8Cu;
    // 0x1f7e8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7E8Cu;
    {
        const bool branch_taken_0x1f7e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E8Cu;
        // 0x1f7e90: 0xae20bb48  sw          $zero, -0x44B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294949704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e8c) {
            ctx->pc = 0x1F7E9Cu;
            return;
        }
    }
    ctx->pc = 0x1F7E94u;
}
