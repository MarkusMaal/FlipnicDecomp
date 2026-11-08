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

// Function: entry_001e4e0c
// Address: 0x1e4e0c - 0x1e4e1c
void entry_001e4e0c_0x1e4e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4e0c_0x1e4e0c");
#endif

    ctx->pc = 0x1e4e0cu;

    // 0x1e4e0c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4E0Cu;
    {
        const bool branch_taken_0x1e4e0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E0Cu;
        // 0x1e4e10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e0c) {
            ctx->pc = 0x1E4E1Cu;
            return;
        }
    }
    ctx->pc = 0x1E4E14u;
    // 0x1e4e14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4E14u;
    {
        const bool branch_taken_0x1e4e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e14) {
            ctx->pc = 0x1E4E30u;
            return;
        }
    }
    ctx->pc = 0x1E4E1Cu;
}
