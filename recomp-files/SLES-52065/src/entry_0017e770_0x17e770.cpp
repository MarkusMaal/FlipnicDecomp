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

// Function: entry_0017e770
// Address: 0x17e770 - 0x17e778
void entry_0017e770_0x17e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e770_0x17e770");
#endif

    ctx->pc = 0x17e770u;

    // 0x17e770: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17E770u;
    {
        const bool branch_taken_0x17e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E770u;
        // 0x17e774: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e770) {
            ctx->pc = 0x17E7ECu;
            return;
        }
    }
    ctx->pc = 0x17E778u;
}
