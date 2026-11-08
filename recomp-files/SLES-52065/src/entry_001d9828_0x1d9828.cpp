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

// Function: entry_001d9828
// Address: 0x1d9828 - 0x1d9830
void entry_001d9828_0x1d9828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9828_0x1d9828");
#endif

    ctx->pc = 0x1d9828u;

    // 0x1d9828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9828u;
    {
        const bool branch_taken_0x1d9828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9828u;
        // 0x1d982c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9828) {
            ctx->pc = 0x1D9838u;
            return;
        }
    }
    ctx->pc = 0x1D9830u;
}
