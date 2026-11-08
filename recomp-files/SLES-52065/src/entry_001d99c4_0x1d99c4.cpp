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

// Function: entry_001d99c4
// Address: 0x1d99c4 - 0x1d99d0
void entry_001d99c4_0x1d99c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d99c4_0x1d99c4");
#endif

    ctx->pc = 0x1d99c4u;

    // 0x1d99c4: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D99C4u;
    {
        const bool branch_taken_0x1d99c4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99C4u;
        // 0x1d99c8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99c4) {
            ctx->pc = 0x1D99A0u;
            return;
        }
    }
    ctx->pc = 0x1D99CCu;
    // 0x1d99cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d99ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d99d0u;
}
