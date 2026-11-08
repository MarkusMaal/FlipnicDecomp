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

// Function: entry_0019fd64
// Address: 0x19fd64 - 0x19fd70
void entry_0019fd64_0x19fd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd64_0x19fd64");
#endif

    ctx->pc = 0x19fd64u;

    // 0x19fd64: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fd68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FD68u;
    {
        const bool branch_taken_0x19fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD68u;
        // 0x19fd6c: 0x8c502830  lw          $s0, 0x2830($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd68) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FD70u;
}
