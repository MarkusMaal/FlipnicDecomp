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

// Function: entry_001791b0
// Address: 0x1791b0 - 0x1791bc
void entry_001791b0_0x1791b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001791b0_0x1791b0");
#endif

    ctx->pc = 0x1791b0u;

    // 0x1791b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1791b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1791b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1791B4u;
    {
        const bool branch_taken_0x1791b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B4u;
        // 0x1791b8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791b4) {
            ctx->pc = 0x179224u;
            return;
        }
    }
    ctx->pc = 0x1791BCu;
}
