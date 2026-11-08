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

// Function: entry_00191f74
// Address: 0x191f74 - 0x191f88
void entry_00191f74_0x191f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191f74_0x191f74");
#endif

    ctx->pc = 0x191f74u;

    // 0x191f74: 0x0  nop
    ctx->pc = 0x191f74u;
    // NOP
    // 0x191f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191F78u;
    {
        const bool branch_taken_0x191f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f78) {
            ctx->pc = 0x191F88u;
            return;
        }
    }
    ctx->pc = 0x191F80u;
    // 0x191f80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191F80u;
    {
        const bool branch_taken_0x191f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F80u;
        // 0x191f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f80) {
            ctx->pc = 0x191F8Cu;
            return;
        }
    }
    ctx->pc = 0x191F88u;
}
