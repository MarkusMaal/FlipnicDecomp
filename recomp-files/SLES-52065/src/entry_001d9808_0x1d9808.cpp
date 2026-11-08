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

// Function: entry_001d9808
// Address: 0x1d9808 - 0x1d9810
void entry_001d9808_0x1d9808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9808_0x1d9808");
#endif

    ctx->pc = 0x1d9808u;

    // 0x1d9808: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D9808u;
    {
        const bool branch_taken_0x1d9808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9808u;
        // 0x1d980c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9808) {
            ctx->pc = 0x1D9838u;
            return;
        }
    }
    ctx->pc = 0x1D9810u;
}
