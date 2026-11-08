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

// Function: entry_001e62e4
// Address: 0x1e62e4 - 0x1e62f0
void entry_001e62e4_0x1e62e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e62e4_0x1e62e4");
#endif

    ctx->pc = 0x1e62e4u;

    // 0x1e62e4: 0x0  nop
    ctx->pc = 0x1e62e4u;
    // NOP
    // 0x1e62e8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1E62E8u;
    {
        const bool branch_taken_0x1e62e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62E8u;
        // 0x1e62ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62e8) {
            ctx->pc = 0x1E6370u;
            return;
        }
    }
    ctx->pc = 0x1E62F0u;
}
