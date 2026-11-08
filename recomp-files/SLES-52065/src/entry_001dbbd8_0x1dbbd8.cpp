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

// Function: entry_001dbbd8
// Address: 0x1dbbd8 - 0x1dbbe8
void entry_001dbbd8_0x1dbbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbbd8_0x1dbbd8");
#endif

    ctx->pc = 0x1dbbd8u;

    // 0x1dbbd8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBBD8u;
    {
        const bool branch_taken_0x1dbbd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dbbd8) {
            ctx->pc = 0x1DBBF8u;
            return;
        }
    }
    ctx->pc = 0x1DBBE0u;
    // 0x1dbbe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBBE0u;
    {
        const bool branch_taken_0x1dbbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBE0u;
        // 0x1dbbe4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbe0) {
            ctx->pc = 0x1DBBF4u;
            return;
        }
    }
    ctx->pc = 0x1DBBE8u;
}
