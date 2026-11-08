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

// Function: entry_001a902c
// Address: 0x1a902c - 0x1a9038
void entry_001a902c_0x1a902c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a902c_0x1a902c");
#endif

    ctx->pc = 0x1a902cu;

    // 0x1a902c: 0x0  nop
    ctx->pc = 0x1a902cu;
    // NOP
    // 0x1a9030: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A9030u;
    {
        const bool branch_taken_0x1a9030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9030u;
        // 0x1a9034: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9030) {
            ctx->pc = 0x1A9068u;
            return;
        }
    }
    ctx->pc = 0x1A9038u;
}
