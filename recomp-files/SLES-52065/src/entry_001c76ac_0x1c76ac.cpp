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

// Function: entry_001c76ac
// Address: 0x1c76ac - 0x1c76b4
void entry_001c76ac_0x1c76ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c76ac_0x1c76ac");
#endif

    ctx->pc = 0x1c76acu;

    // 0x1c76ac: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1C76ACu;
    {
        const bool branch_taken_0x1c76ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76ACu;
        // 0x1c76b0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76ac) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C76B4u;
}
