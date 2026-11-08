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

// Function: entry_0014403c
// Address: 0x14403c - 0x14404c
void entry_0014403c_0x14403c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014403c_0x14403c");
#endif

    ctx->pc = 0x14403cu;

    // 0x14403c: 0x0  nop
    ctx->pc = 0x14403cu;
    // NOP
    // 0x144040: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x144040u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144044: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x144044u;
    {
        const bool branch_taken_0x144044 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144044u;
        // 0x144048: 0x3c0103ff  lui         $at, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1023 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144044) {
            ctx->pc = 0x14401Cu;
            return;
        }
    }
    ctx->pc = 0x14404Cu;
}
