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

// Function: entry_001e5cf0
// Address: 0x1e5cf0 - 0x1e5d04
void entry_001e5cf0_0x1e5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5cf0_0x1e5cf0");
#endif

    ctx->pc = 0x1e5cf0u;

    // 0x1e5cf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5cf4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5CF4u;
    {
        const bool branch_taken_0x1e5cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5cf4) {
            ctx->pc = 0x1E5D04u;
            return;
        }
    }
    ctx->pc = 0x1E5CFCu;
    // 0x1e5cfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5CFCu;
    {
        const bool branch_taken_0x1e5cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CFCu;
        // 0x1e5d00: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cfc) {
            ctx->pc = 0x1E5D20u;
            return;
        }
    }
    ctx->pc = 0x1E5D04u;
}
