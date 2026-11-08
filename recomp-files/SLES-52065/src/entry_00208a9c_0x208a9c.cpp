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

// Function: entry_00208a9c
// Address: 0x208a9c - 0x208aa8
void entry_00208a9c_0x208a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208a9c_0x208a9c");
#endif

    ctx->pc = 0x208a9cu;

    // 0x208a9c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x208a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x208aa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208AA0u;
    {
        const bool branch_taken_0x208aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AA0u;
        // 0x208aa4: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208aa0) {
            ctx->pc = 0x208AB0u;
            return;
        }
    }
    ctx->pc = 0x208AA8u;
}
