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

// Function: entry_0018b6f0
// Address: 0x18b6f0 - 0x18b700
void entry_0018b6f0_0x18b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b6f0_0x18b6f0");
#endif

    ctx->pc = 0x18b6f0u;

    // 0x18b6f0: 0x1ea00003  bgtz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6F0u;
    {
        const bool branch_taken_0x18b6f0 = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x18B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6F0u;
        // 0x18b6f4: 0x24042730  addiu       $a0, $zero, 0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6f0) {
            ctx->pc = 0x18B700u;
            return;
        }
    }
    ctx->pc = 0x18B6F8u;
    // 0x18b6f8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x18B6F8u;
    {
        const bool branch_taken_0x18b6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6F8u;
        // 0x18b6fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6f8) {
            ctx->pc = 0x18B870u;
            return;
        }
    }
    ctx->pc = 0x18B700u;
}
