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

// Function: entry_001fcb48
// Address: 0x1fcb48 - 0x1fcb50
void entry_001fcb48_0x1fcb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcb48_0x1fcb48");
#endif

    ctx->pc = 0x1fcb48u;

    // 0x1fcb48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FCB48u;
    {
        const bool branch_taken_0x1fcb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB48u;
        // 0x1fcb4c: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb48) {
            ctx->pc = 0x1FCB78u;
            return;
        }
    }
    ctx->pc = 0x1FCB50u;
}
