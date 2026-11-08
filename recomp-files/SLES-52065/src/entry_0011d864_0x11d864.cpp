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

// Function: entry_0011d864
// Address: 0x11d864 - 0x11d870
void entry_0011d864_0x11d864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d864_0x11d864");
#endif

    ctx->pc = 0x11d864u;

    // 0x11d864: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x11d864u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x11d868: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x11D868u;
    {
        const bool branch_taken_0x11d868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D868u;
        // 0x11d86c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d868) {
            ctx->pc = 0x11D7C4u;
            return;
        }
    }
    ctx->pc = 0x11D870u;
}
