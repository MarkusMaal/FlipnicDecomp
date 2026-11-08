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

// Function: entry_001aa2f0
// Address: 0x1aa2f0 - 0x1aa2fc
void entry_001aa2f0_0x1aa2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa2f0_0x1aa2f0");
#endif

    ctx->pc = 0x1aa2f0u;

    // 0x1aa2f0: 0x2a610003  slti        $at, $s3, 0x3
    ctx->pc = 0x1aa2f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1aa2f4: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AA2F4u;
    {
        const bool branch_taken_0x1aa2f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2F4u;
        // 0x1aa2f8: 0x138080  sll         $s0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2f4) {
            ctx->pc = 0x1AA344u;
            return;
        }
    }
    ctx->pc = 0x1AA2FCu;
}
