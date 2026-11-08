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

// Function: entry_0015b770
// Address: 0x15b770 - 0x15b778
void entry_0015b770_0x15b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b770_0x15b770");
#endif

    ctx->pc = 0x15b770u;

    // 0x15b770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B770u;
    {
        const bool branch_taken_0x15b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B770u;
        // 0x15b774: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b770) {
            ctx->pc = 0x15B780u;
            return;
        }
    }
    ctx->pc = 0x15B778u;
}
