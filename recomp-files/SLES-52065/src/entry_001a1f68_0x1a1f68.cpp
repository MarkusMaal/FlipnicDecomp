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

// Function: entry_001a1f68
// Address: 0x1a1f68 - 0x1a1f78
void entry_001a1f68_0x1a1f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1f68_0x1a1f68");
#endif

    ctx->pc = 0x1a1f68u;

    // 0x1a1f68: 0x8e820690  lw          $v0, 0x690($s4)
    ctx->pc = 0x1a1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x1a1f6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1f70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1F70u;
    {
        const bool branch_taken_0x1a1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F70u;
        // 0x1a1f74: 0xae820690  sw          $v0, 0x690($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f70) {
            ctx->pc = 0x1A1F88u;
            return;
        }
    }
    ctx->pc = 0x1A1F78u;
}
