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

// Function: entry_001ffa1c
// Address: 0x1ffa1c - 0x1ffa30
void entry_001ffa1c_0x1ffa1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffa1c_0x1ffa1c");
#endif

    ctx->pc = 0x1ffa1cu;

    // 0x1ffa1c: 0x0  nop
    ctx->pc = 0x1ffa1cu;
    // NOP
    // 0x1ffa20: 0x0  nop
    ctx->pc = 0x1ffa20u;
    // NOP
    // 0x1ffa24: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFA24u;
    {
        const bool branch_taken_0x1ffa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa24) {
            ctx->pc = 0x1FFA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFA24u;
            // 0x1ffa28: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFA10u;
            return;
        }
    }
    ctx->pc = 0x1FFA2Cu;
    // 0x1ffa2c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1ffa2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ffa30u;
}
