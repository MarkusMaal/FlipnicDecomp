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

// Function: entry_00198138
// Address: 0x198138 - 0x198140
void entry_00198138_0x198138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198138_0x198138");
#endif

    ctx->pc = 0x198138u;

    // 0x198138: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x198138u;
    {
        const bool branch_taken_0x198138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198138u;
        // 0x19813c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198138) {
            ctx->pc = 0x198094u;
            return;
        }
    }
    ctx->pc = 0x198140u;
}
