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

// Function: entry_001c86b0
// Address: 0x1c86b0 - 0x1c86bc
void entry_001c86b0_0x1c86b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c86b0_0x1c86b0");
#endif

    ctx->pc = 0x1c86b0u;

    // 0x1c86b0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1c86b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C86B4u;
    {
        const bool branch_taken_0x1c86b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86B4u;
        // 0x1c86b8: 0x24110012  addiu       $s1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86b4) {
            ctx->pc = 0x1C86C0u;
            return;
        }
    }
    ctx->pc = 0x1C86BCu;
}
