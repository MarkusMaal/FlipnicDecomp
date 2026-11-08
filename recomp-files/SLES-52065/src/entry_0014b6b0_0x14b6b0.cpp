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

// Function: entry_0014b6b0
// Address: 0x14b6b0 - 0x14b6b8
void entry_0014b6b0_0x14b6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b6b0_0x14b6b0");
#endif

    ctx->pc = 0x14b6b0u;

    // 0x14b6b0: 0x1000ff84  b           . + 4 + (-0x7C << 2)
    ctx->pc = 0x14B6B0u;
    {
        const bool branch_taken_0x14b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6B0u;
        // 0x14b6b4: 0x2238823  subu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6b0) {
            ctx->pc = 0x14B4C4u;
            return;
        }
    }
    ctx->pc = 0x14B6B8u;
}
