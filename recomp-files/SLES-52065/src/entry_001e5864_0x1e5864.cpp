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

// Function: entry_001e5864
// Address: 0x1e5864 - 0x1e5870
void entry_001e5864_0x1e5864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5864_0x1e5864");
#endif

    ctx->pc = 0x1e5864u;

    // 0x1e5864: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1e5864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1e5868: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E5868u;
    {
        const bool branch_taken_0x1e5868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5868u;
        // 0x1e586c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5868) {
            ctx->pc = 0x1E58DCu;
            return;
        }
    }
    ctx->pc = 0x1E5870u;
}
