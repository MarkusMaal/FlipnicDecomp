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

// Function: entry_0020ad90
// Address: 0x20ad90 - 0x20ad9c
void entry_0020ad90_0x20ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ad90_0x20ad90");
#endif

    ctx->pc = 0x20ad90u;

    // 0x20ad90: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20ad94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20AD94u;
    {
        const bool branch_taken_0x20ad94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD94u;
        // 0x20ad98: 0x24845dc8  addiu       $a0, $a0, 0x5DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad94) {
            ctx->pc = 0x20ADBCu;
            return;
        }
    }
    ctx->pc = 0x20AD9Cu;
}
