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

// Function: entry_0011da50
// Address: 0x11da50 - 0x11da5c
void entry_0011da50_0x11da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011da50_0x11da50");
#endif

    ctx->pc = 0x11da50u;

    // 0x11da50: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x11da50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x11da54: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x11DA54u;
    {
        const bool branch_taken_0x11da54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA54u;
        // 0x11da58: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da54) {
            ctx->pc = 0x11D98Cu;
            return;
        }
    }
    ctx->pc = 0x11DA5Cu;
}
