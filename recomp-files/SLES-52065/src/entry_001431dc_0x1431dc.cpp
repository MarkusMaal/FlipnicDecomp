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

// Function: entry_001431dc
// Address: 0x1431dc - 0x1431e8
void entry_001431dc_0x1431dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001431dc_0x1431dc");
#endif

    ctx->pc = 0x1431dcu;

    // 0x1431dc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1431dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1431e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1431E0u;
    {
        const bool branch_taken_0x1431e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431E0u;
        // 0x1431e4: 0xa080002b  sb          $zero, 0x2B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431e0) {
            ctx->pc = 0x1431ECu;
            return;
        }
    }
    ctx->pc = 0x1431E8u;
}
