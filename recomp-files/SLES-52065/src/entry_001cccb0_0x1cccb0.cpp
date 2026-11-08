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

// Function: entry_001cccb0
// Address: 0x1cccb0 - 0x1cccbc
void entry_001cccb0_0x1cccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cccb0_0x1cccb0");
#endif

    ctx->pc = 0x1cccb0u;

    // 0x1cccb0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1cccb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCCB4u;
    {
        const bool branch_taken_0x1cccb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCB4u;
        // 0x1cccb8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccb4) {
            ctx->pc = 0x1CCCCCu;
            return;
        }
    }
    ctx->pc = 0x1CCCBCu;
}
