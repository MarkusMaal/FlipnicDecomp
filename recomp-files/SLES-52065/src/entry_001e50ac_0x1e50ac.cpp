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

// Function: entry_001e50ac
// Address: 0x1e50ac - 0x1e50bc
void entry_001e50ac_0x1e50ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e50ac_0x1e50ac");
#endif

    ctx->pc = 0x1e50acu;

    // 0x1e50ac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E50ACu;
    {
        const bool branch_taken_0x1e50ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e50ac) {
            ctx->pc = 0x1E50BCu;
            return;
        }
    }
    ctx->pc = 0x1E50B4u;
    // 0x1e50b4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E50B4u;
    {
        const bool branch_taken_0x1e50b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50B4u;
        // 0x1e50b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50b4) {
            ctx->pc = 0x1E50BCu;
            return;
        }
    }
    ctx->pc = 0x1E50BCu;
}
