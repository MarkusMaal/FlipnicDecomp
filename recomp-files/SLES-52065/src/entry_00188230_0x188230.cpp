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

// Function: entry_00188230
// Address: 0x188230 - 0x188238
void entry_00188230_0x188230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188230_0x188230");
#endif

    ctx->pc = 0x188230u;

    // 0x188230: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188230u;
    {
        const bool branch_taken_0x188230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188230u;
        // 0x188234: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188230) {
            ctx->pc = 0x18824Cu;
            return;
        }
    }
    ctx->pc = 0x188238u;
}
