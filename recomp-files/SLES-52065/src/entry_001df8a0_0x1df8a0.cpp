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

// Function: entry_001df8a0
// Address: 0x1df8a0 - 0x1df8a8
void entry_001df8a0_0x1df8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df8a0_0x1df8a0");
#endif

    ctx->pc = 0x1df8a0u;

    // 0x1df8a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DF8A0u;
    {
        const bool branch_taken_0x1df8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8A0u;
        // 0x1df8a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8a0) {
            ctx->pc = 0x1DF8D0u;
            return;
        }
    }
    ctx->pc = 0x1DF8A8u;
}
