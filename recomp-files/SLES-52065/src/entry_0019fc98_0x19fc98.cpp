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

// Function: entry_0019fc98
// Address: 0x19fc98 - 0x19fca8
void entry_0019fc98_0x19fc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc98_0x19fc98");
#endif

    ctx->pc = 0x19fc98u;

    // 0x19fc98: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x19fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19fc9c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x19fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19fca0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x19FCA0u;
    {
        const bool branch_taken_0x19fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCA0u;
        // 0x19fca4: 0x8c5002dc  lw          $s0, 0x2DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fca0) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FCA8u;
}
