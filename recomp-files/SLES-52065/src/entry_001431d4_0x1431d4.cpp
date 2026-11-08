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

// Function: entry_001431d4
// Address: 0x1431d4 - 0x1431dc
void entry_001431d4_0x1431d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001431d4_0x1431d4");
#endif

    ctx->pc = 0x1431d4u;

    // 0x1431d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1431D4u;
    {
        const bool branch_taken_0x1431d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431D4u;
        // 0x1431d8: 0xa080002b  sb          $zero, 0x2B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431d4) {
            ctx->pc = 0x1431ECu;
            return;
        }
    }
    ctx->pc = 0x1431DCu;
}
