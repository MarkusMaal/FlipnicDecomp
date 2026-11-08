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

// Function: entry_001db2b8
// Address: 0x1db2b8 - 0x1db2c0
void entry_001db2b8_0x1db2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db2b8_0x1db2b8");
#endif

    ctx->pc = 0x1db2b8u;

    // 0x1db2b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB2B8u;
    {
        const bool branch_taken_0x1db2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2B8u;
        // 0x1db2bc: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2b8) {
            ctx->pc = 0x1DB2C8u;
            return;
        }
    }
    ctx->pc = 0x1DB2C0u;
}
