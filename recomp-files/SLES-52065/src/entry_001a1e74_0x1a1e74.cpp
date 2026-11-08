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

// Function: entry_001a1e74
// Address: 0x1a1e74 - 0x1a1e84
void entry_001a1e74_0x1a1e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1e74_0x1a1e74");
#endif

    ctx->pc = 0x1a1e74u;

    // 0x1a1e74: 0x8e820690  lw          $v0, 0x690($s4)
    ctx->pc = 0x1a1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x1a1e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1e7c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1A1E7Cu;
    {
        const bool branch_taken_0x1a1e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E7Cu;
        // 0x1a1e80: 0xae820690  sw          $v0, 0x690($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e7c) {
            ctx->pc = 0x1A1F88u;
            return;
        }
    }
    ctx->pc = 0x1A1E84u;
}
