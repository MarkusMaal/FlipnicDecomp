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

// Function: entry_001e06a8
// Address: 0x1e06a8 - 0x1e06b8
void entry_001e06a8_0x1e06a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e06a8_0x1e06a8");
#endif

    ctx->pc = 0x1e06a8u;

    // 0x1e06a8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1e06a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e06ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e06acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e06b0: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x1E06B0u;
    {
        const bool branch_taken_0x1e06b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06B0u;
        // 0x1e06b4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06b0) {
            ctx->pc = 0x1E0944u;
            return;
        }
    }
    ctx->pc = 0x1E06B8u;
}
