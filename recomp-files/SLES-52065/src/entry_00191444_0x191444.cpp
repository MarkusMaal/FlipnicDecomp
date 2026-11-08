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

// Function: entry_00191444
// Address: 0x191444 - 0x191454
void entry_00191444_0x191444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191444_0x191444");
#endif

    ctx->pc = 0x191444u;

    // 0x191444: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191444u;
    {
        const bool branch_taken_0x191444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191444) {
            ctx->pc = 0x191454u;
            return;
        }
    }
    ctx->pc = 0x19144Cu;
    // 0x19144c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19144Cu;
    {
        const bool branch_taken_0x19144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19144Cu;
        // 0x191450: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19144c) {
            ctx->pc = 0x19145Cu;
            return;
        }
    }
    ctx->pc = 0x191454u;
}
