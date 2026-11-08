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

// Function: entry_0018b6c8
// Address: 0x18b6c8 - 0x18b6d8
void entry_0018b6c8_0x18b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b6c8_0x18b6c8");
#endif

    ctx->pc = 0x18b6c8u;

    // 0x18b6c8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6C8u;
    {
        const bool branch_taken_0x18b6c8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x18B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6C8u;
        // 0x18b6cc: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6c8) {
            ctx->pc = 0x18B6D8u;
            return;
        }
    }
    ctx->pc = 0x18B6D0u;
    // 0x18b6d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B6D0u;
    {
        const bool branch_taken_0x18b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6d0) {
            ctx->pc = 0x18B6F0u;
            return;
        }
    }
    ctx->pc = 0x18B6D8u;
}
