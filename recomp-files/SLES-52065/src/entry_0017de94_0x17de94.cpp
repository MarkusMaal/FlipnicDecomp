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

// Function: entry_0017de94
// Address: 0x17de94 - 0x17dea4
void entry_0017de94_0x17de94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017de94_0x17de94");
#endif

    ctx->pc = 0x17de94u;

    // 0x17de94: 0x2a210021  slti        $at, $s1, 0x21
    ctx->pc = 0x17de94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x17de98: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE98u;
    {
        const bool branch_taken_0x17de98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE98u;
        // 0x17de9c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de98) {
            ctx->pc = 0x17DEA4u;
            return;
        }
    }
    ctx->pc = 0x17DEA0u;
    // 0x17dea0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x17dea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x17dea4u;
}
