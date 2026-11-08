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

// Function: entry_0016c338
// Address: 0x16c338 - 0x16c340
void entry_0016c338_0x16c338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c338_0x16c338");
#endif

    ctx->pc = 0x16c338u;

    // 0x16c338: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16C338u;
    {
        const bool branch_taken_0x16c338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C338u;
        // 0x16c33c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c338) {
            ctx->pc = 0x16C360u;
            return;
        }
    }
    ctx->pc = 0x16C340u;
}
