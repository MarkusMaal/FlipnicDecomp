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

// Function: entry_001c90b0
// Address: 0x1c90b0 - 0x1c90b8
void entry_001c90b0_0x1c90b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c90b0_0x1c90b0");
#endif

    ctx->pc = 0x1c90b0u;

    // 0x1c90b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C90B0u;
    {
        const bool branch_taken_0x1c90b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90B0u;
        // 0x1c90b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90b0) {
            ctx->pc = 0x1C90C0u;
            return;
        }
    }
    ctx->pc = 0x1C90B8u;
}
