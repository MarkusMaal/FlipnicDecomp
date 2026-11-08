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

// Function: entry_001f9de8
// Address: 0x1f9de8 - 0x1f9df0
void entry_001f9de8_0x1f9de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9de8_0x1f9de8");
#endif

    ctx->pc = 0x1f9de8u;

    // 0x1f9de8: 0x601008e  bgez        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1F9DE8u;
    {
        const bool branch_taken_0x1f9de8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DE8u;
        // 0x1f9dec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9de8) {
            ctx->pc = 0x1FA024u;
            return;
        }
    }
    ctx->pc = 0x1F9DF0u;
}
