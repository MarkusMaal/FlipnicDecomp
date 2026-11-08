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

// Function: entry_00208e04
// Address: 0x208e04 - 0x208e0c
void entry_00208e04_0x208e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208e04_0x208e04");
#endif

    ctx->pc = 0x208e04u;

    // 0x208e04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208E04u;
    {
        const bool branch_taken_0x208e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E04u;
        // 0x208e08: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e04) {
            ctx->pc = 0x208E28u;
            return;
        }
    }
    ctx->pc = 0x208E0Cu;
}
