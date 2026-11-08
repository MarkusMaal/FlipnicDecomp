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

// Function: entry_001e6b88
// Address: 0x1e6b88 - 0x1e6b98
void entry_001e6b88_0x1e6b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6b88_0x1e6b88");
#endif

    ctx->pc = 0x1e6b88u;

    // 0x1e6b88: 0xc7082b  sltu        $at, $a2, $a3
    ctx->pc = 0x1e6b88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1e6b8c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6B8Cu;
    {
        const bool branch_taken_0x1e6b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B8Cu;
        // 0x1e6b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b8c) {
            ctx->pc = 0x1E6B98u;
            return;
        }
    }
    ctx->pc = 0x1E6B94u;
    // 0x1e6b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1e6b98u;
}
