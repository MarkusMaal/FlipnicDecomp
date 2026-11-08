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

// Function: entry_00193c4c
// Address: 0x193c4c - 0x193c54
void entry_00193c4c_0x193c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193c4c_0x193c4c");
#endif

    ctx->pc = 0x193c4cu;

    // 0x193c4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x193C4Cu;
    {
        const bool branch_taken_0x193c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C4Cu;
        // 0x193c50: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c4c) {
            ctx->pc = 0x193C68u;
            return;
        }
    }
    ctx->pc = 0x193C54u;
}
