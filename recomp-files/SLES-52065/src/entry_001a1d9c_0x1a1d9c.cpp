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

// Function: entry_001a1d9c
// Address: 0x1a1d9c - 0x1a1dac
void entry_001a1d9c_0x1a1d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1d9c_0x1a1d9c");
#endif

    ctx->pc = 0x1a1d9cu;

    // 0x1a1d9c: 0x8e820690  lw          $v0, 0x690($s4)
    ctx->pc = 0x1a1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x1a1da0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1da4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1A1DA4u;
    {
        const bool branch_taken_0x1a1da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DA4u;
        // 0x1a1da8: 0xae820690  sw          $v0, 0x690($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1da4) {
            ctx->pc = 0x1A1F88u;
            return;
        }
    }
    ctx->pc = 0x1A1DACu;
}
