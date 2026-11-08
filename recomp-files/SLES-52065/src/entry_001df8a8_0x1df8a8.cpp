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

// Function: entry_001df8a8
// Address: 0x1df8a8 - 0x1df8b8
void entry_001df8a8_0x1df8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df8a8_0x1df8a8");
#endif

    ctx->pc = 0x1df8a8u;

    // 0x1df8a8: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x1df8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1df8ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF8ACu;
    {
        const bool branch_taken_0x1df8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ACu;
        // 0x1df8b0: 0xac490014  sw          $t1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8ac) {
            ctx->pc = 0x1DF8D4u;
            return;
        }
    }
    ctx->pc = 0x1DF8B4u;
    // 0x1df8b4: 0x0  nop
    ctx->pc = 0x1df8b4u;
    // NOP
    ctx->pc = 0x1df8b8u;
}
