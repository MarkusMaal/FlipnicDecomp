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

// Function: entry_001ec514
// Address: 0x1ec514 - 0x1ec51c
void entry_001ec514_0x1ec514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec514_0x1ec514");
#endif

    ctx->pc = 0x1ec514u;

    // 0x1ec514: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EC514u;
    {
        const bool branch_taken_0x1ec514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC514u;
        // 0x1ec518: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec514) {
            ctx->pc = 0x1EC554u;
            return;
        }
    }
    ctx->pc = 0x1EC51Cu;
}
