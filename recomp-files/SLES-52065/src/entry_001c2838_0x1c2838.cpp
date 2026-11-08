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

// Function: entry_001c2838
// Address: 0x1c2838 - 0x1c2840
void entry_001c2838_0x1c2838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2838_0x1c2838");
#endif

    ctx->pc = 0x1c2838u;

    // 0x1c2838: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x1C2838u;
    {
        const bool branch_taken_0x1c2838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2838u;
        // 0x1c283c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2838) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2840u;
}
