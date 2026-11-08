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

// Function: entry_00208160
// Address: 0x208160 - 0x208168
void entry_00208160_0x208160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208160_0x208160");
#endif

    ctx->pc = 0x208160u;

    // 0x208160: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208160u;
    {
        const bool branch_taken_0x208160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208160u;
        // 0x208164: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208160) {
            ctx->pc = 0x208184u;
            return;
        }
    }
    ctx->pc = 0x208168u;
}
