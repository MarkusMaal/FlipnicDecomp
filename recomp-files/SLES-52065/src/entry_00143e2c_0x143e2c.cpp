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

// Function: entry_00143e2c
// Address: 0x143e2c - 0x143e3c
void entry_00143e2c_0x143e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143e2c_0x143e2c");
#endif

    ctx->pc = 0x143e2cu;

    // 0x143e2c: 0x0  nop
    ctx->pc = 0x143e2cu;
    // NOP
    // 0x143e30: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x143e30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x143e34: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x143E34u;
    {
        const bool branch_taken_0x143e34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E34u;
        // 0x143e38: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e34) {
            ctx->pc = 0x143F80u;
            return;
        }
    }
    ctx->pc = 0x143E3Cu;
}
