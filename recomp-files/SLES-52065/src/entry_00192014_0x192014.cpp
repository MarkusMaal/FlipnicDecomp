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

// Function: entry_00192014
// Address: 0x192014 - 0x192028
void entry_00192014_0x192014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192014_0x192014");
#endif

    ctx->pc = 0x192014u;

    // 0x192014: 0x0  nop
    ctx->pc = 0x192014u;
    // NOP
    // 0x192018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192018u;
    {
        const bool branch_taken_0x192018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192018) {
            ctx->pc = 0x192028u;
            return;
        }
    }
    ctx->pc = 0x192020u;
    // 0x192020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192020u;
    {
        const bool branch_taken_0x192020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192020u;
        // 0x192024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192020) {
            ctx->pc = 0x19202Cu;
            return;
        }
    }
    ctx->pc = 0x192028u;
}
