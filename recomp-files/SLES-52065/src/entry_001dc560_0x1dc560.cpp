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

// Function: entry_001dc560
// Address: 0x1dc560 - 0x1dc568
void entry_001dc560_0x1dc560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc560_0x1dc560");
#endif

    ctx->pc = 0x1dc560u;

    // 0x1dc560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC560u;
    {
        const bool branch_taken_0x1dc560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC560u;
        // 0x1dc564: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc560) {
            ctx->pc = 0x1DC570u;
            return;
        }
    }
    ctx->pc = 0x1DC568u;
}
