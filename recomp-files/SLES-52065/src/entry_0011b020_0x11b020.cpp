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

// Function: entry_0011b020
// Address: 0x11b020 - 0x11b02c
void entry_0011b020_0x11b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b020_0x11b020");
#endif

    ctx->pc = 0x11b020u;

    // 0x11b020: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x11b020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x11b024: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x11B024u;
    {
        const bool branch_taken_0x11b024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B024u;
        // 0x11b028: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b024) {
            ctx->pc = 0x11AFBCu;
            return;
        }
    }
    ctx->pc = 0x11B02Cu;
}
