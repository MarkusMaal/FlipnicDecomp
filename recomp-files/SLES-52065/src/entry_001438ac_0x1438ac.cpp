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

// Function: entry_001438ac
// Address: 0x1438ac - 0x1438bc
void entry_001438ac_0x1438ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001438ac_0x1438ac");
#endif

    ctx->pc = 0x1438acu;

    // 0x1438ac: 0x0  nop
    ctx->pc = 0x1438acu;
    // NOP
    // 0x1438b0: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x1438b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1438b4: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1438B4u;
    {
        const bool branch_taken_0x1438b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1438B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438B4u;
        // 0x1438b8: 0x3c0107ff  lui         $at, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438b4) {
            ctx->pc = 0x14388Cu;
            return;
        }
    }
    ctx->pc = 0x1438BCu;
}
