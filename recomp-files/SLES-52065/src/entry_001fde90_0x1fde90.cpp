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

// Function: entry_001fde90
// Address: 0x1fde90 - 0x1fdea0
void entry_001fde90_0x1fde90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fde90_0x1fde90");
#endif

    ctx->pc = 0x1fde90u;

    // 0x1fde90: 0x2d2b02d  daddu       $s6, $s6, $s2
    ctx->pc = 0x1fde90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 18));
    // 0x1fde94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fde94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDE98u;
    {
        const bool branch_taken_0x1fde98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE98u;
        // 0x1fde9c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde98) {
            ctx->pc = 0x1FDEB8u;
            return;
        }
    }
    ctx->pc = 0x1FDEA0u;
}
