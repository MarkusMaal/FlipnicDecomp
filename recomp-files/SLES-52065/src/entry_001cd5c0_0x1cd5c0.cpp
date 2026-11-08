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

// Function: entry_001cd5c0
// Address: 0x1cd5c0 - 0x1cd5c8
void entry_001cd5c0_0x1cd5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd5c0_0x1cd5c0");
#endif

    ctx->pc = 0x1cd5c0u;

    // 0x1cd5c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD5C0u;
    {
        const bool branch_taken_0x1cd5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5C0u;
        // 0x1cd5c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5c0) {
            ctx->pc = 0x1CD5E0u;
            return;
        }
    }
    ctx->pc = 0x1CD5C8u;
}
