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

// Function: entry_001eac3c
// Address: 0x1eac3c - 0x1eac44
void entry_001eac3c_0x1eac3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac3c_0x1eac3c");
#endif

    ctx->pc = 0x1eac3cu;

    // 0x1eac3c: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1EAC3Cu;
    {
        const bool branch_taken_0x1eac3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC3Cu;
        // 0x1eac40: 0x1272021  addu        $a0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac3c) {
            ctx->pc = 0x1EABE0u;
            return;
        }
    }
    ctx->pc = 0x1EAC44u;
}
