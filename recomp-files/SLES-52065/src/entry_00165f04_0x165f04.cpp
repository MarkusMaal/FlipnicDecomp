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

// Function: entry_00165f04
// Address: 0x165f04 - 0x165f14
void entry_00165f04_0x165f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165f04_0x165f04");
#endif

    ctx->pc = 0x165f04u;

    // 0x165f04: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x165F04u;
    {
        const bool branch_taken_0x165f04 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x165F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F04u;
        // 0x165f08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f04) {
            ctx->pc = 0x165F14u;
            return;
        }
    }
    ctx->pc = 0x165F0Cu;
    // 0x165f0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x165F0Cu;
    {
        const bool branch_taken_0x165f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165f0c) {
            ctx->pc = 0x165F34u;
            return;
        }
    }
    ctx->pc = 0x165F14u;
}
