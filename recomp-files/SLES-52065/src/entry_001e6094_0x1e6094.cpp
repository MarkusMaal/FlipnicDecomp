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

// Function: entry_001e6094
// Address: 0x1e6094 - 0x1e609c
void entry_001e6094_0x1e6094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6094_0x1e6094");
#endif

    ctx->pc = 0x1e6094u;

    // 0x1e6094: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1E6094u;
    {
        const bool branch_taken_0x1e6094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6094u;
        // 0x1e6098: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6094) {
            ctx->pc = 0x1E61C4u;
            return;
        }
    }
    ctx->pc = 0x1E609Cu;
}
