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

// Function: entry_001e4cb8
// Address: 0x1e4cb8 - 0x1e4cc8
void entry_001e4cb8_0x1e4cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4cb8_0x1e4cb8");
#endif

    ctx->pc = 0x1e4cb8u;

    // 0x1e4cb8: 0x10a00059  beqz        $a1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1E4CB8u;
    {
        const bool branch_taken_0x1e4cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CB8u;
        // 0x1e4cbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cb8) {
            ctx->pc = 0x1E4E20u;
            return;
        }
    }
    ctx->pc = 0x1E4CC0u;
    // 0x1e4cc0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1E4CC0u;
    {
        const bool branch_taken_0x1e4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CC0u;
        // 0x1e4cc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cc0) {
            ctx->pc = 0x1E4E30u;
            return;
        }
    }
    ctx->pc = 0x1E4CC8u;
}
