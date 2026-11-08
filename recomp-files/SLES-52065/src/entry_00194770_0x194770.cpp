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

// Function: entry_00194770
// Address: 0x194770 - 0x194778
void entry_00194770_0x194770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194770_0x194770");
#endif

    ctx->pc = 0x194770u;

    // 0x194770: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x194770u;
    {
        const bool branch_taken_0x194770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194770u;
        // 0x194774: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194770) {
            ctx->pc = 0x194714u;
            return;
        }
    }
    ctx->pc = 0x194778u;
}
